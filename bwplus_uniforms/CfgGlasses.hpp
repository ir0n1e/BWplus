class CfgGlasses {
    class None {
        BWplus_Glassestype = "None";
    };
	
    class BWplus_Shemagh_GreenÖ: None {
   
		displayname = "$STR_BWplus_Shemagh_Green";
        author = "BW.plus";
        model = QUOTE(PATHTOF(bwplus_LooseShemaghGreen.p3d));
        picture = QUOTE(PATHTOF(data\bwplus_icon_shemagh_Green.paa));
        identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		BWplus_Glassestype = "Shemagh";
        BWplus_Color = "Green";
        ACE_OverlayDirt = "";
        ACE_OverlayCracked = "";
        ACE_Resistance = 0;
        ACE_Protection = 0;
        ACE_DustPath = "";
    };
    class BWplus_Shemagh_Sand : BWplus_Shemagh_Green {
        displayname = "$STR_BWplus_Shemagh_Sand";
		author = "BW.plus";
        model = QUOTE(PATHTOF(bwplus_LooseShemaghSand.p3d));
        picture = QUOTE(PATHTOF(data\bwplus_icon_shemagh_Sand.paa));
        BWplus_Color = "Sand";
    };
    class BWplus_LOG_Shemagh_Green : None {
        displayname = "$STR_BWplus_LOG_Shemagh_Green";
        model = QUOTE(PATHTOF(bwplus_LOGLooseGreen.p3d));
        author = "BW.plus";
        identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
        picture = QUOTE(PATHTOF(data\bwplus_icon_LOG_shemagh_Green.paa));
        ACE_TintAmount = "8.0*1.5";
        ACE_Color[] = {0,0,-1.5};
        ACE_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Orange";
        BWplus_Color = "Green";
    };
    class BWplus_LOG_Shemagh_Sand : BWplus_LOG_Shemagh_Green {
        displayname = "$STR_BWplus_LOG_Shemagh_Sand";
		author = "BW.plus";
        model = QUOTE(PATHTOF(bwplus_LOGlooseSand.p3d));
        picture = QUOTE(PATHTOF(data\bwplus_icon_LOG_shemagh_Sand.paa));
        ACE_TintAmount = "8.0*1.5";
        ACE_Color[] = {0,0,-1.5};
        ACE_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Orange";
        BWplus_Color = "Sand";
    };
    class BWplus_LBG_Shemagh_Green : BWplus_LOG_Shemagh_Green {
        displayname = "$STR_BWplus_LBG_Shemagh_Green";
		author = "BW.plus";
        model = PATHTOF(bwplus_LBGLooseGreen.p3d);
        picture = PATHTOF(data\bwplus_icon_LBG_shemagh_Green.paa);
        ACE_TintAmount = 8.0;
        ACE_Color[] = {0,0,-1};
        ACE_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Black";
        BWplus_Color = "Green";
    };
    class BWplus_LBG_Shemagh_Sand : BWplus_LOG_Shemagh_Green {
        displayname = "$STR_BWplus_LBG_Shemagh_Sand";
		author = "BW.plus";
        model = PATHTOF(bwplus_LBGLooseSand.p3d);
        picture = PATHTOF(data\bwplus_icon_LBG_shemagh_Sand.paa);
        ACE_TintAmount = 8.0;
        ACE_Color[] = {0,0,-1};
        ACE_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Black";
        BWplus_Color = "Sand";
    };
    class BWplus_LCG_Shemagh_Green : BWplus_LOG_Shemagh_Green {
        displayname = "$STR_BWplus_LCG_Shemagh_Green";
		author = "BW.plus";
        model = PATHTOF(bwplus_LCGLooseGreen.p3d);
        picture = PATHTOF(data\bwplus_icon_LCG_shemagh_Green.paa);
        ACE_TintAmount = 8.0;
        ACE_Color[] = {0,0,0};
        ACE_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Clear";
        BWplus_Color = "Green";
    };
    class BWplus_LCG_Shemagh_Sand : BWplus_LOG_Shemagh_Green {
        displayname = "$STR_BWplus_LCG_Shemagh_Sand";
		author = "BW.plus";
        model = PATHTOF(bwplus_LCGLooseSand.p3d);
        picture = PATHTOF(data\bwplus_icon_LCG_shemagh_Sand.paa);
        ACE_TintAmount = 8.0;
        ACE_Color[] = {0,0,0};
        ACE_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Clear";
        BWplus_Color = "Sand";
    };
    class G_Shades_Black;
    class BWA3_G_Combat_Orange : G_Shades_Black {
        BWplus_Color = "LOG";
        ACE_TintAmount = "8.0*1.5";
        ACE_Color[] = {0,0,-1.5};
        ACE_Resistance = 1;
    };
    class BWA3_G_Combat_Black : G_Shades_Black {
        BWplus_Color = "LBG";
        ACE_TintAmount = 8.0;
        ACE_Color[] = {0,0,-1};
        ACE_Resistance = 1;
    };
    class BWA3_G_Combat_Clear : G_Shades_Black {
        BWplus_Color = "LCG";
        ACE_TintAmount = 8.0;
        ACE_Color[] = {0,0,0};
        ACE_Resistance = 1;
    };
};

