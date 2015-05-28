
#include "script_component.hpp"

_goggles = goggles ACE_player;

_typeGoggles = getText (configFile >> "CfgGlasses" >> _goggles >> "BWplus_Glassestype");
_color = getText (configFile >> "CfgGlasses" >> _goggles >> "BWplus_Color");
_name = getText (configfile >> "CfgGlasses" >> _typeGoggles >> "displayName");
_picture = format ["<img size='2' color='#ffffff' image='%1'/>", getText (configfile >> "CfgGlasses" >> _typeGoggles >> "picture")];

if (_typeGoggles == "None") exitwith {
	removeGoggles ACE_player;
	ACE_player additem _goggles;
	[formatText ["%1%2%3", parseText _picture, lineBreak, format [localize "STR_BWplus_detachGlasses", _name]], true] call BWA3_fnc_displayText;
};

_newGoggles = format ["BWplus_Shemagh_%1",_color ];
removeGoggles ACE_player;
ACE_player addGoggles _newGoggles;
ACE_player additem _typeGoggles;
[formatText ["%1%2%3", parseText _picture, lineBreak, format [localize "STR_BWplus_detachGlasses", _name]], true] call BWA3_fnc_displayText;

