#include "script_component.hpp"

#define DISMANTLETIME 10

private "_player";

_player = _this select 1;
SETPVAR(_player,BWplus_building,true);

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call ACE_common_fnc_doAnimation;

BWplus_dismantleHelipadCallback = {
	private ["_player", "_items"];
	PARAMS_1(_box,_player);
	
	{
		deleteVehicle _x;
	} forEach (GETVAR(_box,BWplus_padItems,[]));

	[_player, "AmovPknlMstpSrasWrflDnon", 1] call ACE_common_fnc_doAnimation;
	SETPVAR(_player,BWplus_building,false);
	SETPVAR(_box,BWplus_boxEmpty,false);
};

[DISMANTLETIME, _this, BWplus_dismantleHelipadCallback , {_this call EFUNC(main,BuildAbort)}, localize "STR_BWplus_toolsandstructures_DismantlingHelipad"] call ace_common_fnc_progressBar;
