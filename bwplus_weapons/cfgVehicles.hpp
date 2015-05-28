
class CfgVehicles {
	class Weapon_Base_F;
	class BWplus_Weapon_G36K_SF_SD_Fleck: Weapon_Base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWplus_Weapon_G36K_SF_SD_Fleck";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons {
			MACRO_ADDWEAPON(BWplus_G36K_SF_SD_Fleck, 1)
		};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36_SD, 1)
		};
	};

	class BWplus_Weapon_G36K_SF_SD_Tropen: BWplus_Weapon_G36K_SF_SD_Fleck {
		displayName = "$STR_BWplus_Weapon_G36K_SF_SD_Tropen";
		class TransportWeapons {
				MACRO_ADDWEAPON(BWplus_G36K_SF_SD_Tropen, 1)
		};
	};

	class BWplus_Weapon_G28_SF_SD: Weapon_Base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "G28 SF SD";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons {
			MACRO_ADDWEAPON(BWplus_G28_SF_SD, 1)
		};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_10Rnd_762x51_G28_SD, 1)
		};
	};

	class Box_NATO_Wps_F;
	class BWplus_Box_weapons_SF: Box_NATO_Wps_F {
		author = "BW.plus";
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
};