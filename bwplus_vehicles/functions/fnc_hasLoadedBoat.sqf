/*
    Author: Ir0n1E

    Description:
    Check if boats are loaded

    Parameter(s):
    #0 OBJECT - Vehicle to check

    Returns:
    BOOL - TRUE when done
*/

#include "script_component.hpp"


private ["_vehicle", "_result", "_attachPoints"];

_vehicle	= _this select 0;
_result 	= false;

if (isClass (configFile >> "CfgVehicles" >> typeOf(_vehicle) >> "AGM_Load")) then {
	_attachPoints = (_vehicle) call AGM_Logistics_fnc_getLoadPoints;
	{
		{
            if (typeOf _x isKindOf "Ship") exitWith {
            	_result = true;
            };
        } foreach (_x select 3);
	} count _attachPoints;
} else {

	{
            if (typeOf _x isKindOf "Ship") exitWith {
            	_result = true;
            };
        } foreach  (_vehicle getVariable ["AGM_Logistics_loadedItems", []]);

};

_result
