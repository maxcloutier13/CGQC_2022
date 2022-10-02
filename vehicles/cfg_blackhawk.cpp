class cgqc_heli_U60_base : Heli_Transport_01_base_F
{
    scope = 0;
    author = "silent1";
    dlc = "RHS_USAF";
    LESH_canBeTowed = 1;
    LESH_towFromFront = 0;
    LESH_AxisOffsetTarget[] = {0, -8, -1.62};
    LESH_WheelOffset[] = {0, 3};
    rhs_hasNoRadar = 1;
    category = "Air";
    memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
    memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
    irTarget = 1;
    irTargetSize = 0.9;
    visualTarget = 1;
    visualTargetSize = 1;
    radarTarget = 1;
    radarTargetSize = 1;
    LockDetectionSystem = "4 + 8";
    incomingMissileDetectionSystem = "2 + 8 + 16";
    class pilotCamera
    {
    };
    availableForSupportTypes[] = {"Drop", "Transport"};
    helmetMountedDisplay = 0;
    cargoCanEject = 1;
    driverCanEject = 0;
    class MFD
    {
    };
    class Components;
    weapons[] = {"rhsusf_weap_ANALQ144"};
    magazines[] = {"rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM"};
    unitInfoType = "RHSUSF_RscUnitInfoAir_UH60";
    unitInfoTypeRTD = "RHSUSF_RscUnitInfoAirRTDFullDigital";
    vehicleClass = "rhs_vehclass_helicopter";
    selectionHRotorStill = "velka vrtule staticka";
    selectionHRotorMove = "velka vrtule blur";
    selectionVRotorStill = "mala vrtule staticka";
    selectionVRotorMove = "mala vrtule blur";
    selectionDamage = "trup";
    selectionShowDamage = "poskozeni";
    slingLoadMaxCargoMass = 4084;
    memoryPointLRocket = "l raketa";
    memoryPointRRocket = "p raketa";
    memoryPointLMissile = "l strela";
    memoryPointRMissile = "p strela";
    GetInAction = "pilot_Heli_Light_02_Enter";
    GetOutAction = "pilot_Heli_Light_02_Exit";
    preciseGetInOut = 1;
    getInRadius = 1.5;
};
class cgqc_heli_UH60M_base : cgqc_heli_U60_base
{
    scope = 0;
    author = "silent1";
    displayName = "UH60M Blackhawk";
    model = "\rhsusf\addons\rhsusf_a2port_air\UH60M\UH60M.p3d";
    picture = "\rhsusf\addons\rhsusf_a2port_air\data\ico\rhs_uh60m_pic_ca.paa";
    icon = "\rhsusf\addons\rhsusf_a2port_air\data\mapico\Icon_uh60m_CA.paa";
    mapSize = 17;
    helmetMountedDisplay = 0;
    class MFD
    {
    };
    class Library
    {
        libTextDesc = "UH60M";
    };
    crew = "CGQC_units_mk1_4_Pilot_heli";
    typicalCargo[] = {"CGQC_units_mk1_4_crew_heli"};
    transportSoldier = 12;
    driverDoor = "doorR";
    memoryPointsGetInDriver = "pos Driver";
    memoryPointsGetInDriverDir = "pos driver dir";
    memoryPointsGetInDriverPrecise = "pos driver";
    memoryPointsGetInGunner = "pos gunner";
    memoryPointsGetInGunnerDir = "pos gunner dir";
    memoryPointsGetInCargo[] = {"pos cargo L", "pos cargo L2", "pos cargo L3", "pos cargo L4", "pos cargo R", "pos cargo R2", "pos cargo R3", "pos cargo R4"};
    memoryPointsGetInCargoDir[] = {"pos cargo L dir", "pos cargo L2 dir", "pos cargo L3 dir", "pos cargo L4 dir", "pos cargo R dir", "pos cargo R2 dir", "pos cargo R3 dir", "pos cargo R4 dir"};
    cargoDoors[] = {"DoorLB", "DoorLB", "DoorLB", "DoorLB", "DoorRB", "DoorRB", "DoorRB", "DoorRB"};
    cargoIsCoDriver[] = {0};
    threat[] = {0.8, 0.1, 0.3};
    gunnerCanSee = "2+4+8+16";
    driverCanSee = "2+4+8+16";
    reportOwnPosition = 1;
    class Components : Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
                {
                };
            };
        };
        class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
        {
            class Components
            {
                class EmptyDisplay
                {
                    componentType = "EmptyDisplayComponent";
                };
                class MinimapDisplay
                {
                    componentType = "MinimapDisplayComponent";
                    resource = "RscCustomInfoMiniMap";
                };
                class CrewDisplay
                {
                    componentType = "CrewDisplayComponent";
                    resource = "RscCustomInfoCrew";
                };
                class SlingLoadDisplay
                {
                    componentType = "SlingLoadDisplayComponent";
                    resource = "RscCustomInfoSlingLoad";
                };
                class SensorDisplay
                {
                    componentType = "SensorsDisplayComponent";
                    resource = "RscCustomInfoSensors";
                    range[] = {3000, 8000, 16000, 35000};
                };
            };
        };
        class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
        {
            defaultDisplay = "SensorDisplay";
            class Components
            {
                class EmptyDisplay
                {
                    componentType = "EmptyDisplayComponent";
                };
                class MinimapDisplay
                {
                    componentType = "MinimapDisplayComponent";
                    resource = "RscCustomInfoMiniMap";
                };
                class CrewDisplay
                {
                    componentType = "CrewDisplayComponent";
                    resource = "RscCustomInfoCrew";
                };
                class SlingLoadDisplay
                {
                    componentType = "SlingLoadDisplayComponent";
                    resource = "RscCustomInfoSlingLoad";
                };
                class SensorDisplay
                {
                    componentType = "SensorsDisplayComponent";
                    resource = "RscCustomInfoSensors";
                    range[] = {3000, 8000, 16000, 35000};
                };
            };
        };
        class TransportPylonsComponent
        {
            UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_UH60_EDEN_CA.paa";
            class pylons
            {
                class cmDispenser
                {
                    hardpoints[] = {"RHSUSF_cm_M130", "RHSUSF_cm_M130_x2"};
                    priority = 1;
                    attachment = "rhsusf_M130_CMFlare_Chaff_Magazine_x2";
                    maxweight = 800;
                    UIposition[] = {0.33, 0.0};
                };
            };
        };
    };
