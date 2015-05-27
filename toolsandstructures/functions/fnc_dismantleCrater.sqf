
#include "script_component.hpp"

#define DISMANTLETIME_PIO 5
#define DISMANTLETIME_NONPIO 15
#define NET "BWplus_CamoNet"
#define ITEMNET "BWplus_Item_CamoNet_Dismantled"

private ["_dismantletime", "_player"];

_player = _this select 1;

SETPVAR(_player,BWplus_building,true);

_dismantletime = DISMANTLETIME_NONPIO;

If (GETVAR(_player,BWplus_pio,false)) then {
	_dismantletime = DISMANTLETIME_PIO;
};

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call ACE_common_fnc_doAnimation;

BWplus_dismantleCraterCallback = {
	private ["_items", "_player", "_items", "_crater_count", "_pos"];
	PARAMS_1(_box,_player);
	_items = GETVAR(_box,BWplus_crater_items,[]);
	GETVAR(_box,BWplus_crater_count,0);
	_builder = GETVAR((_items select 0),BWplus_builder,objNull);
	_pos = getposATL (_items select 1);

	{
		deleteVehicle _x;
	} forEach _items;

	if (NET in _items) then {
		ITEMNET createvehicle _pos;
		ITEMNET setposATL _pos;
	};

	if ((_builder == _player) && (_crater_count > 0)) then {
		_crater_count = (_crater_count - 1);
		SETPVAR(_player,BWplus_crater_count,_crater_count);
	};
};

[_dismantletime, _this, BWplus_dismantleCraterCallback , {_this call EFUNC(main,BuildAbort)}, localize "STR_BWplus_toolsandstructures_DismantlingCrater"] call ace_common_fnc_progressBar;
