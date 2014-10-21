class CfgPatches {
  class bwplus_agm_patches {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"BWA3_Weapons","AGM_Medical"};
		version = "1.3";
    versionStr = "1.3";
    versionAr[] = {1,3,0};
    author[] = {"EduardLaser", "Ir0n1E"};
    authorUrl = "http://ntalpha.de";
	};
};

class CfgVehicles {
  class AllVehicles;
  class Air: AllVehicles {
    AGM_Paradrop = 1;
  };
};

class CfgWeapons {
  class optic_Hamr;
	class Rifle_Long_Base_F;
  class Rifle_Base_F;
  class InventoryOpticsItem_Base_F;

	class BWA3_MG4: Rifle_Long_Base_F {
	  AGM_Overheating_allowSwapBarrel = 1;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
	};
	class BWA3_MG5: Rifle_Long_Base_F {
    AGM_Overheating_allowSwapBarrel = 1;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };
  class BWA3_G36: Rifle_Base_F {
    AGM_clearJamAction = "";   // Custom jam clearing action. Default uses reload animation.
    AGM_checkTemperatureAction = "Gear";    
    AGM_Overheating_Dispersion[] = {0, 0.001, 0.002, 0.004};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.006, 0.02};
  };
  class BWA3_G36_LMG: BWA3_G36 {
    AGM_Overheating_Dispersion[] = {0, -0.001, 0.001, 0.003};
    AGM_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
    AGM_Overheating_JamChance[] = {0, 0, 0.004, 0.02};
  };
/*
BWA3_optic_Shortdot
BWA3_optic_20x50
BWA3_optic_20x50_NSV
BWA3_optic_24x72
BWA3_optic_24x72_NSV
*/
  class BWA3_optic_20x50: optic_Hamr {
    AGM_ScopeAdjust_Horizontal[] = {-50,50};
    AGM_ScopeAdjust_Vertical[] = {-70,70};
  };
  class BWA3_optic_Shortdot: BWA3_optic_20x50 {
  };
  class BWA3_optic_20x50_NSV: BWA3_optic_20x50 {
  };
  class BWA3_optic_24x72: BWA3_optic_20x50 {
  };
  class BWA3_optic_24x72_NSV: BWA3_optic_20x50 {
  };
  class missiles_titan;
  class LMG_coax;
  class LMG_M200;
  class launch_Titan_base;
  class BWA3_Spike_LR: missiles_titan {
      AGM_Magazines[] = {"Titan_AT","BWA3_2Rnd_Spike_LR"};
  };
  class BWA3_MG5_vehicle: LMG_coax {
      AGM_magazines[] = {"BWA3_120Rnd_762x51", "BWA3_1200Rnd_762x51"};
  
  };
  class BWA3_MG4_vehicle: LMG_M200 {
      AGM_magazines[] = {"BWA3_200Rnd_556x45","BWA3_2000Rnd_556x45"};
  };
  class launch_Titan_short_base: launch_Titan_base {
    AGM_Magazines[] = {"Titan_AT","Titan_AP"};
  };
  class launch_Titan_F: launch_Titan_base {
    AGM_Magazines[] = {"Titan_AA"};
  };
  class launch_I_Titan_short_F: launch_Titan_short_base {
  };
  class launch_O_Titan_short_F: launch_Titan_short_base {
  };
  class launch_B_Titan_short_F: launch_Titan_short_base {
  };
class launch_I_Titan_F: launch_Titan_F {
  };
  class launch_O_Titan_F: launch_Titan_F {
  };
  class launch_B_Titan_F: launch_Titan_F {
  };
};
  
class CfgMagazines {
  class 2Rnd_GAT_missiles;
  class CA_Magazine;
  class BWA3_2Rnd_Spike_LR: 2Rnd_GAT_missiles {
    AGM_LoadTime = 20;
    AGM_MagazineReloadType = 1;
  };
  class 150Rnd_762x51_Box: CA_Magazine {
    AGM_LoadTime = 10;
    AGM_MagazineReloadType = 0;
  };
};
 