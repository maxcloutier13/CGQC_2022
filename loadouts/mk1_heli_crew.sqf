execVM "\CGQC_2022\loadouts\transition.sqf";
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
player addWeapon "cgqc_gun_mk1_mp7";
player addPrimaryWeaponItem "optic_ACO_grn";
player addPrimaryWeaponItem "40Rnd_46x30SD_mas_can_mag";
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
player addItemToUniform "ACRE_PRC152";
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
for "_i" from 1 to 3 do {
	player addItemToVest "HandGrenade";
};
for "_i" from 1 to 2 do {
	player addItemToVest "ACE_M84";
};
for "_i" from 1 to 3 do {
	player addItemToVest "40Rnd_46x30SD_mas_can_mag";
};
player addHeadgear "cgqc_helmet_crew_black";
player addGoggles "G_mas_can_wrap_B";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";
player linkItem "JAS_GPNVG18_blk";