_type = _this select 0;

// Remove all perks/traits
player setUnitTrait ["Medic", false];
player setUnitTrait ["engineer", false];
player setUnitTrait ["explosiveSpecialist", false];

// Remove ghillie up and other perks


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
	case "tank_pilot":{
	};
	case "tank_crew":{
	};
	case "recon":{
		//Load the sniper skill
		execVM "\cgqc_2022\scripts\mk1_action_ghillie_menu.sqf";
	};
    default	{
		hint "mk1_role_switch_perks.sqf fail";
        sleep 10;
        hintSilent "";
	};
};