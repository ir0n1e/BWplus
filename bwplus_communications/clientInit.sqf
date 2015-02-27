if (!hasinterface || {!isClass (configfile >> "CfgPatches" >> "task_force_radio")}) exitWith {};


_player = AGM_Player;


["MyID", "OnTangent ", {
	hint str _this;
   //hint format ["%1 %2 speaking", _this select 0, if(_this select 1)then{"is"}else{"isn't"}];
}, _player] call TFAR_fnc_addEventHandler;