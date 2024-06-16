// == PMC-Turcotte =*****************************************************************=
class CGQC_units_PMC_rifleman : cgqc_soldat_moderne
{
	faction = "CGQC_PMC_T";
	editorSubcategory = "EdSubcat_CGQC_pmc_t";
	side = 1;
	scope = 2;
    scopeCurator = 2;
	displayName = "Rifleman";
	uniformClass = "U_mas_can_B_CombatUniform_T_aor2";
	backpack = "B_AssaultPack_cbr";
	weapons[] = {"hlc_rifle_ak12", "Binocular", "Throw", "Put"};
	magazines[] = {"SmokeShell", "SmokeShell", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "rhs_mag_rgd5", "rhs_mag_rgd5", "hlc_30Rnd_545x39_B_AK_Black"};
	items[] = {"cgqc_items_ifak", "ACRE_PRC343", "ItemAndroid", "ACE_Cellphone", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_EntrenchingTool"};
	linkedItems[] = {"LOP_V_CarrierLite_TAN", "PO_H_SSh68Helmet_Partizan_2", "G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "hlc_muzzle_SF3P_762R", "rhs_acc_2dpZenit_ris", "rhs_acc_1p87"};
	editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_0_TeamLeader_Carbine.jpg";
};

class CGQC_units_PMC_0_TeamLeaderSquadLeader : CGQC_units_PMC_rifleman
{
    displayName = "TeamLeader/SquadLeader";
	backpack = "cgqc_pack_mk1_radiobag_black";
	weapons[] = {"hlc_rifle_ak12GL", "Binocular", "Throw", "Put"};
	magazines[] = {"SmokeShell", "SmokeShell", "rhs_mag_rgd5", "rhs_mag_rgd5", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_GRD_White", "hlc_GRD_White", "hlc_GRD_White", "hlc_30Rnd_545x39_B_AK_Black", "hlc_VOG25_AK"};
	items[] = {"cgqc_items_ifak", "ACRE_PRC343", "ItemAndroid", "ACE_Cellphone", "azm_bft_tx", "azm_bft_rx", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_EntrenchingTool", "ACRE_PRC152", "ACRE_PRC152", "ItemcTab"};
    perks = "sl";
};


class CGQC_units_PMC_0_Grenadier : CGQC_units_PMC_rifleman
{
    displayName = "Grenadier";
	weapons[] = {"hlc_rifle_ak12GL", "Binocular", "Throw", "Put"};
	magazines[] = {"SmokeShell", "SmokeShell", "rhs_mag_rgd5", "rhs_mag_rgd5", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_GRD_White", "hlc_GRD_White", "hlc_GRD_White", "hlc_GRD_Red", "hlc_GRD_Red", "hlc_GRD_Red", "hlc_GRD_green", "hlc_GRD_green", "hlc_GRD_green", "hlc_30Rnd_545x39_B_AK_Black", "hlc_VOG25_AK"};
};

class CGQC_units_PMC_0_AutoRifleman : CGQC_units_PMC_rifleman
{
    displayName = "AutoRifleman";
	weapons[] = {"hlc_rifle_RPK12", "Binocular", "Throw", "Put"};
	magazines[] = {"SmokeShell", "SmokeShell", "rhs_mag_rgd5", "rhs_mag_rgd5", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix", "grcb_60Rnd_545x39_mix"};
    perks = "mg";
};

class CGQC_units_PMC_0_HeavyMachinegunner : CGQC_units_PMC_rifleman
{
    displayName = "HMG (MG3)";
	weapons[] = {"hlc_lmg_MG3KWS_b", "hlc_pistol_Mk25", "Binocular", "Throw", "Put"};
	magazines[] = {"SmokeShell", "SmokeShell", "rhs_mag_rgd5", "rhs_mag_rgd5", "hlc_15Rnd_9x19_B_P226", "hlc_15Rnd_9x19_B_P226", "hlc_15Rnd_9x19_B_P226", "hlc_15Rnd_9x19_B_P226", "Tier1_250Rnd_762x51_Belt_M80A1_EPR", "Tier1_250Rnd_762x51_Belt_M80A1_EPR", "Tier1_250Rnd_762x51_Belt_M80A1_EPR", "hlc_13Rnd_9x19_B_P228"};
	linkedItems[] = {"LOP_V_CarrierLite_TAN", "rhs_altyn_bala", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "rhs_acc_1p87", "HLC_Optic228_Docter_CADEX"};
    perks = "mg";
};

class CGQC_units_PMC_0_AntiTankRifleman : CGQC_units_PMC_rifleman
{
    displayName = "AT Rifleman";
	backpack = "rhs_rpg_2";
	weapons[] = {"hlc_rifle_ak12", "rhs_weap_rpg7", "Binocular", "Throw", "Put"};
	magazines[] = {"SmokeShell", "SmokeShell", "rhs_mag_rgd5", "rhs_mag_rgd5", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "RPG7_F", "RPG7_F", "RPG7_F", "hlc_30Rnd_545x39_B_AK_Black", "RPG7_F"};
    perks = "at";
};

class CGQC_units_PMC_0_Engineer : CGQC_units_PMC_rifleman
{
    displayName = "Engineer";
	magazines[] = {"SmokeShell", "SmokeShell", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "hlc_30Rnd_545x39_B_AK_Black", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhssaf_tm500_mag", "rhssaf_tm200_mag", "rhssaf_tm200_mag", "rhssaf_tm100_mag", "rhssaf_tm100_mag", "rhssaf_tm100_mag", "rhssaf_tm100_mag", "hlc_30Rnd_545x39_B_AK_Black"};
	items[] = {"cgqc_items_ifak", "ACRE_PRC343", "ItemAndroid", "ACE_Cellphone", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_EntrenchingTool", "ACE_M26_Clacker", "ToolKit", "ACE_DefusalKit"};
	perks = "eng";
};

class CGQC_units_PMC_0_Medic : CGQC_units_PMC_rifleman
{
    displayName = "Medic";
	items[] = {"cgqc_items_ifak", "ACRE_PRC343", "ItemAndroid", "ACE_Cellphone", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_EntrenchingTool", "cgqc_items_medkit", "FSGm_ItemMedicBag"};
	perks = "med";
};

class CGQC_units_PMC_0_DroneOperator : CGQC_units_PMC_rifleman
{
    displayName = "DroneOperator";
	backpack = "B_UAV_01_backpack_F";
	items[] = {"cgqc_items_ifak", "ACRE_PRC343", "ItemAndroid", "ACE_Cellphone", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_EntrenchingTool", "ACE_UAVBattery", "ACE_UAVBattery"};
};

class CGQC_units_PMC_0_Marksman1 : CGQC_units_PMC_rifleman
{
    displayName = "Marksman (SVD)";
	weapons[] = {"rhs_weap_svdp_npz", "hlc_pistol_Mk25", "Rangefinder", "Throw", "Put"};
	magazines[] = {"SmokeShell", "SmokeShell", "rhs_mag_rgd5", "rhs_mag_rgd5", "hlc_15Rnd_9x19_B_P226", "hlc_15Rnd_9x19_B_P226", "hlc_15Rnd_9x19_B_P226", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N14", "hlc_15Rnd_9x19_B_P226"};
	items[] = {"cgqc_items_ifak", "ACRE_PRC343", "ItemAndroid", "ACE_Cellphone", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_EntrenchingTool", "ACE_Kestrel4500", "ACE_ATragMX", "ACE_Flashlight_KSF1"};
	linkedItems[] = {"LOP_V_CarrierLite_TAN", "PO_H_SSh68Helmet_Partizan_2", "rhssaf_veil_Green", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "hlc_optic_ATACR_Offset"};
};

class CGQC_units_PMC_0_Marksman2 : CGQC_units_PMC_rifleman
{
    displayName = "Marksman (AWP)";
	weapons[] = {"hlc_rifle_awmagnum_BL", "hlc_pistol_Mk25", "Rangefinder", "Throw", "Put"};
	magazines[] = {"SmokeShell", "SmokeShell", "rhs_mag_rgd5", "rhs_mag_rgd5", "hlc_15Rnd_9x19_B_P226", "hlc_15Rnd_9x19_B_P226", "hlc_15Rnd_9x19_B_P226", "hlc_5rnd_300WM_AP_AWM", "hlc_5rnd_300WM_AP_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM", "hlc_15Rnd_9x19_B_P226"};
	items[] = {"cgqc_items_ifak", "ACRE_PRC343", "ItemAndroid", "ACE_Cellphone", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_EntrenchingTool", "ACE_Kestrel4500", "ACE_ATragMX", "ACE_Flashlight_KSF1"};
};

class CGQC_units_PMC_0_CrewCommander : CGQC_units_PMC_rifleman
{
    displayName = "Crew Commander";
	backpack = "cgqc_pack_mk1_magic";
	weapons[] = {"hlc_rifle_aku12", "Binocular", "Throw", "Put"};
	items[] = {"cgqc_items_ifak", "ACRE_PRC343", "ItemAndroid", "ACE_Cellphone", "azm_bft_tx", "azm_bft_rx", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_EntrenchingTool", "ACRE_PRC152", "ACRE_PRC152", "ToolKit"};
	linkedItems[] = {"cgqc_vest_mk1_driver", "rhs_tsh4_ess_bala", "rhs_facewear_6m2_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "hlc_muzzle_SF3P_762R", "rhs_acc_2dpZenit_ris", "rhs_acc_1p87"};
	perks = "driver";
};

class CGQC_units_PMC_0_CrewMember : CGQC_units_PMC_rifleman
{
    displayName = "Crew Member";
	backpack = "cgqc_pack_mk1_magic";
	weapons[] = {"hlc_rifle_aku12", "Binocular", "Throw", "Put"};
	items[] = {"cgqc_items_ifak", "ACRE_PRC343", "ItemAndroid", "ACE_Cellphone", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_EntrenchingTool", "ToolKit"};
	linkedItems[] = {"cgqc_vest_mk1_driver", "rhs_tsh4_ess_bala", "rhs_facewear_6m2_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "hlc_muzzle_SF3P_762R", "rhs_acc_2dpZenit_ris", "rhs_acc_1p87"};
	perks = "tank_crew";
};

class CGQC_units_PMC_0_GameMaster : CGQC_units_PMC_rifleman
{
    displayName = "GameMaster";
	uniformClass = "U_I_G_Story_Protagonist_F";
	backpack = "";
	weapons[] = {"hlc_rifle_aku12", "Binocular", "Throw", "Put"};
	items[] = {"cgqc_items_ifak", "ACRE_PRC343", "ItemAndroid", "ACE_Cellphone", "azm_bft_tx", "azm_bft_rx", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACRE_PRC152", "ACRE_PRC152"};
	linkedItems[] = {"LOP_V_CarrierLite_TAN", "H_Watchcap_blk", "rhs_facewear_6m2_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "hlc_muzzle_SF3P_762R", "rhs_acc_2dpZenit_ris", "rhs_acc_ekp8_18"};
    perks = "zeus";
};