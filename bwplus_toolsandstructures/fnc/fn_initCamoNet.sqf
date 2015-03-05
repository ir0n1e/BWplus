private ["_net","_pos"];
_net = _this select 0;
_pos = position _net;
_net setpos [_pos select 0, _pos select 1, (_pos select 2) -0.62];
