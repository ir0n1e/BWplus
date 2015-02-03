
private ["_raven","_player"];
_vehicle = _this;
_raven =  isClass(configFile/"CfgPatches"/"MicroAirVehicles");

if (_raven) then {
	_vehicle addBackpackCargoGlobal "B_MAV_B_BACKPACK";
};

