
#include "script_component.hpp"

#define FOBNET "CamoNet_INDP_big_F"
#define FOBBUILDTIME 60

private ["_net"];
PARAMS_1(_vec);

_net = ("BWplus_CamoNet_Dismantled" in (itemCargo _vec));

[FOBBUILDTIME, [_vec,_net], {_this call FUNC(buildFOBCallback);}, {}, localize "STR_BWplus_Vehicles_BuildingFOB"] call ace_common_fnc_progressBar;


