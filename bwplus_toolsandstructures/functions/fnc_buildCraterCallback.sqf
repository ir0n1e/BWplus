#include "script_component.hpp"
#define ITEMNET "BWplus_CamoNet_Dismantled"
PARAMS_1(_parameter);
EXPLODE_4_PVT(_parameter,_items,_cratercount,_unit,_buildwithnet);
EXPLODE_2_PVT(_items,_crater,_net);

[_unit, "AmovPknlMstpSrasWrflDnon", 1] call ACE_common_fnc_doAnimation;
INC(_cratercount);
SETPVAR(_crater,BWplus_builder,_unit);
SETPVAR(_crater,BWplus_crater_items,_craterthings);
SETPVAR(_unit,BWplus_crater_count,_cratercount);
if (_buildwithNet) then {
	_unit removeitem ITEMNET;
};
SETPVAR(_unit,BWplus_building,false);