private "_unit";
_unit = _this select 0;

if (!(AGM_player getvariable 'BWplus_Pio') || {!("BWplus_CamoNet_Dismantled" in (items AGM_player))}) exitWith {false};

	true