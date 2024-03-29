class B_Kitbag_Base;
class B_Kitbag_rgr;
class B_mas_can_Kitbag_d;
class B_mas_can_Kitbag_m;
class rhssaf_kitbag_digital;

class B_mas_can_Kitbag_LW;
class B_RadioBag_01_black_F;
class B_RadioBag_01_tropic_F;
class B_RadioBag_01_eaf_F;
class B_RadioBag_01_wdl_F;
class B_RadioBag_01_oucamo_F;
class B_Parachute;
class NATO_Box_Base;
class Box_NATO_Equip_F;
class B_supplyCrate_F;
class cgqc_pack_mk1_magic;
class Land_Cargo10_military_green_F;
class Box_NATO_Wps_F;
class B_AssaultPack_rgr;
class B_AssaultPack_cbr;
class B_AssaultPack_mcamo;
class B_AssaultPack_dgtl;
class B_AssaultPack_blk;
class B_Carryall_cbr;
class B_Carryall_mcamo;
class B_Carryall_khk;
class B_Carryall_oucamo;

// Mk1 box
class cgqc_box_mk1_rolebox : Box_NATO_Equip_F
{
    scope = 0;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_rolebox";
    displayName = "CGQC MK1 Basic";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_mk1_rolebox_texture.paa",
                                  "\CGQC_2022\containers\cgqc_box_mk1_rolebox_label.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
    ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
    ace_cargo_noRename = 1;
    class EventHandlers
    {
       // init = "_this execVM '\CGQC_2022\loadouts\cgqc_box_mk1.sqf'";
    };
    class SimpleObject
    {
        eden = 1;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.382;
        verticalOffsetWorld = 0;
        init = "''";
    };
    class TransportMagazines
    {
    };
    class TransportWeapons
    {
    };
    class TransportItems
    {
    };
};
class cgqc_box_mk1_rolebox_green : cgqc_box_mk1_rolebox
{
    scope = 0;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_rolebox_green";
    displayName = "CGQC MK1 Basic (Green)";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_mk1_rolebox_green.paa",
                                  "\CGQC_2022\containers\cgqc_box_mk1_rolebox_label.paa"};
};
// Mk1+ box
class cgqc_box_mk1_plus : cgqc_box_mk1_rolebox
{
    scope = 0;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_plus";
    displayName = "CGQC MK1+ Variantes";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_mk1_rolebox_texture.paa",
                                  "\CGQC_2022\containers\cgqc_box_mk1_plus_label.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
    class EventHandlers
    {
        //init = "_this execVM '\CGQC_2022\loadouts\cgqc_box_mk1_plus.sqf'";
    };
};
class cgqc_box_mk1_plus_green : cgqc_box_mk1_plus
{
    scope = 0;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_plus_green";
    displayName = "CGQC MK1+ Variantes (Green)";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_mk1_rolebox_green.paa",
                                  "\CGQC_2022\containers\cgqc_box_mk1_plus_label.paa"};
};
// Mk1++ box
class cgqc_box_mk1_plus_plus : cgqc_box_mk1_rolebox
{
    scope = 0;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_plus_plus";
    displayName = "CGQC MK1++ Full";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_mk1_rolebox_texture.paa",
                                  "\CGQC_2022\containers\cgqc_box_mk1_plus_plus_label.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
    class EventHandlers
    {
        //init = "_this execVM '\CGQC_2022\loadouts\cgqc_box_mk1_plus_plus.sqf'";
    };
};
class cgqc_box_mk1_plus_plus_green : cgqc_box_mk1_plus_plus
{
    scope = 1;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_plus_plus_green";
    displayName = "CGQC MK1++ Crate";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_mk1_rolebox_green.paa",
                                  "\CGQC_2022\containers\cgqc_box_mk1_plus_plus_label.paa"};
};
// Mk1 Loadout only box
class cgqc_box_mk1_loadouts : cgqc_box_mk1_rolebox
{
    scope = 1;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_plus_plus";
    displayName = "CGQC MK1 Loadouts Only";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_mk1_rolebox_texture.paa",
                                  "\CGQC_2022\containers\cgqc_box_mk1_loadouts.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
    class EventHandlers
    {
        //init = "_this execVM '\CGQC_2022\loadouts\cgqc_box_mk1_loadouts.sqf'";
    };
};
class cgqc_box_mk1_loadouts_green : cgqc_box_mk1_loadouts
{
    scope = 1;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_plus_plus_green";
    displayName = "CGQC MK1 Loadouts Only";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_mk1_rolebox_green.paa",
                                  "\CGQC_2022\containers\cgqc_box_mk1_loadouts.paa"};
};
// Original training map box
class cgqc_box_original : B_supplyCrate_F
{
    author = "silent1";
    _generalMacro = "cgqc_box_original";
    displayName = "CGQC Originale";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_originale.paa"};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_supplyCrate_F.jpg";
    ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
    ace_cargo_noRename = 1;
    class EventHandlers
    {
        init = "_this execVM '\CGQC_2022\loadouts\cgqc_box_original.sqf'";
    };
    class SimpleObject
    {
        eden = 1;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.892;
        verticalOffsetWorld = 0;
        init = "''";
    };
    class TransportMagazines
    {
    };
    class TransportWeapons
    {
    };
    class TransportItems
    {
    };
};
class cgqc_box_original_green : B_supplyCrate_F
{
    scope = 0;
    author = "silent1";
    _generalMacro = "cgqc_box_original_green";
    displayName = "CGQC Originale (green)";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_originale_green.paa"};
    ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
    ace_cargo_noRename = 1;
};
// Mk1 Big Arsenal
class cgqc_box_mk1_arsenal : B_supplyCrate_F
{
    scope = 1;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_arsenal";
    displayName = "CGQC MK1++ Arsenal";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_box_mk1_arsenal.paa"};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_supplyCrate_F.jpg";
    ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
    ace_cargo_noRename = 1;
    class EventHandlers
    {
       // init = "_this execVM '\CGQC_2022\loadouts\cgqc_box_mk1_plus_plus.sqf'";
    };
    class TransportMagazines{};
    class TransportWeapons{};
    class TransportItems{};
    class TransportBackpacks{};
};

