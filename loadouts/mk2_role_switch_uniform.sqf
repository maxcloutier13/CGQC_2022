_type = _this select 0;

// Basic uniform for everyone
player forceAddUniform "cgqc_uniform_mk1";
// === Standard secondary weapon
player addWeapon "cgqc_gun_glock19_wood";
player addHandgunItem "Tier1_20Rnd_9x19_JHP";
player addHandgunItem "tier1_dbalpl";

switch (_type) do {
	case "command":{ //=============================================================================================
        player addVest "cgqc_vest_mk1_tan";
        player addBackpack "cgqc_pack_mk1_radiobag";
        player addHeadgear "cgqc_helmet_mk1";
	};
    case "heli_pilot":{ //=============================================================================================
        player forceAddUniform "cgqc_uniform_mk1_helipilot";
        player addVest "cgqc_vest_mk1_pilot_black";
        player addBackpack "CGQC_units_mk1_4_Pilot_heli_pack";
        player addHeadgear "cgqc_helmet_heli_black";
        player addGoggles "G_mas_can_wrap_B";
	};
    case "jet_pilot":{ //=============================================================================================
        player forceAddUniform "cgqc_uniform_mk1_jetpilot";
        player addVest "cgqc_vest_mk1_pilot";
        player addBackpack "CGQC_units_mk1_4_Pilot_heli_pack";
        player addHeadgear "cgqc_helmet_mk1_jetpilot";
        player addGoggles "G_Combat";
	};
    case "heli_crew":{ //=============================================================================================
        player forceAddUniform "cgqc_uniform_mk1_helipilot";
        player addVest "cgqc_vest_mk1_pilot_black";
        player addBackpack "CGQC_units_mk1_4_Pilot_heli_pack";
        player addHeadgear "cgqc_helmet_crew_black";
        player addGoggles "G_mas_can_wrap_B";
	};
    case "tank_driver":{ //=============================================================================================
        player addVest "cgqc_vest_mk1_driver";
        player addBackpack "cgqc_pack_mk1_tank_driver";
        player addHeadgear "cgqc_helmet_mk1_tank";
        player addGoggles "G_mas_can_wrap_gog_B";
	};
    case "recon":{ //=============================================================================================
        player addVest "cgqc_vest_mk1_tan_lr";
        player addBackpack "cgqc_pack_mk1_kitbag";
        player addHeadgear "cgqc_helmet_mk1";
        player addGoggles "G_mas_can_wrap_gog_B";
        player addHandgunItem "Tier1_TiRant9S"; //Silencer on pistol
	};
    case "jtac":{ //=============================================================================================
        player addVest "cgqc_vest_mk1_tan_lr";
        player addBackpack "cgqc_pack_mk1_radiobag";
        player addHeadgear "cgqc_helmet_mk1";
        player addGoggles "G_mas_can_wrap_gog_B";
	};
    case "eng":{ //=============================================================================================
        player addVest "cgqc_vest_mk1_tan_ar";
        player addBackpack "cgqc_pack_mk1_carryall";
        player addHeadgear "cgqc_helmet_mk1";
        player addGoggles "G_mas_can_balaM_T";
    };  
    case "med":{ //=============================================================================================
        player addVest "cgqc_vest_mk1_tan_rf";
        player addBackpack "cgqc_pack_mk1_carryall";
        player addHeadgear "cgqc_helmet_mk1_medic";
        player addGoggles "G_mas_can_balaM_T";
    };
    case "inf_light":{ //=============================================================================================
        player addVest "cgqc_vest_mk1_tan";
        player addBackpack "cgqc_pack_mk1_assault";
        player addHeadgear "cgqc_helmet_mk1";
        player addGoggles "G_mas_can_wrap_gog_B";
    };
    case "inf_medium":{ //=============================================================================================
        player addVest "cgqc_vest_mk1_tan_lr";
        player addBackpack "cgqc_pack_mk1_kitbag";
        player addHeadgear "cgqc_helmet_mk1";
        player addGoggles "G_mas_can_balaM_T";
    };
    case "inf_heavy":{ //=============================================================================================
        player addVest "cgqc_vest_mk1_tan_lr";
        player addBackpack "cgqc_pack_mk1_carryall";
        player addHeadgear "cgqc_helmet_mk1";
        player addGoggles "G_mas_can_balaM_T";
    };
    default {
	    hint "mk2_role_switch_uniform.sqf fail";
        sleep 10;
        hintSilent "";
	};
};

mk2_role_switch_uniform = true;