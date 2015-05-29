
#include "script_component.hpp"

#define FOBBUILDTIME 60
PARAMS_1(_vec);

BWplus_vehicles_dismantleFOBCallback = {
	PARAMS_1(_parameter);
	EXPLODE_2_PVT(_parameter,_vec);
	
	{
		deleteVehicle _x;
	} forEach (GETVAR(_vec,BWplus_FOBitems,[]));
	SETPVAR(_vec,BWplus_FOBon,false);
	
};

[FOBBUILDTIME, [_vec], {_this call FUNC(dismantleFOBCallback);}, {}, localize "STR_BWplus_Vehicles_DismantlingFOB"] call ace_common_fnc_progressBar;
