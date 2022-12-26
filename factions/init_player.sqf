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
    cgqc_mk2_arsenal_6 = [];
    
    // Prep les variables de l'arsenal dynamique
    #include "\cgqc_2022\loadouts\arsenal\init_arsenal.sqf";

	// Refuel actions ---------------------------------------------------------------------------------
	_action = [ "menu_self_rrr", "Maintenance Véhicule", "CGQC_2022\textures\icon_maintenance", {['normal'] execVM "\cgqc_2022\scripts\cgqc_refuel_heli.sqf"}, {cgqc_flag_supply && (vehicle player isKindOf "Air") && (driver vehicle player isEqualTo player)} ] call ace_interact_menu_fnc_createAction;
	_adding = [ player, 1, ["ACE_SelfActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
	// Fast refuel
	_action = [ "menu_self_rrr_short", "Maintenance Rapide", "CGQC_2022\textures\icon_maintenance", {['short'] execVM "\cgqc_2022\scripts\cgqc_refuel_heli.sqf"}, {cgqc_flag_supply_rapide && (vehicle player isKindOf "Air") && (driver vehicle player isEqualTo player)} ] call ace_interact_menu_fnc_createAction;
	_adding = [ player, 1, ["ACE_SelfActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
};
