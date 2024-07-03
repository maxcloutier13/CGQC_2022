class hlc_ak_base;
class hlc_rifle_aku12;

class hlc_rifle_RK62 : hlc_ak_base{
	ACE_barrelTwist = 240.0;
	ACE_barrelLength = 418.0;
};
class hlc_rifle_ak12 : hlc_ak_base {
	ACE_barrelTwist = 228.6;
	ACE_barrelLength = 415;
};
class hlc_rifle_ak12GL : hlc_rifle_ak12 {
	ACE_barrelTwist = 228.6;
	ACE_barrelLength = 415;
};

class cgqc_gun_pmct_ak12 : hlc_rifle_ak12 {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_ak12";
	baseWeapon = "cgqc_gun_pmct_ak12";
	displayName = "PMC-T AK-12";

	class LinkedItems	{
		class LinkedItemsMuzzle		{
			slot = "MuzzleSlot";
			item = "hlc_muzzle_SF3P_762R";
		};
		class LinkedItemsOptic		{
			slot = "CowsSlot";
			item = "rhs_acc_1p87";
		};
		class LinkedItemsAcc		{
			slot = "PointerSlot";
			item = "rhs_acc_2dpZenit_ris";
		};
	};
};
class cgqc_gun_pmct_ak12gl : hlc_rifle_ak12GL {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_ak12gl";
	baseWeapon = "cgqc_gun_pmct_ak12gl";
	displayName = "PMC-T AK-12GL";
	class LinkedItems	{
		class LinkedItemsMuzzle	{
			slot = "MuzzleSlot";
			item = "hlc_muzzle_SF3P_762R";
		};
		class LinkedItemsOptic	{
			slot = "CowsSlot";
			item = "rhs_acc_1p87";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhs_acc_2dpZenit_ris";
		};
	};
};
class cgqc_gun_pmct_aku12 : hlc_rifle_aku12 {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_aku12";
	baseWeapon = "cgqc_gun_pmct_aku12";
	displayName = "PMC-T AK-12U";
	class LinkedItems	{
		class LinkedItemsMuzzle	{
			slot = "MuzzleSlot";
			item = "hlc_muzzle_SF3P_762R";
		};
		class LinkedItemsOptic	{
			slot = "CowsSlot";
			item = "rhs_acc_1p87";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhs_acc_2dpZenit_ris";
		};
	};
};

// Custom versions
class cgqc_gun_pmct_ak12trig : hlc_rifle_ak12 {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_ak12trig";
	baseWeapon = "cgqc_gun_pmct_ak12trig";
	displayName = "PMC-T TrigMod AK12";
	modes[] = {"Single", "FullAuto"};
};
class cgqc_gun_pmct_ak12gltrig : hlc_rifle_ak12GL {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_ak12gltrig";
	baseWeapon = "cgqc_gun_pmct_ak12gltrig";
	displayName = "PMC-T TrigMod AK12GL";
	modes[] = {"FullAuto"};
};

class cgqc_gun_pmct_aku12trig : hlc_rifle_aku12 {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_aku12trig";
	baseWeapon = "cgqc_gun_pmct_aku12trig";
	displayName = "PMC-T TrigMod AK12U";
	modes[] = {"Single", "FullAuto"};
};

class hlc_rifle_RPK12;
class cgqc_gun_pmct_rpk12 : hlc_rifle_RPK12 {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_rpk12";
	baseWeapon = "cgqc_gun_pmct_rpk12";
	displayName = "PMC-T RPK 12";
	class LinkedItems	{
		class LinkedItemsMuzzle	{
			slot = "MuzzleSlot";
			item = "hlc_muzzle_SF3P_762R";
		};
		class LinkedItemsOptic	{
			slot = "CowsSlot";
			item = "rhs_acc_1p87";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhs_acc_2dpZenit_ris";
		};
	};
};

class hlc_lmg_MG3KWS_b;
class cgqc_gun_pmct_mg3 : hlc_lmg_MG3KWS_b {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_mg3";
	baseWeapon = "cgqc_gun_pmct_mg3";
	displayName = "PMC-T MG3";
	class LinkedItems	{
		class LinkedItemsOptic	{
			slot = "CowsSlot";
			item = "rhs_acc_1p87";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "HLC_Optic228_Docter_CADEX";
		};
	};
};

class rhs_weap_svdp_npz;
class cgqc_gun_pmct_svd : rhs_weap_svdp_npz {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_svd";
	baseWeapon = "cgqc_gun_pmct_svd";
	displayName = "PMC-T SVD";
	class LinkedItems	{
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "optic_DMS";
		};
	};
};

class hlc_rifle_awmagnum_BL;
class cgqc_gun_pmct_AWM : hlc_rifle_awmagnum_BL {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_svd";
	baseWeapon = "cgqc_gun_pmct_svd";
	displayName = "PMC-T AWM";
	class LinkedItems	{
		class LinkedItemsOptic	{
			slot = "CowsSlot";
			item = "rhsusf_acc_premier";
		};
	};
};



class cgqc_gun_pmct_aku12_zeus : hlc_rifle_aku12 {
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_pmct_aku12_zeus";
	baseWeapon = "cgqc_gun_pmct_aku12_zeus";
	displayName = "PMC-T AKU 12 Zeus";
	class LinkedItems	{
		class LinkedItemsMuzzle	{
			slot = "MuzzleSlot";
			item = "hlc_muzzle_SF3P_762R";
		};
		class LinkedItemsOptic	{
			slot = "CowsSlot";
			item = "rhs_acc_ekp8_18";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhs_acc_2dpZenit_ris";
		};
	};
};