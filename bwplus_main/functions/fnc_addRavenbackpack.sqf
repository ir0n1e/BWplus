/*
	Author: Ir0n1E

	Description:
	Adds TFR backpack to player or object cargo

	Parameter(s):
	#0 OBJECT - Player/Vehicle/Box
	#1 NUMBER - Optional - Backpack count (default 1)

	Returns:
	none
*/
_this spawn {

	#include "script_component.hpp"

	CHECK(!(isClass(configFile/"CfgPatches"/"MicroAirVehicles")))

	PARAMS_1(_object);
	DEFAULT_PARAM(1,_count,1);

	#define	RAVEN "B_MAV_B_BACKPACK"

	if (typeOf _object isKindOf "Men") then {
		_object addBackpack RAVEN;
	} else {
		_object addBackpackCargoGlobal [RAVEN, _count];
	};
};