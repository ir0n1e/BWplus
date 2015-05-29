#include "script_component.hpp"

#define BUILDTIME 5
#define ITEMSATBAG "BWplus_Satbag"
PARAMS_1(_player);

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call ACE_common_fnc_doAnimation;
SETPVAR(_player,BWplus_building,true);

BWplus_buildSatcomCallback = {
	PARAMS_1(_parameter);
	EXPLODE_2_PVT(_parameter,_satcom,_player);
	private ["_dir"];
 	_dir = getdir _player;
	_player removeitem ITEMSATBAG;

 	_satcom = createVehicle ["BWplus_Satcom", [_player, 0.6, _dir] call BIS_fnc_relPos, [], 0, "CAN_COLLIDE"];
 	_satcom setdir _dir;
 	[_player, "AmovPknlMstpSrasWrflDnon", 1] call ACE_common_fnc_doAnimation;
	SETPVAR(_player,BWplus_building,false);

};
[BUILDTIME, ["", _player], BWplus_buildSatcomCallback, {_this call EFUNC(main,BuildAbort);}, localize "STR_BWplus_communications_BuildingSatcom"] call ace_common_fnc_progressBar;
 
