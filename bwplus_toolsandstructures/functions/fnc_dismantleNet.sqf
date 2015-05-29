#include "script_component.hpp"

#define DISMENTLETIME 5
#define NET "BWplus_Item_CamoNet_Dismantled"

PARAMS_2(_net,_player);

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call ACE_common_fnc_doAnimation;
SETPVAR(_player,BWplus_building,true);

BWplus_buildNetCallback = {
 	private ["_pos"];
	PARAMS_1(_parameter);
	EXPLODE_2_PVT(_parameter,_net,_player);
 	
	_pos = position _player;
 	deletevehicle _net;
 	_net = createVehicle [NET, _pos, [], 0, "CAN_COLLIDE"];
 	[_player, "AmovPknlMstpSrasWrflDnon", 1] call ACE_common_fnc_doAnimation;
 	SETPVAR(_player,BWplus_building,false);
};

[DISMENTLETIME, [_net,_player], BWplus_buildNetCallback , {_this call EFUNC(main,BuildAbort)}, localize "STR_BWplus_toolsandstructures_DismantlingNet"] call ace_common_fnc_progressBar;