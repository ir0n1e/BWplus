#include "script_component.hpp"

class CfgPatches {
    class BWplus_communications {
        units[] = {BWplus_SatCom, BWplus_Box_Items, BWplus_Item_Satbag};
        weapons[] = {BWplus_Satbag};
        requiredVersion = 0.1;
        requiredAddons[] = {BWplus_main};
        version = "1.4";
        versionStr = "1.4";
        versionAr[] = {1,4,0};
        author[] = {"EduardLaser", "Ir0n1E", "TheDog"};
        authorUrl = "http://ntalpha.de";
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgEventHandlers.hpp"