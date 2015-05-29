
class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class eventHandlers {
		 	Init = "(_this select 0) call BWplus_units_fnc_init;";
		};
    };
    
    class B_Kitbag_rgr;
    class B_Kitbag_cbr;
    class BWplus_Kitbag_pio_Green: B_Kitbag_rgr {
    	displayName = "Kitbag Pioneer Green";
		author = "BW.plus";
		class TransportMagazines {
			MACRO_ADDMAGAZINE(APERSTripMine_Wire_Mag, 2)
        	MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag, 3)
		};
		class TransportItems {
			MACRO_ADDITEM(ACE_Clacker, 1)
			MACRO_ADDITEM(ACE_DefusalKit, 1)
		};
    };
    class BWplus_Kitbag_pio_Sand: B_Kitbag_cbr {
    	displayName = "Kitbag Pioneer Sand";
		author = "BW.plus";
		class TransportMagazines {
			MACRO_ADDMAGAZINE(APERSTripMine_Wire_Mag, 2)
        	MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag, 3)
		};
		class TransportItems {
			MACRO_ADDITEM(ACE_Clacker, 1)
			MACRO_ADDITEM(ACE_DefusalKit, 1)
		};
    };

	class B_soldier_exp_F;
	class BWplus_Pioneer_Flecktarn: B_soldier_exp_F {
		displayName = "$STR_BWplus_Pioneer";
		author = "BW.plus";
		icon = "iconManExplosive";
		picture = "pictureExplosive";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Men_Fleck"; 
		genericNames = "BundeswehrMen";
		hiddenSelections[] = {"camo"};
		weapons[] = {"BWA3_G36K_equipped","BWA3_P8","Throw","Put","BWA3_Vector"};
		uniformClass = "BWA3_Uniform3_Fleck";
		backpack = "BWplus_Kitbag_pio_Green";
		items[] =  {"BWplus_Shovel","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide","Laserbatteries"};
		respawnitems[] =  {"BWplus_Shovel","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide","Laserbatteries"};
		respawnLinkedItems[] = {"BWA3_Vest_Rifleman1_Fleck","BWA3_OpsCore_Fleck","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","ACE_NVG_Wide"};
		respawnMagazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		respawnWeapons[] = {"BWA3_G36K_equipped","BWA3_P8","Throw","Put","BWA3_Vector"};
		linkedItems[] = {"BWA3_Vest_Rifleman1_Fleck","BWA3_OpsCore_Fleck","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","ACE_NVG_Wide"};
		magazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		class eventHandlers {
	 		Init = "(_this select 0) call BWplus_units_fnc_init_pio";
	 	};
	};
	
	class BWplus_Pioneer_Tropentarn: BWplus_Pioneer_Flecktarn {
		displayName = "$STR_BWplus_Pioneer";
		author = "BW.plus";
		vehicleClass = "BWA3_VehClass_Men_Tropen"; 
		uniformClass = "BWA3_Uniform3_Tropen";
		backpack = "BWplus_Kitbag_pio_Sand";
		respawnLinkedItems[] = {"BWA3_Vest_Rifleman1_Tropen","BWA3_OpsCore_Tropen","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","ACE_NVG_Wide"};
		respawnMagazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		respawnWeapons[] = {"BWA3_G36K_equipped","BWA3_P8","Throw","Put","BWA3_Vector"};
		linkedItems[] = {"BWA3_Vest_Rifleman1_Tropen","BWA3_OpsCore_Tropen","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","ACE_NVG_Wide"};
	};
	
	class BWA3_Spotter_Fleck;
	class BWplus_Recon_Spotter_Flecktarn: BWA3_Spotter_Fleck {
		displayName = "$STR_BWplus_Recon_Spotter";
		author = "BW.plus";
		camouflage = 0.60000;
		accuracy = 2.000000;
		vehicleClass = "BWplus_VehClass_SpecOps_Fleck"; 
		uniformClass = "BWA3_Uniform_Fleck";
		weapons[] = {"BWplus_G36K_AG_SF_SD_Fleck","bwa3_P8","Throw","Put","Laserdesignator"};
		magazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeGreen_Grenade_shell","1rnd_SmokeGreen_Grenade_shell"};
		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Marksman_Fleck", "BWA3_Booniehat_Fleck", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeGreen_Grenade_shell","1rnd_SmokeGreen_Grenade_shell"};
		respawnWeapons[] = {"BWplus_G36K_AG_SF_SD_Fleck","BWA3_P8","Throw","Put","Laserdesignator"};
		respawnlinkedItems[] = {"BWA3_Vest_Marksman_Fleck", "BWA3_Booniehat_Fleck", "BWA3_ItemNavipad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		items[] =  {"BWA3_ItemKestrel","BWA3_G_Combat_Black","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide","Laserbatteries"};
		respawnitems[] =  {"BWA3_ItemKestrel","BWA3_G_Combat_Black","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide","Laserbatteries"};
		class eventHandlers {
			Init = "[_this select 0] call BWplus_main_fnc_addRavenbackpack";
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
		author = "BW.plus";
		vehicleClass = "BWplus_VehClass_SpecOps_Fleck"; 
		uniformClass = "BWA3_Uniform3_Fleck";
		backpack = "BWplus_Kitbag_pio_Green";
		weapons[] = {"BWplus_G36K_SF_SD_Fleck","BWA3_P8","Throw","Put","BWA3_Vector"};
		respawnWeapons[] = {"BWplus_G36K_SF_SD_Fleck","BWA3_P8","Throw","Put","BWA3_Vector"};
		items[] =  {"BWplus_Shovel","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide","Laserbatteries"};
		respawnitems[] =  {"BWplus_Shovel","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide","Laserbatteries"};
		linkedItems[] = {"BWplus_LCG_shemagh_Green","BWA3_Vest_Rifleman1_Fleck","BWplus_Cap_Green","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"BWplus_LCG_shemagh_Green","BWA3_Vest_Rifleman1_Fleck","BWplus_Cap_Green","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		respawnmagazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		
		class eventHandlers {
	 		Init = "(_this select 0) call BWplus_units_fnc_init";
	 	};
	};

	class BWplus_Recon_Pioneer_Tropentarn: BWplus_Recon_Pioneer_Flecktarn {
		author = "BW.plus";
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
		author = "BW.plus";
		icon = "iconManMedic";
		picture = "pictureHeal";
		vehicleClass = "BWplus_VehClass_SpecOps_Fleck"; 
		uniformClass = "BWA3_Uniform_Fleck";
		weapons[] = {"BWplus_G36K_SF_SD_Fleck","BWA3_P8","Throw","Put","BWA3_Vector"};
		respawnWeapons[] = {"BWplus_G36K_SF_SD_Fleck","BWA3_P8","Throw","Put","BWA3_Vector"};
		items[] =  {"ACE_NVG_Wide"};
		respawnitems[] =  {"ACE_NVG_Wide"};
		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Medic_Fleck","BWA3_Booniehat_Fleck","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Medic_Fleck","BWA3_Booniehat_Fleck","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		respawnmagazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
	};

	class BWplus_Recon_CombatLifeSaver_Tropentarn: BWplus_Recon_CombatLifeSaver_Flecktarn {
		author = "BW.plus";
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
		author = "BW.plus";
		icon = "iconManLeader";
		camouflage = 0.60000;
		vehicleClass = "BWplus_VehClass_SpecOps_Fleck"; 
		uniformClass = "BWA3_Uniform_Fleck";
		weapons[] = {"BWplus_G36K_AG_SF_SD_Fleck","bwa3_P8","Throw","Put","BWA3_Vector"};
		magazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeGreen_Grenade_shell","1rnd_SmokeGreen_Grenade_shell"};
		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Leader_Fleck", "BWA3_Booniehat_Fleck", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_HE_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeRed_Grenade_shell","1rnd_SmokeGreen_Grenade_shell","1rnd_SmokeGreen_Grenade_shell"};
		respawnWeapons[] = {"BWplus_G36K_AG_SF_SD","BWplus_P8_SD","Throw","Put","BWA3_Vector"};
		respawnlinkedItems[] = {"BWA3_Vest_Leader_Fleck", "BWA3_Booniehat_Fleck", "BWA3_ItemNavipad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		items[] =  {"BWA3_G_Combat_Black","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide"};
		respawnitems[] =  {"BWA3_G_Combat_Black","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide"};
	};

	class BWplus_Recon_TL_Tropentarn: BWplus_Recon_TL_Flecktarn {
		author = "BW.plus";
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
		author = "BW.plus";
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
		items[] =  {"BWA3_ItemKestrel","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide"};
		respawnitems[] =  {"BWA3_ItemKestrel","BWplus_shemagh_Green","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide"};
	};

	class BWplus_Recon_Marksman_Tropentarn: BWplus_Recon_Marksman_Flecktarn {
		author = "BW.plus";
		camouflage = 0.60000;
		accuracy = 3.500000;
		vehicleClass = "BWplus_VehClass_SpecOps_Tropen"; 
		uniformClass = "BWA3_Uniform_Tropen";
		linkedItems[] = {"BWA3_Vest_Marksman_Tropen", "BWA3_Booniehat_Tropen", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnlinkedItems[] = {"BWplus_shemagh_Sand","BWA3_Vest_Marksman_Tropen", "BWA3_Booniehat_Tropen", "BWA3_ItemNavipad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	class BWplus_Recon_Radioman_Flecktarn: BWplus_Recon_Spotter_Flecktarn {
		displayName = "$STR_BWplus_Recon_Radioman";
		author = "BW.plus";
		picture = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
        icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		vehicleClass = "BWplus_VehClass_SpecOps_Fleck"; 
		uniformClass = "BWA3_Uniform3_Fleck";
		weapons[] = {"BWplus_G36K_SF_SD_Fleck","BWA3_P8","Throw","Put","BWA3_Vector"};
		respawnWeapons[] = {"BWplus_G36K_SF_SD_Fleck","BWA3_P8","Throw","Put","BWA3_Vector"};
		items[] =  {"ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide","Laserbatteries", "BWplus_Satbag"};
		respawnitems[] =  {"ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide","Laserbatteries", "BWplus_Satbag"};
		linkedItems[] = {"BWplus_LCG_shemagh_Green","BWA3_Vest_Rifleman1_Fleck","BWplus_Cap_Green","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"BWplus_LCG_shemagh_Green","BWA3_Vest_Rifleman1_Fleck","BWA3_Booniehat_Fleck","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		respawnmagazines[] = {"BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_DM51A1","BWA3_DM25"};
		class eventHandlers {
			Init = "(_this select 0) setvariable ['BWplus_isRadioman', true]; [(_this select 0), 'tf_rt1523g_big_bwmod'] call BWplus_main_fnc_addTFRbackpack;";
		};
		
	};

	class BWplus_Recon_Radioman_Tropentarn: BWplus_Recon_Radioman_Flecktarn {
		author = "BW.plus";
		vehicleClass = "BWplus_VehClass_SpecOps_Tropen"; 
		//uniformClass = "BWA3_Uniform3_Tropen";
		weapons[] = {"BWplus_G36K_SF_SD_Tropen","BWA3_P8","Throw","Put","BWA3_Vector"};
		respawnWeapons[] = {"BWplus_G36K_SF_SD_Tropen","BWA3_P8","Throw","Put","BWA3_Vector"};
		linkedItems[] = {"BWplus_LCG_shemagh_Sand","BWA3_Vest_Rifleman1_Tropen","BWA3_Booniehat_Tropen","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"BWplus_LCG_shemagh_Sand","BWA3_Vest_Rifleman1_Tropen","BWplus_Cap_Sand","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class BWplus_Feldjgr_Flecktarn: BWA3_TL_Fleck {
		scopeCurator = 2;

		displayName = "$STR_BWplus_Feldjgr";
		author = "BW.plus";
		Icon = "iconMan";
		vehicleClass = "BWA3_VehClass_Men_Fleck"; 
		genericNames = "BundeswehrMen";
		uniformClass = "BWA3_Uniform_Fleck";
		weapons[] = {"BWA3_G36","bwa3_P8","Throw","Put","BWA3_Vector"};
		magazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8"};
		linkedItems[] = {"BWA3_G_Combat_Black","BWA3_Vest_Leader_Fleck", "BWplus_Beret_Fldjgr", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8","BWA3_15Rnd_9x19_P8"};
		respawnWeapons[] = {"BWplus_G36K_AG_SF_SD","BWplus_P8_SD","Throw","Put","BWA3_Vector"};
		respawnlinkedItems[] = {"BWA3_Vest_Leader_Fleck", "BWplus_Beret_Fldjgr", "BWA3_ItemNavipad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		items[] =  {"BWA3_G_Combat_Black","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide"};
		respawnitems[] =  {"BWA3_G_Combat_Black","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_Bandage","ACE_NVG_Wide"};
	};
	class BWplus_Feldjgr_Tropentarn: BWplus_Feldjgr_Flecktarn {
		author = "BW.plus";
		vehicleClass = "BWA3_VehClass_Men_Tropen"; 
		uniformClass = "BWA3_Uniform_Tropen";
	};
};