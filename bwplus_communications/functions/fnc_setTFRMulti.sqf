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
#include "script_component.hpp"
PARAMS_2(_satCom,_player);
GETVAR(_player,BWplus_communications_satcomObj,objnull);
if (GETVAR(_player,BWplus_communications_satcomObj,objnull) != _satcom) exitWith {};

if (GETVAR(_player,BWplus_communications_isConnected,false)) then {
	SETVAR(_player,tf_sendingDistanceMultiplicator,(([_satCom] call BWplus_communications_fnc_getConnectionQuality) / 10));
};