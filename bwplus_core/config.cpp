class CfgPatches {
	class BWplus_core {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			bwa3_common,
			bwa3_weapons,
			bwa3_units, 
			AGM_Core, 
		};
	 	version = "1.4";
    	versionStr = "1.4";
    	versionAr[] = {1,4,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};
class CfgFunctions {
	class BWplus_core {
    	class BWplus_core {
      		file = "BWplus_core\fnc";
      		class BuildAbort;
    	};
  	};
};