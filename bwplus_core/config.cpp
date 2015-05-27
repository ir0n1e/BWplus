class CfgPatches {
    class BWplus_core {
        units[] = {BWplus_Box_Empty};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            bwa3_common,
            bwa3_weapons,
            bwa3_units, 
            AGM_Core
        };
        version = "1.4.1";
        versionStr = "1.4.1";
        versionAr[] = {1,4,1};
        author[] = {"EduardLaser", "Ir0n1E"};
        authorUrl = "http://ntalpha.de";
    };
};

class CfgFunctions {
    class BWplus_core {
        class BWplus_core {
            file = "BWplus_core\fnc";
            class BuildAbort;
            class addTFRbackpack;
            class addRavenbackpack;
        };
    };
};

class CfgVehicles {
    class Box_NATO_Support_F;
    class BWplus_Box_Empty: Box_NATO_Support_F {
        author = "BW.plus";
        displayName = "[BW.plus] Box (Empty)";
        transportmaxmagazines = 9001;
        maximumload = 2000;
        class TransportItems {};
        class TransportWeapons {};
        class TransportMagazines {};
    };
};
