#define FOBBOX "BWplus_Box_Cargo"
#define FOBLIGHTS "Land_PortableLight_double_F"
#define FOBENGINE "Land_SolarPanel_1_F"

private ["_vec", "_pos","_net","_dir","_box","_pos_rel","_engine"];

_vec 	= _this select 0;
_net 	= _this select 1;
_pos 	= position _vec;
_dir 	= getdir _vec;
_items 	= [];

_vec setVariable ["BWplus_VecEngineer",false,true];

_pos_rel = [_vec, 5.8, _dir+100] call BIS_fnc_relPos;
_box = FOBBOX createVehicle _pos;
_box allowdamage false;
_box setpos _pos_rel;
_box setdir _dir;
_items pushback _box;
//waitUntil {alive _box};


_pos_rel = [_pos, 4, _dir-210] call BIS_fnc_relPos;
_lights = FOBLIGHTS createVehicle _pos_rel;
_lights setpos _pos_rel;
_lights setdir _dir+250;
_items pushback _lights;


if (_net) then {
	_pos_rel = [_vec, 3, _dir+100] call BIS_fnc_relPos;
	_net = "CamoNet_INDP_big_F" createvehicle _pos_rel;
	_net setpos _pos_rel;
	_net setdir (_dir+210);
	_net allowDamage false;
	_items pushback _net;
};

_pos_rel = [_vec, 10, _dir+10] call BIS_fnc_relPos;
_engine = FOBENGINE createVehicle _pos_rel;
_engine setpos _pos_rel;
_engine setdir _dir+130;
_items pushback _net;

_vec setvariable ["BWplus_FOBon",true,true];
_vec setVariable ["BWplus_VecEngineer",true,true];
_vec setVariable ["BWplus_FOBItems", _items, true];
