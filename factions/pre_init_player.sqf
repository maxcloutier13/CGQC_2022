// Variables pour le ghillie up kit
ghillie_menu = 0;
ghillie_isOn = 0;
ghillie_uniform = "";

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
	"sps_black_hornet_01_Static_F",
	"WBK_HeadLampItem"
];

[_medical, "Medical", "cgqc_2022\textures\medical.paa", 0] call ace_arsenal_fnc_addRightPanelButton;
[_electronics, "Electronics", "cgqc_2022\textures\electronics.paa", 1] call ace_arsenal_fnc_addRightPanelButton;

// ==== Arsenal mk2 ==================================================================================================
cgqc_mk2_arsenal_list = [];
// Prep les variables de l'arsenal dynamique
#include "\cgqc_2022\loadouts\arsenal\init_arsenal.sqf";
cgqc_mk2_arsenal_init = true;

/*
//Dynamic arsenal opened evenhandler
["ace_arsenal_displayOpened", {
	if (!isnil "cgqc_arsenal_mk2_boxes") then {
		if (_this in cgqc_arsenal_mk2_boxes) then {
			[_this, cgqc_mk2_arsenal_list] call ace_arsenal_fnc_initBox;
		};
	};
}] call CBA_fnc_addEventHandler;
*/





