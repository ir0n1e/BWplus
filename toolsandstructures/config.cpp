#include "script_component.hpp"

class CfgPatches {
    class BWplus_toolsandstructures {
        units[] = {
            BWplus_Box_Exp,
            BWplus_Box_Helipad,
            BWplus_Box_Items, 
            BWplus_CamoNet,
            BWplus_crater,
            BWplus_Flag_Ger,
            BWplus_Item_CamoNet_Dismantled,
            BWplus_Item_Shovel, 
            BWplus_Item_Spraycan,
            BWplus_Kitbag_pio_Green,
            BWplus_Kitbag_pio_Sand,
            BWplus_Spraycan_Empty,
            BWplus_Fennek_Flecktarn_pio
        };
        weapons[] = {
            BWplus_Spraycan, 
            BWplus_Shovel,
            BWplus_CamoNet_Dismantled
        };
        requiredVersion = 1.5;
        requiredAddons[] = {
            BWplus_core,
			ace_interaction
        };
        version = "1.5";
        versionStr = "1.5";
        versionAr[] = {1,5,0};
        author[] = {"EduardLaser", "Ir0n1E"};
        authorUrl = "http://ntalpha.de";
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

#include "CfgEventHandlers.hpp"
enum {
    destructengine = 2,
    destructdefault = 6,
    destructwreck = 7,
    destructtree = 3,
    destructtent = 4,
    stabilizedinaxisx = 1,
    stabilizedinaxesxyz = 4,
    stabilizedinaxisy = 2,
    destructno = 0,
    stabilizedinaxesboth = 3,
    stabilizedinaxesnone = 0,
    destructman = 5,
    destructbuilding = 1
}