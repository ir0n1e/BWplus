

class CfgWeapons {
    class ACE_ItemCore;
    class InventoryItem_Base_F;

    class BWplus_Spraycan: ACE_ItemCore {
        displayname = "$STR_BWplus_SprayCan";
        descriptionshort = "$STR_BWplus_SprayCan_Description";
        model = PATHTOF(bwplus_spraycan.p3d);
        picture = PATHTOF(UI\bwplus_spraycan_ca.paa);
        scope = 2;
        destrType = "DestructBuilding";
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

    class BWplus_Shovel: ACE_ItemCore {
        displayName = "$STR_BWplus_Shovel";
        descriptionshort = "$STR_BWplus_Shovel_Description";
        scope = 2;
        model = "\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
        picture = PATHTOF(UI\BWplus_Shovel_ca.paa);
        simulation = "ItemMineDetector";
        class ItemInfo: InventoryItem_Base_F {
            mass = 20;
            type = 401;
            uniformModel = "\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
        };
    };

    class BWplus_CamoNet_Dismantled: ACE_ItemCore {
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