#define ITEMNET "BWplus_CamoNet_Dismantled"

private ["_craterthings","_crater","_crater_count","_unit","_buildwithNet"];

_craterthings = _this select 0;
_crater = _craterthings select 0;
_crater_count = _this select 1;
_unit = _this select 2;
_buildwithNet = _this select 3;

[_unit, "AmovPknlMstpSrasWrflDnon", 1] call AGM_Core_fnc_doAnimation;
_crater setVariable ["BWplus_builder",_unit,true];
_crater setvariable ["BWplus_crater_items",_craterthings,true];
_unit setVariable ["BWplus_crater_count",_crater_count+1,true];
if (_buildwithNet) then {
	_unit removeitem ITEMNET;
};

_unit setVariable ["BWplus_building",false,true];
