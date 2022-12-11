waitUntil {!isNull (findDisplay 46)};
execVM "\CGQC_2022\scripts\transition.sqf";
disableUserInput true;
sleep 2;
player setUnitTrait ["Medic", false];
player setUnitTrait ["engineer", true];
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
player addWeapon "cgqc_gun_mk1_p90";
player addPrimaryWeaponItem "muzzle_snds_570";
player addPrimaryWeaponItem "Tier1_NGAL_Side";
player addPrimaryWeaponItem "optic_ACO_grn";
player addPrimaryWeaponItem "50Rnd_570x28_SMG_03";
player addWeapon "cgqc_gun_glock19_wood";

comment "Add containers";
player forceAddUniform "cgqc_uniform_mk1_helipilot";
player addVest "cgqc_vest_mk1_pilot_black";
player addBackpack "CGQCplayers_mk1_4_crew_heli_pack";

comment "Add binoculars";
player addWeapon "cgqc_item_rangefinder";

comment "Add items to containers";
for "_i" from 1 to 5 do {
	player addItemToUniform "FF_Painkiller";
};
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
for "_i" from 1 to 3 do {
	player addItemToVest "rhs_mag_m67";
};
for "_i" from 1 to 2 do {
	player addItemToVest "ACE_M84";
};
for "_i" from 1 to 5 do {
	player addItemToVest "50Rnd_570x28_SMG_03";
};
player addItemToVest "WBK_HeadLampItem";
player addItemToVest "ACE_Chemlight_HiRed";
player addItemToVest "ACE_Chemlight_IR";
player addItemToVest "SmokeShell";
player addItemToVest "SmokeShellBlue";
player addItemToVest "SmokeShellRed";
player addItemToVest "B_IR_Grenade";

player addHeadgear "cgqc_helmet_crew_black";
player addGoggles "G_mas_can_wrap_B";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";
player linkItem "JAS_GPNVG18_Full_blk_TI";
disableUserInput false;

sleep 2;
//Set  radios
["griffon_pieton"] execVM "\cgqc\functions\fnc_setRadios.sqf";
hint "Rôle: Griffon";
sleep 3;
hintSilent "";