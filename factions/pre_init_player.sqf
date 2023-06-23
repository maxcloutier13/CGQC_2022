// Addon Options ===================================================================================================
_menu_name = "CGQC Player settings";
["cgqc_config_sidearm_2023", "CHECKBOX", ["Custom Sidearm", "À vos risques et périls. Assurez vous d'avoir une classe valide"], 
	[_menu_name, "Sidearm Perso (2023)"], false] call CBA_fnc_addSetting;
["cgqc_config_sidearm_pistol_2023", "EDITBOX", ["Pistolet", "Ton pistolet préféré"], 
	[_menu_name, "Sidearm Perso (2023)"], "cgqc_gun_glock19_wood"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_mag_2023", "EDITBOX", ["Magazine", "Chargeur"], 
	[_menu_name, "Sidearm Perso (2023)"], "Tier1_15Rnd_9x19_JHP"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_mag_nbr_2023","SLIDER", ["Nbr de Magazine", "Nombre de chargeurs de pistol"],
	[_menu_name, "Sidearm Perso (2023)"], [2, 8, 2, 0]] call CBA_fnc_addSetting;
["cgqc_config_sidearm_acc_2023", "EDITBOX", ["Laser/Flashlight", "Accessoire"], 
	[_menu_name, "Sidearm Perso (2023)"], "tier1_dbalpl"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_suppress_2023", "EDITBOX", ["Silencieux", "Silencieux"], 
	[_menu_name, "Sidearm Perso (2023)"], "Tier1_TiRant9S"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_optic_2023", "EDITBOX", ["Optique", "Optique"], 
	[_menu_name, "Sidearm Perso (2023)"], "tier1_sig_romeo1"] call CBA_fnc_addSetting;
cgqc_2023_preInit_done = true;