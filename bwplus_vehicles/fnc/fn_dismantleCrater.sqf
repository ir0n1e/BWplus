#define DISMANTLETIME_PIO 5
#define DISMANTLETIME_NONPIO 15
#define NET "BWplus_CamoNet"
#define ITEMNET "BWplus_Item_CamoNet"

private ["_dismantletime"];
_dismantletime = DISMANTLETIME_NONPIO;
if (player getVariable "BWplus_pio") then {
	_dismantletime = DISMANTLETIME_PIO;
};

BWplus_dismantleCraterCallback = {
	private ["_items", "_player", "_items", "_crater_count", "_pos"];

	_items = (_this select 0) getVariable "BWplus_crater_items";
	_player = _this select 1;
	_crater_count = (_player getvariable "BWplus_crater_count");
	_builder = (_items select 0) getVariable "BWplus_builder";
	_pos = position (_items select 0);

	{
		deleteVehicle _x;
	} forEach _items;

	if (NET in _items) then {
		ITEMNET createvehicle _pos;
	};

	if ((_builder == _player) && (_crater_count > 0)) then {
		_crater_count = (_crater_count - 1);
		_player setVariable ["BWplus_crater_count",_crater_count,true];
	};
};

BWplus_dismantleCraterAbort = {
	true
};

[_dismantletime, _this, "BWplus_dismantleCraterCallback", localize "STR_BWplus_Vehicles_DismantelingCrater", "BWplus_dismantleCraterAbort"] call AGM_Core_fnc_progressBar;
