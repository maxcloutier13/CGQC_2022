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
// Desert
class cgqc_uniform_mk1_desert : U_mas_can_B_CombatUniform_aor1
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_desert";
    displayName = "CGQC Uniforme mk1 - Desert";
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "B_mas_can_Soldier01_aor1_F";
        containerClass = "Supply80";
        mass = 20;
    };
};
// Multicam
class cgqc_uniform_mk1_mcam : U_mas_can_B_CombatUniform_multi
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_multicam";
    displayName = "CGQC Uniforme mk1 - Multicam";
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "B_mas_can_Soldier01_F";
        containerClass = "Supply80";
        mass = 20;
    };
};
// Woodland
class cgqc_uniform_mk1_cadpat : U_mas_can_B_CombatUniform_aor2
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_woodland";
    displayName = "CGQC Uniforme mk1 - Cadpat";
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "B_mas_can_Soldier01_aor2_F";
        containerClass = "Supply80";
        mass = 20;
    };
};
// Black
class cgqc_uniform_mk1_black : U_mas_can_B_suite_CQB
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_black";
    displayName = "CGQC Uniforme mk1 - Black";
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "B_mas_can_SoldierCQB_F";
        containerClass = "Supply80";
        mass = 20;
    };
};
// Winter
class cgqc_uniform_mk1_white : U_mas_can_B_suite_WINT
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_winter";
    displayName = "CGQC Uniforme mk1 - Winter";
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "B_mas_can_SoldierWINT_F";
        containerClass = "Supply80";
        mass = 20;
    };
};

// Pilots
class cgqc_uniform_mk1_jetpilot : U_I_pilotCoveralls
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_jetpilot";
    displayName = "CGQC Pilote de jet mk1";
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "cgqc_soldat_moderne";
        containerClass = "Supply80";
        mass = 20;
    };
};
class cgqc_uniform_mk1_helipilot : U_mas_can_B_CombatUniform_S_SWAT
{
    author = "silent1";
    _generalMacro = "cgqc_uniform_mk1_jetpilot";
    displayName = "CGQC Pilote Hélicoptère mk1";
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "B_mas_can_SoldierCQB_F";
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

