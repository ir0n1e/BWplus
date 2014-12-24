private "_vec";
_vec = _this select 0;

if (( _vec getVariable 'BWplus_VecEngineer') && {(player getvariable 'BWplus_pio') || [player] call AGM_Core_fnc_isEngineer}) exitwith {true};
	false