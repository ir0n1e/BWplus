
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
			A3_Structures_F_Heli_Items_Airport,
			BWplus_core,
			AGM_Interaction, 
			AGM_Logistics,
			BWplus_weapons
		};
	 	version = "1.4";
    	versionStr = "1.4";
    	versionAr[] = {1,4,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};

class CfgVehicleClasses {
	class BWplus_Items {
		displayName = "BWplus";
	};
};

class CfgFunctions {
	class BWplus_vehicles {
    	class BWplus_vehicles {
      		file = "BWplus_vehicles\fnc";
    		class buildFOBCallback;
    		
    		class merlinInit;		
    		class pioFennekInit;
    		class saniFennekInit;
      		class buildFOB;

      		class canbuildFOB;
      		class clearCargo;
      		class dismantleFOB;
      		class dragBoat;
      		class getin;
      		class hasLoadedBoat;
      		class hasLoadedItems;
      		class leftorright;
      		class offroadfldjgrinit;
      		class unloadBoat;
    	};
  	};
};

#include <Macros.hpp>

class CfgVehicles {
    
	class B_CargoNet_01_ammo_F;
	class BWplus_Box_Cargo: B_CargoNet_01_ammo_F {
		author = "BWPlus";
	    displayName = "[BWplus] CargoBox";
    	transportmaxmagazines = 9001;
    	maximumload = 2000;
		class eventHandlers {
			Init = "(_this select 0) call compile preprocessFileLineNumbers '\BWplus_units\scripts\Raven.sqf'";
		};
		class TransportMagazines {
        	MACRO_ADDMAGAZINE(BWA3_15Rnd_9x19_P8, 10)
        	MACRO_ADDMAGAZINE(BWA3_200Rnd_556x45, 5)
        	MACRO_ADDMAGAZINE(BWA3_20Rnd_762x51_G28, 20)
        	MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36, 20)
        	MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell, 10)

