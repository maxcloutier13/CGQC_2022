_type = _this select 0;

// Remove all perks/traits
player setUnitTrait ["Medic", false];
player setUnitTrait ["engineer", false];
player setUnitTrait ["explosiveSpecialist", false];

// Remove ghillie up and other perks
cgqc_perks_basic = true;
cgqc_perks_recon = false;
cgqc_perks_eng = false;
cgqc_perks_medic = false;

switch (_type) do {
	case "hq":{
	};
    case "tl":{
	};
	case "heli_pilot":{
		player setUnitTrait ["engineer", true];
	};
	case "heli_crew":{
		player setUnitTrait ["engineer", true];
	};
	case "jet_pilot":{
		player setUnitTrait ["engineer", true];
	};
	case "tank_driver":{
		player setUnitTrait ["engineer", true];
	};
	case "tank_crew":{
		player setUnitTrait ["engineer", true];
	};
	case "recon":{
		cgqc_perks_recon = true;
	};
	case "eng":{
		cgqc_perks_eng = true;
		player setUnitTrait ["engineer", true];
		player setUnitTrait ["explosiveSpecialist", true];
	};
	case "med":{
		cgqc_perks_medic = true;
		player setUnitTrait ["Medic", true];
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
		hintc "mk2_role_switch_perks.sqf fail";
	};
};
mk2_role_switch_perks_done = true;