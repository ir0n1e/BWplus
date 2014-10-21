
_this spawn {

	private ["_lamp"];
 	_lamp = _this;
	_lamp allowdamage true;

	 _lamp setHit ["light_1_hitpoint", 0];
	sleep 0.05;
	_lamp setHit ["light_1_hitpoint", 0.97];
	sleep 0.05;
	_lamp setHit ["light_1_hitpoint", 0];
	sleep 0.05;
	_lamp setHit ["light_1_hitpoint", 0.97];
	sleep 0.252;
	_lamp setHit ["light_1_hitpoint", 0];
	sleep 0.5;

	_lamp setHit ["light_2_hitpoint", 0];

	_lamp allowdamage false;
	_lamp setVariable ["BWplus_lamp_on",true,true];
};