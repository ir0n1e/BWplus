
#include "script_component.hpp"
#define BUILDTIME 10
#define HELIPAD "Land_HelipadSquare_F"
#define LIGHT "PortableHelipadLight_01_blue_F"


PARAMS_1(_player);
[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call ACE_common_fnc_doAnimation;
SETPVAR(_player,BWplus_building,true);

playSound3D ["BWplus_weapons\sounds\Spray.wss", _player, false, getPosASL _player, 20, 1, 6];

BWplus_buildHelipadCallback = {
	private ["_pad","_pos", "_dir", "_light","_items"];
	PARAMS_1(_parameter);
	EXPLODE_2_PVT(_parameter,_box,_player);
	
	_angel = 45;
	_pos = position _box;

	_pad = HELIPAD createVehicle [0,0,0];
	_pad setpos _pos;
	_dir = getdir _pad;
	_items = [_pad];

	for "_i" from 0 to 3 do {
		_pos_rel = [_pad, 12, (_dir + _angel)] call BIS_fnc_relPos;
		_light = LIGHT createVehicle _pos_rel;
		_light setpos _pos_rel;
		_angel = (_angel + 90);
		_items pushback _light;
	};

	_player removeitem "BWplus_Spraycan";
	_player additem "BWplus_Spraycan_Empty";

 	[_player, "AmovPknlMstpSrasWrflDnon", 1] call ACE_common_fnc_doAnimation;

 	SETPVAR(_player,BWplus_building,false);
	SETPVAR(_box,BWplus_boxEmpty,true);
	SETPVAR(_box,BWplus_padItems,_items);
};

[BUILDTIME, _this, BWplus_buildHelipadCallback , {_this call EFUNC(main,BuildAbort)}, localize "STR_BWplus_toolsandstructures_BuildingHelipad"] call ace_common_fnc_progressBar;
