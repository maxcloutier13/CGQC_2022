
// Custom arsenal categories
private _medical = [
	"ACE_fieldDressing",
	"ACE_elasticBandage",
	"ACE_packingBandage",
	"ACE_quikclot",
	"ACE_bloodIV",
	"ACE_bloodIV_250",
	"ACE_bloodIV_500",
	"ACE_epinephrine",
	"Empty_bloodIV_250",
	"Empty_bloodIV_500",
	"ACE_morphine",
	"ACE_personalAidKit",
	"ACE_plasmaIV",
	"ACE_plasmaIV_250",
	"ACE_plasmaIV_500",
	"ACE_salineIV",
	"ACE_salineIV_250",
	"ACE_salineIV_500",
	"ACE_splint",
	"ACE_surgicalKit",
	"ACE_tourniquet",
	"FSGm_ItemMedicBag",
	"FF_Painkiller"
];

private _electronics = [
	"ACRE_PRC117F",
	"ACRE_PRC148",
	"ACRE_PRC152",
	"ACRE_PRC343",
	"ACRE_PRC77",
	"ACE_ATragMX",
	"ACRE_BF888S",
	"ACE_Cellphone",
	"ACE_DAGR",
	"ACE_DeadManSwitch",
	"ACE_Kestrel4500",
	"ACE_M26_Clacker",
	"Ace_Clacker",
	"Ace_Microdagr",
	"MineDetector",
	"ACRE_SEM52SL",
	"ACRE_SEM70",
	"ACE_UAVBattery",
	"Laserbatteries",
	"ACRE_VHF30108SPIKE",
	"ACRE_VHF30108",
	"ACRE_VHF30108MAST",
	"ACE_Flashlight_KSF1",
	"ace_flashlight_xl50",
	"ACE_IR_Strobe_Item",
	"ACE_HuntIR_monitor",
	"ACE_Flashlight_MX991",
	"REV_pelican_item",
	"REV_darter_item",
	"REV_demine_item",
	"ItemAndroid",
	"ItemcTabHCam",
	"ItemcTab",
	"WBK_HeadLampItem"
];

[_medical, "Medical", "cgqc_2022\textures\medical.paa", 0] call ace_arsenal_fnc_addRightPanelButton;
[_electronics, "Electronics", "cgqc_2022\textures\electronics.paa", 1] call ace_arsenal_fnc_addRightPanelButton;

// Addon Options ===================================================================================================
_menu_name = "CGQC";
["cgqc_config_sidearm", "CHECKBOX", ["Custom Sidearm", "À vos risques et périls. Assurez vous d'avoir une classe valide"], 
	[_menu_name, "Sidearm Perso"], false] call CBA_fnc_addSetting;
["cgqc_config_sidearm_pistol", "EDITBOX", ["Pistolet", "Ton pistolet préféré"], 
	[_menu_name, "Sidearm Perso"], "cgqc_gun_glock19_wood"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_mag", "EDITBOX", ["Magazine", "Chargeur"], 
	[_menu_name, "Sidearm Perso"], "Tier1_20Rnd_9x19_JHP"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_mag_nbr","SLIDER", ["Nbr de Magazine", "Nombre de chargeurs de pistol"],
	[_menu_name, "Sidearm Perso"], [2, 8, 2, 0]] call CBA_fnc_addSetting;
["cgqc_config_sidearm_acc", "EDITBOX", ["Laser/Flashlight", "Accessoire"], 
	[_menu_name, "Sidearm Perso"], "tier1_dbalpl"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_suppress", "EDITBOX", ["Silencieux", "Silencieux"], 
	[_menu_name, "Sidearm Perso"], "Tier1_TiRant9S"] call CBA_fnc_addSetting;
["cgqc_config_sidearm_optic", "EDITBOX", ["Optique", "Optique"], 
	[_menu_name, "Sidearm Perso"], "tier1_sig_romeo1"] call CBA_fnc_addSetting;