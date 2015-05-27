class CfgWeapons {
    class BWA3_Beret_PzGren;
    class H_Cap_red;
    
    class BWplus_Cap_Green : H_Cap_red {
        author = "BW.plus";
        displayName = "$STR_BWplus_Cap_Green";
        picture = PATHTOF(data\bwplus_icon_capb_green_ca.paa);
        hiddenSelectionsTextures[] = {PATHTOF(data\bwplus_capb_green_co.paa)};
    };
    class BWplus_Cap_Sand : H_Cap_red {
        author = "BW.plus";
        displayName = "$STR_BWplus_Cap_Sand";
        picture = PATHTOF(data\bwplus_icon_capb_sand_ca.paa);
        hiddenSelectionsTextures[] = {PATHTOF(data\bwplus_capb_sand_co.paa)};
    };
    
    class BWplus_Beret_Sani: BWA3_Beret_PzGren {
        author = "BWA3 / BW.plus";
        displayName = "$STR_BWplus_uniforms_beretsani";
        picture = PATHTOF(UI\bwa3_beret_blau_x_ca.paa);
        hiddenSelectionsTextures[] = {PATHTOF(data\bwplus_beret_san_co.paa)};
    };
    class BWplus_Beret_Fldjgr: BWA3_Beret_PzGren {
        author = "BWA3 / BW.plus";
        displayName = "$STR_BWplus_uniforms_beretfldjgr";
        picture = "\bwa3_units\UI\bwa3_beret_rot_x_ca.paa";
        hiddenSelectionsTextures[] = {PATHTOF(data\bwplus_beret_fldjgr_co.paa)};
    };
    class BWplus_Beret_Pio: BWA3_Beret_PzGren {
        author = "BWA3 / BW.plus";
        displayName = "$STR_BWplus_uniforms_beretpio";
        picture = PATHTOF(UI\bwa3_beret_rot_x_ca.paa);
        hiddenSelectionsTextures[] = {PATHTOF(data\bwplus_beret_pio_co.paa)};
    };
    class BWplus_Beret_Frnmldr: BWA3_Beret_PzGren {
        author = "BWA3 / BW.plus";
        displayName = "$STR_BWplus_uniforms_beretfrnmldr";
        picture = PATHTOF(UI\bwa3_beret_rot_x_ca.paa);
        hiddenSelectionsTextures[] = {PATHTOF(data\bwplus_beret_frnmldr_co.paa)};
    };
};