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

if !(isClass(configfile >> "CfgPatches" >> "task_force_radio_items")) exitWith {};

private ["_object", "_backpack", "_count"];

_object 	= _this select 0;
_backpack 	= _this select 1;
_count 		= 1;

if (count _this > 2) then {
	_count = _this select 2;
};

if (typeOf _object isKindOf "Men") then {
	_object addBackpack _backpack;
} else {
	_object addBackpackCargoGlobal [_backpack, _count];
};
