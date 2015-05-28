class CfgVehicles {
    class Man;
    class CAManBase : Man {
        class ACE_SelfActions {
            class ACE_Equipment {
				class BWplus_SelfActions {
					class BWplus_addGoggles {
						displayName = "$STR_BWplus_AddGoggles";
						priority = 1.5;
						condition = "call BWplus_uniforms_fnc_hasGlassesinItems";
						statement = "call BWplus_uniforms_fnc_addGlasses";
						showDisabled = 0;
						enableInside = 1;
					};
					class BWplus_removeGoggles {
						displayName = "$STR_BWplus_removeGoggles";
						priority = 1;
						condition = "call BWplus_uniforms_fnc_hasGlasses";
						statement = "call BWplus_uniforms_fnc_removeGlasses";
						showDisabled = 0;
						enableInside = 1;
					};
				};
            };
        };
    };
    class Box_NATO_Support_F;
    class BWplus_Box_HeadGear: Box_NATO_Support_F {
        author = "BW.plus";
        displayName = "$STR_BWplus_box_HeadGear";
        scope = 2;
        scopeCurator = 2;
        transportmaxmagazines = 9001;
        transportmaxbackbacks = 0;
        maximumload = 2000;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {
            MACRO_ADDITEM(BWplus_Cap_Green, 5)
            MACRO_ADDITEM(BWplus_Cap_Sand, 5)
            MACRO_ADDITEM(BBWplus_LOG_shemagh_Sand, 5)
            MACRO_ADDITEM(BWplus_LOG_shemagh_Green, 5)
            MACRO_ADDITEM(BWplus_LCG_shemagh_Sand, 5)
            MACRO_ADDITEM(BWplus_LCG_shemagh_Green, 5)
            MACRO_ADDITEM(BWplus_LBG_shemagh_Sand, 5)
            MACRO_ADDITEM(BWplus_LBG_shemagh_Green, 5)
            MACRO_ADDITEM(BWplus_shemagh_Sand, 5)
            MACRO_ADDITEM(BWplus_shemagh_Green, 5)
            MACRO_ADDITEM(BWplus_Beret_Sani, 5)
            MACRO_ADDITEM(BWplus_Beret_Fldjgr, 5)
            MACRO_ADDITEM(BWplus_Beret_Pio, 5)
            MACRO_ADDITEM(BWplus_Beret_Frnmldr, 5)
        };
    };
    
    class Item_Base_F;
    class BWplus_Item_Cap_Sand : Item_Base_F {
        author = "BW.plus";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_Cap_Sand";
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
            MACRO_ADDITEM(BWplus_Cap_Sand, 1)
        };
    };
    class BWplus_Item_Cap_Green : Item_Base_F {
        author = "BW.plus";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_Cap_Green";
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
          MACRO_ADDITEM(BWplus_Cap_Green, 1)
        };
    };
    class BWplus_Item_shemagh_Green : Item_Base_F {
        author = "BW.plus";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "BWplus_Glasses";
        displayname = "$STR_BWplus_Shemagh_Green";
        class TransportItems {
            MACRO_ADDITEM(BWplus_shemagh_Green, 1)
        };
    };
    class BWplus_Item_shemagh_Sand : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_Shemagh_Sand";
        class TransportItems {
            MACRO_ADDITEM(BWplus_shemagh_Sand, 1)
        };
    };
    class BWplus_Item_LOG_shemagh_Sand : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LOG_Shemagh_Sand";
        class TransportItems {        
            MACRO_ADDITEM(BWplus_LOG_shemagh_Sand, 1)
        };
    };
    class BWplus_Item_LOG_shemagh_Green : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LOG_Shemagh_Green";
        class TransportItems {
            MACRO_ADDITEM(BWplus_LOG_shemagh_Green, 1)
        };
    };
    class BWplus_Item_LBG_shemagh_Sand : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LBG_Shemagh_Sand";
        class TransportItems {
            MACRO_ADDITEM(BWplus_LBG_shemagh_Sand, 1)
        };
    };
    class BWplus_Item_LBG_shemagh_Green : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LBG_Shemagh_Green";
        class TransportItems {
            MACRO_ADDITEM(BWplus_LBG_shemagh_Green, 1)
        };
    };
    class BWplus_Item_LCG_shemagh_Sand : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LCG_Shemagh_Sand";
        class TransportItems {
            MACRO_ADDITEM(BWplus_LCG_shemagh_Sand, 1)
        };
    };
    class BWplus_Item_LCG_shemagh_Green : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LOG_Shemagh_Green";
        class TransportItems {
            MACRO_ADDITEM(BWplus_LCG_shemagh_Green, 1)
        };
    };
    class BWplus_Item_Beret_Sani: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_uniforms_beretsani";
        vehicleClass = "ItemsHeadgear";

        class TransportItems {
           MACRO_ADDITEM(BWplus_Beret_Sani, 1)
        };
    };
    class BWplus_Item_Beret_Fldjr: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_uniforms_beretfldjgr";
        vehicleClass = "ItemsHeadgear";

        class TransportItems {
           MACRO_ADDITEM(BWplus_Beret_Fldjgr, 1)
        };
    };
    class BWplus_Item_Beret_Pio: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_uniforms_beretPio";
        vehicleClass = "ItemsHeadgear";

        class TransportItems {
           MACRO_ADDITEM(BWplus_Beret_Pio, 1)
        };
    };
    class BWplus_Item_Beret_Frnmldr: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_uniforms_beretFrnmldr";
        vehicleClass = "ItemsHeadgear";

        class TransportItems {
           MACRO_ADDITEM(BWplus_Beret_Frnmldr, 1)
        };
    };
};
