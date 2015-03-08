/*
	Author: Ir0n1E

	Description:
	Sets TFR multi to satcom connection quality

	Parameter(s):
	#0 OBJECT - eg Satcom Object
	#1 OBJECT - Player

	Returns:
	None
*/
if !(isClass (configfile >> "CfgPatches" >> "task_force_radio")) exitWith {};

_satCom = _this select 0;
_player = _this select 1;

if (_player getvariable ["BWplus_communications_satcomObj", objnull] != _satcom) exitWith {};

if (_player getVariable ["BWplus_communications_isConnected", false]) then {
	_player setVariable ["tf_sendingDistanceMultiplicator", ([_satCom] call BWplus_communications_fnc_getConnectionQuality) / 10];
};