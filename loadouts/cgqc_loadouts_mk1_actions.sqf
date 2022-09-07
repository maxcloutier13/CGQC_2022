// Old school actions
// _source addAction ["---- Change de rôle mk1 (garde loadout)------", "\CGQC_2022\loadouts\empty.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Medic", "\CGQC_2022\loadouts\role_medic.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Ingénieur", "\CGQC_2022\loadouts\role_engineer.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- EOD", "\CGQC_2022\loadouts\role_EOD.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["---- Change de loadout mk1------", "\CGQC_2022\loadouts\empty.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Rifleman - Carbine", "\CGQC_2022\loadouts\mk1_rifleman_carbine.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Rifleman - CQB", "\CGQC_2022\loadouts\mk1_rifleman_cqb.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Medic", "\CGQC_2022\loadouts\mk1_medic.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Engineer", "\CGQC_2022\loadouts\mk1_engineer.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- HQ/MobileSat", "\CGQC_2022\loadouts\mk1_hq.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Squad Leader", "\CGQC_2022\loadouts\mk1_squad_leader.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Team/Squad Leader", "\CGQC_2022\loadouts\mk1_tl.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Team/Squad Leader CQB", "\CGQC_2022\loadouts\mk1_tl_cqb.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- MG (Light)", "\CGQC_2022\loadouts\mk1_lmg.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- MG (Heavy)", "\CGQC_2022\loadouts\mk1_hmg.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Marksman", "\CGQC_2022\loadouts\mk1_marksman.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Sniper", "\CGQC_2022\loadouts\mk1_sniper.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Drone Operator", "\CGQC_2022\loadouts\mk1_drone_operator.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- FAC/JTAC", "\CGQC_2022\loadouts\mk1_JTAC.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Anti-Tank (MAAWS)", "\CGQC_2022\loadouts\mk1_at_maaws.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Anti-Tank (Javelin)", "\CGQC_2022\loadouts\mk1_at_javelin.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Helicopter Pilot", "\CGQC_2022\loadouts\mk1_heli_pilot.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Helicopter Crew", "\CGQC_2022\loadouts\mk1_heli_crew.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Jet Pilot", "\CGQC_2022\loadouts\mk1_jet_pilot.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _source addAction ["- Tank Driver/Crew", "\CGQC_2022\loadouts\mk1_driver_tank.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];

