#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"
#include "\z\ace\addons\main\script_macros.hpp"


#define CHECK(CONDITION) if (CONDITION) exitWith {};

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

#define MACRO_DRAGABLE \
	ace_dragging_canDrag = 1;\
    ace_dragging_dragPosition[] = {0,1.2,0}\
    ace_dragging_dragDirection = 0;
	
	
	
#define MACRO_NOT_DRAGABLE \
	ace_dragging_canDrag = 0;