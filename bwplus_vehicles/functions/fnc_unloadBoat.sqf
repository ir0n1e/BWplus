/*
    Author: Ir0n1E

    Description:
    Unload Boar from vehicle

    Parameter(s):
    #0 OBJECT - Vehicle

    Returns:
    none
*/


#include "script_component.hpp"



private ["_vehicle", "_boats", "_attachPoints", "_class"];

_vehicle    = _this select 0;
_boats      = [];

BWplus_dropBoatCallback = {
    private ["_vehicle", "_itemHolder", "_varIndex", "_item", "_loadedItems"];
    _vehicle        = _this select 0;
    _itemHolder     = (_this select 1) select 0;
    _varIndex       = (_this select 1) select 1;
    _item           = (_vehicle getVariable _itemHolder) select _varIndex;
    _loadedItems    = _vehicle getVariable [_itemHolder, []];

    if !(_item in _loadedItems) exitWith {};

    _loadedItems = _loadedItems - [_item];
    _vehicle setVariable [_itemHolder, _loadedItems, true];

    _position = ((vectorDir _vehicle) vectorMultiply -15) vectorAdd getPosASL _vehicle;

    detach _item;
    _item enableSimulationGlobal true;
    _item hideobjectGlobal false;
    [_item, "{{_x reveal _this} forEach allUnits}", 2] call AGM_Core_fnc_execRemoteFnc;
    _item setPosASL _position;
};

if (isClass (configFile >> "CfgVehicles" >> typeOf(_vehicle) >> "AGM_Load")) then {
    _attachPoints = _vehicle call AGM_Logistics_fnc_getLoadPoints;
    {
        _class = _x select 4;
        {
            if (typeOf _x isKindOf "Ship") then {
                _boats pushback ["AGM_Load_" + _class, _foreachIndex];
            };
        } foreach (_x select 3);
    } count _attachPoints;
};

_attachPoints = _vehicle getVariable ["AGM_Logistics_loadedItems", []];

{
    if (typeof _x iskindof "ship") then {
        _boats pushback ["AGM_Logistics_loadedItems", _foreachIndex];
    };
} forEach _attachPoints;

if (count _boats <= 0) exitWith {};

_count = count _boats;

[_vehicle, _boats select (_count - 1)] spawn BWplus_dropBoatCallback;