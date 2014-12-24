

private ["_vec","_state","_relDir"];
_state="";
_vec = _this;
_relDir = [_vec, AGM_player] call BIS_fnc_relativeDirTo;

//right
if ( (_relDir > 40) and (_relDir < 130) ) then {
_state="right";
};


//left
if ( (_relDir > 220) and (_relDir < 310) ) then {
	_state="left";
};
_state