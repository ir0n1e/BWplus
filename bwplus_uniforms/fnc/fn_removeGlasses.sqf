_goggles = goggles player;

_typeGoggles = getText (configFile >> "CfgGlasses" >> _goggles >> "BWplus_Glassestype");
_color = getText (configFile >> "CfgGlasses" >> _goggles >> "BWplus_Color");
_name = getText (configfile >> "CfgGlasses" >> _typeGoggles >> "displayName");
_picture = format ["<img size='2' color='#ffffff' image='%1'/>", getText (configfile >> "CfgGlasses" >> _typeGoggles >> "picture")];

if (_typeGoggles == "None") exitwith {
	removeGoggles player;
	player additem _goggles;
	[formatText ["%1%2%3", parseText _picture, lineBreak, format [localize "STR_BWplus_detachGlasses", _name]], true] call BWA3_fnc_displayText;
};

_newGoggles = format ["BWplus_Shemagh_%1",_color ];
removeGoggles player;
player addGoggles _newGoggles;
player additem _typeGoggles;
[formatText ["%1%2%3", parseText _picture, lineBreak, format [localize "STR_BWplus_detachGlasses", _name]], true] call BWA3_fnc_displayText;

