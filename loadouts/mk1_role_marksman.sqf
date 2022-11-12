execVM "\CGQC_2022\scripts\transition.sqf";
//disableUserInput true;
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
player addWeapon "cgqc_gun_mk1_hk417";
player addPrimaryWeaponItem "Tier1_SandmanS_Black";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15_bk_light";
player addPrimaryWeaponItem "Tier1_Razor_Gen3_110_Geissele_Docter";
player addPrimaryWeaponItem "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "cgqc_gun_glock19_wood";
player addHandgunItem "Tier1_15Rnd_9x19_JHP";
player addHandgunItem "tier1_dbalpl";

comment "Add containers";
player forceAddUniform "cgqc_uniform_mk1";
player addVest "cgqc_vest_mk1_tan_lr";
player addBackpack "cgqc_pack_mk1_kitbag";

comment "Add binoculars";
player addWeapon "ACE_Vector";

comment "Add items to containers";
for "_i" from 1 to 5 do {
	player addItemToUniform "FF_Painkiller";
};
player addItemToUniform "ACRE_PRC343";
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
	player addItemToVest "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
};
for "_i" from 1 to 2 do {
	player addItemToVest "HandGrenade";
};
for "_i" from 1 to 10 do {
	player addItemToBackpack "ACE_fieldDressing";
};
for "_i" from 1 to 5 do {
	player addItemToBackpack "FF_Painkiller";
};
for "_i" from 1 to 2 do {
	player addItemToBackpack "ACE_salineIV_500";
};
player addItemToBackpack "ACE_EntrenchingTool";
 
player addItemToBackpack "WBK_HeadLampItem";
player addItemToBackpack "G_mas_can_gasmask";
player addItemToBackpack "ACE_ATragMX";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "sps_black_hornet_01_Static_F";
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
 
for "_i" from 1 to 5 do {
	player addItemToBackpack "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
};
for "_i" from 1 to 2 do {
	player addItemToBackpack "HandGrenade";
};
player addHeadgear "cgqc_helmet_mk1";
player addGoggles "G_mas_can_balaM_T";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "B_UavTerminal";
player linkItem "JAS_GPNVG18_blk";
//disableUserInput false;
sleep 2;
//Set  radios
hint "Rôle: Marksman";
sleep 3;
hint "Check ta 343!";
sleep 10;
hintSilent "";