class B_Soldier_f;
// 0 - Training - soldier and instructor -------------------------------------------------------------------------------------------------------------
class cgqc_soldat_moderne : B_Soldier_f
{
	author = "silent1";
	faction = "CGQC";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	displayName = "Soldat";
	uniformClass = "cgqc_uniform_mk1";
	camouflage = 1.4;
	weapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	respawnWeapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	items[] = {"FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_RangeCard" };
	respawnItems[] = {"FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_RangeCard" };
	magazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	respawnMagazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_beret_vanilla", "cgqc_vest_mk1_belt", "None"};
	respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_beret_vanilla", "cgqc_vest_mk1_belt", "None"};
	backpack = "cgqc_pack_mk1_magic";
	editorPreview = "\CGQC_2022\pics\cgqc_soldat_moderne.jpg";
};
class cgqc_officer_1_moderne : B_Soldier_f
{
	author = "silent1";
	faction = "CGQC";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	displayName = "Officier";
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	detectSkill = 31;
	uniformClass = "cgqc_uniform_mk1";
	weapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	respawnWeapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	items[] = {"FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_RangeCard" };
	respawnItems[] = {"FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_RangeCard" };
	magazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	respawnMagazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_beret_blue", "cgqc_vest_mk1_belt", "None"};
	respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_beret_blue", "cgqc_vest_mk1_belt", "None"};
	backpack = "cgqc_pack_mk1_magic";
	editorPreview = "\CGQC_2022\pics\cgqc_officer_moderne.jpg";
};
class cgqc_officer_moderne : B_Soldier_f
{
	author = "silent1";
	faction = "CGQC";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	displayName = "Instructeur";
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	detectSkill = 31;
	uniformClass = "cgqc_uniform_mk1";
	weapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	respawnWeapons[] = {"cgqc_item_rangefinder", "cgqc_gun_glock19_wood", "Put", "Throw"};
	items[] = {"FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_RangeCard" };
	respawnItems[] = {"FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "FF_Painkiller", "ACRE_PRC343", "ACRE_PRC152", "ItemAndroid", "ACE_microDAGR", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_RangeCard" };
	magazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	respawnMagazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP"};
	linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_cap_green", "cgqc_vest_mk1_belt", "None"};
	respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_cap_green", "cgqc_vest_mk1_belt", "None"};
	backpack = "cgqc_pack_mk1_magic";
	editorPreview = "\CGQC_2022\pics\cgqc_officer_moderne.jpg";
};
class CGQC_Soldat_Base : B_Soldier_f
{
	scope = 0;
};
class CGQC_officer_Base : B_Soldier_f
{
	scope = 0;
};
// High Command -----------------------------------------------------------------------------------------
// Command
class cgqc_spawn_hq: cgqc_officer_1_moderne
{
	displayName = "HQ";
	editorSubcategory = "EdSubcat_cgqc_spawn_cmd";	
};
class cgqc_spawn_sl: cgqc_officer_1_moderne
{
	displayName = "Squad Leader";
	editorSubcategory = "EdSubcat_cgqc_spawn_cmd";	
};
class cgqc_spawn_tl: cgqc_officer_1_moderne
{
	displayName = "Team Leader";
	editorSubcategory = "EdSubcat_cgqc_spawn_cmd";	
};
// Infantry -----------------------------------------------------------------------------------------
class cgqc_spawn_rifleman: cgqc_soldat_moderne
{
	displayName = "Rifleman";
	editorSubcategory = "EdSubcat_cgqc_spawn";	
};
class cgqc_spawn_grenadier: cgqc_soldat_moderne
{
	displayName = "Grenadier";
	editorSubcategory = "EdSubcat_cgqc_spawn";	
};
// Specialists -----------------------------------------------------------------------------------------
class cgqc_spawn_machinegun: cgqc_soldat_moderne
{
	displayName = "Machine-Gunner";
	editorSubcategory = "EdSubcat_cgqc_spawn";	
};
class cgqc_spawn_at: cgqc_soldat_moderne
{
	displayName = "Anti-Tank";
	editorSubcategory = "EdSubcat_cgqc_spawn";	
};
class cgqc_spawn_medic: cgqc_soldat_moderne
{
	displayName = "Medic";
	editorSubcategory = "EdSubcat_cgqc_spawn";	
};
class cgqc_spawn_engineer: cgqc_soldat_moderne
{
	displayName = "Engineer";
	editorSubcategory = "EdSubcat_cgqc_spawn";	
};
class cgqc_spawn_marksman: cgqc_soldat_moderne
{
	displayName = "Marksman";
	editorSubcategory = "EdSubcat_cgqc_spawn";	
};
// Recon -----------------------------------------------------------------------------------------
class cgqc_spawn_sniper: cgqc_soldat_moderne
{
	displayName = "Sniper";
	editorSubcategory = "EdSubcat_cgqc_spawn_rec";	
};
class cgqc_spawn_spotter: cgqc_soldat_moderne
{
	displayName = "Spotter";
	editorSubcategory = "EdSubcat_cgqc_spawn_rec";	
};
class cgqc_spawn_drone: cgqc_soldat_moderne
{
	displayName = "Drone Operator";
	editorSubcategory = "EdSubcat_cgqc_spawn_rec";	
};
class cgqc_spawn_jtac: cgqc_soldat_moderne
{
	displayName = "JTAC";
	editorSubcategory = "EdSubcat_cgqc_spawn_rec";	
};
// Driver/pilots -----------------------------------------------------------------------------------------
class cgqc_spawn_pilot_heli: cgqc_soldat_moderne
{
	displayName = "Helicopter Pilot";
	editorSubcategory = "EdSubcat_cgqc_spawn_pilot";	
};
class cgqc_spawn_pilot_heliCrew: cgqc_soldat_moderne
{
	displayName = "Helicopter Crew";
	editorSubcategory = "EdSubcat_cgqc_spawn_pilot";	
};
class cgqc_spawn_pilot_jet: cgqc_soldat_moderne
{
	displayName = "Jet Pilot";
	editorSubcategory = "EdSubcat_cgqc_spawn_pilot";	
};
class cgqc_spawn_tank_driver: cgqc_soldat_moderne
{
	displayName = "Tank Driver";
	editorSubcategory = "EdSubcat_cgqc_spawn_pilot";	
};
class cgqc_spawn_tank_crew: cgqc_soldat_moderne
{
	displayName = "Tank Crew";
	editorSubcategory = "EdSubcat_cgqc_spawn_pilot";	
};


