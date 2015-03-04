#define BUILDTIME 5
#define ITEMSATBAG "BWplus_Satbag"

private "_player";
_player = _this select 0;

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call AGM_Core_fnc_doAnimation;
_player setVariable ["BWplus_building", true, true];

BWplus_buildSatcomCallback = {
	private ["_player", "_net"];
 	_player = _this select 1;
 	_dir = getdir _player;
	_player removeitem ITEMSATBAG;


 	_net = createVehicle ["BWplus_Satcom", [_player, 0.6, _dir] call BIS_fnc_relPos, [], 0, "CAN_COLLIDE"];
 	_net setdir _dir;
 	[_player, "AmovPknlMstpSrasWrflDnon", 1] call AGM_Core_fnc_doAnimation;
 	_player setVariable ["BWplus_building", false, true];

};

 [BUILDTIME, ["", _player], "BWplus_buildSatcomCallback", localize "STR_BWplus_communications_BuildingSatcom", "BWplus_core_fnc_BuildAbort"] call AGM_Core_fnc_progressBar;
