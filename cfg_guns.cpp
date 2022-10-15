class Tier1_Glock19_WAR_TB;
class rhs_weap_m4a1_blockII;
class rhs_weap_m4a1_blockII_M203;
class rhs_weap_mk18;
class Tier1_MK46_Mod1_Savit;
class Tier1_MK48_Mod0;
class cgqc_gun_hk417_wood;
class launch_MRAWS_green_F;
class arifle_mas_can_mp7_F;
class rhs_weap_mk18_m320;
class launch_B_Titan_short_F;
class srifle_LRR_F;
class arifle_SPAR_03_blk_F;
class Rangefinder;
class Laserdesignator_03;
class CBA_MiscItem_ItemInfo;
class MRH_BluForTransponder;
class CBA_MiscItem;
class rhs_weap_m16a4_imod;
class gtr_weap_Mk12_Base;
class SMG_03C_TR_khaki;
class SMG_03C_TR_black;

// Pistol.
class cgqc_gun_glock19_wood : Tier1_Glock19_WAR_TB
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_glock19_wood";
	baseWeapon = "cgqc_gun_glock19_wood";
	displayName = "CGQC Glock19";
	//model = "\cgqc_2022\guns\cgqc_gun_g19_wood.p3d";
	/*
	hiddenSelectionsTextures[] = {
		"\CGQC\guns\cgqc_gun_p99_wood.paa"};
	*/
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "tier1_dbalpl";
		};
	};
};

// Items -----------------------------------------------------------------------
class cgqc_item_helmetCam : CBA_MiscItem
{
	scope = 1;
	author = "Gundy-Riouken-Raspu-silent1";
	displayname = "CGQC Camera";
	descriptionshort = "Caméra de casque";
	descriptionuse = "<t color='#9cf953'>Use: </t>Used to record and stream video";
	picture = "\cTab\img\cTab_helmetCam_ico.paa";
	simulation = "Weapon";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
		mass = 1;
	};
};
class cgqc_item_transponder : MRH_BluForTransponder
{
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	author = "silent1";
	displayName = "CGQC BluFor Transponder";
	editorCategory = "EdCat_Equipment";
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
	editorSubcategory = "EdSubcat_InventoryItems";
	// picture = "\MRHSatellite\paa\transponder.paa";
	descriptionShort = "Transponder (plus léger)";
	ace_arsenal_hide = 0;
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
		mass = 1;
	};
};
class cgqc_item_rangefinder : Rangefinder
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_item_rangefinder";
	baseWeapon = "cgqc_item_rangefinder";
	displayName = "CGQC Rangefinder ";
};
class cgqc_item_laserdesignator : Laserdesignator_03
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_item_laserdesignator";
	baseWeapon = "cgqc_item_laserdesignator";
	displayName = "CGQC Laser Designator";
};

