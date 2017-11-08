class CfgGather {
    class Resources {
        //standard schrott
		class apple {
            amount = 5;
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = "";
            zoneSize = 30;
        };

        class peach {
            amount = 5;
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4" };
            item = "";
            zoneSize = 30;
        };
		
		//drogen
        class heroin_unprocessed {
            amount = 3;
            zones[] = { "heroin_1" };
            item = "";
            zoneSize = 30;
        };

        class cocaine_unprocessed {
            amount = 3;
            zones[] = { "cocaine_1" };
            item = "";
            zoneSize = 30;
        };

        class cannabis {
            amount = 3;
            zones[] = { "weed_1" };
            item = "";
            zoneSize = 30;
        };
		
		//new
		class Anise_unprocessed {
            amount = 2;
            zones[] = { "anus_mine" };
            item = "";
            mined[] = { {"Anise_unprocessed"} };
            zoneSize = 40;
        };
		
		class Wheat_unprocessed {
            amount = 2;
            zones[] = { "Wheat_mine" };
            item = "";
            mined[] = { {"Wheat_unprocessed"} };
            zoneSize = 40;
        };
		
		class Tabak {
            amount = 2;
            zones[] = { "tabacco_mine" };
            item = "";
            mined[] = { {"Tabak"} };
            zoneSize = 40;
        };
		
		class Sugarcane_Unprocessed {
            amount = 2;
            zones[] = { "zucker_mine" };
            item = "";
            mined[] = { {"Sugarcane_Unprocessed"} };
            zoneSize = 40;
        };
		
		class LSD_Unprocessd {
            amount = 2;
            zones[] = { "lsd_mine" };
            item = "";
            mined[] = { {"LSD_Unprocessd"} };
            zoneSize = 40;
        };
		
		class cacao_Unprocessd {
            amount = 2;
            zones[] = { "cacao_mine" };
            item = "";
            mined[] = { {"cacao_Unprocessd"} };
            zoneSize = 40;
        };
		
		class Grapes_unprocessed {
            amount = 2;
            zones[] = { "wine_mine" };
            item = "";
            mined[] = { {"Grapes_unprocessed"} };
            zoneSize = 40;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
		class mine_sofia {
            amount = 2;
            zones[] = { "mine_sofia"};
            item = "pickaxe";
			mined[] = { {"zinc_unrefined",0,10},{"copper_unrefined",10,17},{"iron_unrefined",17,25},{"diamond_uncut",25,30},{"platin_unrefined",30,33},{"lead_unrefined",33,38},{"iridium_unrefined",38,39},{"ruby_uncut",39,44},{"emerald_uncut",44,49},{"sapphire_uncut",49,54},{"quarz_uncut",54,57},{"titan_unrefined",57,62},{"tin_unrefined",62,72},{"sulfur_unrefined",72,83},{"nitre_unrefined",83,98},{"goldnugget_item",98,100} };
            zoneSize = 40;
        };
		
		class mine_kavala {
            amount = 2;
            zones[] = {"mine_kavala"};
            item = "pickaxe";
			mined[] = { {"zinc_unrefined",0,5},{"copper_unrefined",5,22},{"iron_unrefined",22,39},{"diamond_uncut",39,43},{"platin_unrefined",43,48},{"lead_unrefined",48,52},{"iridium_unrefined",52,56},{"ruby_uncut",56,60},{"emerald_uncut",60,67},{"sapphire_uncut",67,77},{"quarz_uncut",77,87},{"titan_unrefined",87,90},{"tin_unrefined",90,94},{"sulfur_unrefined",94,96},{"nitre_unrefined",96,99},{"goldnugget_item",99,100} };
            zoneSize = 40;
        };
		
		class mine_pyrgos {
            amount = 2;
            zones[] = { "mine_pyrgos" };
            item = "pickaxe";
			mined[] = { {"zinc_unrefined",0,7},{"copper_unrefined",7,11},{"iron_unrefined",11,15},{"diamond_uncut",15,24},{"platin_unrefined",24,27},{"lead_unrefined",27,29},{"iridium_unrefined",29,32},{"ruby_uncut",32,41},{"emerald_uncut",41,50},{"sapphire_uncut",50,59},{"quarz_uncut",59,69},{"titan_unrefined",69,70},{"tin_unrefined",70,76},{"sulfur_unrefined",76,83},{"nitre_unrefined",83,94},{"goldnugget_item",94,100} };                                                                    
            zoneSize = 40;
        };
		
		
		class mine_bomos {
            amount = 2;
            zones[] = { "mine_bomos" };
            item = "pickaxe";
			mined[] = { {"zinc_unrefined",0,1},{"copper_unrefined",1,7},{"iron_unrefined",7,14},{"diamond_uncut",14,21},{"platin_unrefined",21,33},{"lead_unrefined",33,42},{"iridium_unrefined",42,47},{"ruby_uncut",47,54},{"emerald_uncut",54,61},{"sapphire_uncut",61,68},{"quarz_uncut",68,71},{"titan_unrefined",71,84},{"tin_unrefined",84,86},{"sulfur_unrefined",86,89},{"nitre_unrefined",89,97},{"goldnugget_item",97,100} };
            zoneSize = 40;
        };
		
		class mine_frini {
            amount = 2;
            zones[] = { "mine_frini" };
            item = "pickaxe";
            mined[] = { {"zinc_unrefined",0,6},{"copper_unrefined",6,16},{"iron_unrefined",16,26},{"diamond_uncut",26,30},{"platin_unrefined",30,40},{"lead_unrefined",40,42},{"iridium_unrefined",42,45},{"ruby_uncut",45,48},{"emerald_uncut",48,51},{"sapphire_uncut",51,54},{"quarz_uncut",54,64},{"titan_unrefined",64,65},{"tin_unrefined",65,75},{"sulfur_unrefined",75,89},{"nitre_unrefined",89,96},{"goldnugget_item",96,100} };
            zoneSize = 40;
		};  
		
		class mine_feres {
            amount = 2;
            zones[] = { "mine_feres" };
            item = "pickaxe";
            mined[] = { {"zinc_unrefined",0,5},{"copper_unrefined",5,7},{"iron_unrefined",7,14},{"diamond_uncut",14,22},{"platin_unrefined",22,27},{"lead_unrefined",27,30},{"iridium_unrefined",30,47},{"ruby_uncut",47,57},{"emerald_uncut",57,64},{"sapphire_uncut",64,71},{"quarz_uncut",71,73},{"titan_unrefined",73,76},{"tin_unrefined",76,81},{"sulfur_unrefined",81,83},{"nitre_unrefined",83,87},{"goldnugget_item",87,100} };
            zoneSize = 40;
        };
		
		class digging_mine {
            amount = 2;
            zones[] = { "digging_mine" };
            item = "pickaxe";
            mined[] = { { "diamond_uncut",0,10 },{ "silver_unrefined",10,30 },{ "rock",30,50 },{ "sand",50,60 },{ "quarz_uncut",60,70 },{ "salt_unrefined",70,78 },{ "ruby_uncut",78,85 },{ "emerald_uncut",85,90 },{ "sapphire_uncut",90,95 },{ "DinosaurBones_item",95,97 },{ "Oldfossil_item",97,100 }};
            zoneSize = 40;
        };

		class water_mine {
            amount = 2;
            zones[] = { "water_mine" };
            item = "";
            mined[] = { { "SaltWater",0,100 } };
            zoneSize = 40;
        };
		


		class oil_unprocessed {
            amount = 2;
            zones[] = { "oil_field_1" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed"};
            zoneSize = 40;
        };
/*
//This shit is nonsense! Don't give a fuck about it!		
		class copper_unrefined {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };

        class iron_unrefined {
            amount = 2;
            zones[] = { "iron_mine" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
            zoneSize = 30;
        };

        class salt_unrefined {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
            zoneSize = 30;
        };

        class sand {
            amount = 2;
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 30;
        };

        class diamond_uncut {
            amount = 2;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 30;
        };

		class rock {
            amount = 2;
            zones[] = { "rock_quarry" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 30;
        };
*/
    };
};