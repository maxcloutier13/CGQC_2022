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
    class HitPoints {
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
    class EventHandlers {
        init = "[_this select 0, 'air'] execVM '\cgqc_2022\scripts\add_spares.sqf';";
    };
};
class RHS_C130J;
// Helicopter acre settings
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
    class AcreRacks {
        class Rack_1 {
            displayName = "Dash Upper"; // Name is displayed in the interaction menu.
            shortName = "Rack1";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", "gunner", "copilot", "external"}; // Attack helicopters have "gunner" copilots usually
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };

        class Rack_2: Rack_1 {
            displayName = "Dash Lower"; // If you have multiple racks a text label helps identify the particular rack.
            shortName = "Rack2";
        };
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
// Modifications to existing vehicles
// Drones - Attempt to override fuel capacity
class UAV_01_base_F : Helicopter_Base_F // Darter
{
    fuelCapacity = 400;
    class Turrets{
        class MainTurret;
    };
};
class UAV_06_base_F : Helicopter_Base_F // Pelican
{
    fuelCapacity = 1000;
};
class UAV_03_base_F : Helicopter_Base_F // Falcon
{
    fuelCapacity = 400;
};
class UAV_02_base_F : UAV // Yabhon
{
    fuelCapacity = 2000;
};
class UAV_05_Base_F : UAV // Sentinel
{
    fuelCapacity = 2000;
};


// Helicopters definitions
//#include "vehicles\cfg_littlebird.cpp"
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
class cgqc_plane_c130 : RHS_C130J
{
    scope = 2;
    faction = "cgqc";
    author = "silent1";
    displayName = "C-130";
    crew = "CGQC_units_mk1_4_Pilot_jet";
    typicalCargo[] = {"CGQC_units_mk1_4_Pilot_jet","CGQC_units_mk1_4_Pilot_jet"};
    model = "\rhsusf\addons\rhsusf_a2port_air\C130J\c130j.p3d";
    #include "\cgqc_2022\vehicles\cgqc_heli_heavy.sqf"
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        "\cgqc_2022\vehicles\cgqc_plane_c130_body.paa",
        "\cgqc_2022\vehicles\cgqc_plane_c130_wings.paa"
    };
    /*
    class textureSources
    {
        class standard
        {
            displayName = "Standard";
            author = "$STR_RHSUSF_AUTHOR_FULL";
            textures[] = {"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa","rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"};
            factions[] = {"rhs_faction_usaf"};
        };
    };
    textureList[] = {"standard",1};
    */
};
// Drones CGQC versions
class B_UAV_01_F : UAV_01_base_F{
    class Turrets : Turrets
    {
        class MainTurret : MainTurret
        {
            class OpticsIn;
        };
    };
    class sounds;
};
class cgqc_drone_darter : B_UAV_01_F
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_drones";
    displayName = "CGQC - HQ Darter";
    camouflage = 0.01;
	audible = 0.05;
    maxSpeed = 250;
    fuelCapacity = 1000;
    liftForceCoef = 2.0;
	cyclicAsideForceCoef = 2.0;
	cyclicForwardForceCoef = 1.2;
    radarTargetSize = 0.05;
	visualTargetSize = 0.05;
	LockDetectionSystem = 12;
    incomingMissileDetectionSystem = 26;
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
    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class OpticsIn {
                class Wide {
                    opticsDisplayName = "W";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.456;
                    minFov = 0.021875;
                    maxFov = 2.0;
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                };
            };
        };
    };
    class Sounds
    {
        class Engine
        {
            sound[] = {"A3\Sounds_F\air\Uav_01\quad_engine_full_01",0.4466836,1.0,200};
            frequency = "rotorSpeed";
            volume = "(camPos*((rotorSpeed-0.72)*4))/3";
        };
        class RotorLowOut
        {
            sound[] = {"A3\Sounds_F\air\Uav_01\blade",0.31622776,1.0,200};
            frequency = "rotorSpeed";
            volume = "(camPos*(0 max (rotorSpeed-0.1)))/3";
            cone[] = {1.6,3.14,1.6,0.95};
        };
        class RotorHighOut
        {
            sound[] = {"A3\Sounds_F\air\Uav_01\blade_high",0.31622776,1.0,250};
            frequency = "rotorSpeed";
            volume = "(camPos*10*(0 max (rotorThrust-0.9)))/3";
            cone[] = {1.6,3.14,1.6,0.95};
        };
        class EngineIn
        {
            sound[] = {"A3\Sounds_F\air\Uav_01\quad_engine_full_int",0.56234133,1.0};
            frequency = "rotorSpeed";
            volume = "((1-camPos)*((rotorSpeed-0.75)*4))/20";
        };
        class RotorLowIn
        {
            sound[] = {"A3\Sounds_F\air\Uav_01\blade_int",0.56234133,1.0};
            frequency = "rotorSpeed";
            volume = "((1-camPos)*(0 max (rotorSpeed-0.1)))/20";
        };
        class RotorHighIn
        {
            sound[] = {"A3\Sounds_F\air\Uav_01\blade_high_int",0.56234133,1.0};
            frequency = "rotorSpeed";
            volume = "((1-camPos)*3*(rotorThrust-0.9))/20";
        };
    };
};
// Land vehicles
class B_W_APC_Wheeled_01_cannon_F;
class UK3CB_MDF_B_Warrior_Cage;
class RHS_M2A3_BUSKIII_wd;
class I_LT_01_scout_F;
// Mraps Acre settings--------------------------------------------------------------------------
class Car;
class Car_F : Car{
    
