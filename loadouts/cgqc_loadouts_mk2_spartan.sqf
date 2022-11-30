// **********************************************************************************************************************
// --- Spartan-1 --------------------------------------------------------------------------------------------------------
// **********************************************************************************************************************
_action = [ "menu_mk2_s1", "Spartan-1", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Infanterie ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_inf", "Infanterie", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman 
_action = [ "menu_mk2_inf_RF", "Rifleman", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_rifleman_carbine.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman CQB 
_action = [ "menu_mk2_inf_RFCQB", "Rifleman CQB", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_rifleman_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Grenadier 
_action = [ "menu_mk2_inf_Grenadier", "Grenadier", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_grenadier.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_spec", "Spécialistes", "", {""}, {cgqc_player_rank > 0} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic 
_action = [ "menu_mk2_inf_medic", "Medic", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_Medic.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "menu_mk2_inf_eng", "Engineer", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_Engineer.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// MG (Light) 
_action = [ "menu_mk2_inf_LMG", "Light machinegun", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_lmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  MG (Heavy) 
_action = [ "menu_mk2_inf_HMG", "Heavy machinegun", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_hmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Marksman 
_action = [ "menu_mk2_inf_marks", "Marksman", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_marksman.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (MAAWS)
_action = [ "menu_mk2_inf_maaws", "Anti-Tank (MAAWS)", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_at_maaws.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (Javelin) 
_action = [ "menu_mk2_inf_jav", "Anti-Tank (Javelin)", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_at_javelin.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Mortier léger 
_action = [ "menu_mk2_inf_mortar", "Mortier Léger", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_mortar_light.sqf"}, {cgqc_player_rank > 2} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_lead", "Commandement", "", {""}, {cgqc_player_rank > 3} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader 
_action = [ "menu_mk2_inf_TL", "Team Leader", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_tl.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader CQB
_action = [ "menu_mk2_inf_TLcqb", "Team Leader CQB", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_spartan_tl_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;

// **********************************************************************************************************************
// --- Spartan-2 -------------------------------------------------------------------------------------------------------
// **********************************************************************************************************************
_action = [ "menu_mk2_s2", "Spartan-2", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Infanterie ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_inf", "Infanterie", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman 
_action = [ "menu_mk2_inf_RF", "Rifleman", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_rifleman_carbine.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman CQB 
_action = [ "menu_mk2_inf_RFCQB", "Rifleman CQB", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_rifleman_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Grenadier 
_action = [ "menu_mk2_inf_Grenadier", "Grenadier", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_grenadier.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_spec", "Spécialistes", "", {""}, {cgqc_player_rank > 0} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic 
_action = [ "menu_mk2_inf_medic", "Medic", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_Medic.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "menu_mk2_inf_eng", "Engineer", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_Engineer.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// MG (Light) 
_action = [ "menu_mk2_inf_LMG", "Light machinegun", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_lmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  MG (Heavy) 
_action = [ "menu_mk2_inf_HMG", "Heavy machinegun", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_hmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Marksman 
_action = [ "menu_mk2_inf_marks", "Marksman", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_marksman.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (MAAWS)
_action = [ "menu_mk2_inf_maaws", "Anti-Tank (MAAWS)", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_at_maaws.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (Javelin) 
_action = [ "menu_mk2_inf_jav", "Anti-Tank (Javelin)", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_at_javelin.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Mortier léger 
_action = [ "menu_mk2_inf_mortar", "Mortier Léger", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_mortar_light.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_lead", "Commandement", "", {""}, {cgqc_player_rank > 3} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader 
_action = [ "menu_mk2_inf_TL", "Team Leader", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_tl.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader CQB
_action = [ "menu_mk2_inf_TLcqb", "Team Leader CQB", "", {[2] execVM "\CGQC_2022\loadouts\mk1_role_spartan_tl_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;



// **********************************************************************************************************************
// ---- Spartan-3 ------------------------------------------------------------------------------------------------------
// **********************************************************************************************************************
_action = [ "menu_mk2_s3", "Spartan-3", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Infanterie ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_inf", "Infanterie", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman 
_action = [ "menu_mk2_inf_RF", "Rifleman", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_rifleman_carbine.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman CQB 
_action = [ "menu_mk2_inf_RFCQB", "Rifleman CQB", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_rifleman_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Grenadier 
_action = [ "menu_mk2_inf_Grenadier", "Grenadier", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_grenadier.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_spec", "Spécialistes", "", {""}, {cgqc_player_rank > 0} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic 
_action = [ "menu_mk2_inf_medic", "Medic", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_Medic.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "menu_mk2_inf_eng", "Engineer", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_Engineer.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// MG (Light) 
_action = [ "menu_mk2_inf_LMG", "Light machinegun", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_lmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  MG (Heavy) 
_action = [ "menu_mk2_inf_HMG", "Heavy machinegun", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_hmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Marksman 
_action = [ "menu_mk2_inf_marks", "Marksman", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_marksman.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (MAAWS)
_action = [ "menu_mk2_inf_maaws", "Anti-Tank (MAAWS)", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_at_maaws.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (Javelin) 
_action = [ "menu_mk2_inf_jav", "Anti-Tank (Javelin)", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_at_javelin.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Mortier léger 
_action = [ "menu_mk2_inf_mortar", "Mortier Léger", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_mortar_light.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_lead", "Commandement", "", {""}, {cgqc_player_rank > 3} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader 
_action = [ "menu_mk2_inf_TL", "Team Leader", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_tl.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader CQB
_action = [ "menu_mk2_inf_TLcqb", "Team Leader CQB", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_tl_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;


// **********************************************************************************************************************
// ---- Spartan-4 -------------------------------------------------------------------------------------------------------
// **********************************************************************************************************************
_action = [ "menu_mk2_s4", "Spartan-4", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Infanterie ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_inf", "Infanterie", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman 
_action = [ "menu_mk2_inf_RF", "Rifleman", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_rifleman_carbine.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman CQB 
_action = [ "menu_mk2_inf_RFCQB", "Rifleman CQB", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_rifleman_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Grenadier 
_action = [ "menu_mk2_inf_Grenadier", "Grenadier", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_grenadier.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_spec", "Spécialistes", "", {""}, {cgqc_player_rank > 0} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic 
_action = [ "menu_mk2_inf_medic", "Medic", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_Medic.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "menu_mk2_inf_eng", "Engineer", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_Engineer.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// MG (Light) 
_action = [ "menu_mk2_inf_LMG", "Light machinegun", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_lmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  MG (Heavy) 
_action = [ "menu_mk2_inf_HMG", "Heavy machinegun", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_hmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Marksman 
_action = [ "menu_mk2_inf_marks", "Marksman", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_marksman.sqf"}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (MAAWS)
_action = [ "menu_mk2_inf_maaws", "Anti-Tank (MAAWS)", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_at_maaws.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (Javelin) 
_action = [ "menu_mk2_inf_jav", "Anti-Tank (Javelin)", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_at_javelin.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Mortier léger 
_action = [ "menu_mk2_inf_mortar", "Mortier Léger", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_mortar_light.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_lead", "Commandement", "", {""}, {cgqc_player_rank > 3} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader 
_action = [ "menu_mk2_inf_TL", "Team Leader", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_tl.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader CQB
_action = [ "menu_mk2_inf_TLcqb", "Team Leader CQB", "", {[4] execVM "\CGQC_2022\loadouts\mk1_role_spartan_tl_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;