private ["_lamp", "_reflectors","_r"];

_lamp = _this;
_reflectors = (getarray (configfile >> "CfgVehicles" >> typeof _lamp >> "aggregateReflectors")) select 0;

if (isnil "_reflectors") then {
	_reflectors = ["Light_1"];
};

_lamp allowdamage true;
for "_i" from 0 to (count _reflectors) -1 do {
	_r = gettext (configfile >> "CfgVehicles" >> typeof _lamp >> "Reflectors" >> (_reflectors select _i) >> "hitpoint");
	_lamp setHit [_r, 0.97];
};

_lamp allowdamage false;
_lamp setVariable ["BWplus_lamp_on",false,true];