// --- Ace actions ---------------------------------------------------------------------------------------------------------
_action = [ "menu_cgqc", "CGQC", "CGQC_2022\textures\cgqc_ace_icon", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Base stuff --------------------------------------------------------------------------------------------------------------
_action = [ "menu_basic", "Médical/EDC", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Meds to uniform 
_action = [ "meds_uniform", "Médical -> Uniforme", "", {execVM "\CGQC_2022\loadouts\meds_uniform.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc","menu_basic"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Meds to backpack
_action = [ "meds_pack", "Médical -> Sac à dos", "", {execVM "\CGQC_2022\loadouts\meds_backpack.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc","menu_basic"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Items to uniform 
_action = [ "base_uniform", "Med+Items -> Uniforme", "", {execVM "\CGQC_2022\loadouts\base_uniform.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc","menu_basic"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Items to backpack
_action = [ "base_pack", "Med+Items -> Sac à dos", "", {execVM "\CGQC_2022\loadouts\base_backpack.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc","menu_basic"], _action ] call ace_interact_menu_fnc_addActionToClass;

// Radios --------------------------------------------------------------------------------------------------------------
_action = [ "menu_radios", "Radios", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Meds to Radio1 
_action = [ "meds_radio1", "343", "", {execVM "\CGQC_2022\loadouts\radio_1.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc","menu_radios"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Meds to Radio2
_action = [ "meds_radio2", "343+152", "", {execVM "\CGQC_2022\loadouts\radio_2.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc","menu_radios"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Items to Radio3 
_action = [ "base_radio3", "343+152+152", "", {execVM "\CGQC_2022\loadouts\radio_3.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc","menu_radios"], _action ] call ace_interact_menu_fnc_addActionToClass;


// Skill switcher ---------------------------------------------------------------------------------------------------------
_action = [ "menu_skill", "Change de skills", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Meds to uniform 
_action = [ "skill_medic", "Medic", "", {execVM "\CGQC_2022\loadouts\role_medic.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc","menu_skill"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Meds to backpack
_action = [ "skill_eng", "Ingénieur", "", {execVM "\CGQC_2022\loadouts\role_engineer.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc","menu_skill"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Items to uniform 
_action = [ "skill_eod", "EOD", "", {execVM "\CGQC_2022\loadouts\role_EOD.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions","menu_cgqc","menu_skill"], _action ] call ace_interact_menu_fnc_addActionToClass;


// Mk1 Loadout switcher ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1", "MK1 Loadouts", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Infanterie ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_inf", "Infanterie", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Rifleman 
_action = [ "menu_mk1_inf_RF", "Rifleman", "", {execVM "\CGQC_2022\loadouts\mk1_rifleman_carbine.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_inf"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Rifleman CQB 
_action = [ "menu_mk1_inf_RFCQB", "Rifleman CQB", "", {execVM "\CGQC_2022\loadouts\mk1_rifleman_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_inf"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Medic 
_action = [ "menu_mk1_inf_medic", "Medic", "", {execVM "\CGQC_2022\loadouts\mk1_Medic.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_inf"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Engineer
_action = [ "menu_mk1_inf_eng", "Engineer", "", {execVM "\CGQC_2022\loadouts\mk1_Engineer.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_inf"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_spec", "Spécialistes", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1"], _action ] call ace_interact_menu_fnc_addActionToClass;
// MG (Light) 
_action = [ "menu_mk1_inf_LMG", "Rifleman", "", {execVM "\CGQC_2022\loadouts\mk1_lmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_spec"], _action ] call ace_interact_menu_fnc_addActionToClass;
//  MG (Heavy) 
_action = [ "menu_mk1_inf_HMG", "Rifleman CQB", "", {execVM "\CGQC_2022\loadouts\mk1_hmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_spec"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Marksman 
_action = [ "menu_mk1_inf_marks", "Medic", "", {execVM "\CGQC_2022\loadouts\mk1_marksman.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_spec"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Sniper
_action = [ "menu_mk1_inf_snipe", "Engineer", "", {execVM "\CGQC_2022\loadouts\mk1_sniper.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_spec"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Anti-Tank (MAAWS)
_action = [ "menu_mk1_inf_maaws", "Anti-Tank (MAAWS)", "", {execVM "\CGQC_2022\loadouts\mk1_at_maaws.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_spec"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Anti-Tank (Javelin) 
_action = [ "menu_mk1_inf_jav", "Anti-Tank (Javelin)", "", {execVM "\CGQC_2022\loadouts\mk1_at_javelin.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_spec"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Drone Operator 
_action = [ "menu_mk1_inf_drone", "Drone Operator", "", {execVM "\CGQC_2022\loadouts\mk1_drone_operator.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_spec"], _action ] call ace_interact_menu_fnc_addActionToClass;
// JTAC
_action = [ "menu_mk1_inf_jtac", "FAC/JTAC", "", {execVM "\CGQC_2022\loadouts\mk1_JTAC.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_spec"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_lead", "Commandement", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1"], _action ] call ace_interact_menu_fnc_addActionToClass;
// HQ/MobileSat 
_action = [ "menu_mk1_inf_medic", "HQ/MobileSat", "", {execVM "\CGQC_2022\loadouts\mk1_hq.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_lead"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Squad Leader
_action = [ "menu_mk1_inf_eng", "Squad Leader", "", {execVM "\CGQC_2022\loadouts\mk1_squad_leader.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_lead"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Team Leader 
_action = [ "menu_mk1_inf_medic", "Team Leader", "", {execVM "\CGQC_2022\loadouts\mk1_tl.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_lead"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Team Leader CQB
_action = [ "menu_mk1_inf_eng", "Team Leader CQB", "", {execVM "\CGQC_2022\loadouts\mk1_tl_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_lead"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Pilots ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_pilots", "Pilotes", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Helicopter pilot 
_action = [ "menu_mk1_inf_medic", "Helicopter pilot ", "", {execVM "\CGQC_2022\loadouts\mk1_heli_pilot.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_pilots"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Helicopter crew
_action = [ "menu_mk1_inf_eng", "Helicopter crew", "", {execVM "\CGQC_2022\loadouts\mk1_heli_crew.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_pilots"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Jet pilot 
_action = [ "menu_mk1_inf_medic", "Jet pilot ", "", {execVM "\CGQC_2022\loadouts\mk1_jet_pilot.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_pilots"], _action ] call ace_interact_menu_fnc_addActionToClass;
// Tank driver
_action = [ "menu_mk1_inf_eng", "ank driver", "", {execVM "\CGQC_2022\loadouts\mk1_driver_tank.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ TypeOf _source, 0, ["ACE_MainActions", "menu_cgqc", "menu_mk1", "menu_mk1_pilots"], _action ] call ace_interact_menu_fnc_addActionToClass;