// Mk1 Portable Mortar
class Box_NATO_WpsSpecial_F;
class cgqc_box_mk1_mortar : Box_NATO_WpsSpecial_F
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_mortar";
    displayName = "CGQC Mk2 Mortier 60mm (1.3KM)";
    ace_cargo_size = 1;  // Cargo space the object takes
    ace_cargo_canLoad = 1;
    hiddenSelectionsTextures[] = {
        "\CGQC_2022\containers\cgqc_box_mortar_label.paa",
        "\CGQC\containers\cgqc_box_mk1_ammobox.paa"
    };
    #include "loadouts\cgqc_box_mortar.sqf"
};
class cgqc_box_mk1_mortar_mk6 : Box_NATO_WpsSpecial_F
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_box_mk1_mortar_auto";
    displayName = "CGQC Mk2 Mortier Mk6 (4KM)";
    ace_cargo_size = 1;  // Cargo space the object takes
    ace_cargo_canLoad = 1;
    hiddenSelectionsTextures[] = {
        "\CGQC_2022\containers\cgqc_box_mortar_label.paa",
        "\CGQC\containers\cgqc_box_mk1_ammobox.paa"
    };
    #include "loadouts\cgqc_box_mortar_mk6.sqf"
};
// Assault packs --------------------------------------------------------------------------------------
class cgqc_pack_mk1_assault : B_AssaultPack_rgr // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack Vert";
};
class cgqc_pack_mk1_assault_desert : B_AssaultPack_cbr // Desert
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault_desert";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack Desert";
};
class cgqc_pack_mk1_assault_mcam : B_AssaultPack_mcamo // Multicam
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault_mcam";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack Multicam";
};
class cgqc_pack_mk1_assault_cadpat : B_AssaultPack_dgtl // Cadpat
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault_cadpat";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack Cadpat-ish";
};
class cgqc_pack_mk1_assault_black : B_AssaultPack_blk // Black
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault_black";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack Black";
};

// Kitbags --------------------------------------------------------------------------------------
class cgqc_pack_mk1_kitbag : B_Kitbag_Base // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag";
    maximumLoad = 280;
    mass = 30;
    displayName = "CGQC Kitbag Vert";
    picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
    hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
};
class cgqc_pack_mk1_kitbag_desert : B_mas_can_Kitbag_d // Desert
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag_desert";
    maximumLoad = 280;
    mass = 30;
    displayName = "CGQC Kitbag Desert";
};
class cgqc_pack_mk1_kitbag_mcam : B_mas_can_Kitbag_m // Multicam
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag_mcam";
    maximumLoad = 280;
    mass = 30;
    displayName = "CGQC Kitbag Multicam";
};
class cgqc_pack_mk1_kitbag_cadpat : rhssaf_kitbag_digital // Woodland
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag_cadpat";
    maximumLoad = 280;
    mass = 30;
    displayName = "CGQC Kitbag Cadpat";
};

