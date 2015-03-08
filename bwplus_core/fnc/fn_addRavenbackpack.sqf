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

if !(isClass(configFile/"CfgPatches"/"MicroAirVehicles")) exitWith {};

#define	RAVEN "B_MAV_B_BACKPACK"

private ["_object", "_count"];

_object = _this select 0;
_count 	= 1;

if (count _this > 1) then {
	_count = _this select 1;
};

if (typeOf _object isKindOf "Men") then {
	_object addBackpack RAVEN;
} else {
	_object addBackpackCargoGlobal [RAVEN, _count];
};
