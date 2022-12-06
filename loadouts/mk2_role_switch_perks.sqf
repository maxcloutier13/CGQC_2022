_type = _this select 0;

// Remove all perks/traits
player setUnitTrait ["Medic", false];
player setUnitTrait ["engineer", false];
player setUnitTrait ["explosiveSpecialist", false];

// Remove ghillie up and other perks

// Add basic traits

switch (_type)
do
{
	case "hq":{
	};
    case "tl":{
	};
	case "heli_pilot":{
	};
	case "heli_crew":{
	};
	case "jet_pilot":{
	};
	case "tank_pilot":{
	};
	case "tank_crew":{
	};
	case "recon":{
		//Load the sniper skill
		execVM "\cgqc_2022\scripts\mk1_action_ghillie_menu.sqf";
	};
	case "eng":{
	};
	case "med":{
	};
	case "at":{
	};
	case "mg":{
	};
	case "mortar":{
	};
	case "inf":{
	};
    default	{
		hint "mk2_role_switch_perks.sqf fail";
        sleep 10;
        hintSilent "";
	};
};