class cgqc_pack_mk1_kitbag_white : B_Kitbag_rgr // Winter
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag_white";
    maximumLoad = 280;
    mass = 30;
    displayName = "CGQC Kitbag White";
    hiddenSelectionsTextures[] = {"\cgqc_2022\containers\cgqc_kitbag_white.paa"};
};
// Radio Backpacks --------------------------------------------------------------------------------------
class cgqc_pack_mk1_Radiobag: B_RadioBag_01_eaf_F // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag Vert";
};
class cgqc_pack_mk1_radiobag_desert : B_RadioBag_01_eaf_F // Desert
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag_desert";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag Desert";
};
class cgqc_pack_mk1_radiobag_mcam : B_RadioBag_01_wdl_F // Multicam
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag_mcam";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag Multicam";
};
class cgqc_pack_mk1_radiobag_cadpat : B_RadioBag_01_tropic_F // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag_cadpat";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag Cadpat";
};
class cgqc_pack_mk1_radiobag_black : B_RadioBag_01_black_F // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag_black";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag Black";
};
class cgqc_pack_mk1_radiobag_white : B_RadioBag_01_oucamo_F // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag_white";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag White";
};
// Carryalls --------------------------------------------------------------------------------------
class cgqc_pack_mk1_carryall : B_Carryall_khk // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall";
    maximumLoad = 380;
    mass = 50;
    displayName = "CGQC Carryall Vert";
};
class cgqc_pack_mk1_carryall_desert :  B_Carryall_cbr // Desert
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall_desert";
    maximumLoad = 380;
    mass = 50;
    displayName = "CGQC Carryall Desert";
};
class cgqc_pack_mk1_carryall_mcam : B_Carryall_mcamo // Multicam
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall_mcam";
    maximumLoad = 380;
    mass = 50;
    displayName = "CGQC Carryall Multicam";
};

class cgqc_pack_mk1_carryall_black : B_Carryall_khk // Black
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall_black";
    maximumLoad = 380;
    mass = 50;
    displayName = "CGQC Carryall Black";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_carryall_black.paa"};
};
class cgqc_pack_mk1_carryall_white : B_Carryall_oucamo // White
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall_white";
    maximumLoad = 380;
    mass = 50;
    displayName = "CGQC Carryall White";
};
// Invisible backpack ---------------------------------------------------------------------------------
class cgqc_pack_mk1_tank_driver : cgqc_pack_mk1_magic
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {

    };
    class TransportWeapons
    {
    };
};
class cgqc_pack_mk1_assault_white : B_AssaultPack_rgr // White
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault_white";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack White";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_assault_white.paa"};
};
class cgqc_pack_mk1_kitbag_black : B_Kitbag_rgr // Black
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag_black";
    maximumLoad = 280;
    mass = 30;
    displayName = "CGQC Kitbag Black";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_kitbag_black.paa"};
};
class cgqc_pack_mk1_carryall_cadpat : B_Carryall_cbr // Cadpat
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall_cadpat";
    maximumLoad = 380;
    mass = 50;
    displayName = "CGQC Carryall Cadpat-ish";
    hiddenSelectionsTextures[] = {"\CGQC_2022\containers\cgqc_carryall_cadpat.paa"};
};

// mk1 Backpacks --------------------------------------------------------------------------------------
class CGQC_units_mk1_0_HQ_pack : cgqc_pack_mk1_radiobag
{
    scope = 1;
    class TransportMagazines
    {

        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };

    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_UAVBattery
        {
            count = 1;
            name = "ACE_UAVBattery";
        };
        class _xx_ACE_fieldDressing
        {
            count = 5;
            name = "ACE_fieldDressing";
        };
        class _xx_ACE_salineIV_500
        {
            count = 1;
            name = "ACE_salineIV_500";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_ItemcTab
        {
            count = 1;
            name = "ItemcTab";
        };
        class _xx_ACRE_PRC117F
        {
            count = 3;
            name = "ACRE_PRC117F";
        };
        class _xx_Rev_darter_item
        {
            count = 1;
            name = "Rev_darter_item";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_0_Drone_operator_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
        class _xx_Rev_darter_item
        {
            count = 2;
            name = "Rev_darter_item";
        };
        class _xx_ACE_UAVBattery
        {
            count = 2;
            name = "ACE_UAVBattery";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_0_TeamLeader_Carbine_pack : cgqc_pack_mk1_radiobag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
        class _xx_1Rnd_HE_Grenade_shell
        {
            count = 10;
            magazine = "1Rnd_HE_Grenade_shell";
        };
        class _xx_UGL_FlareRed_F
        {
            count = 3;
            magazine = "UGL_FlareRed_F";
        };
        class _xx_1Rnd_SmokeBlue_Grenade_shell
        {
            count = 3;
            magazine = "1Rnd_SmokeBlue_Grenade_shell";
        };
        class _xx_1Rnd_Smoke_Grenade_shell
        {
            count = 3;
            magazine = "1Rnd_Smoke_Grenade_shell";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };

