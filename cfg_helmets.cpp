class H_mas_can_opscorn;
class H_mas_can_opscore;
class rhsusf_cvc_green_ess;
class H_PilotHelmetFighter_B;
class H_PilotHelmetHeli_B;
class H_CrewHelmetHeli_B;
class H_PASGT_neckprot_base_F;
class H_PASGT_neckprot_blue_press_F: H_PASGT_neckprot_base_F
{
    class ItemInfo;
};


// Mk1 "Net" helmets
// Green
class cgqc_helmet_mk1 : H_mas_can_opscorn
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1";
    displayName = "CGQC Casque mk1";
    picture = "\mas_can_lite\ui\green_sf.paa";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\green.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_2022\helmets\inside.paa"};
    ace_hearing_protection = 0.75;
	ace_hearing_lowerVolume = 0;
    // Grad helmet compatibility
    grad_slingHelmet_allow = true;
    // Ctab camera compat
    CTAB_Camera = true;
};
class cgqc_helmet_mk1_black : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_black";
    displayName = "CGQC Casque mk1 - Noir";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\black.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_black.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_white : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_white";
    displayName = "CGQC Casque mk1 - Blanc";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\white.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_white.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_cadpat : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_cadpat";
    displayName = "CGQC Casque mk1 - Cadpat";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cadpat.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_desert : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_desert";
    displayName = "CGQC Casque mk1 - Desert";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\desert.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_mcam : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_mcam";
    displayName = "CGQC Casque mk1 - Multicam";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\mcam.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
// Flat color -----------------------------------
class cgqc_helmet_mk1_f_gray : H_mas_can_opscore
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_gray";
    displayName = "CGQC Casque mk1 - Gray";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\gray.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_2022\helmets\inside_dark.paa"};
    ace_hearing_protection = 0.75;
	ace_hearing_lowerVolume = 0;
    // Grad helmet compatibility
    grad_slingHelmet_allow = true;
    // Ctab camera compat
    CTAB_Camera = true;
};
class cgqc_helmet_mk1_f_black : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_f_black";
    displayName = "CGQC Casque mk1 - Noir mat";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\flat_black.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_black.paa",
        "\cgqc_2022\helmets\inside_dark.paa"};
};
class cgqc_helmet_mk1_f_coyote : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_coyote";
    displayName = "CGQC Casque mk1 - Coyote";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\coyote.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_f_green : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_f_green";
    displayName = "CGQC Casque mk1 - Vert Mat";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\flat_green.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_2022\helmets\inside.paa"};
};

// Medic helmets ---------------------------------------------------------------
class cgqc_helmet_mk1_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_medic";
    displayName = "CGQC Casque Medic mk1";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\green.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_black_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_medic";
    displayName = "CGQC Casque Medic mk1 - Noir";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\black.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_black_medic.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_white_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_white_medic";
    displayName = "CGQC Casque Medic mk1 - Blanc";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\white.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_white_medic.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_cadpat_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_cadpat_medic";
    displayName = "CGQC Casque Medic mk1 - Cadpat";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cadpat.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_desert_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_desert_medic";
    displayName = "CGQC Casque Medic mk1 - Desert";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\desert.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_mcam_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_mcam_medic";
    displayName = "CGQC Casque Medic mk1 - Multicam";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\mcam.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_f_gray_medic : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_gray_medic";
    displayName = "CGQC Casque Medic mk1 - Gray";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\gray.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_2022\helmets\inside_dark.paa"};
};
class cgqc_helmet_mk1_f_black_medic : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_f_black_medic";
    displayName = "CGQC Casque Medic mk1 - Noir mat";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\flat_black.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_black_medic.paa",
        "\cgqc_2022\helmets\inside_dark.paa"};
};
class cgqc_helmet_mk1_f_coyote_medic : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_coyote_medic";
    displayName = "CGQC Casque Medic mk1 - Coyote";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\coyote.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_2022\helmets\inside.paa"};
};
class cgqc_helmet_mk1_f_green_medic : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_f_green_medic";
    displayName = "CGQC Casque Medic mk1 - Vert Mat";
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\flat_green.paa",
        "\cgqc_2022\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_2022\helmets\inside.paa"};
};

// Tank/Crew helmets -----------------------------------------------------------------------------------------------
class cgqc_helmet_mk1_tank : rhsusf_cvc_green_ess
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank";
    displayName = "CGQC Casque Tank mk1";
    grad_slingHelmet_allow = true;
};

// Tank helmets ---------------------------------------------------------------------------------------
// Turcotte tank helmet
class cgqc_helmet_mk1_tank_turcotte : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_turcotte";
    displayName = "CGQC Casque Tank Turcotte";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_turcotte.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_audi : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_audi";
    displayName = "CGQC Casque Tank Audi";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_audi.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_tremblay : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_tremblay";
    displayName = "CGQC Casque Tank Tremblay";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_tremblay.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_comeau : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_comeau";
    displayName = "CGQC Casque Tank Comeau";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_comeau.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_genest : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_genest";
    displayName = "CGQC Casque Tank Genest";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_genest.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_frechette : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_frechette";
    displayName = "CGQC Casque Tank Frechette";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_frechette.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_laforest : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_laforest";
    displayName = "CGQC Casque Tank Laforest";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_laforest.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_fortin : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_fortin";
    displayName = "CGQC Casque Tank Fortin";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_fortin.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_pinard : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_pinard";
    displayName = "CGQC Casque Tank Pinard";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_pinard.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_gaudreault : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_gaudreault";
    displayName = "CGQC Casque Tank Gaudreault";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_gaudreault.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_cloutier : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_cloutier";
    displayName = "CGQC Casque Tank Cloutier";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\helmets\cgqc_helmet_tank_cloutier.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};

class cgqc_helmet_kidnapping : H_PASGT_neckprot_blue_press_F
{
     author = "silent1";
    _generalMacro = "cgqc_helmet_kidnapping";
    displayName = "CGQC Casque HVT/VIP";
    class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Orange\Headgear\H_PASGT_neckprot_F.p3d";
			modelSides[] = {3};
			hiddenSelections[] = {"Camo"};
			mass = 5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 80;
					passThrough = 0.5;
				};
			};
		};
};

