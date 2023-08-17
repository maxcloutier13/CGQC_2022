_type = _this select 0;t = 

// Basic uniform for everyone
player forceAddUniform "cgqc_uniform_mk1";

if (cgqc_config_sidearm) then {
    // === Custom Sidearm
    player addWeapon cgqc_config_sidearm_pistol;
    player addHandgunItem cgqc_config_sidearm_mag;
    if (cgqc_config_sidearm_acc != "") then {
        player addHandgunItem cgqc_config_sidearm_acc;
    };
    if (cgqc_config_sidearm_suppress != "") then {
        player addHandgunItem cgqc_config_sidearm_suppress;
    };
    if (cgqc_config_sidearm_optic != "") then {
        player addHandgunItem cgqc_config_sidearm_optic;
    };
}else{
    // === Standard secondary weapon
    player addWeapon "cgqc_gun_glock19_wood";
    player addHandgunItem "Tier1_20Rnd_9x19_JHP";
    player addHandgunItem "tier1_dbalpl";
    //player addHandgunItem "Tier1_TiRant9S"; //Silencer on pistol
    player addHandgunItem "tier1_sig_romeo1"; //Dot on pistol
};

_vest = "";
_backpack = "";
_helmet = "";
_face = "G_mas_can_shemag_gog_l";

switch (_type) do {
	case "command":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan";
        if (cgqc_player_hasContact) then {
            _backpack =  "cgqc_pack_mk1_radiobag";
        }else{
            hintc "Kin, vla ton carryall Fortin!";
            _backpack =  "cgqc_pack_mk1_carryall";
        };
        _helmet =  "cgqc_helmet_mk1";
	};
    case "heli_pilot":{ //=============================================================================================
        player forceAddUniform "cgqc_uniform_mk1_helipilot";
        _vest = "cgqc_vest_mk1_pilot_black";
        _backpack =  "CGQC_units_mk1_4_Pilot_heli_pack";
        _helmet =  "cgqc_helmet_heli_black";
        _face =  "G_mas_can_wrap_B";
	};
    case "jet_pilot":{ //=============================================================================================
        player forceAddUniform "cgqc_uniform_mk1_jetpilot";
        _vest = "cgqc_vest_mk1_pilot";
        _backpack =  "CGQC_units_mk1_4_Pilot_heli_pack";
        _helmet =  "cgqc_helmet_mk1_jetpilot";
        _face =  "G_mas_can_balaM_T";
	};
    case "heli_crew":{ //=============================================================================================
        player forceAddUniform "cgqc_uniform_mk1_helipilot";
        _vest = "cgqc_vest_mk1_pilot_black";
        _backpack =  "CGQC_units_mk1_4_Pilot_heli_pack";
        _helmet =  "cgqc_helmet_crew_black";
        _face =  "G_mas_can_wrap_B";
	};
    case "tank_driver":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_driver";
        _backpack =  "cgqc_pack_mk1_tank_driver";
        _helmet =  "cgqc_helmet_mk1_tank";
        _face =  "G_mas_can_wrap_gog_B";
	};
    case "recon":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_lr";
        _backpack =  "cgqc_pack_mk1_kitbag";
        _helmet =  "cgqc_helmet_mk1";
        // Change secondary weapon for SMG
        player addWeapon "rhsusf_weap_MP7A2_folded";
        player addHandgunItem "rhsusf_acc_rotex_mp7";
        player addHandgunItem "Tier1_MP7_NGAL_M300C_Black";
        player addHandgunItem "Tier1_MicroT2_Low_Black";
        player addHandgunItem "rhsusf_mag_40Rnd_46x30_AP";
        cgqc_config_sidearm_alternate = "rhsusf_mag_40Rnd_46x30_AP";
	};
    case "jtac":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_lr";
        if (cgqc_player_hasContact) then {
            _backpack =  "cgqc_pack_mk1_radiobag";
        }else{
            _backpack =  "cgqc_pack_mk1_carryall";
        };
        _helmet =  "cgqc_helmet_mk1";
        cgqc_config_sidearm_alternate = cgqc_config_sidearm_mag;
	};
    case "eng":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_ar";
        _backpack =  "cgqc_pack_mk1_carryall";
        _helmet =  "cgqc_helmet_mk1";
    };  
    case "med":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_rf";
        _backpack =  "cgqc_pack_mk1_carryall";
        _helmet =  "cgqc_helmet_mk1_medic";
    };
    case "inf_light":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan";
        _backpack =  "cgqc_pack_mk1_assault";
        _helmet =  "cgqc_helmet_mk1";
    };
    case "inf_medium":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_lr";
        _backpack =  "cgqc_pack_mk1_kitbag";
        _helmet =  "cgqc_helmet_mk1";
    };
    case "inf_heavy":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_lr";
        _backpack =  "cgqc_pack_mk1_carryall";
        _helmet =  "cgqc_helmet_mk1";
    };
    default {
	    hint "mk2_role_switch_uniform.sqf fail";
        sleep 10;
        hintSilent "";
	};
};
sleep 0.5;
// Add stuff to player
player addVest _vest;
player addBackpack _backpack;
[_helmet] execVM "\CGQC_2022\functions\getCustomHelmet.sqf";
player addGoggles _face;
sleep 0.5;
mk2_role_switch_uniform = true;