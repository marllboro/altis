/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Squares", "", 10, "" },
			{ "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Aviator", "", 100, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
			{ "B_TacticalPack_oli", "", 2500, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Carryall_ocamo", "", 15000, "" },
            { "B_Carryall_oucamo", "", 15000, "" },
            { "B_Carryall_mcamo", "", 15000, "" },
            { "B_Carryall_oli", "", 15000, "" },
            { "B_Carryall_khk", "", 15000, "" },
            { "B_Carryall_cbr", "", 15000, "" },
			{ "B_Bergen_dgtl_f", "", 35000, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 35000, "" } //Apex DLC
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_Cop_uniforms, 1250, "" },
            { "U_B_CombatUniform_mcam", "", 5000, "call life_coplevel >= 4" },
			{ "U_B_SpecopsUniform_sgg", "", 5000, "call life_coplevel >= 6" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_khk_hs", "", 2500, "" },
			{ "H_Watchcap_blk", "", 2500, "" },
			{ "H_Beret_blk_POLICE", "", 7500, "call life_coplevel >= 2" },
			{ "H_Beret_02", "", 7500, "call life_coplevel >= 5" },
			{ "H_Beret_Colonel", "", 7500, "call life_coplevel >= 6" },
			{ "H_HelmetSpecB", "", 10000, "call life_coplevel >= 6" },
            { "H_HelmetSpecB_sand", "", 10000, "call life_coplevel >= 6" },
            { "H_HelmetSpecB_paint2", "", 10000, "call life_coplevel >= 6" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 1000, "" },
            { "G_Sport_Blackred", "", 1000, "" },
            { "G_Sport_Checkered", "", 1000, "" },
            { "G_Sport_Blackyellow", "", 1000, "" },
            { "G_Sport_BlackWhite", "", 1000, "" },
            { "G_Aviator", "", 1000, "" },
			{ "G_Balaclava_blk", "", 7500, "call life_coplevel >= 6" },
			{ "G_Bandanna_blk", "", 7500, "call life_coplevel >= 6" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_TacVest_blk", "", 5000, "" },
            { "V_PlateCarrier1_blk", "", 12500, "call life_coplevel >= 2" },
			{ "V_PlateCarrier2_blk", "", 17500, "call life_coplevel >= 5" },
			{ "V_PlateCarrierSpec_blk", "", 150000, "call life_coplevel >= 6" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Carryall_cbr", "", 5000, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_I_G_Story_Protagonist_F", "", 7500, "" },
			{ "U_BG_Guerilla1_1", "", 7500, "" },
			{ "U_I_G_resistanceLeader_F", "", 10000, "" },
			{ "U_IG_leader", "", 15000, "" },
			{ "U_O_PilotCoveralls", "", 17500, "" },
			{ "U_O_SpecopsUniform_ocamo", "", 17500, "" },
			{ "U_B_CombatUniform_mcam_tshirt", "", 22500, "" },
			{ "U_B_CombatUniform_mcam_vest", "", 22500, "" },
			{ "U_B_CombatUniform_mcam", "", 22500, "" },
			{ "U_I_CombatUniform_tshirt", "", 22500, "" },
			{ "U_I_CombatUniform", "", 22500, "" },
			{ "U_B_CTRG_Soldier_2_F", "", 25000, "" },
			{ "U_B_CTRG_Soldier_3_F", "", 25000, "" },
			{ "U_B_CTRG_Soldier_F", "", 25000, "" },
			{ "U_B_T_Soldier_AR_F", "", 25000, "" },
			{ "U_B_T_Soldier_F", "", 25000, "" },
			{ "U_I_C_Soldier_Para_2_F", "", 25000, "" }, //Apex
			{ "U_I_C_Soldier_Para_4_F", "", 25000, "" }, //Apex
			{ "U_I_C_Soldier_Para_1_F", "", 25000, "" }, //Apex
			{ "U_O_GhillieSuit", "", 100000, "" },
			{ "U_I_GhillieSuit", "", 100000, "" },
			{ "U_B_GhillieSuit", "", 100000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_ShemagOpen_khk", "", 2500, "" },
			{ "H_Shemag_olive", "", 2500, "" },
			{ "H_HelmetB_sand", "", 25000, "" },
			{ "H_HelmetB_desert", "", 25000, "" },
			{ "H_HelmetB_snakeskin", "", 25000, "" },
			{ "H_HelmetB_grass", "", 25000, "" },
            { "H_HelmetIA_camo", "", 25000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Squares", "", 10, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_Chestrig_khk", "", 17500, "" },
			{ "V_Chestrig_rgr", "", 17500, "" },
			{ "V_Chestrig_oli", "", 17500, "" },
			{ "V_HarnessO_brn", "", 17500, "" },
			{ "V_TacVest_camo", "", 36750, "" },
            { "V_TacVest_khk", "", 36750, "" },
			{ "V_TacVest_brn", "", 36750, "" },
			{ "V_TacVest_oli", "", 36750, "" },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 112250, "" },
			{ "V_PlateCarrier1_tna_F", "", 112250, "" },
			{ "V_PlateCarrier_Kerry", "", 112250, "" },
			{ "V_PlateCarrierL_CTRG", "", 112250, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
			{ "B_TacticalPack_oli", "", 2500, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Carryall_ocamo", "", 15000, "" },
            { "B_Carryall_oucamo", "", 15000, "" },
            { "B_Carryall_mcamo", "", 15000, "" },
            { "B_Carryall_oli", "", 15000, "" },
            { "B_Carryall_khk", "", 15000, "" },
            { "B_Carryall_cbr", "", 15000, "" },
			{ "B_Bergen_dgtl_f", "", 35000, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 35000, "" } //Apex DLC
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
