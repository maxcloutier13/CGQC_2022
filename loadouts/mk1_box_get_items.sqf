_item = _this select 0;

switch (_item)
do
{
	case "343":	{
		player addItem "ACRE_PRC343";
		hintSilent "343 ajoutée";
		break;
	};
	case "152":	{
		player addItem "ACRE_PRC152";
		hintSilent "152 ajoutée";
		break;
	};
	case "148":	{
		player addItem "ACRE_PRC148";
		hintSilent "148 ajoutée";
		break;
	};
	case "earplugs": {
		player addItemToUniform "ACE_EarPlugs";
		hintSilent "earplugs ajoutés";
		break;
	};
	case "bandages": {
		for "_i" from 1 to 10 do {
			player addItemToBackpack "ACE_fieldDressing";
		};
		hintSilent "bandages ajoutés";
		break;
	};
	case "painkillers": {
		for "_i" from 1 to 5 do {
			player addItemToBackpack "FF_Painkiller";
		};
		hintSilent "painkillers ajoutés";
		break;
	};
	case "law": {
		player addWeapon "rhs_weap_m72a7";
		hintSilent "m72a7 law ajouté";
		break;
	};
	case "m136": {
		player addWeapon "rhs_weap_M136";
		hintSilent "m136 ajouté";
		break;
	};
	case "fuel": {
		supplies_fuelcan = "cgqc_box_mk1_fuelcan" createVehicle (position player);
		hintSilent "Fuelcan!";
		break;
	};
	case "vic_ammo": {
		supplies_fuelcan = "cgqc_box_mk1_ammocan" createVehicle (position player);
		hintSilent "Vic ammo!";
		break;
	};
	case "ammo": {
		supplies_fuelcan = "cgqc_box_mk1_supplies" createVehicle (position player);
		hintSilent "Ammo!";
		break;
	};
	case "mort60": {
		supplies_fuelcan = "cgqc_box_mk1_mortar" createVehicle (position player);
		hintSilent "60mm mortar!";
		break;
	};
	case "mort82": {
		supplies_fuelcan = "cgqc_box_mk1_mortar_mk6" createVehicle (position player);
		hintSilent "82mm mk6 mortar!!";
		break;
	};
	case "track": {
		supplies_fuelcan = "ACE_Track" createVehicle (position player);
		hintSilent "Spare track!!";
		break;
	};
	case "wheel": {
		supplies_fuelcan = "ACE_Wheel" createVehicle (position player);
		hintSilent "Spare wheel!!";
		break;
	};
	case "kidnap":{
		player addItemToBackpack "G_Blindfold_01_black_F";
		player addItemToBackpack "cgqc_helmet_kidnapping";
		player addItemToBackpack "cgqc_vest_kidnapping";
		break;
	};
	default	{
		hintSilent "woops";
		sleep 3;
	};
};








