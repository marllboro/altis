/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {


//Metallschmelze Stufe 1
    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 750;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 2120;
    };
	
	class ZincIngot {
        MaterialsReq[] = {{"zinc_unrefined",1}};
        MaterialsGive[] = {{"zinc_refined",1}};
        Text = "STR_Process_ZincIngot";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class TinIngot {
        MaterialsReq[] = {{"tin_unrefined",1}};
        MaterialsGive[] = {{"tin_refined",1}};
        Text = "STR_Process_TinIngot";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };


//Metallschmelze Stufe 2
	class titaningot {
		MaterialsReq[] = {{"titan_unrefined",1}};
        MaterialsGive[] = {{"titan_refined",1}};
        Text = "STR_Process_TitanIngot";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class iridiumingot {
        MaterialsReq[] = {{"iridium_unrefined",1}};
        MaterialsGive[] = {{"iridium_refined",1}};
        Text = "STR_Process_IridiumIngot";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class leadingot {
        MaterialsReq[] = {{"lead_unrefined",1}};
        MaterialsGive[] = {{"lead_refined",1}};
        Text = "STR_Process_LeadIngot";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class silveringot {
        MaterialsReq[] = {{"silver_unrefined",1}};
        MaterialsGive[] = {{"silver_refined",1}};
        Text = "STR_Process_SilverIngot";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class platiningot {
        MaterialsReq[] = {{"platin_unrefined",1}};
        MaterialsGive[] = {{"platin_refined",1}};
        Text = "STR_Process_PlatinIngot";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };


//Edelsteinexperte
    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 1350;
    };
	
	class Ruby {
        MaterialsReq[] = {{"ruby_uncut",1}};
        MaterialsGive[] = {{"ruby_cut",1}};
        Text = "STR_Process_RubyC";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class Emerald {
        MaterialsReq[] = {{"emerald_uncut",1}};
        MaterialsGive[] = {{"emerald_cut",1}};
        Text = "STR_Process_EmeraldC";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class Sapphire {
        MaterialsReq[] = {{"sapphire_uncut",1}};
        MaterialsGive[] = {{"sapphire_cut",1}};
        Text = "STR_Process_SapphireC";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class Quarz {
        MaterialsReq[] = {{"quarz_uncut",1}};
        MaterialsGive[] = {{"quarz_cut",1}};
        Text = "STR_Process_QuarzC";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };

	
//Chemiepraktikant
	class P_NitreAcid {
        MaterialsReq[] = {{"nitre_unrefined",1}};
        MaterialsGive[] = {{"nitre_refined",1}};
        Text = "STR_Process_NitreAcid";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class P_SulfurAcid {
        MaterialsReq[] = {{"sulfur_unrefined",1}};
        MaterialsGive[] = {{"sulfur_refined",1}};
        Text = "STR_Process_SilfurAcid";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	

//Baustoffhersteller
   class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 650;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	

//Lebensmittel Lieferant
    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 450;
    };
	
	class Sugar {
        MaterialsReq[] = {{"Sugarcane_Unprocessed",1}};
        MaterialsGive[] = {{"Sugarcane_Processed",1}};
        Text = "STR_Process_Sugarcane";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class P_Water {
        MaterialsReq[] = {{"SaltWater",1}};
        MaterialsGive[] = {{"Water",1},{"salt_refined",1}};
        Text = "STR_Process_SaltWater";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class P_Wein {
        MaterialsReq[] = {{"Grapes_unprocessed",1}};
        MaterialsGive[] = {{"Wein",1}};
        Text = "STR_Process_Wine";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class Wheat_flour {
        MaterialsReq[] = {{"Wheat_unprocessed",1}};
        MaterialsGive[] = {{"Wheat",1}};
        Text = "STR_Process_Mill";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class Cacao {
        MaterialsReq[] = {{"cacao_Unprocessd",1}};
        MaterialsGive[] = {{"cacao_Processd",1}};
        Text = "STR_Process_Cacao";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };

//Spirituosen Schmuggler
	class Absinth {
        MaterialsReq[] = {{"Anise_unprocessed",1}};
        MaterialsGive[] = {{"Absinth",1}};
        Text = "STR_Process_Absinth";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class Whiskey {
        MaterialsReq[] = {{"Wheat_unprocessed",1}};
        MaterialsGive[] = {{"Whiskey",1}};
        Text = "STR_Process_Whiskey";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class Rum {
        MaterialsReq[] = {{"Sugarcane_Unprocessed",1}};
        MaterialsGive[] = {{"Rum",1}};
        Text = "STR_Process_Rum";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class p_Teufelsspringer {
        MaterialsReq[] = {{"Absinth",1},{"Whiskey",1},{"Rum",1}};
        MaterialsGive[] = {{"Teufelsspringer_item",1}};
        Text = "STR_Process_Teufelsspringer";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };


//Legierungsmischer
	class BronzeIngot {
        MaterialsReq[] = {{"tin_refined",1},{"copper_refined",1}};
        MaterialsGive[] = {{"BronzeIngot",1}};
        Text = "STR_Process_BronzeIngot";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class P_Brass {
        MaterialsReq[] = {{"zinc_refined",1},{"copper_refined",1}};
        MaterialsGive[] = {{"BrassIngot",1}};
        Text = "STR_Process_Brass";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class P_Leadbronze {
        MaterialsReq[] = {{"lead_refined",1},{"BronzeIngot",1}};
        MaterialsGive[] = {{"leadbronze_item",1}};
        Text = "STR_Process_Leadbronze";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class P_GoldAmalgam {
        MaterialsReq[] = {{"goldnugget_item",3},{"iridium_refined",1}};
        MaterialsGive[] = {{"GoldAmalgam_item",1}};
        Text = "STR_Process_GoldAmalgam";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class p_titangold {
		MaterialsReq[] = {{"titan_refined",1},{"goldnugget_item",3}};
        MaterialsGive[] = {{"titangold_item",1}};
        Text = "STR_Process_Titangold";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };


//Drogenbaron
	class P_Haschcookies {
        MaterialsReq[] = {{"marijuana",1},{"Wheat",2}};
        MaterialsGive[] = {{"Haschcookies_item",1}};
        Text = "STR_Process_Haschcookies";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class P_Crack {
        MaterialsReq[] = {{"nitre_refined",2},{"cocaine_processed",2}};
        MaterialsGive[] = {{"Crack_item",4}};
        Text = "STR_Process_Crack";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };	

	
//Antiquitäten Hersteller
	class P_BronzeStatue {
        MaterialsReq[] = {{"BronzeIngot",4}};
        MaterialsGive[] = {{"BronzeStatue_item",1}};
        Text = "STR_Process_BronzeStatue";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class P_DiamondRing {
        MaterialsReq[] = {{"goldnugget_item",3},{"diamond_cut",1}};
        MaterialsGive[] = {{"DiamondRing_item",1}};
        Text = "STR_Process_DiamondRing";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class P_Diadem {
        MaterialsReq[] = {{"goldnugget_item",4},{"ruby_cut",2},{"emerald_cut",2},{"sapphire_cut",1}};
        MaterialsGive[] = {{"Diadem_item",1}};
        Text = "STR_Process_Diadem";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class P_KingsCrown {
        MaterialsReq[] = {{"goldbar",1},{"ruby_cut",2},{"emerald_cut",2},{"sapphire_cut",2},{"Diadem_item",2}};
        MaterialsGive[] = {{"KingsCrown_item",1}};
        Text = "STR_Process_KingsCrown";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };


//einzelne Lizensen
	class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 1750;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 1500;
    };

    class p_marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        NoLicenseCost = 500;
    };
	
	class P_Zigarette {
        MaterialsReq[] = {{"Tabak",1}};
        MaterialsGive[] = {{"Zigarette",2}};
        Text = "STR_Process_Tobacco2";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };	
	
	class P_Zigarre {
        MaterialsReq[] = {{"Tabak",1}};
        MaterialsGive[] = {{"Zigarre",1}};
        Text = "STR_Process_Tobacco1";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 1350;
    };
	
	class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };
};