        class _xx_ACRE_PRC117F
        {
            count = 1;
            name = "ACRE_PRC117F";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_0_TeamLeader_CQB_pack : cgqc_pack_mk1_radiobag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
        class _xx_1Rnd_HE_Grenade_shell
        {
            count = 10;
            magazine = "1Rnd_HE_Grenade_shell";
        };
        class _xx_UGL_FlareRed_F
        {
            count = 3;
            magazine = "UGL_FlareRed_F";
        };
        class _xx_1Rnd_SmokeBlue_Grenade_shell
        {
            count = 3;
            magazine = "1Rnd_SmokeBlue_Grenade_shell";
        };
        class _xx_1Rnd_Smoke_Grenade_shell
        {
            count = 3;
            magazine = "1Rnd_Smoke_Grenade_shell";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };

        class _xx_ACRE_PRC117F
        {
            count = 1;
            name = "ACRE_PRC117F";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_0_JTAC_pack : cgqc_pack_mk1_radiobag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
        class _xx_Laserbatteries
        {
            count = 1;
            magazine = "Laserbatteries";
        };
        class _xx_rhsusf_m112_mag
        {
            count = 2;
            magazine = "rhsusf_m112_mag";
        };
    };
    class TransportItems
    {
        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
        class _xx_Rev_darter_item
        {
            count = 2;
            name = "Rev_darter_item";
        };
        class _xx_ACE_SpottingScope
        {
            count = 1;
            name = "ACE_SpottingScope";
        };
        class _xx_ACE_Tripod
        {
            count = 1;
            name = "ACE_Tripod";
        };
        class _xx_ItemcTab
        {
            count = 1;
            name = "ItemcTab";
        };
        class _xx_ACE_ATragMX
        {
            count = 1;
            name = "ACE_ATragMX";
        };
        class _xx_ACE_Kestrel4500
        {
            count = 1;
            name = "ACE_Kestrel4500";
        };
        class _xx_ACE_UAVBattery
        {
            count = 2;
            name = "ACE_UAVBattery";
        };
        class _xx_ACRE_PRC117F
        {
            count = 1;
            name = "ACRE_PRC117F";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_1_Rifleman_Carbine_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_1_Rifleman_CQB_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
    };

    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_1_Medic_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_SmokeShellPurple
        {
            count = 3;
            magazine = "SmokeShellPurple";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 50;
            name = "ACE_fieldDressing";
        };
        class _xx_ACE_salineIV_500
        {
            count = 7;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
        class _xx_ACE_salineIV
        {
            count = 4;
            name = "ACE_salineIV";
        };
        class _xx_ACE_morphine
        {
            count = 20;
            name = "ACE_morphine";
        };
        class _xx_ACE_epinephrine
        {
            count = 20;
            name = "ACE_epinephrine";
        };
        class _xx_ACE_splint
        {
            count = 4;
            name = "ACE_splint";
        };
        class _xx_ACE_tourniquet
        {
            count = 4;
            name = "ACE_tourniquet";
        };
        class _xx_FSGm_ItemMedicBag
        {
            count = 1;
            name = "FSGm_ItemMedicBag";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_1_Engineer_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 2;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 2;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 2;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
        class _xx_rhsusf_m112_mag
        {
            count = 2;
            magazine = "rhsusf_m112_mag";
        };
        class _xx_rhsusf_m112x4_mag
        {
            count = 1;
            magazine = "rhsusf_m112x4_mag";
        };

