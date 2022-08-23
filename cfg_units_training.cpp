class B_Soldier_f;
class B_AssaultPack_rgr;
// 0 - Default soldier and instructor -------------------------------------------------------------------------------------------------------------
class cgqc_soldat_moderne : B_Soldier_f
{
	author = "silent1";
	faction = "CGQC";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	displayName = "Soldat (Moderne)";
	uniformClass = "cgqc_uniform_mk1";
	weapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	respawnWeapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_RangeCard", "cgqc_item_transponder"};
	respawnItems[] = {"ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_RangeCard", "cgqc_item_transponder"};
	magazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	respawnMagazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_beret_vanilla", "cgqc_vest_mk1_belt", "None"};
	respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_beret_vanilla", "cgqc_vest_mk1_belt", "None"};
	backpack = "cgqc_pack_mk1_magic";
	editorPreview = "\CGQC_2022\pics\cgqc_soldat_moderne.jpg";
};

class cgqc_officer_moderne : B_Soldier_f
{
	author = "silent1";
	faction = "CGQC";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	displayName = "Officier (Moderne)";
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	detectSkill = 31;
	uniformClass = "cgqc_uniform_mk1";
	weapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	respawnWeapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_RangeCard", "cgqc_item_transponder"};
	respawnItems[] = {"ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_RangeCard", "cgqc_item_transponder"};
	magazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	respawnMagazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_cap_green", "cgqc_vest_mk1_belt", "None"};
	respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_cap_green", "cgqc_vest_mk1_belt", "None"};
	backpack = "cgqc_pack_mk1_magic";
	editorPreview = "\CGQC_2022\pics\cgqc_officer_moderne.jpg";
};