#include "cgqc_heli_medium.sqf"
    radarType = 0;
    attenuationEffectType = "HeliAttenuation";
    occludeSoundsWhenIn = 0.56234133;
    obstructSoundsWhenIn = 0.31622776;
    driverInAction = "RHS_UH60M_Pilot";
    driverAction = "RHS_UH60M_Pilot";
    cargoAction[] = {"RHS_UH60_Cargo02"};
    class Sounds : Sounds
    {
        class EngineExt
        {
            sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\uh60\BlackHawk_ext_engine", 1.71254, 1, 800};
            frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
            volume = "camPos*((rotorSpeed-0.72)*4)";
        };
        class EngineInt
        {
            sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\uh60\BlackHawk_int_engine", 1, 1};
            frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
            volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
        };
        class RotorInt
        {
            sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\uh60\BlackHawk_int_rotor", 0.501187, 1};
            frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
            volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
        };
        class DistanceSound
        {
            sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\uh60\BlackHawk_distant", 1.41, 1, 3200};
            frequency = "rotorSpeed";
            volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
        };
    };
    class SoundsExt : SoundsExt
    {
        class SoundEvents
        {
        };
        class Sounds : Sounds
        {
            class EngineExt
            {
                sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\uh60\BlackHawk_ext_engine", 1.71254, 1, 800};
                frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
                volume = "camPos*((rotorSpeed-0.72)*4)";
            };
            class EngineInt
            {
                sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\uh60\BlackHawk_int_engine", 1, 1};
                frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
                volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
            };
            class RotorInt
            {
                sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\uh60\BlackHawk_int_rotor", 0.501187, 1};
                frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
                volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
            };
            class DistanceSound
            {
                sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\uh60\BlackHawk_distant", 1.41, 1, 3200};
                frequency = "rotorSpeed";
                volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
            };
        };
    };
    class Exhausts
    {
        class Exhaust1
        {
            position = "exhaust1";
            direction = "exhaust1_dir";
            effect = "ExhaustsEffectHeliCom";
        };
        class Exhaust2
        {
            position = "exhaust2";
            direction = "exhaust2_dir";
            effect = "ExhaustsEffectHeliCom";
        };
    };
    class MarkerLights
    {
        class WhiteStill
        {
            name = "bily pozicni";
            color[] = {1, 1, 1};
            ambient[] = {0.1, 0.1, 0.1};
            blinking = 1;
            intensity = 75;
            blinkingPattern[] = {0.1, 0.9};
            blinkingPatternGuarantee = 0;
            drawLightSize = 0.2;
            drawLightCenterSize = 0.04;
        };
        class RedStill
        {
            name = "cerveny pozicni";
            color[] = {0.8, 0, 0};
            ambient[] = {0.08, 0, 0};
            intensity = 75;
            drawLight = 1;
            drawLightSize = 0.15;
            drawLightCenterSize = 0.04;
            activeLight = 0;
            blinking = 0;
            dayLight = 0;
            useFlare = 0;
        };
        class GreenStill : RedStill
        {
            name = "zeleny pozicni";
            color[] = {0, 0.8, 0};
            ambient[] = {0, 0.08, 0};
        };
        class RedBlinking
        {
            name = "bily pozicni blik";
            color[] = {0.9, 0.15, 0.1};
            ambient[] = {0.09, 0.015, 0.01};
            intensity = 75;
            blinking = 1;
            blinkingPattern[] = {0.1, 0.9};
            blinkingPatternGuarantee = 0;
            drawLightSize = 0.2;
            drawLightCenterSize = 0.04;
        };
        class WhiteBlinking : RedBlinking
        {
            name = "cerveny pozicni blik";
            blinkingPattern[] = {0.2, 1.3};
            drawLightSize = 0.25;
            drawLightCenterSize = 0.08;
        };
    };
    class Reflectors
    {
        class Middle
        {
            color[] = {7000, 7500, 10000, 1};
            ambient[] = {100, 100, 100, 0};
            position = "L svetlo";
            direction = "konec L svetla";
            hitpoint = "L svetlo";
            selection = "L svetlo";
            size = 1;
            innerAngle = 20;
            outerAngle = 60;
            coneFadeCoef = 10;
            intensity = 50;
            useFlare = 1;
            dayLight = 0;
            FlareSize = 6;
            class Attenuation
            {
                start = 1;
                constant = 0;
                linear = 0;
                quadratic = 4;
            };
        };
        class Right : Middle
        {
            position = "P svetlo";
            direction = "konec P svetla";
            hitpoint = "P svetlo";
            selection = "P svetlo";
        };
    };
    armorStructural = 20;
    epeImpulseDamageCoef = 1;
    hullDamageCauseExplosion = 1;
    hullExplosionDelay[] = {10, 20};
    class HitPoints : HitPoints
    {
        class HitHull : HitHull
        {
            simulation = "RHS_Hull_Helicopter";
            armor = -120;
            minimalHit = -0.2;
            radius = 0.2;
            name = "hull_hit";
            armorComponent = "Hit_Hull";
            visual = "zbytek";
            passThrough = 1;
            class DestructionEffects : RHS_Effects_Helicopter_Hull_Destruction
            {
            };
        };
        class HitEngine1 : HitEngine1
        {
            armor = -80;
            radius = 0.18;
            explosionShielding = 0.7;
            minimalHit = -0.05;
            name = "engine_1_hit";
            armorComponent = "Hit_Engine_1";
        };
        class HitEngine2 : HitEngine1
        {
            name = "engine_2_hit";
            armorComponent = "Hit_Engine_2";
        };
        class HitEngine : HitEngine2
        {
            armor = 999;
            name = "engine_hit";
            depends = "0.5 * (HitEngine1 + HitEngine2)";
        };
        class HitTail
        {
            armor = -150;
            explosionShielding = 0.2;
            passThrough = 0.5;
            minimalHit = -0.15;
            radius = 0.13;
            armorComponent = "Hit_Tail";
            name = "Hit_Tail";
            visual = "vis_tail";
            simulation = "RHS_Hull_Helicopter";
        };
        class HitVRotor
        {
            armor = -60;
            minimalHit = -0.1;
            armorComponent = "Hit_Rotor_Rear";
            name = "tail_rotor_hit";
            visual = "mala vrtule staticka";
            passThrough = 0.5;
            radius = 0.18;
            depends = "HitTail";
        };
        class HitHRotor
        {
            armor = -60;
            minimalHit = -0.1;
            armorComponent = "Hit_Rotor_Main";
            name = "velka vrtule";
            visual = "velka vrtule staticka";
            passThrough = 0.0;
            radius = 0.28;
        };
        class HitWinch
        {
            armor = -20;
            name = "Hit_Winch";
            visual = "";
            passThrough = 0;
            radius = 0.2;
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class Explo
                {
                    simulation = "particles";
                    type = "WinchDestructionExplo";
                    position = "slingLoad0";
                    intensity = 1;
                    interval = 1;
                    lifeTime = 0.06;
                };
                class Sparks
                {
                    simulation = "particles";
                    type = "WinchDestructionSparks";
                    position = "slingLoad0";
                    intensity = 1;
                    interval = 1;
                    lifeTime = 0.1;
                };
            };
        };
        class HitGlass7 : HitGlass1
        {
            name = "glass7";
            visual = "glass7";
        };
        class HitHydraulics
        {
            armor = -60;
            explosionShielding = 0.5;
            passThrough = 0.1;
            minimalHit = -0.15;
            radius = 0.13;
            material = -1;
            armorComponent = "hit_hydraulics";
            name = "hit_hydraulics";
            visual = "-";
            depends = "0";
        };
        class HitTransmission
        {
            armor = -20;
            explosionShielding = 0.5;
            passThrough = 0.1;
            minimalHit = -0.1;
            radius = 0.13;
            material = -1;
            name = "hit_transmission";
            visual = "-";
            depends = "0";
        };
        class HitHStabilizerL1
        {
            armor = -30;
            explosionShielding = 0.5;
            passThrough = 0.1;
            minimalHit = 0.1;
            radius = 0.13;
            material = -1;
            armorComponent = "Hit_Stabilizer_L";
            name = "Hit_Stabilizer_L";
            visual = "vis_stabilizer_h";
            depends = "0";
        };
        class HitHStabilizerR1
        {
            armor = -30;
            explosionShielding = 0.5;
            passThrough = 0.1;
            minimalHit = 0.1;
            radius = 0.13;
            material = -1;
            armorComponent = "Hit_Stabilizer_R";
            name = "Hit_Stabilizer_R";
            visual = "vis_stabilizer_h";
            depends = "0";
        };
        class HitPylon1
        {
            armor = -30;
            name = "hit_pylon_1";
            passThrough = 0;
            minimalHit = -0.1;
            explosionShielding = 0.1;
            radius = 0.7;
            visual = "-";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                effectRadius = 1;
                ignoreFuel = 1;
                class RHS_Pylon_Flash
                {
                    simulation = "particles";
                    type = "RHS_ERA_Flash";
                    position = "fx_pylon_1";
                    intensity = 0.5;
                    interval = 1;
                    lifeTime = 0.006;
                };
                class RHS_Pylon_Sound
                {
                    simulation = "sound";
                    type = "RHS_ERA_Explosion_Sound";
                    position = "fx_pylon_1";
                    intensity = 1;
                    interval = 1;
                    lifeTime = 1;
                };
                class RHS_Pylon_Smoke
                {
                    simulation = "particles";
                    type = "RHS_ERA_Smoke";
                    position = "fx_pylon_1";
                    intensity = 0.1;
                    interval = 1;
                    lifeTime = 0.04;
                };
                class RHS_Pylon_Shard
                {
                    simulation = "particles";
                    type = "RHS_ERA_Shard";
                    position = "fx_pylon_1";
                    intensity = 1;
                    interval = 1;
                    lifeTime = 0.03;
                };
            };
        };
        class HitPylon2
        {
            armor = -30;
            name = "hit_pylon_2";
            passThrough = 0;
            minimalHit = -0.1;
            explosionShielding = 0.1;
            radius = 0.7;
            visual = "-";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                effectRadius = 1;
                ignoreFuel = 1;
                class RHS_Pylon_Flash
                {
                    simulation = "particles";
                    type = "RHS_ERA_Flash";
                    position = "fx_pylon_2";
                    intensity = 0.5;
                    interval = 1;
                    lifeTime = 0.006;
                };
                class RHS_Pylon_Sound
                {
                    simulation = "sound";
                    type = "RHS_ERA_Explosion_Sound";
                    position = "fx_pylon_2";
                    intensity = 1;
                    interval = 1;
                    lifeTime = 1;
                };
                class RHS_Pylon_Smoke
                {
                    simulation = "particles";
                    type = "RHS_ERA_Smoke";
                    position = "fx_pylon_2";
                    intensity = 0.1;
                    interval = 1;
                    lifeTime = 0.04;
                };
                class RHS_Pylon_Shard
                {
                    simulation = "particles";
                    type = "RHS_ERA_Shard";
                    position = "fx_pylon_2";
                    intensity = 1;
                    interval = 1;
                    lifeTime = 0.03;
                };
            };
        };
        class HitPylon3
        {
            armor = -30;
            name = "hit_pylon_3";
            passThrough = 0;
            minimalHit = -0.1;
            explosionShielding = 0.1;
            radius = 0.7;
            visual = "-";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                effectRadius = 1;
                ignoreFuel = 1;
                class RHS_Pylon_Flash
                {
                    simulation = "particles";
                    type = "RHS_ERA_Flash";
                    position = "fx_pylon_3";
                    intensity = 0.5;
                    interval = 1;
                    lifeTime = 0.006;
                };
                class RHS_Pylon_Sound
                {
                    simulation = "sound";
                    type = "RHS_ERA_Explosion_Sound";
                    position = "fx_pylon_3";
                    intensity = 1;
                    interval = 1;
                    lifeTime = 1;
                };
                class RHS_Pylon_Smoke
                {
                    simulation = "particles";
                    type = "RHS_ERA_Smoke";
                    position = "fx_pylon_3";
                    intensity = 0.1;
                    interval = 1;
                    lifeTime = 0.04;
                };
                class RHS_Pylon_Shard
                {
                    simulation = "particles";
                    type = "RHS_ERA_Shard";
                    position = "fx_pylon_3";
                    intensity = 1;
                    interval = 1;
                    lifeTime = 0.03;
                };
            };
        };
        class HitPylon4
        {
            armor = -30;
            name = "hit_pylon_4";
            passThrough = 0;
            minimalHit = -0.1;
            explosionShielding = 0.1;
            radius = 0.7;
            visual = "-";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                effectRadius = 1;
                ignoreFuel = 1;
                class RHS_Pylon_Flash
                {
                    simulation = "particles";
                    type = "RHS_ERA_Flash";
                    position = "fx_pylon_4";
                    intensity = 0.5;
                    interval = 1;
                    lifeTime = 0.006;
                };
                class RHS_Pylon_Sound
                {
                    simulation = "sound";
                    type = "RHS_ERA_Explosion_Sound";
                    position = "fx_pylon_4";
                    intensity = 1;
                    interval = 1;
                    lifeTime = 1;
                };
                class RHS_Pylon_Smoke
                {
                    simulation = "particles";
                    type = "RHS_ERA_Smoke";
                    position = "fx_pylon_4";
                    intensity = 0.1;
                    interval = 1;
                    lifeTime = 0.04;
                };
                class RHS_Pylon_Shard
                {
                    simulation = "particles";
                    type = "RHS_ERA_Shard";
                    position = "fx_pylon_4";
                    intensity = 1;
                    interval = 1;
                    lifeTime = 0.03;
                };
            };
        };
    };
    class AnimationSources : AnimationSources
    {
        class hit_pylon_1_source
        {
            source = "user";
            animPeriod = 0;
            initPhase = 0;
        };
        class hit_pylon_2_source
        {
            source = "user";
            animPeriod = 0;
            initPhase = 0;
        };
        class hit_pylon_3_source
        {
            source = "user";
            animPeriod = 0;
            initPhase = 0;
        };
        class hit_pylon_4_source
        {
            source = "user";
            animPeriod = 0;
            initPhase = 0;
        };
        class cargolights_hide
        {
            source = "user";
            animPeriod = 1e-06;
            initPhase = 0;
        };
        class cabinlights_hide : cargolights_hide
        {
        };
        class DoorL
        {
            source = "door";
            animPeriod = 0.8;
            initPhase = 0;
            sound = "MetalDoorsSound";
            soundPosition = "doorL_axis";
        };
        class DoorR : DoorL
        {
            soundPosition = "doorR_axis";
        };
        class DoorRB : DoorL
        {
            animPeriod = 1.5;
            sound = "MetalOldBigDoorsSound";
            soundPosition = "doorRB_axis";
        };
        class DoorLB : DoorRB
        {
            soundPosition = "doorLB_axis";
        };
        class doorHandler_L : DoorL
        {
            source = "user";
            animPeriod = 0.0001;
        };
        class doorHandler_R : doorHandler_L
        {
        };
        class HitGlass1;
        class HitGlass7 : HitGlass1
        {
            hitpoint = "HitGlass7";
        };
        class Damper_1_source
        {
            source = "damper";
            wheel = "Wheel_1";
        };
        class Damper_2_source
        {
            source = "damper";
            wheel = "Wheel_2";
        };
        class Damper_3_source
        {
            source = "damper";
            wheel = "Wheel_3";
        };
        class Wheel_1_source
        {
            source = "wheel";
            wheel = "Wheel_1";
        };
        class Wheel_2_source
        {
            source = "wheel";
            wheel = "Wheel_2";
        };
        class Wheel_3_source
        {
            source = "wheel";
            wheel = "Wheel_3";
        };
        class Helicopter_Brakes
        {
            source = "user";
            animPeriod = 0.01;
            initPhase = 1;
        };
        class doors_hide
        {
            source = "user";
            displayName = "hide front doors";
            animPeriod = 0.0001;
            initPhase = 0;
            mass = -100;
        };
    };
    class Damage
    {
        tex[] = {};
        mat[] = {"rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_dust_filter.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_dust_filter.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_dust_filter_destruct.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_engine.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_engine.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_engine_destruct.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_fuselage.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_fuselage.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_fuselage_destruct.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_interior.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_interior.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_interior_destruct.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_navijak.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_navijak.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_navijak_destruct.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_glass.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_glass_damage.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_glass_damage.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_engine_MEV.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_engine_MEV.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_engine_MEV_destruct.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_fuselage_MEV.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_fuselage_MEV.rvmat", "rhsusf\addons\rhsusf_a2port_air\UH60M\Data\uh60m_fuselage_MEV_destruct.rvmat", "a3\data_f\default.rvmat", "a3\data_f\default.rvmat", "a3\data_f\default_destruct.rvmat"};
    };
    hiddenSelections[] = {"camo1", "camo2", "camo3", "filter"};
    hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa", "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa", "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa", "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"};
    class textureSources
    {
        class standard
        {
            displayName = "Standard";
            author = "$STR_RHSUSF_AUTHOR_FULL";
            textures[] = {"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa", "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa", "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa", "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"};
            factions[] = {"rhs_faction_usarmy_wd", "rhs_faction_usarmy_d"};
        };
    };
    textureList[] = {"standard", 1};
    class Attributes
    {
        class ObjectTexture
        {
            control = "ObjectTexture";
            data = "ObjectTexture";
            displayName = "Skin";
            tooltip = "Texture and material set applied on the object.";
        };
        class DoorL
        {
            displayName = "Open left door";
            property = "DoorL";
            control = "CheckboxNumber";
            defaultValue = "0";
            expression = "_this animateDoor ['%s',_value,true]";
        };
        class DoorR : DoorL
        {
            displayName = "Open right door";
            property = "DoorR";
        };
        class DoorLB : DoorL
        {
            displayName = "Open left cargo door";
            property = "DoorLB";
            expression = "_this animateDoor ['%s',_value,true];_this animate ['doorHandler_L',_value,true]";
        };
        class DoorRB : DoorL
        {
            displayName = "Open right cargo door";
            property = "DoorRB";
            expression = "_this animateDoor ['%s',_value,true];_this animate ['doorHandler_R',_value,true]";
        };
    };
    startDuration = 35;
    fuelCapacity = 1372;
    maxSpeed = 295;
    mainRotorSpeed = 1.2;
    backRotorSpeed = 6.1;
    mainBladeRadius = 7.9;
    tailBladeRadius = 1.68;
    maxOmega = 2000;
    minOmega = 0;
    numberPhysicalWheels = 3;
    maxFordingDepth = 1.7;
    waterLeakiness = 0.2;
    waterDamageEngine = 0.1;
    class Wheels
    {
        disableWheelsWhenDestroyed = 1;
        class Wheel_1
        {
            steering = 0;
            side = "left";
            boneName = "wheel_1_1_damper";
            suspForceAppPointOffset = "Wheel_1_1_axis";
            tireForceAppPointOffset = "Wheel_1_1_axis";
            center = "Wheel_1_1_axis";
            boundary = "Wheel_1_1_bound";
            suspTravelDirection[] = {0, -1, 0};
            width = 0.16;
            mass = 15;
            MOI = 0.675;
            dampingRate = 0.1;
            dampingRateDamaged = 1;
            dampingRateDestroyed = 1000;
            maxBrakeTorque = 1000;
            maxHandBrakeTorque = 0;
            maxCompression = 0.0;
            maxDroop = 0.18;
            sprungMass = 3400;
            springStrength = 72000;
            springDamperRate = 5280;
            longitudinalStiffnessPerUnitGravity = 5000;
            latStiffX = 2.5;
            latStiffY = 18.0;
            frictionVsSlipGraph[] = {{0, 1}, {0.3, 1}, {0.7, 0.8}};
        };
        class Wheel_2 : Wheel_1
        {
            boneName = "wheel_1_2_damper";
            suspForceAppPointOffset = "Wheel_1_2_axis";
            tireForceAppPointOffset = "Wheel_1_2_axis";
            center = "Wheel_1_2_axis";
            boundary = "Wheel_1_2_bound";
        };
        class Wheel_3 : Wheel_2
        {
            steering = 1;
            side = "right";
            boneName = "wheel_2_1_damper";
            suspForceAppPointOffset = "Wheel_2_1_axis";
            tireForceAppPointOffset = "Wheel_2_1_axis";
            center = "Wheel_2_1_axis";
            boundary = "Wheel_2_1_bound";
            suspTravelDirection[] = {0, -1.0, 0.0};
            width = 0.12;
            maxCompression = 0.0;
            maxDroop = 0.18;
            maxBrakeTorque = 1000;
            sprungMass = 1100;
            springStrength = 5800;
            springDamperRate = 5120;
        };
    };
    gearRetracting = 0;
    gearMinAlt = 999999;
    turnCoef = 1.6;
    terrainCoef = 1;
    damperSize = 0.05;
    damperForce = 10;
    damperDamping = 100;
    wheelWeight = 30;
    driveOnComponent[] = {"wheels"};
    class RotorLibHelicopterProperties
    {
        RTDconfig = "rhsusf\addons\rhsusf_c_a2port_air\UH60M\RTD_UH60M.xml";
        autoHoverCorrection[] = {3, 2.45, 0};
        defaultCollective = 0.625;
        retreatBladeStallWarningSpeed = 99.2878;
        maxTorque = 1360;
        stressDamagePerSec = 0.008;
        maxHorizontalStabilizerLeftStress = 10000;
        maxHorizontalStabilizerRightStress = 10000;
        maxVerticalStabilizerStress = 10000;
        horizontalWingsAngleCollMin = 0;
        horizontalWingsAngleCollMax = 0;
        maxMainRotorStress = 200000;
        maxTailRotorStress = 60000;
    };
};
class cgqc_heli_uh60m : cgqc_heli_UH60M_base
{
    scope = 2;
    side = 1;
    accuracy = 1.5;
    author = "silent1";
    displayName = "UH60M Blackhawk (12+3)";
    editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_UH60M.paa";
    faction = "cgqc";
    vehicleClass = "rhs_vehclass_helicopter";
    crew = "CGQC_units_mk1_4_Pilot_heli";
    typicalCargo[] = {"CGQC_units_mk1_4_crew_heli"};
    selectionFireAnim = "";
    transportSoldier = 8;
    cargoProxyIndexes[] = {2, 3, 6, 7, 9, 10, 11, 12};
    getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    class Turrets : Turrets
    {
        class CopilotTurret : CopilotTurret
        {
            CanEject = 0;
            gunnerAction = "RHS_UH60M_Pilot";
            gunnerInAction = "RHS_UH60M_Pilot";
            memoryPointsGetInGunner = "pos codriver";
            memoryPointsGetInGunnerDir = "pos codriver dir";
            gunnerGetInAction = "copilot_Heli_Light_02_Enter";
            gunnerGetOutAction = "copilot_Heli_Light_02_Exit";
            selectionFireAnim = "";
            preciseGetInOut = 1;
            GunnerDoor = "DoorL";
            gunnerLeftHandAnimName = "lever_copilot";
            gunnerRightHandAnimName = "stick_copilot";
            proxyIndex = 3;
            commanding = -1;
            class Reflectors
            {
                class cabin
                {
                    color[] = {830, 100, 100};
                    ambient[] = {5, 0, 0};
                    intensity = 9;
                    size = 1;
                    innerAngle = 90;
                    outerAngle = 165;
                    coneFadeCoef = 1;
                    position = "cabin_light";
                    direction = "cabin_light_dir";
                    hitpoint = "cabin_light";
                    selection = "cabin_light";
                    useFlare = 1;
                    flareSize = 1;
                    flareMaxDistance = 5;
                    dayLight = 1;
                    blinking = 0;
                    class Attenuation
                    {
                        start = 0;
                        constant = 0;
                        linear = 1;
                        quadratic = 50;
                        hardLimitStart = 1;
                        hardLimitEnd = 1.5;
                    };
                };
                class cargo_light_1 : cabin
                {
                    color[] = {830, 100, 100};
                    position = "cargo_light_1";
                    direction = "cargo_light_1_dir";
                    hitpoint = "cargo_light_1";
                    selection = "cargo_light_1";
                    intensity = 11;
                    useFlare = 0;
                    coneFadeCoef = 0.1;
                    class Attenuation
                    {
                        start = 0;
                        constant = 0;
                        linear = 1;
                        quadratic = 70;
                        hardLimitStart = 1;
                        hardLimitEnd = 1.5;
                    };
                };
                class cargo_light_2 : cargo_light_1
                {
                    position = "cargo_light_2";
                    direction = "cargo_light_2_dir";
                    hitpoint = "cargo_light_2";
                    selection = "cargo_light_2";
                };
            };
            class Hitpoints
            {
            };
        };
        class MainTurret : MainTurret
        {
            gunnerType = "CGQC_units_mk1_4_crew_heli";
            isCopilot = 0;
            showAsCargo = 1;
            body = "mainTurret";
            gun = "mainGun";
            minElev = -50;
            maxElev = 30;
            initElev = 0;
            minTurn = -7;
            maxTurn = 153;
            initTurn = 150;
            class TurnIn
            {
                limitsArrayTop[] = {{30, -7}, {30, 160}};
                limitsArrayBottom[] = {{-50.4841, -7}, {-50.3852, 32.969}, {-50.0, 86.4809}, {-50.144, 160}};
            };
            soundServo[] = {"", 0.01, 1};
            animationSourceHatch = "";
            stabilizedInAxes = "StabilizedInAxesNone";
            gunBeg = "muzzle_1";
            gunEnd = "chamber_1";
            selectionFireAnim = "zasleh";
            weapons[] = {"rhs_weap_m134_minigun_1"};
            magazines[] = {"rhs_mag_762x51_m80a1_4000"};
            gunnerName = "Crew Chief";
            gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
            gunnerOutOpticsShowCursor = 1;
            gunnerOpticsShowCursor = 1;
            gunnerAction = "RHS_UH60M_Gunner";
            gunnerInAction = "RHS_UH60M_Gunner";
            commanding = -2;
            primaryGunner = 1;
            lodTurnedIn = 0;
            lodTurnedOut = 0;
            lodOpticsIn = 0;
            lodOpticsOut = 0;
            class ViewOptics
            {
                initAngleX = 0;
                minAngleX = -30;
                maxAngleX = 30;
                initAngleY = 0;
                minAngleY = -100;
                maxAngleY = 100;
                initFov = 0.7;
                minFov = 0.25;
                maxFov = 1.1;
            };
            gunnerCompartments = "Compartment2";
            memoryPointGun = "machinegun";
            memoryPointGunnerOptics = "gunnerview";
            gunnerLeftHandAnimName = "gunner_1_hand_l";
            gunnerRightHandAnimName = "gunner_1_hand_r";
            gunnerLeftLegAnimName = "gunner_1_legs";
            gunnerRightLegAnimName = "gunner_1_legs";
            animationSourceStickX = "MainTurret_1_Inertia";
            animationSourceStickY = "MainGun_1_Inertia";
            discreteDistance[] = {400, 600};
            discreteDistanceInitIndex = 0;
            turretInfoType = "RHS_RscWeaponZeroing";
            class Components
            {
                class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
                {
                    class Components
                    {
                        class EmptyDisplay
                        {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay
                        {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                };
                class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
                {
                    defaultDisplay = "SensorDisplay";
                    class Components
                    {
                        class EmptyDisplay
                        {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay
                        {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                };
            };
            class Hitpoints
            {
            };
        };
        class RightDoorGun : MainTurret
        {
            gunnerType = "CGQC_units_mk1_4_crew_heli";
            body = "Turret_2";
            gun = "Gun_2";
            animationSourceBody = "Turret_2";
            animationSourceGun = "Gun_2";
            weapons[] = {"rhs_weap_m134_minigun_2"};
            stabilizedInAxes = "StabilizedInAxesNone";
            selectionFireAnim = "zasleh_1";
            proxyIndex = 2;
            gunnerName = "Door gunner";
            commanding = -3;
            minElev = -50;
            maxElev = 30;
            initElev = 0;
            minTurn = -153;
            maxTurn = 7;
            initTurn = -150;
            class TurnIn
            {
                limitsArrayTop[] = {{30, -160}, {30, 7}};
                limitsArrayBottom[] = {{-50.2377, -160}, {-43.3105, -148.5255}, {-50, -92.0832}, {-42.8167, 7}};
            };
            gunBeg = "muzzle_2";
            gunEnd = "chamber_2";
            primaryGunner = 0;
            memoryPointGun = "machinegun_1";
            memoryPointGunnerOptics = "gunnerview_2";
            gunnerLeftHandAnimName = "gunner_2_hand_l";
            gunnerRightHandAnimName = "gunner_2_hand_r";
            gunnerLeftLegAnimName = "gunner_2_legs";
            gunnerRightLegAnimName = "gunner_2_legs";
            animationSourceStickX = "MainTurret_2_inertia";
            animationSourceStickY = "MainGun_2_Inertia";
            class Hitpoints
            {
            };
        };
        class CargoTurret_01 : CargoTurret
        {
            weapons[] = {"rhsusf_weap_DummyLauncher"};
            gunnerAction = "passenger_inside_2";
            gunnerGetInAction = "GetInHeli_Transport_01Cargo";
            gunnerGetOutAction = "RHS_Heli_Cargo_Exit";
            memoryPointsGetInGunner = "pos cargo R2";
            memoryPointsGetInGunnerDir = "pos cargo R2 dir";
            gunnerName = "Passenger (Right Bench 2)";
            gunnerCompartments = "Compartment2";
            memoryPointGunnerOptics = "";
            proxyIndex = 4;
            maxElev = 15;
            minElev = -45;
            maxTurn = -10;
            minTurn = -43;
            isPersonTurret = 1;
            gunnerUsesPilotView = 1;
            selectionFireAnim = "";
            cantCreateAI = 1;
            playerPosition = 2;
            soundAttenuationTurret = "HeliAttenuationRamp";
            disableSoundAttenuation = 0;
            gunnerDoor = "DoorRB";
            enabledByAnimationSource = "doorRB";
            class Hitpoints
            {
            };
        };
        class CargoTurret_02 : CargoTurret_01
        {
            gunnerName = "Passenger (Right Bench 1)";
            memoryPointsGetInGunner = "pos cargo R";
            memoryPointsGetInGunnerDir = "pos cargo R dir";
            proxyIndex = 5;
            maxTurn = 70;
            minTurn = 22;
        };
        class CargoTurret_03 : CargoTurret_01
        {
            memoryPointsGetInGunner = "pos cargo L2";
            memoryPointsGetInGunnerDir = "pos cargo L2 dir";
            gunnerName = "Passenger (Left Bench 2)";
            proxyIndex = 1;
            maxTurn = 49;
            minTurn = 14;
            enabledByAnimationSource = "doorLB";
            gunnerDoor = "DoorLB";
        };
        class CargoTurret_04 : CargoTurret_03
        {
            gunnerName = "Passenger (Left Bench 1)";
            memoryPointsGetInGunner = "pos cargo L";
            memoryPointsGetInGunnerDir = "pos cargo L dir";
            proxyIndex = 8;
            maxTurn = -10;
            minTurn = -65;
        };
    };
    class AnimationSources : AnimationSources
    {
        class Hide_Scopes
        {
            source = "user";
            initPhase = 0;
            useSource = 1;
            animPeriod = 0.1;
            displayName = "Hide DCL-120 sights";
        };
        class Gatling_1
        {
            source = "revolving";
            weapon = "rhs_weap_m134_minigun_1";
        };
        class Gatling_2
        {
            source = "revolving";
            weapon = "rhs_weap_m134_minigun_2";
        };
        class muzzle_rot_hmg : Gatling_1
        {
            source = "ammorandom";
        };
        class muzzle_rot_hmg2 : Gatling_2
        {
            source = "ammorandom";
        };
        class ESSS_2x
        {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
        };
    };
    class UserActions
    {
        class GetGunners
        {
            displayName = "Spawn Crew";
            condition = "((call rhs_fnc_findPlayer) isEqualTo (driver this))";
            statement = "[this] execVM '\CGQC_2022\scripts\get_gunners.sqf'";
            position = "";
            radius = 10;
            priority = 10.5;
            onlyforplayer = 1;
            showWindow = 0;
            hideOnUse = 0;
        };
        class OpenCargoDoor
        {
            displayName = "Open right cargo door";
            position = "pos driver";
            radius = 15;
            showwindow = 0;
            condition = "this doorPhase 'doorRB' == 0 and (alive this) and player in this;";
            statement = "this animateDoor ['doorRB', 1];this animate ['doorHandler_R',1]";
            onlyforplayer = 1;
        };
        class CloseCargoDoor : OpenCargoDoor
        {
            displayName = "Close right cargo door";
            condition = "this doorPhase 'doorRB' > 0 and (alive this) and player in this;";
            statement = "this animateDoor ['doorRB', 0];this animate ['doorHandler_R',0];";
        };
        class OpenCargoLDoor : OpenCargoDoor
        {
            displayName = "Open left cargo door";
            condition = "this doorPhase 'doorLB' == 0 and (alive this) and player in this;";
            statement = "this animateDoor ['doorLB', 1];this animate ['doorHandler_L',1];";
            onlyforplayer = 1;
        };
        class CloseCargoLDoor : OpenCargoDoor
        {
            displayName = "Close left cargo door";
            condition = "this doorPhase 'doorLB' > 0 and (alive this) and player in this;";
            statement = "this animateDoor ['doorLB', 0];this animate ['doorHandler_L',0];";
        };
        class ToggleLight
        {
            displayName = "Toggle interior light";
            position = "pos driver";
            radius = 15;
            showwindow = 0;
            condition = "player in this;";
            statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
            onlyforplayer = 1;
        };
        class WheelBrakes : OpenCargoDoor
        {
            displayName = "Toggle Wheel Brakes";
            shortcut = "binocular";
            condition = "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
            statement = "[this] call rhs_fnc_heli_wheelBrakes";
        };
    };
    class EventHandlers : Eventhandlers
    {
        class RHSUSF_EventHandlers
        {
            postInit = "_this call rhs_fnc_reapplyTextures";
            getIn = "_this call rhs_fnc_uh60_doors";
            getOut = "_this call rhs_fnc_uh60_doors";
        };
    };
};
