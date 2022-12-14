// Spartan-3 ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_s3", "Spartan-3", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1"], _action ] call  ace_interact_menu_fnc_addActionToObject;

//---------------------------------------------------------------------------------------------------------
// Infanterie ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_inf", "Infanterie", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman 
_action = [ "menu_mk1_inf_RF", "Rifleman", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_rifleman_carbine.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman CQB 
_action = [ "menu_mk1_inf_RFCQB", "Rifleman CQB", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_rifleman_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Grenadier 
_action = [ "menu_mk1_inf_Grenadier", "Grenadier", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_grenadier.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;

//---------------------------------------------------------------------------------------------------------
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_spec", "Sp??cialistes", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic 
_action = [ "menu_mk1_inf_medic", "Medic", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_Medic.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "menu_mk1_inf_eng", "Engineer", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_Engineer.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// MG (Light) 
_action = [ "menu_mk1_inf_LMG", "Light machinegun", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_lmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  MG (Heavy) 
_action = [ "menu_mk1_inf_HMG", "Heavy machinegun", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_hmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Marksman 
_action = [ "menu_mk1_inf_marks", "Marksman", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_marksman.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (MAAWS)
_action = [ "menu_mk1_inf_maaws", "Anti-Tank (MAAWS)", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_at_maaws.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (Javelin) 
_action = [ "menu_mk1_inf_jav", "Anti-Tank (Javelin)", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_at_javelin.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Mortier l??ger 
_action = [ "menu_mk1_inf_mortar", "Mortier L??ger", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_mortar_light.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;

//---------------------------------------------------------------------------------------------------------
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_lead", "Commandement", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Squad Leader
//_action = [ "menu_mk1_inf_eng", "Squad Leader", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_squad_leader.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
//_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader 
_action = [ "menu_mk1_inf_TL", "Team Leader", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_tl.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader CQB
_action = [ "menu_mk1_inf_TLcqb", "Team Leader CQB", "", {[3] execVM "\CGQC_2022\loadouts\mk1_role_spartan_tl_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_s3", "menu_mk1_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;