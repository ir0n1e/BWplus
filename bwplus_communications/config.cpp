class CfgPatches {
    class BWplus_communications {
        units[] = {"BWplus_SatCom"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {AGM_core, bwplus_vehicles, AGM_Interaction};
        version = "1.4";
        versionStr = "1.4";
        versionAr[] = {1,4,0};
        author[] = {"EduardLaser", "Ir0n1E"};
        authorUrl = "http://ntalpha.de";
    };
};

class CfgFunctions {
    class BWplus_communications {
        class BWplus_communications {
            file = "BWplus_communications\fnc";
            class canConnectSatcom;
            class connectSatcom;
            class disConnectSatcom;
            class getConnectionQuality;
            class isConnected;
        };
    };
};

class Extended_PostInit_EventHandlers {
    class BWplus_Communications {
        serverInit = "call compile preprocessFileLineNumbers '\BWplus_communications\serverInit.sqf'";
        clientInit = "call compile preprocessFileLineNumbers '\BWplus_communications\clientInit.sqf'";
    };
};

class Extended_Killed_EventHandlers {
    class CAManBase {
        class AGM_Respawn_HandleGear {
            killed = "[(_this select 0) getVariable ['BWplus_communications_satcomObj', objnull], _this select 0] call BWplus_communications_fnc_disConnectSatcom";
        };
    };
};

#include "\bwplus_vehicles\Macros.hpp"

class CfgVehicles {
    class Land_Sign_Mines_F;
    class BWplus_SatCom: Land_Sign_Mines_F {
        displayName = "BWplus_Satcom";
        scope = 2;
        scopeCurator = 2;
        accuracy = 0.2;
        camouflage = 1;
        faction = "Default";
        vehicleClass = "BWplus_Items";
        AGM_Size = 1;
        class AGM_Actions { 
            MACRO_DRAGABLE
            MACRO_ROTATE
            MACRO_LOADABLE
            class BWplus_checkConnection { 
                displayName = "Check Connection"; 
                distance = 4; 
                condition = "(alive AGM_Interaction_Target)"; 
                statement = "[AGM_Interaction_Target, true] call BWplus_communications_fnc_getConnectionQuality";
                showdisabled = 0;
                priority = 1; 
            };
            class BWplus_connectSatcom { 
                displayName = "Connect Satcom"; 
                distance = 4; 
                condition = "[AGM_Player] call BWplus_communications_fnc_canConnectSatcom && {!(AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false])}"; 
                conditionShow = "AGM_Player getVariable ['BWplus_communications_canInteract', false] && {!(AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false])}"; 
                statement = "[AGM_Interaction_Target, AGM_Player] call BWplus_communications_fnc_connectSatcom";
                showdisabled = 0;
                priority = 1; 
            };
            class BWplus_disConnectSatcom { 
                displayName = "Disconnect Satcom"; 
                distance = 4; 
                condition = "AGM_Player getVariable ['BWplus_communications_satcomObj', objnull] == AGM_Interaction_Target && {AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false]}"; 
                conditionShow = "AGM_Player getVariable ['BWplus_communications_canInteract', false] && {AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false]}"; 
                statement = "[AGM_Interaction_Target, AGM_Player] call BWplus_communications_fnc_disConnectSatcom";
                showdisabled = 0;
                priority = 1; 
            };
        };
    };
};
