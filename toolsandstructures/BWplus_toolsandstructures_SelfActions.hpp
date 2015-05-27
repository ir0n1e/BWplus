class ACE_Equipment  {
	class BWplus_SelfActions  {
		displayName = "$STR_BWplus_toolsandstructures_Actions";
		runOnHover = 1;
		exceptions[] = {"isNotInside"};
		statement = ""
		condition = "true";
		icon = PATHTOF(UI\bwplus_shovel_ca.paa);

		class BWplus_BuildCrater {
			displayName = "$STR_BWplus_toolsandstructures_buildCrate";
			priority = 0.5;
			condition = "!(ACE_player getVariable ['BWplus_building',false]) && {[ACE_player] call BWplus_toolsandstructures_fnc_canbuild}";
			statement = "[false] call BWplus_toolsandstructures_fnc_buildCrater";
			icon = PATHTOF(UI\bwplus_shovel_ca.paa);
			showDisabled = 0; 
		};
		class BWplus_BuildCraterBig {
			displayName = "$STR_BWplus_toolsandstructures_buildCrateNet";
			priority = 0.5;
			condition = "!(ACE_player getVariable ['BWplus_building', false]) && {[ACE_player] call BWplus_toolsandstructures_fnc_canbuildNet} && {[ACE_player] call BWplus_toolsandstructures_fnc_canbuild}";
			statement = "[true] call BWplus_toolsandstructures_fnc_buildCrater";
			icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
			showDisabled = 0; 
		};
		class BWplus_buildNet {
			displayName = "$STR_BWplus_toolsandstructures_buildNet";
			icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
			distance = 8; 
			condition = "!(ACE_player getVariable ['BWplus_building',false]) and {[ACE_player] call BWplus_toolsandstructures_fnc_canbuildNet}";
			statement = "[ACE_player] call BWplus_toolsandstructures_fnc_buildNet";
			priority = 3;
			showDisabled = 0;
		};
	};
};