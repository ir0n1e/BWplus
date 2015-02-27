class CfgPatches {
    class BWplus_communications {
        units[] = {"BWplus_SatCom"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {AGM_core, AGM_Interaction};
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


class CfgVehicles {
    class Land_Sign_Mines_F;
    class BWplus_SatCom: Land_Sign_Mines_F {
        displayName = "$STR_BWplus_Communications_Satcom";
        scope = 2;
        scopeCurator = 2;
        accuracy = 0.2;
        camouflage = 1;
        faction = "Default";
        vehicleClass = "BWplus_Items";
        AGM_Size = 1;
        class AGM_Actions { 
           class AGM_DragItem { 
                displayName = "$STR_AGM_Drag_StartDrag"; 
                distance = 4;
                condition = "!(AGM_player call AGM_Drag_fnc_isDraggingObject)";
                conditionShow = "[AGM_Interaction_Target, AGM_player] call AGM_Drag_fnc_isDraggable";
                statement = "[AGM_Interaction_Target, AGM_player] call AGM_Drag_fnc_dragObject";
                showDisabled = 0;
                priority = 3;
                icon = "\A3\ui_f\data\igui\cfg\actions\gear_ca.paa"; \
                hotkey = "R";
            };
            class AGM_RotateClockwise {
                displayName = "$STR_BWplus_Satcom_RotateClockwise";
                distance = 4;
                condition = "alive AGM_Interaction_Target";
                statement = "[AGM_Interaction_Target, true] call AGM_StaticWeapons_fnc_rotate";
                showDisabled = 1; 
                priority = 2.1; 
                icon = "AGM_Logistics\ui\rotate_cw_ca.paa"; 
              }; 
              class AGM_RotateCounterclockwise { 
                displayName = "$STR_BWplus_Satcom_RotateCounterclockwise"; 
                distance = 4; 
                condition = "alive AGM_Interaction_Target"; 
                statement = "[AGM_Interaction_Target, false] call AGM_StaticWeapons_fnc_rotate";
                showDisabled = 1; 
                priority = 2; 
                icon = "AGM_Logistics\ui\rotate_ccw_ca.paa"; 
              };
            class BWplus_checkConnection { 
                displayName = "$STR_BWplus_Satcom_CheckConnection"; 
                distance = 4; 
                condition = "(alive AGM_Interaction_Target)"; 
                statement = "[AGM_Interaction_Target, true] call BWplus_communications_fnc_getConnectionQuality";
                showdisabled = 0;
                priority = 1.9;
                icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
            };
            class BWplus_connectSatcom { 
                displayName = "$STR_BWplus_Satcom_Connect"; 
                distance = 4; 
                condition = "[AGM_Player] call BWplus_communications_fnc_canConnectSatcom && {!(AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false])}"; 
                conditionShow = "AGM_Player getVariable ['BWplus_communications_canInteract', false] && {!(AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false])}"; 
                statement = "[AGM_Interaction_Target, AGM_Player] call BWplus_communications_fnc_connectSatcom";
                showdisabled = 0;
                priority = 1.8;
                icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
            };
            class BWplus_disConnectSatcom { 
                displayName = "$STR_BWplus_Satcom_Disconnect"; 
                distance = 4; 
                condition = "AGM_Player getVariable ['BWplus_communications_satcomObj', objnull] == AGM_Interaction_Target && {AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false]}"; 
                conditionShow = "AGM_Player getVariable ['BWplus_communications_canInteract', false] && {AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false]}"; 
                statement = "[AGM_Interaction_Target, AGM_Player] call BWplus_communications_fnc_disConnectSatcom";
                showdisabled = 0;
                priority = 1;
                icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
            };
        };
    };
};
