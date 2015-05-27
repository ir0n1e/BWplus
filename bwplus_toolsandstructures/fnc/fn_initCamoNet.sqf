private ["_net","_pos"];
_this spawn {
	_net = _this select 0;

	waitUntil {alive _net};
	_pos = position _net;
	_net setpos [_pos select 0, _pos select 1, (_pos select 2) -0.62];
};