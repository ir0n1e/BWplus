class CfgPatches {

	class bwplus_sounds_merlin_merlin {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"bwplus_vehicles","A3_Air_F"};
		version = "1.3";
    	versionStr = "1.3";
    	versionAr[] = {1,3,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};

class CfgAddons {
	class PreloadAddons {
		class CONFIG_SOUNDS_CLASS {
			list[] = {"bwplus_sounds_merlin_merlin"};
		};
	};
};

class CfgVehicles {
	/*extern*/ class Helicopter;

	class Helicopter_Base_F: Helicopter {
	};

	class Helicopter_Base_H: Helicopter_Base_F {
	};

	class Heli_Transport_02_base_F: Helicopter_Base_H {
	};

	class I_Heli_Transport_02_F: Heli_Transport_02_base_F {
	};
	class BWplus_Merlin: I_Heli_Transport_02_F {

		soundEngineOnInt[] = {"bwplus_sounds_merlin\sounds\soundEngineOnInt", 1, 1};
		soundEngineOnExt[] = {"bwplus_sounds_merlin\sounds\startup_out", 1, 1, 300};
		soundEngineOffInt[] = {"bwplus_sounds_merlin\sounds\soundEngineOffInt", 1, 1};
		soundEngineOffExt[] = {"bwplus_sounds_merlin\sounds\stop_out", 1, 1, 300};
		soundDammage[] = {"bwplus_sounds_merlin\sounds\Damage", 2, 1, 50};

		class Sounds {

			class Engine {
				sound[] = {"bwplus_sounds_merlin\sounds\engine", 1, 1, 1000};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};

			class RotorLowOut {
				sound[] = {"bwplus_sounds_merlin\sounds\rotor_low_out", 1, 1, 300};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.600000, 3.140000, 1.600000, 0.950000};
			};

			class RotorHighOut {
				sound[] = {"bwplus_sounds_merlin\sounds\rotor_high_out", 1, 1, 800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.600000, 3.140000, 2, 0.500000};
			};

			class WindNoiseOut {
				sound[] = {"bwplus_sounds_merlin\sounds\dist", 1, 1, 4000};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {3.200000, 3.140000, 1.600000, 1};
			};

			class EngineIn {
				sound[] = {"bwplus_sounds_merlin\sounds\EngineIn", 1, 1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};

			class LowRotorIn {
				sound[] = {"bwplus_sounds_merlin\sounds\LowRotorInMERLIN", 3, 1};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3,1.1]) min (rotorSpeed factor[1.1,0.3]))";
			};

			class RotorHighIn {
				sound[] = {"bwplus_sounds_merlin\sounds\HighRotorInMERLIN", 5, 1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
	};
};