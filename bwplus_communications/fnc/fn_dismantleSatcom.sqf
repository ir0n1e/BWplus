#define DISMENTLETIME 5
#define SATCOM "BWplus_Item_Satbag"

private ["_satcom", "_player"];

_satcom = _this select 0;
_player = _this select 1;

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call AGM_Core_fnc_doAnimation;
_player setVariable ["BWplus_building",true, true];

BWplus_dismantleSatcomCallback = {
 	private ["_satcom", "_player", "_pos"];

 	_satcom = _this select 0;
 	_player = _this select 1;

 	_pos = getpos _satcom;
 	deletevehicle _satcom;
 	_net = createVehicle [SATCOM, _pos, [], 0, "CAN_COLLIDE"];
 	[_player, "AmovPknlMstpSrasWrflDnon", 1] call AGM_Core_fnc_doAnimation;
 	_player setVariable ["BWplus_building", false, true];
};

 [DISMENTLETIME, [_satcom, _player], "BWplus_dismantleSatcomCallback", localize "STR_BWplus_communications_DismantlingSatcom"] call AGM_Core_fnc_progressBar;