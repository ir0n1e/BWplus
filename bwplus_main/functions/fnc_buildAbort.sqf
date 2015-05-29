/*
	Author: 

	Description:
	
	Parameter(s):
	#1 OBJECT - Player

	Returns:
	none
*/
#include "script_component.hpp"
PARAMS_1(_parameter);
EXPLODE_1_PVT(_parameter,_player);

SETPVAR(_player,BWplus_building,false);
[_player, "AmovPknlMstpSrasWrflDnon", 1] call ACE_common_fnc_doAnimation;