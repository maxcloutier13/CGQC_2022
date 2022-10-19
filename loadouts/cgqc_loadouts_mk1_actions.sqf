_crate = _this select 0;
// --- Ace actions ---------------------------------------------------------------------------------------------------------
//_action = [ "menu_cgqc", "CGQC", "CGQC_2022\textures\cgqc_ace_icon", {""}, {true} ] call ace_interact_menu_fnc_createAction;
//_adding = [ _crate, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;

/*
// Base stuff --------------------------------------------------------------------------------------------------------------
_action = [ "menu_basic", "Médical/EDC", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions","menu_cgqc"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Meds to uniform 
_action = [ "meds_uniform", "Médical -> Uniforme", "", {execVM "\CGQC_2022\loadouts\meds_uniform.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions","menu_cgqc","menu_basic"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Meds to backpack
_action = [ "meds_pack", "Médical -> Sac à dos", "", {execVM "\CGQC_2022\loadouts\meds_backpack.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions","menu_cgqc","menu_basic"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Items to uniform 
_action = [ "base_uniform", "Med+Items -> Uniforme", "", {execVM "\CGQC_2022\loadouts\base_uniform.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions","menu_cgqc","menu_basic"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Items to backpack
_action = [ "base_pack", "Med+Items -> Sac à dos", "", {execVM "\CGQC_2022\loadouts\base_backpack.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions","menu_cgqc","menu_basic"], _action ] call  ace_interact_menu_fnc_addActionToObject;
*/

