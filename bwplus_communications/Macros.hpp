//AGM_Actions
#define MACRO_LOADABLE \
  class AGM_loadItem { \
    displayName = "$STR_AGM_Logistics_LoadItem"; \
    distance = 6; \
    condition = "[AGM_Interaction_Target] call AGM_Logistics_fnc_canLoadItem"; \
    statement = "[AGM_Interaction_Target, AGM_Logistics_targetVehicle] call AGM_Logistics_fnc_openLoadUI"; \
    showDisabled = 1; \
    priority = 1.6; \
    icon = "\A3\ui_f\data\igui\cfg\actions\gear_ca.paa"; \
  };

#define MACRO_DRAGABLE \
  class AGM_DragItem { \
    displayName = "$STR_AGM_Drag_StartDrag"; \
    distance = 4; \
    condition = "!(AGM_player call AGM_Drag_fnc_isDraggingObject)"; \
    conditionShow = "[AGM_Interaction_Target, AGM_player] call AGM_Drag_fnc_isDraggable"; \
    statement = "[AGM_Interaction_Target, AGM_player] call AGM_Drag_fnc_dragObject"; \
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
    condition = "[AGM_Interaction_Target] call AGM_StaticWeapons_fnc_canGetIn"; \
    statement = "[AGM_Interaction_Target] call AGM_StaticWeapons_fnc_getIn"; \
    showDisabled = 0; \
    priority = 1; \
  };

  #define MACRO_ROTATE \
  class AGM_RotateClockwise { \
    displayName = "$STR_AGM_StaticWeapons_RotateClockwise"; \
    distance = 4; \
    condition = "alive AGM_Interaction_Target"; \
    statement = "[AGM_Interaction_Target, true] call AGM_StaticWeapons_fnc_rotate"; \
    showDisabled = 1; \
    priority = 2.1; \
    icon = "AGM_Logistics\ui\rotate_cw_ca.paa"; \
  }; \
  class AGM_RotateCounterclockwise { \
    displayName = "$STR_AGM_StaticWeapons_RotateCounterclockwise"; \
    distance = 4; \
    condition = "alive AGM_Interaction_Target"; \
    statement = "[AGM_Interaction_Target, false] call AGM_StaticWeapons_fnc_rotate"; \
    showDisabled = 1; \
    priority = 2; \
    icon = "AGM_Logistics\ui\rotate_ccw_ca.paa"; \
  };