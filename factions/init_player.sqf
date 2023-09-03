[] spawn {
    // Wait until Core is finished initializing.
    waitUntil {sleep 1;cgqc_player_rank_found};

    _version = "2.8";
    // Client-side code
    player setVariable ["cgqc_version_2023", _version, true]; // Set the client's mod version

    if (cgqc_mission_dro) then {
        waitUntil {sleep 1;cgqc_mission_dro_ready};
    };
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

    // Check if loadout exists and loads it
    [] call CGQC_fnc_checkLoadout;
};