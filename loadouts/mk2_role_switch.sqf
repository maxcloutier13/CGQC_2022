_type = _this select 0;
_section = _this select 1;
_perks = "";
_uniform = "";
_loadout = "";
_radios = "";

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
        _role = "HQ";
	};
    case "tl_carb":{
        _perks = "tl";
        _uniform = "command";
        _loadout = "tl_carb";
        _radios = "tl";
        _role = "Team Leader";
    };
    case "tl_cqb":{
        _perks = "tl";
        _uniform = "command";
        _loadout = "tl_cqb";
        _radios = "tl";
        _role = "Team Leader";
    };
    // Pilots and crews ===============================================================
    case "heli_pilot":{ 
        _perks = "heli_pilot";
        _uniform = "heli_pilot";
        _loadout = "heli";
        _radios = "heli";
        _role = "Helicopter Pilot";
    };
    case "heli_crew":{
        _perks = "heli_crew";
        _uniform = "heli_crew";
        _loadout = "heli";
        _radios = "heli";
        _role = "Helicopter Crew";
    };
    case "tank_pilot":{
        _perks = "tank_pilot";
        _uniform = "tank_pilot";
        _loadout = "tank";
        _radios = "";
        _role = "Helicopter Pilot";
    };
    case "tank_crew":{
        _perks = "tank_crew";
        _uniform = "tank_pilot";
        _loadout = "tank";
        _radios = "";
        _role = "Helicopter Pilot";
    };
    // Recon ==========================================================================
    case "recon_drone":{
        _perks = "recon";
        _uniform = "recon";
        _loadout = "drone";
        _radios = "recon";
        _role = "Drone Operator";
    };
    case "recon_sniper":{
        _perks = "recon";
        _uniform = "recon";
        _loadout = "sniper";
        _radios = "recon";
        _role = "Sniper";
    };
    case "recon_jtac":{
        _perks = "recon";
        _uniform = "jtac";
        _loadout = "jtac";
        _radios = "jtac";
        _role = "JTAC";
    };
    // Specialists ==========================================================================
    case "eng":{
        _perks = "eng";
        _uniform = "eng";
        _loadout = "eng";
        _radios = "inf";
        _role = "Engineer";
    };
    case "med":{
        _perks = "med";
        _uniform = "med";
        _loadout = "med";
        _radios = "2iC";
        _role = "2ic";
    };
    // AT ==========================================================================
    case "at_jav":{
        _perks = "at";
        _uniform = "inf_medium";
        _loadout = "at_jav";
        _radios = "inf";
        _role = "Anti-Tank (Javelin)";
    };
    case "at_maaws":{
        _perks = "at";
        _uniform = "inf_medium";
        _loadout = "at_maaws";
        _radios = "inf";
        _role = "Anti-Tank (MAAWS)";
    };
    // MG ==========================================================================
    case "hmg":{
        _perks = "mg";
        _uniform = "inf_medium";
        _loadout = "hmg";
        _radios = "inf";
        _role = "Machinegunner (Heavy)";
    };
    case "lmg":{
        _perks = "mg";
        _uniform = "inf_medium";
        _loadout = "lmg";
        _radios = "inf";
        _role = "Machinegunner (Light)";
    };
    // Others ==========================================================================
    case "mrksm":{
        _perks = "inf";
        _uniform = "inf_light";
        _loadout = "mrksm";
        _radios = "inf";
        _role = "Designated Marksman";
    };
    case "mortar":{
        _perks = "mortar";
        _uniform = "inf_heavy";
        _loadout = "mortar";
        _radios = "2iC";
        _role = "Mortier Léger";
    };
    // Infantry  ==========================================================================
    case "rifle_carb":{
        _perks = "inf";
        _uniform = "inf_light";
        _loadout = "rifle_carb";
        _radios = "inf";
        _role = "Rifleman (Carbine)";
    };
    case "rifle_cqb":{
        _perks = "inf";
        _uniform = "inf_light";
        _loadout = "rifle_cqb";
        _radios = "inf";
        _role = "Rifleman (CQB)";
    };
    case "rifle_grenade":{
        _perks = "inf";
        _uniform = "inf_medium";
        _loadout = "rifle_gren";
        _radios = "inf";
        _role = "Grenadier";
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
hint format["Rôle:%1", _role];
sleep 3;
hintSilent "";
// Set radios 
[_radios, _section] execVM "\cgqc_2022\loadouts\mk2_role_switch_radios.sqf";
// Give control back
disableUserInput false;