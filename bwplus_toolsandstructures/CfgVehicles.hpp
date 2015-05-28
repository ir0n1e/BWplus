
class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions  {
           #include "BWplus_toolsandstructures_SelfActions.hpp"
        };
    };

    /*extern*/class BWplus_Box_Empty;
    class BWplus_Box_Items: BWplus_Box_Empty {
        author = "BW.plus";
        displayName = "$STR_BWplus_toolsandstructures_box_items";
        class TransportItems {
            MACRO_ADDITEM(BWplus_Spraycan, 4)
            MACRO_ADDITEM(BWplus_Shovel, 10)
            MACRO_ADDITEM(BWplus_CamoNet_Dismantled, 4)
        };
    };

    class BWplus_Box_Exp: BWplus_Box_Empty {
        class TransportItems {
            MACRO_ADDITEM(BWplus_CamoNet_Dismantled, 2)
            MACRO_ADDITEM(BWplus_Shovel, 2)
        };
    };
	
    class Land_MetalCase_01_medium_F;
    class BWplus_Box_Helipad: Land_MetalCase_01_medium_F {
		displayName = "$STR_BWplus_toolsandstructures_Box_Helipad";
        author = "BW.plus";
        mapSize = 0.7;
        accuracy = 0.2;
        vehicleClass = "BWplus_Items";
        destrType = "DesturctNo";
        transportmaxmagazines = 50;
        maximumload = 2000;
		//MACRO_DRAGABLE
		class eventHandlers {
            Init = "(_this select 0) setvariable ['BWplus_BoxEmpty', false, true]";
        };
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
		class ACE_Actions {
			class ACE_MainActions {	
				displayName = "TEST";
				slection = "";
				distance = 10;
				condition = "true";
				
				class BWplus_buildHelipad {
						
		                displayName = "$STR_BWplus_toolsandstructures_buildHelipad"; 
						condition = "true"; 
						statement = "[_target, ACE_player] call BWplus_toolsandstructures_fnc_buildHelipad";
						exceptions[] = {}; 
						showDisabled = 1; 
						priority = 0.1; 
						icon = PATHTOF(ui\bwplus_lamp_ca.paa);
						distance = 4.5; 
						
						
				};
			};
        };
		class ACE_SelfActions {};
		
        class TransportMagazines {};
        class TransportBackpacks {};
        class TransportWeapons {};
        class TransportItems { 
            MACRO_ADDITEM(BWplus_Spraycan, 2)
            MACRO_ADDITEM(BWplus_Shovel, 1)
        };
    };

    class I_MRAP_03_F;
    class BWplus_Fennek_Flecktarn_pio: I_MRAP_03_F {
        class TransportItems {
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
            Init = "_this call BWplus_toolsandstructures_fnc_initCrater;";
        };
		class ACE_Actions {
            class BWplus_DismantleCrater {
                displayName = "$STR_BWplus_toolsandstructures_DismantleCrate";
				icon = PATHTOF(UI\bwplus_shovel_ca.paa);
                priority = 3;
                distance = 4;
                condition = "!(ACE_player getVariable ['BWplus_building', false]) and {((_target getVariable ""BWplus_builder"") == ACE_player) || {ACE_player getvariable ['BWplus_pio', false]}}";
                statement = "[_target, ACE_player] call BWplus_toolsandstructures_fnc_dismantlecrater;";
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
            init = "(_this select 0) setFlagTexture '\y\bwplus\toolsandstructures\data\flag\flagGER_co.paa'";
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
        icon = PATHTOF(ui\bwplus_lamp_ca.paa);
        picture = PATHTOF(ui\bwplus_lamp_ca.paa);
        mapSize = 0.7;
        accuracy = 0.2;
        vehicleClass = "BWplus_Items";
        scope = 2;
        class eventHandlers {
            Init = "_this call BWplus_toolsandstructures_fnc_lamps_switch;";
        };
		MACRO_DRAGABLE
        
		class ACE_MainActions;
            class BWplus_Lamps_on: ACE_MainActions {
                displayName = "$STR_BWplus_toolsandstructures_LightsOn";
                icon = "BWplus_toolsandstructures\UI\bwplus_lamp_ca.paa";
                priority = 0.5;
                distance = 5;
                condition = "!(_target getVariable ['BWplus_LampOn', false])";
                statement = "[_target] call BWplus_toolsandstructures_fnc_lamps_switch;";
            };
            class BWplus_Lamps_off: ACE_MainActions {
                displayName = "$STR_BWplus_toolsandstructures_LightsOff";
                icon = "BWplus_toolsandstructures\UI\bwplus_lamp_ca.paa";
                priority = 0.5;
                distance = 5;
                condition = "_target getVariable ['BWplus_LampOn', false]";
                statement = "[_target] call BWplus_toolsandstructures_fnc_lamps_switch;";
            };  
       
    };

    class Land_PortableLight_double_F: Land_PortableLight_single_F {
        icon = PATHTOF(ui\bwplus_lamp_ca.paa);
        picture = PATHTOF(ui\bwplus_lamp_ca.paa);
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
		MACRO_DRAGABLE
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