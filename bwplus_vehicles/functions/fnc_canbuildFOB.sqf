
#include "script_component.hpp"

PARAMS_1(_vec);

if ((GETVAR(_vec,BWplus_VecEngineer,false)) && {( GETVAR(ACE_Player,BWplus_pio,false)) || (GETVAR(ACE_Player,ACE_IsEngineer,false))}) exitwith {true};
	false 