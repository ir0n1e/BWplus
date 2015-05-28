
#include "script_component.hpp"


//[vehicle, position, unit
_this spawn {
	PARAMS_3(_veh,_pos,_unit);
	
	if (_veh getVariable "left_door_open") then {
		sleep 2;
		_veh animateDoor ['door_LF', 0];
		_veh setVariable ["left_door_open",false,true];
	};
	if (_veh getvariable "right_door_open") then {
		sleep 2;
		_veh animateDoor ['door_RF', 0];
		_veh setVariable ["right_door_open",false,true];
	};
};
