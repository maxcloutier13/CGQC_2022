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

class Car;
class Tank;
class Car_F;
class Wheeled_APC_F;
class Tank_F;
class B_W_Quadbike_01_F;
class NDS_6x6_ATV_MIL_LR;
class rhsusf_mrzr4_d;
class B_W_LSV_01_unarmed_F;
class B_W_LSV_01_armed_F;
class B_W_LSV_01_AT_F;
class rhsusf_m998_d_s_4dr;
class rhsusf_m1025_d_s_m2;
class rhsusf_m1165a1_gmv_m2_m240_socom_d;
class B_W_MRAP_01_F;
class B_W_MRAP_01_hmg_F;

// Boats
class B_SDV_01_F;
class B_T_Boat_Transport_01_F;

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
    crew = "CGQC_units_mk2_Pilot_Jet_ai";
    typicalCargo[] = {"CGQC_units_mk1_4_Pilot_jet"};
};
class cgqc_plane_c130 : RHS_C130J
{
    scope = 2;
    faction = "cgqc";
    author = "silent1";
    displayName = "C-130";
    crew = "CGQC_units_mk2_Pilot_Jet_ai";
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

// Land vehicles
class B_W_APC_Wheeled_01_cannon_F;
class RHS_M2A3_BUSKIII_wd;
class I_LT_01_scout_F;
class cgqc_vic_badger : B_W_APC_Wheeled_01_cannon_F
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_ifv";
    displayName = "Badger (3+8)";
    crew = "CGQC_units_mk2_Tank_Driver_ai";
    maximumLoad = 6000;
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
    editorSubcategory = "EdSubcat_cgqc_vic_ifv";
    displayName = "Bradley (3+6)";
    crew = "CGQC_units_mk2_Tank_Driver_ai";
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
    displayName = "Command Wiezel (2)";
    crew = "CGQC_units_mk2_Tank_Driver_ai";
    // Boosted speed and space
    enginePower = 190;
    maxSpeed = 110;
    maximumLoad = 2000;
    hiddenSelectionsTextures[] = {
        "cgqc_2022\vehicles\cgqc_vic_command_main.paa",
        "cgqc_2022\vehicles\cgqc_vic_command_radar.paa",
        "cgqc_2022\vehicles\cgqc_vic_command_camonet.paa",
        "cgqc_2022\vehicles\cgqc_vic_command_cage.paa"};
    //Custom inventory
    //#include "vehicles\cgqc_vic_loadout_command"
    #include "vehicles\cgqc_vic_loadout_command.cpp"
};

class rhsgref_BRDM2_HQ;
class cgqc_vic_brdm : rhsgref_BRDM2_HQ
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_cmd";
    displayName = "Command BRDM (3+2+6)";
    crew = "CGQC_units_mk2_Tank_Driver_ai";
    //Custom inventory
    #include "vehicles\cgqc_vic_loadout_command.cpp"
};

// Tanks -----------------------------------------------------------------------------------
class B_T_MBT_01_TUSK_F;
class cgqc_vic_tank_leopard : B_T_MBT_01_TUSK_F {
    scope = 1;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_mbt";
    displayName = "Leopard II (3) - Deprecated";
    crew = "CGQC_units_mk2_Tank_Driver_ai";
};
class O_T_MBT_04_cannon_F;
class cgqc_vic_tank_armata : O_T_MBT_04_cannon_F {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_mbt";
    displayName = "T-14 Armata (3)";
    crew = "CGQC_units_mk2_Tank_Driver_ai";
};

