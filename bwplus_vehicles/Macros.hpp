/*
#define MACRO_OPENDOOR \
	class BWplus_Open_left_door { \
        displayName = "Open Left Door"; \
        priority = 3; \
		radius = 5; \
		position = "camera"; \
		showWindow = 0; \
		onlyForPlayer = 1; \
        condition = "((this call BWplus_vehicles_fnc_leftorright) == ""left"") and not (this getVariable ""left_door_open"")"; \
        statement = "this setVariable [""left_door_open"",true,true];this animateDoor ['door_LF', 1]; "; \
  	}; \
	class BWplus_Open_right_door { \
        displayName = "Open Right Door"; \
        condition = "((this call BWplus_vehicles_fnc_leftorright)== ""right"") and not (this getVariable ""right_door_open"")"; \
        statement = "this setVariable [""right_door_open"",true,true];this animateDoor ['door_RF', 1];"; \
        priority = 3; \
		radius = 5; \
		position = "camera"; \
		showWindow = 0; \
		onlyForPlayer = 1; \
  	}; \
	class BWplus_Close_left_door { \
        displayName = "Close Left Door"; \
        priority = 3; \
		radius = 5; \
		position = "camera"; \
		showWindow = 0; \
		onlyForPlayer = 1; \
        condition = "((this call BWplus_vehicles_fnc_leftorright) == ""left"") and  (this getVariable ""left_door_open"")"; \
        statement = "this setVariable [""left_door_open"",false,true];this animateDoor ['door_LF', 0];"; \
    }; \
  	class BWplus_Close_right_door { \
        displayName = "Close Right Door"; \
        condition = "((this call BWplus_vehicles_fnc_leftorright)== ""right"") and  (this getVariable ""right_door_open"")"; \
       	statement = "this setVariable [""right_door_open"",false,true];this animateDoor ['door_RF', 0];"; \
        priority = 3; \
		radius = 5; \
		position = "camera"; \
		showWindow = 0; \
		onlyForPlayer = 1; \
 	};
*/
#define MACRO_ACTIONFOB \
	class BWplus_buildFOB { \
        displayName = "$STR_BWplus_Vehicles_buildFOB"; \
        condition = "!((_this select 0) getVariable 'BWplus_FOBon') AND {[(_this select 0)] call BWplus_vehicles_fnc_canbuildFOB}"; \
        statement = "[(_this select 0)] call BWplus_vehicles_fnc_buildFOB"; \
        distance = 4; \
        priority = 4; \
  	}; \
 	class BWplus_dismantleFOB { \
        displayName = "$STR_BWplus_Vehicles_DismantleFOB"; \
        condition = "((_this select 0) getVariable 'BWplus_FOBon') AND {[(_this select 0)] call BWplus_vehicles_fnc_canbuildFOB}"; \
        statement = "[(_this select 0)] call BWplus_vehicles_fnc_dismantleFOB"; \
        distance = 4; \
        priority = 5; \
  	};
/*
#define MACRO_DRAGBOAT \
  class BWplus_DragBoat { \
    displayName = "$STR_AGM_Drag_StartDrag"; \
    distance = 5; \
    condition = "!(AGM_player call AGM_Drag_fnc_isDraggingObject)"; \
    conditionShow = "[ACE_Interaction_Target, AGM_player] call AGM_Drag_fnc_isDraggable"; \
    statement = "[ACE_Interaction_Target, AGM_player] call BWplus_vehicles_fnc_dragBoat"; \
    showDisabled = 0; \
    priority = 3; \
    Icon = "\A3\boat_F\Boat_Transport_01\data\UI\map_Boat_Transport_01_CA.paa"; \
    hotkey = "R"; \
  };

#define MACRO_UNLOADBOAT \
  class BWplus_UnloadBoat { \
    displayName = "$STR_BWplus_Vehicles_UnloadBoat"; \
    distance = 4; \
    condition = "(getPosASL AGM_Logistics_targetVehicle select 2 <= 18)"; \
    conditionShow = "[AGM_Logistics_targetVehicle] call BWplus_vehicles_fnc_hasLoadedBoat"; \
    statement = "[AGM_Logistics_targetVehicle] call BWplus_vehicles_fnc_unloadBoat"; \
    showDisabled = 0; \
    priority = 3; \
    enableInside = 1; \
    Icon = "\A3\boat_F\Boat_Transport_01\data\UI\map_Boat_Transport_01_CA.paa"; \
    hotkey = "D"; \
  };


//AGM_Actions
#define MACRO_LOADABLE \
  class AGM_loadItem { \
    displayName = "$STR_AGM_Logistics_LoadItem"; \
    distance = 6; \
    condition = "[ACE_Interaction_Target] call AGM_Logistics_fnc_canLoadItem"; \
    statement = "[ACE_Interaction_Target, AGM_Logistics_targetVehicle] call AGM_Logistics_fnc_openLoadUI"; \
    showDisabled = 1; \
    priority = 1.6; \
    icon = "\A3\ui_f\data\igui\cfg\actions\gear_ca.paa"; \
  };

#define MACRO_DRAGABLE \
  class AGM_DragItem { \
    displayName = "$STR_AGM_Drag_StartDrag"; \
    distance = 4; \
    condition = "!(AGM_player call AGM_Drag_fnc_isDraggingObject)"; \
    conditionShow = "[ACE_Interaction_Target, AGM_player] call AGM_Drag_fnc_isDraggable"; \
    statement = "[ACE_Interaction_Target, AGM_player] call AGM_Drag_fnc_dragObject"; \
    showDisabled = 0; \
    priority = 3; \
    icon = "\A3\ui_f\data\igui\cfg\actions\gear_ca.paa"; \
    hotkey = "R"; \
  };
//    tooltip = "Drag this object."; \

#define MACRO_NOT_DRAGABLE \
  class AGM_DragItem { \
    condition = "false"; \
  };

#define MACRO_GETIN_STATIC \
  class AGM_GetIn { \
    displayName = "$STR_AGM_StaticWeapons_GetIn"; \
    distance = 4; \
    condition = "[ACE_Interaction_Target] call AGM_StaticWeapons_fnc_canGetIn"; \
    statement = "[ACE_Interaction_Target] call AGM_StaticWeapons_fnc_getIn"; \
    showDisabled = 0; \
    priority = 1; \
  };

  #define MACRO_ROTATE \
  class AGM_RotateClockwise { \
    displayName = "$STR_AGM_StaticWeapons_RotateClockwise"; \
    distance = 4; \
    condition = "alive ACE_Interaction_Target"; \
    statement = "[ACE_Interaction_Target, true] call AGM_StaticWeapons_fnc_rotate"; \
    showDisabled = 1; \
    priority = 2.1; \
    icon = "AGM_Logistics\ui\rotate_cw_ca.paa"; \
  }; \
  class AGM_RotateCounterclockwise { \
    displayName = "$STR_AGM_StaticWeapons_RotateCounterclockwise"; \
    distance = 4; \
    condition = "alive ACE_Interaction_Target"; \
    statement = "[ACE_Interaction_Target, false] call AGM_StaticWeapons_fnc_rotate"; \
    showDisabled = 1; \
    priority = 2; \
    icon = "AGM_Logistics\ui\rotate_ccw_ca.paa"; \
  };
  */