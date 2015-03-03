if (!hasinterface || {!isClass (configfile >> "CfgPatches" >> "task_force_radio")}) exitWith {};

_player = AGM_Player;
_player setVariable ['BWplus_communications_canInteract', true];
multiDefault = _player getVariable ["tf_sendingDistanceMultiplicator", 1.0];

["BWplus_satcomEH", "OnTangent", {
    if !((_this select 0) getVariable ["BWplus_communications_isConnected", false]) exitWith {};

    _satCom = (_this select 0) getvariable ["BWplus_communications_satcomObj", objnull];
    if ((_this select 0) distance _satcom > 3 || {!alive _satCom}) exitwith {
        [_satCom, _this select 0] call BWplus_communications_fnc_disConnectSatcom;
    };

    if (_this select 2 == 1 && {!isnull _satCom}) then {

        _multiSatcom = [_satCom] call BWplus_communications_fnc_getConnectionQuality;

        if (_this select 4) then {
            (_this select 0) setVariable ["tf_sendingDistanceMultiplicator", _multiSatcom / 100];
            [parsetext format ["<t size='1.2'>" + localize "STR_BWplus_Satcom_connected" + "<br />" + localize "STR_BWplus_Satcom_Signal" + ": %1</t>", _multiSatcom], true, 2, 1] call AGM_Core_fnc_displayText;
        } else {
            (_this select 0) setVariable ["tf_sendingDistanceMultiplicator", multiDefault];
        };
    };
}, objnull] call TFAR_fnc_addEventHandler;