    class EventHandlers
    {
         init = "[_this select 0, 'car'] execVM '\cgqc_2022\scripts\add_spares.sqf'";
    };
};
class MRAP_01_base_F : Car_F {
    class AcreRacks {
        class Rack_1 {
            displayName = "Dash Upper"; // Name is displayed in the interaction menu.
            shortName = "Rack1";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", {"cargo", 0}, "external"};
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };
        class Rack_2: Rack_1 {
            displayName = "Dash Lower"; // If you have multiple racks a text label helps identify the particular rack.
            shortName = "Rack2";
        };
    };
};
class MRAP_02_base_F: Car_F {
     class AcreRacks {
        class Rack_1 {
            displayName = "Dash Upper"; // Name is displayed in the interaction menu.
            shortName = "Rack1";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", {"cargo", 0}, "external"};
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };
        class Rack_2: Rack_1 {
            displayName = "Dash Lower"; // If you have multiple racks a text label helps identify the particular rack.
            shortName = "Rack2";
        };
    };
};
class MRAP_03_base_F: Car_F {
     class AcreRacks {
        class Rack_1 {
            displayName = "Dash Upper"; // Name is displayed in the interaction menu.
            shortName = "Rack1";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", {"cargo", 0}, "external"};
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };
        class Rack_2: Rack_1 {
            displayName = "Dash Lower"; // If you have multiple racks a text label helps identify the particular rack.
            shortName = "Rack2";
        };
    };
};
// APC Acre settings--------------------------------------------------------------------------
class Wheeled_APC_F: Car_F {
    class AcreRacks {
        class Rack_1 {
            displayName = "Dash Upper"; // Name is displayed in the interaction menu.
            shortName = "Rack1";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", "commander", "gunner", "external"}; // Who has access "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };
        class Rack_2 {
            displayName = "Dash Lower"; // If you have multiple racks a text label helps identify the particular rack.
            shortName = "Rack2";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", "commander", "gunner", "external"}; // Who has access "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };
     };
};
// Tank   Acre settings -----------------------------------------------------------------------
class Tank;
class Tank_F: Tank {
    class AcreRacks {
        class Rack_1 {
            displayName = "Dash Upper"; // Name is displayed in the interaction menu.
            shortName = "Rack1";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", "commander", "gunner", "external"}; // Who has access "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };
        class Rack_2 {
            displayName = "Dash Lower"; // If you have multiple racks a text label helps identify the particular rack.
            shortName = "Rack2";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", "commander", "gunner", "external"}; // Who has access "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };
    };
    class EventHandlers
    {
         init = "[_this select 0, 'tank'] execVM '\cgqc_2022\scripts\add_spares.sqf'";
    };
};
class cgqc_vic_badger : B_W_APC_Wheeled_01_cannon_F
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic";
    displayName = "CGQC - Badger (3+8)";
    crew = "CGQC_units_mk1_4_Tank_Driver";
    maximumLoad = 6000;
    ace_cargo_space = 5;
    hiddenSelectionsTextures[] = {
        "cgqc_2022\vehicles\cgqc_vic_badger_main.paa",
        "A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa",
        "cgqc_2022\vehicles\cgqc_vic_badger_tow.paa",
        "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
        "a3\Armor_F\Data\cage_olive_CO.paa"
    };
    //Custom inventory
    #include "vehicles\cgqc_vic_loadout_ifv.cpp"
};
class cgqc_vic_bradley : RHS_M2A3_BUSKIII_wd
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic";
    displayName = "CGQC - Bradley (3+6)";
    crew = "CGQC_units_mk1_4_Tank_Driver";
    ace_cargo_space = 4;
    hiddenSelectionsTextures[] = {
        "cgqc_2022\vehicles\cgqc_vic_bradley_1.paa",
        "cgqc_2022\vehicles\cgqc_vic_bradley_2.paa",
        "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
        "cgqc_2022\vehicles\cgqc_vic_bradley_3.paa",
        "cgqc_2022\vehicles\cgqc_vic_bradley_duke.paa"
    };
    #include "vehicles\cgqc_vic_loadout_ifv.cpp"
};
class cgqc_vic_wiezel : I_LT_01_scout_F
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_cmd";
    displayName = "CGQC - Command Wiezel (2)";
    crew = "CGQC_units_mk1_4_Tank_Driver";
    // Boosted speed and space
    enginePower = 190;
    maxSpeed = 110;
    maximumLoad = 2000;
    ace_cargo_space = 4;  // Cargo space your vehicle has
    hiddenSelectionsTextures[] = {
        "cgqc_2022\vehicles\cgqc_vic_command_main.paa",
        "cgqc_2022\vehicles\cgqc_vic_command_radar.paa",
        "cgqc_2022\vehicles\cgqc_vic_command_camonet.paa",
        "cgqc_2022\vehicles\cgqc_vic_command_cage.paa"};
    //Custom inventory
    //#include "vehicles\cgqc_vic_loadout_command"
    #include "vehicles\cgqc_vic_loadout_command.cpp"
};
// Offroad -----------------------------------------------------------------------------------
class B_W_Quadbike_01_F;
class cgqc_vic_quad : B_W_Quadbike_01_F
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_offroad";
    displayName = "CGQC - Quad (1+1)";
    crew = "CGQC_units_mk1_1_Rifleman_Carbine";
    class AcreRacks {
        class Rack_1 {
            displayName = "Dash Upper"; // Name is displayed in the interaction menu.
            shortName = "Rack1";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", "external"};
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };
    };
    #include "vehicles\cgqc_vic_loadout_small.cpp"
};
class NDS_6x6_ATV_MIL_LR;
class cgqc_vic_quad_ext : NDS_6x6_ATV_MIL_LR
{
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_offroad";
    displayName = "CGQC - 6x6 ATV (1)";
    crew = "CGQC_units_mk1_1_Rifleman_Carbine";
    maximumLoad = 3500;
    terrainCoef = 1.2;
    brakeDistance = 3.0;
	acceleration = 15;
    enableGPS = 1;
	hasTerminal = 1;
	camouflage = 3;
    maxSpeed = 90;
    wheelCircumference = 2.073;
    antiRollbarForceCoef = 0.2;
    antiRollbarForceLimit = 0.3;
    antiRollbarSpeedMin = 10;
    antiRollbarSpeedMax = 60;
    idleRpm = 500;
    redRpm = 8900;
    enginePower = 70;
    maxOmega = 360;
    peakTorque = 175;
    class AcreRacks {
        class Rack_1 {
            displayName = "Dash Upper"; // Name is displayed in the interaction menu.
            shortName = "Rack1";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", "external"};
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };
    };
    #include "vehicles\cgqc_vic_loadout_quadExt.cpp"
};
class cgqc_vic_quad_ext_mortarmk6 : cgqc_vic_quad_ext
{
    displayName = "CGQC - 6x6 ATV - Mk6 mortar (1)";
    #include "vehicles\cgqc_vic_loadout_quadExt_mk6.cpp"
};
class UK3CB_B_M1030_USMC_WDL;
class cgqc_vic_motocross : UK3CB_B_M1030_USMC_WDL
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_offroad";
    displayName = "CGQC - Motocross (1+1)";
    crew = "CGQC_units_mk1_1_Rifleman_Carbine";
    #include "vehicles\cgqc_vic_loadout_small.cpp"
};
class UK3CB_AAF_B_SUV_Armoured;
class cgqc_vic_suv : UK3CB_AAF_B_SUV_Armoured
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_offroad";
    displayName = "CGQC - SUV (1+5).";
    crew = "CGQC_units_mk1_1_Rifleman_Carbine";
    class AcreRacks {
        class Rack_1 {
            displayName = "Dash Upper"; // Name is displayed in the interaction menu.
            shortName = "Rack1";
            componentName = "ACRE_VRC103";
            allowedPositions[] = {"driver", {"cargo", 0}, "external"};
            mountedRadio = "ACRE_PRC117F";
            intercom[] = {};
        };
        class Rack_2: Rack_1 {
            displayName = "Dash Lower"; // If you have multiple racks a text label helps identify the particular rack.
            shortName = "Rack2";
        };
    };
    #include "vehicles\cgqc_vic_loadout_ifv.cpp"
};
// Helipad
class Land_HelipadSquare_F;
class cgqc_refuel_h : Land_HelipadSquare_F
{
    author = "silent1";
    //faction = "cgqc";
    //editorSubcategory = "EdSubcat_cgqc_offroad";
    _generalMacro = "cgqc_refuel_h";
    displayName = "CGQC - Helipad - Standard";
    class EventHandlers
    {
        init = "[_this, 0] execVM '\cgqc_2022\scripts\cgqc_refuel_setup.sqf'"; 
    };
};
class cgqc_refuel_h_short : Land_HelipadSquare_F
{
    author = "silent1";
    //faction = "cgqc";
    //editorSubcategory = "EdSubcat_cgqc_offroad";
    _generalMacro = "cgqc_refuel_h";
    displayName = "CGQC - Helipad - Rapide";
    class EventHandlers
    {
        init = "[_this, 1] execVM '\cgqc_2022\scripts\cgqc_refuel_setup.sqf'"; 
    };
};
// Whiteboards
class Land_MapBoard_F;
class cgqc_whiteboard_radios : Land_MapBoard_F
{
    _generalMacro = "MapBoard_altis_F";
    scope = 2;
    scopeCurator = 2;
    editorSubcategory = "EdSubcat_cgqc_logistics";
    displayName = "Whiteboard - Radios";
    hiddenSelectionsTextures[] = {"\CGQC_2022\textures\whiteboard_radio.paa"};
};
// Projector
class Misc_Videoprojektor;
class cgqc_projector : Misc_Videoprojektor
{
    scope = 2;
    scopeCurator = 2;
    displayName = "CGQC - Projecteur";
    class AnimationSources
    {
        class Light_1_pitch_source
        {
            source = "user";
            initPhase = 0;
            animPeriod = "1/45";
        };
        class Light_1_jaw_source
        {
            source = "user";
            initPhase = 0.13;
            animPeriod = 2;
        };
    };
    class Reflectors
    {
        class Light_1
        {
            color[] = {1000,1000,1200};
            ambient[] = {10,10,12};
            intensity = 5;
            size = 1;
            innerAngle = 30;
            outerAngle = 60;
            coneFadeCoef = 6;
            position = "Light_1_pos";
            direction = "Light_1_dir";
            hitpoint = "Light_1_hitpoint";
            selection = "Light_1_hide";
            useFlare = 1;
            flareSize = 0.9;
            flareMaxDistance = 250;
            class Attenuation
            {
                start = 0;
                constant = 0;
                linear = 2;
                quadratic = 0.5;
                hardLimitStart = 50;
                hardLimitEnd = 70;
            };
        };
    };
};