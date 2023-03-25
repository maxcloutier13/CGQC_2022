_crate = _this select 0; 

if (!isNil "_crate") then {
    // --- Ace actions ---------------------------------------------------------------------------------------------------------
    //actionName, name, icon, statement, condition, children, parameter, position, distance, other, modifier
    //_action = [ "menu_cgqc", "CGQC", "CGQC_2022\textures\cgqc_ace_icon", {""}, {true}] call ace_interact_menu_fnc_createAction;
    //_adding = [ _crate, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;

    // Mk1 Loadout switcher ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk1", "Loadouts/Rôles", "CGQC_2022\textures\icon_loadouts", {""}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;

    #include "\cgqc_2022\loadouts\cgqc_loadouts_mk1_spartan_1.sqf";
    #include "\cgqc_2022\loadouts\cgqc_loadouts_mk1_spartan_2.sqf";
    #include "\cgqc_2022\loadouts\cgqc_loadouts_mk1_spartan_3.sqf";
    #include "\cgqc_2022\loadouts\cgqc_loadouts_mk1_spartan_4.sqf";

    // Recon ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk1_recon", "Recon", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Sniper
    _action = [ "menu_mk1_inf_snipe", "Sniper", "", {execVM "\CGQC_2022\loadouts\mk1_role_recon_sniper.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_recon"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Drone Operator 
    _action = [ "menu_mk1_inf_drone", "Drone Operator", "", {execVM "\CGQC_2022\loadouts\mk1_role_recon_drone_operator.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_recon"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // JTAC
    _action = [ "menu_mk1_inf_jtac", "FAC/JTAC", "", {execVM "\CGQC_2022\loadouts\mk1_role_recon_JTAC.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_recon"], _action ] call  ace_interact_menu_fnc_addActionToObject;

    // Pilots ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk1_pilots", "Pilotes", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Helicopter pilot 
    _action = [ "menu_mk1_inf_medic", "Helicopter pilot ", "", {execVM "\CGQC_2022\loadouts\mk1_role_pilot_heli.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Helicopter crew
    _action = [ "menu_mk1_helicrew", "Helicopter crew", "", {execVM "\CGQC_2022\loadouts\mk1_role_pilot_crew.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Jet pilot 
    _action = [ "menu_mk1_inf_medic", "Jet pilot ", "", {execVM "\CGQC_2022\loadouts\mk1_role_pilot_jet.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Tank driver
    _action = [ "menu_mk1_driver", "Tank driver", "", {[1] execVM "\CGQC_2022\loadouts\mk1_role_pilot_tank.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1", "menu_mk1_pilots"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // HQ 
    _action = [ "menu_mk1_inf_hq", "HQ", "", {execVM "\CGQC_2022\loadouts\mk1_role_hq.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1"], _action ] call  ace_interact_menu_fnc_addActionToObject;


    // Mk1 Camo Switcher ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk1_camo", "Camo", "CGQC_2022\textures\icon_camo", {""}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Base/Training uniform 
    _action = [ "menu_mk1_camo_base", "Training - Vert", "", {["tan", false]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Desert uniform 
    _action = [ "menu_mk1_camo_desert", "Desert", "", {["desert", false]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Multicam uniform 
    _action = [ "menu_mk1_camo_multicam", "Multicam", "", {["mcam", false]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Woodland uniform 
    _action = [ "menu_mk1_camo_woodland", "Cadpat", "", {["cadpat", false]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Black uniform 
    _action = [ "menu_mk1_camo_black", "Black", "", {["black", false]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Winter uniform 
    _action = [ "menu_mk1_camo_winter", "Winter", "", {["white", false]execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk1_camo"], _action ] call  ace_interact_menu_fnc_addActionToObject;

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
    _action = [ "menu_skill", "Skills", "CGQC_2022\textures\icon_skills", {""}, {true} ] call ace_interact_menu_fnc_createAction;
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
    _action = [ "skill_sniper", "Sniper", "", {execVM "\cgqc_2022\scripts\mk1_action_ghillie_menu.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ,"menu_skill"], _action ] call  ace_interact_menu_fnc_addActionToObject; 
};