// Variables pour le ghillie up kit
ghillie_menu = 0;
ghillie_isOn = 0;
ghillie_uniform = "";

// Custom arsenal categories
private _medical = [
	"ACE_fieldDressing",
	"ACE_elasticBandage",
	"ACE_packingBandage",
	"ACE_quikclot",
	"ACE_bloodIV",
	"ACE_bloodIV_250",
	"ACE_bloodIV_500",
	"ACE_epinephrine",
	"Empty_bloodIV_250",
	"Empty_bloodIV_500",
	"ACE_morphine",
	"ACE_personalAidKit",
	"ACE_plasmaIV",
	"ACE_plasmaIV_250",
	"ACE_plasmaIV_500",
	"ACE_salineIV",
	"ACE_salineIV_250",
	"ACE_salineIV_500",
	"ACE_splint",
	"ACE_surgicalKit",
	"ACE_tourniquet",
	"FSGm_ItemMedicBag",
	"FF_Painkiller"
];

private _electronics = [
	"ACRE_PRC117F",
	"ACRE_PRC148",
	"ACRE_PRC152",
	"ACRE_PRC343",
	"ACRE_PRC77",
	"ACE_ATragMX",
	"ACRE_BF888S",
	"ACE_Cellphone",
	"ACE_DAGR",
	"ACE_DeadManSwitch",
	"ACE_Kestrel4500",
	"ACE_M26_Clacker",
	"Ace_Clacker",
	"Ace_Microdagr",
	"MineDetector",
	"ACRE_SEM52SL",
	"ACRE_SEM70",
	"ACE_UAVBattery",
	"Laserbatteries",
	"ACRE_VHF30108SPIKE",
	"ACRE_VHF30108",
	"ACRE_VHF30108MAST",
	"ACE_Flashlight_KSF1",
	"ace_flashlight_xl50",
	"ACE_IR_Strobe_Item",
	"ACE_HuntIR_monitor",
	"ACE_Flashlight_MX991",
	"REV_pelican_item",
	"REV_darter_item",
	"REV_demine_item",
	"ItemAndroid",
	"ItemcTabHCam",
	"ItemcTab",
	"sps_black_hornet_01_Static_F",
	"WBK_HeadLampItem"
];

[_medical, "Medical", "cgqc_2022\textures\medical.paa", 0] call ace_arsenal_fnc_addRightPanelButton;
[_electronics, "Electronics", "cgqc_2022\textures\electronics.paa", 1] call ace_arsenal_fnc_addRightPanelButton;

// ==== Arsenal mk2 ==================================================================================================
cgqc_mk2_arsenal_list = [];
// Prep les variables de l'arsenal dynamique
#include "\cgqc_2022\loadouts\arsenal\init_arsenal.sqf";
cgqc_mk2_arsenal_init = true;

/*
//Dynamic arsenal opened evenhandler
["ace_arsenal_displayOpened", {
	if (!isnil "cgqc_arsenal_mk2_boxes") then {
		if (_this in cgqc_arsenal_mk2_boxes) then {
			[_this, cgqc_mk2_arsenal_list] call ace_arsenal_fnc_initBox;
		};
	};
}] call CBA_fnc_addEventHandler;
*/

