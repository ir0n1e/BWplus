#define COUNT_BARS 20

private ["_dir", "_dirDiff", "_object", "_display"];

_object 	= _this select 0;
_display	= _this select 1;

_dir 		= getdir _object;
_dirTo 		= [_object, BWplus_communications_satpos] call BIS_fnc_dirTo;


if (_dirto < _dir) then {
	_dirto = _dirto + (2 * pi);
};

_dirDiff = _dirto - _dir;

if (_dirDiff <= _dirto && {_dirDiff > 180}) then {
	_dirDiff = 360 - _dirDiff;
};

if (_dirDiff < 0) then {
	_dirDiff = (_dirDiff * -1);
};

_dirDiff = 100 - (100 / 360 * _dirDiff);

if (!_display) exitWith {_dirDiff};

private ["_count", "_signalMax", "_text", "_string", "_color", "_picture"];

_dirDiff = (_dirDiff / 100);

_color = [
	2 * (1 - _dirDiff) min 1,
	2 * _dirDiff min 1,
	00
];

_count = 2 + round (10 * _dirDiff);
_string = "";
for "_a" from 1 to _count do {
	_string = _string + "|";
};
_text = [_string, _color] call AGM_Core_fnc_stringToColoredText;

_string = "";
for "_a" from (_count + 1) to 12 do {
	_string = _string + "|";
};

_text = composeText [
	_text,
	[_string, [0.5, 0.5, 0.5]] call AGM_Core_fnc_stringToColoredText
];


_picture = getText (configFile >> "CfgVehicles" >> typeOf _object >> "picture");

[_text, _picture] call AGM_Core_fnc_displayTextPicture;
