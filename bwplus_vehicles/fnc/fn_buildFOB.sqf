#define FOBNET "CamoNet_INDP_big_F"

#define FOBBUILDTIME 60

_vec = _this select 0;


private ["_vec","_pos","_dir","_box","_lights","_engine","_count","_pos_rel"];


	_net = ("BWplus_Item_CamoNet" in (itemCargo _vec));



[FOBBUILDTIME, [_vec,_net], "BWplus_vehicles_fnc_buildFOBCallback", localize "STR_BWplus_Vehicles_BuildingFOB"] call AGM_Core_fnc_progressBar;