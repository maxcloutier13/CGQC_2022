waitUntil {!isNull (findDisplay 46)}; 
["role"] execVM "\CGQC_2022\scripts\transition.sqf";
//disableUserInput true;
sleep 2;
player setUnitTrait ["Medic", false];
player setUnitTrait ["engineer", false];
player setUnitTrait ["explosiveSpecialist", false];
execVM "\cgqc_2022\scripts\mk1_action_ghillie_menu.sqf";
comment "Remove existing items";
removeAllWeapons player;
removeAllIaddVesttems player;
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
player addHandgunItem "tier1_dbalpl";

comment "Add containers";
player forceAddUniform "cgqc_uniform_mk1";
player addVest "cgqc_vest_mk1_tan";
player addBackpack "cgqc_pack_mk1_radiobag";

comment "Add binoculars";
player addMagazine "Laserbatteries";
player addWeapon "Laserdesignator_01_khk_F";

comment "Add items to containers";
for "_i" from 1 to 5 do {
	player addItemToUniform "FF_Painkiller";
};
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
 
player addItemToUniform "ACRE_PRC152";
player addItemToUniform "Tier1_15Rnd_9x19_JHP";
player addItemToUniform "ACE_M26_Clacker";
for "_i" from 1 to 2 do {
	player addItemToVest "ACE_M84";
};
for "_i" from 1 to 4 do {
	player addItemToVest "rhs_mag_m67";
};
for "_i" from 1 to 10 do {
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull";
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
player addItemToBackpack "Rev_darter_item";
player addItemToBackpack "ACE_Tripod";
player addItemToBackpack "sps_black_hornet_01_Static_F";
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
player addItemToBackpack "ACE_UAVBattery";
player addItemToBackpack "ACE_DefusalKit";
player addItemToBackpack "rhsusf_m112_mag";
player addItemToBackpack "rhsusf_m112_mag";
for "_i" from 1 to 4 do {
	player addItemToBackpack "rhsusf_mine_m14_mag";
};
player addItemToBackpack "ACRE_PRC117F";
player addItemToBackpack "ACRE_PRC117F";

player addHeadgear "cgqc_helmet_mk1";
player addGoggles "G_mas_can_wrap_gog_B";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "B_UavTerminal";
player linkItem "JAS_GPNVG18_blk";
//disableUserInput false;

//Load the sniper skill
execVM "\cgqc_2022\scripts\mk1_action_ghillie_menu.sqf";
sleep 2;
//Set radios
["jtac"] execVM "\cgqc\functions\fnc_setRadios.sqf";
hint "R??le: JTAC";
sleep 3;
hintSilent "";