// Basic guns -----------------------------------------------------------------------------------
class cgqc_gun_mk1_m4a1blkII : rhs_weap_m4a1_blockII
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m4a1blkII";
	baseWeapon = "cgqc_gun_mk1_m4a1blkII";
	displayName = "CGQC m4a1 Block II";
	// hiddenSelectionsTextures[] = {"\CGQC\guns\rhs_weap_m72a7.paa"};
};
class cgqc_gun_mk1_m4a1blkII_gl : rhs_weap_m4a1_blockII_M203
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m4a1blkII_gl";
	baseWeapon = "cgqc_gun_mk1_m4a1blkII_gl";
	displayName = "CGQC m4a1 Block II m203";
	// hiddenSelectionsTextures[] = {"\CGQC\guns\rhs_weap_m72a7.paa"};
};
class cgqc_gun_mk1_mk18 : rhs_weap_mk18
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_mk18";
	baseWeapon = "cgqc_gun_mk1_mk18";
	displayName = "CGQC mk18";
	// model = "\cgqc_2022\guns\MK18.p3d";
	hiddenSelectionsTextures[] = {"cgqc_2022\guns\m4\m4_cgqc.paa",
								  "\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_t_co.paa",
								  "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
								  "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
								  "rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
								  "\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"};
};
class cgqc_gun_mk1_hk417 : arifle_SPAR_03_blk_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_hk417";
	baseWeapon = "cgqc_gun_mk1_hk417";
	displayName = "CGQC hk417";
	// hiddenSelectionsTextures[] = {"\CGQC\guns\rhs_weap_m72a7.paa"};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_SandmanS_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_Razor_Gen3_110_Geissele_Docter";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_bk_light";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "bipod_01_F_blk";
		};
	};
};
class cgqc_gun_mk1_mk46 : Tier1_MK46_Mod1_Savit
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_mk46";
	baseWeapon = "cgqc_gun_mk1_mk46";
	displayName = "CGQC mk46";
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_EXPS3_0_3xMag_Black_Up";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_Mk46Mod1_LA5_M600V_Black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "Tier1_SAW_Bipod_DD";
		};
	};
};
class cgqc_gun_mk1_mk48 : Tier1_MK48_Mod0
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_mk48";
	baseWeapon = "cgqc_gun_mk1_mk48";
	displayName = "CGQC mk48";
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_SOCOM762MG_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_EXPS3_0_3xMag_Black_Up";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_Mk48Mod0_LA5_M600V_Black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "Tier1_SAW_Bipod_2_KAC";
		};
	};
};
class cgqc_gun_mk1_MAAWS : launch_MRAWS_green_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_MAAWS";
	baseWeapon = "cgqc_gun_mk1_MAAWS";
	displayName = "CGQC MAAWS";
	hiddenSelectionsTextures[] = {
		"\CGQC_2022\guns\cgqc_gun_maaws_darkgreen",
		"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
	class LinkedItems
	{
	};
};
class cgqc_gun_mk1_mp7 : arifle_mas_can_mp7_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_mp7";
	baseWeapon = "cgqc_gun_mk1_mp7";
	displayName = "CGQC MP7";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "optic_ACO_grn";
		};
	};
};
class cgqc_gun_mk1_mk18_gl : rhs_weap_mk18_m320
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_mk18_gl";
	baseWeapon = "cgqc_gun_mk1_mk18_gl";
	displayName = "CGQC Mk18 M320";
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_Eotech551_L3_Black_Up";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_M4BII_NGAL_M600V_Black";
		};
	};
};
class cgqc_gun_mk1_Javelin : launch_B_Titan_short_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_Javelin";
	displayName = "CGQC Javelin mk1";
	scopeArsenal = 2;
	baseWeapon = "cgqc_gun_mk1_Javelin";
	model = "\mas_can_lite\akm\mas_Javelin_Launcher.p3d";
	picture = "\mas_can_lite\akm\gear_javelin_x_ca.paa";
	reloadAction = "ReloadRPG";
	magazines[] = {"jav_AT_mas_can", "jav_AP_mas_can"};
	descriptionshort = "Anti Tank Launcher<br />Caliber: 127 mm";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	ace_javelin_enabled = 1;
};
class cgqc_gun_mk1_m200 : srifle_LRR_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m200";
	baseWeapon = "cgqc_gun_mk1_m200";
	displayName = "CGQC M200 Intervention";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "optic_lrps";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "ace_acc_pointer_green";
		};
	};
};
class cgqc_gun_mk1_m16a4 : rhs_weap_m16a4_imod
{
	scope = 2;
	scopeArsenal = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m16a4";
	displayName = "CGQC m16a4";
	baseWeapon = "cgqc_gun_mk1_m16a4";
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "NForce_Atcr_RMR_Top_SKeetIR_Down";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_M4BII_NGAL_M600V_Black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "Tier1_Harris_Bipod_Black";
		};
	};
};
class cgqc_gun_mk1_mk12 : gtr_weap_Mk12_Base
{
	scope = 2;
	scopeArsenal = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_mk12";
	displayName = "CGQC mk12";
	baseWeapon = "cgqc_gun_mk1_mk12";
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "NForce_Atcr_RMR_Top_SKeetIR_Down";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_M4BII_NGAL_M600V_Black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "Tier1_Harris_Bipod_Black";
		};
	};
};
class cgqc_gun_mk1_p90 : SMG_03C_TR_black
{
	scope = 2;
	scopeArsenal = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_p90";
	displayName = "CGQC P90";
	baseWeapon = "cgqc_gun_mk1_p90";
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "muzzle_snds_570";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "optic_ACO_grn";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_NGAL_Side";
		};
	};
};
class cgqc_gun_mk1_p90_khaki : cgqc_gun_mk1_p90
{
	scope = 2;
	scopeArsenal = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_p90_khaki";
	displayName = "CGQC P90 - Khaki";
	baseWeapon = "cgqc_gun_mk1_p90_khaki";
	picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_khaki_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
};
// Custom skins
class cgqc_gun_mk1_mk18_fortin : cgqc_gun_mk1_mk18 
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_mk18_fortin";
	baseWeapon = "cgqc_gun_mk1_mk18_fortin";
	displayName = "CGQC mk18 - Fortin";
	// model = "\cgqc_2022\guns\MK18.p3d";
	hiddenSelectionsTextures[] = {"cgqc_2022\guns\m4\m4_fortin.paa",
								  "\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_t_co.paa",
								  "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
								  "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
								  "rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
								  "\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"};
};
class cgqc_gun_mk1_MAAWS_laforest : launch_MRAWS_green_F 
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_MAAWS_laforest";
	baseWeapon = "cgqc_gun_mk1_MAAWS_laforest";
	displayName = "CGQC - Le Scalpel de Laforest";
	hiddenSelectionsTextures[] = {
	"\CGQC_2022\guns\cgqc_gun_maaws_laforest",
	"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
	class LinkedItems
	{
	};
};
class cgqc_gun_mk1_MAAWS_cadpat : launch_MRAWS_green_F 
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_MAAWS_cadpat";
	baseWeapon = "cgqc_gun_mk1_MAAWS_cadpat";
	displayName = "CGQC MAAWS - Cadpat";
	hiddenSelectionsTextures[] = {
	"\CGQC_2022\guns\cgqc_gun_MAAWS_cadpat",
	"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
	class LinkedItems
	{
	};
};
class cgqc_gun_mk1_MAAWS_woodland : launch_MRAWS_green_F 
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_MAAWS_woodland";
	baseWeapon = "cgqc_gun_mk1_MAAWS_woodland";
	displayName = "CGQC MAAWS - Woodland";
	hiddenSelectionsTextures[] = {
	"\CGQC_2022\guns\cgqc_gun_maaws_woodland",
	"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
	class LinkedItems
	{
	};
};
class cgqc_gun_mk1_mk12_woodland : gtr_weap_Mk12_Base
{
	scope = 2;
	scopeArsenal = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_mk12_woodland";
	displayName = "CGQC mk12 - woodland";
	baseWeapon = "cgqc_gun_mk1_mk12_woodland";
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "NForce_Atcr_RMR_Top_SKeetIR_Down";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_M4BII_NGAL_M600V_Black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "Tier1_Harris_Bipod_Black";
		};
	};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\cgqc_2022\guns\cgqc_gun_mk12_woodland.paa"};
};

