#define BUILDTIME_PIO 30
#define BUILDTIME_NONPIO 45
#define MAXCRATER_PIO 2
#define MAXCRATER_NONPIO 1
#define CRATER "BWplus_crater"
#define NET "BWplus_CamoNet"
#define ITEMNET "BWplus_Item_CamoNet"

private ["_buildwithNet","_buildtime","_maxcrater","_crater","_net","_items","_crater_count"];

_buildwithNet = _this select 0;
_buildtime = BUILDTIME_NONPIO;
_maxcrater = MAXCRATER_NONPIO;

_crater = CRATER createVehicle [0,0,0];
_net = objNull;


if (AGM_player getVariable ["BWplus_pio", false]) then {
    _buildtime = BUILDTIME_PIO;
    _maxcrater = MAXCRATER_PIO;
};
if (_buildwithNet) then {
    _net = NET createVehicle [0,0,0];
};

_items = [_crater,_net];
_crater_count = (AGM_player getvariable ["BWplus_crater_count", 0]);

AGM_player setVariable ["BWplus_building",true,true];
AGM_player setVariable ["BWplus_crater_abort",false];

BWplus_buildCrater = {
    private ["_time","_items","_buildwithNet","_dir_crater","_pos_rel_crater","_net","_crater","_end_pos_rel","_end_pos_relnet","_start_pos_relnet","_start_pos_rel","_dir","_pos_rel"];

    _time = _this select 0;
    _items = _this select 1;
    _buildwithNet = _this select 2;
    _dir_crater = getdir AGM_player;
    _pos_rel_crater = [AGM_player, 5, _dir_crater] call BIS_fnc_relPos;
    _net = _items select 1;
    _crater = _items select 0;

    _end_pos_rel = (_pos_rel_crater select 2) - 0.2;
    _end_pos_relnet = _end_pos_rel - 0.62;
    _start_pos_relnet = _end_pos_rel - 2;
    _start_pos_rel = _end_pos_rel - 0.5;

    for "_i" from 0 to (_time -1) do {
        scopeName "loop";
        [AGM_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call AGM_Core_fnc_doAnimation;
        _crater setpos [_pos_rel_crater select 0,_pos_rel_crater select 1,_start_pos_rel - (_start_pos_rel/_time) ];

        _crater setdir _dir_crater+270;
    if (_buildwithNet) then {
        _dir = getdir _crater;
        _pos_rel = [_crater, 0.5, _dir+260] call BIS_fnc_relPos;
        _net setpos [_pos_rel select 0,_pos_rel select 1,_start_pos_relnet-(_start_pos_relnet/_time)];
        _net setdir _dir+260;
    };
        _time = _time -1;

        sleep 1;
        if (AGM_player getVariable ["BWplus_crater_abort",false]) then {
            breakOut "loop";
        };
    };

    if (not (AGM_player getVariable "BWplus_crater_abort")) then {
        _crater setpos [_pos_rel_crater select 0,_pos_rel_crater select 1,_end_pos_rel];
        _crater setdir _dir_crater+270;
        if (_buildwithNet) then {
            _dir = getdir _crater;
            _pos_rel = [_crater, 0.5, _dir+260] call BIS_fnc_relPos;
            _net setpos [_pos_rel select 0,_pos_rel select 1,_end_pos_relnet];
            _net setdir _dir+260;
        };
    };
};
/*
if ((AGM_player getvariable "BWplus_crater_count") >= _maxcrater) exitwith {
    [_items, _crater_count, AGM_player] call BWplus_fnc_buildCraterAbort
};
*/
 [_buildtime, [_items, _crater_count, AGM_player, _buildwithNet], "BWplus_toolsandstructures_fnc_buildCraterCallback", localize "STR_BWplus_toolsandstructures_BuildingCrater","BWplus_toolsandstructures_fnc_buildCraterAbort"] call AGM_Core_fnc_progressBar;
 [_buildtime,_items, _buildwithNet] spawn  BWplus_buildCrater;
