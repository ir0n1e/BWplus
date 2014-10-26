private "_unit";
_unit = _this select 0;

if ((vehicle player != player) && (player getvariable 'BWplus_Pio') || {!("BWplus_Shovel" in (items player)) || !("BWplus_Item_CamoNet" in (items player))}) exitWith {false};

	true
