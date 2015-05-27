#include "script_component.hpp"

class CfgPatches {
	class BWplus_weapons {
		units[] = {
			"BWplus_Box_weapons_SF",
			"BWplus_Weapon_G28_SF_SD",
			"BWplus_Weapon_G36K_SF_SD_Fleck",
			"BWplus_Weapon_G36K_SF_SD_Tropen"
		};
		weapons[] = {
			"BWplus_G28_SF_SD",
			"BWplus_G36K_AG_SF_Fleck",
			"BWplus_G36K_AG_SF_Tropen",
			"BWplus_G36K_SF_Fleck",
			"BWplus_G36K_SF_Tropen",
			"BWplus_MG4",
			"BWplus_optic_AIM",
			"BWplus_optic_HWS",
			"BWplus_optic_RSAS_Fleck",
			"BWplus_optic_RSAS_Tropen",
			"BWplus_optic_ZO4x30_Fleck",
			"BWplus_optic_ZO4x30_Fleck_IRV",
			"BWplus_optic_ZO4x30_Fleck_NSV",
			"BWplus_optic_ZO4x30_Tropen",
			"BWplus_optic_ZO4x30_Tropen_IRV",
			"BWplus_optic_ZO4x30_Tropen_NSV"
		};

		requiredVersion = 0.1;
		requiredAddons[] = {BWplus_core};
	 	version = "1.4";
    	versionStr = "1.4";
    	versionAr[] = {1,4,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};

class CfgSounds {
	class BWplus_SprayCan_sound {
    	name = "BWplus_SprayCa_sound";
    	sound[] = {"BWplus_weapons\sounds\spray.wss", "db-10", 1};
    	titles[] = {};
  	};
};
#include "cfgVehicles.hpp"
#include "cfgWeapons.hpp"