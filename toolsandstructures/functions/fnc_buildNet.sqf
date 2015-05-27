#include "script_component.hpp"

#define BUILDTIME 10
#define ITEMNET "BWplus_CamoNet_Dismantled"

PARAMS_1(_player);

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call ACE_common_fnc_doAnimation;
SETPVAR(_player,BWplus_building,true);

BWplus_buildNetCallback = {
	private ["_pos", "_net"];
 	PARAMS_1(_parameter)
	EXPLODE_1_PVT(_parameter,_player);
	
	_player removeitem ITEMNET;
 	_pos = position _player;
 	_net = createVehicle ["BWplus_CamoNet", _pos, [], 0, "CAN_COLLIDE"];
 	_net setdir (getdir _player)+180;
 	[_player, "AmovPknlMstpSrasWrflDnon", 1] call ACE_common_fnc_doAnimation;
 	
	SETPVAR(_player,BWplus_building,false);

};
[BUILDTIME, [_player], BWplus_buildNetCallback , {_this call EFUNC(main,BuildAbort)}, localize "STR_BWplus_toolsandstructures_BuildingNet"] call ace_common_fnc_progressBar;
