#include "script_component.hpp"
PARAMS_1(_crater);
private ["_pos"];
_pos = getPosATL _crater;
_crater setpos [_pos select 0, _pos select 1, (_pos select 2) -0.2];