// Mk1 Loadout switcher ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1", "Change de Loadouts/Rôles", "CGQC_2022\textures\icon_loadouts", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Infanterie ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_inf", "Infanterie", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman 
_action = [ "menu_mk1_inf_RF", "Rifleman", "", {execVM "\CGQC_2022\loadouts\mk1_rifleman_carbine.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Rifleman CQB 
_action = [ "menu_mk1_inf_RFCQB", "Rifleman CQB", "", {execVM "\CGQC_2022\loadouts\mk1_rifleman_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic 
_action = [ "menu_mk1_inf_medic", "Medic", "", {execVM "\CGQC_2022\loadouts\mk1_Medic.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "menu_mk1_inf_eng", "Engineer", "", {execVM "\CGQC_2022\loadouts\mk1_Engineer.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_inf"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Specialists ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_spec", "Spécialistes", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// MG (Light) 
_action = [ "menu_mk1_inf_LMG", "Light machinegun", "", {execVM "\CGQC_2022\loadouts\mk1_lmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  MG (Heavy) 
_action = [ "menu_mk1_inf_HMG", "Heavy machinegun", "", {execVM "\CGQC_2022\loadouts\mk1_hmg.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Marksman 
_action = [ "menu_mk1_inf_marks", "Marksman", "", {execVM "\CGQC_2022\loadouts\mk1_marksman.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Sniper
_action = [ "menu_mk1_inf_snipe", "Sniper", "", {execVM "\CGQC_2022\loadouts\mk1_sniper.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (MAAWS)
_action = [ "menu_mk1_inf_maaws", "Anti-Tank (MAAWS)", "", {execVM "\CGQC_2022\loadouts\mk1_at_maaws.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Anti-Tank (Javelin) 
_action = [ "menu_mk1_inf_jav", "Anti-Tank (Javelin)", "", {execVM "\CGQC_2022\loadouts\mk1_at_javelin.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Drone Operator 
_action = [ "menu_mk1_inf_drone", "Drone Operator", "", {execVM "\CGQC_2022\loadouts\mk1_drone_operator.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// JTAC
_action = [ "menu_mk1_inf_jtac", "FAC/JTAC", "", {execVM "\CGQC_2022\loadouts\mk1_JTAC.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_spec"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Lead ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_lead", "Commandement", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// HQ/MobileSat 
_action = [ "menu_mk1_inf_medic", "HQ/MobileSat", "", {execVM "\CGQC_2022\loadouts\mk1_hq.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Squad Leader
_action = [ "menu_mk1_inf_eng", "Squad Leader", "", {execVM "\CGQC_2022\loadouts\mk1_squad_leader.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader 
_action = [ "menu_mk1_inf_medic", "Team Leader", "", {execVM "\CGQC_2022\loadouts\mk1_tl.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Team Leader CQB
_action = [ "menu_mk1_inf_eng", "Team Leader CQB", "", {execVM "\CGQC_2022\loadouts\mk1_tl_cqb.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_lead"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Pilots ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_pilots", "Pilotes", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Helicopter pilot 
_action = [ "menu_mk1_inf_medic", "Helicopter pilot ", "", {execVM "\CGQC_2022\loadouts\mk1_heli_pilot.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Helicopter crew
_action = [ "menu_mk1_inf_eng", "Helicopter crew", "", {execVM "\CGQC_2022\loadouts\mk1_heli_crew.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Jet pilot 
_action = [ "menu_mk1_inf_medic", "Jet pilot ", "", {execVM "\CGQC_2022\loadouts\mk1_jet_pilot.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Tank driver
_action = [ "menu_mk1_inf_eng", "Tank driver", "", {execVM "\CGQC_2022\loadouts\mk1_driver_tank.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1", "menu_mk1_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;

// Mk1 Camo Switcher ---------------------------------------------------------------------------------------------------------
_action = [ "menu_mk1_camo", "Change de Camo", "CGQC_2022\textures\icon_camo", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Base/Training uniform 
_action = [ "menu_mk1_camo_base", "Training - Vert", "", {["tan"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Desert uniform 
_action = [ "menu_mk1_camo_desert", "Desert", "", {["desert"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Multicam uniform 
_action = [ "menu_mk1_camo_multicam", "Multicam", "", {["mcam"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Woodland uniform 
_action = [ "menu_mk1_camo_woodland", "Cadpat", "", {["cadpat"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Black uniform 
_action = [ "menu_mk1_camo_black", "Black", "", {["black"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Winter uniform 
_action = [ "menu_mk1_camo_winter", "Winter", "", {["white"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;

// Items --------------------------------------------------------------------------------------------------------------
_action = [ "menu_items", "Items Rapides", "CGQC_2022\textures\icon_items", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  Radio1 
_action = [ "menu_items1", "343", "", {["343"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_items"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//Radio2
_action = [ "menu_items2", "152", "", {["152"]execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_items"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//Earplugs
_action = [ "menu_items3", "Earplugs", "", {["earplugs"]execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_items"], _action ] call  ace_interact_menu_fnc_addActionToObject;

// Skill switcher ---------------------------------------------------------------------------------------------------------
_action = [ "menu_skill", "Skills", "CGQC_2022\textures\icon_skills", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Medic
_action = [ "skill_medic", "Medic", "", {execVM "\CGQC_2022\loadouts\role_medic.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_skill"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Engineer
_action = [ "skill_eng", "Ingénieur", "", {execVM "\CGQC_2022\loadouts\role_engineer.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_skill"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// EOD
_action = [ "skill_eod", "EOD", "", {execVM "\CGQC_2022\loadouts\role_EOD.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions","menu_skill"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Sniper
_action = [ "skill_sniper", "Sniper", "", {execVM "\cgqc_2022\scripts\mk1_action_ghillie_menu.sqf"}, {ghillie_isOn == 0} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions","menu_skill"], _action ] call  ace_interact_menu_fnc_addActionToObject;

// Old school actions
// _crate addAction ["---- Change de rôle mk1 (garde loadout)------", "\CGQC_2022\loadouts\empty.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Medic", "\CGQC_2022\loadouts\role_medic.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Ingénieur", "\CGQC_2022\loadouts\role_engineer.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- EOD", "\CGQC_2022\loadouts\role_EOD.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["---- Change de loadout mk1------", "\CGQC_2022\loadouts\empty.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Rifleman - Carbine", "\CGQC_2022\loadouts\mk1_rifleman_carbine.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Rifleman - CQB", "\CGQC_2022\loadouts\mk1_rifleman_cqb.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Medic", "\CGQC_2022\loadouts\mk1_medic.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Engineer", "\CGQC_2022\loadouts\mk1_engineer.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- HQ/MobileSat", "\CGQC_2022\loadouts\mk1_hq.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Squad Leader", "\CGQC_2022\loadouts\mk1_squad_leader.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Team/Squad Leader", "\CGQC_2022\loadouts\mk1_tl.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Team/Squad Leader CQB", "\CGQC_2022\loadouts\mk1_tl_cqb.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- MG (Light)", "\CGQC_2022\loadouts\mk1_lmg.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- MG (Heavy)", "\CGQC_2022\loadouts\mk1_hmg.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Marksman", "\CGQC_2022\loadouts\mk1_marksman.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Sniper", "\CGQC_2022\loadouts\mk1_sniper.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Drone Operator", "\CGQC_2022\loadouts\mk1_drone_operator.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- FAC/JTAC", "\CGQC_2022\loadouts\mk1_JTAC.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Anti-Tank (MAAWS)", "\CGQC_2022\loadouts\mk1_at_maaws.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Anti-Tank (Javelin)", "\CGQC_2022\loadouts\mk1_at_javelin.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Helicopter Pilot", "\CGQC_2022\loadouts\mk1_heli_pilot.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Helicopter Crew", "\CGQC_2022\loadouts\mk1_heli_crew.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Jet Pilot", "\CGQC_2022\loadouts\mk1_jet_pilot.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
// _crate addAction ["- Tank Driver/Crew", "\CGQC_2022\loadouts\mk1_driver_tank.sqf", [], 6, true, true, "", "(_this distance _target) < 5"];
