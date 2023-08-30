// --- mk2_role_switch ----------------------------------------------------------
// Start everything player related
params ["_type"];
	diag_log format ["[CGQC_FNC] trainingMortar %1 started", _type];

cgqc_roleSwitch_done = false;

if (hasInterface) then {
    disableUserInput true;
    _type = _this select 0;
    _section = _this select 1;
    _auRepos = _this select 2;

    if (cgqc_setting_show_transition) then {
    // Fade to black  
        cutText ["", "BLACK FADED", 999];
        titleText ["", "PLAIN"];
    };

    // ===== Prep and transition ======================================================
    _perks = "";
    _uniform = "";
    _loadout = "";
    _radios = "";
    cgqc_player_role = "";
    cgqc_player_role_infantry = true;
    cgqc_player_role_removed = false;

    // Check if player in chill mode
    if (cgqc_player_chill) then {
        ["ready", true] call CGQC_fnc_perksBasic;
        waitUntil {!cgqc_player_chill};
    };

    // ===== Remove items ======================================================
    #include "\cgqc_2022\loadouts\mk2\remove_all.sqf"
    waitUntil {cgqc_player_role_removed};
    switch (_type) do {
        // Command ========================================================================
        case "hq":{ 
            _perks = "hq";
            _uniform = "command";
            _loadout = "hq";
            _radios = "sl";
            cgqc_player_role = "HQ";
        };
        case "sl":{ 
            _perks = "hq";
            _uniform = "command";
            _loadout = "sl";
            _radios = "sl";
            cgqc_player_role = "Squad Leader";
        };
        case "tl_carb":{
            _perks = "tl";
            _uniform = "command";
            _loadout = "tl_carb";
            _radios = "tl";
            cgqc_player_role = "Team Leader";
        };
        case "tl_cqb":{
            _perks = "tl";
            _uniform = "command";
            _loadout = "tl_cqb";
            _radios = "tl";
            cgqc_player_role = "Team Leader";
        };
        case "tl_no_gl":{
            _perks = "tl";
            _uniform = "command";
            _loadout = "tl_no_gl";
            _radios = "tl";
            cgqc_player_role = "Team Leader";
        };
        // Infantry  ==========================================================================
        case "rifle_cqb":{
            _perks = "inf";
            _uniform = "inf_light";
            _loadout = "rifle_cqb";
            _radios = "inf";
            cgqc_player_role = "Rifleman (Mk18)";
        };
        case "rifle_carb":{
            _perks = "inf";
            _uniform = "inf_light";
            _loadout = "rifle_carb";
            _radios = "inf";
            cgqc_player_role = "Rifleman (m4)";
        };
        case "rifle_m16":{
            _perks = "inf";
            _uniform = "inf_light";
            _loadout = "rifle_m16";
            _radios = "inf";
            cgqc_player_role = "Rifleman (m16)";
        };
        case "rifle_grenade":{
            _perks = "inf";
            _uniform = "inf_medium";
            _loadout = "rifle_gren";
            _radios = "inf";
            cgqc_player_role = "Grenadier";
        };
        // AT ==========================================================================
        case "at_jav":{
            _perks = "at";
            _uniform = "inf_heavy";
            _loadout = "at_jav";
            _radios = "inf";
            cgqc_player_role = "Anti-Tank (Javelin)";
        };
        case "at_maaws":{
            _perks = "at";
            _uniform = "inf_heavy";
            _loadout = "at_maaws";
            _radios = "inf";
            cgqc_player_role = "Anti-Tank (MAAWS)";
        };
        // MG ==========================================================================
        case "ar":{
            _perks = "mg";
            _uniform = "inf_medium";
            _loadout = "ar";
            _radios = "inf";
            cgqc_player_role = "Auto-Rifleman";
        };
        case "hmg":{
            _perks = "mg";
            _uniform = "inf_medium";
            _loadout = "hmg";
            _radios = "inf";
            cgqc_player_role = "Machinegunner (Heavy)";
        };
        case "lmg":{
            _perks = "mg";
            _uniform = "inf_medium";
            _loadout = "lmg";
            _radios = "inf";
            cgqc_player_role = "Machinegunner (Light)";
        };
        // Specialists ==========================================================================
        case "eng":{
            _perks = "eng";
            _uniform = "eng";
            _loadout = "eng";
            _radios = "inf";
            cgqc_player_role = "Engineer";
        };
        case "saboteur": {
             _perks = "eng";
            _uniform = "eng";
            _loadout = "saboteur";
            _radios = "inf";
            cgqc_player_role = "Saboteur";
        };
        case "med":{
            _perks = "med";
            _uniform = "med";
            _loadout = "med";
            _radios = "medic";
            cgqc_player_role = "Medic";
        };
        case "mrksm":{
            _perks = "inf";
            _uniform = "inf_light";
            _loadout = "mrksm";
            _radios = "inf";
            cgqc_player_role = "Designated Marksman";
        };
        case "mortar":{
            _perks = "mortar";
            _uniform = "inf_heavy";
            _loadout = "mortar";
            _radios = "recon";
            cgqc_player_role = "Mortier Léger";
        };
        // Recon ==========================================================================
        
        case "drone":{
            _perks = "recon";
            _uniform = "recon";
            _loadout = "drone";
            _radios = "recon";
            cgqc_player_role = "Drone Operator";
        };
        case "sniper":{
            _perks = "recon";
            _uniform = "recon";
            _loadout = "sniper";
            _radios = "recon";
            cgqc_player_role = "Sniper m200";
        };
        case "sniper_ebr":{
            _perks = "recon";
            _uniform = "recon";
            _loadout = "sniper_ebr";
            _radios = "recon";
            cgqc_player_role = "Sniper m14EBR";
        };
        case "spotter":{
            _perks = "recon";
            _uniform = "recon";
            _loadout = "spotter";
            _radios = "recon";
            cgqc_player_role = "Spotter";
        };
        case "jtac":{
            _perks = "recon";
            _uniform = "jtac";
            _loadout = "jtac";
            _radios = "jtac";
            cgqc_player_role = "JTAC";
        };
        // Pilots and crews ===============================================================
        case "heli":{ 
            _perks = "heli";
            _uniform = "heli";
            _loadout = "heli";
            _radios = "griffon_pieton";
            cgqc_player_role = "Helicopter Pilot";
            cgqc_player_role_infantry = false;
        };
        case "heli_crew":{
            _perks = "heli_crew";
            _uniform = "heli_crew";
            _loadout = "heli";
            _radios = "griffon_pieton";
            cgqc_player_role = "Helicopter Crew";
            cgqc_player_role_infantry = false;
        };
        case "jet_pilot":{ 
            _perks = "jet_pilot";
            _uniform = "jet_pilot";
            _loadout = "jet_pilot";
            _radios = "griffon_pieton";
            cgqc_player_role = "Jet Pilot";
            cgqc_player_role_infantry = false;
        };
        case "driver":{
            _perks = "driver";
            _uniform = "driver";
            _loadout = "tank";
            _radios = "centaure_pieton";
            cgqc_player_role = "Tank Driver";
            cgqc_player_role_infantry = false;
        };
        case "tank_crew":{
            _perks = "tank_crew";
            _uniform = "driver";
            _loadout = "tank";
            _radios = "centaure_pieton";
            cgqc_player_role = "Tank Crew";
            cgqc_player_role_infantry = false;
        };
        default	{
            hintc "mk2_role_switch.sqf fail";
        };
    };

    mk2_role_switch_perks_done = false;
    mk2_role_switch_uniform = false;
    mk2_role_switch_loadout = false;

    // Perks and traits setup 
    [_perks] call cgqc_fnc_switchPerks;
    // Add Uniform
    [_uniform] execVM "\CGQC_2022\loadouts\mk2_role_switch_uniform.sqf";
    // Add loadout
    [_loadout] execVM "\CGQC_2022\loadouts\mk2_role_switch_loadout.sqf";

    // Get and set radios
    [_radios, _section] call CGQC_getRadiosPresets;

    //Set patch back
    player setVariable ["BIS_fnc_setUnitInsignia_class", nil]; //Remove patch
    [ player, cgqc_player_patch ] call BIS_fnc_setUnitInsignia;

    // Chill mode
    //if (_auRepos) then {
    //     ["chill", true] call CGQC_fnc_perksBasic;
    //};
    // Lower gun 
    player action ['SwitchWeapon', player, player, 250];
    // Start transition

    waitUntil {sleep 0.5;!cgqc_intro_running};
    ["role", true] call CGQC_fnc_showTransition;
    cgqc_roleSwitch_done = true;
    disableUserInput false;
};