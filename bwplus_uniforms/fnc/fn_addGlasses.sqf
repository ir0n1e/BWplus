
_actualGoggles = goggles AGM_player;
_actualType = getText (configFile >> "CfgGlasses" >> _actualGoggles >> "BWplus_Glassestype");
_actualColor = getText (configFile >> "CfgGlasses" >> _actualGoggles >> "BWplus_Color");

{
	_typeGoggles = getText (configFile >> "CfgGlasses" >> _x >> "BWplus_Glassestype");
	_colorGoggles = getText (configFile >> "CfgGlasses" >> _x >> "BWplus_Color");
	_name = getText (configfile >> "CfgGlasses" >> _x >> "displayName");
	_picture = format ["<img size='2' color='#ffffff' image='%1'/>", getText (configfile >> "CfgGlasses" >> _x >> "picture")];

	if (_typeGoggles == "None" && _actualGoggles == "") exitwith {
		AGM_player addGoggles _x;
		AGM_player removeitem _x;
		[formatText ["%1%2%3", parseText _picture, lineBreak, format [localize "STR_BWplus_AttachGlasses", _name]], true] call BWA3_fnc_displayText;
	};
	if ( _typeGoggles == "None" && _typeGoggles != "" && _actualType == "Shemagh") exitwith {
		_newGoggles = format ["BWplus_%1_Shemagh_%2",_colorGoggles, _actualColor];

		[formatText ["%1%2%3", parseText _picture, lineBreak, format [localize "STR_BWplus_AttachGlasses", _name]], true] call BWA3_fnc_displayText;

		AGM_player addGoggles _newGoggles;
		AGM_player removeitem _x;
	};


} forEach items AGM_player;