// **********************************************************************************************************************
// --- Spartan-1 --------------------------------------------------------------------------------------------------------
// **********************************************************************************************************************
_action = [ "menu_mk2_s1", "Spartan", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Infanterie ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_inf", "Infanterie", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman mk18 
_action = [ "menu_mk2_inf_RFCQB", "Rifleman CQB mk18", "", {["rifle_cqb", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman M4
_action = [ "menu_mk2_inf_RF", "Rifleman Carbine M4blk2", "", {["rifle_carb", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman M16
_action = [ "menu_mk2_inf_RF_m16", "Rifleman Rifle M16a4", "", {["rifle_m16", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Grenadier 
_action = [ "menu_mk2_inf_Grenadier", "Grenadier", "", {["rifle_grenade", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_spec", "Sp??cialistes", "", {""}, {cgqc_player_rank > 1 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic 
_action = [ "menu_mk2_inf_medic", "Medic", "", {["med", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "menu_mk2_inf_eng", "Engineer", "", {["eng", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// MG (Light) 
_action = [ "menu_mk2_inf_LMG", "Light machinegun", "", {["lmg", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  MG (Heavy) 
_action = [ "menu_mk2_inf_HMG", "Heavy machinegun", "", {["hmg", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Marksman 
_action = [ "menu_mk2_inf_marks", "Marksman", "", {["mrksm", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (MAAWS)
_action = [ "menu_mk2_inf_maaws", "Anti-Tank (MAAWS)", "", {["at_maaws", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (Javelin) 
_action = [ "menu_mk2_inf_jav", "Anti-Tank (Javelin)", "", {["at_jav", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Mortier l??ger 
_action = [ "menu_mk2_inf_mortar", "Mortier L??ger", "", {["mortar", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_lead", "Commandement", "", {""}, {cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader 
_action = [ "menu_mk2_inf_TL", "Team Leader", "", {["tl_carb", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader CQB
_action = [ "menu_mk2_inf_TLcqb", "Team Leader CQB", "", {["tl_cqb", 1, false] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s1", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;















/*



// **********************************************************************************************************************
// --- Spartan-2 -------------------------------------------------------------------------------------------------------
// **********************************************************************************************************************
_action = [ "menu_mk2_s2", "Spartan-2", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Infanterie ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_inf", "Infanterie", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman 
_action = [ "menu_mk2_inf_RF", "Rifleman", "", {["rifle_carb", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman CQB 
_action = [ "menu_mk2_inf_RFCQB", "Rifleman CQB", "", {["rifle_cqb", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Grenadier 
_action = [ "menu_mk2_inf_Grenadier", "Grenadier", "", {["rifle_grenade", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_spec", "Sp??cialistes", "", {""}, {cgqc_player_rank > 1 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic 
_action = [ "menu_mk2_inf_medic", "Medic", "", {["med", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "menu_mk2_inf_eng", "Engineer", "", {["eng", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// MG (Light) 
_action = [ "menu_mk2_inf_LMG", "Light machinegun", "", {["lmg", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  MG (Heavy) 
_action = [ "menu_mk2_inf_HMG", "Heavy machinegun", "", {["hmg", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Marksman 
_action = [ "menu_mk2_inf_marks", "Marksman", "", {["mrksm", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (MAAWS)
_action = [ "menu_mk2_inf_maaws", "Anti-Tank (MAAWS)", "", {["at_maaws", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (Javelin) 
_action = [ "menu_mk2_inf_jav", "Anti-Tank (Javelin)", "", {["at_jav", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Mortier l??ger 
_action = [ "menu_mk2_inf_mortar", "Mortier L??ger", "", {["mortar", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_lead", "Commandement", "", {""}, {cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader 
_action = [ "menu_mk2_inf_TL", "Team Leader", "", {["tl_carb", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s2", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader CQB
_action = [ "menu_mk2_inf_TLcqb", "Team Leader CQB", "", {["tl_cqb", 2] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
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
_action = [ "menu_mk2_inf_RF", "Rifleman", "", {["rifle_carb", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman CQB 
_action = [ "menu_mk2_inf_RFCQB", "Rifleman CQB", "", {["rifle_cqb", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Grenadier 
_action = [ "menu_mk2_inf_Grenadier", "Grenadier", "", {["rifle_grenade", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_spec", "Sp??cialistes", "", {""}, {cgqc_player_rank > 1 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic 
_action = [ "menu_mk2_inf_medic", "Medic", "", {["med", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "menu_mk2_inf_eng", "Engineer", "", {["eng", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// MG (Light) 
_action = [ "menu_mk2_inf_LMG", "Light machinegun", "", {["lmg", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  MG (Heavy) 
_action = [ "menu_mk2_inf_HMG", "Heavy machinegun", "", {["hmg", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Marksman 
_action = [ "menu_mk2_inf_marks", "Marksman", "", {["mrksm", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (MAAWS)
_action = [ "menu_mk2_inf_maaws", "Anti-Tank (MAAWS)", "", {["at_maaws", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (Javelin) 
_action = [ "menu_mk2_inf_jav", "Anti-Tank (Javelin)", "", {["at_jav", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Mortier l??ger 
_action = [ "menu_mk2_inf_mortar", "Mortier L??ger", "", {["mortar", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_lead", "Commandement", "", {""}, {cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader 
_action = [ "menu_mk2_inf_TL", "Team Leader", "", {["tl_carb", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s3", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader CQB
_action = [ "menu_mk2_inf_TLcqb", "Team Leader CQB", "", {["tl_cqb", 3] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
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
_action = [ "menu_mk2_inf_RF", "Rifleman", "", {["rifle_carb", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman CQB 
_action = [ "menu_mk2_inf_RFCQB", "Rifleman CQB", "", {["rifle_cqb", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Grenadier 
_action = [ "menu_mk2_inf_Grenadier", "Grenadier", "", {["rifle_grenade", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_spec", "Sp??cialistes", "", {""}, {cgqc_player_rank > 1 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic 
_action = [ "menu_mk2_inf_medic", "Medic", "", {["med", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "menu_mk2_inf_eng", "Engineer", "", {["eng", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// MG (Light) 
_action = [ "menu_mk2_inf_LMG", "Light machinegun", "", {["lmg", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  MG (Heavy) 
_action = [ "menu_mk2_inf_HMG", "Heavy machinegun", "", {["hmg", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Marksman 
_action = [ "menu_mk2_inf_marks", "Marksman", "", {["mrksm", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (MAAWS)
_action = [ "menu_mk2_inf_maaws", "Anti-Tank (MAAWS)", "", {["at_maaws", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (Javelin) 
_action = [ "menu_mk2_inf_jav", "Anti-Tank (Javelin)", "", {["at_jav", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Mortier l??ger 
_action = [ "menu_mk2_inf_mortar", "Mortier L??ger", "", {["mortar", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk2_lead", "Commandement", "", {""}, {cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader 
_action = [ "menu_mk2_inf_TL", "Team Leader", "", {["tl_carb", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader CQB
_action = [ "menu_mk2_inf_TLcqb", "Team Leader CQB", "", {["tl_cqb", 4] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_s4", "menu_mk2_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;

*/