#include "script_component.hpp"
PARAMS_2(_satCom,_player);

SETPVAR(_player,BWplus_communications_satcomObj,objNull);
SETPVAR(_player,BWplus_communications_isConnected,false);
SETVAR(_satCom,BWplus_communications_isConnected,false);
SETPVAR(_player,tf_sendingDistanceMultiplicator,(GETVAR(_player,BWplus_TFRmultiDefault,1.0)));

if (alive _player) then {
	[localize "STR_BWplus_Satcom_disConnected", true, 2, 1] call ACE_common_fnc_displayText;
};
