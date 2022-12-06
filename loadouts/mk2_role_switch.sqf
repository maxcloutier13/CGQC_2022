_type = _this select 0;
_section = _this select 1;
_perks = "";
_uniform = "";
_loadout = "";
_radios = "";
cgqc_mk2_role = "";

// ===== Prep and transition ======================================================
waitUntil {!isNull (findDisplay 46)};
execVM "\CGQC_2022\scripts\transition.sqf";
disableUserInput true;
sleep 2;

// ===== Remove items ======================================================
#include "\cgqc_2022\loadouts\mk2\remove_all.sqf"

switch (_type)
do
{
    // Command ========================================================================
	case "hq":{
        _perks = "hq";
        _uniform = "command";
        _loadout = "hq";
        _radios = "hq";
        cgqc_mk2_role = "HQ";
	};
    case "tl_carb":{
        _perks = "tl";
        _uniform = "command";
        _loadout = "tl_carb";
        _radios = "tl";
        cgqc_mk2_role = "Team Leader";
    };
    case "tl_cqb":{
        _perks = "tl";
        _uniform = "command";
        _loadout = "tl_cqb";
        _radios = "tl";
        cgqc_mk2_role = "Team Leader";
    };
    // Pilots and crews ===============================================================
    case "heli_pilot":{ 
        _perks = "heli_pilot";
        _uniform = "heli_pilot";
        _loadout = "heli";
        _radios = "pilot";
        cgqc_mk2_role = "Helicopter Pilot";
    };
    case "heli_crew":{
        _perks = "heli_crew";
        _uniform = "heli_crew";
        _loadout = "heli";
        _radios = "pilot";
        cgqc_mk2_role = "Helicopter Crew";
    };
    case "jet_pilot":{ 
        _perks = "jet_pilot";
        _uniform = "jet_pilot";
        _loadout = "jet_pilot";
        _radios = "pilot";
        cgqc_mk2_role = "Jet Pilot";
    };
    case "tank_pilot":{
        _perks = "tank_pilot";
        _uniform = "tank_pilot";
        _loadout = "tank";
        _radios = "pilot";
        cgqc_mk2_role = "Helicopter Pilot";
    };
    case "tank_crew":{
        _perks = "tank_crew";
        _uniform = "tank_pilot";
        _loadout = "tank";
        _radios = "pilot";
        cgqc_mk2_role = "Helicopter Pilot";
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
        cgqc_mk2_role = "Sniper";
    };
    case "jtac":{
        _perks = "recon";
        _uniform = "jtac";
        _loadout = "jtac";
        _radios = "jtac";
        cgqc_mk2_role = "JTAC";
    };
    // Specialists ==========================================================================
    case "eng":{
        _perks = "eng";
        _uniform = "eng";
        _loadout = "eng";
        _radios = "inf";
        cgqc_mk2_role = "Engineer";
    };
    case "med":{
        _perks = "med";
        _uniform = "med";
        _loadout = "med";
        _radios = "2iC";
        cgqc_mk2_role = "2ic";
    };
    // AT ==========================================================================
    case "at_jav":{
        _perks = "at";
        _uniform = "inf_medium";
        _loadout = "at_jav";
        _radios = "inf";
        cgqc_mk2_role = "Anti-Tank (Javelin)";
    };
    case "at_maaws":{
        _perks = "at";
        _uniform = "inf_medium";
        _loadout = "at_maaws";
        _radios = "inf";
        cgqc_mk2_role = "Anti-Tank (MAAWS)";
    };
    // MG ==========================================================================
    case "hmg":{
        _perks = "mg";
        _uniform = "inf_medium";
        _loadout = "hmg";
        _radios = "inf";
        cgqc_mk2_role = "Machinegunner (Heavy)";
    };
    case "lmg":{
        _perks = "mg";
        _uniform = "inf_medium";
        _loadout = "lmg";
        _radios = "inf";
        cgqc_mk2_role = "Machinegunner (Light)";
    };
    // Others ==========================================================================
    case "mrksm":{
        _perks = "inf";
        _uniform = "inf_light";
        _loadout = "mrksm";
        _radios = "inf";
        cgqc_mk2_role = "Designated Marksman";
    };
    case "mortar":{
        _perks = "mortar";
        _uniform = "inf_heavy";
        _loadout = "mortar";
        _radios = "2iC";
        cgqc_mk2_role = "Mortier Léger";
    };
    // Infantry  ==========================================================================
    case "rifle_carb":{
        _perks = "inf";
        _uniform = "inf_light";
        _loadout = "rifle_carb";
        _radios = "inf";
        cgqc_mk2_role = "Rifleman (Carbine)";
    };
    case "rifle_cqb":{
        _perks = "inf";
        _uniform = "inf_light";
        _loadout = "rifle_cqb";
        _radios = "inf";
        cgqc_mk2_role = "Rifleman (CQB)";
    };
    case "rifle_grenade":{
        _perks = "inf";
        _uniform = "inf_medium";
        _loadout = "rifle_gren";
        _radios = "inf";
        cgqc_mk2_role = "Grenadier";
    };
    default	{
		hint "mk2_role_switch.sqf fail";
        sleep 10;
        hintSilent "";
	};
};
// Perks and traits setup 
[_perks] execVM "\CGQC_2022\loadouts\mk2_role_switch_perks.sqf";
// Add Uniform
[_uniform] execVM "\CGQC_2022\loadouts\mk2_role_switch_uniform.sqf";
// Add Uniform
[_loadout] execVM "\CGQC_2022\loadouts\mk2_role_switch_loadout.sqf";
hint format["Rôle:%1", cgqc_mk2_role];
sleep 3;
hintSilent "";
// Set radios 
[_radios, _section] execVM "\cgqc_2022\loadouts\mk2_role_switch_radios.sqf";
// Give control back
disableUserInput false;