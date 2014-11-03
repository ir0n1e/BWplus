
_items = _this select 0;
_crater = _items select 0;
_net = _items select 1;
_unit = _this select 2;

deletevehicle _crater;
deleteVehicle _net;
_unit setVariable ["BWplus_building",false,true];
_unit setVariable ["BWplus_crater_abort",true,true];
[_unit, "AmovPknlMstpSrasWrflDnon", 1] call AGM_Core_fnc_doAnimation;