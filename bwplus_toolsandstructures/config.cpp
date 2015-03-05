class CfgPatches {
    class BWplus_toolsandstructures {
        units[] = {
            BWplus_Box_Helipad,
            BWplus_Box_Items, 
            BWplus_CamoNet,
            BWplus_Item_CamoNet_Dismantled,
            BWplus_crater,
            BWplus_Flag_Ger,
            BWplus_Item_Shovel, 
            BWplus_Item_Spraycan,
            BWplus_Spraycan_Empty,
            BWplus_Kitbag_pio_Green,
            BWplus_Kitbag_pio_Sand
        };
        weapons[] = {
            BWplus_Spraycan, 
            BWplus_Shovel,
            BWplus_Item_CamoNet
        };
        requiredVersion = 0.1;
        requiredAddons[] = {
            BWplus_core, 
        };
        version = "1.4";
        versionStr = "1.4";
        versionAr[] = {1,4,0};
        author[] = {"EduardLaser", "Ir0n1E"};
        authorUrl = "http://ntalpha.de";
    };
};

class CfgFunctions {
    class BWplus_toolsandstructures {
        class BWplus_toolsandstructures {
            file = "BWplus_toolsandstructures\fnc";
            class buildCrater;
            class buildCraterCallback;
            class buildNet;
            class canbuild;
            class canbuildNet;
            class buildCraterAbort;
            class buildHelipad;
            class dismantleCrater;
            class dismantleHelipad;
            class dismantleNet;
            class initCamoNet;
            class initCrater;
            class lamps_switch;
        };
    };
};

