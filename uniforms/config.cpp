#include "script_component.hpp"

class CfgPatches {
    class BWplus_uniforms {
        units[] = {
            BWplus_Box_HeadGear,
            BWplus_Item_Cap_Green,
            BWplus_Item_Cap_Sand,
            BWplus_Item_LBG_shemagh_Green,
            BWplus_Item_LBG_shemagh_Sand,
            BWplus_Item_LCG_shemagh_Green,
            BWplus_Item_LCG_shemagh_Sand,
            BWplus_Item_LOG_shemagh_Green,
            BWplus_Item_LOG_shemagh_Sand,
            BWplus_Item_shemagh_Green,
            BWplus_Item_shemagh_Sand,
            BWplus_Item_Beret_Sani,
            BWplus_Item_Beret_Fldjgr,
            BWplus_Item_Beret_Pio,
            BWplus_Item_Beret_Frnmldr
        };
        weapons[] = {
            BWplus_Cap_Sand,
            BWplus_Cap_Green,
            BWplus_LBG_shemagh_Green,
            BWplus_LBG_shemagh_Sand,
            BWplus_LCG_shemagh_Green,
            BWplus_LCG_shemagh_Sand,
            BWplus_LOG_shemagh_Green,
            BWplus_LOG_shemagh_Sand,
            BWplus_shemagh_Green,
            BWplus_shemagh_Sand,
            BWplus_Beret_Sani,
            BWplus_Beret_Fldjgr,
            BWplus_Beret_Pio,
            BWplus_Beret_Frnmldr
        };
        requiredVersion = 0.1;
        requiredAddons[] = {BWplus_main};
        version = "1.4";
        versionStr = "1.4";
        versionAr[] = {1,4,0};
        author[] = {"EduardLaser","Ir0n1E"};
        authorUrl = "http://ntalpha.de";
        magazines[] = {};
        ammo[] = {};
    };
};

class CfgVehicleClasses {
    class BWplus_Glasses {
        displayName = "$STR_BWplus_Glasses";
    };
};


#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"
#include "CfgWeapons.hpp"

#include "CfgEventHandlers.hpp"