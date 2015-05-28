
#include "script_component.hpp"


private ["_result", "_vehicle"];

_result = false;
_vehicle = _this select 0;

// add default items
_items = _vehicle getVariable "AGM_Logistics_loadedItems";
if (isNil "_items") then {
	switch (true) do {
		/*
		"B_Truck_01_transport_F"
		"O_Truck_02_transport_F"
		"I_Truck_02_transport_F"
		"O_Truck_03_transport_F"
		*/
		case ((typeof _vehicle == "Fennek_Flecktarn_pio") || (typeof _vehicle == "Fennek_Tropentarn_pio")) : {
			[_vehicle] call compile preprocessFileLineNumbers "\BWplus_vehicles\scripts\itemsPio.sqf";
		};
		case ((typeof _vehicle == "Fennek_Flecktarn_san") || (typeof _vehicle == "Fennek_Tropentarn_san")) : {
			[_vehicle] call compile preprocessFileLineNumbers "\BWplus_vehicles\scripts\itemsSani.sqf";
		};
	};
};

if (isClass (configFile >> "CfgVehicles" >> typeOf(_vehicle) >> "AGM_Load")) then {
	_attachPoints = (_vehicle) call AGM_Logistics_fnc_getLoadPoints;
	{
		if (count (_x select 3) > 0) exitWith {
			_result = true;
		};
	} count _attachPoints;
} else {
	_result = (count (_vehicle getVariable ["AGM_Logistics_loadedItems", []])) > 0;
};

_result
