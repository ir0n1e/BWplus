#define BUILDTIME 10
#define ITEMNET "BWplus_Item_CamoNet"

private "_player";
_player = _this select 0;

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call AGM_Core_fnc_doAnimation;
_player setVariable ["BWplus_building",true,true];

BWplus_buildNetCallback = {
	private ["_player", "_pos", "_net"];
 	_player = _this select 1;

	_player removeitem ITEMNET;
 	_pos = position _player;
 	_net = createVehicle ["BWplus_CamoNet", _pos, [], 0, "CAN_COLLIDE"];
 	_net setdir (getdir _player)+180;
 	[_player, "AmovPknlMstpSrasWrflDnon", 1] call AGM_Core_fnc_doAnimation;
 	_player setVariable ["BWplus_building",false,true];

};

 [BUILDTIME, ["",_player], "BWplus_buildNetCallback", localize "STR_BWplus_Vehicles_BuildingNet", "BWplus_vehicles_fnc_buildAbort"] call AGM_Core_fnc_progressBar;
