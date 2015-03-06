private ["_player", "_satCom"];

_satCom = _this select 0;
_player = _this select 1;

_player setVariable ["BWplus_communications_satcomObj", objNull, true];
_player setVariable ["BWplus_communications_isConnected", false];
_satCom setVariable ["BWplus_communications_isConnected", false, true];

if (alive _player) then {
	[localize "STR_BWplus_Satcom_disConnected", true, 2, 1] call AGM_Core_fnc_displayText;
};
