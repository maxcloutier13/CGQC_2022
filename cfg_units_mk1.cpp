// == 2023 =*****************************************************************=
// == Command ================================================================
class CGQC_units_mk1_0_HQ : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "HQ";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_hq_m4a1", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_hq_m4a1", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_shemag_gog_l"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_shemag_gog_l"};
    backpack = "CGQC_units_mk1_0_HQ_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_0_HQ.jpg";
    class EventHandlers
    {
        //init = "['hq', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_0_TeamLeader_Carbine : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "TeamLeader (M4Blk2)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_TL_m4a1", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_TL_m4a1", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_wrap_gog_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_wrap_gog_B"};
    backpack = "CGQC_units_mk1_0_TeamLeader_Carbine_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_0_TeamLeader_Carbine.jpg";
    class EventHandlers
    {
        //init = "['tl_carb', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_0_TeamLeader_CQB : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "TeamLeader (mk18)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_mk18_gl", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_mk18_gl", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_balaM_b"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_balaM_b"};
    backpack = "CGQC_units_mk1_0_TeamLeader_CQB_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_0_TeamLeader_CQB.jpg";
    class EventHandlers
    {
        //init = "['tl_cqb', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_0_TeamLeader_noGL : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "TeamLeader (mk18 no GL)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_rifleman_mk18", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_mk18_gl", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_balaM_b"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_balaM_b"};
    backpack = "CGQC_units_mk1_0_TeamLeader_CQB_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_0_TeamLeader_CQB.jpg";
    class EventHandlers
    {
        //init = "['tl_cqb', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
// == Infantry ================================================================
class CGQC_units_mk1_1_Rifleman_CQB : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (CQB - MK18)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_rifleman_mk18", "rhs_weap_m72a7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_rifleman_mk18", "rhs_weap_m72a7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_rf", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_rf", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_1_Rifleman_CQB_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_1_Rifleman_CQB.jpg";
    class EventHandlers
    {
        //init = "['rifle_cqb', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_1_Rifleman_Carbine : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Carbine - M4Blk2)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_rifleman_m4a1", "rhs_weap_m72a7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_rifleman_m4a1", "rhs_weap_m72a7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_1_Rifleman_Carbine_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_1_Rifleman_Carbine.jpg";
    class EventHandlers
    {
        //init = "['rifle_carb', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_1_Rifleman_full : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Rifle - M16a4)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"rhs_weap_m16a4_imod_grip2", "rhs_weap_m72a7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_rifleman_m4a1", "rhs_weap_m72a7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_1_Rifleman_Carbine_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_1_Rifleman_Carbine.jpg";
    class EventHandlers
    {
        //init = "['rifle_m16', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_1_Rifleman_grenadier : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_rifleman_m4a1", "rhs_weap_m72a7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_rifleman_m4a1", "rhs_weap_m72a7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_1_Rifleman_Carbine_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_1_Rifleman_Carbine.jpg";
    class EventHandlers {
        //init = "['rifle_grenade', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
// == Infantry + ================================================================
class CGQC_units_mk1_3_AT_MAAWS : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "AT (MAAWS)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_rifleman_mk18", "cgqc_gun_mk1_MAAWS", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_rifleman_mk18", "cgqc_gun_mk1_MAAWS", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_3_AT_MAAWS_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_3_AT_MAAWS.jpg";
    class EventHandlers {
        //init = "['at_maaws', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_3_AT_Javelin : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "AT (Javelin)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_AT_m4a1", "cgqc_gun_mk1_Javelin", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_AT_m4a1", "cgqc_gun_mk1_Javelin", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_3_AT_Javelin_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_3_AT_Javelin.jpg";
    class EventHandlers {
        //init = "['at_jav', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_2_LMG : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "MG (Light)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_mk46", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_mk46", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_ar", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_ar", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_2_LMG_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_2_LMG.jpg";
    class EventHandlers {
        //init = "['lmg', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_2_HMG : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "MG (Heavy)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_mk48", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_mk48", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_ar", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_ar", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_2_HMG_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_2_HMG.jpg";
    class EventHandlers {
        //init = "['hmg', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
// == Specialists ================================================================
class CGQC_units_mk1_1_Engineer : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Engineer";
    canDeactivateMines = 1;
    engineer = 1;
    detectSkill = 31;
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_engineer_m4a1", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_engineer_m4a1", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_ar", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_ar", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_1_Engineer_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_1_Engineer.jpg";
    class EventHandlers {
        //init = "['eng', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_1_Medic : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    attendant = 1;
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_medic_m4a1", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_medic_m4a1", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1_medic", "cgqc_vest_mk1_tan_rf", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1_medic", "cgqc_vest_mk1_tan_rf", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_1_Medic_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_1_Medic.jpg";
    class EventHandlers {
        //init = "['med', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_2_Marksman : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman (417)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_hk417", "cgqc_gun_glock19_wood", "ACE_Vector", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_hk417", "cgqc_gun_glock19_wood", "ACE_Vector", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "ACE_Vector", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "ACE_Vector", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_2_Marksman_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_2_Marksman.jpg";
    class EventHandlers {
        //init = "['mrksm', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
// == Recon ================================================================
class CGQC_units_mk1_0_Drone_operator : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Drone Operator";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_hq_m4a1", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_TL_m4a1", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_wrap_gog_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_wrap_gog_B"};
    backpack = "CGQC_units_mk1_0_Drone_operator_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_0_TeamLeader_Carbine.jpg";
    class EventHandlers {
        //init = "['drone', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_0_JTAC : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "FAC/JTAC";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_jtac_mk12", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_jtac_mk12", "cgqc_gun_glock19_wood", "Laserdesignator_01_khk_F", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_wrap_gog_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "Laserdesignator_01_khk_F", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan", "G_mas_can_wrap_gog_B"};
    backpack = "CGQC_units_mk1_0_JTAC_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_1_Engineer.jpg";
    class EventHandlers {
        //init = "['jtac', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_2_Sniper : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Sniper (.50)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_m200", "cgqc_gun_glock19_wood", "ACE_Vector", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_m200", "cgqc_gun_glock19_wood", "ACE_Vector", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "ACE_Vector", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "ACE_Vector", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_2_Sniper_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_2_Sniper.jpg";
    class EventHandlers {
        //init = "['sniper', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_2_Sniper_ebr : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Sniper (m14EBR)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"rhs_weap_m14ebrri", "cgqc_gun_glock19_wood", "ACE_Vector", "Put", "Throw"};
    respawnWeapons[] = {"rhs_weap_m14ebrri", "cgqc_gun_glock19_wood", "ACE_Vector", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "ACE_Vector", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "ACE_Vector", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_2_Sniper_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_2_Sniper.jpg";
    class EventHandlers {
        //init = "['sniper', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_2_Spotter : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Spotter";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_mk12", "cgqc_gun_glock19_wood", "ACE_Vector", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_m200", "cgqc_gun_glock19_wood", "ACE_Vector", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "ACE_Vector", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "JAS_GPNVG18_blk", "ACE_Vector", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_2_Sniper_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_2_Sniper.jpg";
    class EventHandlers {
        //init = "['spotter', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
// == Pilots ================================================================
class CGQC_units_mk1_4_Pilot_heli : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Helicopter Pilot";
    engineer = 1;
    uniformClass = "cgqc_uniform_mk1_helipilot";
    weapons[] = {"cgqc_gun_mk1_p90", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_p90", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_heli_black", "cgqc_vest_mk1_pilot_black", "G_mas_can_wrap_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_heli_black", "cgqc_vest_mk1_pilot_black", "G_mas_can_wrap_B"};
    backpack = "CGQC_units_mk1_4_Pilot_heli_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_4_Pilot_heli.jpg";
    class EventHandlers {
        //init = "['heli', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_4_crew_heli : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Helicopter Crew";
    engineer = 1;
    uniformClass = "cgqc_uniform_mk1_helipilot";
    weapons[] = {"cgqc_gun_mk1_p90", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_p90", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_crew_black", "cgqc_vest_mk1_pilot_black", "G_mas_can_wrap_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_crew_black", "cgqc_vest_mk1_pilot_black", "G_mas_can_wrap_B"};
    backpack = "CGQC_units_mk1_4_crew_heli_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_4_crew_heli.jpg";
    class EventHandlers {
        //init = "['heli_crew', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_4_Pilot_Jet : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 1;
    scopeCurator = 2;
    displayName = "Jet Pilot";
    engineer = 1;
    uniformClass = "cgqc_uniform_mk1_jetpilot";
    weapons[] = {"cgqc_gun_mk1_mp7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_mp7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_helmet_mk1_jetpilot", "cgqc_vest_mk1_pilot", "G_Combat"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_helmet_mk1_jetpilot", "cgqc_vest_mk1_pilot", "G_Combat"};
    backpack = "CGQC_units_mk1_4_Pilot_Jet_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_4_Pilot_Jet.jpg";
    class EventHandlers {
        //init = "['jet_pilot', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
// == Drivers ================================================================
class CGQC_units_mk1_4_Tank_Driver : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    canDeactivateMines = 1;
    engineer = 1;
    detectSkill = 31;
    displayName = "Tank Driver";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_p90_khaki", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_p90_khaki", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "cgqc_item_rangefinder", "cgqc_helmet_mk1_tank", "cgqc_vest_mk1_driver", "G_mas_can_wrap_gog_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "cgqc_item_rangefinder", "cgqc_helmet_mk1_tank", "cgqc_vest_mk1_driver", "G_mas_can_wrap_gog_B"};
    backpack = "CGQC_units_mk1_4_Tank_Driver_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_4_Tank_Driver.jpg";
    class EventHandlers {
        //init = "['driver', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
class CGQC_units_mk1_4_Tank_Crew : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    canDeactivateMines = 1;
    engineer = 1;
    detectSkill = 31;
    displayName = "Tank Crew";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_p90_khaki", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_p90_khaki", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "cgqc_item_rangefinder", "cgqc_helmet_mk1_tank", "cgqc_vest_mk1_driver", "G_mas_can_wrap_gog_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "cgqc_item_rangefinder", "cgqc_helmet_mk1_tank", "cgqc_vest_mk1_driver", "G_mas_can_wrap_gog_B"};
    backpack = "CGQC_units_mk1_4_Tank_Driver_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_4_Tank_Driver.jpg";
    class EventHandlers {
        //init = "['tank_crew', 1, true] execVM '\CGQC_2022\functions\fnc_initRoleSwitch.sqf'";
    };
};
// == AI units ================================================================
class CGQC_units_mk2_Rifleman_ai : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 1;
    displayName = "Rifleman (Carbine - M4Blk2)";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_rifleman_m4a1", "rhs_weap_m72a7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_rifleman_m4a1", "rhs_weap_m72a7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_mk1", "cgqc_vest_mk1_tan_lr", "G_mas_can_balaM_T"};
    backpack = "CGQC_units_mk1_1_Rifleman_Carbine_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_1_Rifleman_Carbine.jpg";
};
class CGQC_units_mk2_Pilot_heli_ai : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 1;
    displayName = "Helicopter Pilot";
    engineer = 1;
    uniformClass = "cgqc_uniform_mk1_helipilot";
    weapons[] = {"cgqc_gun_mk1_p90", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_p90", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_heli_black", "cgqc_vest_mk1_pilot_black", "G_mas_can_wrap_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_heli_black", "cgqc_vest_mk1_pilot_black", "G_mas_can_wrap_B"};
    backpack = "CGQC_units_mk1_4_Pilot_heli_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_4_Pilot_heli.jpg";
};
class CGQC_units_mk2_crew_heli_ai : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 1;
    displayName = "Helicopter Crew";
    engineer = 1;
    uniformClass = "cgqc_uniform_mk1_helipilot";
    weapons[] = {"cgqc_gun_mk1_p90", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_p90", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_crew_black", "cgqc_vest_mk1_pilot_black", "G_mas_can_wrap_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "cgqc_item_rangefinder", "cgqc_helmet_crew_black", "cgqc_vest_mk1_pilot_black", "G_mas_can_wrap_B"};
    backpack = "CGQC_units_mk1_4_crew_heli_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_4_crew_heli.jpg";
};
class CGQC_units_mk2_Pilot_Jet_ai : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 1;
    displayName = "Jet Pilot";
    engineer = 1;
    uniformClass = "cgqc_uniform_mk1_jetpilot";
    weapons[] = {"cgqc_gun_mk1_mp7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_mp7", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_helmet_mk1_jetpilot", "cgqc_vest_mk1_pilot", "G_Combat"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_helmet_mk1_jetpilot", "cgqc_vest_mk1_pilot", "G_Combat"};
    backpack = "CGQC_units_mk1_4_Pilot_Jet_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_4_Pilot_Jet.jpg";
};
// == Drivers ================================================================
class CGQC_units_mk2_Tank_Driver_ai : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 1;
    canDeactivateMines = 1;
    engineer = 1;
    detectSkill = 31;
    displayName = "Tank Driver";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_p90_khaki", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_p90_khaki", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "cgqc_item_rangefinder", "cgqc_helmet_mk1_tank", "cgqc_vest_mk1_driver", "G_mas_can_wrap_gog_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "cgqc_item_rangefinder", "cgqc_helmet_mk1_tank", "cgqc_vest_mk1_driver", "G_mas_can_wrap_gog_B"};
    backpack = "CGQC_units_mk1_4_Tank_Driver_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_4_Tank_Driver.jpg";
};
class CGQC_units_mk2_Tank_Crew_ai : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_mk1";
    side = 1;
    scope = 1;
    canDeactivateMines = 1;
    engineer = 1;
    detectSkill = 31;
    displayName = "Tank Crew";
    uniformClass = "cgqc_uniform_mk1";
    weapons[] = {"cgqc_gun_mk1_p90_khaki", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    respawnWeapons[] = {"cgqc_gun_mk1_p90_khaki", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Put", "Throw"};
    items[] = {};
    respawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "cgqc_item_rangefinder", "cgqc_helmet_mk1_tank", "cgqc_vest_mk1_driver", "G_mas_can_wrap_gog_B"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "cgqc_item_rangefinder", "cgqc_helmet_mk1_tank", "cgqc_vest_mk1_driver", "G_mas_can_wrap_gog_B"};
    backpack = "CGQC_units_mk1_4_Tank_Driver_pack";
    editorPreview = "\CGQC_2022\pics\CGQC_units_mk1_4_Tank_Driver.jpg";
};

// == Divers ================================================================
class CGQC_units_mk1_5_Diver_TL : CGQC_units_mk1_0_TeamLeader_Carbine
{
    editorSubcategory = "EdSubcat_cgqc_mk1";
    displayName = "Plongeur (TL)";
    uniformClass = "cgqc_uniform_mk1";
};
class CGQC_units_mk1_5_Diver_sniper : CGQC_units_mk1_2_Sniper_ebr
{
    editorSubcategory = "EdSubcat_cgqc_mk1";
    displayName = "Plongeur (Sniper)";
    uniformClass = "cgqc_uniform_mk1";
};
class CGQC_units_mk1_5_Diver_Spotter : CGQC_units_mk1_2_Spotter
{
    editorSubcategory = "EdSubcat_cgqc_mk1";
    displayName = "Plongeur (Spotter)";
    uniformClass = "cgqc_uniform_mk1";
};
class CGQC_units_mk1_5_Diver_Engineer : CGQC_units_mk1_1_Engineer
{
    editorSubcategory = "EdSubcat_cgqc_mk1";
    displayName = "Plongeur (Saboteur)";
    uniformClass = "cgqc_uniform_mk1";
};


// == SWAT =*****************************************************************=

class CGQC_units_swat_assaulter : cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_swat";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Assaulter";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
    role = "Default";
    show = "true";
    uniformClass = "cgqc_uniform_mk1_black";
    backpack = "cgqc_pack_mk1_assault_black";
    weapons[] = {"UK3CB_MP5SD6", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Throw", "Put"};
    magazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "acex_intelitems_notepad", "DIGI_M7A3", "DIGI_M7A3", "ACE_M84", "ACE_M84", "SmokeShell", "SmokeShell", "SmokeShell", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "ACE_M84", "ACE_M84", "ACE_M84", "ACE_M84", "DIGI_M7A3", "DIGI_M7A3", "DIGI_M7A3", "DIGI_M7A3", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "30Rnd_9x21_Mag_SMG_02", "Tier1_20Rnd_9x19_JHP"};
    items[] = {"ACE_EarPlugs", "ACE_RangeCard", "WBK_HeadLampItem", "ItemAndroid", "ACE_MapTools", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "cgqc_items_ifak", "ACRE_PRC343", "ACRE_PRC152", "ACE_Canteen", "ACE_microDAGR", "ACE_EntrenchingTool", "ACE_wirecutter"};
    linkedItems[] = {"cgqc_vest_mk1_black", "cgqc_helmet_mk1_f_black", "G_Balaclava_TI_blk_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "Tier1_MicroT2_Leap_Black", "Tier1_TiRant9S", "Tier1_DBALPL", "Tier1_SIG_Romeo1"};
};

class CGQC_units_swat_tl: cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_swat";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Team Leader";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
    role = "Default";
    show = "true";
    uniformClass = "cgqc_uniform_mk1_black";
    backpack = "cgqc_pack_mk1_assault_black";
    weapons[] = {"UK3CB_P90C_TR_black", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Throw", "Put"};
    magazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "acex_intelitems_notepad", "DIGI_M7A3", "DIGI_M7A3", "ACE_M84", "ACE_M84", "SmokeShell", "SmokeShell", "SmokeShell", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "ACE_M84", "ACE_M84", "ACE_M84", "ACE_M84", "DIGI_M7A3", "DIGI_M7A3", "DIGI_M7A3", "DIGI_M7A3", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "50Rnd_570x28_SMG_03", "Tier1_20Rnd_9x19_JHP"};
    items[] = {"ACE_EarPlugs", "ACE_RangeCard", "WBK_HeadLampItem", "ACE_MapTools", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "cgqc_items_ifak", "ItemcTab", "ACRE_PRC343", "ACRE_PRC152", "ACE_Canteen", "ACE_microDAGR", "ACE_EntrenchingTool", "ACRE_PRC117F"};
    linkedItems[] = {"cgqc_vest_mk1_black", "cgqc_helmet_mk1_f_black", "G_Balaclava_TI_blk_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "muzzle_snds_570", "Tier1_MP7_NGAL_M300C_Black", "Tier1_MicroT2_Low_Black", "Tier1_TiRant9S", "Tier1_DBALPL", "Tier1_SIG_Romeo1"};
};

class CGQC_units_swat_breacher: cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_swat";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Breacher";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
    role = "Default";
    show = "true";
    uniformClass = "cgqc_uniform_mk1_black";
    backpack = "cgqc_pack_mk1_kitbag_black";
    weapons[] = {"sgun_mas_can_benelli_F", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Throw", "Put"};
    magazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "acex_intelitems_notepad", "DIGI_M7A3", "DIGI_M7A3", "ACE_M84", "ACE_M84", "SmokeShell", "SmokeShell", "SmokeShell", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "7Rnd_mas_can_12Gauge_Slug", "ACE_M84", "ACE_M84", "ACE_M84", "ACE_M84", "DIGI_M7A3", "DIGI_M7A3", "DIGI_M7A3", "DIGI_M7A3", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "tsp_popperCharge_mag", "tsp_popperCharge_mag", "tsp_popperCharge_mag", "tsp_popperCharge_mag", "tsp_stickCharge_mag", "tsp_stickCharge_mag", "tsp_frameCharge_mag", "tsp_frameCharge_mag", "7Rnd_mas_can_12Gauge_Slug", "Tier1_20Rnd_9x19_JHP"};
    items[] = {"ACE_EarPlugs", "ACE_RangeCard", "WBK_HeadLampItem", "ItemAndroid", "ACE_MapTools", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "cgqc_items_ifak", "ACRE_PRC343", "ACRE_PRC152", "ACE_Canteen", "ACE_microDAGR", "ACE_EntrenchingTool", "ACE_wirecutter"};
    linkedItems[] = {"cgqc_vest_mk1_black", "cgqc_helmet_mk1_f_black", "G_Balaclava_TI_blk_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "Tier1_TiRant9S", "Tier1_DBALPL", "Tier1_SIG_Romeo1"};
};

class CGQC_units_swat_sniper: cgqc_soldat_moderne
{
    faction = "CGQC";
    editorSubcategory = "EdSubcat_cgqc_swat";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Sniper";
    icon = "\a3\ui_f\data\GUI\Cfg\RespawnRoles\recon_ca.paa";
    role = "Default";
    show = "true";
    uniformClass = "cgqc_uniform_mk1_black";
    backpack = "cgqc_pack_mk1_assault_black";
    weapons[] = {"rhs_weap_m24sws", "cgqc_gun_glock19_wood", "cgqc_item_rangefinder", "Throw", "Put"};
    magazines[] = {"Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "acex_intelitems_notepad", "DIGI_M7A3", "DIGI_M7A3", "ACE_M84", "ACE_M84", "SmokeShell", "SmokeShell", "SmokeShell", "Tier1_15Rnd_9x19_JHP", "Tier1_15Rnd_9x19_JHP", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "ACE_M84", "ACE_M84", "ACE_M84", "ACE_M84", "DIGI_M7A3", "DIGI_M7A3", "DIGI_M7A3", "DIGI_M7A3", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "tsp_popperCharge_auto_mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "Tier1_20Rnd_9x19_JHP"};
    items[] = {"ACE_EarPlugs", "ACE_RangeCard", "WBK_HeadLampItem", "ItemAndroid", "ACE_MapTools", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "cgqc_items_ifak", "ACRE_PRC343", "ACRE_PRC152", "ACE_Canteen", "ACE_microDAGR", "ACE_EntrenchingTool", "ACE_wirecutter", "ACE_Tripod"};
    linkedItems[] = {"cgqc_vest_mk1_black", "cgqc_helmet_mk1_f_black", "G_Balaclava_TI_blk_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "JAS_GPNVG18_blk", "rhsusf_acc_m24_silencer_black", "Tier1_LeupoldM3A_Geissele_Docter_Black", "rhsusf_acc_harris_swivel", "Tier1_TiRant9S", "Tier1_DBALPL", "Tier1_SIG_Romeo1"};
};