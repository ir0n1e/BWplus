#include "script_component.hpp"
#define DISMENTLETIME 5
#define SATCOM "BWplus_Item_Satbag"
PARAMS_2(_satcom,_player);

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call ACE_common_fnc_doAnimation;
SETPVAR(_player,BWplus_building,true);

BWplus_dismantleSatcomCallback = {
	PARAMS_1(_parameter);
	EXPLODE_2_PVT(_parameter,_satcom,_player);
	private ["_pos"];
 	_pos = getpos _satcom;
 	deletevehicle _satcom;
 	_net = createVehicle [SATCOM, _pos, [], 0, "CAN_COLLIDE"];
 	[_player, "AmovPknlMstpSrasWrflDnon", 1] call ACE_common_fnc_doAnimation;
 	SETPVAR(_player,BWplus_building,false);
};

[DISMENTLETIME, [_satcom, _player], BWplus_dismantleSatcomCallback, {_this call EFUNC(main,BuildAbort);}, localize "STR_BWplus_communications_DismantlingSatcom"] call ace_common_fnc_progressBar;