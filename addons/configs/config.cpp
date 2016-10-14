class CfgPatches {
    class cnto_assets {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_Characters_F", "A3_Weapons_F", "rhs_c_troops"};
    };
};

#define UNIFORM_SOLDIER(name, base, paa, p3d) \
    class name : base { \
        scope = 1; \
        uniformClass = name; \
        hiddenSelectionsTextures[] = { paa }; \
        model = p3d; \
        modelSides[] = {3,2,1,0}; \
    }
#define UNIFORM(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelectionsTextures[] = { paa }; \
        class ItemInfo : ItemInfo { \
            uniformClass = name; \
        }; \
    }

#define BACKPACK(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelectionsTextures[] = { paa }; \
    }

#define VEST(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelectionsTextures[] = { paa }; \
    }

#define HEADGEAR(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelectionsTextures[] = { paa }; \
    }

#define FACEWEAR(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelectionsTextures[] = { paa }; \
    }

class CfgVehicles {
    class B_Soldier_base_F;

    /*
     * Flecktarn Uniforms
     */
    #define TXR(path) \cnto\assets\flecktarn_uniforms\##path
    #define MDL \A3\characters_F\BLUFOR\b_soldier_01.p3d
    UNIFORM_SOLDIER(cnto_flecktarn_u_desert, B_Soldier_base_F, TXR(desert.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_forest, B_Soldier_base_F, TXR(forest.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_jungle, B_Soldier_base_F, TXR(jungle.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_snow, B_Soldier_base_F, TXR(snow.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_grassland, B_Soldier_base_F, TXR(grassland.paa), MDL);
    #define MDL \A3\characters_F\BLUFOR\b_soldier_02.p3d
    //UNIFORM_SOLDIER(cnto_flecktarn_u_t_desert, B_Soldier_base_F, TXR(desert.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_forest, B_Soldier_base_F, TXR(forest.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_jungle, B_Soldier_base_F, TXR(jungle.paa), MDL);
    //UNIFORM_SOLDIER(cnto_flecktarn_u_t_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa), MDL);
    //UNIFORM_SOLDIER(cnto_flecktarn_u_t_snow, B_Soldier_base_F, TXR(snow.paa), MDL);
    #define MDL \A3\characters_F\BLUFOR\b_soldier_03.p3d
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_desert, B_Soldier_base_F, TXR(desert.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_forest, B_Soldier_base_F, TXR(forest.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_jungle, B_Soldier_base_F, TXR(jungle.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_snow, B_Soldier_base_F, TXR(snow.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_grassland, B_Soldier_base_F, TXR(grassland.paa), MDL);

    /* ------------------------------------------- */

    class B_AssaultPack_Base;
    class B_Kitbag_Base;

    /*
     * Flecktarn Backpacks
     */
    #define TXR(path) \cnto\assets\flecktarn_backpacks\##path
    BACKPACK(cnto_flecktarn_b_ap_desert, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Desert)", TXR(desert_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_forest, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Forest)", TXR(forest_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_jungle, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Jungle)", TXR(jungle_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_mediterranean, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Mediterranean)", TXR(mediterranean_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_snow, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Snow)", TXR(snow_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_grassland, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Grassland)", TXR(grassland_assault.paa));

    BACKPACK(cnto_flecktarn_b_kb_desert, B_Kitbag_Base, "CNTO Flecktarn KitBag (Desert)", TXR(desert_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_forest, B_Kitbag_Base, "CNTO Flecktarn KitBag (Forest)", TXR(forest_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_jungle, B_Kitbag_Base, "CNTO Flecktarn KitBag (Jungle)", TXR(jungle_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_mediterranean, B_Kitbag_Base, "CNTO Flecktarn KitBag (Mediterranean)", TXR(mediterranean_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_snow, B_Kitbag_Base, "CNTO Flecktarn KitBag (Snow)", TXR(snow_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_grassland, B_Kitbag_Base, "CNTO Flecktarn KitBag (Grassland)", TXR(grassland_kitbag.paa));
};

class CfgWeapons {
    class Uniform_Base;
    class U_B_CombatUniform_mcam : Uniform_Base { class ItemInfo; };
    class U_B_CombatUniform_mcam_tshirt : Uniform_Base { class ItemInfo; };
    class U_B_CombatUniform_mcam_vest : Uniform_Base { class ItemInfo; };

    /*
     * Flecktarn Uniforms
     */
    #define TXR(path) \cnto\assets\flecktarn_uniforms\##path
    UNIFORM(cnto_flecktarn_u_desert, U_B_CombatUniform_mcam, "CNTO Flecktarn (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_forest, U_B_CombatUniform_mcam, "CNTO Flecktarn (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_jungle, U_B_CombatUniform_mcam, "CNTO Flecktarn (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_mediterranean, U_B_CombatUniform_mcam, "CNTO Flecktarn (Mediterranean)", TXR(mediterranean.paa));
    UNIFORM(cnto_flecktarn_u_snow, U_B_CombatUniform_mcam, "CNTO Flecktarn (Snow)", TXR(snow.paa));
    UNIFORM(cnto_flecktarn_u_grassland, U_B_CombatUniform_mcam, "CNTO Flecktarn (Grassland)", TXR(grassland.paa));

    //UNIFORM(cnto_flecktarn_u_t_desert, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_t_forest, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_t_jungle, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Jungle)", TXR(jungle.paa));
    //UNIFORM(cnto_flecktarn_u_t_mediterranean, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Mediterranean)", TXR(mediterranean.paa));
    //UNIFORM(cnto_flecktarn_u_t_snow, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Snow)", TXR(snow.paa));

    UNIFORM(cnto_flecktarn_u_r_desert, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_r_forest, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_r_jungle, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_r_mediterranean, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Mediterranean)", TXR(mediterranean.paa));
    UNIFORM(cnto_flecktarn_u_r_snow, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Snow)", TXR(snow.paa));
    UNIFORM(cnto_flecktarn_u_r_grassland, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Grassland)", TXR(grassland.paa));

    /* ------------------------------------------- */

    /* V_PlateCarrier1_rgr / V_PlateCarrier2_rgr have
     * hiddenSelections = {}, no {"camo"}, so use _blk */
    class V_PlateCarrier1_blk;
    class V_PlateCarrier2_blk;
    class V_PlateCarrierGL_rgr;
    class V_PlateCarrierSpec_rgr;

    /*
     * Flecktarn Vests
     */

    #define TXR(path) \cnto\assets\flecktarn_vests\##path
    VEST(cnto_flecktarn_v_l_desert, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Desert)", TXR(desert.paa));
    VEST(cnto_flecktarn_v_desert, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Desert)", TXR(desert.paa));
    VEST(cnto_flecktarn_v_h_desert, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Desert)", TXR(desert_heavy.paa));
    VEST(cnto_flecktarn_v_s_desert, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Desert)", TXR(desert_heavy.paa));

    VEST(cnto_flecktarn_v_l_forest, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Forest)", TXR(forest.paa));
    VEST(cnto_flecktarn_v_forest, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Forest)", TXR(forest.paa));
    VEST(cnto_flecktarn_v_h_forest, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Forest)", TXR(forest_heavy.paa));
    VEST(cnto_flecktarn_v_s_forest, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Forest)", TXR(forest_heavy.paa));

    VEST(cnto_flecktarn_v_l_jungle, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Jungle)", TXR(jungle.paa));
    VEST(cnto_flecktarn_v_jungle, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Jungle)", TXR(jungle.paa));
    VEST(cnto_flecktarn_v_h_jungle, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Jungle)", TXR(jungle_heavy.paa));
    VEST(cnto_flecktarn_v_s_jungle, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Jungle)", TXR(jungle_heavy.paa));

    VEST(cnto_flecktarn_v_l_mediterranean, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Mediterranean)", TXR(mediterranean.paa));
    VEST(cnto_flecktarn_v_mediterranean, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Mediterranean)", TXR(mediterranean.paa));
    VEST(cnto_flecktarn_v_h_mediterranean, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Mediterranean)", TXR(mediterranean_heavy.paa));
    VEST(cnto_flecktarn_v_s_mediterranean, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Mediterranean)", TXR(mediterranean_heavy.paa));

    VEST(cnto_flecktarn_v_l_snow, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Snow)", TXR(snow.paa));
    VEST(cnto_flecktarn_v_snow, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Snow)", TXR(snow.paa));
    VEST(cnto_flecktarn_v_h_snow, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Snow)", TXR(snow_heavy.paa));
    VEST(cnto_flecktarn_v_s_snow, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Snow)", TXR(snow_heavy.paa));

    VEST(cnto_flecktarn_v_l_grassland, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Grassland)", TXR(grassland.paa));
    VEST(cnto_flecktarn_v_grassland, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Grassland)", TXR(grassland.paa));
    VEST(cnto_flecktarn_v_h_grassland, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Grassland)", TXR(grassland_heavy.paa));
    VEST(cnto_flecktarn_v_s_grassland, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Grassland)", TXR(grassland_heavy.paa));

    /* ------------------------------------------- */

    class H_HelmetB;
    class H_Booniehat_khk;
    class H_Beret_blk;
    class rhs_6b27m;
    class rhs_6b27m_ess;
    //class rhs_6b47;
    //class rhs_6b47_ess;

    /*
     * Flecktarn Headgear
     */

    #define TXR(path) \cnto\assets\flecktarn_headgear\##path
    HEADGEAR(cnto_flecktarn_h_c_desert, H_HelmetB, "CNTO Flecktarn Combat Helmet (Desert)", TXR(desert_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_forest, H_HelmetB, "CNTO Flecktarn Combat Helmet (Forest)", TXR(forest_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_jungle, H_HelmetB, "CNTO Flecktarn Combat Helmet (Jungle)", TXR(jungle_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_mediterranean, H_HelmetB, "CNTO Flecktarn Combat Helmet (Mediterranean)", TXR(mediterranean_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_snow, H_HelmetB, "CNTO Flecktarn Combat Helmet (Snow)", TXR(snow_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_grassland, H_HelmetB, "CNTO Flecktarn Combat Helmet (Grassland)", TXR(grassland_helmet.paa));

    HEADGEAR(cnto_flecktarn_h_boo_desert, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Desert)", TXR(desert_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_forest, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Forest)", TXR(forest_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_jungle, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Jungle)", TXR(jungle_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_mediterranean, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Mediterranean)", TXR(mediterranean_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_snow, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Snow)", TXR(snow_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_grassland, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Grassland)", TXR(grassland_boonie.paa));

    HEADGEAR(cnto_flecktarn_h_beret, H_Beret_blk, "CNTO Beret", TXR(beret.paa));

    HEADGEAR(cnto_flecktarn_h_6b27m_desert, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Desert)", TXR(desert_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27m_forest, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Forest)", TXR(forest_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27m_jungle, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Jungle)", TXR(jungle_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27m_mediterranean, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Mediterranean)", TXR(mediterranean_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27m_snow, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Snow)", TXR(snow_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27m_grassland, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Grassland)", TXR(grassland_6b27m.paa));

    HEADGEAR(cnto_flecktarn_h_6b27me_desert, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Desert)", TXR(desert_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27me_forest, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Forest)", TXR(forest_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27me_jungle, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Jungle)", TXR(jungle_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27me_mediterranean, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Mediterranean)", TXR(mediterranean_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27me_snow, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Snow)", TXR(snow_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27me_grassland, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Grassland)", TXR(grassland_6b27m.paa));

    //HEADGEAR(cnto_flecktarn_h_6b47_grassland, rhs_6b27m, "CNTO Flecktarn 6b47 Helmet (Grassland)", TXR(grassland_6b47.paa));
    //HEADGEAR(cnto_flecktarn_h_6b47e_grassland, rhs_6b47_ess, "CNTO Flecktarn 6b47 Helmet ESS (Grassland)", TXR(grassland_6b47.paa));
};

class CfgGlasses {
    class rhs_balaclava;
    class G_Bandanna_blk;

    /*
     * Flecktarn Facewear
     */
    #define TXR(path) \cnto\assets\flecktarn_facewear\##path
    FACEWEAR(cnto_flecktarn_f_bala_desert, rhs_balaclava, "CNTO Flecktarn Balaclava (Desert)", TXR(balaclava_desert));
    FACEWEAR(cnto_flecktarn_f_bala_forest, rhs_balaclava, "CNTO Flecktarn Balaclava (Forest)", TXR(balaclava_forest));
    FACEWEAR(cnto_flecktarn_f_bala_jungle, rhs_balaclava, "CNTO Flecktarn Balaclava (Jungle)", TXR(balaclava_jungle));
    FACEWEAR(cnto_flecktarn_f_bala_mediterranean, rhs_balaclava, "CNTO Flecktarn Balaclava (Mediterranean)", TXR(balaclava_mediterranean));
    FACEWEAR(cnto_flecktarn_f_bala_snow, rhs_balaclava, "CNTO Flecktarn Balaclava (Snow)", TXR(balaclava_snow));

    FACEWEAR(cnto_flecktarn_f_band_snow, G_Bandanna_blk, "CNTO Bandana (Snow)", TXR(bandana_snow));
    FACEWEAR(cnto_flecktarn_f_band_owl1, G_Bandanna_blk, "CNTO Bandana (Owl 1)", TXR(bandana_owl1));
    FACEWEAR(cnto_flecktarn_f_band_owl2, G_Bandanna_blk, "CNTO Bandana (Owl 2)", TXR(bandana_owl2));
};
