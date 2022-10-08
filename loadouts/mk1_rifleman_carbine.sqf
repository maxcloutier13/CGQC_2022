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
player addWeapon "cgqc_gun_mk1_m4a1blkII";
player addPrimaryWeaponItem "Tier1_KAC_556_QDC_CQB_Black";
player addPrimaryWeaponItem "Tier1_M4BII_NGAL_M300C_Black_FL";
player addPrimaryWeaponItem "Tier1_EXPS3_0_3xMag_Black_Up";
player addPrimaryWeaponItem "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull";
player addPrimaryWeaponItem "rhsusf_acc_grip2";
player addWeapon "rhs_weap_m72a7";
player addWeapon "cgqc_gun_glock19_wood";
player addHandgunItem "Tier1_15Rnd_9x19_JHP";

comment "Add containers";
player forceAddUniform "cgqc_uniform_mk1";
player addVest "cgqc_vest_mk1_tan_lr";
player addBackpack "cgqc_pack_mk1_kitbag";

comment "Add binoculars";
player addWeapon "cgqc_item_rangefinder";

comment "Add items to containers";
for "_i" from 1 to 5 do {
	player addItemToUniform "FF_Painkiller";
};
player addItemToUniform "ACRE_PRC343";
player addItemToUniform "ItemAndroid";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "cgqc_item_transponder";
 
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
for "_i" from 1 to 7 do {
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull";
};
for "_i" from 1 to 2 do {
	player addItemToVest "HandGrenade";
};
for "_i" from 1 to 10 do {
	player addItemToBackpack "ACE_fieldDressing";
};
for "_i" from 1 to 2 do {
	player addItemToBackpack "ACE_salineIV_500";
};
player addItemToBackpack "ACE_EntrenchingTool";
 
player addItemToBackpack "WBK_HeadLampItem";
player addItemToBackpack "G_mas_can_gasmask";
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
for "_i" from 1 to 2 do {
	player addItemToBackpack "HandGrenade";
};
player addHeadgear "cgqc_helmet_mk1";
player addGoggles "G_mas_can_balaM_T";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";
player linkItem "JAS_GPNVG18_blk";
