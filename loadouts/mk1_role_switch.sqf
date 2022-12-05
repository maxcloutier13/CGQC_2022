_type = _this select 0;
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
	case "hq":{
        _perks = "hq";
        _uniform = "command";
        _loadout = "hq";
        _radios = "hq";
        _role = "HQ";
	};
    // Team leaders ===================================================================
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
    case "at_jav":{
    };
    case "at_maaws":{
    };
    
    case "eng":{
    };
    case "med":{
    };

    case "hmg":{
    };
    case "lmg":{
    };

    case "mrksm":{
    };
    case "mortar":{
    };

    case "rifle_carb":{
    };
    case "rifle_cqb":{
    };
    case "rifle_grenade":{
    };
    
    default	{
		hint "mk1_role_switch.sqf fail";
        sleep 10;
        hintSilent "";
	};
};
// Perks and traits setup 
[_perks] execVM "\CGQC_2022\scripts\mk1_role_switch_perks.sqf";
// Add Uniform
[_uniform] execVM "\CGQC_2022\scripts\mk1_role_switch_uniform.sqf";
// Add Uniform
[_loadout] execVM "\CGQC_2022\scripts\mk1_role_switch_loadout.sqf";
hint format["Rôle:%1", _role];
sleep 3;
hintSilent "";
// Set radios 
[_radios] execVM "\cgqc\factions\stuff_player.sqf";
// Give control back
disableUserInput false;