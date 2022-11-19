class cgqc_heli_ch47_base : Heli_Transport_02_base_F
{
    rhs_paraRamp = "ramp_anim";
    rhs_paraOff = -8.5;
    rhs_rampAnim = "ramp";
    rhs_paraScript = "rhs_fnc_vehPara";
    dlc = "RHS_USAF";
    rhs_hasNoRadar = 1;
    LESH_canBeTowed = 1;
    LESH_towFromFront = 0;
    LESH_AxisOffsetTarget[] = {0, -8, -2.5};
    LESH_WheelOffset[] = {0, 3};
    category = "Air";
    maxOmega = 2000;
    numberPhysicalWheels = 4;
    class Wheels
    {
        disableWheelsWhenDestroyed = 1;
        class Wheel_1_1
        {
            steering = 0;
            side = "left";
            boneName = "Wheel_1_1_axis_damper";
            suspForceAppPointOffset = "Wheel_1_1_axis";
            tireForceAppPointOffset = "Wheel_1_1_axis";
            center = "Wheel_1_1_axis";
            boundary = "Wheel_1_1_bound";
            suspTravelDirection[] = {0, -1, 0};
            width = 0.565;
            mass = 15;
            MOI = 0.768;
            dampingRate = 0.25;
            dampingRateDamaged = 2;
            dampingRateDestroyed = 1000;
            maxBrakeTorque = 2000;
            maxHandBrakeTorque = 0;
            maxCompression = 0.14;
            maxDroop = 0.0;
            sprungMass = 2500;
            springStrength = 12000;
            springDamperRate = 1280;
            longitudinalStiffnessPerUnitGravity = 5000;
            latStiffX = 2.5;
            latStiffY = 18.0;
            frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
        };
        class Wheel_2_1 : Wheel_1_1
        {
            boneName = "Wheel_2_1_axis_damper";
            side = "right";
            suspForceAppPointOffset = "Wheel_2_1_axis";
            tireForceAppPointOffset = "Wheel_2_1_axis";
            center = "Wheel_2_1_axis";
            boundary = "Wheel_2_1_bound";
        };
        class Wheel_1_2 : Wheel_1_1
        {
            steering = 1;
            side = "left";
            boneName = "Wheel_1_2_axis_damper";
            suspForceAppPointOffset = "Wheel_1_2_axis";
            tireForceAppPointOffset = "Wheel_1_2_axis";
            center = "Wheel_1_2_axis";
            boundary = "Wheel_1_2_bound";
            width = 0.21;
            maxCompression = 0.15;
        };
        class Wheel_2_2 : Wheel_1_2
        {
            boneName = "Wheel_2_2_axis_damper";
            side = "right";
            suspForceAppPointOffset = "Wheel_2_2_axis";
            tireForceAppPointOffset = "Wheel_2_2_axis";
            center = "Wheel_2_2_axis";
            boundary = "Wheel_2_2_bound";
        };
    };
    gearRetracting = 0;
    gearUpTime = 1;
    gearDownTime = 1;
    backRotorForceCoef = 0.9;
    driveOnComponent[] = {"wheels"};
    fuelCapacity = 3200;
    fuelConsumptionRate = 0.398;
    slingLoadMaxCargoMass = 12700;
    canFloat = 1;
    waterLeakiness = 0.02;
    maxFordingDepth = 1.5;
    waterResistanceCoef = 0.5;
    waterResistance = 10;
    waterLinearDampingCoefY = 5;
    waterLinearDampingCoefX = 2;
    waterAngularDampingCoef = 5;
    mainRotorSpeed = 1;
    backRotorSpeed = 1;
    mainBladeRadius = 9.15;
    tailBladeRadius = 9.15;
    tailBladeVertical = 0;
    liftForceCoef = 1.7;
    cyclicAsideForceCoef = 1;
    cyclicForwardForceCoef = 1;
    bodyFrictionCoef = 0.9;
    useRoadwayForVehicles = 1;
    class RotorLibHelicopterProperties
    {
        RTDconfig = "rhsusf\addons\rhsusf_c_a2port_air\CH47\Rotorlib_CH47.xml";
        autoHoverCorrection[] = {4.7, 3.8, 0};
        defaultCollective = 0.665;
        retreatBladeStallWarningSpeed = 92.583;
        maxTorque = 4014;
        stressDamagePerSec = 0.00333333;
        maxHorizontalStabilizerLeftStress = 10000;
        maxHorizontalStabilizerRightStress = 10000;
        maxVerticalStabilizerStress = 10000;
        horizontalWingsAngleCollMin = 0;
        horizontalWingsAngleCollMax = 0;
        maxMainRotorStress = 185000;
        maxTailRotorStress = 185000;
    };
    availableForSupportTypes[] = {"Drop", "Transport"};
    class pilotCamera
    {
    };
    unitInfoType = "RHSUSF_RscUnitInfoAir_CH47";
    unitInfoTypeRTD = "RHSUSF_RscUnitInfoAirRTDFullDigital";
    selectionFireAnim = "";
    destrType = "DestructWreck";
    scope = 0;
    displayName = "CH-47F";
    side = 1;
    accuracy = 0.5;
    showNVGCargo[] = {1};
    maxSpeed = 293;
    nameSound = "veh_helicopter";
    model = "\rhsusf\addons\rhsusf_a2port_air\CH47\CH_47F";
    picture = "\rhsusf\addons\rhsusf_a2port_air\data\ico\rhs_ch47_pic_ca.paa";
    icon = "\rhsusf\addons\rhsusf_a2port_air\data\mapico\Icon_ch47f_CA.paa";
    mapSize = 25;
    driverAction = "RHS_CH47_Pilot";
    driverLeftHandAnimName = "lever_pilot";
    driverRightHandAnimName = "stick_pilot";
    memoryPointsGetInCargo[] = {"pos cargo"};
    memoryPointsGetInCargoDir[] = {"pos cargo dir"};
    cargoaction[] = {"RHS_CH47_Cargo01", "RHS_CH47_Cargo01", "RHS_CH47_Cargo01", "RHS_CH47_Cargo02", "RHS_CH47_Cargo03", "RHS_CH47_Cargo01", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02", "RHS_CH47_Cargo01", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02", "RHS_CH47_Cargo03", "RHS_CH47_Cargo01", "RHS_CH47_Cargo02", "RHS_CH47_Cargo01", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02", "RHS_CH47_Cargo01", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02", "RHS_CH47_Cargo01", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02"};
    cargoiscodriver[] = {0};
    cargoCompartments[] = {"Compartment1"};
    transportSoldier = 22;
    cargoProxyIndexes[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20, 22, 23, 24, 25};
    getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    transportMaxBackpacks = 10;
    reportOwnPosition = 1;
    irTarget = 1;
    irTargetSize = 1.2;
    visualTarget = 1;
    visualTargetSize = 1.3;
    radarTarget = 1;
    radarTargetSize = 1;
    radarType = 4;
    LockDetectionSystem = "8";
    incomingMissileDetectionSystem = "2 + 8 + 16";
    armor = 40;
    armorStructural = 20;
    hullDamageCauseExplosion = 1;
    hullExplosionDelay[] = {10, 20};
    damageResistance = 0.001;
    class HitPoints : HitPoints
    {
        class HitHull
        {
            simulation = "RHS_Hull_Helicopter";
            armor = -100;
            minimalHit = -0.2;
            explosionShielding = 2;
            radius = 0.4;
            armorComponent = "Hit_Hull";
            name = "hit_hull";
            visual = "zbytek";
            passThrough = 1;
            class DestructionEffects : RHS_Effects_Helicopter_Hull_Destruction
            {
            };
        };
        class HitEngine1
        {
            armor = -80;
            radius = 0.18;
            explosionShielding = 0.7;
            minimalHit = -0.05;
            passThrough = 0.4;
            visual = "";
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
            armor = -200;
            armorComponent = "";
            name = "engine_hit";
            depends = "0.5 * (HitEngine1 + HitEngine2)";
        };
        class HitVRotor
        {
            armor = -80;
            minimalHit = -0.1;
            name = "mala vrtule";
            visual = "mala vrtule staticka";
            passThrough = 0.5;
            armorComponent = "Hit_Rotor_Rear";
        };
        class HitHRotor
        {
            armor = -80;
            minimalHit = -0.1;
            name = "velka vrtule";
            visual = "velka vrtule staticka";
            passThrough = 0.5;
            armorComponent = "Hit_Rotor_Main";
        };
        class HitGlass1
        {
            name = "glass1";
            visual = "glass1";
            radius = 0.37;
            armor = -5;
            explosionShielding = 2.0;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass1";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects1";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects1";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects1";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects1";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects1";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects1";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects1";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects1";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects1";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects1";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass2
        {
            name = "glass2";
            visual = "glass2";
            radius = 0.37;
            armor = -5;
            explosionShielding = 1.5;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass2";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects2";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects2";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects2";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects2";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects2";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects2";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects2";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects2";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects2";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects2";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass3
        {
            name = "glass3";
            visual = "glass3";
            radius = 0.25;
            armor = -5;
            explosionShielding = 1.5;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass3";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects3";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects3";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects3";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects3";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects3";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects3";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects3";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects3";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects3";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects3";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass4
        {
            name = "glass4";
            visual = "glass4";
            radius = 0.25;
            armor = -5;
            explosionShielding = 1.5;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass4";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects4";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects4";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects4";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects4";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects4";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects4";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects4";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects4";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects4";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects4";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass5
        {
            name = "glass5";
            visual = "glass5";
            radius = 0.34;
            armor = -5;
            explosionShielding = 2.0;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass5";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects5";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects5";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects5";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects5";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects5";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects5";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects5";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects5";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects5";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects5";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass6
        {
            name = "glass6";
            visual = "glass6";
            radius = 0.34;
            armor = -5;
            explosionShielding = 1.5;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass6";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects6";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects6";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects6";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects6";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects6";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects6";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects6";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects6";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects6";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects6";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass7
        {
            name = "glass7";
            visual = "glass7";
            radius = 0.34;
            armor = -5;
            explosionShielding = 1.5;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass7";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects7";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects7";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects7";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects7";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects7";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects7";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects7";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects7";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects7";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects7";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass8
        {
            name = "glass8";
            visual = "glass8";
            radius = 0.34;
            armor = -5;
            explosionShielding = 1.5;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass8";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects8";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects8";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects8";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects8";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects8";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects8";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects8";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects8";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects8";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects8";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass9
        {
            name = "glass9";
            visual = "glass9";
            radius = 0.24;
            armor = -5;
            explosionShielding = 1;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass9";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects9";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects9";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects9";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects9";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects9";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects9";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects9";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects9";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects9";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects9";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass10
        {
            name = "glass10";
            visual = "glass10";
            radius = 0.24;
            armor = -5;
            explosionShielding = 1;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass10";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects10";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects10";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects10";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects10";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects10";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects10";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects10";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects10";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects10";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects10";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass11
        {
            name = "glass11";
            visual = "glass11";
            radius = 0.24;
            armor = -5;
            explosionShielding = 1;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass11";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects11";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects11";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects11";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects11";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects11";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects11";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects11";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects11";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects11";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects11";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass12
        {
            name = "glass12";
            visual = "glass12";
            radius = 0.24;
            armor = -5;
            explosionShielding = 1;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass12";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects12";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects12";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects12";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects12";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects12";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects12";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects12";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects12";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects12";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects12";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass13
        {
            name = "glass13";
            visual = "glass13";
            radius = 0.24;
            armor = -5;
            explosionShielding = 1;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass13";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects13";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects13";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects13";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects13";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects13";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects13";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects13";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects13";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects13";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects13";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass14
        {
            name = "glass14";
            visual = "glass14";
            radius = 0.24;
            armor = -5;
            explosionShielding = 1;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass14";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects14";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects14";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects14";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects14";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects14";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects14";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects14";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects14";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects14";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects14";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
        class HitGlass15
        {
            name = "glass15";
            visual = "glass15";
            radius = 0.24;
            armor = -5;
            explosionShielding = 1;
            minimalHit = -0.025;
            passThrough = 0;
            armorComponent = "glass15";
            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class BrokenGlass1
                {
                    simulation = "particles";
                    type = "BrokenGlass1NS";
                    position = "GlassEffects15";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2
                {
                    simulation = "particles";
                    type = "BrokenGlass2NS";
                    position = "GlassEffects15";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3
                {
                    simulation = "particles";
                    type = "BrokenGlass3NS";
                    position = "GlassEffects15";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4
                {
                    simulation = "particles";
                    type = "BrokenGlass4NS";
                    position = "GlassEffects15";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5
                {
                    simulation = "particles";
                    type = "BrokenGlass5NS";
                    position = "GlassEffects15";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass1S
                {
                    simulation = "particles";
                    type = "BrokenGlass1SS";
                    position = "GlassEffects15";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass2S
                {
                    simulation = "particles";
                    type = "BrokenGlass2SS";
                    position = "GlassEffects15";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass3S
                {
                    simulation = "particles";
                    type = "BrokenGlass3SS";
                    position = "GlassEffects15";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass4S
                {
                    simulation = "particles";
                    type = "BrokenGlass4SS";
                    position = "GlassEffects15";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
                class BrokenGlass5S
                {
                    simulation = "particles";
                    type = "BrokenGlass5SS";
                    position = "GlassEffects15";
                    intensity = 0.15;
                    interval = 1;
                    lifeTime = 0.05;
                };
            };
        };
    };
    class Components : Components
    {
        class TransportPylonsComponent
        {
            UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_CH47_EDEN_CA.paa";
            class pylons
            {
                class cmDispenser
                {
                    hardpoints[] = {"RHSUSF_cm_M130", "RHSUSF_cm_M130_x2", "RHSUSF_cm_M130_x4", "RHSUSF_cm_M130_x8"};
                    priority = 1;
                    attachment = "rhsusf_M130_CMFlare_Chaff_Magazine_x8";
                    maxweight = 800;
                    UIposition[] = {0.33, 0.0};
                };
            };
        };
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
    };
    class Turrets : Turrets
    {
        class CopilotTurret : CopilotTurret
        {
            isCopilot = 1;
            CanEject = 0;
            gunnerAction = "RHS_CH47_Pilot";
            gunnerInAction = "RHS_CH47_Pilot";
            memoryPointsGetInGunner = "pos codriver";
            memoryPointsGetInGunnerDir = "pos codriver dir";
            gunnerGetInAction = "GetInHeli_Transport_01Cargo";
            gunnerGetOutAction = "GetOutLow";
            gunnerName = "Co-Pilot";
            preciseGetInOut = 0;
            GunnerDoor = "";
            gunnerLeftHandAnimName = "lever_copilot";
            gunnerRightHandAnimName = "stick_copilot";
            gunnerLeftLegAnimName = "";
            gunnerRightLegAnimName = "";
            proxyIndex = 4;
            gunnerCompartments = "Compartment3";
            commanding = -3;
            selectionFireAnim = "";
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
                    intensity = 21;
                    useFlare = 0;
                    coneFadeCoef = 0.1;
                    class Attenuation
                    {
                        start = 0;
                        constant = 0;
                        linear = 1;
                        quadratic = 70;
                        hardLimitStart = 2;
                        hardLimitEnd = 2.5;
                    };
                };
                class cargo_light_2 : cargo_light_1
                {
                    position = "cargo_light_2";
                    direction = "cargo_light_2_dir";
                    hitpoint = "cargo_light_2";
                    selection = "cargo_light_2";
                };
                class cargo_light_3 : cargo_light_1
                {
                    position = "cargo_light_3";
                    direction = "cargo_light_3_dir";
                    hitpoint = "cargo_light_3";
                    selection = "cargo_light_3";
                };
            };
        };
        class MainTurret : MainTurret
        {
            isCopilot = 0;
            body = "mainTurret";
            gun = "mainGun";
            minElev = -30;
            maxElev = 30;
            initElev = -10;
            minTurn = 36;
            maxTurn = 140;
            initTurn = 0;
            soundServo[] = {"", 0.01, 1};
            memoryPointGunnerOptics = "gunnerview";
            memoryPointGun = "machinegun_1";
            animationSourceHatch = "";
            stabilizedInAxes = "StabilizedInAxesNone";
            selectionFireAnim = "zasleh";
            animationSourceBody = "MainTurret";
            animationSourceGun = "MainGun";
            gunBeg = "muzzle_1";
            gunEnd = "chamber_1";
            weapons[] = {"rhs_weap_m134_minigun_1"};
            magazines[] = {"rhs_mag_762x51_m80a1_4000"};
            gunnerName = "Crew Chief";
            gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
            gunnerOutOpticsShowCursor = 1;
            gunnerOpticsShowCursor = 1;
            gunnerAction = "RHS_CH47_Gunner";
            gunnerInAction = "RHS_CH47_Gunner";
            gunnerLeftHandAnimName = "OtocHlaven";
            gunnerRightHandAnimName = "OtocHlaven";
            gunnerLeftLegAnimName = "gunner1_leg_left";
            gunnerRightLegAnimName = "gunner1_leg_right";
            animationSourceStickX = "MainTurret_1_Inertia";
            animationSourceStickY = "MainGun_1_Inertia";
            gunnerForceOptics = 0;
            commanding = -1;
            primaryGunner = 1;
            outGunnerMayFire = 1;
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
            memoryPointsGetInGunner = "pos gunner";
            memoryPointsGetInGunnerDir = "pos gunner dir";
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
            isCopilot = 0;
            body = "Turret2";
            gun = "Gun_2";
            minTurn = -140;
            maxTurn = -36;
            initTurn = 0;
            animationSourceBody = "Turret_2";
            animationSourceGun = "Gun_2";
            stabilizedInAxes = "StabilizedInAxesNone";
            selectionFireAnim = "zasleh_1";
            proxyIndex = 2;
            weapons[] = {"rhs_weap_m134_minigun_2"};
            magazines[] = {"rhs_mag_762x51_m80a1_4000"};
            gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
            gunnerOutOpticsShowCursor = 1;
            gunnerOpticsShowCursor = 1;
            gunnerName = "Door Gunner";
            gunnerLeftHandAnimName = "otochlaven_2";
            gunnerRightHandAnimName = "otochlaven_2";
            gunnerLeftLegAnimName = "gunner2_leg_left";
            gunnerRightLegAnimName = "gunner2_leg_right";
            animationSourceStickX = "MainTurret_2_inertia";
            animationSourceStickY = "MainGun_2_Inertia";
            commanding = -2;
            gunBeg = "muzzle_2";
            gunEnd = "chamber_2";
            primaryGunner = 0;
            preciseGetInOut = 1;
            memoryPointGun = "machinegun_2";
            memoryPointGunnerOptics = "gunnerview_2";
            gunnerCompartments = "Compartment2";
            memoryPointsGetInGunner = "pos gunner";
            memoryPointsGetInGunnerDir = "pos gunner dir";
        };
        class CargoTurret_01 : CargoTurret
        {
            weapons[] = {"rhsusf_weap_DummyLauncher"};
            gunnerAction = "passenger_inside_1";
            gunnerGetInAction = "GetInHeli_Transport_01Cargo";
            gunnerGetOutAction = "RHS_Heli_Cargo_Exit";
            memoryPointsGetInGunner = "pos cargo L";
            memoryPointsGetInGunnerDir = "pos cargo L dir";
            gunnerName = "Passenger (Left Ramp)";
            gunnerCompartments = "Compartment1";
            proxyIndex = 21;
            maxElev = 6;
            minElev = -25;
            maxTurn = -37;
            minTurn = -95;
            isPersonTurret = 1;
            gunnerUsesPilotView = 1;
            gunnerDoor = "Door_Cargo";
            selectionFireAnim = "";
            playerPosition = 2;
            soundAttenuationTurret = "HeliAttenuationRamp";
            disableSoundAttenuation = 0;
            memoryPointGunnerOptics = "";
            enabledByAnimationSource = "ramp_anim";
            class Hitpoints
            {
            };
        };
        class CargoTurret_02 : CargoTurret_01
        {
            gunnerName = "Passenger (Right Ramp)";
            memoryPointsGetInGunner = "pos cargo R";
            memoryPointsGetInGunnerDir = "pos cargo R dir";
            proxyIndex = 13;
            maxTurn = 84;
            minTurn = 37;
        };
    };
    class AnimationSources : AnimationSources
    {
        class cargolights_hide
        {
            source = "user";
            animPeriod = 1e-06;
            initPhase = 0;
        };
        class cabinlights_hide : cargolights_hide
        {
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
        class ramp_anim
        {
            sound = "ServoRampSound_2";
            soundPosition = "osa_ramp";
            source = "user";
            animPeriod = 5;
            initPhase = 0;
        };
        class Hide_Scopes
        {
            source = "user";
            initPhase = 0;
            useSource = 1;
            animPeriod = 0.1;
            displayName = "Hide DCL-120 sights";
        };
        class hide_cargo
        {
            source = "user";
            mass = -20;
            displayName = "hide cargo benches";
            animPeriod = 1e-05;
            initPhase = 0;
            onPhaseChanged = "(_this select 0) lockCargo ((_this select 1)==1)";
        };
        class HitGlass1
        {
            source = "Hit";
            hitpoint = "HitGlass1";
            raw = 1;
        };
        class HitGlass2
        {
            source = "Hit";
            hitpoint = "HitGlass2";
            raw = 1;
        };
        class HitGlass3
        {
            source = "Hit";
            hitpoint = "HitGlass3";
            raw = 1;
        };
        class HitGlass4
        {
            source = "Hit";
            hitpoint = "HitGlass4";
            raw = 1;
        };
        class HitGlass5
        {
            source = "Hit";
            hitpoint = "HitGlass5";
            raw = 1;
        };
        class HitGlass6
        {
            source = "Hit";
            hitpoint = "HitGlass6";
            raw = 1;
        };
        class HitGlass7
        {
            source = "Hit";
            hitpoint = "HitGlass7";
            raw = 1;
        };
        class HitGlass8
        {
            source = "Hit";
            hitpoint = "HitGlass8";
            raw = 1;
        };
        class HitGlass9
        {
            source = "Hit";
            hitpoint = "HitGlass9";
            raw = 1;
        };
        class HitGlass10
        {
            source = "Hit";
            hitpoint = "HitGlass10";
            raw = 1;
        };
        class HitGlass11
        {
            source = "Hit";
            hitpoint = "HitGlass11";
            raw = 1;
        };
        class HitGlass12
        {
            source = "Hit";
            hitpoint = "HitGlass12";
            raw = 1;
        };
        class HitGlass13
        {
            source = "Hit";
            hitpoint = "HitGlass13";
            raw = 1;
        };
        class HitGlass14
        {
            source = "Hit";
            hitpoint = "HitGlass14";
            raw = 1;
        };
        class HitGlass15
        {
            source = "Hit";
            hitpoint = "HitGlass15";
            raw = 1;
        };
        class Damper_1_1_source
        {
            source = "damper";
            wheel = "Wheel_1_1";
        };
        class Damper_1_2_source
        {
            source = "damper";
            wheel = "Wheel_1_2";
        };
        class Damper_2_1_source
        {
            source = "damper";
            wheel = "Wheel_2_1";
        };
        class Damper_2_2_source
        {
            source = "damper";
            wheel = "Wheel_2_2";
        };
        class Wheel_1_1_source
        {
            source = "wheel";
            wheel = "Wheel_1_1";
        };
        class Wheel_1_2_source
        {
            source = "wheel";
            wheel = "Wheel_1_2";
        };
        class Wheel_2_1_source
        {
            source = "wheel";
            wheel = "Wheel_2_1";
        };
        class Wheel_2_2_source
        {
            source = "wheel";
            wheel = "Wheel_2_2";
        };
        class Helicopter_Brakes
        {
            source = "user";
            animPeriod = 0.01;
            initPhase = 1;
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
            priority = 0;
            onlyforplayer = 1;
            showWindow = 0;
            hideOnUse = 0;
        };
        class KillGunners
        {
            displayName = "Remove Crew";
            condition = "((call rhs_fnc_findPlayer) isEqualTo (driver this))";
            statement = "[this] execVM '\CGQC_2022\scripts\remove_gunners.sqf'";
            position = "";
            radius = 10;
            priority = 0;
            onlyforplayer = 1;
            showWindow = 0;
            hideOnUse = 0;
        };
        class OpenCargoDoor
        {
            displayName = "Open Ramp";
            position = "pos driver";
            radius = 15;
            showwindow = 0;
            condition = "this animationSourcePhase 'ramp_anim' < 1 and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0)";
            statement = "this animateSource ['ramp_anim', 1];[this] call rhs_fnc_cargoDetach";
            onlyforplayer = 1;
            shortcut = "user12";
        };
        class LevelRamp : OpenCargoDoor
        {
            displayName = "Level Ramp";
            condition = "this animationSourcePhase 'ramp_anim' != 0.6 and (alive this) and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0);";
            statement = "this animateSource ['ramp_anim', 0.6];";
            shortcut = "user13";
        };
        class CloseCargoDoor : OpenCargoDoor
        {
            displayName = "Close Ramp";
            condition = "this animationSourcePhase 'ramp_anim' > 0 and (alive this) and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0);";
            statement = "this animateSource ['ramp_anim', 0];[this] call rhs_fnc_cargoAttach";
        };
        class VehicleParadrop : OpenCargoDoor
        {
            displayName = "Paradrop cargo";
            condition = "(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this)";
            statement = "[this] spawn rhs_fnc_vehPara";
            shortcut = "";
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
    weapons[] = {"rhsusf_weap_ANALQ212"};
    magazines[] = {"rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM"};
    memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
    memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
    selectionHRotorStill = "velka vrtule staticka";
    selectionHRotorMove = "velka vrtule blur";
    selectionVRotorStill = "mala vrtule staticka";
    selectionVRotorMove = "mala vrtule blur";
    selectionDamage = "trup";
    selectionShowDamage = "poskozeni";
    memoryPointLRocket = "l raketa";
    memoryPointRRocket = "p raketa";
    memoryPointLMissile = "l strela";
    memoryPointRMissile = "p strela";
    enableManualFire = 0;
    threat[] = {0.8, 1, 0.6};
    helmetMountedDisplay = 0;
    cargoCanEject = 1;
    driverCanEject = 0;
    class MFD
    {
    };
// Inventory
#include "cgqc_heli_heavy.sqf"
    class Library
    {
        libTextDesc = "CH-47F";
    };
    attenuationEffectType = "HeliAttenuation";
    soundGetIn[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\close", 0.31622776, 1};
    soundGetOut[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\open", 0.31622776, 1, 40};
    soundDammage[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\int-alarm_loop", 0.56234133, 1};
    soundEngineOnInt[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\CH47_start_int", 0.1, 1};
    soundEngineOnExt[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\CH47_start_ext", 0.56234133, 1, 800};
    soundEngineOffInt[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\CH47_stop_int", 0.1, 1};
    soundEngineOffExt[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\CH47_stop_ext", 0.56234133, 1, 800};
    occludeSoundsWhenIn = 0.56234133;
    obstructSoundsWhenIn = 0.31622776;
    soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1", 0.1, 1};
    soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2", 0.1, 1};
    class Sounds
    {
        class Engine
        {
            sound[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\CH47_engine_high_ext", 1, 1, 800};
            frequency = "rotorSpeed";
            volume = "camPos*((rotorSpeed-0.72)*4)";
        };
        class RotorLowOut
        {
            sound[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\CH47_rotor_ext.ogg", 8.162278, 1, 3500};
            frequency = "rotorSpeed";
            volume = "camPos*(0 max (rotorSpeed-0.1))";
            cone[] = {1.8, 3.14, 2, 0.09};
        };
        class RotorHighOut
        {
            sound[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\CH47_rotor_forsage_ext", 6.1622777, 1, 2200};
            frequency = "rotorSpeed";
            volume = "camPos*10*(0 max (rotorThrust-0.95))";
            cone[] = {1.8, 3.14, 2, 0.09};
        };
        class EngineIn
        {
            sound[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\CH47_engine_high_int", 1.7782794, 1};
            frequency = "rotorSpeed";
            volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
        };
        class RotorLowIn
        {
            sound[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\CH47_rotor_ext.ogg", 2.7782793, 1};
            frequency = "rotorSpeed";
            volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
        };
        class RotorHighIn
        {
            sound[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\CH47_rotor_forsage_int", 2.7782793, 1};
            frequency = "rotorSpeed";
            volume = "(1-camPos)*3*(rotorThrust-0.9)";
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
            blinkingPattern[] = {0.1, 0.09};
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
        class GreenStill
        {
            name = "zeleny pozicni";
            color[] = {0, 0.8, 0};
            ambient[] = {0, 0.08, 0};
            intensity = 75;
            drawLight = 1;
            drawLightSize = 0.15;
            drawLightCenterSize = 0.04;
            activeLight = 0;
            blinking = 0;
            dayLight = 0;
            useFlare = 0;
        };
        class RedBlinking
        {
            name = "bily pozicni blik";
            color[] = {0.09, 0.15, 0.1};
            ambient[] = {0.09, 0.015, 0.01};
            intensity = 75;
            blinking = 1;
            blinkingPattern[] = {0.1, 0.09};
            blinkingPatternGuarantee = 0;
            drawLightSize = 0.2;
            drawLightCenterSize = 0.04;
        };
        class WhiteBlinking
        {
            name = "cerveny pozicni blik";
            color[] = {0.09, 0.15, 0.1};
            intensity = 75;
            ambient[] = {0.09, 0.015, 0.01};
            blinking = 1;
            blinkingPattern[] = {0.2, 1.3};
            blinkingPatternGuarantee = 0;
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
            position = "svetlo";
            direction = "svetlo konec";
            hitpoint = "svetlo";
            selection = "svetlo";
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
    };
    class Exhausts
    {
        class Exhaust1
        {
            direction = "exhaust1_dir";
            effect = "ExhaustEffectHeli";
            position = "exhaust1";
        };
        class Exhaust2
        {
            direction = "exhaust2_dir";
            effect = "ExhaustEffectHeli";
            position = "exhaust2";
        };
    };
    class Damage
    {
        tex[] = {};
        mat[] = {"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1_damage.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1_destruct.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2_damage.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2_destruct.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1_int.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1_int.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1_int_destruct.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2_int.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2_int.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2_int_destruct.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo_in.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo_in_damage.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo_in_damage.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo_damage.rvmat", "rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo_damage.rvmat", "a3\data_f\default.rvmat", "a3\data_f\default.rvmat", "a3\data_f\default_destruct.rvmat"};
    };
    irScanRangeMin = 0;
    irScanRangeMax = 1000;
    irScanToEyeFactor = 2;
    gunnerCanSee = "2+4+8+16";
    driverCanSee = "2+4+8+16";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa", "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa", "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa", "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
    class textureSources
    {
        class standard
        {
            displayName = "Standard";
            author = "$STR_RHSUSF_AUTHOR_FULL";
            textures[] = {"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa", "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa", "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa", "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
            factions[] = {"rhs_faction_usarmy_wd", "rhs_faction_usarmy_d"};
        };
        class Desert
        {
            displayName = "Desert";
            author = "$STR_RHSUSF_AUTHOR_FULL";
            textures[] = {"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_light_co.paa", "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_light_co.paa", "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa", "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_light_mlod_co.paa"};
            factions[] = {"rhs_faction_usarmy_wd", "rhs_faction_usarmy_d"};
        };
    };
    textureList[] = {};
    class Attributes
    {
        class ObjectTexture
        {
            control = "ObjectTexture";
            data = "ObjectTexture";
            displayName = "Skin";
            tooltip = "Texture and material set applied on the object.";
        };
        class ramp_anim
        {
            displayName = "Open ramp";
            property = "ramp_anim";
            control = "slider";
            defaultValue = "0";
            expression = "_this animateSource ['%s',_value,true]";
        };
        class hide_cargo : ramp_anim
        {
            displayName = "Hide cargo benches";
            property = "hide_cargo";
            control = "CheckboxNumber";
            expression = "_this animate ['%s',_value,true];_this lockCargo (_value == 1)";
        };
        class rhs_attachCargo : hide_cargo
        {
            displayName = "Attach cargo";
            tooltip = "Attaching cargo (using attachTo command) just like when you use ramp action";
            property = "rhs_attachCargo";
            expression = "if(_value == 1)then{[_this] spawn rhs_fnc_cargoAttach}else{{if(not(_x isKindOf 'Man'))then{detach _x}}foreach attachedObjects _this};";
        };
    };
    class VehicleTransport
    {
        class Carrier
        {
            cargoBayDimensions[] = {"VTV_limit_1", "VTV_limit_2"};
            disableHeightLimit = 1;
            maxLoadMass = 9000;
            cargoAlignment[] = {"front", "center"};
            cargoSpacing[] = {0.075, 0.075, 0.075};
            exits[] = {"VTV_exit_1"};
            unloadingInterval = 2;
            loadingDistance = 15;
            loadingAngle = 60;
            parachuteClassDefault = "B_Parachute_02_F";
            parachuteHeightLimitDefault = 25;
        };
    };
};
class cgqc_heli_ch47f : cgqc_heli_ch47_base
{
    scope = 0;
    faction = "cgqc";
    author = "silent1";
    displayName = "CH47f Chinook (24+3)";
    vehicleClass = "rhs_vehclass_helicopter";
    crew = "CGQC_units_mk1_4_Pilot_heli";
    typicalCargo[] = {"CGQC_units_mk1_4_crew_heli"};
    accuracy = 1000;
    editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_CH_47F.paa";
};
class cgqc_heli_ch47_10 : cgqc_heli_ch47f
{
    scope = 2;
    faction = "cgqc";
    author = "silent1";
    vehicleClass = "rhs_vehclass_helicopter";
    crew = "CGQC_units_mk1_4_Pilot_heli";
    typicalCargo[] = {"CGQC_units_mk1_4_crew_heli"};
    editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_CH_47F_10.paa";
};
