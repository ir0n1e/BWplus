class CfgPatches {
	class bwplus_sounds_weapons {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {BWplus_core, A3_Weapons_F};
		version = "1.4";
    	versionStr = "1.4";
    	versionAr[] = {1,4,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};

class CfgAddons {
	class PreloadAddons {
		class CONFIG_SOUNDS_CLASS {
			list[] = {"bwplus_sounds_weapons_weapons"};
		};
	};
};

class Single;
class FullAuto;
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
	class BWA3_G36K_AG;
	class Rifle_Base_F;

	class BWA3_G36: Rifle_Base_F {
		class Single: Mode_SemiAuto {
			class BaseSoundModeType; 
			class StandardSound: BaseSoundModeType {
				begin1[] = {"bwplus_sounds_weapons\sounds\bwplus_g36_fire", 1, 1, 700};
				soundBegin[] = {"begin1", 1};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED1", 2, 1, 250};
				begin2[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED2", 2, 1, 250};
				begin3[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED3", 2, 1, 250};
				soundBegin[] = {"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000};
			};
		};
		class FullAuto: Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				begin1[] = {"bwplus_sounds_weapons\sounds\bwplus_g36_fire", 1, 1, 700};
				soundBegin[] = {"begin1", 1};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED1", 2, 1, 250};
				begin2[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED2", 2, 1, 250};
				begin3[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED3", 2, 1, 250};
				soundBegin[] = {"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000};
			};
		};
	};
	class BWA3_G36K: BWA3_G36 {
		class Single: Single {
			class BaseSoundModeType; 
			class StandardSound: BaseSoundModeType {
				begin1[] = {"bwplus_sounds_weapons\sounds\bwplus_g36_fire", 1, 1, 700};
				soundBegin[] = {"begin1", 1};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED1", 2, 1, 250};
				begin2[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED2", 2, 1, 250};
				begin3[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED3", 2, 1, 250};
				soundBegin[] = {"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000};
			};
		};
		class FullAuto: FullAuto {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				begin1[] = {"bwplus_sounds_weapons\sounds\bwplus_g36_fire", 1, 1, 700};
				soundBegin[] = {"begin1", 1};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED1", 2, 1, 250};
				begin2[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED2", 2, 1, 250};
				begin3[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED3", 2, 1, 250};
				soundBegin[] = {"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000};
			};
		};
	};
	class BWA3_G36_LMG: BWA3_G36 {
		class Single: Mode_SemiAuto {
			class BaseSoundModeType; 
			class StandardSound: BaseSoundModeType {
				begin1[] = {"bwplus_sounds_weapons\sounds\bwplus_g36_fire", 1, 1, 700};
				soundBegin[] = {"begin1", 1};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED1", 2, 1, 250};
				begin2[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED2", 2, 1, 250};
				begin3[] = {"bwplus_sounds_weapons\sounds\SUPPRESSED3", 2, 1, 250};
				soundBegin[] = {"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000};
			};
		};
	};
};