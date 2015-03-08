private "_player";
_player = _this select 0;

if (!(_player getvariable ['BWplus_Pio', false]) || {!("BWplus_CamoNet_Dismantled" in (items _player))}) exitWith {false};

	true
