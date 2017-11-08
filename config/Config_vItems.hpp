/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "fuelFull", "peach", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge", "ziptie", "blindfold", "gag", "laptop", "uwsl" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana", "LSD_Processd" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "fuelFull", "defusekit", "defibrillator" };
    };

//EDIT youse3me START
    class tabak {
        name = "STR_Shops_tabak";
        side = "civ";
        conditions = "";
        items[] = { "Zigarette" };
    };
	
    class mafioso {
        name = "STR_Shops_mafioso";
        side = "civ";
        conditions = "";
        items[] = { "Zigarre" };
    };
	
    class baustelle {
        name = "STR_Shops_baustelle";
        side = "civ";
        conditions = "";
        items[] = { "glass", "cement" };
    };
	
    class chemiewerk {
        name = "STR_Shops_chemiewerk";
        side = "civ";
        conditions = "";
        items[] = { "nitre_refined", "sulfur_refined" };
    };
	
    class juwelier {
        name = "STR_Shops_juwelier";
        side = "civ";
        conditions = "";
        items[] = { "diamond_cut", "ruby_cut", "emerald_cut", "sapphire_cut", "quarz_cut" };
    };
	
    class metalla {
        name = "STR_Shops_metalla";
        side = "civ";
        conditions = "";
        items[] = { "copper_refined", "iron_refined", "zinc_refined", "tin_refined" };
    };
	
    class schmied {
        name = "STR_Shops_schmied";
        side = "civ";
        conditions = "";
        items[] = { "titan_refined", "iridium_refined", "lead_refined", "silver_refined", "platin_refined" };
    };
	
    class backa {
        name = "STR_Shops_backa";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined", "Sugarcane_Processed", "Wheat" };
    };
	
    class legierung {
        name = "STR_Shops_legierung";
        side = "civ";
        conditions = "";
        items[] = { "titangold_item", "BronzeIngot", "BrassIngot", "leadbronze_item", "GoldAmalgam_item" };
    };
	
    class alka {
        name = "STR_Shops_alka";
        side = "civ";
        conditions = "";
        items[] = { "Wein" };
    };
	
    class hdealer {
        name = "STR_Shops_hdealer";
        side = "civ";
        conditions = "";
        items[] = { "Haschcookies_item", "Crack_item" };
    };
	
    class antiqui {
        name = "STR_Shops_antiqui";
        side = "civ";
        conditions = "";
        items[] = { "DiamondRing_item", "Diadem_item", "KingsCrown_item", "Oldfossil_item", "DinosaurBones_item", "BronzeStatue_item" };
    };
	
    class spirit {
        name = "STR_Shops_spirit";
        side = "civ";
        conditions = "";
        items[] = { "Whiskey", "Rum", "Teufelsspringer_item", "Absinth" };
    };
//EDIT youse3me ENDE
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 12000;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 75000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 950000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 1800000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2400;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 3600;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        //processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = 8500;
        sellPrice = 4560;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        //processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 3800;
        sellPrice = 2950;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        //processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 5300;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

	
	
	/*
	class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };
	*/

