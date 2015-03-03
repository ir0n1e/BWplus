private ["_count", "_object", "_text", "_string", "_color", "_picture", "_quality"];

_object = _this select 0;

_quality = ([_object] call BWplus_communications_fnc_getConnectionQuality) / 100;

_color = [
	2 * (1 - _quality) min 1,
	2 * _quality min 1,
	00
];

_count = 2 + round (10 * _quality);
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