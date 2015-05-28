#include "script_component.hpp"
class CfgPatches {
	class BWplus_vehicles {
		units[] = {
			BWplus_Box_AMMO40mm,
			BWplus_Box_AMMO556,
			BWplus_Box_AMMO556_100Rnd,
			BWplus_Box_AMMO762_10Rnd,
			BWplus_Box_AMMO762_10Rnd,
			BWplus_Box_AMMO762_120Rnd,
			BWplus_Box_AMMO762_20Rnd,
			BWplus_Box_AMMOgrenade,
			BWplus_Box_Cargo,
			BWplus_Box_Items,
			BWplus_merlin,
			BWplus_Wildcat,
			BWplus_Offroad_Standard,
			BWplus_Offroad_Fldjgr,
			BWplus_Fennek_Flecktarn,
			BWplus_Fennek_Flecktarn_gmg,
			BWplus_Fennek_Flecktarn_mg,
			BWplus_Fennek_Flecktarn_pio,
			BWplus_Fennek_Flecktarntarn_san,
			BWplus_Fennek_Tropen,
			BWplus_Fennek_Tropen_gmg,
			BWplus_Fennek_Tropen_mg,
			BWplus_Fennek_Tropen_pio,
			BWplus_Fennek_Tropen_san
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			BWplus_main,
			A3_Structures_F_Heli_Items_Airport
		};
	 	version = "1.4";
    	versionStr = "1.4";
    	versionAr[] = {1,4,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};

#include <Macros.hpp>
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"

enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
}
