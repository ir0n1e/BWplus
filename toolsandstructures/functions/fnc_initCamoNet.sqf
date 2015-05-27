#include "script_component.hpp"

PARAMS_1(_net);
private ["_pos"];
_pos = position _net;
_net setpos [_pos select 0, _pos select 1, (_pos select 2) -0.62];