        class _xx_rhsusf_mine_m14_mag
        {
            count = 4;
            magazine = "rhsusf_mine_m14_mag";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
        class _xx_ToolKit
        {
            count = 1;
            name = "ToolKit";
        };
        class _xx_ACE_DefusalKit
        {
            count = 1;
            name = "ACE_DefusalKit";
        };
        class _xx_ACE_M26_Clacker
        {
            count = 1;
            name = "ACE_M26_Clacker";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_2_LMG_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
        class _xx_rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote
        {
            count = 4;
            magazine = "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_2_HMG_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
        class _xx_Tier1_250Rnd_762x51_Belt_M993_AP
        {
            count = 2;
            magazine = "Tier1_250Rnd_762x51_Belt_M993_AP";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_2_Marksman_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
        class _xx_ACE_20Rnd_762x51_Mk319_Mod_0_Mag
        {
            count = 13;
            magazine = "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
        class _xx_ACE_ATragMX
        {
            count = 1;
            name = "ACE_ATragMX";
        };
        class _xx_ACE_Kestrel4500
        {
            count = 1;
            name = "ACE_Kestrel4500";
        };

    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_2_Sniper_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };

        class _xx_7Rnd_mas_can_408_Mag
        {
            count = 20;
            magazine = "7Rnd_mas_can_408_Mag";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
        class _xx_ACE_ATragMX
        {
            count = 1;
            name = "ACE_ATragMX";
        };
        class _xx_ACE_Kestrel4500
        {
            count = 1;
            name = "ACE_Kestrel4500";
        };

    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_3_AT_MAAWS_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
        class _xx_MRAWS_HEAT_F
        {
            count = 3;
            magazine = "MRAWS_HEAT_F";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_3_AT_Javelin_pack : cgqc_pack_mk1_kitbag
{
    scope = 1;
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
        class _xx_jav_AT_mas_can
        {
            count = 3;
            magazine = "jav_AT_mas_can";
        };
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
        class _xx_G_mas_can_gasmask
        {
            count = 1;
            name = "G_mas_can_gasmask";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_4_Tank_Driver_pack : cgqc_pack_mk1_magic
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {

        class _xx_WBK_HeadLampItem
        {
            count = 1;
            name = "WBK_HeadLampItem";
        };
        class _xx_ToolKit
        {
            count = 1;
            name = "ToolKit";
        };

        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_FF_Painkiller
        {
            count = 5;
            name = "FF_Painkiller";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_4_Pilot_heli_pack : B_Parachute
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_4_Pilot_Jet_pack : B_Parachute
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
};
class CGQC_units_mk1_4_crew_heli_pack : B_Parachute
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
    };
    class TransportWeapons
    {
    };
};

// 2023 upgrades of Core containers
// Parachute stuff
class cgqc_box_mk2_parachute : Box_NATO_Equip_F
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_box_mk2_parachute";
    displayName = "CGQC MK3 Parachute Box";
    hiddenSelectionsTextures[] = {"\CGQC\containers\cgqc_box_mk2_red.paa",
                                  "\CGQC\containers\cgqc_box_mk2_parachutes.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
    ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
    ace_cargo_noRename = 1;
    class SimpleObject
    {
        eden = 1;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.382;
        verticalOffsetWorld = 0;
        init = "''";
    };
    class TransportMagazines
    {
    };
    class TransportWeapons
    {
    };
    class TransportItems
    {
        class _xx_cgqc_goggles_mk1_para
        {
            count = 30;
            name = "cgqc_goggles_mk1_para";
        };
        class _xx_ACE_Altimeter
        {
            count = 30;
            name = "ACE_Altimeter";
        };
    };
    class TransportBackpacks
    {
        class _xx_B_Parachute
        {
            backpack = "B_Parachute";
            count = 30;
        };
    };
    class EventHandlers
    {
        init = "[_this, 'para'] call CGQC_fnc_loadMk3Menu";
    };
};
// Diving stuff
class cgqc_box_mk2_diving : Box_NATO_Equip_F
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_box_mk2_diving";
    displayName = "CGQC MK3 Diving Box";
    hiddenSelectionsTextures[] = {"\CGQC\containers\cgqc_box_mk2_blue.paa",
                                  "\CGQC\containers\cgqc_box_mk2_plongee.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
    ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
    ace_cargo_noRename = 1;
    class SimpleObject
    {
        eden = 1;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.382;
        verticalOffsetWorld = 0;
        init = "''";
    };
    class TransportMagazines
    {
    };
    class TransportWeapons
    {
    };
    class TransportItems
    {
        class _xx_cgqc_uniform_mk1_diver
        {
            count = 30;
            name = "cgqc_uniform_mk1_diver";
        };
        class _xx_cgqc_vest_mk1_diver
        {
            count = 30;
            name = "cgqc_vest_mk1_diver";
        };
        class _xx_cgqc_goggles_mk1_diver
        {
            count = 30;
            name = "cgqc_goggles_mk1_diver";
        };
    };
    class EventHandlers
    {
        init = "[_this, 'dive'] call CGQC_fnc_loadMk3Menu";
    };
};
