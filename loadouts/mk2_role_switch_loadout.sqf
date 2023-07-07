_type = _this select 0;

// Universal stuff on every units 
sleep 0.5;
// === Vest basic
#include "\cgqc_2022\loadouts\mk2\vest_basic.sqf"
// === Uniform basic
#include "\cgqc_2022\loadouts\mk2\uniform_basic.sqf"
// === Backpack basic
#include "\cgqc_2022\loadouts\mk2\backpack_basic.sqf"

// Cloutier thangs
if (cgqc_player_max) then {
    _items = (items player);
    _mags = magazines player;
    if !("murshun_cigs_lighter" in _items) then {player addItem "murshun_cigs_lighter";};
	if !("murshun_cigs_cigpack" in _items) then {player addItem "murshun_cigs_cigpack";};
	if !("immersion_cigs_cigar0_nv" in _items) then {player addItem "immersion_cigs_cigar0_nv";};
	if !("grad_paceCountBeads_functions_paceCountBeads" in _items) then {player addItem "grad_paceCountBeads_functions_paceCountBeads";};
	if !("ACE_MapTools" in _items) then {player addItem "ACE_MapTools";};
	if !("acex_intelitems_notepad" in _mags) then {player addItem "acex_intelitems_notepad";};
};


switch (_type) do {
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
	};
    case "sl":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_grenM320.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_grenadier.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_hq.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_hq.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
	};
    case "tl_carb":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_grenM320.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_grenadier.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_tl.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_tl.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
	};
    case "tl_cqb":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_mk18_gren.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_grenadier.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_tl.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_tl.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
	};
    case "tl_no_gl":{
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_mk18_tl.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_tlnogl.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_tl.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
        player addItemToBackpack "Tier1_Razor_Gen3_110_ADM_PIP";
    };
    case "heli":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_p90.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_p90_pilot.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_pilot.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
	};
    case "jet_pilot":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_p90.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_p90_pilot.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_pilot.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_advanced.sqf"
        // Remove superfluous nvgs
        player unlinkItem "JAS_GPNVG18_Full_blk_TI";
	};
    case "tank":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_p90.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_p90.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_driver.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_pilot.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
        player unlinkItem "ItemGPS";
        player linkItem "B_UavTerminal";
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
        #include "\cgqc_2022\loadouts\mk2\items_recon.sqf"
	};
    case "sniper":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m200.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_m200.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_sniper.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_recon.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_recon.sqf"
	};
    case "sniper_ebr":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m14EBR.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_m14EBR.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_sniper.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_recon.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_recon.sqf"
	};
    case "spotter":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_mk12_razor.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_mk12.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_sniper.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_recon.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_recon.sqf"
	};
    case "jtac":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_mk12_skeetIR.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_jtac.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_jtac.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_recon.sqf"
	};
    case "eng":{ //=============================================================================================
        // === Remove pistol and use mine detector instead
        player addWeapon "ACE_VMH3";
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_dotplus.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_eng.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
        player unlinkItem "ItemGPS";
        player linkItem "B_UavTerminal";
	};
    case "saboteur":{ //=============================================================================================
        // === Remove pistol and use mine detector instead
        player addWeapon "ACE_VMH3";
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_dotplus.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_eng_saboteur.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
        player unlinkItem "ItemGPS";
        player linkItem "B_UavTerminal";
	};

    case "med":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_lpvo.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_med.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_2ic.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
	};
    case "at_jav":{ //=============================================================================================
        // === Javelin
        ["cgqc_gun_mk1_Javelin"] execVM "\CGQC_2022\functions\getCustomGun.sqf";sleep 0.5;
        player addSecondaryWeaponItem "jav_AT_mas_can";
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_lpvo.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_jav.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
	};
    case "at_maaws":{ //=============================================================================================
        // === MAAWS
        ["cgqc_gun_mk1_MAAWS"] execVM "\CGQC_2022\functions\getCustomGun.sqf";sleep 0.5;
        player addSecondaryWeaponItem "MRAWS_HEAT_F";
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_dotplus.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_maaws.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
	};
    case "ar":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m27.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_m27.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
	};
    case "hmg":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_mk48.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_mk48.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_mk48.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
	};
    case "lmg":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_mk46.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_mk46.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_mk46.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
	};
    case "mrksm":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_hk417.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_hk417.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_mrksm.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_recon.sqf"
	};
    case "mortar":{ //=============================================================================================
        // === Portable mortar
        player addWeapon "avm224_W_M224_mortar_carry";
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_lpvo.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_infantry.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_mortar.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_2ic.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_recon.sqf"
	};
    case "rifle_cqb":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_mk18_dot.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_rifleman.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_rifleman.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
        // Jetable
        player addWeapon "rhs_weap_m72a7";
	};
    case "rifle_carb":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_dotplus.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_rifleman.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_rifleman.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
        // Jetable
        player addWeapon "rhs_weap_m72a7";
	};
    case "rifle_m16":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m16_shortdot.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_rifleman.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_rifleman.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
        // Jetable
        player addWeapon "rhs_weap_m72a7";
	};
    case "rifle_gren":{ //=============================================================================================
        // === Weapons
        #include "\cgqc_2022\loadouts\mk2\gun_m4_grenM320.sqf"
        // === Vest
        #include "\cgqc_2022\loadouts\mk2\vest_grenadier.sqf"
        // === Backpack 
        #include "\cgqc_2022\loadouts\mk2\backpack_grenadier.sqf"
        // === Radios 
        #include "\cgqc_2022\loadouts\mk2\radios_inf.sqf"
        // === Items 
        #include "\cgqc_2022\loadouts\mk2\items_basic.sqf"
	};
    default	{
		hint "mk2_role_switch_loadout.sqf fail";
        sleep 10;
        hintSilent "";
	};
};

mk2_role_switch_loadout = true;