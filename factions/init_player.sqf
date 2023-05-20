[] spawn { 
    // Wait until Core is finished initializing.
    waitUntil {sleep 1;cgqc_player_rank_found};

    // Variables pour le ghillie up kit
    ghillie_menu = 0;
    ghillie_isOn = 0;
    ghillie_uniform = "";

    // ==== Arsenal mk2 ==================================================================================================
    cgqc_mk2_arsenal_1 = [];
    cgqc_mk2_arsenal_2 = [];
    cgqc_mk2_arsenal_3 = [];
    cgqc_mk2_arsenal_4 = [];
    cgqc_mk2_arsenal_5 = [];
    cgqc_mk2_arsenal_8 = [];
    
    // Prep les variables de l'arsenal dynamique
    #include "\cgqc_2022\loadouts\arsenal\init_arsenal.sqf";

    _unit = typeOf player;
    switch (_unit) do {
        // == Training ================================================================
        case "cgqc_soldat_moderne";
        case "cgqc_officer_1_moderne";
        case "cgqc_officer_moderne": {
            [] spawn CGQC_fnc_initTraining;
            break;
        };
        // == Command ================================================================
        case "CGQC_units_mk1_0_HQ":{
            ["hq", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_0_TeamLeader_Carbine":{
            ["tl_carb", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_0_TeamLeader_CQB":{
            ["tl_cqb", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        // == Infantry ================================================================
        case "CGQC_units_mk1_1_Rifleman_CQB":{
            ["rifle_cqb", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_1_Rifleman_Carbine":{
            ["rifle_carb", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_1_Rifleman_full":{
            ["rifle_m16", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_1_Rifleman_grenadier":{
            ["rifle_grenade", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        // == Specialists ================================================================
        case "CGQC_units_mk1_3_AT_MAAWS":{
            ["at_maaws", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_3_AT_Javelin":{
            ["at_jav", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_2_LMG":{
            ["lmg", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_2_HMG":{
            ["hmg", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_1_Engineer":{
            ["eng", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_1_Medic":{
            ["med", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_2_Marksman":{
            ["mrksm", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        // == Recon ================================================================
        case "CGQC_units_mk1_0_Drone_operator":{
            ["drone", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_0_JTAC":{
            ["jtac", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_2_Sniper":{
            ["sniper", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_2_Sniper_ebr":{
            ["sniper_ebr", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_2_Spotter":{
            ["spotter", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        // == Pilots ================================================================
        case "CGQC_units_mk1_4_Pilot_heli":{
            ["heli_pilot", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_4_crew_heli":{
            ["heli_crew", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        //case "CGQC_units_mk1_4_Pilot_Jet":{
        //    ["", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
        //};
        // == Drivers ================================================================
        case "CGQC_units_mk1_4_Tank_Driver":{
            ["tank_driver", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_4_Tank_Crew":{
            ["tank_crew", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            break;
        };
        // == Divers ================================================================
        case "CGQC_units_mk1_5_Diver_TL":{
            ["tl_carb", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            ["diver", true] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_5_Diver_sniper":{
            ["sniper_ebr", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";            
            ["diver", true] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_5_Diver_Spotter":{
            ["spotter", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            ["diver", true] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf";
            break;
        };
        case "CGQC_units_mk1_5_Diver_Engineer":{
            ["eng", 1, true] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
            ["diver", true] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf";
            break;
        };
    };
};

