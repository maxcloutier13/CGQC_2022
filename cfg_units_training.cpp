class B_Soldier_f;
class CGQC_Soldat_Base;
// 0 - Training - soldier and instructor -------------------------------------------------------------------------------------------------------------
class cgqc_soldat_moderne : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	displayName = "Soldat (2023)";
	uniformClass = "cgqc_uniform_mk1";
	camouflage = 1.4;
	weapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	respawnWeapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_RangeCard", "cgqc_items_ifak" };
	respawnItems[] = {"ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_CableTie", "ACE_CableTie", "ACE_RangeCard", "cgqc_items_ifak" };
	magazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	respawnMagazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_cap_green", "cgqc_vest_mk1_belt", "None"};
	respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_cap_green", "cgqc_vest_mk1_belt", "None"};
	backpack = "cgqc_pack_mk1_magic";
	editorPreview = "\CGQC_2022\pics\cgqc_soldat_moderne.jpg";
	class EventHandlers {
        //init = "[] spawn CGQC_fnc_initTraining";
    };

};
class cgqc_officer_1_moderne : cgqc_soldat_moderne
{
	author = "silent1";
	faction = "CGQC";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	displayName = "Officier (2023)";
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	detectSkill = 31;
	editorPreview = "\CGQC_2022\pics\cgqc_officer_moderne.jpg";
};
class cgqc_officer_moderne : cgqc_soldat_moderne
{
	author = "silent1";
	faction = "CGQC";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	displayName = "Instructeur (2023)";
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	detectSkill = 31;
	editorPreview = "\CGQC_2022\pics\cgqc_officer_moderne.jpg";
};