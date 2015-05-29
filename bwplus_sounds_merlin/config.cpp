#include "script_component.hpp"
class CfgPatches {

	class bwplus_sounds_merlin_merlin {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {BWplus_main, bwplus_vehicles, A3_Air_F};
		version = "1.4";
    	versionStr = "1.4";
    	versionAr[] = {1,4,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};

class CfgAddons {
	class PreloadAddons {
		class CONFIG_SOUNDS_CLASS {
			list[] = {"bwplus_sounds_merlin_merlin"};
		};
	};
};
#include "CfgVehicles.hpp"