//gettext (configfile >> "CfgVehicles" >> "BWplus_Lights" >> "Reflectors" >> "Light_1" >> "hitpoint")


_this spawn {
 	_lamp = _this;
	_lamp allowdamage true;
	_reflectors = (getarray (configfile >> "CfgVehicles" >> typeof _lamp >> "aggregateReflectors")) select 0;
	if (isnil "_reflectors") then {
		_reflectors = ["Light_1"];
	};


	for "_i" from 0 to (count _reflectors) -1 do {
		_r = gettext (configfile >> "CfgVehicles" >> typeof _lamp >> "Reflectors" >> (_reflectors select _i) >> "hitpoint");
		//Flash first reflector
		if (_i == 0) then {
			_lamp setHit [_r, 0];
			sleep 0.05;
			_lamp setHit [_r, 0.97];
			sleep 0.05;
			_lamp setHit [_r, 0];
			sleep 0.05;
			_lamp setHit [_r, 0.97];
			sleep 0.252;
		};
			sleep 0.5;
			_lamp setHit [_r, 0];
	};
	_lamp allowdamage false;
	_lamp setVariable ["BWplus_lamp_on",true,true];
};