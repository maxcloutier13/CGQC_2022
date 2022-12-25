class H_mas_can_opscorn;
class H_mas_can_opscore;
class rhsusf_cvc_green_ess;
class H_PilotHelmetFighter_B;
class H_PilotHelmetHeli_B;
class H_CrewHelmetHeli_B;

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
// Black
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
// White
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
// Cadpat
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
// Desert
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
// Multicam
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
// Flat color
// Gray
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
// Black
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
// Coyote
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
// Green
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

// Jet helmets -----------------------------------------------------------------------------------------------
class cgqc_helmet_mk1_jetpilot : H_PilotHelmetFighter_B
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_jetpilot";
    displayName = "CGQC Casque Pilote de jet mk1";
    grad_slingHelmet_allow = true;
};

// Tank/Crew helmets -----------------------------------------------------------------------------------------------
class cgqc_helmet_mk1_tank : rhsusf_cvc_green_ess
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank";
    displayName = "CGQC Casque Tank mk1";
    grad_slingHelmet_allow = true;
};

// Helicopter/Crew helmets -----------------------------------------------------------------------------------------------
// CGQC Airforce black -----------------------------------------------------
class cgqc_helmet_heli_black : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Noir";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_heli_black.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Noir full";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_heli_black.paa"};
	grad_slingHelmet_allow = true;
};

// CGQC Airforce Green -----------------------------------------------------
class cgqc_helmet_heli_green : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Vert";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_heli_green.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_green : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Vert full";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_heli_green.paa"};
	grad_slingHelmet_allow = true;
};

// CGQC Airforce woodland -----------------------------------------------------
class cgqc_helmet_heli_wood : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Woodland";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_heli_wood.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_wood : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Woodland full";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_heli_wood.paa"};
	grad_slingHelmet_allow = true;
};




// Custom helmets -----------------------------------------------------------------------------------------------
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

// Cloutier / Samurai -----------------------------------------------------

class cgqc_helmet_heli_black_cloutier : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Cloutier";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_cloutier.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black_cloutier : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Cloutier Full";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_cloutier.paa"};
	grad_slingHelmet_allow = true;
};

// Villeneuve - stock -----------------------------------------------------
class cgqc_helmet_heli_black_villeneuve : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Villeneuve";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_villeneuve.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black_villeneuve : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Villeneuve Full";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_villeneuve.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_heli_black_villeneuve_dick : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Villeneuve DickForce";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_villeneuve_dick.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black_villeneuve_dick : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Villeneuve Full DickForce";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_villeneuve_dick.paa"};
	grad_slingHelmet_allow = true;
};

// Audi - stock -----------------------------------------------------
class cgqc_helmet_heli_black_audi : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Audi";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_audi.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black_audi : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Audi Full";
	hiddenSelectionsTextures[] = {"\cgqc_2022\helmets\cgqc_helmet_audi.paa"};
	grad_slingHelmet_allow = true;
};