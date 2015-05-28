
#include "script_component.hpp"

PARAMS_1(_vehicle);

SETPVAR(_vehicle,BWplus_VecEngineer,true);
SETPVAR(_vehicle,BWplus_FOBon,false);

_vehicle spawn {
	/*
	waitUntil {(!isnil "AGM_Logistics_loadedItemsDummy")};
	_items = _this getVariable "AGM_Logistics_loadedItems";

	if (isNil "_items") then {
		_item = ['BWplus_Box_exp', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
		_item = ['Land_PortableLight_double_F', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
		_item = ['AGM_JerryCan', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
		_item = ['AGM_SpareWheel', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
		_item = ['AGM_SpareWheel', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
		 _item = ['BWplus_Box_Helipad', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
  		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
	};
	*/
};
