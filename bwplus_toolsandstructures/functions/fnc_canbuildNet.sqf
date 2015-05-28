#include "script_component.hpp"
PARAMS_1(_player);

if (!(_player getvariable ['BWplus_Pio', false]) || {!("BWplus_CamoNet_Dismantled" in (items _player))}) exitWith {false};

	true
