_crate = _this select 0; 

// If ranks are disabled, upgrade the player current rank so he sees all
//if (!cgqc_setting_limit_ranks) then {
//    cgqc_player_rank = 10;
//};

if (!isNil "_crate") then {
    // --- Ace actions ---------------------------------------------------------------------------------------------------------
    //actionName, name, icon, statement, condition, children, parameter, position, distance, other, modifier
    //_action = [ "menu_cgqc", "CGQC", "CGQC_2022\textures\cgqc_ace_icon", {""}, {true}] call ace_interact_menu_fnc_createAction;
    //_adding = [ _crate, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;

    // Mk1 Loadout switcher ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2", "Loadouts/Rôles MK2", "CGQC_2022\textures\icon_loadouts", {""}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;

    // Spartan 1-2-3-4
    #include "\cgqc_2022\loadouts\mk2_loadouts_spartan.sqf";

    // Recon ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_recon", "Recon", "", {""}, {cgqc_player_rank > 3} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Sniper
    _action = [ "menu_mk2_inf_snipe", "Sniper", "", {["sniper", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_recon"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Drone Operator 
    _action = [ "menu_mk2_inf_drone", "Drone Operator", "", {["drone", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_recon"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // JTAC
    _action = [ "menu_mk2_inf_jtac", "FAC/JTAC", "", {["jtac", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_recon"], _action ] call  ace_interact_menu_fnc_addActionToObject;



    // Pilotes ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_pilots", "Griffon", "", {""}, {cgqc_player_rank > 2} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Helicopter pilot 
    _action = [ "menu_mk2_inf_medic", "Helicopter pilot ", "", {["heli_pilot", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 4} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Helicopter crew
    _action = [ "menu_mk2_helicrew", "Helicopter crew", "", {["heli_crew", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Jet pilot 
    _action = [ "menu_mk2_inf_medic", "Jet pilot ", "", {["jet_pilot", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 4} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    
    // Drivers ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_driver", "Centaure", "", {}, {cgqc_player_rank > 1} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Tank Driver
    _action = [ "menu_mk2_tank", "Tank driver", "", {["tank_driver", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 3} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions", "menu_mk2", "menu_mk2_driver"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Tank Crew
    _action = [ "menu_mk2_crew", "Tank Crew", "", {["tank_crew", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions", "menu_mk2", "menu_mk2_driver"], _action ] call  ace_interact_menu_fnc_addActionToObject;

    // HQ 
    _action = [ "menu_mk2_inf_hq", "HQ", "", {["hq", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 5} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call  ace_interact_menu_fnc_addActionToObject;

    // Mk1 Camo Switcher ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_camo", "Camo", "CGQC_2022\textures\icon_camo", {""}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Base/Training uniform 
    _action = [ "menu_mk2_camo_base", "Training - Vert", "", {["tan"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Desert uniform 
    _action = [ "menu_mk2_camo_desert", "Desert", "", {["desert"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Multicam uniform 
    _action = [ "menu_mk2_camo_multicam", "Multicam", "", {["mcam"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Woodland uniform 
    _action = [ "menu_mk2_camo_woodland", "Cadpat", "", {["cadpat"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Black uniform 
    _action = [ "menu_mk2_camo_black", "Black", "", {["black"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Winter uniform 
    _action = [ "menu_mk2_camo_winter", "Winter", "", {["white"]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;

    // Items --------------------------------------------------------------------------------------------------------------
    _action = [ "menu_items", "Items Rapides", "CGQC_2022\textures\icon_items", {""}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    //  Radio1 
    _action = [ "menu_items1", "343", "", {["343"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    //Radio2
    _action = [ "menu_items2", "152", "", {["152"]execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    //Earplugs
    _action = [ "menu_items3", "Earplugs", "", {["earplugs"]execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call  ace_interact_menu_fnc_addActionToObject;

    // Skill switcher ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_skill", "Skills", "CGQC_2022\textures\icon_skills", {""}, {cgqc_player_rank > 2} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Medic
    _action = [ "skill_medic", "Medic", "", {execVM "\CGQC_2022\loadouts\skill_medic.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_skill"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Engineer
    _action = [ "skill_eng", "Ingénieur", "", {execVM "\CGQC_2022\loadouts\skill_engineer.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_skill"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // EOD
    _action = [ "skill_eod", "EOD", "", {execVM "\CGQC_2022\loadouts\skill_EOD.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ,"menu_skill"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Sniper
    _action = [ "skill_sniper", "Sniper", "", {execVM "\cgqc_2022\scripts\mk1_action_ghillie_menu.sqf"}, {cgqc_player_rank > 3} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ,"menu_skill"], _action ] call  ace_interact_menu_fnc_addActionToObject; 
};