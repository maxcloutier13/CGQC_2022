waitUntil {!isNull (findDisplay 46)};
waitUntil {cgqc_postInitClient_done};
_type = _this select 0;
_section = _this select 1;
_auRepos = _this select 2;

hintc "mk2_role_switch wtf";sleep 0.5;

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
cgqc_mk2_role = "";
cgqc_mk2_role_infantry = true;
cgqc_mk2_role_removed = false;

// Check if player in chill mode
if (cgqc_player_chill) then {
    ["ready"] call CGQC_fnc_perksBasic;
    waitUntil {!cgqc_player_chill};
};

// ===== Remove items ======================================================
#include "\cgqc_2022\loadouts\mk2\remove_all.sqf"
waitUntil {cgqc_mk2_role_removed};
switch (_type) do {
    // Command ========================================================================
	case "hq":{ 
        _perks = "hq";
        _uniform = "command";
        _loadout = "hq";
        _radios = "hq";
        cgqc_mk2_role = "HQ";
	};
    case "sl":{ 
        _perks = "hq";
        _uniform = "command";
        _loadout = "sl";
        _radios = "hq";
        cgqc_mk2_role = "Squad Leader";
	};
    case "tl_carb":{
        _perks = "tl";
        _uniform = "command";
        _loadout = "tl_carb";
        _radios = "spartan_1";
        cgqc_mk2_role = "Team Leader";
    };
    case "tl_cqb":{
        _perks = "tl";
        _uniform = "command";
        _loadout = "tl_cqb";
        _radios = "spartan_1";
        cgqc_mk2_role = "Team Leader";
    };
    // Infantry  ==========================================================================
     case "rifle_cqb":{
        _perks = "inf";
        _uniform = "inf_light";
        _loadout = "rifle_cqb";
        _radios = "spartan";
        cgqc_mk2_role = "Rifleman (Mk18)";
    };
    case "rifle_carb":{
        _perks = "inf";
        _uniform = "inf_light";
        _loadout = "rifle_carb";
        _radios = "spartan";
        cgqc_mk2_role = "Rifleman (m4)";
    };
    case "rifle_m16":{
        _perks = "inf";
        _uniform = "inf_light";
        _loadout = "rifle_m16";
        _radios = "spartan";
        cgqc_mk2_role = "Rifleman (m16)";
    };
    case "rifle_grenade":{
        _perks = "inf";
        _uniform = "inf_medium";
        _loadout = "rifle_gren";
        _radios = "spartan";
        cgqc_mk2_role = "Grenadier";
    };
    // AT ==========================================================================
    case "at_jav":{
        _perks = "at";
        _uniform = "inf_heavy";
        _loadout = "at_jav";
        _radios = "spartan";
        cgqc_mk2_role = "Anti-Tank (Javelin)";
    };
    case "at_maaws":{
        _perks = "at";
        _uniform = "inf_heavy";
        _loadout = "at_maaws";
        _radios = "spartan";
        cgqc_mk2_role = "Anti-Tank (MAAWS)";
    };
    // MG ==========================================================================
    case "hmg":{
        _perks = "mg";
        _uniform = "inf_medium";
        _loadout = "hmg";
        _radios = "spartan";
        cgqc_mk2_role = "Machinegunner (Heavy)";
    };
    case "lmg":{
        _perks = "mg";
        _uniform = "inf_medium";
        _loadout = "lmg";
        _radios = "spartan";
        cgqc_mk2_role = "Machinegunner (Light)";
    };
    // Specialists ==========================================================================
    case "eng":{
        _perks = "eng";
        _uniform = "eng";
        _loadout = "eng";
        _radios = "spartan";
        cgqc_mk2_role = "Engineer";
    };
    case "med":{
        _perks = "med";
        _uniform = "med";
        _loadout = "med";
        _radios = "spartan_2";
        cgqc_mk2_role = "Medic";
    };
    case "mrksm":{
        _perks = "inf";
        _uniform = "inf_light";
        _loadout = "mrksm";
        _radios = "spartan";
        cgqc_mk2_role = "Designated Marksman";
    };
    case "mortar":{
        _perks = "mortar";
        _uniform = "inf_heavy";
        _loadout = "mortar";
        _radios = "spartan_2";
        cgqc_mk2_role = "Mortier Léger";
    };
    // Recon ==========================================================================
    case "drone":{
        _perks = "recon";
        _uniform = "recon";
        _loadout = "drone";
        _radios = "recon";
        cgqc_mk2_role = "Drone Operator";
    };
    case "sniper":{
        _perks = "recon";
        _uniform = "recon";
        _loadout = "sniper";
        _radios = "recon";
        cgqc_mk2_role = "Sniper m200";
    };
    case "sniper_ebr":{
        _perks = "recon";
        _uniform = "recon";
        _loadout = "sniper_ebr";
        _radios = "recon";
        cgqc_mk2_role = "Sniper m14EBR";
    };
    case "spotter":{
        _perks = "recon";
        _uniform = "recon";
        _loadout = "spotter";
        _radios = "recon";
        cgqc_mk2_role = "Spotter";
    };
    case "jtac":{
        _perks = "recon";
        _uniform = "jtac";
        _loadout = "jtac";
        _radios = "jtac";
        cgqc_mk2_role = "JTAC";
    };
    // Pilots and crews ===============================================================
    case "heli_pilot":{ 
        _perks = "heli_pilot";
        _uniform = "heli_pilot";
        _loadout = "heli";
        _radios = "griffon_pieton";
        cgqc_mk2_role = "Helicopter Pilot";
        cgqc_mk2_role_infantry = false;
    };
    case "heli_crew":{
        _perks = "heli_crew";
        _uniform = "heli_crew";
        _loadout = "heli";
        _radios = "griffon_pieton";
        cgqc_mk2_role = "Helicopter Crew";
        cgqc_mk2_role_infantry = false;
    };
    case "jet_pilot":{ 
        _perks = "jet_pilot";
        _uniform = "jet_pilot";
        _loadout = "jet_pilot";
        _radios = "griffon_pieton";
        cgqc_mk2_role = "Jet Pilot";
        cgqc_mk2_role_infantry = false;
    };
    case "tank_driver":{
        _perks = "tank_driver";
        _uniform = "tank_driver";
        _loadout = "tank";
        _radios = "centaure_pieton";
        cgqc_mk2_role = "Tank Driver";
        cgqc_mk2_role_infantry = false;
    };
    case "tank_crew":{
        _perks = "tank_crew";
        _uniform = "tank_driver";
        _loadout = "tank";
        _radios = "centaure_pieton";
        cgqc_mk2_role = "Tank Crew";
        cgqc_mk2_role_infantry = false;
    };
    default	{
		hintc "mk2_role_switch.sqf fail";
	};
};


