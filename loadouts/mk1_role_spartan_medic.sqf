_section = _this select 0;
waitUntil {!isNull (findDisplay 46)};
["role"] execVM "\CGQC_2022\scripts\transition.sqf";
//disableUserInput true;
sleep 2;
player setUnitTrait ["Medic", true];
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
player addWeapon "cgqc_gun_mk1_m4a1blkII";
player addPrimaryWeaponItem "Tier1_KAC_556_QDC_CQB_Black";
player addPrimaryWeaponItem "Tier1_M4BII_NGAL_M300C_Black";
player addPrimaryWeaponItem "Tier1_Razor_Gen2_16_Geissele_Docter";
player addPrimaryWeaponItem "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull";
player addPrimaryWeaponItem "rhsusf_acc_grip2";
player addWeapon "cgqc_gun_glock19_wood";
player addHandgunItem "Tier1_15Rnd_9x19_JHP";
player addHandgunItem "tier1_dbalpl";

comment "Add containers";
player forceAddUniform "cgqc_uniform_mk1";
player addVest "cgqc_vest_mk1_tan_rf";
player addBackpack "cgqc_pack_mk1_carryall";

comment "Add binoculars";
player addWeapon "cgqc_item_rangefinder";

comment "Add items to containers";
for "_i" from 1 to 5 do {
	player addItemToUniform "FF_Painkiller";
};
player addItemToUniform "ACRE_PRC343";
player addItemToUniform "ACRE_PRC152";
player addItemToUniform "ItemAndroid";
player addItemToUniform "ACE_MapTools";
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
for "_i" from 1 to 2 do {
	player addItemToVest "Tier1_15Rnd_9x19_JHP";
};
for "_i" from 1 to 2 do {
	player addItemToVest "ACE_M84";
};
for "_i" from 1 to 10 do {
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull";
};
for "_i" from 1 to 2 do {
	player addItemToVest "rhs_mag_m67";
};
for "_i" from 1 to 50 do {
	player addItemToBackpack "ACE_fieldDressing";
};
for "_i" from 1 to 7 do {
	player addItemToBackpack "ACE_salineIV_500";
};
player addItemToBackpack "ACE_EntrenchingTool";
 
player addItemToBackpack "WBK_HeadLampItem";
player addItemToBackpack "G_mas_can_gasmask";
for "_i" from 1 to 4 do {
	player addItemToBackpack "ACE_salineIV";
};
for "_i" from 1 to 20 do {
	player addItemToBackpack "ACE_morphine";
};
for "_i" from 1 to 20 do {
	player addItemToBackpack "ACE_epinephrine";
};
for "_i" from 1 to 4 do {
	player addItemToBackpack "ACE_splint";
};
for "_i" from 1 to 4 do {
	player addItemToBackpack "ACE_tourniquet";
};
player addItemToBackpack "ACE_Chemlight_HiRed";
player addItemToBackpack "ACE_Chemlight_IR";
for "_i" from 1 to 3 do {
	player addItemToBackpack "SmokeShell";
};
for "_i" from 1 to 2 do {
	player addItemToBackpack "SmokeShellBlue";
};
for "_i" from 1 to 2 do {
	player addItemToBackpack "SmokeShellRed";
};
for "_i" from 1 to 3 do {
	player addItemToBackpack "SmokeShellPurple";
};
for "_i" from 1 to 20 do {
	player addItemToBackpack "FF_Painkiller";
};
player addItemToBackpack "B_IR_Grenade";
player addItemToBackpack "rhs_mag_m67";
player addItemToBackpack "FSGm_ItemMedicBag";
player addHeadgear "cgqc_helmet_mk1_medic";
player addGoggles "G_mas_can_balaM_T";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";
player linkItem "JAS_GPNVG18_blk";
//disableUserInput false;

sleep 2;
//Set  radios
["spartan_2", _section] execVM "\cgqc\functions\fnc_setRadios.sqf";
hint "R??le: Medic";
sleep 10;
hintSilent "";