// mk1 setup ----------------------------------------------------------------------------------
class cgqc_gun_mk1_hq_m4a1 : cgqc_gun_mk1_m4a1blkII
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_Razor_Gen2_16_Geissele_Docter";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_M4BII_NGAL_M600V_Black";
		};
	};
};
class cgqc_gun_mk1_TL_m4a1 : cgqc_gun_mk1_m4a1blkII_gl
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_Razor_Gen2_16_Geissele_Docter";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_M4BII_NGAL_M600V_Black";
		};
	};
};
class cgqc_gun_mk1_rifleman_m4a1 : cgqc_gun_mk1_m4a1blkII
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_EXPS3_0_3xMag_Black_Up";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_M4BII_NGAL_M300C_Black_FL";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_grip2";
		};
	};
};
class cgqc_gun_mk1_rifleman_mk18 : cgqc_gun_mk1_mk18
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_EXPS3_0_3xMag_Black_Up";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_Mk18_NGAL_M300C_Black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_grip2";
		};
	};
};
class cgqc_gun_mk1_marksman_417 : cgqc_gun_hk417_wood
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "cgqc_acc_silencer_wood";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "optic_AMS";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "cgqc_acc_anpeq15_laser_wood";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "cgqc_acc_bipod_wood";
		};
	};
};
class cgqc_gun_mk1_engineer_m4a1 : cgqc_gun_mk1_m4a1blkII
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_EXPS3_0_3xMag_Black_Up";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_M4BII_NGAL_M300C_Black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_grip2";
		};
	};
};
class cgqc_gun_mk1_medic_m4a1 : cgqc_gun_mk1_m4a1blkII
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_Razor_Gen2_16_Geissele_Docter";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_M4BII_NGAL_M300C_Black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_grip2";
		};
	};
};
class cgqc_gun_mk1_AT_m4a1 : cgqc_gun_mk1_m4a1blkII
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "Tier1_EXPS3_0_3xMag_Black_Up";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_Mk18_NGAL_M300C_Black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_grip2";
		};
	};
};
class cgqc_gun_mk1_jtac_mk12 : cgqc_gun_mk1_mk12
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "Tier1_KAC_556_QDC_CQB_Black";
		};
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "NForce_Atcr_RMR_Top_SKeetIR_Down";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "Tier1_M4BII_NGAL_M600V_Black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "Tier1_Harris_Bipod_Black";
		};
	};
};