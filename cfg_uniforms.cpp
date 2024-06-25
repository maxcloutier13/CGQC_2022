class U_mas_can_B_CombatUniform_aor1;
class U_mas_can_B_CombatUniform_multi;
class U_mas_can_B_CombatUniform_aor2;
class U_mas_can_B_suite_CQB;
class U_mas_can_B_suite_WINT;
class U_mas_can_B_CombatUniform_S_NTOG;
class U_mas_can_B_CombatUniform_S_SWAT;
class U_I_pilotCoveralls;
class U_mas_can_B_Wetsuit;
class UniformItem;
/*
// Base/training
class cgqc_uniform_mk1 : U_mas_can_B_CombatUniform_S_NTOG
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1";
    displayName = "CGQC Uniforme mk1";
};
*/

class U_mas_can_B_CombatUniform_T_aor2;
class cgqc_uniform_pmct_cadpat : U_mas_can_B_CombatUniform_T_aor2 {
    author = "silent1";
    _generalMacro = "cgqc_uniform_pmct_cadpat";
    displayName = "CGQC PMC-T Uniforme - Cadpat";
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "B_mas_can_Soldier02_aor2_F";
        containerClass = "Supply80";
        mass = 20;
    };
};

// Diver
class cgqc_uniform_mk1_diver : U_mas_can_B_Wetsuit
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_diver";
    displayName = "CGQC Plongeur mk1";
};