// Start transition
if (!cgqc_intro_running) then {
    [] execVM "\CGQC_2022\scripts\transition.sqf";
};
mk2_role_switch_perks_done = false;
mk2_role_switch_uniform = false;
mk2_role_switch_loadout = false;

// Perks and traits setup 
waitUntil {sleep 0.5;!isNil "_perks"};
[_perks] execVM "\CGQC_2022\loadouts\mk2_role_switch_perks.sqf";
waitUntil {sleep 0.5;mk2_role_switch_perks_done};
// Add Uniform
waitUntil {sleep 0.5;!isNil "_uniform"};
[_uniform] execVM "\CGQC_2022\loadouts\mk2_role_switch_uniform.sqf";
waitUntil {sleep 0.5;mk2_role_switch_uniform};
// Add loadout
waitUntil {sleep 0.5;!isNil "_loadout"};
[_loadout] execVM "\CGQC_2022\loadouts\mk2_role_switch_loadout.sqf";
waitUntil {sleep 0.5;mk2_role_switch_loadout};
// Set radios 
waitUntil {sleep 0.5;!isNil "_radios"};
sleep 0.5;
[_radios, _section] execVM "\cgqc\functions\fnc_setRadios.sqf";
//[_radios, _section] execVM "\cgqc_2022\loadouts\mk2_role_switch_radios.sqf";

//Set patch back
player setVariable ["BIS_fnc_setUnitInsignia_class", nil]; //Remove patch
[ player, cgqc_player_patch ] call BIS_fnc_setUnitInsignia;

// Chill mode
if !(isNil "_auRepos") then {
    ["chill"] call CGQC_fnc_perksBasic;
};
// Lower gun 
player action ['SwitchWeapon', player, player, 250];