#include <Macros.hpp>

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class AGM_SelfActions {
            class BWplus_DismantleNet {
                displayName = "$STR_BWplus_toolsandstructures_DismantleNet";
                icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
                distance = 10; 
                condition = "AGM_player getvariable 'BWplus_pio' && {AGM_player distance (nearestObject [AGM_player, 'BWplus_CamoNet']) < 8} and {!(AGM_player getVariable 'BWplus_building')}";
                statement = "[(nearestObject [AGM_player, 'BWplus_CamoNet']),AGM_player] call BWplus_toolsandstructures_fnc_dismantleNet";
                showDisabled = 0; 
                priority = 3;
            };
            class AGM_Equipment {
                class BWplus_BuildCrater {
                    displayName = "$STR_BWplus_toolsandstructures_buildCrate";
                    priority = 0.5;
                    condition = "not (AGM_player getVariable 'BWplus_building') and {[AGM_player] call BWplus_toolsandstructures_fnc_canbuild}";
                    statement = "[false] call BWplus_toolsandstructures_fnc_buildCrater";
                    icon = "bwplus_toolsandstructures\UI\bwplus_shovel_ca.paa";
                    showDisabled = 0; 
                };
                class BWplus_BuildCraterBig {
                    displayName = "$STR_BWplus_toolsandstructures_buildCrateNet";
                    priority = 0.5;
                    condition = "not (AGM_player getVariable 'BWplus_building') and {[AGM_player] call BWplus_toolsandstructures_fnc_canbuildNet} and {[AGM_player] call BWplus_toolsandstructures_fnc_canbuild}";
                    statement = "[true] call BWplus_toolsandstructures_fnc_buildCrater";
                    icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
                    showDisabled = 0; 
                };
                class BWplus_buildNet {
                    displayName = "$STR_BWplus_toolsandstructures_buildNet";
                    icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
                    distance = 8; 
                    condition = "not (AGM_player getVariable 'BWplus_building') and {[AGM_player] call BWplus_toolsandstructures_fnc_canbuildNet}";
                    statement = "[AGM_player] call BWplus_toolsandstructures_fnc_buildNet";
                    priority = 3;
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
            MACRO_ADDITEM(BWplus_Spraycan, 4)
            MACRO_ADDITEM(BWplus_Shovel, 10)
            MACRO_ADDITEM(BWplus_CamoNet_Dismantled, 4)
        };
    };

    class Land_MetalCase_01_medium_F;
    class BWplus_Box_Helipad: Land_MetalCase_01_medium_F {
        displayName = "$STR_BWplus_toolsandstructures_Box_Helipad";
        author = "BW.plus";
        AGM_Size = 1;
        mapSize = 0.7;
        accuracy = 0.2;
        vehicleClass = "BWplus_Items";
        destrType = "DesturctNo";
        transportmaxmagazines = 50;
        maximumload = 2000;
        class eventHandlers {
            Init = "(_this select 0) setvariable ['BWplus_BoxEmpty', false, true]";
        };

        class AGM_Actions {
            MACRO_DRAGABLE      
            MACRO_LOADABLE
            class BWplus_buildHelipad {
                displayName = "$STR_BWplus_toolsandstructures_buildHelipad";
                priority = 0.5;
                distance = 5;
                conditionShow = "'BWplus_Spraycan' in (items AGM_Player) && {!(AGM_Interaction_Target getVariable ['BWplus_BoxEmpty', false])}";
                condition = "!(AGM_Interaction_Target getVariable ['BWplus_BoxEmpty', false]) && {!(AGM_player getVariable ['BWplus_building', false])} && {'BWplus_Spraycan' in (items AGM_Player)}";
                statement = "[AGM_Interaction_Target, AGM_player] call BWplus_toolsandstructures_fnc_buildHelipad";
            };
            class BWplus_dismantleHelipad {
                displayName = "$STR_BWplus_toolsandstructures_dismantleHelipad";
                priority = 0.5;
                distance = 5;
                conditionShow = "'BWplus_Shovel' in (items AGM_Player) && {AGM_Interaction_Target getVariable ['BWplus_BoxEmpty', false]}";
                condition = "(AGM_Interaction_Target getVariable ['BWplus_BoxEmpty', false]) and {!(AGM_player getVariable ['BWplus_building', false])} && {'BWplus_Shovel' in (items AGM_Player)}";
                statement = "[AGM_Interaction_Target, AGM_player] call BWplus_toolsandstructures_fnc_dismantleHelipad";
            };  
        };  
        class TransportMagazines {};
        class TransportBackpacks {};
        class TransportWeapons {};
        class TransportItems { 
            MACRO_ADDITEM(BWplus_Spraycan, 2)
            MACRO_ADDITEM(BWplus_Shovel, 1)
        };
    };

    class B_Kitbag_rgr;
    class B_Kitbag_cbr;
    class BWplus_Kitbag_pio_Green: B_Kitbag_rgr {
        displayName = "Kitbag Pioneer Green";
        author = "BW.plus";
        class TransportItems {
            MACRO_ADDITEM(BWplus_CamoNet_Dismantled, 1)
        };
    };
    class BWplus_Kitbag_pio_Sand: B_Kitbag_cbr {
        displayName = "Kitbag Pioneer Sand";
        author = "BW.plus";
        class TransportItems {
            MACRO_ADDITEM(BWplus_CamoNet_Dismantled, 1)
        };
    };

    class Item_Base_F;
    class BWplus_Item_Shovel: Item_Base_F {
        author = "BW.plus";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_Shovel";
        vehicleClass = "BWplus_Items";

        class TransportItems {
            MACRO_ADDITEM(BWplus_Shovel, 1)
        };
    };
    
    class BWplus_Item_SprayCan: Item_Base_F {
        author = "BW.plus";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_SprayCan";
        vehicleClass = "BWplus_Items";
        destrType = "DestructBuilding";

        class TransportItems {
            MACRO_ADDITEM(BWplus_Spraycan, 1)
        };
    };

    class BWplus_Item_CamoNet_Dismantled: Item_Base_F {
        displayName = "$STR_BWplus_toolsandstructures_Net_Dismantled";
        author = "BW.plus";
        vehicleClass = "BWplus_Items";
        faction = "Default";
        icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
        scope = 2;
        scopeCurator = 2;
        simulation = "house";
        class TransportItems {
            MACRO_ADDITEM(BWplus_CamoNet_Dismantled, 1)
        };
    };

    class craterlong;
    class BWplus_crater: craterlong {
        displayName = "$STR_BWplus_toolsandstructures_Crater";
        author = "BW.plus";
        icon = "iconObject_circle";
        mapSize = 0.7;
        accuracy = 0.2;
        vehicleClass = "BWplus_Items";
        faction = "Default";
        destrType = "DesturctNo";
        scope = 2;
        scopeCurator = 2;
        class eventHandlers {
            Init = "_this call BWplus_toolsandstructures_fnc_initCrater";
        };
        class AGM_Actions {
            class BWplus_DismantleCrater {
                displayName = "$STR_BWplus_toolsandstructures_DismantleCrate";
                icon = "\bwplus_toolsanditems\UI\bwplus_shovel_ca.paa";
                distance = 4; 
                condition = "!(AGM_player getVariable ['BWplus_building', false]) and {((AGM_Interaction_Target getVariable ""BWplus_builder"") == AGM_player) || {AGM_player getvariable ['BWplus_pio', false]}}";
                statement = "[AGM_Interaction_Target, AGM_player] call BWplus_toolsandstructures_fnc_dismantlecrater";
                priority = 3;
            };
        };
    };

    class FlagCarrier;
    class BWplus_Flag_Ger: FlagCarrier {
        displayName = "Flag GER";
        author = "EduardLaser, Ir0n1E";
        vehicleClass = "BWplus_Items";
        scope = 2;
        scopeCurator = 2;
        class eventHandlers {
            init = "(_this select 0) setFlagTexture '\bwplus_toolsandstructures\data\flag\flagGER_co.paa'";
        };
    };
    
    class CamoNet_INDP_F;
    class BWplus_CamoNet: CamoNet_INDP_F {
        displayName = "$STR_BWplus_CamoNet";
        descriptionShort = "$STR_BWplus_CamoNet";
        author = "BW.plus";
        vehicleClass = "BWplus_Items";
        faction = "Default";
        icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
        scope = 2;
        scopeCurator = 2;
        accuracy = 0.2;
        camouflage = 1;
        class eventHandlers {
            Init = "_this call BWplus_toolsandstructures_fnc_initCamoNet;";
        };
    };

    class Lamps_base_F;
    class Land_PortableLight_single_F: Lamps_base_F {
        AGM_Size = 1;
        icon = "BWplus_toolsandstructures\ui\bwplus_lamp_ca.paa";
        picture = "BWplus_toolsandstructures\ui\bwplus_lamp_ca.paa";
        mapSize = 0.7;
        accuracy = 0.2;
        vehicleClass = "BWplus_Items";
        scope = 2;
        class eventHandlers {
            Init = "_this call BWplus_toolsandstructures_fnc_lamps_switch";
        };
        class AGM_Actions {
            MACRO_DRAGABLE
            MACRO_ROTATE
            class BWplus_Lamps_on {
                displayName = "$STR_BWplus_toolsandstructures_LightsOn";
                icon = "BWplus_toolsandstructures\UI\bwplus_lamp_ca.paa";
                priority = 0.5;
                distance = 5;
                condition = "!(AGM_Interaction_Target getVariable ['BWplus_LampOn', false])";
                statement = "[AGM_Interaction_Target] call BWplus_toolsandstructures_fnc_lamps_switch";
            };
            class BWplus_Lamps_off {
                displayName = "$STR_BWplus_toolsandstructures_LightsOff";
                icon = "BWplus_toolsandstructures\UI\bwplus_lamp_ca.paa";
                priority = 0.5;
                distance = 5;
                condition = "AGM_Interaction_Target getVariable ['BWplus_LampOn', false]";
                statement = "[AGM_Interaction_Target] call BWplus_toolsandstructures_fnc_lamps_switch";
            };  
        };
    };

    class Land_PortableLight_double_F: Land_PortableLight_single_F {
        AGM_Size = 1;
        icon = "BWplus_toolsandstructures\ui\bwplus_lamp_ca.paa";
        picture = "BWplus_toolsandstructures\ui\bwplus_lamp_ca.paa";
        mapSize = 0.7;
        accuracy = 0.2;
        vehicleClass = "BWplus_Items";
        scope = 2;
    };

    class FloatingStructure_F;
    class Land_PortableHelipadLight_01_F: FloatingStructure_F {
        scope = 1;
        scopeCurator = 0;
        mapSize = 0.700000;
        accuracy = 0.200000;
        camouflage = 1; 
        AGM_Size = 1;
        class AGM_Actions {
            MACRO_DRAGABLE
        };
    };

    class PortableHelipadLight_01_blue_F: Land_PortableHelipadLight_01_F {
        scope = 2;
        scopeCurator = 2;
    };
    class PortableHelipadLight_01_green_F: Land_PortableHelipadLight_01_F {
        scope = 2;
        scopeCurator = 2;
    };
    class PortableHelipadLight_01_red_F: Land_PortableHelipadLight_01_F {
        scope = 2;
        scopeCurator = 2;
    };
    class PortableHelipadLight_01_white_F: Land_PortableHelipadLight_01_F {
        scope = 2;
        scopeCurator = 2;
    };
    class PortableHelipadLight_01_yellow_F: Land_PortableHelipadLight_01_F {
        scope = 2;
        scopeCurator = 2;
    };
};

