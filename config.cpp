// Default info
class CfgPatches
{
	class CGQC_2022
	{
		// Meta information for editor
		name = "CGQC 2022";
		author = "silent1";
		url = "Insert Github";
		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"CGQC",
							"cTab",
							"ace_medical_treatment",
							"ace_hearing",
							"ace_captives",
							"ace_maptools",
							"ace_attach",
							"acre_sys_prc343",
							"acre_sys_prc152",
							"ace_trenches",
							"ace_microdagr",
							"ace_tagging",
							"mas_can_lite_common"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {
			"cgqc_box_mk1_rolebox",
			"cgqc_box_mk1_rolebox_green",
			"cgqc_box_mk1_plus",
			"cgqc_box_mk1_plus_green",
			"cgqc_box_mk1_plus_plus",
			"cgqc_box_mk1_plus_plus_green",
			"cgqc_box_original",
			"cgqc_box_original_green",
			"cgqc_box_mk1_supplies",
			"CGQC_units_mk1_0_HQ_pack",
			"CGQC_units_mk1_0_TeamLeader_Carbine_pack",
			"CGQC_units_mk1_0_TeamLeader_CQB_pack",
			"CGQC_units_mk1_1_Rifleman_Carbine_pack",
			"CGQC_units_mk1_1_Rifleman_CQB_pack",
			"CGQC_units_mk1_1_Medic_pack",
			"CGQC_units_mk1_1_Engineer_pack",
			"CGQC_units_mk1_2_LMG_pack",
			"CGQC_units_mk1_2_HMG_pack",
			"CGQC_units_mk1_2_Marksman_pack",
			"CGQC_units_mk1_2_Sniper_pack",
			"CGQC_units_mk1_3_AT_MAAWS_pack",
			"CGQC_units_mk1_3_AT_Javelin_pack",
			"CGQC_units_mk1_4_Tank_Driver_pack",
			"CGQC_units_mk1_4_Pilot_heli_pack",
			"CGQC_units_mk1_4_Pilot_Jet_pack",
			"CGQC_units_mk1_4_crew_heli_pack",
			"cgqc_soldat_moderne",
			"CGQC_officer_moderne",
			"cgqc_pack_mk1_kitbag",
			"CGQC_units_mk1_0_HQ",
			"CGQC_units_mk1_0_Drone_operator",
			"CGQC_units_mk1_0_JTAC",
			"CGQC_units_mk1_0_SquadLeader",
			"CGQC_units_mk1_0_TeamLeader_Carbine",
			"CGQC_units_mk1_0_TeamLeader_CQB",
			"CGQC_units_mk1_1_Rifleman_Carbine",
			"CGQC_units_mk1_1_Rifleman_CQB",
			"CGQC_units_mk1_1_Medic",
			"CGQC_units_mk1_1_Engineer",
			"CGQC_units_mk1_2_LMG",
			"CGQC_units_mk1_2_HMG",
			"CGQC_units_mk1_2_Marksman",
			"CGQC_units_mk1_2_Sniper",
			"CGQC_units_mk1_3_AT_MAAWS",
			"CGQC_units_mk1_3_AT_Javelin",
			"CGQC_units_mk1_4_Tank_Driver",
			"CGQC_units_mk1_4_Pilot_heli",
			"CGQC_units_mk1_4_Pilot_Jet",
			"CGQC_units_mk1_4_crew_heli",
			"cgqc_heli_ah6",
			"cgqc_heli_mh6",
			"cgqc_heli_dickforce",
			"cgqc_heli_cloutier",
			"cgqc_heli_uh1",
			"cgqc_heli_uh60m",
			"cgqc_heli_ch47_10",
			"cgqc_heli_AH64D",
			"cgqc_plane_a10",
			"cgqc_drone_darter",
			"cgqc_vic_badger",
			"cgqc_vic_bradley",
			"cgqc_vic_wiezel"};
		weapons[] = {
			"cgqc_helmet_mk1",
			"cgqc_helmet_mk1_medic",
			"cgqc_helmet_mk1_black",
			"cgqc_helmet_mk1_black_medic",
			"cgqc_helmet_mk1_white",
			"cgqc_helmet_mk1_white_medic",
			"cgqc_helmet_mk1_desert",
			"cgqc_helmet_mk1_desert_medic",
			"cgqc_helmet_mk1_mcam",
			"cgqc_helmet_mk1_mcam_medic",
			"cgqc_helmet_mk1_cadpat",
			"cgqc_helmet_mk1_cadpat_medic",
			"cgqc_helmet_mk1_f_gray",
			"cgqc_helmet_mk1_f_gray_medic",
			"cgqc_helmet_mk1_f_coyote",
			"cgqc_helmet_mk1_f_coyote_medic",
			"cgqc_helmet_mk1_f_black",
			"cgqc_helmet_mk1_f_black_medic",
			"cgqc_helmet_mk1_f_green",
			"cgqc_helmet_mk1_f_green_medic",
			"cgqc_helmet_mk1_tank",
			"cgqc_helmet_mk1_jetpilot",
			"cgqc_uniform_mk1",
			"cgqc_uniform_mk1_jetpilot",
			"cgqc_uniform_mk1_helipilot",
			"cgqc_vest_mk1_belt",
			"cgqc_vest_mk1_tan_lr",
			"cgqc_vest_mk1_tan_rf",
			"cgqc_vest_mk1_tan_ar",
			"cgqc_vest_mk1_pilot",
			"cgqc_vest_mk1_pilot_black",
			"cgqc_vest_mk1_desert",
			"cgqc_vest_mk1_desert_lr",
			"cgqc_vest_mk1_desert_rf",
			"cgqc_vest_mk1_desert_ar",
			"cgqc_vest_mk1_mcam",
			"cgqc_vest_mk1_mcam_lr",
			"cgqc_vest_mk1_mcam_rf",
			"cgqc_vest_mk1_mcam_ar",
			"cgqc_vest_mk1_cadpat",
			"cgqc_vest_mk1_cadpat_lr",
			"cgqc_vest_mk1_cadpat_rf",
			"cgqc_vest_mk1_black",
			"cgqc_vest_mk1_black_lr", 
			"cgqc_vest_mk1_black_rf",
			"cgqc_vest_mk1_black_ar", 
			"cgqc_vest_mk1_white",
			"cgqc_vest_mk1_white_lr", 
			"cgqc_vest_mk1_white_rf", 
			"cgqc_vest_mk1_white_ar", 
			"cgqc_vest_mk1_driver",
			"cgqc_vest_test1",
			"cgqc_vest_test2",
			"cgqc_vest_test3",
			"cgqc_vest_test4",
			"cgqc_vest_mk1_driver",
			"cgqc_gun_glock19_wood",
			"cgqc_acc_M8541A_wood",
			"cgqc_acc_bipod_wood",
			"cgqc_acc_anpeq15_laser_wood",
			"cgqc_acc_silencer_wood",			
			"cgqc_gun_mk1_m4a1blkII",
			"cgqc_gun_mk1_m4a1blkII_gl",
			"cgqc_gun_mk1_mk18",
			"cgqc_gun_mk1_mk18_fortin",
			"cgqc_gun_mk1_hk417",
			"cgqc_gun_mk1_m16a4",
			"cgqc_gun_mk1_mk12",
			"cgqc_gun_mk1_mk12_woodland",
			"cgqc_gun_mk1_hq_m4a1",
			"cgqc_gun_mk1_TL_m4a1",
			"cgqc_gun_mk1_jtac_mk12",
			"cgqc_gun_mk1_rifleman_m4a1",
			"cgqc_gun_mk1_rifleman_mk18",
			"cgqc_gun_mk1_mk46",
			"cgqc_gun_mk1_mk48",
			"cgqc_gun_mk1_marksman_417",
			"cgqc_gun_mk1_m200",
			"cgqc_gun_mk1_engineer_m4a1",
			"cgqc_gun_mk1_medic_m4a1",
			"cgqc_gun_mk1_MAAWS",
			"cgqc_gun_mk1_MAAWS_laforest",
			"cgqc_gun_mk1_MAAWS_cadpat",
			"cgqc_gun_mk1_MAAWS_woodland",
			"cgqc_gun_mk1_mp7",
			"cgqc_gun_mk1_mk18_gl",
			"cgqc_gun_mk1_AT_m4a1",
			"cgqc_gun_mk1_Javelin",
			"cgqc_gun_mk1_p90",
			"cgqc_gun_mk1_p90_khaki",
			"cgqc_item_rangefinder"};
	};
};
// Rails setup
	#include "cfg_rails.cpp"
