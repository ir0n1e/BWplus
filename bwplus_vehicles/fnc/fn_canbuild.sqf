private "_unit";
_unit = _this select 0;

if (vehicle player != player || {!("BWplus_Shovel" in (items player))}) exitWith {false};
	true