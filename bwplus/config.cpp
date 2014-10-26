class CfgPatches {
	class BWplus {
		units[] = {"SpecOps_Fleck", "SpecOps_Tropen","BWplus_Item_Shovel","BWplus_Recon_Marksman_Tropentarn","BWplus_Recon_Marksman_Flecktarn","BWplus_Recon_TL_Tropentarn","BWplus_Recon_TL_Flecktarn","BWplus_Recon_CombatLifeSaver_Tropentarn","BWplus_Recon_CombatLifeSaver_Flecktarn","BWplus_Recon_Pioneer_Tropentarn","BWplus_Recon_Pioneer_Flecktarn","BWplus_Recon_Spotter_Tropentarn","BWplus_Recon_Spotter_Flecktarn","BWplus_Weapon_G28_SF_SD","BWplus_Box_weapons_SF","BWplus_Pioneer_Flecktarn","BWplus_Pioneer_Tropentarn"};
		weapons[] = {"BWplus_MG4","BWplus_optic_RSAS_Fleck","BWplus_optic_RSAS_Tropen","BWplus_G36K_AG_SF_Tropen","BWplus_G36K_AG_SF_Fleck","BWplus_optic_ZO4x30_Fleck_NSV","BWplus_optic_ZO4x30_Tropen_NSV","BWplus_optic_ZO4x30_Fleck_IRV","BWplus_optic_ZO4x30_Tropen_IRV","BWplus_optic_ZO4x30_Tropen","BWplus_optic_ZO4x30_Fleck","BWplus_optic_HWS","BWplus_Shovel","BWplus_G28_SF_SD","BWplus_G36K_SF_Tropen","BWplus_G36K_SF_Fleck"};
		requiredVersion = 0.1;
		requiredAddons[] = {"agm_core","bwa3_weapons","bwa3_units"};
	 	version = "1.2";
    	versionStr = "1.2";
    	versionAr[] = {1,2,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};

class CfgFactionClasses {
	class BWplus {
    	displayName = "BWplus";
    	priority = 0.1;
    	side = 1;
  	};
};


class CfgFunctions {
	class BWplus {
    	class BWplus {
      		file = "\BWplus\fnc";
    		class note;
    	};
  	};
};
class CfgVehicleClasses {
	class BWplus_VehClass_SpecOps_Fleck {
		displayName = "SpecOps Fleck";
	};

	class BWplus_VehClass_SpecOps_Tropen {
		displayName = "SpecOps Tropen";
	};
};
#include <Macros.hpp>

class CfgVehicles {
	
	class B_soldier_exp_F;
	class BWplus_Pioneer_Flecktarn: B_soldier_exp_F {
		displayName = "$STR_BWplus_Pioneer";
		author = "BWplus";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Men_Fleck"; 
		genericNames = "BundeswehrMen";
		hiddenSelections[] = {"camo"};
		weapons[] = {"BWA3_G36K_equipped","BWA3_P8","Throw","Put","BWA3_Vector"};
		uniformClass = "BWA3_Uniform3_Fleck";
		items[] =  {"BWplus_Shovel","AGM_Morphine","AGM_Morphine","AGM_Morphine","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","NVGoggles_OPFOR","Laserbatteries"};
		respawnitems[] =  {"BWplus_Shovel","AGM_Morphine","AGM_Morphine","AGM_Morphine","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","NVGoggles_OPFOR","Laserbatteries"};
		respawnLinkedItems[] = {"BWA3_Vest_Rifleman1_Fleck","BWA3_OpsCore_Fleck","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnMagazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		respawnWeapons[] = {"BWA3_G36K_equipped","BWA3_P8","Throw","Put","BWA3_Vector"};
		linkedItems[] = {"BWA3_Vest_Rifleman1_Fleck","BWA3_OpsCore_Fleck","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		magazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		class eventHandlers {
	 		Init = "(_this select 0) execvm '\BWplus\init_pio.sqf'";
	 	};
	};
	
	class BWplus_Pioneer_Tropentarn: BWplus_Pioneer_Flecktarn {
		displayName = "$STR_BWplus_Pioneer";
		author = "BWplus";
		vehicleClass = "BWA3_VehClass_Men_Tropen"; 
		uniformClass = "BWA3_Uniform3_Tropen";
		respawnLinkedItems[] = {"BWA3_Vest_Rifleman1_Tropen","BWA3_OpsCore_Tropen","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnMagazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		respawnWeapons[] = {"BWA3_G36K_equipped","BWA3_P8","Throw","Put","BWA3_Vector"};
		linkedItems[] = {"BWA3_Vest_Rifleman1_Tropen","BWA3_OpsCore_Tropen","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	
	class BWA3_Spotter_Fleck;
	class BWplus_Recon_Spotter_Flecktarn: BWA3_Spotter_Fleck {
		displayName = "$STR_BWplus_Recon_Spotter";
		author = "BWplus";
		camouflage = 0.850000;
		accuracy = 2.000000;
		vehicleClass = "BWplus_VehClass_SpecOps_Fleck"; 
		uniformClass = "BWA3_Uniform_Fleck";
		weapons[] = {"BWplus_G36K_AG_SF_SD_Fleck","bwa3_P8","Throw","Put","Laserdesignator"};
		magazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeGreen_Grenade_shell","1rnd_SmokeGreen_Grenade_shell"};
		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Marksman_Fleck", "BWA3_Booniehat_Fleck", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeGreen_Grenade_shell","1rnd_SmokeGreen_Grenade_shell"};
		respawnWeapons[] = {"BWplus_G36K_AG_SF_SD_Fleck","BWA3_P8","Throw","Put","Laserdesignator"};
		respawnlinkedItems[] = {"BWA3_Vest_Marksman_Fleck", "BWA3_Booniehat_Fleck", "BWA3_ItemNavipad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		items[] =  {"BWA3_ItemKestrel","BWA3_G_Combat_Black","AGM_Morphine","AGM_Morphine","AGM_Morphine","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","NVGoggles_OPFOR","Laserbatteries"};
		respawnitems[] =  {"BWA3_ItemKestrel","BWA3_G_Combat_Black","AGM_Morphine","AGM_Morphine","AGM_Morphine","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","NVGoggles_OPFOR","Laserbatteries"};
		class eventHandlers {
			Init = "(_this select 0) call compile preprocessFileLineNumbers '\BWplus\scripts\Raven.sqf'";
		};
	};

	class BWplus_Recon_Spotter_Tropentarn: BWplus_Recon_Spotter_Flecktarn {
		vehicleClass = "BWplus_VehClass_SpecOps_Tropen"; 
		uniformClass = "BWA3_Uniform_Tropen";
		weapons[] = {"BWplus_G36K_AG_SF_SD_Tropen","bwa3_P8","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"BWplus_G36K_AG_SF_SD_Tropen","BWA3_P8","Throw","Put","Laserdesignator"};
		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Marksman_Tropen", "BWA3_Booniehat_Tropen", "BWA3_ItemNavipad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnlinkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Marksman_Tropen", "BWA3_Booniehat_Tropen", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class BWplus_Recon_Pioneer_Flecktarn: BWplus_Recon_Spotter_Flecktarn {
		displayName = "$STR_BWplus_Recon_Pioneer";
		author = "BWplus";
		vehicleClass = "BWplus_VehClass_SpecOps_Fleck"; 
		uniformClass = "BWA3_Uniform3_Fleck";
		weapons[] = {"BWplus_G36K_SF_SD_Fleck","BWA3_P8","Throw","Put","BWA3_Vector"};
		respawnWeapons[] = {"BWplus_G36K_SF_SD_Fleck","BWA3_P8","Throw","Put","BWA3_Vector"};
		items[] =  {"BWplus_Shovel","AGM_Morphine","AGM_Morphine","AGM_Morphine","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","NVGoggles_OPFOR","Laserbatteries"};
		respawnitems[] =  {"BWplus_Shovel","AGM_Morphine","AGM_Morphine","AGM_Morphine","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","NVGoggles_OPFOR","Laserbatteries"};
		linkedItems[] = {"BWplus_LCG_shemagh_Green","BWA3_Vest_Rifleman1_Fleck","BWplus_Cap_Green","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"BWplus_LCG_shemagh_Green","BWA3_Vest_Rifleman1_Fleck","BWplus_Cap_Green","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		respawnmagazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		
		class eventHandlers {
	 		Init = "(_this select 0) execvm '\BWplus\init_pio.sqf'";
	 	};
	};

	class BWplus_Recon_Pioneer_Tropentarn: BWplus_Recon_Pioneer_Flecktarn {
		author = "BWplus";
		vehicleClass = "BWplus_VehClass_SpecOps_Tropen"; 
		uniformClass = "BWA3_Uniform3_Tropen";
		weapons[] = {"BWplus_G36K_SF_SD_Tropen","BWA3_P8","Throw","Put","BWA3_Vector"};
		respawnWeapons[] = {"BWplus_G36K_SF_SD_Tropen","BWA3_P8","Throw","Put","BWA3_Vector"};
		linkedItems[] = {"BWplus_LCG_shemagh_Sand","BWA3_Vest_Rifleman1_Tropen","BWplus_Cap_Sand","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"BWplus_LCG_shemagh_Sand","BWA3_Vest_Rifleman1_Tropen","BWplus_Cap_Sand","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class BWA3_CombatLifeSaver_Fleck;
	class BWplus_Recon_CombatLifeSaver_Flecktarn: BWA3_CombatLifeSaver_Fleck {
		displayName = "$STR_BWplus_Recon_Medic";
		author = "BWplus";
		vehicleClass = "BWplus_VehClass_SpecOps_Fleck"; 
		uniformClass = "BWA3_Uniform_Fleck";
		weapons[] = {"BWplus_G36K_SF_SD_Fleck","BWA3_P8","Throw","Put","BWA3_Vector"};
		respawnWeapons[] = {"BWplus_G36K_SF_SD_Fleck","BWA3_P8","Throw","Put","BWA3_Vector"};
		items[] =  {"NVGoggles_OPFOR"};
		respawnitems[] =  {"NVGoggles_OPFOR"};
		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Medic_Fleck","BWA3_Booniehat_Fleck","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Medic_Fleck","BWA3_Booniehat_Fleck","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		respawnmagazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
	};

	class BWplus_Recon_CombatLifeSaver_Tropentarn: BWplus_Recon_CombatLifeSaver_Flecktarn {
		author = "BWplus";
		vehicleClass = "BWplus_VehClass_SpecOps_Tropen"; 
		uniformClass = "BWA3_Uniform_Tropen";
		weapons[] = {"BWplus_G36K_SF_SD_Tropen","BWA3_P8","Throw","Put","BWA3_Vector"};
		respawnWeapons[] = {"BWplus_G36K_SF_SD_Tropen","BWA3_P8","Throw","Put","BWA3_Vector"};
		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Medic_Tropen","BWA3_Booniehat_Tropen","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Medic_Tropen","BWA3_Booniehat_Tropen","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class BWA3_TL_Fleck;
	class BWplus_Recon_TL_Flecktarn: BWA3_TL_Fleck {
		displayName = "$STR_BWplus_Recon_TL";
		author = "BWplus";
		camouflage = 0.850000;
		vehicleClass = "BWplus_VehClass_SpecOps_Fleck"; 
		uniformClass = "BWA3_Uniform_Fleck";
		weapons[] = {"BWplus_G36K_AG_SF_SD_Fleck","bwa3_P8","Throw","Put","BWA3_Vector"};
		magazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeGreen_Grenade_shell","1rnd_SmokeGreen_Grenade_shell"};
		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Leader_Fleck", "BWA3_Booniehat_Fleck", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeGreen_Grenade_shell","1rnd_SmokeGreen_Grenade_shell"};
		respawnWeapons[] = {"BWplus_G36K_AG_SF_SD","BWplus_P8_SD","Throw","Put","BWA3_Vector"};
		respawnlinkedItems[] = {"BWA3_Vest_Leader_Fleck", "BWA3_Booniehat_Fleck", "BWA3_ItemNavipad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		items[] =  {"BWA3_G_Combat_Black","AGM_Morphine","AGM_Morphine","AGM_Morphine","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","NVGoggles_OPFOR"};
		respawnitems[] =  {"BWA3_G_Combat_Black","AGM_Morphine","AGM_Morphine","AGM_Morphine","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","NVGoggles_OPFOR"};
	};

	class BWplus_Recon_TL_Tropentarn: BWplus_Recon_TL_Flecktarn {
		author = "BWplus";
		vehicleClass = "BWplus_VehClass_SpecOps_Tropen"; 
		uniformClass = "BWA3_Uniform_Tropen";
		weapons[] = {"BWplus_G36K_AG_SF_SD_Tropen","bwa3_P8","Throw","Put","BWA3_Vector"};
		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Leader_Tropen", "BWA3_Booniehat_Tropen", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnWeapons[] = {"BWplus_G36K_AG_SF_SD","BWplus_P8_SD","Throw","Put","BWA3_Vector"};
		respawnlinkedItems[] = {"BWA3_Vest_Leader_Tropen", "BWA3_Booniehat_Tropen", "BWA3_ItemNavipad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	class BWA3_Marksman_Fleck;

		
	class BWplus_Recon_Marksman_Flecktarn: BWA3_Marksman_Fleck {
		displayName = "$STR_BWplus_Recon_Marksman";
		author = "BWplus";
		scopeCurator = 2;
		camouflage = 0.60000;
		accuracy = 3.500000;
		vehicleClass = "BWplus_VehClass_SpecOps_Fleck"; 
		uniformClass = "BWA3_Uniform_Fleck";
		weapons[] = {"BWplus_G28_SF_SD","bwa3_P8","Throw","Put","BWA3_Vector"};
		respawnWeapons[] = {"BWplus_G28_SF_SD","bwa3_P8","Throw","Put","BWA3_Vector"};
		magazines[] = {"BWA3_10Rnd_762x51_G28_SD","BWA3_10Rnd_762x51_G28_SD","BWA3_10Rnd_762x51_G28_SD","BWA3_10Rnd_762x51_G28_SD","BWA3_10Rnd_762x51_G28_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};

		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Marksman_Fleck", "BWA3_Booniehat_Fleck", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnlinkedItems[] = {"BWA3_Vest_Marksman_Fleck", "BWA3_Booniehat_Fleck", "BWA3_ItemNavipad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		items[] =  {"BWA3_ItemKestrel","AGM_Morphine","AGM_Morphine","AGM_Morphine","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","NVGoggles_OPFOR"};
		respawnitems[] =  {"BWA3_ItemKestrel","BWplus_shemagh_Green","AGM_Morphine","AGM_Morphine","AGM_Morphine","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","AGM_Bandage","NVGoggles_OPFOR"};

	};
	class BWplus_Recon_Marksman_Tropentarn: BWplus_Recon_Marksman_Flecktarn {
		author = "BWplus";
		camouflage = 0.60000;
		accuracy = 3.500000;
		vehicleClass = "BWplus_VehClass_SpecOps_Tropen"; 
		uniformClass = "BWA3_Uniform_Tropen";
		linkedItems[] = {"BWA3_Vest_Marksman_Tropen", "BWA3_Booniehat_Tropen", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnlinkedItems[] = {"BWplus_shemagh_Sand","BWA3_Vest_Marksman_Tropen", "BWA3_Booniehat_Tropen", "BWA3_ItemNavipad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class Weapon_Base_F;
	class BWplus_Weapon_G36K_SF_SD_Fleck: Weapon_Base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWplus_Weapon_G36K_SF_SD_Fleck";
		vehicleClass = "WeaponsPrimary";

		class TransportWeapons {

			class BWplus_G36K_SF_SD_Fleck {
				weapon = "BWplus_G36K_SF_SD_Fleck";
				count = 1;
			};
		};

		class TransportMagazines {
			class BWA3_30Rnd_556x45_G36 {
				magazine = "BWA3_30Rnd_556x45_G36_SD";
				count = 1;
			};
		};
	};
	class BWplus_Weapon_G36K_SF_SD_Tropen: BWplus_Weapon_G36K_SF_SD_Fleck {
		class TransportWeapons {
			displayName = "$STR_BWplus_Weapon_G36K_SF_SD_Tropen";
			class BWplus_G36K_SF_SD_Tropen {
				weapon = "BWplus_G36K_SF_SD_Tropen";
				count = 1;
			};
		};
	};

	class BWplus_Weapon_G28_SF_SD: Weapon_Base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "G28 SF SD";
		vehicleClass = "WeaponsPrimary";

		class TransportWeapons {

			class BWplus_G36K_SF_SD_Fleck {
				weapon = "BWplus_G28_SF_SD";
				count = 1;
			};
		};

		class TransportMagazines {
			class BWA3_10Rnd_762x51_G28_SD {
				magazine = "BWA3_10Rnd_762x51_G28_SD";
				count = 1;
			};
		};
	};
	
	class Box_NATO_Wps_F;
	class BWplus_Box_weapons_SF: Box_NATO_Wps_F {
		author = "BWplus";
	    displayName = "$STR_BWplus_Box_weapons_SF";
    	scope = 2;
    	scopeCurator = 2;
    	transportmaxmagazines = 9001;
    	transportmaxbackbacks = 0;
    	maximumload = 2000;
	
    	class TransportItems { 
			MACRO_ADDITEM(BWplus_optic_HWS, 4)
			MACRO_ADDITEM(BWplus_optic_AIM, 4)
			MACRO_ADDITEM(BWplus_optic_ZO4x30_Fleck, 4)
			MACRO_ADDITEM(BWplus_optic_ZO4x30_Tropen, 4)
			MACRO_ADDITEM(BWplus_optic_RSAS_Fleck, 4)
			MACRO_ADDITEM(BWplus_optic_RSAS_Tropen, 4)
			MACRO_ADDITEM(BWplus_optic_ZO4x30_Fleck_NSV, 4)
			MACRO_ADDITEM(BWplus_optic_ZO4x30_Tropen_NSV, 4)
			MACRO_ADDITEM(BWplus_optic_ZO4x30_Fleck_IRV, 4)
			MACRO_ADDITEM(BWplus_optic_ZO4x30_Tropen_IRV, 4)
		};
		class TransportWeapons {
			MACRO_ADDWEAPON(BWplus_G36K_AG_SF_Fleck, 2)
			MACRO_ADDWEAPON(BWplus_G36K_AG_SF_Tropen, 2)
			MACRO_ADDWEAPON(BWplus_G36K_SF_Fleck, 2)
			MACRO_ADDWEAPON(BWplus_G36K_SF_Tropen, 2)
			MACRO_ADDWEAPON(BWplus_G28_SF_SD, 2)
		};
		class TransportMagazines {};
	};
	//BWplus_Shovel
	class Item_Base_F;
	class BWplus_Item_Shovel: Item_Base_F {
		author = "BWplus";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWplus_Shovel";
		vehicleClass = "BWplus_Items";

		class TransportItems {
			class BWplus_Shovel {
				name = "BWplus_Shovel";
				count = 1;
			};
		};
	};
};

class CfgGroups {

	class West {

		class Bundeswehr {
			name = "Bundeswehr";

			class SpecOps_Fleck {
				name = "SpecOps Fleck";

				
				class BWplusRecon {
					faction = "BWA3_Faction";
					name = "Fernspäher";
					side = 1;
					class Unit0 {
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BWplus_Recon_TL_Flecktarn";
					};
					class Unit1 {
						position[] = {5, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BWplus_Recon_Spotter_Flecktarn";
					};

					class Unit2 {
						position[] = {10, 0, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BWplus_Recon_Pioneer_Flecktarn";
					};
					class Unit3 {
						position[] = {15, 0, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BWplus_Recon_CombatLifeSaver_Flecktarn";
					};
					class Unit4 {
						position[] = {20, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BWplus_Recon_Marksman_Flecktarn";
					};
				};
			};
			class SpecOps_Tropen {
				name = "SpecOps Tropen";
				class BWplusRecon {
					faction = "BWA3_Faction";
					name = "Fernspäher";
					side = 1;
					class Unit0 {
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BWplus_Recon_TL_Tropentarn";
					};
					class Unit1 {
						position[] = {5, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BWplus_Recon_Spotter_Tropentarn";
					};

					class Unit2 {
						position[] = {10, 0, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BWplus_Recon_Pioneer_Tropentarn";
					};
					class Unit3 {
						position[] = {15, 0, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BWplus_Recon_CombatLifeSaver_Tropentarn";
					};
					class Unit4 {
						position[] = {20, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BWplus_Recon_Marksman_Tropentarn";
					};
				};
			};
			class Motorized {
				name = "Motorized Troops";
				class BWplus_Motorized_Fleck {
					name = "Motorized Fleck";
					side = 1;
					faction = "BWA3_Faction";
					class Unit0 {
						side = 1;
						vehicle = "BWA3_TL_Fleck";
						rank = "LIEUTENANT";
						position[] = {0, 5, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Fennek_Flecktarn_mg";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "BWA3_RiflemanAT_Pzf3_Fleck";
						rank = "CORPORAL";
						position[] = {5, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "BWA3_Grenadier_Fleck";
						rank = "CORPORAL";
						position[] = {7, 0, 0};
					};
				};
			};
		};
	};
};

class CfgWeapons {
	class ItemCore;
	class InventoryItem_Base_F;
	class BWA3_P8;
	class InventoryOpticsItem_Base_F;
	class BWA3_PointerSlot;
	class Rifle_Base_F;
	class BWA3_MG4;
	class BWA3_G36K_AG;
	class BWA3_G36K;
	class BWA3_optic_ZO4x30;
	class BWA3_optic_RSAS;
	class BWA3_optic_ZO4x30_NSV;
	class BWA3_optic_ZO4x30_IRV;
	
	/*extern*/ class Default;

	
	class BWA3_Slot_Base;
	class BWA3_CowsSlot_Base: BWA3_Slot_Base {
		class compatibleItems;
	};
	
	class BWA3_CowsSlot: BWA3_CowsSlot_Base {
		class compatibleItems: compatibleItems {
			BWplus_optic_HWS = 1;
			BWplus_optic_AIM = 1;
			BWplus_optic_ZO4x30_Fleck = 1;
			BWplus_optic_ZO4x30_Tropen = 1;
			BWplus_optic_RSAS_Fleck = 1;
			BWplus_optic_RSAS_Tropen = 1;
			BWplus_optic_ZO4x30_Tropen_NSV = 1;
			BWplus_optic_ZO4x30_Fleck_NSV = 1;
			BWplus_optic_ZO4x30_Tropen_IRV = 1;
			BWplus_optic_ZO4x30_Fleck_IRV = 1;
		};
	};
	class BWA3_CowsSlot_Long: BWA3_CowsSlot_Base {
		class compatibleItems: compatibleItems {
			BWplus_optic_HWS = 1;
			BWplus_optic_AIM = 1;
		};
	};
	class BWA3_CowsSlot_Short: BWA3_CowsSlot_Base {
		class compatibleItems: compatibleItems {
			BWplus_optic_HWS = 1;
			BWplus_optic_AIM = 1;
		};
	};

	class BWplus_Shovel: ItemCore {
		displayName = "$STR_BWplus_Shovel";
		scope = 2;
		model = "\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
		picture = "\BWplus\UI\BWplus_Shovel_ca.paa";
		
		class ItemInfo: InventoryItem_Base_F {
      		mass = 20;
      		type = 401;
			uniformModel = "\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
		};
	};

	class BWplus_Item_CamoNet: ItemCore {
		displayName = "$STR_BWplus_Item_CamoNet";
		scope = 2;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
		class ItemInfo: InventoryItem_Base_F {
      		mass = 80;
      		type = 401;
      		uniformModel = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
      	};
	};
	class BWplus_MG4: BWA3_MG4 {
		displayName = "BWplus MG4 Luis Edition";
		descriptionShort = "BWplus MG4 Luis Edition";
		model = "\bwplus\bwplus_mg4.p3d";
		author = "BWA3, BWplus";	
	};

	class BWplus_G36K_AG_SF_Fleck: BWA3_G36K_AG {
		displayName = "$STR_BWplus_Weapon_G36K_AG_SF_SD_Fleck";
		model = "\bwplus\bwplus_g36k_ag_fleck.p3d";
		author = "BWA3, BWplus";	
		scope = 2;
		class WeaponSlotsInfo {
			allowedslots[] = {901};
			mass = "60 + 20";

			class MuzzleSlot {
				access = 1;
				scope = 0;
				compatibleItems[] = {"BWA3_muzzle_snds_G36"};
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: BWA3_CowsSlot {};
			class PointerSlot: BWA3_PointerSlot {};
		};
	};
	
	class BWplus_G36K_AG_SF_SD_Fleck: BWplus_G36K_AG_SF_Fleck {
		author = "BWA3, BWplus";	
		class TransportMagazines {
			class BWA3_30Rnd_556x45_G36 {
				magazine = "BWA3_30Rnd_556x45_G36_SD";
				count = 1;
			};
			class 1rnd_HE_Grenade_shell {
				magazine = "1rnd_HE_Grenade_shell";
				count = 1;
			};
		};
		class LinkedItems {
			class LinkedItemsOptic {
				item = "BWplus_optic_ZO4x30_Fleck";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "BWA3_muzzle_snds_G36";
				slot = "MuzzleSlot";
			};
		};
	};
	class BWplus_G36K_AG_SF_Tropen: BWplus_G36K_AG_SF_Fleck {
		displayName = "$STR_BWplus_Weapon_G36K_AG_SF_SD_Tropen";
		model = "\bwplus\bwplus_g36k_ag_tropen.p3d";
		author = "BWA3, BWplus";	
	};
	
	class BWplus_G36K_AG_SF_SD_Tropen: BWplus_G36K_AG_SF_Tropen {
		
		class TransportMagazines {
			class BWA3_30Rnd_556x45_G36 {
				magazine = "BWA3_30Rnd_556x45_G36_SD";
				count = 1;
			};
			class 1rnd_HE_Grenade_shell {
				magazine = "1rnd_HE_Grenade_shell";
				count = 1;
			};
		};
		class LinkedItems {
			class LinkedItemsOptic {
				item = "BWplus_optic_ZO4x30_Tropen";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "BWA3_muzzle_snds_G36";
				slot = "MuzzleSlot";
			};
		};
	};

	class BWplus_G36K_SF_Fleck: BWA3_G36K {
		displayName = "$STR_BWplus_Weapon_G36K_SF_SD_Fleck";
		model = "\BWplus\bwplus_g36k_fleck.p3d";
		author = "BWA3, BWplus";	
		scope = 2;

		class WeaponSlotsInfo {
			allowedslots[] = {901};
			mass = 60;

			class MuzzleSlot {
				access = 1;
				scope = 0;
				compatibleItems[] = {"BWA3_muzzle_snds_G36"};
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: BWA3_CowsSlot {};
			class PointerSlot: BWA3_PointerSlot {};
		};

		class TransportMagazines {
			class BWA3_30Rnd_556x45_G36 {
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 1;
			};
		};
	};

	class BWplus_G36K_SF_SD_Fleck: BWplus_G36K_SF_Fleck {
		class TransportMagazines {
			class BWA3_30Rnd_556x45_G36 {
				magazine = "BWA3_30Rnd_556x45_G36_SD";
				count = 1;
			};
		};

		class LinkedItems {
			class LinkedItemsOptic {
				item = "BWplus_optic_ZO4x30_Fleck";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "BWA3_muzzle_snds_G36";
				slot = "MuzzleSlot";
			};
		};
	};

	class BWplus_G36K_SF_Tropen: BWplus_G36K_SF_Fleck {
		model = "\BWplus\bwplus_g36k_tropen.p3d";
		displayName = "$STR_BWplus_Weapon_G36K_SF_SD_Tropen";
		author = "BWA3, BWplus";	
	};
	
	class BWplus_G36K_SF_SD_Tropen: BWplus_G36K_SF_Tropen {
		class TransportMagazines {
			class BWA3_30Rnd_556x45_G36 {
				magazine = "BWA3_30Rnd_556x45_G36_SD";
				count = 1;
			};
		};
		class LinkedItems {
			class LinkedItemsOptic {
				item = "BWplus_optic_ZO4x30_Tropen";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "BWA3_muzzle_snds_G36";
				slot = "MuzzleSlot";
			};
		};
	};
	class BWA3_G28_Standard_equipped;
	class BWplus_G28_SF_SD: BWA3_G28_Standard_equipped {
		displayName = "G28 SF SD";
		author = "BWA3, BWplus";	
		class LinkedItems {

			class LinkedItemsOptic {
				item = "BWA3_optic_20x50";
				slot = "CowsSlot";
			};

			class LinkedItemsAcc {
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "BWA3_muzzle_snds_G28";
				slot = "MuzzleSlot";
			};
		};
	};

	class BWplus_optic_HWS: ItemCore {
		scope = 2;
		displayName = "EoTech HWS 533";
		picture = "\BWplus\UI\gear_acco_HWS_black_ca.paa";
		model = "\BWplus\HWS_533_black.p3d";
		descriptionShort = "Holographics Weapon Sight";
		weaponInfoType = "RscWeaponZeroing";

		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 4;
			RMBhint = "EOT xps3";
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			priority = 1;

			class OpticsModes {

				class EoTx {
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
	};

	class BWplus_optic_AIM: ItemCore {
		scope = 2;
		displayName = "Aimpoint (Black)";
		picture = "\BWplus\UI\gear_acco_compm4_ca.paa";
		model = "\BWplus\aimpoint.p3d";
		descriptionShort = "Close Combat optic";
		weaponInfoType = "RscWeaponZeroing";

		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 2;
			RMBhint = "Advanced Collimator Optics";
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;

			class OpticsModes {

				class ACO {
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
	};
	class BWplus_optic_ZO4x30_Tropen: BWA3_optic_ZO4x30 {
		model = "\bwplus\bwplus_zo4x30_tropen.p3d";
		displayName = "$STR_Bwplus_optic_ZO4x30_Tropen";
		author = "BWA3, BWplus";
		BWA3_compatibleNVG = "BWA3_optic_NSV600";
		BWA3_compatibleTIC = "BWA3_optic_IRV600";
	};
	class Bwplus_optic_ZO4x30_Fleck: BWA3_optic_ZO4x30 {
		model = "\bwplus\bwplus_zo4x30_fleck.p3d";
		displayName = "$STR_Bwplus_optic_ZO4x30_Sand";
		author = "BWA3, BWplus";
		BWA3_compatibleNVG = "BWA3_optic_NSV600";
		BWA3_compatibleTIC = "BWA3_optic_IRV600";
	};
	class BWplus_optic_ZO4x30_Tropen_NSV: BWA3_optic_ZO4x30_NSV {
		model = "\bwplus\bwplus_zo4x30_tropen_nsv.p3d";
		displayName = "$STR_BWplus_optic_ZO4x30_Tropen_NSV";
		author = "BWA3, BWplus";
	};
	class BWplus_optic_ZO4x30_Fleck_NSV: BWA3_optic_ZO4x30_NSV {
		model = "\bwplus\bwplus_zo4x30_fleck_nsv.p3d";
		displayName = "$STR_BWplus_optic_ZO4x30_Fleck_NSV";
		author = "BWA3, BWplus";
	};
	class BWplus_optic_ZO4x30_Tropen_IRV: BWA3_optic_ZO4x30_IRV {
		model = "\bwplus\bwplus_zo4x30_tropen_irv.p3d";
		displayName = "$STR_BWplus_optic_ZO4x30_Tropen_IRV";
		author = "BWA3, BWplus";
	};
	class BWplus_optic_ZO4x30_Fleck_IRV: BWA3_optic_ZO4x30_IRV {
		model = "\bwplus\bwplus_zo4x30_fleck_irv.p3d";
		displayName = "$STR_BWplus_optic_ZO4x30_Fleck_IRV";
		author = "BWA3, BWplus";
	};

	class BWplus_optic_RSAS_Fleck: BWA3_optic_RSAS {
		model = "\bwplus\bwplus_rsas_fleck.p3d";
		displayName = "$STR_BWplus_optic_RSAS_Tropen";
		author = "BWA3, BWplus";	
	};
	class BWplus_optic_RSAS_Tropen: BWA3_optic_RSAS {
		model = "\bwplus\bwplus_rsas_tropen.p3d";
		displayName = "$STR_BWplus_optic_RSAS_Tropen";
		author = "BWA3, BWplus";	
	};
};
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};