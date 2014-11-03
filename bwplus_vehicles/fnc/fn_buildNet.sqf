BUILDTIME = 10;

private ["_net", "_pos"];
_net = _this select 0;

BWplus_buildNetCallback = {
 	_net = _this select 0;

 	_pos = position _net;
 	deletevehicle _net;
 	_net = createVehicle ["BWplus_CamoNet", _pos, [], 0, "CAN_COLLIDE"];
 	_net setdir (getdir player)+180;

};

 [BUILDTIME, [_net], "BWplus_buildNetCallback", localize "STR_BWplus_Vehicles_BuildingNet"] call AGM_Core_fnc_progressBar;
