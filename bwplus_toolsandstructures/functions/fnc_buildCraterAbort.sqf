#include "script_component.hpp"



PARAMS_1(_parameter);
EXPLODE_4_PVT(_parameter,_items,_cratercount,_unit,_buildwithnet);
EXPLODE_2_PVT(_items,_crater,_net);


deletevehicle _crater;
deleteVehicle _net;
SETPVAR(_unit,BWplus_building,false);
SETPVAR(_unit,BWplus_crater_abort,true);
[_unit, "AmovPknlMstpSrasWrflDnon", 1] call ACE_common_fnc_doAnimation;