// Unarmed -----------------------------------------------------------------------------------
class cgqc_vic_quad : B_W_Quadbike_01_F {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_unarmed";
    displayName = "Quad (1+1)";
    crew = "CGQC_units_mk2_Rifleman_ai";
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
class cgqc_vic_quad_ext : NDS_6x6_ATV_MIL_LR
{
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_unarmed";
    displayName = "6x6 ATV (1)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    canFloat = 1;
    waterResistanceCoef = 0.03;
    maximumLoad = 2000;
    fuelCapacity = 20;
    terrainCoef = 0.5;
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
    class EventHandlers
    {
         init = "[_this select 0, 'car'] call CGQC_fnc_addSpares";
    };
    #include "vehicles\cgqc_vic_loadout_quadExt.cpp"
};
class cgqc_vic_quad_ext_mortarmk6 : cgqc_vic_quad_ext
{
    scope = 1;
    maximumLoad = 3000;
    displayName = "6x6 ATV - Mk6 mortar (1)";
    #include "vehicles\cgqc_vic_loadout_quadExt_mk6.cpp"
};
class B_Quadbike_01_F;
class cgqc_vic_motocross : B_Quadbike_01_F
{
    scope = 1;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_unarmed";
    displayName = "Motocross (1+1) - deprecated";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_small.cpp"
};
class C_SUV_01_F;
class cgqc_vic_suv : C_SUV_01_F
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_unarmed";
    displayName = "SUV (1+3)";
    crew = "CGQC_units_mk2_Rifleman_ai";
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
class C_Offroad_02_unarmed_F;
class cgqc_vic_jeep : C_Offroad_02_unarmed_F {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_unarmed";
    displayName = "Jeep (1+3)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
    class EventHandlers
    {
         init = "[_this select 0, 'car'] call CGQC_fnc_addSpares";
    };
};
class cgqc_vic_jeep_cov : cgqc_vic_jeep {
    scope = 1;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_unarmed";
    displayName = "Jeep Covered (1+3) - deprecated";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};
class cgqc_vic_dagor : B_W_LSV_01_unarmed_F {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_unarmed";
    displayName = "Dagor (1+5)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};
class cgqc_vic_hmmw : rhsusf_m998_d_s_4dr {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_unarmed";
    displayName = "Humvee (1+5)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};
class cgqc_vic_mrap : B_W_MRAP_01_F {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_unarmed";
    displayName = "MRAP (1+3)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};
class cgqc_vic_polaris : rhsusf_mrzr4_d {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_unarmed";
    displayName = "Polaris Offroad (1+5)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_small.cpp"
};
// Armed -----------------------------------------------------------------------------------
class rhsusf_M1117_D;
class cgqc_vic_m1117 : rhsusf_M1117_D
{
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_armed";
    displayName = "M1117 HMG/Mk19 (3+4)";
    crew = "CGQC_units_mk2_Tank_Driver_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};

class cgqc_vic_jeep_hmg : cgqc_vic_jeep {
    scope = 1;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_armed";
    displayName = "Jeep HMG (2+1) - deprecated";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};
class cgqc_vic_dagor_hmg : B_W_LSV_01_armed_F {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_armed";
    displayName = "Dagor HMG (2+3)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};
class cgqc_vic_dagor_at : B_W_LSV_01_AT_F {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_armed";
    displayName = "Dagor AT (2+3)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};
class cgqc_vic_hmmw_hmg : rhsusf_m1025_d_s_m2 {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_armed";
    displayName = "Humvee HMG (2+3)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};
class cgqc_vic_hmmw_armored : rhsusf_m1165a1_gmv_m2_m240_socom_d {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_armed";
    displayName = "Humvee Armored (3+7)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};
class cgqc_vic_mrap_hmg : B_W_MRAP_01_hmg_F {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_vic_armed";
    displayName = "MRAP HMG (2+2)";
    crew = "CGQC_units_mk2_Rifleman_ai";
    #include "vehicles\cgqc_vic_loadout_medium.cpp"
};

// Boats -----------------------------------------------------------------------------------
class cgqc_vic_sub : B_SDV_01_F {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    fuelCapacity = 500;
    editorSubcategory = "EdSubcat_cgqc_boats";
    displayName = "Sous-Marin (2+2)";
    crew = "";
    precision = 10;
    verticalTurnCoef = 0.05;
    turnCoef = 0.5;
    acceleration = 20;
    maxSpeed = 60;
    waterSpeedFactor = 1.2;
    periscopeDepth = 1.2;
    idleRpm = 200;
    redRpm = 1200;
    thrustDelay = 2;
    formationX = 15;
    formationZ = 15;
    simulation = "submarinex";
    overSpeedBrakeCoef = 0.8;
    enginePower = 90;
    engineShiftY = 0.4;
    waterLeakiness = 0;
    waterResistanceCoef = 0.015;
    waterLinearDampingCoefX = 2.0;
    waterLinearDampingCoefY = 0.8;
    waterAngularDampingCoef = 1.0;
    rudderForceCoef = 0.2;
    rudderForceCoefAtMaxSpeed = 0.05;
    #include "vehicles\cgqc_vic_loadout_sub.cpp"
};
class cgqc_vic_boat : B_T_Boat_Transport_01_F {
    scope = 2;
    side = 1;
    author = "silent1";
    faction = "cgqc";
    editorSubcategory = "EdSubcat_cgqc_boats";
    displayName = "Bateau Pneumatique (1+5)";
    crew = "";
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
