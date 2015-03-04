#define DISMENTLETIME 5
#define NET "BWplus_Item_CamoNet_Dismantled"

private ["_net", "_player"];

_net = _this select 0;
_player = _this select 1;

[_player, "AinvPknlMstpSnonWnonDr_medic5", 1] call AGM_Core_fnc_doAnimation;
_player setVariable ["BWplus_building",true,true];

BWplus_buildNetCallback = {
 	private ["_net", "_player", "_pos"];

 	_net = _this select 0;
 	_player = _this select 1;

 	_pos = position _player;
 	deletevehicle _net;
 	_net = createVehicle [NET, _pos, [], 0, "CAN_COLLIDE"];
 	[_player, "AmovPknlMstpSrasWrflDnon", 1] call AGM_Core_fnc_doAnimation;
 	_player setVariable ["BWplus_building",false,true];
};

 [DISMENTLETIME, [_net, _player], "BWplus_buildNetCallback", localize "STR_BWplus_toolsandstructures_DismantlingNet"] call AGM_Core_fnc_progressBar;