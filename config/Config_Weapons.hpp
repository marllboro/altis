/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 10000, 3250, "" },
            { "hgun_Pistol_01_F", "", 15000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 15000, 4925, "" },
            { "hgun_ACPC2_F", "", 15000, 5750, "" },
            { "SMG_05_F", "", 80000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 50000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

	class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
			{ "arifle_Mk20_plain_F", "", 180000, 10000, "" },
			{ "arifle_SDAR_F", "", 100000, 10000, "" },
            { "arifle_Katiba_F", "", 300000, 15000, "" },
			{ "arifle_Katiba_C_F", "", 280000, 25000, "" },
			{ "arifle_ARX_hex_F", "", 350000, 11000, "" }, //Apex DLC
			{ "arifle_ARX_ghex_F", "", 350000, 11000, "" }, //Apex DLC
			{ "arifle_CTAR_ghex_F", "", 200000, 17500, "" }, //Apex DLC
			{ "arifle_CTAR_hex_F", "", 200000, 17500, "" }, //Apex DLC
			{ "arifle_CTARS_ghex_F", "", 400000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 120000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 330000, 11000, "" }, //Apex DLC
			{ "srifle_DMR_01_F", "", 420000, 11000, "" }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 700, 150, "" },
			{ "20Rnd_556x45_UW_mag", "", 700, 150, "" },
			{ "30Rnd_65x39_caseless_green", "", 1000, 150, "" },
			{ "30Rnd_580x42_Mag_F", "", 500, 150, "" },
			{ "100Rnd_580x42_Mag_F", "", 8000, 150, "" },
			{ "30Rnd_545x39_Mag_F", "", 500, 150, "" },
			{ "30Rnd_762x39_Mag_F", "", 30000, 150, "" },
			{ "10Rnd_762x54_Mag", "", 5000, 150, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 5000, 1750, "" },
			{ "optic_Arco", "", 10000, 1800, "" },
            { "optic_Holosight", "", 4000, 1800, "" },
			{ "optic_MRCO", "", 10000, 1800, "" },
		    { "optic_DMS", "", 15000, 1800, "" },
            { "optic_Hamr", "", 10000, 3750, "" },
            { "optic_AMS_snd", "", 25000, 3750, "" },
		    { "muzzle_snds_M", "", 45000, 3750, "" },
		    { "muzzle_snds_58_ghex_F", "", 60000, 3750, "" },
		    { "muzzle_snds_58_hex_F", "", 60000, 3750, "" }
		};
    };
	
	class rebgen {
		 name = "Altis General Store";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "Rangefinder", "", 50000, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 1500, 75, "" },
			{ "ToolKit", "", 5000, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" }
        };
        mags[] = {};
        accs[] = {};
    };
	class schwgen {
		 name = "Altis General Store";
        side = "civ";
        conditions = "license_civ_schwarzmarkt";
        items[] = {
            { "Rangefinder", "", 50000, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 1500, 75, "" },
			{ "ToolKit", "", 5000, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" }
        };
        mags[] = {};
        accs[] = {};
    };
	class copgen {
		name = "Altis General Store";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 2500, 65, "" },
			{ "Rangefinder", "", 12500, 65, "" },
            { "ItemGPS", "", 100, 65, "" },
            { "FirstAidKit", "", 1500, 65, "" },
			{ "ToolKit", "", 1500, 65, "" },
            { "NVGoggles_OPFOR", "", 2500, 1000, "" }
        };
        mags[] = {};
        accs[] = {};
    };
	
    class schwarzmarkt {
        name = "Geuz's Schwarzmarkt";
        side = "civ";
        conditions = "license_civ_schwarzmarkt";
        items[] = {
			{ "arifle_AK12_F", "", 600000, 11000, "" }, //Apex DLC
			{ "srifle_DMR_07_ghex_F", "", 500000, 10000, "" }, //Apex DLC
			{ "srifle_DMR_07_hex_F", "", 500000, 11000, "" }, //Apex DLC
			{ "srifle_DMR_03_khaki_F", "", 850000, 10000, "" },
			{ "srifle_DMR_03_tan_F", "", 850000, 10000, "" },
			{ "srifle_DMR_03_multicam_F", "", 850000, 10000, "" },
			{ "srifle_DMR_03_woodland_F", "", 850000, 10000, "" },
			{ "srifle_DMR_06_olive_F", "", 700000, 10000, "" },
			{ "srifle_DMR_05_hex_F", "", 1300000, 11000, "" },
			{ "srifle_DMR_05_tan_f", "", 1300000, 11000, "" },
			{ "LMG_Zafir_F", "", 1500000, 25000, "" }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 20000, 150, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 15000, 150, "" },
			{ "30Rnd_762x39_Mag_F", "", 30000, 150, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 50000, 150, "" },
			{ "150Rnd_762x54_Box", "", 80000, 150, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 5000, 1750, "" },
			{ "optic_Arco", "", 10000, 1800, "" },
            { "optic_ERCO_blk_F", "", 10000, 1800, "" },
			{ "optic_MRCO", "", 10000, 1800, "" },
			{ "optic_DMS", "", 15000, 1800, "" },
			{ "optic_LRPS", "", 50000, 1800, "" },
            { "optic_Hamr", "", 10000, 3750, "" },
			{ "optic_AMS_khk", "", 25000, 3750, "" },
			{ "optic_AMS_snd", "", 25000, 3750, "" },
			{ "optic_KHS_hex", "", 35000, 3750, "" },
			{ "bipod_01_F_snd", "", 20000, 3750, "" },
			{ "bipod_01_F_blk", "", 20000, 3750, "" },
			{ "bipod_01_F_mtp", "", 20000, 3750, "" },
			{ "bipod_02_F_blk", "", 20000, 3750, "" },
			{ "bipod_02_F_tan", "", 20000, 3750, "" },
			{ "bipod_02_F_hex", "", 20000, 3750, "" },
			{ "bipod_03_F_blk", "", 20000, 3750, "" },
			{ "bipod_03_F_oli", "", 20000, 3750, "" },
			{ "muzzle_snds_M", "", 45000, 3750, "" },
			{ "muzzle_snds_H", "", 100000, 3750, "" },
			{ "muzzle_snds_B", "", 175000, 3750, "" },
			{ "muzzle_snds_65_TI_ghex_F", "", 100000, 3750, "" },
			{ "muzzle_snds_65_TI_hex_F", "", 100000, 3750, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 5000, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 7500, 1250, "" },
            { "hgun_ACPC2_F", "", 7500, 2250, "" },
            { "hgun_PDW2000_F", "", 25000, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 1500, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 1500, 75, "" },
			{ "ToolKit", "", 5000, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 1500, 750, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
			{ "ToolKit", "", 5000, 75, "" },
            { "NVGoggles", "", 10000, 5000, "" }	
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 50000, 65, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 65, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 25750, 65, "" },
			{ "SMG_02_F", "", 15750, 65, "call life_coplevel >= 1" },
			{ "SMG_05_F", "", 15750, 65, "call life_coplevel >= 1" },
			{ "arifle_SPAR_01_blk_F", "", 25750, 65, "call life_coplevel >= 2" }, //Apex DLC
			{ "arifle_MXC_Black_F", "", 25750, 65, "call life_coplevel >= 2" },
			{ "arifle_MX_Black_F", "", 35750, 65, "call life_coplevel >= 3" },
			{ "arifle_MXM_Black_F", "", 55750, 65, "call life_coplevel >= 4" },
			{ "arifle_ARX_blk_F", "", 65750, 65, "call life_coplevel >= 4" }, //Apex DLC
			{ "arifle_SPAR_02_blk_F", "", 85750, 65, "call life_coplevel >= 5" }, //Apex DLC
			{ "srifle_EBR_F", "", 105750, 65, "call life_coplevel >= 6" },
			{ "arifle_SPAR_03_blk_F", "", 115750, 65, "call life_coplevel >= 6" }, //Apex DLC
			{ "srifle_DMR_02_F", "", 855750, 65, "call life_coplevel >= 6" },
			{ "arifle_MX_GL_Black_F", "", 35750, 65, "call life_coplevel >= 6" },
			{ "LMG_03_F", "", 135750, 65, "call life_coplevel >= 6" }, //Apex DLC
			{ "LMG_Mk200_F", "", 155750, 65, "call life_coplevel >= 6" },
			{ "srifle_DMR_03_F", "", 105750, 65, "call life_coplevel >= 6" }
		};
        mags[] = {
            { "16Rnd_9x21_Mag", "", 850, 65, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 1750, 65, "" },
			{ "30Rnd_9x21_Mag_SMG_02", "", 1250, 65, "" },
			{ "30Rnd_556x45_Stanag", "", 1300, 65, "call life_coplevel >= 2" }, //Apex DLC
			{ "30Rnd_65x39_caseless_mag", "", 1300, 65, "call life_coplevel >= 4" },
			{ "30Rnd_65x39_caseless_green", "", 1500, 65, "call life_coplevel >= 4" },
			{ "150Rnd_556x45_Drum_Mag_F", "", 7500, 65, "call life_coplevel >= 5" }, //Apex DLC
			{ "20Rnd_762x51_Mag", "", 5250, 65, "call life_coplevel >= 6" },
			{ "10Rnd_338_Mag", "", 15000, 65, "call life_coplevel >= 6" },
			{ "200Rnd_65x39_cased_Box", "", 12000, 65, "call life_coplevel >= 6" },
			{ "200Rnd_556x45_Box_F", "", 12000, 65, "call life_coplevel >= 6" }, //Apex DLC
			{ "1Rnd_Smoke_Grenade_shell", "", 2500, 65, "call life_coplevel >= 6" }
		};
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "muzzle_snds_65_TI_blk_F", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "muzzle_snds_H_MG_blk_F", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "muzzle_snds_58_blk_F", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "muzzle_snds_338_black", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "optic_AMS", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "bipod_01_F_blk", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "optic_LRPS", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "optic_DMS", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "optic_MRCO", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "optic_Hamr", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "optic_Arco_blk_F", "", 2500, 1250, "call life_coplevel >= 2" }, //Apex DLC
			{ "optic_KHS_blk", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "muzzle_snds_B", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "acc_pointer_IR", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "muzzle_snds_M", "", 2500, 1250, "call life_coplevel >= 2" },
			{ "muzzle_snds_H", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
			{ "Medikit", "", 150, 75, "" },
			{ "ToolKit", "", 150, 75, "" },
            { "NVGoggles_INDEP", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
