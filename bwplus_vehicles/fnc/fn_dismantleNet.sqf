DISMENTLETIME = 5;


_net = _this select 0;


BWplus_buildNetCallback = {
 	_net = _this select 0;

 	_pos = getposASL _net;
 	deletevehicle _net;
 	_net = "BWplus_Item_CamoNet" createvehicle _pos;
 	_net setposASL _pos;

};

 [DISMENTLETIME, [_net], "BWplus_buildNetCallback", localize "STR_BWplus_Vehicles_DismantelingNet"] call AGM_Core_fnc_progressBar;