class U_mas_can_B_CombatUniform_aor1;
class U_mas_can_B_CombatUniform_multi;
class U_mas_can_B_CombatUniform_aor2;
class U_mas_can_B_suite_CQB;
class U_mas_can_B_suite_WINT;
class U_mas_can_B_CombatUniform_S_NTOG;
class U_mas_can_B_CombatUniform_S_SWAT;
class U_I_pilotCoveralls;
class U_mas_can_B_Wetsuit;

/*
// Base/training
class cgqc_uniform_mk1 : U_mas_can_B_CombatUniform_S_NTOG
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1";
    displayName = "CGQC Uniforme mk1";
};
*/
// Desert
class cgqc_uniform_mk1_desert : U_mas_can_B_CombatUniform_aor1
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_desert";
    displayName = "CGQC Uniforme mk1 - Desert";
};
// Multicam
class cgqc_uniform_mk1_mcam : U_mas_can_B_CombatUniform_multi
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_multicam";
    displayName = "CGQC Uniforme mk1 - Multicam";
};
// Woodland
class cgqc_uniform_mk1_cadpat : U_mas_can_B_CombatUniform_aor2
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_woodland";
    displayName = "CGQC Uniforme mk1 - Cadpat";
};
// Black
class cgqc_uniform_mk1_black : U_mas_can_B_suite_CQB
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_black";
    displayName = "CGQC Uniforme mk1 - Black";
};
// Winter
class cgqc_uniform_mk1_white : U_mas_can_B_suite_WINT
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_winter";
    displayName = "CGQC Uniforme mk1 - Winter";
};

// Pilots
class cgqc_uniform_mk1_jetpilot : U_I_pilotCoveralls
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_jetpilot";
    displayName = "CGQC Pilote de jet mk1";
};
class cgqc_uniform_mk1_helipilot : U_mas_can_B_CombatUniform_S_SWAT
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_jetpilot";
    displayName = "CGQC Pilote Hélicoptère mk1";
};

// Diver
class cgqc_uniform_mk1_diver : U_mas_can_B_Wetsuit
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_diver";
    displayName = "CGQC Plongeur mk1";
};
