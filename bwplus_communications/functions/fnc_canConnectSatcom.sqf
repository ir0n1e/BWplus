#include "script_component.hpp"
private ["_result", "_frequency"];

_result = false;
_frequency = (call TFAR_fnc_ActiveLRRadio) call TFAR_fnc_getLRFrequency;

if (call TFAR_fnc_isTeamSpeakPluginEnabled && {!isnil "_frequency"}) then {
	_result = true;
};

_result