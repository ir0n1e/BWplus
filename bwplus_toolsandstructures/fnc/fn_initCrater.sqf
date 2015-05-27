private ["_crater","_pos"];
_this spawn {

	_crater = _this select 0;
	waitUntil {alive _crater};
	_pos = getpos _crater;
	_crater setpos [_pos select 0, _pos select 1, (_pos select 2) -0.2];
};
