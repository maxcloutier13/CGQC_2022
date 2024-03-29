class Tier1_Glock19_WAR_TB;
class rhs_weap_m4a1_blockII;
class rhs_weap_m4a1_blockII_M203;
class rhs_weap_mk18;
class Tier1_MK46_Mod1_Savit;
class Tier1_MK48_Mod0;
class cgqc_gun_hk417_wood;
class arifle_mas_can_mp7_F;
class rhs_weap_mk18_m320;
class launch_B_Titan_short_F;
class srifle_LRR_F;
class arifle_SPAR_03_blk_F;
class CBA_MiscItem_ItemInfo;
class CBA_MiscItem;
class rhs_weap_m16a4_imod;
class gtr_weap_Mk12_Base;
class SMG_03C_TR_khaki;
class SMG_03C_TR_black;
class BaseSoundModeType;
class srifle_mas_can_LRR_F;
class arifle_SPAR_03_base_F;

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
class cgqc_gun_mk1_m200 : srifle_mas_can_LRR_F
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
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "muzzle_snds_408";
		};
	};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CGQC_2022\guns\cgqc_gun_m200_black.paa"};
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
class cgqc_gun_mk1_m200_arid : srifle_mas_can_LRR_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m200_arid";
	baseWeapon = "cgqc_gun_mk1_m200_arid";
	displayName = "CGQC M200 Intervention - Arid";
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
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CGQC_2022\guns\cgqc_gun_m200_arid.paa"};
};
class cgqc_gun_mk1_m200_sand : srifle_mas_can_LRR_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m200_sand";
	baseWeapon = "cgqc_gun_mk1_m200_sand";
	displayName = "CGQC M200 Intervention - Sand";
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
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CGQC_2022\guns\cgqc_gun_m200_sand.paa"};
};
class cgqc_gun_mk1_m200_semiarid : srifle_mas_can_LRR_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m200_semiarid";
	baseWeapon = "cgqc_gun_mk1_m200_semiarid";
	displayName = "CGQC M200 Intervention - Semi-Arid";
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
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CGQC_2022\guns\cgqc_gun_m200_semiarid.paa"};
};
class cgqc_gun_mk1_m200_tropical : srifle_mas_can_LRR_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m200_tropical";
	baseWeapon = "cgqc_gun_mk1_m200_tropical";
	displayName = "CGQC M200 Intervention - Tropical";
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
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CGQC_2022\guns\cgqc_gun_m200_tropical.paa"};
};
class cgqc_gun_mk1_hk417_canpat : arifle_SPAR_03_base_F
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC HK417 Canpat";
	picture = "\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_blk_F_X_CA.paa";
	hiddenSelectionsTextures[] = {
		"\CGQC\guns\cgqc_gun_spar17_canpat_1.paa",		  // spar3_01 - Guard+barrel
		"\CGQC\guns\cgqc_gun_spar17_canpat_2.paa",		  // spar3_02 - Receiver?
		"\CGQC\guns\cgqc_gun_spar17_canpat_buttstock.paa" // spar1_01 - Buttstock
	};
};
class cgqc_gun_mk1_hk417_wood : arifle_SPAR_03_base_F
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC HK417 Woodland";
	picture = "\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_blk_F_X_CA.paa";
	hiddenSelectionsTextures[] = {
		"\CGQC\guns\cgqc_gun_spar17_wood_1.paa",		// spar3_01 - Guard+barrel
		"\CGQC\guns\cgqc_gun_spar17_wood_2.paa",		// spar3_02 - Receiver?
		"\CGQC\guns\cgqc_gun_spar17_wood_buttstock.paa" // spar1_01 - Buttstock
	};
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


// Player skins
class cgqc_gun_mk1_hk417_tremblay : arifle_SPAR_03_base_F
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC HK417 Le Tremblay";
	picture = "\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_blk_F_X_CA.paa";
	hiddenSelectionsTextures[] = {
		"\CGQC\guns\cgqc_gun_spar17_tremblay_1.paa",	// spar3_01 - Guard+barrel
		"\CGQC\guns\cgqc_gun_spar17_tremblay_2.paa",	// spar3_02 - Receiver?
		"\CGQC\guns\cgqc_gun_spar17_wood_buttstock.paa" // spar1_01 - Buttstock
	};
};
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