/*
    Author: Ir0n1E

    Description:
    Switch Lamps ON/OFF

    Parameter(s):
    #0 ARRAY - Object

    Returns:
    none
*/
fn_lamps_callback = {
    _this spawn {
        _lamp       = _this select 0;
        _switchOff  = _lamp getVariable ["BWplus_LampOn", true];

        _reflectors = getarray (configfile >> "CfgVehicles" >> typeof _lamp >> "aggregateReflectors");

        if (count _reflectors <= 0) then {
            _reflectors = ["Light_1"];
        } else {
            _reflectors = _reflectors select 0;
        };

        if !(_switchOff) then {
            for "_i" from 0 to (count _reflectors) -1 do {
                _r = gettext (configfile >> "CfgVehicles" >> typeof _lamp >> "Reflectors" >> (_reflectors select _i) >> "hitpoint");
                //Flash first reflector
                switch (_i) do {
                    case 0: {
                        _lamp setHit [_r, 0];
                        sleep 0.05;
                        _lamp setHit [_r, 0.97];
                        sleep 0.05;
                        _lamp setHit [_r, 0];
                        sleep 0.05;
                        _lamp setHit [_r, 0.97];
                        sleep 0.752;
                        _lamp setHit [_r, 0];
                    };
                    case 1: {
                        sleep 0.25;
                        _lamp setHit [_r, 0];
                    };
                    case 2: {
                        sleep 0.5;
                        _lamp setHit [_r, 0];
                    };
                    default {
                        sleep 0.15;
                        _lamp setHit [_r, 0];
                    };
                };
            };
            _lamp setVariable ["BWplus_LampOn", true, true];
        } else {
            for "_i" from 0 to (count _reflectors) -1 do {
                _r = gettext (configfile >> "CfgVehicles" >> typeof _lamp >> "Reflectors" >> (_reflectors select _i) >> "hitpoint");
                _lamp setHit [_r, 0.97];
            };
            _lamp setVariable ["BWplus_LampOn", false, true];
        };
    };
};

[_this, "fn_lamps_callback", 2] call AGM_Core_fnc_execRemoteFnc;
