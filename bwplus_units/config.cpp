class CfgPatches {
	class BWplus_units {
		units[] = {
			"SpecOps_Fleck", 
			"SpecOps_Tropen",
			"BWplus_Recon_Marksman_Tropentarn",
			"BWplus_Recon_Marksman_Flecktarn",
			"BWplus_Recon_TL_Tropentarn",
			"BWplus_Recon_TL_Flecktarn",
			"BWplus_Recon_CombatLifeSaver_Tropentarn",
			"BWplus_Recon_CombatLifeSaver_Flecktarn",
			"BWplus_Recon_Pioneer_Tropentarn",
			"BWplus_Recon_Pioneer_Flecktarn",
			"BWplus_Recon_Spotter_Tropentarn",
			"BWplus_Recon_Spotter_Flecktarn",
			"BWplus_Pioneer_Flecktarn",
			"BWplus_Pioneer_Tropentarn",
			"BWplus_Motorized_Fleck",
			"BWplus_Motorized_Tropen"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"bwa3_units", "BWplus_weapons","BWplus_vehicles"};
	 	version = "1.3";
    	versionStr = "1.3";
    	versionAr[] = {1,3,0};
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
      		file = "BWplus_units\fnc";
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

class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class eventHandlers {
		 	Init = "(_this select 0) execVM 'bwplus_units\scripts\init.sqf';";
		};
    };

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
	 		Init = "(_this select 0) execvm 'bwplus_units\scripts\init_pio.sqf'";
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
			Init = "(_this select 0) call compile preprocessFileLineNumbers '\BWplus_units\scripts\Raven.sqf'";
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
	 		Init = "(_this select 0) execvm '\BWplus_units\scripts\init_pio.sqf'";
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
				class BWplus_Motorized_Tropen {
					name = "Motorized Tropen";
					side = 1;
					faction = "BWA3_Faction";
					class Unit0 {
						side = 1;
						vehicle = "BWA3_TL_Tropen";
						rank = "LIEUTENANT";
						position[] = {0, 5, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Fennek_Tropen_mg";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "BWA3_RiflemanAT_Pzf3_Tropen";
						rank = "CORPORAL";
						position[] = {5, 0, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "BWA3_Grenadier_Tropen";
						rank = "CORPORAL";
						position[] = {7, 0, 0};
					};
				};	
			};
		};
	};
};