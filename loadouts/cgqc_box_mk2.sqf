// mk2 box 
_crate = _this select 0;

waitUntil {sleep 1; cgqc_mk2_arsenal_init_done};
if (!isNil "_crate") then {
    // Zeus lock toggle ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_zeus_lock", "Lock mk2", "", {hint 'Mk2 lock!'; cgqc_mk2_arsenal_locked = true; publicVariable "cgqc_mk2_arsenal_locked"}, {!cgqc_mk2_arsenal_locked && [player] call CGQC_fnc_checkZeus;} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call ace_interact_menu_fnc_addActionToObject;
    _action = [ "menu_zeus_unlock", "Unlock mk2", "", {hint 'Mk2 unlocked!'; cgqc_mk2_arsenal_locked = false; publicVariable "cgqc_mk2_arsenal_locked"}, {cgqc_mk2_arsenal_locked && [player] call CGQC_fnc_checkZeus;} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Mk1 Loadout switcher ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2", "Loadouts/Rôles MK2", "CGQC_2022\textures\icon_loadouts", {""}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions"], _action ] call ace_interact_menu_fnc_addActionToObject;
    
    // Spartan 1-2-3-4 ------------------------------------------------------------------------------------------------------------
    #include "\cgqc_2022\loadouts\mk2_loadouts_spartan.sqf";
    
    // Recon ------------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_recon", "Recon", "", {""}, {cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Sniper
    _action = [ "menu_mk2_inf_snipe", "Sniper", "", {["sniper", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_recon"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Spotter
    _action = [ "menu_mk2_inf_spotter", "Spotter", "", {["spotter", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_recon"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Drone Operator 
    _action = [ "menu_mk2_inf_drone", "Drone Operator", "", {["drone", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_recon"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // JTAC
    _action = [ "menu_mk2_inf_jtac", "FAC/JTAC", "", {["jtac", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_recon"], _action ] call ace_interact_menu_fnc_addActionToObject;
    
    // Pilotes ------------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_pilots", "Griffon", "", {""}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Helicopter pilot 
    _action = [ "menu_mk2_inf_medic", "Helicopter pilot ", "", {["heli_pilot", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 4 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_pilots"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Helicopter crew
    _action = [ "menu_mk2_helicrew", "Helicopter crew", "", {["heli_crew", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_pilots"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Jet pilot 
    _action = [ "menu_mk2_inf_medic", "Jet pilot ", "", {["jet_pilot", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 4 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_pilots"], _action ] call ace_interact_menu_fnc_addActionToObject;
    
    // Drivers ------------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_driver", "Centaure", "", {}, {cgqc_player_rank > 1 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Tank Driver
    _action = [ "menu_mk2_tank", "Tank driver", "", {["tank_driver", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions", "menu_mk2", "menu_mk2_driver"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Tank Crew
    _action = [ "menu_mk2_crew", "Tank Crew", "", {["tank_crew", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions", "menu_mk2", "menu_mk2_driver"], _action ] call ace_interact_menu_fnc_addActionToObject;
    
    // High Command ------------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_highCommand", "High Command", "", {}, {cgqc_player_rank > 5 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // HQ 
    _action = [ "menu_mk2_inf_hq", "HQ", "", {["hq", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_highCommand"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // HQ 
    _action = [ "menu_mk2_inf_sl", "Squad Leader", "", {["sl", 0] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2", "menu_mk2_highCommand"], _action ] call  ace_interact_menu_fnc_addActionToObject;
    
    
    // Mk1 Camo Switcher ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_camo", "Camo", "CGQC_2022\textures\icon_camo", {""}, {!cgqc_perks_ghillie_isOn} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Base/Training uniform 
    _action = [ "menu_mk2_camo_base", "Training - Vert", "", {["tan"] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {cgqc_mk2_role_infantry} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Desert uniform 
    _action = [ "menu_mk2_camo_desert", "Desert", "", {["desert"] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {cgqc_mk2_role_infantry} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Multicam uniform 
    _action = [ "menu_mk2_camo_multicam", "Multicam", "", {["mcam"] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {cgqc_mk2_role_infantry} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Woodland uniform 
    _action = [ "menu_mk2_camo_woodland", "Cadpat", "", {["cadpat"] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {cgqc_mk2_role_infantry} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Black uniform 
    _action = [ "menu_mk2_camo_black", "Black", "", {["black"] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {cgqc_mk2_role_infantry} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Winter uniform 
    _action = [ "menu_mk2_camo_winter", "Winter", "", {["white"] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {cgqc_mk2_role_infantry} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    
    // Items --------------------------------------------------------------------------------------------------------------
    _action = [ "menu_items", "Items Rapides", "CGQC_2022\textures\icon_items", {""}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call ace_interact_menu_fnc_addActionToObject;
    //Radio1 
    _action = [ "menu_items1", "343", "", {["343"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call ace_interact_menu_fnc_addActionToObject;
    //Radio2
    _action = [ "menu_items2", "152", "", {["152"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call ace_interact_menu_fnc_addActionToObject;
    //Radio3
    _action = [ "menu_items3", "148", "", {["148"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call ace_interact_menu_fnc_addActionToObject;
    //Earplugs
    _action = [ "menu_items3", "Earplugs", "", {["earplugs"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call ace_interact_menu_fnc_addActionToObject;
    //Bandages
    _action = [ "menu_items4", "Bandages x10", "", {["bandages"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call ace_interact_menu_fnc_addActionToObject;
    //Painkillers
    _action = [ "menu_items5", "Painkillers x5", "", {["painkillers"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call ace_interact_menu_fnc_addActionToObject;
    //m72a7
    _action = [ "menu_items6", "Jetable: m72a7 LAW", "", {["law"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call ace_interact_menu_fnc_addActionToObject;
    //m136
    _action = [ "menu_items7", "Jetable: m136", "", {["m136"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_items"], _action ] call ace_interact_menu_fnc_addActionToObject;

    // Skill switcher ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_skill", "Skills", "CGQC_2022\textures\icon_skills", {""}, {cgqc_player_rank > 2 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Medic
    _action = [ "skill_medic", "Medic", "", {execVM "\CGQC_2022\loadouts\skill_medic.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_skill"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Engineer
    _action = [ "skill_eng", "Ingénieur", "", {execVM "\CGQC_2022\loadouts\skill_engineer.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_skill"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // EOD
    _action = [ "skill_eod", "EOD", "", {execVM "\CGQC_2022\loadouts\skill_EOD.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ,"menu_skill"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Sniper
    _action = [
        "skill_sniper", 
        "Sniper", 
        "", 
        {cgqc_perks_recon = true},
        {(cgqc_player_rank > 3 || !cgqc_mk2_arsenal_locked || cgqc_flag_isTraining) && (isNil "cgqc_perk_ghillie")} 
    ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ,"menu_skill"], _action ] call ace_interact_menu_fnc_addActionToObject; 


 // Mk2 arsenal ---------------------------------------------------------------------------------------------------

    // Unlocked version 
    _action = [
        "menu_mk2_unlocked", 
        "Arsenal: Unlocked", 
        "CGQC_2022\textures\icon_arsenal", 
        {[0] execVM "\CGQC_2022\functions\loadMk2.sqf"}, 
        {!cgqc_mk2_arsenal_locked} 
    ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    
    // Soldier - 1 
    _action = [ "menu_mk2_1", "Arsenal: Soldat", "CGQC_2022\textures\icon_arsenal", {[1] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {(cgqc_mk2_arsenal_locked && cgqc_player_rank == 1)} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Caporal - 2 
    _action = [ "menu_mk2_2", "Arsenal: Caporal", "CGQC_2022\textures\icon_arsenal", {[2] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_mk2_arsenal_locked && cgqc_player_rank == 2} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // CaporalC - 3 
    _action = [ "menu_mk2_3", "Arsenal: Caporal-Chef", "CGQC_2022\textures\icon_arsenal", {[3] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_mk2_arsenal_locked && cgqc_player_rank == 3} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Sergent - 4 
    _action = [ "menu_mk2_4", "Arsenal: Sergent", "CGQC_2022\textures\icon_arsenal", {[4] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_mk2_arsenal_locked && cgqc_player_rank == 4} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Adjudent - 5 
    _action = [ "menu_mk2_5", "Arsenal: Adjudent", "CGQC_2022\textures\icon_arsenal", {[0] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_mk2_arsenal_locked && cgqc_player_rank == 5} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Sous-Lieutenant - 6
    _action = [ "menu_mk2_6", "Arsenal: Sous-Lieutenant", "CGQC_2022\textures\icon_arsenal", {[0] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_mk2_arsenal_locked && cgqc_player_rank == 6} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Lieutenant - 7
    _action = [ "menu_mk2_7", "Arsenal: Lieutenant", "CGQC_2022\textures\icon_arsenal", {[0] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_mk2_arsenal_locked && cgqc_player_rank == 7} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Capitaine - 8 
    _action = [ "menu_mk2_8", "Arsenal: Capitaine", "CGQC_2022\textures\icon_arsenal", {[0] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_mk2_arsenal_locked && cgqc_player_rank == 8} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Major - 9 
    _action = [ "menu_mk2_9", "Arsenal: Major", "CGQC_2022\textures\icon_arsenal", {[0] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_mk2_arsenal_locked && cgqc_player_rank == 9} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    //  Lieutenant-Colonel- 10 
    _action = [ "menu_mk2_10", "Arsenal: Lieutenant-Colonel", "CGQC_2022\textures\icon_arsenal", {[0] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_mk2_arsenal_locked && cgqc_player_rank == 10} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Colonel - 11
    _action = [ "menu_mk2_11", "Arsenal: Colonel", "CGQC_2022\textures\icon_arsenal", {[0] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_mk2_arsenal_locked && cgqc_player_rank == 11} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Complet -  
    _action = [ "menu_mk2_5", "Arsenal: Complet", "CGQC_2022\textures\icon_arsenal", {[0] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_flag_isTraining} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Zeus
    _action = [ "menu_mk2_zeus", "Arsenal: Zeus", "CGQC_2022\textures\icon_arsenal", {[5] execVM "\CGQC_2022\functions\loadMk2.sqf"}, {cgqc_flag_isTraining || [player] call CGQC_fnc_checkZeus;} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
};