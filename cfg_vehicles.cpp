class Air;
class Plane : Air
{
    class HitPoints;
};
class B_Plane_CAS_01_dynamicLoadout_F;
class UAV : Plane
{
    class NewTurret;
    class ViewPilot;
    class ViewOptics;
    class AnimationSources;
    class Components;
};
class Helicopter : Air
{
    class ViewPilot;
    class Turrets;
    class HitPoints
    {
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
        class HitHull;
        class HitEngine;
        class HitAvionics;
    };
};
class Helicopter_Base_F : Helicopter
{
    class Turrets : Turrets
    {
        class MainTurret;
    };
    class HitPoints : HitPoints
    {
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
        class HitMissiles;
        class HitHull;
        class HitFuel;
        class HitEngine;
        class HitAvionics;
        class HitVRotor;
        class HitHRotor;
    };
    class AnimationSources;
    class Eventhandlers;
    class ViewOptics;
    class CargoTurret;
    class RotorLibHelicopterProperties;
    class Reflectors
    {
        class Right;
    };
};
class Helicopter_Base_H : Helicopter_Base_F
{
    class EventHandlers;
    class Turrets : Turrets
    {
        class CopilotTurret;
    };
    class HitPoints : HitPoints
    {
        class HitHull;
        class HitFuel;
        class HitEngine;
        class HitAvionics;
        class HitVRotor;
        class HitHRotor;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
    };
    class CargoTurret;
    class AnimationSources;
    class ViewOptics;
    class RotorLibHelicopterProperties;
    class Components;
};
class Heli_Transport_01_base_F : Helicopter_Base_H
{
    class Sounds;
    class SoundsExt
    {
        class Sounds;
    };
    class HitPoints : HitPoints
    {
        class HitHull;
        class HitFuel;
        class HitAvionics;
        class HitMissiles;
        class HitEngine1;
        class HitEngine2;
        class HitEngine;
        class HitHRotor;
        class HitVRotor;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
        class HitGlass7;
        class HitGlass8;
    };
};
class Heli_Transport_02_base_F : Helicopter_Base_H
{
};
class Heli_Attack_01_base_F : Helicopter_Base_F
{
    class HitPoints : HitPoints
    {
        class HitHull;
        class HitFuel;
        class HitAvionics;
        class HitMissiles;
        class HitEngine1;
        class HitEngine2;
        class HitEngine;
        class HitHRotor;
        class HitVRotor;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
        class HitGlass7;
        class HitGlass8;
    };
    class Sounds;
};
// Helicopters definitions
#include "vehicles\cfg_littlebird.cpp"
#include "vehicles\cfg_huey.cpp"
#include "vehicles\cfg_blackhawk.cpp"
#include "vehicles\cfg_chinook.cpp"
#include "vehicles\cfg_apache.cpp"
// Planes
class cgqc_plane_a10 : B_Plane_CAS_01_dynamicLoadout_F
{
    scope = 2;
    faction = "cgqc";
    author = "silent1";
    displayName = "A10";
    crew = "CGQC_units_mk1_4_Pilot_jet";
    typicalCargo[] = {"CGQC_units_mk1_4_Pilot_jet"};
};
// Drones CGQC versions
class B_UAV_01_F;
class cgqc_drone_darter : B_UAV_01_F
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_drones";
    displayName = "CGQC - Darter";
    camouflage = 0.2;
	audible = 0.05;
    maxSpeed = 125;
    radarTargetSize = 0.05;
	visualTargetSize = 0.05;
    class SimpleObject
    {
        eden = 1;
        animate[] = {{"damagehide", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"propeller1_rotation", 0}, {"propeller1_blur_rotation", 0}, {"propeller2_rotation", 0}, {"propeller2_blur_rotation", 0}, {"propeller3_rotation", 0}, {"propeller3_blur_rotation", 0}, {"propeller4_rotation", 0}, {"propeller4_blur_rotation", 0}, {"propeller1_hide", 0}, {"propeller1_blur_hide", 0}, {"propeller2_hide", 0}, {"propeller2_blur_hide", 0}, {"propeller3_hide", 0}, {"propeller3_blur_hide", 0}, {"propeller4_hide", 0}, {"propeller4_blur_hide", 0}, {"mainturret", 0}, {"maingun", -0.05}};
        hide[] = {"zasleh", "tail rotor blur", "main rotor blur", "zadni svetlo", "clan", "podsvit pristroju", "poskozeni"};
        verticalOffset = 0.15;
        verticalOffsetWorld = -0.001;
        init = "''";
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
    _generalMacro = "cgqc_drone_darter";
    crew = "B_UAV_AI";
    typicalCargo[] = {"B_UAV_AI"};
    accuracy = 0.5;
    class assembleInfo
    {
        primary = 1;
        base = "";
        assembleTo = "";
        displayName = "";
        dissasembleTo[] = {"B_UAV_01_backpack_F"};
    };
    hiddenSelectionsTextures[] = {"\CGQC_2022\vehicles\cgqc_drone_darter_dark.paa"};
    textureList[] = {"Blufor", 1};
};
// Land vehicles
class B_W_APC_Wheeled_01_cannon_F;
class UK3CB_MDF_B_Warrior_Cage;
class RHS_M2A3_BUSKIII_wd;
class cgqc_vic_badger : B_W_APC_Wheeled_01_cannon_F
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_ifv";
    displayName = "CGQC - Badger (3+8)";
    crew = "CGQC_units_mk1_4_Tank_Driver";
    hiddenSelectionsTextures[] = {
        "A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_base_olive_CO.paa",
        "A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa",
        "A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_tows_olive_co.paa",
        "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
        "a3\Armor_F\Data\cage_olive_CO.paa"
    };
};
class cgqc_vic_warrior : UK3CB_MDF_B_Warrior_Cage
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_ifv";
    displayName = "CGQC - Warrior (3+6)";
    crew = "CGQC_units_mk1_4_Tank_Driver";
    /*
    hiddenSelectionsTextures[] = {
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_Warrior\data\mdf_apc_tracked_03_ext_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_Warrior\data\mdf_apc_tracked_03_ext2_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_Warrior\data\mdf_camonet_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_Warrior\data\mdf_cage_co.paa"
    };*/
};
class cgqc_vic_bradley : RHS_M2A3_BUSKIII_wd
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_ifv";
    displayName = "CGQC - Bradley (3+6)";
    crew = "CGQC_units_mk1_4_Tank_Driver";

    hiddenSelectionsTextures[] = {
        "cgqc_2022\vehicles\cgqc_vic_bradley_1.paa",
        "cgqc_2022\vehicles\cgqc_vic_bradley_2.paa",
        "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
        "cgqc_2022\vehicles\cgqc_vic_bradley_3.paa",
        "\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
    };
    /* hiddenSelectionsTextures[] = {
        "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa",
        "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa",
        "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
        "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
        "\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
    }; */
};

// Modifications to existing vehicles
// Drones - Attempt to override fuel capacity
class UAV_01_base_F : Helicopter_Base_F // Darter
{
    fuelCapacity = 300;
};
class UAV_06_base_F : Helicopter_Base_F // Pelican
{
    fuelCapacity = 1000;
};
class UAV_03_base_F : Helicopter_Base_F // Falcon
{
    fuelCapacity = 300;
};
class UAV_02_base_F : UAV // Yabhon
{
    fuelCapacity = 2000;
};
class UAV_05_Base_F : UAV // Sentinel
{
    fuelCapacity = 2000;
};