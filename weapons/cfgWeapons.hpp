
class CfgWeapons {
	class ItemCore;
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

	class BWplus_MG4: BWA3_MG4 {
		displayName = "BW.plus MG4 Luis Edition";
		descriptionShort = "BW.plus MG4 Luis Edition";
		//model = "\bwplus_waopons\bwplus_mg4.p3d";
		author = "BWA3, BW.plus";	
	};

	class BWplus_G36K_AG_SF_Fleck: BWA3_G36K_AG {
		displayName = "$STR_BWplus_Weapon_G36K_AG_SF_SD_Fleck";
		//model = "\bwplus_weapons\bwplus_g36k_ag_fleck.p3d";
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
		author = "BWA3, BW.plus";	
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
		//model = "\bwplus_weapons\bwplus_g36k_ag_tropen.p3d";
		author = "BWA3, BW.plus";	
	};
	
	class BWplus_G36K_AG_SF_SD_Tropen: BWplus_G36K_AG_SF_Tropen {
		
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36_SD, 1)
			MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell, 1)
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
		//model = "\BWplus_weapons\bwplus_g36k_fleck.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {PATHTOF(data\fleck\bwplus_g36k_fleck.paa)};
		author = "BWA3, BW.plus";	
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
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36_SD, 1)
		};
	};

	class BWplus_G36K_SF_SD_Fleck: BWplus_G36K_SF_Fleck {
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36_SD, 1)
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
		//model = "\bwplus_weapons\bwplus_g36k_tropen.p3d";
		displayName = "$STR_BWplus_Weapon_G36K_SF_SD_Tropen";
		author = "BWA3, BW.plus";	
	};
	
	class BWplus_G36K_SF_SD_Tropen: BWplus_G36K_SF_Tropen {
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36_SD, 1)
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
		author = "BWA3, BW.plus";	
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
		displayName = "EoTech HWS 533";
		picture = PATHTOF(UI\gear_acco_HWS_black_ca.paa);
		model = PATHTOF(\HWS_533_black.p3d);
		descriptionShort = "Holographics Weapon Sight";
		weaponInfoType = "RscWeaponZeroing";
		scope = 2;
		scopeCurator = 2;

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
		displayName = "Aimpoint";
		picture = PATHTOF(UI\gear_acco_compm4_ca.paa);
		model = PATHTOF(aimpoint.p3d);
		descriptionShort = "Close Combat optic";
		weaponInfoType = "RscWeaponZeroing";
		scope = 2;
		scopeCurator = 2;

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
					opticsPPEffects[] = {};
				};
			};
		};
	};
	class BWplus_optic_ZO4x30_Tropen: BWA3_optic_ZO4x30 {
		//model = "\bwplus_weapons\bwplus_zo4x30_tropen.p3d";
		displayName = "$STR_Bwplus_optic_ZO4x30_Tropen";
		author = "BWA3, BWplus";
		BWA3_compatibleNVG = "BWA3_optic_NSV600";
		BWA3_compatibleTIC = "BWA3_optic_IRV600";
	};
	class Bwplus_optic_ZO4x30_Fleck: BWA3_optic_ZO4x30 {
		//model = "\bwplus_weapons\bwplus_zo4x30_fleck.p3d";
		displayName = "$STR_Bwplus_optic_ZO4x30_Fleck";
		author = "BWA3, BWplus";
		BWA3_compatibleNVG = "BWA3_optic_NSV600";
		BWA3_compatibleTIC = "BWA3_optic_IRV600";
	};
	class BWplus_optic_ZO4x30_Tropen_NSV: BWA3_optic_ZO4x30_NSV {
		//model = "\bwplus_weapons\bwplus_zo4x30_tropen_nsv.p3d";
		displayName = "$STR_BWplus_optic_ZO4x30_Tropen_NSV";
		author = "BWA3, BWplus";
	};
	class BWplus_optic_ZO4x30_Fleck_NSV: BWA3_optic_ZO4x30_NSV {
		//model = "\bwplus_weapons\bwplus_zo4x30_fleck_nsv.p3d";
		displayName = "$STR_BWplus_optic_ZO4x30_Fleck_NSV";
		author = "BWA3, BWplus";
	};
	class BWplus_optic_ZO4x30_Tropen_IRV: BWA3_optic_ZO4x30_IRV {
		//model = "\bwplus_weapons\bwplus_zo4x30_tropen_irv.p3d";
		displayName = "$STR_BWplus_optic_ZO4x30_Tropen_IRV";
		author = "BWA3, BWplus";
	};
	class BWplus_optic_ZO4x30_Fleck_IRV: BWA3_optic_ZO4x30_IRV {
		//model = "\bwplus_weapons\bwplus_zo4x30_fleck_irv.p3d";
		displayName = "$STR_BWplus_optic_ZO4x30_Fleck_IRV";
		author = "BWA3, BWplus";
	};

	class BWplus_optic_RSAS_Fleck: BWA3_optic_RSAS {
		//model = "\bwplus_weapons\bwplus_rsas_fleck.p3d";
		displayName = "$STR_BWplus_optic_RSAS_Tropen";
		author = "BWA3, BWplus";	
	};
	class BWplus_optic_RSAS_Tropen: BWA3_optic_RSAS {
		//model = "\bwplus_weapons\bwplus_rsas_tropen.p3d";
		displayName = "$STR_BWplus_optic_RSAS_Tropen";
		author = "BWA3, BWplus";	
	};
};