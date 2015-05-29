
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class BWplus_Communications {
        serverInit = QUOTE(call FUNC(serverInit));
        clientInit = QUOTE(call FUNC(clientInit));
    };
};

class Extended_Killed_EventHandlers {
    class CAManBase {
        class ace_respawn_HandleGear {
            killed = "[(_this select 0) getVariable ['BWplus_communications_satcomObj', objnull], _this select 0] call BWplus_communications_fnc_disConnectSatcom";
        };
    };
};
