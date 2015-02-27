
private ["_player", "_satCom"];
_satCom = _this select 0;
_player = _this select 1;




_player setVariable ["BWplus_communications_satcomObj", _satCom];
_player setVariable ["BWplus_communications_isConnected", true];
_satCom setVariable ["BWplus_communications_isConnected", true];

["Satcom Connected", true, 2, 1] call AGM_Core_fnc_displayText;
