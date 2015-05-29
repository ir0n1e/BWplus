#include "script_component.hpp"
PARAMS_2(_satCom,_player);

SETPVAR(_player,BWplus_communications_satcomObj,_satCom);
SETPVAR(_player,BWplus_communications_isConnected,true);
SETVAR(_satCom,BWplus_communications_isConnected,true);

[_satCom, _player] call BWplus_communications_fnc_setTFRmulti;

[localize "STR_BWplus_Satcom_Connected", true, 2, 1] call ACE_common_fnc_displayText;
