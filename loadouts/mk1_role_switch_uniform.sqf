_type = _this select 0;

// Basic uniform for everyone
player forceAddUniform "cgqc_uniform_mk1";
player addVest "cgqc_vest_mk1_tan";
player addHeadgear "cgqc_helmet_mk1";
player addGoggles "G_mas_can_shemag_gog_l";
// === Secondary weapon
player addWeapon "cgqc_gun_glock19_wood";
player addHandgunItem "Tier1_15Rnd_9x19_JHP";
player addHandgunItem "tier1_dbalpl";


switch (_type) do {
	case "command":{ //=============================================================================================
        // === Clothing 
        player addBackpack "cgqc_pack_mk1_radiobag";
	};
    case "heli_pilot":{ //=============================================================================================
        // === Clothing 
        player forceAddUniform "cgqc_uniform_mk1_helipilot";
        player addVest "cgqc_vest_mk1_pilot_black";
        player addBackpack "CGQCplayers_mk1_4_Pilot_heli_pack";
        player addHeadgear "cgqc_helmet_heli_black";
        player addGoggles "G_mas_can_wrap_B";
	};
    case "heli_crew":{ //=============================================================================================
         // === Clothing 
        player forceAddUniform "cgqc_uniform_mk1_helipilot";
        player addVest "cgqc_vest_mk1_pilot_black";
        player addBackpack "CGQCplayers_mk1_4_Pilot_heli_pack";
        player addHeadgear "cgqc_helmet_crew_black";
        player addGoggles "G_mas_can_wrap_B";
	};
    case "tank_pilot":{ //=============================================================================================
        // === Clothing 
        player addVest "cgqc_vest_mk1_driver";
        player addBackpack "cgqc_pack_mk1_magic";
        player addHeadgear "cgqc_helmet_mk1_tank";
        player addGoggles "G_mas_can_wrap_gog_B";
	};
    case "recon":{ //=============================================================================================
        // === Clothing 
        player addBackpack "cgqc_pack_mk1_magic";
        player addVest "cgqc_vest_mk1_tan_lr";
        player addGoggles "G_mas_can_wrap_gog_B";
	};
    case "jtac":{ //=============================================================================================
        // === Clothing 
        player addBackpack "cgqc_pack_mk1_radiobag";
        player addVest "cgqc_vest_mk1_tan_lr";
        player addGoggles "G_mas_can_wrap_gog_B";
	};
  default {
	    hint "mk1_role_switch_uniform.sqf fail";
        sleep 10;
        hintSilent "";
	};
};