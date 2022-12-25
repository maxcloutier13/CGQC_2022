_type = _this select 0;t = 

// Basic uniform for everyone
player forceAddUniform "cgqc_uniform_mk1";
// === Standard secondary weapon
player addWeapon "cgqc_gun_glock19_wood";
player addHandgunItem "Tier1_20Rnd_9x19_JHP";
player addHandgunItem "tier1_dbalpl";
_vest = "";
_backpack = "";
_helmet = "";
_face = "";

switch (_type) do {
	case "command":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan";
        _backpack =  "cgqc_pack_mk1_radiobag";
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
        _face =  "G_Combat";
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
        _face =  "G_mas_can_wrap_gog_B";
        player addHandgunItem "Tier1_TiRant9S"; //Silencer on pistol
	};
    case "jtac":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_lr";
        _backpack =  "cgqc_pack_mk1_radiobag";
        _helmet =  "cgqc_helmet_mk1";
        _face =  "G_mas_can_wrap_gog_B";
	};
    case "eng":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_ar";
        _backpack =  "cgqc_pack_mk1_carryall";
        _helmet =  "cgqc_helmet_mk1";
        _face =  "G_mas_can_balaM_T";
    };  
    case "med":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_rf";
        _backpack =  "cgqc_pack_mk1_carryall";
        _helmet =  "cgqc_helmet_mk1_medic";
        _face =  "G_mas_can_balaM_T";
    };
    case "inf_light":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan";
        _backpack =  "cgqc_pack_mk1_assault";
        _helmet =  "cgqc_helmet_mk1";
        _face =  "G_mas_can_wrap_gog_B";
    };
    case "inf_medium":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_lr";
        _backpack =  "cgqc_pack_mk1_kitbag";
        _helmet =  "cgqc_helmet_mk1";
        _face =  "G_mas_can_balaM_T";
    };
    case "inf_heavy":{ //=============================================================================================
        _vest = "cgqc_vest_mk1_tan_lr";
        _backpack =  "cgqc_pack_mk1_carryall";
        _helmet =  "cgqc_helmet_mk1";
        _face =  "G_mas_can_balaM_T";
    };
    default {
	    hint "mk2_role_switch_uniform.sqf fail";
        sleep 10;
        hintSilent "";
	};
};

// Add stuff to player
player addVest _vest;
player addBackpack _backpack;
//Check custom helmet
_customHelmet = _helmet + "_" + cgqc_custom_playername;
player addHeadgear _customHelmet;
_checkHelmet = headgear player;
if (_checkHelmet == "") then {
    player addHeadgear _helmet;
};
player addGoggles _face;
sleep 0.5;
mk2_role_switch_uniform = true;