class CfgWeapons {
    class AGM_ItemCore;
    class InventoryItem_Base_F;

    class BWplus_Spraycan: AGM_ItemCore {
        displayname = "$STR_BWplus_SprayCan";
        descriptionshort = "$STR_BWplus_SprayCan_Description";
        model = "\bwplus_toolsandstructures\bwplus_spraycan.p3d";
        picture = "\bwplus_toolsandstructures\UI\bwplus_spraycan_ca.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 13.5;
        };
    };

    class BWplus_Spraycan_Empty: BWplus_Spraycan {
        displayname = "$STR_BWplus_SprayCan_empty";
        class ItemInfo: InventoryItem_Base_F {
            mass = 2.5;
        };
    };

    class BWplus_Shovel: AGM_ItemCore {
        displayName = "$STR_BWplus_Shovel";
        descriptionshort = "$STR_BWplus_Shovel_Description";
        scope = 2;
        model = "\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
        picture = "\bwplus_toolsandstructures\UI\BWplus_Shovel_ca.paa";
        simulation = "ItemMineDetector";
        class ItemInfo: InventoryItem_Base_F {
            mass = 20;
            type = 401;
            uniformModel = "\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
        };
    };

    class BWplus_CamoNet_Dismantled: AGM_ItemCore {
        displayName = "$STR_BWplus_CamoNet";
        scope = 2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
        picture = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
        simulation = "ItemMineDetector";
        type = 4096;        
        class ItemInfo: InventoryItem_Base_F {
            mass = 80;
        };
    };
};
