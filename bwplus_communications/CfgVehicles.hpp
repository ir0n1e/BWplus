
class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class BWplus_SelfActions  {
					class BWplus_BuildSatcom {
						displayName = "$STR_BWplus_communications_buildSatcom";
						priority = 0.5;
						exceptions[] = {"isNotInside"};
						conditionShow = "('BWplus_Satbag' in (items ACE_Player))";
						condition = "!(ACE_player getVariable ['BWplus_building', false]) && {'BWplus_Satbag' in (items ACE_player)}";
						statement = "[ACE_player] call BWplus_communications_fnc_buildSatcom";
						icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
						showDisabled = 0; 
					};
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
        model = QUOTE(PATHTOF(BWplus_satcom.p3d));
        scope = 2;
        scopeCurator = 2;
        mapSize = 0.700000;
        accuracy = 0.200000;
        camouflage = 1;
        faction = "Default";
        vehicleClass = "BWplus_Items";
        picture = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
        icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
        simulation = "house";
        class eventHandlers {
            // mercenary  <NULL-object> fix
            Init = "{_x reveal (_this select 0)} foreach allunits;";
        };
        class ACE_Actions { 
            class BWplus_checkConnection { 
                displayName = "$STR_BWplus_Satcom_CheckConnection"; 
                distance = 4; 
                condition = "(alive (_this select 0))"; 
                statement = "[(_this select 0)] call BWplus_communications_fnc_showColoredQuality";
                showdisabled = 0;
                priority = 1.9;
                icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
            };
            class BWplus_connectSatcom { 
                displayName = "$STR_BWplus_Satcom_Connect"; 
                distance = 4; 
                condition = "[ACE_Player] call BWplus_communications_fnc_canConnectSatcom && {!((_this select 0) getVariable ['BWplus_communications_isConnected', false])}"; 
                conditionShow = "ACE_Player getVariable ['BWplus_communications_canInteract', false] && {!((_this select 0) getVariable ['BWplus_communications_isConnected', false])} && {alive (_this select 0)}"; 
                statement = "[(_this select 0), ACE_Player] call BWplus_communications_fnc_connectSatcom";
                showdisabled = 0;
                priority = 1.8;
                icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
            };
            class BWplus_disConnectSatcom { 
                displayName = "$STR_BWplus_Satcom_Disconnect"; 
                distance = 4; 
                condition = "ACE_Player getVariable ['BWplus_communications_satcomObj', objnull] == (_this select 0) && {(_this select 0) getVariable ['BWplus_communications_isConnected', false]}"; 
                conditionShow = "ACE_Player getVariable ['BWplus_communications_canInteract', false] && {(_this select 0) getVariable ['BWplus_communications_isConnected', false]}"; 
                statement = "[(_this select 0), ACE_Player] call BWplus_communications_fnc_disConnectSatcom";
                showdisabled = 0;
                priority = 1;
                icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
            };
            class BWplus_dismantleSatcom { 
                displayName = "$STR_BWplus_communications_dismantleSatcom"; 
                distance = 4; 
                condition = "!(ACE_Player getVariable ['BWplus_building', false])"; 
                conditionShow = "!(ACE_Player getVariable ['BWplus_building', false] && {(_this select 0) getVariable ['BWplus_communications_isConnected', false]})"; 
                statement = "[(_this select 0), ACE_Player] call BWplus_communications_fnc_dismantleSatcom";
                showdisabled = 0;
                priority = 1;
                icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
            };
        };
    };
};
