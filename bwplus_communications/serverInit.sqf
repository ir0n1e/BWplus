private "_posArray";
_posArray = [];
{
	_posArray pushBack (getArray (_x >> "position"));
} foreach ([(configfile >> "CfgWorlds" >> worldname >> "Names"), 1, true, true] call BIS_fnc_returnChildren);

BWplus_communications_satpos = _posArray select (floor (random (count _posArray)));
publicVariable "BWplus_communications_satpos";
