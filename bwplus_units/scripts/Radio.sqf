private ["_radio","_player"];
_player = _this;
_radio =  isClass(configfile >> "CfgPatches" >> "task_force_radio_items");

if (_radio) then {
	_player addBackpack "tf_rt1523g_big_bwmod";
};