// ==== Perks ==================================================================================================
// Add basic traits
cgqc_perks_basic = true;
cgqc_perks_recon = false;
cgqc_perks_eng = false;
cgqc_perks_medic = false;
// Variables 
cgqc_perks_ghillie_isOn = false;
cgqc_perks_ghillie_uniform = "";
cgqc_perk_player_stash_on = false;
// ------ Personal stash --------------------------------------------------------------------------------------
_action = [ "cgqc_perk_stash", "Personal Stash", "", {["stash"] execVM "\cgqc_2022\loadouts\mk2\perks_basic.sqf"}, {cgqc_perks_basic && !cgqc_perk_player_stash_on} ] call ace_interact_menu_fnc_createAction;
_adding = [ player, 1, ["ACE_SelfActions", "menu_self_cgqc"], _action ] call ace_interact_menu_fnc_addActionToObject;	
// Add Delete stash option
_action = [ "cgqc_perk_stash_delete", "Delete Stash", "", {["del_stash"] execVM "\cgqc_2022\loadouts\mk2\perks_basic.sqf"}, {cgqc_perks_basic && cgqc_perk_player_stash_on} ] call ace_interact_menu_fnc_createAction;
_adding = [ player, 1, ["ACE_SelfActions", "menu_self_cgqc"], _action ] call ace_interact_menu_fnc_addActionToObject;
// ------ Ghillie up --------------------------------------------------------------------------------------
_action = [ "cgqc_perk_ghillie", "Ghillie up", "", {}, {cgqc_perks_recon && !cgqc_perks_ghillie_isOn} ] call ace_interact_menu_fnc_createAction;
_adding = [ player, 1, ["ACE_SelfActions","menu_self_cgqc"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//All types 
_action = [ "cgqc_perk_ghillie_arid", "Arid", "", {["arid"] execVM "\cgqc_2022\loadouts\mk2\perks_recon.sqf"}, {cgqc_perks_recon && !cgqc_perks_ghillie_isOn} ] call ace_interact_menu_fnc_createAction;
_adding = [ player, 1, ["ACE_SelfActions","menu_self_cgqc", "cgqc_perk_ghillie"], _action ] call  ace_interact_menu_fnc_addActionToObject;
_action = [ "cgqc_perk_ghillie_sarid", "Semi-Arid", "", {["sarid"]  execVM "\cgqc_2022\loadouts\mk2\perks_recon.sqf"}, {cgqc_perks_recon && !cgqc_perks_ghillie_isOn} ] call ace_interact_menu_fnc_createAction;
_adding = [ player, 1, ["ACE_SelfActions","menu_self_cgqc", "cgqc_perk_ghillie"], _action ] call  ace_interact_menu_fnc_addActionToObject;
_action = [ "cgqc_perk_ghillie_lush", "Lush", "", {["lush"]  execVM "\cgqc_2022\loadouts\mk2\perks_recon.sqf"}, {cgqc_perks_recon && !cgqc_perks_ghillie_isOn} ] call ace_interact_menu_fnc_createAction;
_adding = [ player, 1, ["ACE_SelfActions","menu_self_cgqc", "cgqc_perk_ghillie"], _action ] call  ace_interact_menu_fnc_addActionToObject;
_action = [ "cgqc_perk_ghillie_jungle", "Jungle", "", {["jungle"] execVM "\cgqc_2022\loadouts\mk2\perks_recon.sqf"}, {cgqc_perks_recon && !cgqc_perks_ghillie_isOn} ] call ace_interact_menu_fnc_createAction;
_adding = [ player, 1, ["ACE_SelfActions","menu_self_cgqc", "cgqc_perk_ghillie"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Uniform
_action = [ "cgqc_perk_ghillie_uniform", "Ghillie-> Uniforme", "", {["uniform"]  execVM "\cgqc_2022\loadouts\mk2\perks_recon.sqf"}, {cgqc_perks_recon && cgqc_perks_ghillie_isOn} ] call ace_interact_menu_fnc_createAction;
_adding = [ player, 1, ["ACE_SelfActions","menu_self_cgqc"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// ------ Cut Grass --------------------------------------------------------------------------------------
_action = [ "cgqc_perk_cutgrass", "Cut grass", "", {["cut_grass"]  execVM "\cgqc_2022\loadouts\mk2\perks_recon.sqf"}, {cgqc_perks_recon} ] call ace_interact_menu_fnc_createAction;
_adding = [ player, 1, ["ACE_SelfActions","menu_self_cgqc"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// ------ Fortify --------------------------------------------------------------------------------------
[west, 500, [
	["Land_BagFence_Short_F", 5],
	["Land_BagFence_Long_F", 5], 
	["Land_BagFence_Round_F", 5], 
	["Land_Plank_01_4m_F", 5], 
	["Land_Plank_01_8m_F", 5], 
	["Land_CamoNetVar_NATO", 5], 
	["Land_fortified_nest_small_EP1", 50]
]] call ace_fortify_fnc_registerObjects;
