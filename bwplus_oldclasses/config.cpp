class CfgPatches {
	class BWplus_oldclasses {
		units[] = {
			Fennek_Flecktarn,
			Fennek_Flecktarn_gmg,
			Fennek_Flecktarn_mg,
			Fennek_Flecktarn_pio,
			Fennek_Flecktarntarn_san,
			Fennek_Tropen,
			Fennek_Tropen_gmg,
			Fennek_Tropen_mg,
			Fennek_Tropen_pio,
			Fennek_Tropen_san
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			BWplus_core,
			BWplus_vehicles,
			BWplus_toolsandstructures
		};
	 	version = "1.4";
    	versionStr = "1.4";
    	versionAr[] = {1,4,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};

class CfgVehicles {
	class BWplus_Fennek_Flecktarn;
	class Fennek_Flecktarn: BWplus_Fennek_Flecktarn {
		scope = 1;
		scopecurator = 0;
	};

	class BWplus_Fennek_Flecktarn_pio;
	class Fennek_Flecktarn_pio: BWplus_Fennek_Flecktarn_pio {
		scope = 1;
		scopecurator = 0;
	};

	class BWplus_Fennek_Flecktarn_mg;
	class Fennek_Flecktarn_mg: BWplus_Fennek_Flecktarn_mg {
		scope = 1;
		scopecurator = 0;
	};
	class BWplus_Fennek_Flecktarn_gmg;
	class Fennek_Flecktarn_gmg: BWplus_Fennek_Flecktarn_gmg {
		scope = 1;
		scopecurator = 0;
	};

	class BWplus_Fennek_Flecktarn_san;
	class Fennek_Flecktarn_san: BWplus_Fennek_Flecktarn_san {
		scope = 1;
		scopecurator = 0;
	};

	class BWplus_Fennek_Tropen;
	class Fennek_Tropen: BWplus_Fennek_Tropen {
		scope = 1;
		scopecurator = 0;
	};

	class BWplus_Fennek_Tropen_pio;
	class Fennek_Tropen_pio: BWplus_Fennek_Tropen_pio {
		scope = 1;
		scopecurator = 0;
	};

	class BWplus_Fennek_Tropen_mg;
	class Fennek_Tropen_mg: BWplus_Fennek_Tropen_mg {
		scope = 1;
		scopecurator = 0;
	};

	class BWplus_Fennek_Tropen_gmg;
	class Fennek_Tropen_gmg: BWplus_Fennek_Tropen_gmg {
		scope = 1;
		scopecurator = 0;
	};

	class BWplus_Fennek_Tropen_san;
	class Fennek_Tropen_san: BWplus_Fennek_Tropen_san {
		scope = 1;
		scopecurator = 0;
	};
	class BWplus_Item_CamoNet_Dismantled;
	class BWplus_CamoNet_Dismantled: BWplus_Item_CamoNet_Dismantled {
		scope = 1;
		scopecurator = 0;
	};
};