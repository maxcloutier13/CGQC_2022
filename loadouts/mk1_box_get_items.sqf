_item = _this select 0;

switch (_item)
do
{
	case "343":	{
		player addItem "ACRE_PRC343";
		hintSilent "343 ajoutée";
	};
	case "152":	{
		player addItem "ACRE_PRC152";
		hintSilent "152 ajoutée";
	};
	case "earplugs": {
		player addItemToUniform "ACE_EarPlugs";
		hintSilent "earplugs ajoutés";
	};
	case "bandages": {
		for "_i" from 1 to 10 do {
			player addItemToBackpack "ACE_fieldDressing";
		};
		hintSilent "bandages ajoutés";
	};
	case "painkillers": {
		for "_i" from 1 to 5 do {
			player addItemToBackpack "FF_Painkiller";
		};
		hintSilent "painkillers ajoutés";
	};
	case "law": {
		player addWeapon "rhs_weap_m72a7";
		hintSilent "m72a7 law ajouté";
	};
	case "m136": {
		player addWeapon "rhs_weap_M136";
		hintSilent "m136 ajouté";
	};
	case "fuel": {
		supplies_fuelcan = "cgqc_box_mk1_fuelcan" createVehicle (position player);
		hintSilent "Fuelcan!";
	};
	case "vic_ammo": {
		supplies_fuelcan = "cgqc_box_mk1_ammocan" createVehicle (position player);
		hintSilent "Vic ammo!";
	};
	case "ammo": {
		supplies_fuelcan = "cgqc_box_mk1_supplies" createVehicle (position player);
		hintSilent "Ammo!";
	};
	case "mort60": {
		supplies_fuelcan = "cgqc_box_mk1_mortar" createVehicle (position player);
		hintSilent "60mm mortar!";
	};
	case "mort82": {
		supplies_fuelcan = "cgqc_box_mk1_mortar_mk6" createVehicle (position player);
		hintSilent "82mm mk6 mortar!!";
	};
	case "track": {
		supplies_fuelcan = "ACE_Track" createVehicle (position player);
		hintSilent "Spare track!!";
	};
	case "wheel": {
		supplies_fuelcan = "ACE_Wheel" createVehicle (position player);
		hintSilent "Spare wheel!!";
	};

	

	default	{
		hintSilent "woops";
		sleep 3;
	};
};