// Weapons ------------------------------------------------------------------------
class cfgWeapons
{
	// Custom helmets ---------------------------------------
	#include "cfg_helmets.cpp"
	// Custom uniforms ---------------------------------------
	#include "cfg_uniforms.cpp"
	// Custom vests ---------------------------------------
	#include "cfg_vests.cpp"
	// Custom guns ---------------------------------------
	#include "cfg_guns.cpp"
	// Custom accessories ---------------------------------------
	#include "cfg_acc.cpp"
};
// Custom Editor category for units ------------------------------------------------
class CfgEditorSubcategories
{
	class EdSubcat_cgqc_mk1
	{
		displayName = "Men (mk1)";
	};
	class EdSubcat_cgqc_funstuff
	{
		displayName = "Funstuff";
	};
	class EdSubcat_cgqc_drones
	{
		displayName = "Drones";
	};
	class EdSubcat_cgqc_vic
	{
		displayName = "Vehicles (IFV)";
	};
	class EdSubcat_cgqc_cmd
	{
		displayName = "Vehicles (Command)";
	};
	class EdSubcat_cgqc_offroad
	{
		displayName = "Vehicles (Unarmed)";
	};
	
	
};
// Custom units ----------------------------------------------------------------------------
#include "cfg_pre_vehicles.cpp"
class cfgVehicles
{
	// Containers
	#include "cfg_containers.cpp"
	// Training units
	#include "cfg_units_training.cpp"
	// mk1 units
	#include "cfg_units_mk1.cpp"
	// mk1 vehicles
	#include "cfg_vehicles.cpp"
};
// Groups ---------------------------------------------------------------------------------
#include "cfg_groups.cpp"
// Eventhandlers
#include "cfg_eventHandlers.cpp"
// Audio -----------------------------------------------------------------------------------
#include "cfg_audio.cpp"
// Mods Modifications ----------------------------------------------------------------------
#include "cfg_mods_mods.cpp"
