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
							"ace3painbegone",
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
			"cgqc_box_mk1_mortar",
			"cgqc_box_mk1_mortar_mk6",
			"cgqc_box_mk1_arsenal",
			"cgqc_box_mk2_arsenal_old",
			"cgqc_box_mk2_parachute",
			"cgqc_box_mk2_diving",
			"cgqc_box_mk2_stash",
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
			"CGQC_units_mk1_4_Tank_Crew",
			"CGQC_units_mk1_4_Pilot_heli_pack",
			"CGQC_units_mk1_4_Pilot_Jet_pack",
			"CGQC_units_mk1_4_crew_heli_pack",
			"cgqc_soldat_moderne",
			"CGQC_officer_moderne",
			"cgqc_officer_1_moderne",
			"cgqc_pack_mk1_kitbag",
			"cgqc_pack_mk1_kitbag_desert",
			"cgqc_pack_mk1_kitbag_mcam",
			"cgqc_pack_mk1_kitbag_cadpat",
			"cgqc_pack_mk1_kitbag_black",
			"cgqc_pack_mk1_kitbag_white",
			"cgqc_pack_mk1_assault",
			"cgqc_pack_mk1_assault_desert",
			"cgqc_pack_mk1_assault_mcam",
			"cgqc_pack_mk1_assault_cadpat",
			"cgqc_pack_mk1_assault_black",
			"cgqc_pack_mk1_assault_white",
			"cgqc_pack_mk1_Radiobag",
			"cgqc_pack_mk1_Radiobag_desert",
			"cgqc_pack_mk1_Radiobag_mcam",
			"cgqc_pack_mk1_Radiobag_cadpat",
			"cgqc_pack_mk1_Radiobag_black",
			"cgqc_pack_mk1_Radiobag_white",
			"cgqc_pack_mk1_carryall",
			"cgqc_pack_mk1_carryall_desert",
			"cgqc_pack_mk1_carryall_mcam",
			"cgqc_pack_mk1_carryall_cadpat",
			"cgqc_pack_mk1_carryall_black",
			"cgqc_pack_mk1_carryall_white",
			"cgqc_pack_mk1_tank_driver",
			"CGQC_units_mk1_0_HQ",
			"CGQC_units_mk1_0_Drone_operator",
			"CGQC_units_mk1_0_JTAC",
			"CGQC_units_mk1_0_TeamLeader_Carbine",
			"CGQC_units_mk1_0_TeamLeader_CQB",
			"CGQC_units_mk1_1_Rifleman_full",
			"CGQC_units_mk1_1_Rifleman_Carbine",
			"CGQC_units_mk1_1_Rifleman_CQB",
			"CGQC_units_mk1_1_Rifleman_grenadier",
			"CGQC_units_mk1_1_Medic",
			"CGQC_units_mk1_1_Engineer",
			"CGQC_units_mk1_2_LMG",
			"CGQC_units_mk1_2_HMG",
			"CGQC_units_mk1_2_Marksman",
			"CGQC_units_mk1_2_Sniper",
			"CGQC_units_mk1_2_Sniper_ebr",
			"CGQC_units_mk1_2_Spotter",
			"CGQC_units_mk1_3_AT_MAAWS",
			"CGQC_units_mk1_3_AT_Javelin",
			"CGQC_units_mk1_4_Tank_Driver",
			"CGQC_units_mk1_4_Pilot_heli",
			"CGQC_units_mk1_4_Pilot_Jet",
			"CGQC_units_mk1_4_crew_heli",
			"CGQC_units_mk2_Rifleman_ai",
			"CGQC_units_mk2_Pilot_heli_ai",
			"CGQC_units_mk2_crew_heli_ai",
			"CGQC_units_mk2_Pilot_Jet_ai",
			"CGQC_units_mk2_Tank_Driver_ai",
			"CGQC_units_mk2_Tank_Crew_ai",
			"CGQC_units_mk1_5_Diver_tl",
			"CGQC_units_mk1_5_Diver_sniper",
			"CGQC_units_mk1_5_Diver_Spotter",
			"CGQC_units_mk1_5_Diver_Engineer",
			"cgqc_heli_uh1",
			"cgqc_heli_uh60m",
			"cgqc_heli_ch47_10",
			"cgqc_heli_AH64D",
			"cgqc_plane_a10",
			"cgqc_drone_darter",
			"cgqc_vic_badger",
			"cgqc_vic_bradley",
			"cgqc_vic_wiezel",
			"cgqc_vic_suv",
			"cgqc_vic_motocross",
			"cgqc_vic_quad",
			"cgqc_vic_quad_ext",
			"cgqc_vic_jeep",
			"cgqc_vic_jeep_cov",
			"cgqc_vic_dagor",
			"cgqc_vic_hmmw",
			"cgqc_vic_mrap",
			"cgqc_vic_jeep_hmg",
			"cgqc_vic_polaris",
			"cgqc_vic_dagor_hmg",
			"cgqc_vic_dagor_at",
			"cgqc_vic_hmmw_hmg",
			"cgqc_vic_hmmw_armored",
			"cgqc_vic_mrap_hmg",
			"cgqc_projector",
			"cgqc_vic_quad_ext_mortarmk6"};
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
			"cgqc_helmet_mk1_tank_turcotte",
			"cgqc_helmet_mk1_tank_audi",
			"cgqc_helmet_mk1_tank_tremblay",
			"cgqc_helmet_mk1_tank_comeau",
			"cgqc_helmet_mk1_tank_genest",
			"cgqc_helmet_mk1_tank_frechette",
			"cgqc_helmet_mk1_tank_laforest",
			"cgqc_helmet_mk1_tank_fortin",
			"cgqc_helmet_mk1_tank_pinard",
			"cgqc_helmet_mk1_tank_gaudreault",
			"cgqc_helmet_mk1_tank_cloutier",
			"cgqc_helmet_kidnapping",
			"cgqc_goggles_mk1_diver",
			"cgqc_goggles_mk1_para",
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
			"cgqc_vest_mk1_driver",
			"cgqc_vest_mk1_diver",
			"cgqc_vest_kidnapping",
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
			"cgqc_gun_mk1_m200_arid",
			"cgqc_gun_mk1_m200_semiarid",
			"cgqc_gun_mk1_m200_tropical",
			"cgqc_gun_mk1_m200_sand",
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
			"cgqc_gun_mk1_hk417_tremblay",
			"cgqc_gun_mk1_hk417_canpat",
			"cgqc_gun_mk1_hk417_wood"};
	};
};
