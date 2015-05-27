/*
	Author: 

	Description:
	
	Parameter(s):
	#1 OBJECT - Player

	Returns:
	none
*/
#include "script_component.hpp"

private "_player";
_player = _this select 1;

SETPVAR(_player,BWplus_building,false);
[_player, "AmovPknlMstpSrasWrflDnon", 1] call ACE_common_fnc_doAnimation;