//EDIT Django start
	 class platin_unrefined {
        variable = "platinUnrefined";
        displayName = "STR_Item_PlatinOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class platin_refined {
        variable = "platinRefined";
        displayName = "STR_Item_PlatinIngot";
        weight = 4;
        buyPrice = -1;
        sellPrice = 3900;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	 class silver_unrefined {
        variable = "silverUnrefined";
        displayName = "STR_Item_SilverOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class silver_refined {
        variable = "silverRefined";
        displayName = "STR_Item_SilverIngot";
        weight = 4;
        buyPrice = -1;
        sellPrice = 4100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	 class nitre_unrefined {
        variable = "nitreUnrefined";
        displayName = "STR_Item_NitreOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class nitre_refined {
        variable = "nitreRefined";
        displayName = "STR_Item_Nitricacid";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	 class sulfur_unrefined {
        variable = "sulfurUnrefined";
        displayName = "STR_Item_SulfurOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class sulfur_refined {
        variable = "sulfurRefined";
        displayName = "STR_Item_Sulfuracid";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class zinc_unrefined {
        variable = "zincUnrefined";
        displayName = "STR_Item_ZincOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class zinc_refined {
        variable = "zincRefined";
        displayName = "STR_Item_ZincIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class lead_unrefined {
        variable = "leadUnrefined";
        displayName = "STR_Item_LeadOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class lead_refined {
        variable = "leadRefined";
        displayName = "STR_Item_LeadIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class iridium_unrefined {
        variable = "iridiumUnrefined";
        displayName = "STR_Item_IridiumOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class iridium_refined {
        variable = "iridiumRefined";
        displayName = "STR_Item_IridiumIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3900;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class ruby_uncut {
        variable = "rubyUncut";
        displayName = "STR_Item_RubyU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class ruby_cut {
        variable = "rubyCut";
        displayName = "STR_Item_RubyC";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };	
	
	class emerald_uncut {
        variable = "emeraldUncut";
        displayName = "STR_Item_EmeraldU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class emerald_cut {
        variable = "emeraldCut";
        displayName = "STR_Item_EmeraldC";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class sapphire_uncut {
        variable = "sapphireUncut";
        displayName = "STR_Item_SapphireU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class sapphire_cut {
        variable = "sapphireCut";
        displayName = "STR_Item_SapphireC";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class quarz_uncut {
        variable = "quarzUncut";
        displayName = "STR_Item_QuarzU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class quarz_cut {
        variable = "quarzCut";
        displayName = "STR_Item_QuarzC";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };	
	
	class titan_unrefined {
        variable = "titanUnrefined";
        displayName = "STR_Item_TitaniumOre";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class titan_refined {
        variable = "titanRefined";
        displayName = "STR_Item_TitaniumIngot";
        weight = 4;
        buyPrice = -1;
        sellPrice = 4500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class tin_unrefined {
        variable = "tinUnrefined";
        displayName = "STR_Item_TinOre";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class tin_refined {
        variable = "tinRefined";
        displayName = "STR_Process_TinIngot";
        weight = 4;
        buyPrice = -1;
        sellPrice = 2700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class goldnugget_item {
        variable = "goldnugget";
        displayName = "STR_Item_GoldNugget";
        weight = 2;
        buyPrice = -1;
        sellPrice = 4000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class DinosaurBones_item {
        variable = "dinosaurbones";
        displayName = "STR_Item_DinosaurBones";
        weight = 8;
        buyPrice = -1;
        sellPrice = 10000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	class Oldfossil_item {
        variable = "oldfossil";
        displayName = "STR_Item_Oldfossil";
        weight = 7;
        buyPrice = -1;
        sellPrice = 8000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class titangold_item {
        variable = "titangold";
        displayName = "STR_Item_Titangold";
        weight = 2;
        buyPrice = -1;
        sellPrice = 12600;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Anise_unprocessed {
        variable = "AniseU";
        displayName = "STR_Item_AniseU";
        weight = 6;
        buyPrice = -1;
        sellPrice = 600;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };	
	
	class Absinth {
        variable = "AbsinthP";
        displayName = "STR_Item_Absinth";
        weight = 4;
        buyPrice = -1;
        sellPrice = 5400;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };	
	
	class Grapes_unprocessed {
        variable = "GrapesU";
        displayName = "STR_Item_GrapesU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Wein {
        variable = "Wein";
        displayName = "STR_Item_GrapesP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2400;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Wheat_unprocessed {
        variable = "WheatU";
        displayName = "STR_Item_WheatU";
        weight = 5;
        buyPrice = -1;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Wheat {
        variable = "WheatP";
        displayName = "STR_Item_WheatP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Whiskey {
        variable = "WhiskeyP";
        displayName = "STR_Item_WhiskeyP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 5200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Sugarcane_Unprocessed  {
        variable = "SugarcaneU";
        displayName = "STR_Item_SugarcaneU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Sugarcane_Processed  {
        variable = "SugarcaneP";
        displayName = "STR_Item_SugarcaneP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Rum {
        variable = "RumP";
        displayName = "STR_Item_RumP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 5300;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Teufelsspringer_item {
        variable = "Teufelsspringer";
        displayName = "STR_Item_Teufelsspringer";
        weight = 6;
        buyPrice = -1;
        sellPrice = 17600;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class DiamondRing_item {
        variable = "DiamondRing";
        displayName = "STR_Item_DiamondRing";
        weight = 2;
        buyPrice = -1;
        sellPrice = 12400;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };	
	
	class Diadem_item {
        variable = "Diadem";
        displayName = "STR_Item_Diadem";
        weight = 3;
        buyPrice = -1;
        sellPrice = 13500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };	
	
	class KingsCrown_item {
        variable = "KingsCrown";
        displayName = "STR_Item_KingsCrown";
        weight = 8;
        buyPrice = -1;
        sellPrice = 150000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };	
	
	class BronzeIngot {
        variable = "BronzeIngot";
        displayName = "STR_Item_BronzeIngot";
        weight = 6;
        buyPrice = -1;
        sellPrice = 7200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };	
	
	class BrassIngot {
        variable = "BrassIngot";
        displayName = "STR_Item_BrassIngot";
        weight = 5;
        buyPrice = -1;
        sellPrice = 6650;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class BronzeStatue_item {
        variable = "BronzeStatue";
        displayName = "STR_Item_BronzeStatue";
        weight = 9;
        buyPrice = -1;
        sellPrice = 10600;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };	
	
	class GoldAmalgam_item {
        variable = "GoldAmalgam";
        displayName = "STR_Item_GoldAmalgam";
        weight = 4;
        buyPrice = -1;
        sellPrice = 8700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class leadbronze_item {
        variable = "LeadBronze";
        displayName = "STR_Item_leadbronze";
        weight = 4;
        buyPrice = -1;
        sellPrice = 6700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class BlueMeth_item {
        variable = "BlueMeth";
        displayName = "STR_Item_BlueMeth";
        weight = 4;
        buyPrice = -1;
        sellPrice = 6300;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };	
	
	class Haschcookies_item {
        variable = "Haschcookies";
        displayName = "STR_Item_Haschcookies";
        weight = 2;
        buyPrice = -1;
        sellPrice = 14700;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Crack_item {
        variable = "Crack";
        displayName = "STR_Item_Crack";
        weight = 3;
        buyPrice = -1;
        sellPrice = 8700;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Water {
        variable = "Water";
        displayName = "STR_Item_Water";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class SaltWater {
        variable = "SaltWater";
        displayName = "STR_Item_SaltWater";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Tabak {
        variable = "tabak";
        displayName = "STR_Item_Tabacco";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Zigarette {
        variable = "Zigarette";
        displayName = "STR_Item_Zigarette";
        weight = 2;
        buyPrice = -1;
        sellPrice = 3500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class Zigarre {
        variable = "Zigarre";
        displayName = "STR_Item_Zigarre";
        weight = 3;
        buyPrice = -1;
        sellPrice = 4100;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class cacao_Unprocessd {
        variable = "CacaoU";
        displayName = "STR_Item_cacao";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class cacao_Processd {
        variable = "CacaoP";
        displayName = "STR_Item_cacaoP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2600;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class LSD_Unprocessd {
        variable = "LSDU";
        displayName = "STR_Item_LSD";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class LSD_Processd {
        variable = "LSDP";
        displayName = "STR_Item_LSDP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3400;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
//EDIT Django ENDE


//EDIT Miles START
	class ziptie {
		variable = "ziptie";
		displayName = "STR_Ziptie";
		weight = 6;
		buyPrice = 5000;
		sellPrice = 1200;
		illegal = true;
		edible = -1;
		icon = "icons\ziptie.paa";
	};

	class gag {
		variable = "gag";
		displayName = "STR_gag";
		weight = 7;
		buyPrice = 3000;
		sellPrice = 1000;
		illegal = true;
		edible = -1;
		icon = "icons\gag.paa";
	};

	class blindfold {
		variable = "blindfold";
		displayName = "STR_blindfold";
		weight = 7;
		buyPrice = 3500;
		sellPrice = 1200;
		illegal = true;
		edible = -1;
		icon = "icons\blindfold.paa";
	};
	
	class laptop {
        variable = "laptop";
        displayName = "STR_Item_Laptop";
        weight = 5;
        buyPrice = 5000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
    };
	
	class uwsl {
		 variable = "uwsl";
		 displayName = "STR_Item_uwsl";
		 weight = 2;
		 buyPrice = 7600;
		 sellPrice = 4300;
		 illegal = false;
		 edible = -1;
		 icon = "Underwaterexplosive";
	};

	
	
	
	
	
	
	
	
	
	
	
	
    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };
};
