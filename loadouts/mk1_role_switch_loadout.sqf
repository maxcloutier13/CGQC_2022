_type = _this select 0;

// Universal stuff on every units 
// === Uniform basic
#include "\cgqc_2022\loadouts\mk2\uniform_basic.sqf"
// === Vest basic
#include "\cgqc_2022\loadouts\mk2\vest_basic.sqf"
// === Backpack basic
#include "\cgqc_2022\loadouts\mk2\backpack_basic.sqf"

switch (_type)
do
{
	case "hq":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_lpvo.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_hq.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_hq.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
        ["hq"] execVM "\cgqc\factions\stuff_player.sqf";
	};
    case "tl_carb":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_gren_lpvo.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_tl.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_tl.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
        // === Set Radios
        ["spartan_1", _section] execVM "\cgqc\factions\stuff_player.sqf"; 
	};
    case "tl_cqb":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_mk18_gren.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_tl.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_tl.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
        // === Set Radios
        ["spartan_1", _section] execVM "\cgqc\factions\stuff_player.sqf"; 
	};
    case "heli":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_p90.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_pilot.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_pilot.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
        // === Set Radios
        ["griffon_pieton"] execVM "\cgqc\factions\stuff_player.sqf";
	};
    case "tank":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_p90.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_pilot.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_driver.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_pilot.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
        // === Set Radios
        ["centaure_pieton"] execVM "\cgqc\factions\stuff_player.sqf";
	};
    case "drone":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_lpvo.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_drone.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_recon.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
        // === Set Radios
        ["recon"] execVM "\cgqc\factions\stuff_player.sqf";
	};
    case "sniper":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_sniper.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_sniper.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_sniper.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_recon.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
        // === Set Radios
        ["recon"] execVM "\cgqc\factions\stuff_player.sqf";
	};
    case "jtac":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_jtac.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_jtac.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_jtac.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
        // === Set Radios
        ["jtac"] execVM "\cgqc\factions\stuff_player.sqf";
	};
    
    default	{
		hint "mk1_role_switch_loadout.sqf fail";
        sleep 10;
        hintSilent "";
	};
};