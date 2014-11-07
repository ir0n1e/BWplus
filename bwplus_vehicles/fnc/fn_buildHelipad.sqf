#define BUILDTIME 10
#define HELIPAD "Land_HelipadSquare_F"
#define LIGHT "PortableHelipadLight_01_blue_F"

private "_player";
_player = _this select 1;

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call AGM_Core_fnc_doAnimation;
_player setVariable ["BWplus_building", true, true];

BWplus_buildHelipadCallback = {
	private ["_pad","_pos", "_dir", "_light", "_player", "_items"];

	_box = _this select 0;
	_player = _this select 1;
	_angel = 45;
	_pos = position _box;

	_pad = HELIPAD createVehicle _pos;
	_pad setpos _pos;
	_dir = getdir _pad;
	_items = [_pad];

	for "_i" from 0 to 3 do {
		_pos_rel = [_pad, 12, (_dir + _angel)] call BIS_fnc_relPos;
		_light = LIGHT createVehicle _pos_rel;
		_light setpos _pos_rel;
		_angel = (_angel + 90);
		_items = _items + [_light];
	};


 	[_player, "AmovPknlMstpSrasWrflDnon", 1] call AGM_Core_fnc_doAnimation;
 	_pad setvariable ["BWplus_padItems", _items, true];
 	_player setVariable ["BWplus_building", false, true];
 	_box setVariable ["BWplus_boxEmpty", true, true];
};

 [BUILDTIME, _this, "BWplus_buildHelipadCallback", localize "STR_BWplus_Vehicles_BuildingHelipad", "BWplus_vehicles_fnc_buildAbort"] call AGM_Core_fnc_progressBar;