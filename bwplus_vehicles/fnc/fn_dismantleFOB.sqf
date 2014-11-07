#define FOBBUILDTIME 60
private "_vec";
_vec = _this select 0;



BWplus_vehicles_dismantleFOBCallback = {
	_vec = _this select 0;

	{
		deleteVehicle _x;
	} forEach (_vec getvariable "BWplus_FOBitems");

	_vec setvariable ["BWplus_FOBon",false,true];
};


[FOBBUILDTIME, [_vec], "BWplus_vehicles_dismantleFOBCallback", localize "STR_BWplus_Vehicles_DismantlingFOB"] call AGM_Core_fnc_progressBar;