        	MACRO_ADDMAGAZINE(APERSTripMine_Wire_Mag, 5)
        	MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag, 5)
        	MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag, 5)
        	MACRO_ADDMAGAZINE(SLAMDirectionalMine_Wire_Mag, 5)
        	MACRO_ADDMAGAZINE(Titan_AA, 5)
        	MACRO_ADDMAGAZINE(Titan_AP, 5)
		};
		class TransportItems {
			MACRO_ADDITEM(Chemlight_blue, 10)
			MACRO_ADDITEM(HandGrenade, 10)
			MACRO_ADDITEM(SmokeShellBlue, 2)
			MACRO_ADDITEM(BWA3_acc_LLM01_irlaser, 10)
			MACRO_ADDITEM(BWA3_optic_Shortdot, 10)
			MACRO_ADDITEM(BWA3_optic_ZO4x30_NSV, 2)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic, 2)
			MACRO_ADDBACKPACK(B_GMG_01_high_weapon_F, 1)
			MACRO_ADDBACKPACK(B_HMG_01_high_weapon_F, 1)
			MACRO_ADDBACKPACK(B_HMG_01_support_high_F, 2)
			MACRO_ADDBACKPACK(B_Mortar_01_support_F, 1)
			MACRO_ADDBACKPACK(B_Mortar_01_weapon_F, 1)
			MACRO_ADDBACKPACK(tf_rt1523g_big_bwmod, 1)			
		};
		class TransportWeapons {
			MACRO_ADDWEAPON(BWA3_Pzf3_Loaded, 2)
			MACRO_ADDWEAPON(BWA3_RGW90_Loaded, 2)
		};
	};

	class Box_NATO_Support_F;
	class BWplus_Box_Exp: Box_NATO_Support_F {
    	author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_exp";
    	transportmaxmagazines = 9001;
    	transportmaxbackbacks = 0;
    	maximumload = 2000;
    	class TransportMagazines  {
        	MACRO_ADDMAGAZINE(APERSBoundingMine_Range_Mag,10)
        	MACRO_ADDMAGAZINE(ATMine_Range_Mag,5)
        	MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,5)
        	MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,5)
        	MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,10)
		};
		class TransportItems {
			MACRO_ADDITEM(AGM_M26_Clacker, 2)
			MACRO_ADDITEM(AGM_Clacker, 2)
			MACRO_ADDITEM(AGM_DefusalKit, 2)
			MACRO_ADDITEM(BWplus_Item_CamoNet, 2)
			MACRO_ADDITEM(BWplus_Shovel, 2)
		};
	};
	class BWplus_Box_AMMO556: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_556";
		transportmaxmagazines = 150;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,100)
		};
	};
	class BWplus_Box_AMMO556_100Rnd: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_100_Rnd_556";
		transportmaxmagazines = 100;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_100Rnd_556x45_G36_Tracer,15)
			MACRO_ADDMAGAZINE(BWA3_100Rnd_556x45_G36,15)
		};
	};
	class BWplus_Box_AMMO762_120Rnd: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_120Rnd_762";
		transportmaxmagazines = 50;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_120Rnd_762x51,25)
		};
	};
	class BWplus_Box_AMMO762_10Rnd: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_10Rnd_762";
		transportmaxmagazines = 120;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_10Rnd_762x51_G28,100)
		};
	};
	class BWplus_Box_AMMO762_20Rnd: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_20Rnd_762";
		transportmaxmagazines = 100;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_20Rnd_762x51_G28,50)
		};
	};

	class BWplus_Box_AMMO40mm: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_40mm";
		transportmaxmagazines = 100;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell,20)
			MACRO_ADDMAGAZINE(1rnd_SmokeRed_Grenade_shell,15)
			MACRO_ADDMAGAZINE(1rnd_SmokeGreen_Grenade_shell,15)
		};
	};
	class BWplus_Box_AMMOgrenade: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_Grenade";
		transportmaxmagazines = 100;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_DM51A1,20)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,10)
			MACRO_ADDMAGAZINE(BWA3_DM32_Yellow,10)
		};
	};

	class Ship_F;
	class Boat_F: Ship_F {
		class AGM_Actions;
	};
	
	class Rubber_duck_base_F: Boat_F {
		AGM_Vehicle_Cargo = 1;
		AGM_Size = 12;
		class eventHandlers {
		 	Init = "(_this select 0) setVariable ['AGM_useWeight', false];";
		};
		class AGM_Actions: AGM_Actions {
			MACRO_DRAGBOAT
			MACRO_LOADABLE
		};
	};

	class Car_F;
	class Offroad_01_base_F: Car_F {
 		class AGM_SelfActions;
 	};

	class BWplus_Offroad_Fldjgr: Offroad_01_base_F {
		displayName = "$STR_BWplus_Vehicles_Fldjgr";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
		crew = "BWA3_crew_fleck";
		scope = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo", "camo2"};
		hiddenSelectionsTextures[] = {"bwplus_vehicles\data\offroad\fldjgr.paa", "bwplus_vehicles\data\offroad\fldjgr.paa"};
		class eventHandlers {
			Init = "(_this select 0) call BWplus_vehicles_fnc_offroadFldjgrInit";
		};
		class AGM_SelfActions: AGM_SelfActions {
			class BWplus_FlashOn {
				displayName = "$STR_BWplus_Vehicles_BlueLightOn";
			    priority = 0.125;
			    distance = 5;
			    condition = "(vehicle AGM_player) animationPhase 'BeaconsStart' < 0.5 && {driver (vehicle AGM_player) == AGM_player}";
			    statement = "(vehicle AGM_player) animate ['BeaconsStart', 1]";
			    enableInside = 1;
	      	};
			class BWplus_FlashOff {
			    displayName = "$STR_BWplus_Vehicles_BlueLightOff";
			    priority = 0.125;
		    	distance = 5;
			    condition = "(vehicle AGM_player) animationPhase 'BeaconsStart' > 0.5 && {driver (vehicle AGM_player) == AGM_player}";
			    statement = "(vehicle AGM_player) animate ['BeaconsStart', 0]";
			    enableInside = 1;
		    };	

		};
	};

	class BWplus_Offroad_Standard: Offroad_01_base_F {
		displayName = "Offroad BW";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
		crew = "BWA3_crew_fleck";
		scope = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo", "camo2"};
		hiddenSelectionsTextures[] = {"bwplus_vehicles\data\offroad\offroad.paa", "bwplus_vehicles\data\offroad\offroad.paa"};
	};


	class I_MRAP_03_hmg_F;
	class I_MRAP_03_gmg_F;
	//class I_MRAP_03_F;
	class I_Heli_Transport_02_F;
	class MRAP_03_base_F;
	class I_Heli_light_03_F;
	class BWplus_Wildcat: I_Heli_light_03_F {
		displayName = "Wildcat";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		crew = "BWA3_crew_fleck";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"bwplus_vehicles\data\hellcat\hellcat.paa"};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,10)
			MACRO_ADDMAGAZINE(BWA3_200Rnd_556x45,5)
			MACRO_ADDMAGAZINE(BWA3_DM51A1,5)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,5)
			MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell,5)
			MACRO_ADDMAGAZINE(BWA3_10Rnd_762x51_G28,5)
			MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2)
		};
		class TransportItems { 
			MACRO_ADDITEM(ToolKit,1)
			MACRO_ADDITEM(Rangefinder,1)
			MACRO_ADDITEM(AGM_NVG_Wide,2)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,2)
		};
		class TransportWeapons {
			MACRO_ADDWEAPON(BWA3_G36K,2)
		};
	};

	class BWplus_Merlin: I_Heli_Transport_02_F {
		displayName = "Merlin";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		crew = "BWA3_crew_fleck";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"bwplus_vehicles\data\mohawk\mhawk1.paa","BWplus_vehicles\data\mohawk\mhawk2.paa","BWplus_vehicles\data\mohawk\mhawk3.paa"};
		class eventHandlers {
			Init = "_this call BWplus_vehicles_fnc_merlinInit";
		};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,10)
			MACRO_ADDMAGAZINE(BWA3_200Rnd_556x45,5)
			MACRO_ADDMAGAZINE(BWA3_DM51A1,5)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,5)
			MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell,5)
			MACRO_ADDMAGAZINE(BWA3_10Rnd_762x51_G28,5)
			MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2)
		};
		class TransportItems { 
			MACRO_ADDITEM(ToolKit,1)
			MACRO_ADDITEM(Rangefinder,1)
			MACRO_ADDITEM(AGM_NVG_Wide,2)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,1)
		};
		class TransportWeapons {
			MACRO_ADDWEAPON(BWA3_G36K,2)
		};
	};
 	class I_MRAP_03_F: MRAP_03_base_F {
 		class AGM_Actions;
 	};
	class BWplus_Fennek_Flecktarn: I_MRAP_03_F {
		displayName = "$STR_BWplus_Vehicles_Fennek";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
		crew = "BWA3_Rifleman_Fleck";
		typicalCargo[] = {"BWA3_Rifleman_Fleck", "BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Fleck\piofleck.paa","BWplus_vehicles\data\Fleck\fleck2.paa"};
		transportMaxBackpacks = 3;
		transportMaxWeapons = 20;
		AGM_Vehicle_Cargo = 8;
		class eventHandlers {
			Init = "_this call BWplus_vehicles_fnc_pioFennekInit";
		 	getin = "_this call BWplus_vehicles_fnc_getin";
		};
		class TransportMagazines {
			class _xx_BWA3_DM32_Orange {
				magazine = "BWA3_DM32_Orange";
				count = 6;
			};
		};
		class TransportItems {
			MACRO_ADDITEM(ToolKit,1)
			MACRO_ADDITEM(BWA3_Vector,1)
			MACRO_ADDITEM(BWA3_ItemKestrel,1)
			MACRO_ADDITEM(BWA3_ItemNavipad,1)
			MACRO_ADDITEM(AGM_UAVBattery,1)
			MACRO_ADDITEM(BWplus_Shovel,1)
			MACRO_ADDITEM(BWplus_Item_CamoNet,2)
			MACRO_ADDITEM(AGM_NVG_Wide,2)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,1)   
		};
		class TransportWeapons {};
		class UserActions {
			MACRO_OPENDOOR
		};
	};
	class BWplus_Fennek_Flecktarn_pio: I_MRAP_03_F {
		displayName = "$STR_BWplus_Vehicles_Fennek_pio";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
		crew = "BWplus_Pioneer_Flecktarn";
		typicalCargo[] = {"BWA3_Rifleman_Fleck", "BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Fleck\piofleck.paa","BWplus_vehicles\data\Fleck\fleck2.paa"};
		transportMaxBackpacks = 3;
		transportMaxWeapons = 20;
		AGM_Vehicle_Cargo = 8;

		class eventHandlers {
			Init = "_this call BWplus_vehicles_fnc_pioFennekInit;";
		 	getin = "_this call BWplus_vehicles_fnc_getin;";
		};
		class TransportMagazines {
			class _xx_BWA3_DM32_Orange {
				magazine = "BWA3_DM32_Orange";
				count = 6;
			};
		};
		class TransportItems {
			MACRO_ADDITEM(ToolKit,1)
			MACRO_ADDITEM(BWA3_Vector,1)
			MACRO_ADDITEM(BWA3_ItemKestrel,1)
			MACRO_ADDITEM(BWA3_ItemNavipad,1)
			MACRO_ADDITEM(AGM_UAVBattery,1)
			MACRO_ADDITEM(BWplus_Shovel,1)
			MACRO_ADDITEM(BWplus_Item_CamoNet,2)
			MACRO_ADDITEM(AGM_NVG_Wide,2)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,1)
			MACRO_ADDBACKPACK(BWplus_Kitbag_pio_Green,1)   
		};
		class TransportWeapons {};
		class AGM_Actions: AGM_Actions {
			MACRO_ACTIONFOB
		};
		class UserActions {
			MACRO_OPENDOOR
		};
	};
	
    class BWplus_Fennek_Flecktarn_mg: I_MRAP_03_hmg_F {
		displayName = "Fennek Kal.50";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
		crew = "BWA3_Rifleman_Fleck";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Fleck\fleck.paa","BWplus_vehicles\data\Fleck\fleck2.paa"};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,10)
			MACRO_ADDMAGAZINE(BWA3_200Rnd_556x45,5)
			MACRO_ADDMAGAZINE(BWA3_DM51A1,5)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,5)
			MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell,5)
			MACRO_ADDMAGAZINE(BWA3_10Rnd_762x51_G28,5)
		};
		class TransportItems { 
			MACRO_ADDITEM(ToolKit,1)
			MACRO_ADDITEM(Rangefinder,1)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,1)
		};
		class TransportWeapons {
			MACRO_ADDWEAPON(BWA3_Pzf3_Loaded,2)
		};
	};	

	class BWplus_Fennek_Flecktarn_gmg: I_MRAP_03_gmg_F {
		displayName = "Fennek GMG";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
		crew = "BWA3_Rifleman_Fleck";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Fleck\fleck.paa","BWplus_vehicles\data\Fleck\fleck2.paa"};
		class eventHandlers {
		 	getin = "_this call BWplus_vehicles_fnc_getin";
		};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,10)
			MACRO_ADDMAGAZINE(BWA3_200Rnd_556x45,5)
			MACRO_ADDMAGAZINE(BWA3_DM51A1,5)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,5)
			MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell,5)
			MACRO_ADDMAGAZINE(BWA3_10Rnd_762x51_G28,5)
		};
		class TransportItems { 
			MACRO_ADDITEM(ToolKit,1)
			MACRO_ADDITEM(Rangefinder,1)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,1)   
		};
		class TransportWeapons {
			MACRO_ADDWEAPON(BWA3_Pzf3_Loaded,2)
		};
	};
	class BWplus_Fennek_Flecktarn_san: I_MRAP_03_F {
		displayName = "$STR_BWplus_Vehicles_Fennek_medic";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		crew = "BWA3_CombatLifeSaver_Fleck";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Fleck\sanfleck.paa","BWplus_vehicles\data\Fleck\fleck2.paa"};
		AGM_Vehicle_Cargo = 6;
		transportMaxBackpacks = 4;
		transportMaxWeapons = 20;
		class eventHandlers {
		 	Init = "_this call BWplus_vehicles_fnc_saniFennecInit;";
		 	getin = "_this call BWplus_vehicles_fnc_getin;";
		};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_DM51A1,3)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,6)
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,10)
        };
        class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,1);  
		};
		class TransportItems {
			MACRO_ADDITEM(ToolKit,1)
		};
		class TransportWeapons {};	
		class UserActions {
			MACRO_OPENDOOR
		};
	};
	class BWplus_Fennek_Tropen: BWplus_Fennek_Flecktarn {
		displayName = "$STR_BWplus_Vehicles_Fennek";
		author = "EduardLaser, Ir0n1E";
		vehicleClass = "BWA3_VehClass_Wheeled_Tropen";
		crew = "BWA3_Rifleman_Tropen";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Tropen\trop.paa","BWplus_vehicles\data\Tropen\trop2.paa"};
	};
	class BWplus_Fennek_Tropen_pio: BWplus_Fennek_Flecktarn_pio {
		displayName = "$STR_BWplus_Vehicles_Fennek_pio";
		author = "EduardLaser, Ir0n1E";
		vehicleClass = "BWA3_VehClass_Wheeled_Tropen";
		crew = "BWplus_Pioneer_Tropentarn";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Tropen\piotrop.paa","BWplus_vehicles\data\Tropen\trop2.paa"};
	};
	class BWplus_Fennek_Tropen_mg: BWplus_Fennek_Flecktarn_mg {
		displayName = "Fennek Kal.50";
		author = "EduardLaser, Ir0n1E";
		vehicleClass = "BWA3_VehClass_Wheeled_Tropen";
		crew = "BWA3_Rifleman_Tropen";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Tropen\trop.paa","BWplus_vehicles\data\Tropen\trop2.paa"};
	};	
    class BWplus_Fennek_Tropen_gmg: BWplus_Fennek_Flecktarn_gmg {
		displayName = "Fennek GMG";
		author = "EduardLaser, Ir0n1E";
		vehicleClass = "BWA3_VehClass_Wheeled_Tropen";
		crew = "BWA3_Rifleman_Tropen";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Tropen\trop.paa","BWplus_vehicles\data\Tropen\trop2.paa"};
	};
	class BWplus_Fennek_Tropen_san: BWplus_Fennek_Flecktarn_san {
		displayName = "$STR_BWplus_Vehicles_Fennek_medic";
		author = "EduardLaser, Ir0n1E";
		vehicleClass = "BWA3_VehClass_Wheeled_Tropen";
		crew = "BWA3_CombatLifeSaver_Tropen";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Tropen\santrop.paa","BWplus_vehicles\data\Tropen\trop2.paa"};
	};

    class Truck_F: Car_F {
    	class AGM_SelfActions {
    		MACRO_UNLOADBOAT
    	};
    };
    class Air;
    class Helicopter: Air {
    	class AGM_SelfActions {
    		MACRO_UNLOADBOAT
    	};
    };
};