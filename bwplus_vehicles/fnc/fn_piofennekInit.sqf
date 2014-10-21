private "_vehicle";

_vehicle = _this select 0;

_vehicle setVariable ["BWplus_VecEngineer", true, true];
_vehicle setVariable ["BWplus_FOBon", false, true];
_vehicle setVariable ["left_door_open", false, true];
_vehicle setVariable ["right_door_open", false, true];

_vehicle spawn {
	waitUntil {(!isnil "AGM_Logistics_loadedItemsDummy")};
	_items = _this getVariable "AGM_Logistics_loadedItems";

	if (isNil "_items") then {
		_item = ['BWplus_Box_exp', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
		_item = ['BWplus_Lights', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
		_item = ['AGM_JerryCan', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
		_item = ['AGM_SpareWheel', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
		_item = ['AGM_SpareWheel', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
		[_this, _item] call AGM_Logistics_fnc_initLoadedObject;
	};
};