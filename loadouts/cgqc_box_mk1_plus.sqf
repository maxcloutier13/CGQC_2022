_source = _this select 0;
waitUntil {sleep 1;cgqc_postInitClient_done};
if (!isNil "_source") then {
    // load default mk1 arsenal 
    _items = ["cgqc_gun_glock19_wood", "Tier1_15Rnd_9x19_JHP", "cgqc_uniform_mk1", "ItemAndroid", "ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR", "cgqc_vest_mk1_belt", "cgqc_pack_mk1_magic", "ACE_salineIV_500", "ACE_EntrenchingTool", "ACE_Chemlight_HiRed", "ACE_Chemlight_IR", "SmokeShell", "SmokeShellBlue", "SmokeShellRed", "B_IR_Grenade", "cgqc_cap_green", "None", "cgqc_item_rangefinder", "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "Tier1_KAC_556_QDC_CQB_Black", "Tier1_M4BII_NGAL_M600V_Black", "Tier1_EXPS3_0_3xMag_Black_Up", "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull", "cgqc_vest_mk1_tan", "G_mas_can_gasmask", "ItemcTab", "ACE_M84", "MiniGrenade", "rhsusf_m112_mag", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "Laserdesignator_01_khk_F", "B_UavTerminal", "NVGoggles_mas_can_hv", "Tier1_Razor_Gen2_16_Geissele_Docter", "1Rnd_HE_Grenade_shell", "rhs_mag_m67", "UGL_FlareRed_F", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "G_mas_can_wrap_gog_B", "cgqc_gun_mk1_mk18_gl", "Tier1_Eotech551_L3_Black_Up", "G_mas_can_balaM_b", "Tier1_M4BII_NGAL_M300C_Black_FL", "rhsusf_acc_grip2", "rhs_weap_m72a7", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T", "Tier1_Mk18_NGAL_M300C_Black", "cgqc_vest_mk1_tan_rf", "Tier1_M4BII_NGAL_M300C_Black", "ACE_salineIV", "cgqc_helmet_mk1_medic", "cgqc_vest_mk1_tan_ar", "ToolKit", "ACE_DefusalKit", "ACE_M26_Clacker", "rhsusf_m112x4_mag", "rhsusf_mine_m14_mag", "cgqc_gun_mk1_mk46", "Tier1_Mk46Mod1_LA5_M600V_Black", "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote", "Tier1_SAW_Bipod_DD", "cgqc_gun_mk1_mk48", "Tier1_SOCOM762MG_Black", "Tier1_Mk48Mod0_LA5_M600V_Black", "Tier1_100Rnd_762x51_Belt_M993_AP", "Tier1_SAW_Bipod_2_KAC", "Tier1_250Rnd_762x51_Belt_M993_AP", "cgqc_gun_mk1_hk417", "Tier1_SandmanS_Black", "rhsusf_acc_anpeq15_bk_light", "Tier1_Razor_Gen3_110_Geissele_Docter", "ACE_20Rnd_762x51_Mk319_Mod_0_Mag", "bipod_01_F_blk", "ACE_RangeCard", "ACE_ATragMX", "ACE_Kestrel4500", "ACE_Vector", "cgqc_gun_mk1_m200", "rhsusf_acc_nxs_5522x56_md_sun", "cgqc_gun_mk1_mp7", "optic_ACO_grn", "40Rnd_46x30SD_mas_can_mag", "cgqc_vest_mk1_pilot", "cgqc_helmet_mk1_tank", "cgqc_helmet_mk1_tank_turcotte", "cgqc_uniform_mk1_helipilot", "cgqc_vest_mk1_pilot_black", "cgqc_helmet_heli_black", "G_mas_can_wrap_B", "cgqc_helmet_crew_black", "Tier1_20Rnd_9x19_FMJ", "cgqc_uniform_mk1_jetpilot", "cgqc_helmet_mk1_jetpilot", "cgqc_gun_mk1_MAAWS", "MRAWS_HEAT_F", "cgqc_gun_mk1_Javelin", "jav_AT_mas_can", "cgqc_gun_mk1_m4a1blkII", "cgqc_gun_mk1_m4a1blkII_gl", "cgqc_gun_mk1_mk18", "cgqc_gun_p99_wood", "cgqc_beret_blue", "cgqc_beret_vanilla", "cgqc_beret_green", "cgqc_pack_mk1_kitbag", "Tier1_HK416D10_SMR_MFT", "Tier1_HK416D145_SMR_MFT", "rhs_weap_M107", "Tier1_M110k5", "rhs_weap_m14ebrri", "rhs_weap_m16a4_imod_M203", "rhs_weap_XM2010", "UK3CB_M21", "rhs_weap_m249", "rhs_weap_m4", "rhs_weap_m4_m203", "rhs_weap_m4_m203S", "rhs_weap_m4_m320", "rhs_weap_m4a1_carryhandle", "rhs_weap_m4a1_carryhandle_m203", "rhs_weap_m4a1_carryhandle_m203S", "Tier1_SIG_MCX_115_Virtus_300BLK", "srifle_DMR_02_F", "SMG_03_black", "rhs_weap_SCARH_CQC", "rhs_weap_SCARH_LB", "rhs_weap_SCARH_STD", "srifle_DMR_03_F", "Tier1_SR16_Carbine_Mod2_MFT_Black", "Tier1_SR16_CQB_Mod2_MFT_Black", "Tier1_SR25", "LMG_Mk200_F", "SMG_01_F", "launch_mas_can_Stinger_F", "rhs_weap_M136", "launch_NLAW_F", "Tier1_P320", "hgun_mas_can_p226_F", "optic_MRD_black", "Tier1_Docter", "Tier1_SIG_Romeo1", "Tier1_MRDS", "rhsusf_acc_ACOG_anpvs27", "rhsusf_acc_T1_low_fwd", "rhsusf_acc_RM05_fwd", "rhsusf_acc_mrds_fwd", "rhsusf_acc_mrds_fwd_c", "rhs_acc_ekp8_18", "rhs_acc_okp7_picatinny", "rhsusf_acc_LEUPOLDMK4_2", "rhsusf_acc_LEUPOLDMK4_2_mrds", "rhsusf_acc_premier", "rhsusf_acc_premier_mrds", "rhsusf_acc_premier_low", "rhsusf_acc_M8541", "rhsusf_acc_M8541_mrds", "rhsusf_acc_nxs_3515x50_md", "rhsusf_acc_nxs_3515x50f1_md", "rhsusf_acc_nxs_3515x50f1_md_sun", "rhsusf_acc_nxs_3515x50f1_h58", "rhsusf_acc_nxs_3515x50f1_h58_sun", "rhsusf_acc_nxs_5522x56_md", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_xps3", "rhsusf_acc_g33_xps3", "rhsusf_acc_g33_xps3_tan", "rhsusf_acc_g33_T1", "rhsusf_acc_compm4", "rhsusf_acc_T1_high", "rhsusf_acc_T1_low", "rhsusf_acc_RX01", "rhsusf_acc_RX01_NoFilter", "rhsusf_acc_RM05", "rhsusf_acc_mrds", "rhsusf_acc_mrds_c", "rhsusf_acc_ACOG", "rhsusf_acc_ACOG2", "rhsusf_acc_ACOG3", "rhsusf_acc_ELCAN", "rhsusf_acc_ELCAN_ard", "rhsusf_acc_su230", "rhsusf_acc_su230_mrds", "rhsusf_acc_su230a", "rhsusf_acc_su230a_mrds", "rhsusf_acc_M2A1", "rhsusf_acc_ACOG_MDO", "optic_SOS", "optic_MRCO", "optic_Arco_blk_F", "optic_Arco_AK_blk_F", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_Hamr", "optic_Holosight_blk_F", "optic_Holosight_smg_blk_F", "optic_lrps", "optic_AMS", "optic_KHS_blk", "optic_ERCO_blk_F", "Tier1_Eotech551_Black", "Tier1_Eotech551_3xMag_Black_Up", "Tier1_Eotech551_Riser_Black", "Tier1_Eotech551_3xMag_Riser_Black_Up", "Tier1_Eotech551_L3_Riser_Black_Up", "Tier1_Eotech553_Black", "Tier1_Eotech553_3xMag_Black_Up", "Tier1_Eotech553_L3_Black_Up", "Tier1_EXPS3_0_Black", "Tier1_EXPS3_0_G33_Black_Up", "Tier1_EXPS3_0_Riser_Black", "Tier1_EXPS3_0_G33_Riser_Black_Up", "Tier1_MicroT1_Low_Black", "Tier1_MicroT1_Leap_Black", "Tier1_MicroT1_Leap_3xMag_Black_Up", "Tier1_MicroT1_Leap_Riser_Black", "Tier1_MicroT1_Leap_3xMag_Riser_Black_Up", "Tier1_MicroT2_Low_Black", "Tier1_MicroT2_Black", "Tier1_MicroT2_3xMag_Black_Up", "Tier1_MicroT2_G33_Black_Up", "Tier1_MicroT2_Riser_Black", "Tier1_MicroT2_3xMag_Riser_Black_Up", "Tier1_MicroT2_G33_Riser_Black_Up", "Tier1_MicroT2_Leap_Black", "Tier1_MicroT2_Leap_3xMag_Black_Up", "Tier1_MicroT2_Leap_G33_Black_Up", "Tier1_MicroT2_Leap_Riser_Black", "Tier1_MicroT2_Leap_3xMag_Riser_Black_Up", "Tier1_MicroT2_Leap_G33_Riser_Black_Up", "Tier1_Romeo4T_BCD_Low_Black", "Tier1_Romeo4T_BCD_Black", "Tier1_Romeo4T_BCD_G33_Black_Up", "Tier1_Romeo4T_BCD_Riser_Black", "Tier1_Romeo4T_BCD_G33_Riser_Black_Up", "Tier1_Romeo4T_BCQ_Low_Black", "Tier1_Romeo4T_BCQ_Black", "Tier1_Romeo4T_BCQ_G33_Black_Up", "Tier1_Romeo4T_BCQ_Riser_Black", "Tier1_Romeo4T_BCQ_G33_Riser_Black_Up", "Tier1_Razor_Gen2_16", "Tier1_Razor_Gen3_110_ADM_T2", "Tier1_LeupoldM3A_ADM_Black", "Tier1_LeupoldM3A_ADM_T2_Black", "Tier1_LeupoldM3A_Geissele_Black", "Tier1_LeupoldM3A_Geissele_Docter_Black", "Tier1_Elcan_156_C1_Black_2D", "Tier1_Elcan_156_C1_Black", "Tier1_Elcan_156_C1_ARD_Black", "Tier1_Elcan_156_C1_ARD_Docter_Black", "Tier1_Elcan_156_C1_Docter_Black", "Tier1_Elcan_156_C2_Black", "Tier1_Elcan_156_C2_ARD_Black", "Tier1_Elcan_156_C2_ARD_Docter_Black", "Tier1_Elcan_156_C2_Docter_Black", "Tier1_Shortdot_ADM_Black", "Tier1_Shortdot_Geissele_Black", "Tier1_Shortdot_Geissele_Docter_Black", "Tier1_ATACR18_ADM_Black", "Tier1_ATACR18_ADM_T1_Black", "Tier1_ATACR18_Geissele_Black", "Tier1_ATACR18_Geissele_Docter_Black", "ACE_optic_MRCO_2D", "rhsgref_acc_RX01_NoFilter_camo", "rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_M8541_low", "rhsusf_acc_M8541_low_wd", "uk3cb_optic_artel_m14", "Tier1_EXPS3_0_3xMag_Riser_Black_Up", "acc_flashlight_pistol", "Tier1_TLR1", "Tier1_DBALPL", "Tier1_DBALPL_FL", "Tier1_X300U", "rhs_acc_2dpZenit_ris", "rhs_acc_perst1ik_ris", "rhs_acc_perst3", "rhsusf_acc_wmx_bk", "rhsusf_acc_M952V", "rhsusf_acc_anpeq15A", "rhsusf_acc_anpeq15", "rhsusf_acc_anpeq15_light", "rhsusf_acc_anpeq15_bk", "rhsusf_acc_anpeq15_bk_top", "rhsusf_acc_anpeq15side_bk", "acc_flashlight", "Tier1_M300C_Black", "Tier1_M600V_Black", "Tier1_NGAL_Top", "Tier1_NGAL_Side", "Tier1_SCAR_LA5_Top", "Tier1_SCAR_LA5_Side", "Tier1_SCAR_LA5_M300C_Black", "Tier1_SCAR_LA5_M300C_Black_FL", "Tier1_SCAR_LA5_M600V_Black", "Tier1_SCAR_LA5_M600V_Black_FL", "Tier1_SCAR_NGAL_Top", "Tier1_SCAR_NGAL_Side", "Tier1_SCAR_NGAL_M300C_Black", "Tier1_SCAR_NGAL_M300C_Black_FL", "Tier1_SCAR_NGAL_M600V_Black", "Tier1_SCAR_NGAL_M600V_Black_FL", "Tier1_M4BII_LA5_M300C_Black", "Tier1_M4BII_LA5_M300C_Black_FL", "Tier1_M4BII_LA5_M600V_Black", "Tier1_M4BII_LA5_M600V_Black_FL", "Tier1_M4BII_NGAL_Top", "Tier1_M4BII_NGAL_Side", "Tier1_M4BII_NGAL_M600V_Black_FL", "Tier1_Mk18_LA5_Top", "Tier1_Mk18_LA5_Side", "Tier1_Mk18_LA5_M300C_Black", "Tier1_Mk18_LA5_M300C_Black_FL", "Tier1_Mk18_LA5_M600V_Black", "Tier1_Mk18_LA5_M600V_Black_FL", "Tier1_Mk18_NGAL_Top", "Tier1_Mk18_NGAL_Side", "Tier1_Mk18_NGAL_M300C_Black_FL", "Tier1_Mk18_NGAL_M600V_Black", "Tier1_Mk18_NGAL_M600V_Black_FL", "Tier1_MP7_LA5_Side", "Tier1_MP7_LA5_M300C_Black", "Tier1_MP7_LA5_M300C_Black_FL", "Tier1_MP7_NGAL_Side", "Tier1_MP7_NGAL_M300C_Black", "Tier1_MP7_NGAL_M300C_Black_FL", "Tier1_M249_LA5_Side", "Tier1_M249_LA5_M600V_Black", "Tier1_M249_LA5_M600V_Black_FL", "Tier1_Mk46Mod1_LA5_M600V_Black_FL", "Tier1_Mk48Mod0_LA5_M600V_Black_FL", "Tier1_10_NGAL_Top", "Tier1_10_NGAL_Side", "Tier1_145_NGAL_Top", "Tier1_145_NGAL_Side", "Tier1_URX4_LA5_M300C_Black_FL", "Tier1_URX4_LA5_M600V_Black", "Tier1_URX4_LA5_M600V_Black_FL", "Tier1_URX4_LA5_M600V_alt_Black", "Tier1_URX4_LA5_M600V_alt_Black_FL", "Tier1_URX4_NGAL_Top", "Tier1_URX4_NGAL_Side", "Tier1_URX4_NGAL_M300C_Black", "Tier1_URX4_NGAL_M300C_Black_FL", "Tier1_URX4_NGAL_M600V_Black", "Tier1_URX4_NGAL_M600V_Black_FL", "Tier1_URX4_NGAL_M600V_alt_Black", "Tier1_URX4_NGAL_M600V_alt_Black_FL", "Tier1_MCX_LA5_M300C_Black", "Tier1_MCX_LA5_M300C_Black_FL", "Tier1_MCX_LA5_M600V_Black", "Tier1_MCX_LA5_M600V_Black_FL", "Tier1_MCX_NGAL_Top", "Tier1_MCX_NGAL_Side", "Tier1_MCX_NGAL_M300C_Black", "Tier1_MCX_NGAL_M300C_Black_FL", "Tier1_MCX_NGAL_M600V_Black", "Tier1_MCX_NGAL_M600V_Black_FL", "acc_flashlight_smg_01", "rhs_acc_at4_handler", "Tier1_URX4_LA5_M300C_Black", "rhsusf_acc_omega9k", "muzzle_snds_L", "Tier1_Octane9", "Tier1_Evo9", "Tier1_TiRant9", "Tier1_TiRant9S", "Tier1_Agency_Compensator", "ACE_muzzle_mzls_smg_02", "muzzle_snds_M", "rhsusf_acc_rotex5_grey", "rhsusf_acc_SF3P556", "rhsusf_acc_SFMB556", "rhsusf_acc_nt4_black", "Tier1_Gemtech_Halo", "Tier1_Gemtech_Halo_DE", "Tier1_RotexIIIC_DE", "Tier1_RotexIIIC_Grey", "Tier1_SOCOM556_Black", "Tier1_SOCOM556_2_Black", "Tier1_SOCOM556_2_Mini_Black", "Tier1_AAC_M42000_Black", "Tier1_KAC_556_QDC_Black", "Tier1_SRD762_Black", "ACE_muzzle_mzls_L", "rhsusf_acc_ARDEC_M240", "muzzle_snds_H_MG_blk_F", "ACE_muzzle_mzls_B", "rhsusf_acc_aac_scarh_silencer", "rhsusf_acc_aac_762sd_silencer", "rhsusf_acc_aac_762sdn6_silencer", "muzzle_snds_B", "Tier1_KAC_762_QDC_Black", "Tier1_SOCOM762_2_Black", "Tier1_SOCOM762_2_Mini_Black", "rhsgref_sdn6_suppressor", "rhsusf_acc_m14_flashsuppresor", "rhsusf_acc_aac_m14dcqd_silencer", "rhsusf_acc_M2010S", "uk3cb_muzzle_snds_M14", "muzzle_snds_338_black", "ACE_muzzle_mzls_338", "muzzle_snds_570", "rhsusf_acc_SR25S", "muzzle_snds_H", "muzzle_snds_65_TI_blk_F", "ACE_muzzle_mzls_H", "muzzle_snds_acp", "ACE_muzzle_mzls_smg_01", "rhsusf_acc_grip1", "rhsusf_acc_grip3", "rhsusf_acc_rvg_blk", "rhsusf_acc_rvg_de", "rhsusf_acc_tdstubby_blk", "Tier1_Larue_FUG_Black", "Tier1_KAC_VFG_Black", "Tier1_GripPod_Black", "rhsusf_acc_grip4_bipod", "rhsusf_acc_saw_lw_bipod", "rhsusf_acc_kac_grip_saw_bipod", "Tier1_SAW_Bipod", "Tier1_SAW_Bipod_2", "Tier1_SAW_Bipod_2_DD", "Tier1_SAW_Bipod_KAC", "rhsusf_acc_saw_bipod", "rhsusf_acc_harris_bipod", "dzn_tripod_rifle", "Tier1_Harris_Bipod_Black", "rhs_acc_grip_rk2", "rhs_acc_grip_rk6", "rhs_acc_grip_ffg2", "rhsusf_acc_kac_grip", "rhsusf_acc_tacsac_blk", "Tier1_Gangster_Grip_Black", "rhsusf_acc_grip_m203_blk", "Tier1_Harris_Bipod_MLOK_Black", "Tier1_Harris_Bipod_RVG_Black", "Tier1_Harris_Bipod_MLOK_Black_2", "Tier1_RVG_MLOK_Black", "Tier1_MVG_MLOK_Black", "Tier1_BCM_Gunfighter_VG_Black", "Tier1_DD_VFG_MLOK_Black", "Tier1_KAC_VFG_MLOK_Black", "Tier1_Harris_Bipod_DD_MLOK_Black", "Tier1_Harris_Bipod_KAC_MLOK_Black", "Tier1_Harris_Bipod_RVG_MLOK_Black", "Tier1_GripPod_MLOK_Black", "Tier1_AFG_MLOK_Black", "Tier1_DD_MLOK_VFG_Black", "Tier1_Harris_Bipod_MVG_MLOK_Black", "Tier1_DD_VFG_Black", "Tier1_15Rnd_9x19_FMJ", "Tier1_20Rnd_9x19_JHP", "rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M193_Stanag", "rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Sand", "30Rnd_556x45_Stanag_Sand_green", "30Rnd_556x45_Stanag_Sand_red", "30Rnd_556x45_Stanag_Sand_Tracer_Red", "30Rnd_556x45_Stanag_Sand_Tracer_Green", "30Rnd_556x45_Stanag_Sand_Tracer_Yellow", "rhs_mag_20Rnd_556x45_M193_Stanag", "rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red", "rhs_mag_20Rnd_556x45_M855_Stanag", "rhs_mag_20Rnd_556x45_M855A1_Stanag", "rhs_mag_20Rnd_556x45_Mk262_Stanag", "rhs_mag_20Rnd_556x45_M193_2MAG_Stanag", "rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Pull", "rhs_mag_30Rnd_556x45_M855_Stanag_Ranger", "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull", "rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger", "rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger", "rhs_mag_30Rnd_556x45_M855A1_EPM", "rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_EPM_Pull", "rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger", "rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_SCAR", "rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull", "rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_PMAG", "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhs_mag_30Rnd_556x45_Mk262_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_PMAG_Tan", "rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan", "rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan", "UK3CB_ACR_30rnd_556x45", "UK3CB_ACR_30rnd_556x45_R", "UK3CB_ACR_30rnd_556x45_RT", "UK3CB_ACR_30rnd_556x45_G", "UK3CB_ACR_30rnd_556x45_GT", "UK3CB_ACR_30rnd_556x45_Y", "UK3CB_ACR_30rnd_556x45_YT", "UK3CB_ACR_30rnd_556x45_W", "UK3CB_ACR_30rnd_556x45_WT", "Tier1_30Rnd_556x45_M855A1_EMag", "Tier1_30Rnd_556x45_M856A1_EMag", "Tier1_30Rnd_556x45_M855_EMag", "Tier1_30Rnd_556x45_M856_EMag", "Tier1_30Rnd_556x45_Mk262Mod1_EMag", "Tier1_30Rnd_556x45_Mk318Mod0_EMag", "UK3CB_AUG_30Rnd_556x45_Magazine", "UK3CB_AUG_30Rnd_556x45_Magazine_R", "UK3CB_AUG_30Rnd_556x45_Magazine_RT", "UK3CB_AUG_30Rnd_556x45_Magazine_Y", "UK3CB_AUG_30Rnd_556x45_Magazine_YT", "UK3CB_AUG_30Rnd_556x45_Magazine_G", "UK3CB_AUG_30Rnd_556x45_Magazine_GT", "UK3CB_AUG_30Rnd_556x45_Magazine_W", "UK3CB_AUG_30Rnd_556x45_Magazine_WT", "UK3CB_AUG_42Rnd_556x45_Magazine", "UK3CB_AUG_42Rnd_556x45_Magazine_R", "UK3CB_AUG_42Rnd_556x45_Magazine_RT", "UK3CB_AUG_42Rnd_556x45_Magazine_Y", "UK3CB_AUG_42Rnd_556x45_Magazine_YT", "UK3CB_AUG_42Rnd_556x45_Magazine_G", "UK3CB_AUG_42Rnd_556x45_Magazine_GT", "UK3CB_AUG_42Rnd_556x45_Magazine_W", "UK3CB_AUG_42Rnd_556x45_Magazine_WT", "rhs_mag_m576", "rhs_mag_M583A1_white", "rhs_mag_m661_green", "rhs_mag_m662_red", "rhs_mag_M585_white_cluster", "rhs_mag_M663_green_cluster", "rhs_mag_M664_red_cluster", "rhs_mag_m713_Red", "rhs_mag_m714_White", "rhs_mag_m715_Green", "rhs_mag_m716_yellow", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "ACE_40mm_Flare_white", "ACE_40mm_Flare_red", "ACE_40mm_Flare_green", "ACE_40mm_Flare_ir", "rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote", "rhsusf_200Rnd_556x45_box", "rhsusf_200rnd_556x45_mixed_box", "rhsusf_200rnd_556x45_M855_box", "rhsusf_200rnd_556x45_M855_mixed_box", "rhsusf_200Rnd_556x45_soft_pouch", "rhsusf_200Rnd_556x45_mixed_soft_pouch", "rhsusf_200Rnd_556x45_M855_soft_pouch", "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch", "rhsusf_200Rnd_556x45_soft_pouch_ucp", "rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp", "rhsusf_200Rnd_556x45_M855_soft_pouch_ucp", "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp", "rhsusf_200Rnd_556x45_soft_pouch_coyote", "rhsusf_200Rnd_556x45_M855_soft_pouch_coyote", "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_mixed_soft_pouch", "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", "rhsusf_100Rnd_556x45_M200_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch_ucp", "rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp", "rhsusf_100Rnd_556x45_M855_soft_pouch_ucp", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp", "rhsusf_100Rnd_556x45_M200_soft_pouch_ucp", "rhsusf_100Rnd_556x45_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M855_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M200_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M995_soft_pouch", "rhsusf_100Rnd_556x45_M995_soft_pouch_ucp", "rhsusf_100Rnd_556x45_M995_soft_pouch_coyote", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_Red_F", "200Rnd_556x45_Box_Tracer_F", "200Rnd_556x45_Box_Tracer_Red_F", "Tier1_100Rnd_762x51_Belt_M80", "Tier1_100Rnd_762x51_Belt_M61_AP", "Tier1_100Rnd_762x51_Belt_M62_Tracer", "Tier1_100Rnd_762x51_Belt_M80A1_EPR", "Tier1_250Rnd_762x51_Belt_M80", "Tier1_250Rnd_762x51_Belt_M61_AP", "Tier1_250Rnd_762x51_Belt_M62_Tracer", "Tier1_250Rnd_762x51_Belt_M80A1_EPR", "rhsusf_50Rnd_762x51_m80a1epr", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51_m61_ap", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m80a1epr", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51_m61_ap", "rhsusf_50Rnd_762x51_m62_tracer", "150Rnd_762x51_Box", "150Rnd_762x51_Box_Tracer", "20Rnd_762x51_Mag", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer_Dim", "ACE_20Rnd_762x51_Mag_SD", "ACE_10Rnd_762x51_Mag_Tracer", "ACE_10Rnd_762x51_Mag_Tracer_Dim", "ACE_10Rnd_762x51_Mag_SD", "ACE_10Rnd_762x51_M118LR_Mag", "ACE_10Rnd_762x51_Mk316_Mod_0_Mag", "ACE_10Rnd_762x51_Mk319_Mod_0_Mag", "ACE_10Rnd_762x51_M993_AP_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_Mk316_Mod_0_Mag", "ACE_20Rnd_762x51_M993_AP_Mag", "MRAWS_HE_F", "MRAWS_HEAT55_F", "rhs_mag_maaws_HEAT", "rhs_mag_maaws_HEDP", "rhs_mag_maaws_HE", "jav_AP_mas_can", "Titan_AT", "Titan_AP", "16Rnd_9x21_Mag", "16Rnd_9x21_red_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_yellow_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Green_Mag", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "ACE_10Rnd_127x99_Mag", "ACE_10Rnd_127x99_API_Mag", "ACE_10Rnd_127x99_AMAX_Mag", "Tier1_20Rnd_762x51_M118_Special_SR25_Mag", "Tier1_20Rnd_762x51_M993_SR25_Mag", "Tier1_20Rnd_762x51_M61_AP_SR25_Mag", "Tier1_20Rnd_762x51_M62_SR25_Mag", "Tier1_20Rnd_762x51_M80_ball_SR25_Mag", "Tier1_20Rnd_762x51_M80A1_EPR_SR25_Mag", "Tier1_20Rnd_762x51_Mk316Mod0_SR25_Mag", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "rhsusf_20Rnd_762x51_SR25_mk316_special_Mag", "rhsusf_20Rnd_762x51_SR25_m993_Mag", "rhsusf_20Rnd_762x51_SR25_m62_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m62_Mag", "10Rnd_Mk14_762x51_Mag", "rhsusf_20Rnd_762x51_m80_Mag", "UK3CB_M14_20rnd_762x51", "UK3CB_M14_20rnd_762x51_R", "UK3CB_M14_20rnd_762x51_RT", "UK3CB_M14_20rnd_762x51_G", "UK3CB_M14_20rnd_762x51_GT", "UK3CB_M14_20rnd_762x51_Y", "UK3CB_M14_20rnd_762x51_YT", "UK3CB_M14_20rnd_762x51_W", "UK3CB_M14_20rnd_762x51_WT", "UK3CB_DMR_20rnd_762x51", "UK3CB_DMR_20rnd_762x51_R", "UK3CB_DMR_20rnd_762x51_RT", "UK3CB_DMR_20rnd_762x51_G", "UK3CB_DMR_20rnd_762x51_GT", "UK3CB_DMR_20rnd_762x51_Y", "UK3CB_DMR_20rnd_762x51_YT", "UK3CB_DMR_20rnd_762x51_W", "UK3CB_DMR_20rnd_762x51_WT", "rhsusf_5Rnd_300winmag_xm2010", "UK3CB_G3_20rnd_762x51", "UK3CB_G3_20rnd_762x51_R", "UK3CB_G3_20rnd_762x51_RT", "UK3CB_G3_20rnd_762x51_G", "UK3CB_G3_20rnd_762x51_GT", "UK3CB_G3_20rnd_762x51_Y", "UK3CB_G3_20rnd_762x51_YT", "UK3CB_G3_20rnd_762x51_W", "UK3CB_G3_20rnd_762x51_WT", "Tier1_30Rnd_762x35_300BLK_PMAG", "Tier1_30Rnd_762x35_300BLK_RNBT_PMAG", "Tier1_30Rnd_762x35_300BLK_SMK_PMAG", "Tier1_30Rnd_762x35_300BLK_EMag", "Tier1_30Rnd_762x35_300BLK_RNBT_EMag", "Tier1_30Rnd_762x35_300BLK_SMK_EMag", "Tier1_30Rnd_762x35_300BLK_Stanag", "Tier1_30Rnd_762x35_300BLK_RNBT_Stanag", "Tier1_30Rnd_762x35_300BLK_SMK_Stanag", "Tier1_30Rnd_762x35_300BLK_Stanag_Pull", "Tier1_30Rnd_762x35_300BLK_RNBT_Stanag_Pull", "Tier1_30Rnd_762x35_300BLK_SMK_Stanag_Pull", "Tier1_30Rnd_762x35_300BLK_Stanag_Ranger", "Tier1_30Rnd_762x35_300BLK_RNBT_Stanag_Ranger", "Tier1_30Rnd_762x35_300BLK_SMK_Stanag_Ranger", "Tier1_30Rnd_762x35_300BLK_PMAG_Tan", "Tier1_30Rnd_762x35_300BLK_RNBT_PMAG_Tan", "Tier1_30Rnd_762x35_300BLK_SMK_PMAG_Tan", "Tier1_30Rnd_762x35_300BLK_EPM", "Tier1_30Rnd_762x35_300BLK_RNBT_EPM", "Tier1_30Rnd_762x35_300BLK_SMK_EPM", "10Rnd_338_Mag", "ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_762x67_Mk248_Mod_0_Mag", "ACE_10Rnd_762x67_Mk248_Mod_1_Mag", "ACE_10Rnd_762x67_Berger_Hybrid_OTM_Mag", "50Rnd_570x28_SMG_03", "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk", "rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk", "rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk", "rhs_mag_20Rnd_SCAR_762x51_m118_special_bk", "rhs_mag_20Rnd_SCAR_762x51_m61_ap", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "rhs_mag_20Rnd_SCAR_762x51_m80a1_epr", "rhs_mag_20Rnd_SCAR_762x51_m118_special", "rhs_mag_20Rnd_SCAR_762x51_mk316_special", "rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box_Tracer", "200Rnd_65x39_cased_Box_Red", "200Rnd_65x39_cased_Box_Tracer_Red", "ACE_200Rnd_65x39_cased_Box_Tracer_Dim", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow", "Stinger_mas_can", "Titan_AA", "Tier1_17Rnd_9x19_P320_JHP", "Tier1_17Rnd_9x19_P320_FMJ", "Tier1_21Rnd_9x19_P320_FMJ", "Tier1_21Rnd_9x19_P320_JHP", "ACE_16Rnd_9x19_mag", "cgqc_helmet_heli_black_audi", "cgqc_helmet_heli_black_cloutier", "cgqc_helmet_crew_black_audi", "cgqc_helmet_crew_black_cloutier", "cgqc_helmet_heli_green", "cgqc_helmet_crew_green", "cgqc_helmet_heli_black_villeneuve", "cgqc_helmet_crew_black_villeneuve", "cgqc_helmet_heli_wood", "cgqc_helmet_crew_wood", "UK3CB_CW_US_B_LATE_B_RIF_04", "B_Kitbag_cbr", "B_mas_can_Kitbag_d", "B_mas_can_Kitbag_LD", "V_mas_can_belt_carrier_LR_green", "V_mas_can_RebreatherB", "U_mas_can_B_Wetsuit", "H_mas_can_beanie_b", "G_mas_can_bala_b", "G_mas_can_bala_T", "G_mas_can_gog", "G_mas_can_jumpmask", "G_mas_can_mask_b", "G_mas_can_mask", "G_mas_can_wrap_T", "G_mas_can_wrap_gog_T", "B_Carryall_cbr", "B_Carryall_green_F", "rhs_googles_black", "rhs_googles_clear", "rhs_ess_black", "G_Bandanna_blk", "UK3CB_G_Bandanna_green_check", "G_Bandanna_tan", "G_Lowprofile", "UK3CB_G_Neck_Shemag_Tan", "rhsusf_shemagh_tan", "rhsusf_shemagh2_tan", "rhsusf_shemagh_grn", "rhsusf_shemagh2_grn", "rhsusf_shemagh_gogg_grn", "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh_gogg_tan", "rhsusf_shemagh2_gogg_tan", "rhsusf_oakley_goggles_blk", "rhsusf_oakley_goggles_clr", "rhsusf_oakley_goggles_ylw", "Binocular", "ACE_VectorDay", "ACE_Altimeter", "Chemlight_blue", "Chemlight_green", "ACE_Chemlight_HiBlue", "ACE_Chemlight_HiGreen", "ACE_Chemlight_HiWhite", "ACE_Chemlight_HiYellow", "ACE_Chemlight_UltraHiOrange", "ACE_HandFlare_Green", "ACE_HandFlare_Red", "ACE_HandFlare_White", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "SmokeShellYellow", "rhs_grenade_mkii_mag", "ATMine_Range_Mag", "ClaymoreDirectionalMine_Remote_Mag", "rhs_mine_M19_mag", "APERSBoundingMine_Range_Mag", "rhs_mine_m2a3b_trip_mag", "rhs_mine_M3_tripwire_mag", "rhs_mine_m3_pressure_mag", "SLAMDirectionalMine_Wire_Mag", "rhs_mine_Mk2_tripwire_mag", "rhs_ec75_mag", "rhs_ec200_mag", "rhs_ec400_mag", "ACE_FlareTripMine_Mag", "ACE_RangeTable_82mm", "ACRE_PRC117F", "ACE_artilleryTable", "ACE_Canteen", "Rev_darter_item", "ACE_Flashlight_MX991", "ACE_Flashlight_XL50", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_SpottingScope", "ACE_SpraypaintBlack", "ACE_SpraypaintBlue", "ACE_SpraypaintGreen", "ACE_SpraypaintRed", "ACE_Tripod", "ACE_UAVBattery", "ACE_wirecutter", "cgqc_gun_spar17_wood", "cgqc_gun_spar17_canpat", "cgqc_gun_spar17_tremblay", "cgqc_acc_M8541A_wood", "cgqc_acc_anpeq15_light_wood", "cgqc_acc_anpeq15_laser_wood", "cgqc_acc_silencer_wood", "cgqc_acc_bipod_wood", "cgqc_helmet_heli_black_villeneuve_dick", "cgqc_helmet_crew_black_villeneuve_dick" , "rhs_weap_mk18","rhs_weap_m4a1_blockII_M203", "rhs_weap_m4a1_blockII", "Tier1_MK46_Mod1_Savit", "Tier1_MK48_Mod0", "CGQC_units_mk1_4_Pilot_heli_pack", "CGQC_units_mk1_4_Pilot_Jet_pack", "CGQC_units_mk1_4_crew_heli_pack", "NForce_Atcr_RMR_Top_SKeetIR_Down", "Tier1_X300U", "sps_black_hornet_01_Static_F", "cgqc_gun_mk1_mk12", "cgqc_gun_mk1_m16a4", "WBK_HeadLampItem","rhsusf_acc_premier_anpvs27","cgqc_gun_mk1_MAAWS_laforest", "cgqc_gun_mk1_MAAWS_cadpat",	"cgqc_gun_mk1_MAAWS_woodland", "FF_Painkiller", "JAS_GPNVG18_blk", "cgqc_gun_mk1_p90", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_APDS_Mag", "ACE_CTS9", "grad_paceCountBeads_functions_paceCountBeads", "FSGm_ItemMedicBag"];
    [_source, _items] call ace_arsenal_fnc_initBox;
    #include "cgqc_loadouts_mk1_actions.sqf"
};