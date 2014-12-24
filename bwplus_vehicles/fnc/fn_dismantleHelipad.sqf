#define DISMANTLETIME 10

private "_player";

_player = _this select 1;
_player setVariable ["BWplus_building", true, true];

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call AGM_Core_fnc_doAnimation;

BWplus_dismantleHelipadCallback = {
	private ["_items", "_player", "_items"];

	_box 	= _this select 0;
	_player = _this select 1;
	_items 	= _box getVariable ["BWplus_crater_items", []];
	{
		deleteVehicle _x;
	} forEach _items;

	[_player, "AmovPknlMstpSrasWrflDnon", 1] call AGM_Core_fnc_doAnimation;
	_player setVariable ["BWplus_building", false, true];
	_box setVariable ["BWplus_boxEmpty", false, true];
};

[DISMANTLETIME, _this, "BWplus_dismantleHelipadCallback", localize "STR_BWplus_Vehicles_DismantlingHelipad", "BWplus_vehicles_fnc_buildAbort"] call AGM_Core_fnc_progressBar;