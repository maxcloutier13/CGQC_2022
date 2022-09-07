execVM "\CGQC_2022\loadouts\transition.sqf";
sleep 2;
player setUnitTrait ["Medic", false];
player setUnitTrait ["engineer", false];
player setUnitTrait ["explosiveSpecialist", false];
comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add weapons";
player addWeapon "cgqc_gun_mk1_jtac_mk12";
player addPrimaryWeaponItem "Tier1_KAC_556_QDC_CQB_Black";
player addPrimaryWeaponItem "Tier1_M4BII_NGAL_M600V_Black";
player addPrimaryWeaponItem "NForce_Atcr_RMR_Top_SKeetIR_Down";
player addPrimaryWeaponItem "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull";
player addPrimaryWeaponItem "Tier1_Harris_Bipod_Black";
player addWeapon "cgqc_gun_glock19_wood";
player addHandgunItem "Tier1_X300U";
player addHandgunItem "Tier1_15Rnd_9x19_JHP";

comment "Add containers";
player forceAddUniform "cgqc_uniform_mk1";
player addVest "cgqc_vest_mk1_tan";
player addBackpack "cgqc_pack_mk1_kitbag";

comment "Add binoculars";
player addMagazine "Laserbatteries";
player addWeapon "Laserdesignator_01_khk_F";

comment "Add items to containers";
player addItemToUniform "ItemAndroid";
player addItemToUniform "ACE_microDAGR";
for "_i" from 1 to 10 do {
	player addItemToUniform "ACE_fieldDressing";
};
for "_i" from 1 to 2 do {
	player addItemToUniform "ACE_epinephrine";
};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {
	player addItemToUniform "ACE_morphine";
};
player addItemToUniform "ACE_splint";
for "_i" from 1 to 2 do {
	player addItemToUniform "ACE_tourniquet";
};
for "_i" from 1 to 2 do {
	player addItemToUniform "ACE_CableTie";
};
player addItemToUniform "ACE_IR_Strobe_Item";
player addItemToUniform "ACE_RangeCard";
player addItemToUniform "cgqc_item_transponder";
player addItemToUniform "ACRE_PRC152";
player addItemToUniform "Tier1_15Rnd_9x19_JHP";
for "_i" from 1 to 2 do {
	player addItemToVest "ACE_M84";
};
for "_i" from 1 to 4 do {
	player addItemToVest "HandGrenade";
};
for "_i" from 1 to 9 do {
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull";
};
for "_i" from 1 to 10 do {
	player addItemToBackpack "ACE_fieldDressing";
};
for "_i" from 1 to 2 do {
	player addItemToBackpack "ACE_salineIV_500";
};
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "cgqc_beret_green";
player addItemToBackpack "G_mas_can_gasmask";
player addItemToBackpack "Rev_darter_item";
player addItemToBackpack "ACE_SpottingScope";
player addItemToBackpack "ACE_Tripod";
for "_i" from 1 to 2 do {
	player addItemToBackpack "sps_black_hornet_01_Static_F";
};
player addItemToBackpack "ItemcTab";
player addItemToBackpack "ACE_Chemlight_HiRed";
player addItemToBackpack "ACE_Chemlight_IR";
for "_i" from 1 to 3 do {
	player addItemToBackpack "SmokeShell";
};
for "_i" from 1 to 3 do {
	player addItemToBackpack "SmokeShellBlue";
};
for "_i" from 1 to 3 do {
	player addItemToBackpack "SmokeShellRed";
};
player addItemToBackpack "B_IR_Grenade";
player addItemToBackpack "rhsusf_m112_mag";
for "_i" from 1 to 5 do {
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull";
};
player addHeadgear "cgqc_helmet_mk1";
player addGoggles "G_mas_can_wrap_gog_B";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "B_UavTerminal";
player linkItem "NVGoggles_mas_can_hv";