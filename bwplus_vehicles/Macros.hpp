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

#define MACRO_ACTIONFOB \
	class BWplus_buildFOB { \
        displayName = "$STR_BWplus_Vehicles_buildFOB"; \
        condition = "!(AGM_Interaction_Target getVariable 'BWplus_FOBon') AND {[AGM_Interaction_Target] call BWplus_vehicles_fnc_canbuildFOB}"; \
        statement = "[AGM_Interaction_Target] call BWplus_vehicles_fnc_buildFOB"; \
        distance = 4; \
        priority = 4; \
  	}; \
 	class BWplus_dismantleFOB { \
        displayName = "$STR_BWplus_Vehicles_DismanteleFOB"; \
        condition = "(AGM_Interaction_Target getVariable 'BWplus_FOBon') AND {[AGM_Interaction_Target] call BWplus_vehicles_fnc_canbuildFOB}"; \
        statement = "[AGM_Interaction_Target] call BWplus_vehicles_fnc_dismantleFOB"; \
        distance = 4; \
        priority = 5; \
  	};
  #define MACRO_LOADABLE \
  class AGM_loadItem { \
    displayName = "$STR_AGM_Logistics_LoadItem"; \
    distance = 4; \
    condition = "[AGM_Interaction_Target] call AGM_Logistics_fnc_canLoadItem"; \
    statement = "[AGM_Interaction_Target, AGM_Logistics_targetVehicle] call AGM_Logistics_fnc_openLoadUI"; \
    showDisabled = 1; \
    priority = 1.6; \
  };

  #define MACRO_DRAGABLE \
  class AGM_DragItem { \
    displayName = "$STR_AGM_Drag_StartDrag"; \
    distance = 4; \
    condition = "!(player call AGM_Drag_fnc_isDraggingObject) AND {[AGM_Interaction_Target, player] call AGM_Drag_fnc_isDraggable}"; \
    statement = "[AGM_Interaction_Target, player] call AGM_Drag_fnc_dragObject"; \
    showDisabled = 1; \
    priority = 3; \
  }; \
  class AGM_ReleaseItem { \
    displayName = "$STR_AGM_Drag_EndDrag"; \
    distance = 4; \
    condition = "player call AGM_Drag_fnc_isDraggingObject && {AGM_Interaction_Target == player getVariable ['AGM_carriedItem', objNull]}"; \
    statement = "player call AGM_Drag_fnc_releaseObject"; \
    exceptions[] = {"AGM_Drag_isNotDragging"}; \
    showDisabled = 0; \
    priority = 3; \
  };
#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
  name = #ITEM; \
  count = COUNT; \
};
#define MACRO_ADDBACKPACK(PACK,COUNT) class _xx_##PACK { \
  backpack = #PACK; \
  count = COUNT; \
};
#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
  magazine = #MAGAZINE; \
  count = COUNT; \
};
#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
  weapon = #WEAPON; \
  count = COUNT; \
};
