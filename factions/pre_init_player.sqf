// Addon Options ===================================================================================================
_menu_name = "[CGQC] Player settings";
["cgqc_config_sidearm", "CHECKBOX", ["Custom Sidearm", "À vos risques et périls. Assurez vous d'avoir une classe valide"],
	[_menu_name, "Sidearm Perso (2023)"], false] call CBA_fnc_addSetting;
["cgqc_config_sidearm_pistol", "EDITBOX", ["Pistolet", "Ton pistolet préféré"],
	[_menu_name, "Sidearm Perso (2023)"], "cgqc_gun_glock19_wood"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_mag", "EDITBOX", ["Magazine", "Chargeur"],
	[_menu_name, "Sidearm Perso (2023)"], "Tier1_15Rnd_9x19_JHP"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_mag_nbr","SLIDER", ["Nbr de Magazine", "Nombre de chargeurs de pistol"],
	[_menu_name, "Sidearm Perso (2023)"], [2, 8, 2, 0]] call CBA_fnc_addSetting;
["cgqc_config_sidearm_acc", "EDITBOX", ["Laser/Flashlight", "Accessoire"],
	[_menu_name, "Sidearm Perso (2023)"], "tier1_dbalpl"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_suppress", "EDITBOX", ["Silencieux", "Silencieux"],
	[_menu_name, "Sidearm Perso (2023)"], ""] call CBA_fnc_addSetting;
["cgqc_config_sidearm_optic", "EDITBOX", ["Optique", "Optique"],
	[_menu_name, "Sidearm Perso (2023)"], "tier1_sig_romeo1"] call CBA_fnc_addSetting;
cgqc_start_2023_preInit_done = true;