private "_vec";
_vec = _this select 0;

if (( _vec getVariable 'BWplus_VecEngineer') && {(AGM_player getvariable 'BWplus_pio') || [AGM_player] call AGM_Core_fnc_isEngineer}) exitwith {true};
	false