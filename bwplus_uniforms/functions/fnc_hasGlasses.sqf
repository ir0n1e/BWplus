
#include "script_component.hpp"

if (goggles ACE_player == "" || {getText (configFile >> "CfgGlasses" >> goggles ACE_player >> "BWplus_Glassestype") == "Shemagh"}) exitwith {false};
	true