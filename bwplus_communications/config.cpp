class CfgPatches {
    class BWplus_communications {
        units[] = {BWplus_SatCom, BWplus_Box_Items, BWplus_Item_Satbag};
        weapons[] = {BWplus_Satbag};
        requiredVersion = 0.1;
        requiredAddons[] = {BWplus_core, AGM_Interaction};
        version = "1.4";
        versionStr = "1.4";
        versionAr[] = {1,4,0};
        author[] = {"EduardLaser", "Ir0n1E", "TheDog"};
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
            class showColoredQuality;
            class isConnected;
            class buildSatcom;
            class dismantleSatcom;
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

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
  name = #ITEM; \
  count = COUNT; \
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class AGM_SelfActions {
            class AGM_Equipment {
                class BWplus_BuildSatcom {
                    displayName = "$STR_BWplus_communications_buildSatcom";
                    priority = 0.5;
                    conditionShow = "('BWplus_Satbag' in (items AGM_player))";
                    condition = "!(AGM_player getVariable ['BWplus_building', false])";
                    statement = "[AGM_player] call BWplus_communications_fnc_buildSatcom";
                    icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
                    showDisabled = 0; 
                };
            };
        };
    };

    class BWplus_Box_Empty;
    class BWplus_Box_Items: BWplus_Box_Empty {
        author = "BW.plus";
        displayName = "$STR_BWplus_toolsandstructures_box_items";
        class TransportItems {
            MACRO_ADDITEM(BWplus_Satbag, 4)
        };
    };

    class Item_Base_F;
    class BWplus_Item_Satbag: Item_Base_F {
        author = "TheDog / BWplus";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "BWplus_Items";
        class TransportItems {
            MACRO_ADDITEM(BWplus_Satbag, 1)
        };
    };
    
    class Static;
    class BWplus_SatCom: Static {
        displayName = "$STR_BWplus_Satcom";
        author = "TheDog / BWplus";
        model = "\bwplus_communications\BWplus_satcom.p3d";
        scope = 2;
        scopeCurator = 2;
        mapSize = 0.700000;
        accuracy = 0.200000;
        faction = "Default";
        vehicleClass = "BWplus_Items";
        picture = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
        icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
        simulation = "house";
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
                icon = "\A3\ui_f\data\igui\cfg\actions\gear_ca.paa";
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
                statement = "[AGM_Interaction_Target] call BWplus_communications_fnc_showColoredQuality";
                showdisabled = 0;
                priority = 1.9;
                icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
            };
            class BWplus_connectSatcom { 
                displayName = "$STR_BWplus_Satcom_Connect"; 
                distance = 4; 
                condition = "[AGM_Player] call BWplus_communications_fnc_canConnectSatcom && {!(AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false])}"; 
                conditionShow = "AGM_Player getVariable ['BWplus_communications_canInteract', false] && {!(AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false])} && {alive AGM_Interaction_Target}"; 
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
            class BWplus_dismantleSatcom { 
                displayName = "$STR_BWplus_communications_dismantleSatcom"; 
                distance = 4; 
                condition = "!(AGM_player getVariable ['BWplus_building', false])"; 
                conditionShow = "!(AGM_player getVariable ['BWplus_building', false] && {AGM_Interaction_Target getVariable ['BWplus_communications_isConnected', false]})"; 
                statement = "[AGM_Interaction_Target, AGM_Player] call BWplus_communications_fnc_dismantleSatcom";
                showdisabled = 0;
                priority = 1;
                icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
            };
        };
    };
};

class CfgWeapons {
    class AGM_ItemCore;
    class InventoryItem_Base_F;

    class BWplus_Satbag: AGM_ItemCore {
        displayname = "$STR_BWplus_Satbag";
        author = "TheDog / BWplus";
       // descriptionshort = "$STR_AGM_Medical_Bandage_Description";
        model = "\bwplus_communications\bwplus_satbag.p3d";
        picture = "\bwplus_communications\UI\bwplus_satbag_ca.paa";
        vehicleClass = "BWplus_Items";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 11.5;
        };
    };
};
