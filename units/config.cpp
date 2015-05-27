#include "script_component.hpp"

class CfgPatches {
	class BWplus_units {
		units[] = {
			BWplus_Feldjgr_Flecktarn,
			BWplus_Feldjgr_Tropentarn,
			BWplus_Kitbag_pio_Green,
			BWplus_Kitbag_pio_Sand,
			BWplus_Motorized_Fleck,
			BWplus_Motorized_Tropen,
			BWplus_Pioneer_Flecktarn,
			BWplus_Pioneer_Tropentarn,
			BWplus_Recon_Radioman_Flecktarn,
			BWplus_Recon_Radioman_Tropentarn,
			BWplus_Recon_CombatLifeSaver_Flecktarn,
			BWplus_Recon_CombatLifeSaver_Tropentarn,
			BWplus_Recon_Marksman_Flecktarn,
			BWplus_Recon_Marksman_Tropentarn,
			BWplus_Recon_Pioneer_Flecktarn,
			BWplus_Recon_Pioneer_Tropentarn,
			BWplus_Recon_Spotter_Flecktarn,
			BWplus_Recon_Spotter_Tropentarn,
			BWplus_Recon_TL_Flecktarn,
			BWplus_Recon_TL_Tropentarn,
			SpecOps_Fleck, 
			SpecOps_Tropen
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			BWplus_core,
			BWplus_weapons,
			BWplus_vehicles,
			BWplus_uniforms,
			BWplus_communications
		};
	 	version = "1.4";
    	versionStr = "1.4";
    	versionAr[] = {1,4,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};

class CfgFactionClasses {
	class BWplus {
    	displayName = "BW.plus";
    	priority = 0.1;
    	side = 1;
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

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgEventHandlers.hpp"