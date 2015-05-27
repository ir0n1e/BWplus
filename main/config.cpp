#include "script_component.hpp"

class CfgPatches {
    class BWplus_core {
        units[] = {BWplus_Box_Empty};
        weapons[] = {};
        requiredVersion = 1.5;
        requiredAddons[] = { 
            ace_main,
			extended_eventhandlers,
			CBA_UI,
			CBA_MAIN,
			CBA_XEH,
			CBA_XEH_A3
        };
        version = "1.5";
        versionStr = "1.5";
        versionAr[] = {1,5,0};
        author[] = {"EduardLaser", "Ir0n1E"};
        authorUrl = "http://ntalpha.de";
    };
};

class CfgMods {
    class PREFIX {
        dir = "@BWplus";
        name = "Core - BW Plus";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = "http://ntalpha.de";
        description = "Site: ";
    };
};

#include "CfgVehicles.hpp"

#include "CfgEventHandlers.hpp"