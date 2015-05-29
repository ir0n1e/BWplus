
#include "script_component.hpp"

#define BUILDTIME_PIO 30
#define BUILDTIME_NONPIO 45
#define MAXCRATER_PIO 2
#define MAXCRATER_NONPIO 1
#define CRATER "BWplus_crater"
#define NET "BWplus_CamoNet"

private ["_buildwithNet","_buildtime","_maxcrater","_crater","_net","_items","_crater_count"];
PARAMS_1(_buildwithNet);

_buildtime = BUILDTIME_NONPIO;
_maxcrater = MAXCRATER_NONPIO;

_crater = CRATER createVehicle [0,0,0];
_net = objNull;


if (GETVAR(ACE_player,BWplus_pio,false)) then {
    _buildtime = BUILDTIME_PIO;
    _maxcrater = MAXCRATER_PIO;
};
if (_buildwithNet) then {
    _net = NET createVehicle [0,0,0];
};

_items = [_crater,_net];
_crater_count = GETVAR(ACE_player,BWplus_crater_count, 0);

SETPVAR(ACE_player,BWplus_building,true);
SETVAR(ACE_player,BWplus_crater_abort,false);

BWplus_buildCrater = {
	_this spawn {
		private ["_time","_items","_buildwithNet","_dir_crater","_pos_rel_crater","_net","_crater","_end_pos_rel","_end_pos_relnet","_start_pos_relnet","_start_pos_rel","_dir","_pos_rel"];
		PARAMS_3(_time,_items,_buildwithNet);
		EXPLODE_2_PVT(_items,_net,_crater);
		_dir_crater = getdir ACE_player;
		_pos_rel_crater = [ACE_player, 5, _dir_crater] call BIS_fnc_relPos;
		_end_pos_rel = (_pos_rel_crater select 2) - 0.2;
		_end_pos_relnet = _end_pos_rel - 062;
		_start_pos_relnet = _end_pos_rel - 2;
		_start_pos_rel = _end_pos_rel - 0.5;

		for "_i" from 0 to (_time -1) do {
			scopeName "loop";
			[ACE_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call ACE_common_fnc_doAnimation;
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
			
			if (GETVAR(ACE_player,BWplus_crater_abort,false)) then {
				breakOut "loop";
			};
		};

		if (!(GETVAR(ACE_player,BWplus_crater_abort,true))) then {
			_crater setpos [_pos_rel_crater select 0,_pos_rel_crater select 1,_end_pos_rel];
			_crater setdir _dir_crater+270;
			if (_buildwithNet) then {
				_dir = getdir _crater;
				_pos_rel = [_crater, 0.5, _dir+260] call BIS_fnc_relPos;
				_net setpos [_pos_rel select 0,_pos_rel select 1,_start_pos_relnet-(_start_pos_relnet/(_time max 0.001))];
				_net setdir _dir+260;
			};
		};
	};
};
[_buildtime, [_items, _crater_count, ACE_player, _buildwithNet], {_this call FUNC(buildCraterCallback);}, {_this call FUNC(buildCraterAbort);}, localize "STR_BWplus_toolsandstructures_BuildingCrater"] call ace_common_fnc_progressBar;
[_buildtime,_items, _buildwithNet] call  BWplus_buildCrater;
