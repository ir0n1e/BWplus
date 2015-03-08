#define FOBNET "CamoNet_INDP_big_F"
#define FOBBUILDTIME 60

private ["_vec","_net"];

_vec = _this select 0;
_net = ("BWplus_CamoNet_Dismantled" in (itemCargo _vec));

[FOBBUILDTIME, [_vec,_net], "BWplus_vehicles_fnc_buildFOBCallback", localize "STR_BWplus_Vehicles_BuildingFOB"] call AGM_Core_fnc_progressBar;
