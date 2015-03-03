private ["_dir", "_dirDiff", "_object", "_display"];

_object 	= _this select 0;

_dir 		= getdir _object;
_dirTo 		= 360 + ([_object, BWplus_communications_satpos] call BIS_fnc_dirTo);

_dirDiff = (_dirTo - _dir) mod 360;

if(_dirDiff > 180) then {
	_dirDiff = 360 - _dirdiff;
};

//percent
100 - (100 / 360 * _dirDiff)
