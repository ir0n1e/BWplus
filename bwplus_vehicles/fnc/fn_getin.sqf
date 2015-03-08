
//[vehicle, position, unit
_this spawn {
	_veh = _this select 0;
	_pos = _this select 1;
	_unit = _this select 2;


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
