DISMENTLETIME = 5;


_net = _this select 0;


BWplus_buildNetCallback = {
 	_net = _this select 0;

 	_pos = position _net;
 	deletevehicle _net;
 	_net = createVehicle ["BWplus_item_CamoNet", _pos, [], 0, "CAN_COLLIDE"];

};

 [DISMENTLETIME, [_net], "BWplus_buildNetCallback", localize "STR_BWplus_Vehicles_DismantelingNet"] call AGM_Core_fnc_progressBar;