private ["_vehicle", "_item"];

_vehicle = _this select 0;

waitUntil {(!isnil "AGM_Logistics_loadedItemsDummy")};
_items = _vehicle getVariable "AGM_Logistics_loadedItems";
if (isNil "_items") then {
  _item = ['BWplus_Box_exp', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
  [_vehicle, _item] call AGM_Logistics_fnc_initLoadedObject;
  _item = ['BWplus_Lights', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
  [_vehicle, _item] call AGM_Logistics_fnc_initLoadedObject;
  _item = ['AGM_JerryCan', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
  [_vehicle, _item] call AGM_Logistics_fnc_initLoadedObject;
  _item = ['AGM_SpareWheel', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
  [_vehicle, _item] call AGM_Logistics_fnc_initLoadedObject;
   _item = ['AGM_SpareWheel', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
  [_vehicle, _item] call AGM_Logistics_fnc_initLoadedObject;
  _item = ['BWplus_Box_Items', [-1000, -1000, 100]] call AGM_Logistics_fnc_spawnObject;
  [_vehicle, _item] call AGM_Logistics_fnc_initLoadedObject;
};