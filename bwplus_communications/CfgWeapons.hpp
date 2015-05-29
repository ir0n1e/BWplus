
class CfgWeapons {
    class ACE_ItemCore;
    class InventoryItem_Base_F;

    class BWplus_Satbag: ACE_ItemCore {
        displayname = "$STR_BWplus_Satbag";
        author = "TheDog / BWplus";
        model = QUOTE(PATHTOF(bwplus_satbag.p3d));
        picture = QUOTE(PATHTOF(UI\bwplus_satbag_ca.paa));
        vehicleClass = "BWplus_Items";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 11.5;
        };
    };
};
