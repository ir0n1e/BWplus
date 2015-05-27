/*
	Author: Ir0n1E

	Description:
	Adds TFR backpack to player or object cargo

	Parameter(s):
	#0 OBJECT - Player/Vehicle/Box
	#1 STRING - TFR backpack classname
	#2 NUMBER - Optional - Backpack count (default 1)

	Returns:
	none
*/
_this spawn {
	#include "script_component.hpp"

	CHECK(!(isClass(configfile >> "CfgPatches" >> "task_force_radio_items")))

	PARAMS_2(_object,_backpack)
	DEFAULT_PARAM(2,_count,1);

	if (typeOf _object isKindOf "Men") then {
		_object addBackpack _backpack;
	} else {
		_object addBackpackCargoGlobal [_backpack, _count];
	};
};