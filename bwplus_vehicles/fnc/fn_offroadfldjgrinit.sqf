_this animate ["HidePolice", 0];
_this animate ["HideServices", 1];
_this animate ["HideBackpacks", 1];
_this animate ["HideBumper1", 0];
_this animate ["HideBumper2", 0];
_this animate ["HideConstruction", 0];
_this animate ["HideDoor1", 0];
_this animate ["HideDoor2", 0];
_this animate ["HideDoor3", 0];


_this addAction ["Blaulicht An",{( _this select 0) animate ["BeaconsStart",1]},[],50,false,true,"","_target animationPhase 'BeaconsStart' < 0.5 AND Alive(_target) AND driver _target == _this"];
_this addAction ["Blaulicht Aus",{(_this select 0) animate ["BeaconsStart",0]},[],51,false,true,"","_target animationPhase 'BeaconsStart' > 0.5 AND Alive(_target) AND driver _target == _this"];

_this setVariable ["tf_side", west, true];
_this setVariable ["tf_h_thisRadio", true, true];
_this setVariable ["tf_isolatedAmount", 0.5, true];
_this setVariable ["tf_isolatedAmount", 0.1, true];
_this setVariable ["TF_RadioType", "tf_mr3000", true];
_this setVariable ["TF_speakerDistance", "50"];
