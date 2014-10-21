_activeGoggles = getText (configFile >> "CfgGlasses" >> goggles player >> "BWplus_Glassestype");
{
	_typeGoggles = getText (configFile >> "CfgGlasses" >> _x >> "BWplus_Glassestype");

	if (_typeGoggles == "None" && {_activeGoggles == "Shemagh" || _activeGoggles == ""} ) exitwith {true};
false
} forEach items player;

