_type = _this select 0;

// Remove all perks/traits
player setUnitTrait ["Medic", false];
player setUnitTrait ["engineer", false];
player setUnitTrait ["explosiveSpecialist", false];

// Remove ghillie up and other perks
cgqc_perks_basic = true;
cgqc_perks_recon = false;
cgqc_perks_pilot = false;
cgqc_perks_driver = false;
cgqc_perks_eng = false;
cgqc_perks_medic = false;

switch (_type) do {
	case "hq":{break;};
    case "tl":{break;};
	case "heli_pilot":{
		player setUnitTrait ["engineer", true];
		cgqc_perks_pilot = true;
		break;
	};
	case "heli_crew":{
		player setUnitTrait ["engineer", true];
		break;
	};
	case "jet_pilot":{
		player setUnitTrait ["engineer", true];
		break;
	};
	case "tank_driver":{
		player setUnitTrait ["engineer", true];
		cgqc_perks_driver = true;
		break;
	};
	case "tank_crew":{
		player setUnitTrait ["engineer", true];
		break;
	};
	case "recon":{
		cgqc_perks_recon = true;
		break;
	};
	case "eng":{
		cgqc_perks_eng = true;
		player setUnitTrait ["engineer", true];
		player setUnitTrait ["explosiveSpecialist", true];
		break;
	};
	case "med":{
		cgqc_perks_medic = true;
		player setUnitTrait ["Medic", true];
		break;
	};
	case "at":{break;};
	case "mg":{break;};
	case "mortar":{break;};
	case "inf":{break;};
	};
    default	{
		hintc "mk2_role_switch_perks.sqf fail";
	};
};
mk2_role_switch_perks_done = true;