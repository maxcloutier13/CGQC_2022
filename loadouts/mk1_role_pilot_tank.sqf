_type = _this select 0;

switch (_type)
do
{
	case 0:	{ // Crew
		player setUnitTrait ["engineer", false];
	};
	case 1:	{ // Commander
		player setUnitTrait ["engineer", true];
	};
};
waitUntil {!isNull (findDisplay 46)};
["role"] execVM "\CGQC_2022\scripts\transition.sqf";
//disableUserInput true;
sleep 2;
// Remove traits
player setUnitTrait ["Medic", false];
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
player addWeapon "cgqc_gun_mk1_p90_khaki";
player addPrimaryWeaponItem "muzzle_snds_570";
player addPrimaryWeaponItem "Tier1_NGAL_Side";
player addPrimaryWeaponItem "optic_ACO_grn";
player addPrimaryWeaponItem "50Rnd_570x28_SMG_03";
player addWeapon "cgqc_gun_glock19_wood";
player addHandgunItem "Tier1_15Rnd_9x19_JHP";
player addHandgunItem "tier1_dbalpl";


comment "Add containers";
player forceAddUniform "cgqc_uniform_mk1";
player addVest "cgqc_vest_mk1_driver";
player addBackpack "cgqc_pack_mk1_magic";

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
for "_i" from 1 to 10 do {
	player addItemToVest "50Rnd_570x28_SMG_03";
};
player addItemToBackpack "ToolKit";
for "_i" from 1 to 2 do {
	player addItemToBackpack "rhs_mag_m67";
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



player addHeadgear "cgqc_helmet_mk1_tank";
player addGoggles "G_mas_can_wrap_gog_B";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "B_UavTerminal";

//disableUserInput false;
sleep 2;
// Set  radios
["centaure_pieton"] call CGQC_fnc_setRadios;
// Ajoute auto-connect 
//_action = [ "menu_self_vicradio", "Connecte les radios", "", {['set_centaure'] call CGQC_fnc_setRadios}, {true} ] call ace_interact_menu_fnc_createAction;
// _adding = [ player, 1, ["ACE_SelfActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
		
hint "Rôle: Centaure";
sleep 3;
hintSilent "";