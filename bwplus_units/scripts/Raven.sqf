private ["_raven","_player"];
_player = _this;
_raven =  isClass(configFile/"CfgPatches"/"MicroAirVehicles");

if (_raven) then {
	_player addBackpack "B_MAV_B_BACKPACK";
};
