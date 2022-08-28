class H_mas_can_opscorn;
class H_mas_can_opscore;
class rhsusf_cvc_green_ess;
class H_PilotHelmetFighter_B;

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
// Other helmets
class cgqc_helmet_mk1_tank : rhsusf_cvc_green_ess
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank";
    displayName = "CGQC Casque Tank mk1";
    grad_slingHelmet_allow = true;
};
class cgqc_helmet_mk1_jetpilot : H_PilotHelmetFighter_B
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_jetpilot";
    displayName = "CGQC Casque Pilote de jet mk1";
    grad_slingHelmet_allow = true;
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
