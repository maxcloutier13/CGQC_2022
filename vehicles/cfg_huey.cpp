class cgqc_heli_uh1_base : Helicopter_Base_H
{
    scope = 0;
    author = "silent1";
    displayName = "UH1H Huey(7+1)";
    forceInGarage = 0;
    picture = "rhsgref\addons\rhsgref_air\uh1h\ui\rhs_uh1h_pic_ca.paa";
    icon = "rhsgref\addons\rhsgref_air\uh1h\ui\icon_uh1h_ca.paa";
    mapSize = 14;
    model = "rhsgref\addons\rhsgref_air\uh1h\uh1h.p3d";
    unitInfoType = "RHSGREF_RscUnitInfoAir_UH1H";
    unitInfoTypeRTD = "RHSGREF_RscUnitInfoAirRTDFullDigital_UH1H";
    destrType = "DestructWreck";
    cargoAction[] = {"passenger_apc_narrow_generic02", "passenger_apc_narrow_generic02", "passenger_generic02_foldhands", "passenger_generic01_leanleft", "passenger_flatground_generic02", "passenger_flatground_leanleft"};
    GetInAction = "pilot_Heli_Light_02_Enter";
    GetOutAction = "pilot_Heli_Light_02_Exit";
    driverAction = "RHS_UH1H_Pilot";
    driverInAction = "RHS_UH1H_Pilot";
    driverLeftHandAnimName = "collective";
    driverDoor = "door_pilot";
    preciseGetInOut = 1;
    driverOpticsModel = "";
    transportSoldier = 6;
    cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8};
    getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cargoCompartments[] = {"compartment3"};
    getInRadius = 1;
    hideWeaponsDriver = 0;
    gForceShakeAttenuation = 0.3;
    minGForce = 0.05;
    maxGForce = 0.1;
    class Exhausts
    {
        class Exhaust1
        {
            position = "Exhaust";
            direction = "Exhaust_dir";
            effect = "ExhaustsEffectHeliBig";
        };
    };
    availableForSupportTypes[] = {"Drop", "Transport"};
    supplyradius = 2;
    epeImpulseDamageCoef = 20;
    damageResistance = 0.01039;
    crewCrashProtection = 0.2;
    extCameraPosition[] = {0, 2, -17};
    threat[] = {0.4, 0, 0};
    showCrewAim = 0;
    mainRotorSpeed = 1.2;
    backRotorSpeed = 6.1;
    fuelCapacity = 781;
    fuelConsumptionRate = 0.09;
    maxFordingDepth = 1.0;
    driveOnComponent[] = {"Skids"};
    mainBladeRadius = 8.2;
    tailBladeRadius = 1.5;
    washDownStrength = "0.9f";
    maxSpeed = 217;
    slingLoadMemoryPoint = "slingLoad0";
    slingLoadMaxCargoMass = 1900;
    radarType = 0;
    liftForceCoef = 1.3;
    cyclicAsideForceCoef = 0.55;
    cyclicForwardForceCoef = 0.5;
    backrotorforcecoef = 0.6;
    bodyFrictionCoef = 0.6;
    sensitivity = 0.5;
    maximumLoad = 4309.128;
    irTarget = 1;
    irTargetSize = 0.9;
    visualTarget = 1;
    visualTargetSize = 1;
    radarTarget = 1;
    radarTargetSize = 1;
    LockDetectionSystem = "0";
    incomingMissileDetectionSystem = "0";
    class RotorLibHelicopterProperties : RotorLibHelicopterProperties
    {
        RTDconfig = "rhsgref\addons\rhsgref_c_air\uh1h\rtd_uh1h.xml";
        autoHoverCorrection[] = {5, 2.4, 0};
        defaultCollective = 0.75;
        starterTime = 10;
        throttleOffToIdle = 10;
        throttleIdleToOff = 10;
        throttleIdleToFull = 8;
        throttleFullToIdle = 15;
        maxTorque = 2168;
        maxMainRotorStress = 130000;
        maxTailRotorStress = 10000;
        retreatBladeStallWarningSpeed = 63;
        rtd_center = "rtd_center";
    };
    enableManualFire = 0;
    class MFD
    {
    };
    class ViewPilot : ViewPilot
    {
        initFov = 0.85;
        maxFov = 0.95;
    };
    soundGetIn[] = {"rhsgref\addons\rhsgref_air\uh1h\Sounds\open_close", 0.56234133, 1};
    soundGetOut[] = {"rhsgref\addons\rhsgref_air\uh1h\Sounds\open_close", 0.7943282, 1, 20};
    soundEngineOnInt[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_start_int", 0.4, 1};
    soundEngineOnExt[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_start_ext", 0.7943282, 1.0, 600};
    soundEngineOffInt[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_stop_int", 0.4, 1};
    soundEngineOffExt[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_stop_ext", 0.7943282, 1.0, 600};
    soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1", 1.0, 1, 100};
    soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2", 1.0, 1, 100};
    soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3", 1.0, 1, 100};
    soundCrashes[] = {"soundGeneralCollision1", 0.33, "soundGeneralCollision2", 0.33, "soundGeneralCollision3", 0.33};
    soundLandCrashes[] = {"emptySound", 0};
    soundBuildingCrash[] = {"soundGeneralCollision1", 1, "soundGeneralCollision2", 1, "soundGeneralCollision3", 1};
    soundArmorCrash[] = {"soundGeneralCollision1", 1, "soundGeneralCollision2", 1, "soundGeneralCollision3", 1};
    soundWoodCrash[] = {"soundGeneralCollision1", 1, "soundGeneralCollision2", 1, "soundGeneralCollision3", 1};
    soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1", 1.0, 1, 100};
    soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2", 1.0, 1, 100};
    soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3", 1.0, 1, 100};
    soundBushCrash[] = {"soundBushCollision1", 0.33, "soundBushCollision2", 0.33, "soundBushCollision3", 0.33};
    soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1", 1.0, 1, 100};
    soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2", 1.0, 1, 100};
    soundWaterCrashes[] = {"soundWaterCollision1", 0.5, "soundWaterCollision2", 0.5};
    soundDammage[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_ext_1", 3.1622777, 1};
    soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1", 1, 1};
    soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2", 0.7, 1};
    rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1", 1.0, 1.0};
    rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1", 2.5118864, 1.0, 150};
    rotorDamage[] = {"rotorDamageInt", "rotorDamageOut"};
    tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail", 1.0, 1.0};
    tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail", 1.0, 1.0, 300};
    tailDamage[] = {"tailDamageInt", "tailDamageOut"};
    landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open", 1.0, 1.0, 100};
    landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open", 1.0, 1.0, 100};
    landingSoundInt[] = {"landingSoundInt0", 0.5, "landingSoundInt1", 0.5};
    landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1", 1.7782794, 1.0, 100};
    landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1", 1.7782794, 1.0, 100};
    landingSoundOut[] = {"landingSoundOut0", 0.5, "landingSoundOut1", 0.5};
    slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT", 1.0, 1.0};
    slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock", 1.0, 1.0, 80};
    slingCargoAttach[] = {"slingCargoAttach0", "slingCargoAttach1"};
    slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT", 1.0, 1.0};
    slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock", 1.0, 1.0, 80};
    slingCargoDetach[] = {"slingCargoDetach0", "slingCargoDetach1"};
    slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int", 1.0, 1.0};
    slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext", 1.0, 1.0, 80};
    slingCargoDetachAir[] = {"slingCargoDetach0", "slingCargoDetach1"};
    slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int", 1.0, 1.0};
    slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext", 1.0, 1.0, 80};
    slingCargoRopeBreak[] = {"slingCargoDetach0", "slingCargoDetach1"};
    class Sounds
    {
        class Engine
        {
            sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_engine_ext_2", 1.2889254, 1.0, 1200};
            frequency = "rotorSpeed";
            volume = "camPos*((rotorSpeed-0.72)*4)";
        };
        class RotorLowOut
        {
            sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_ext_1", 1.2589254, 1, 1500};
            frequency = "rotorSpeed";
            volume = "camPos*(0 max (rotorSpeed-0.1))";
            cone[] = {1.6, 3.14, 2.0, 0.5};
        };
        class RotorHighOut
        {
            sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_high_ext_1", 1.2589254, 1, 1500};
            frequency = "rotorSpeed";
            volume = "camPos*10*(0 max (rotorThrust-0.9))";
            cone[] = {1.6, 3.14, 2.0, 0.5};
        };
        class EngineIn
        {
            sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_engine_int_1", 1, 1};
            frequency = "rotorSpeed";
            volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
        };
        class RotorLowIn
        {
            sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_int_1", 1, 1};
            frequency = "rotorSpeed";
            volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
        };
        class RotorHighIn
        {
            sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_high_int_1", 1, 1};
            frequency = "rotorSpeed";
            volume = "(1-camPos)*3*(rotorThrust-0.9)";
        };
        class TransmissionDamageExt_phase1
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1", 1.0, 1.0, 150};
            frequency = "0.66 + rotorSpeed / 3";
            volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
        };
        class TransmissionDamageExt_phase2
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2", 1.0, 1.0, 150};
            frequency = "0.66 + rotorSpeed / 3";
            volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
        };
        class TransmissionDamageInt_phase1
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1", 1.0, 1.0, 150};
            frequency = "0.66 + rotorSpeed / 3";
            volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
        };
        class TransmissionDamageInt_phase2
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2", 1.0, 1.0, 150};
            frequency = "0.66 + rotorSpeed / 3";
            volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
        };
        class damageAlarmInt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor", 0.31622776, 1.0};
            frequency = 1;
            volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
        };
        class damageAlarmExt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor", 0.2238721, 1.0, 20};
            frequency = 1;
            volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
        };
        class rotorLowAlarmInt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", 0.31622776, 1.0};
            frequency = 1;
            volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
        };
        class rotorLowAlarmExt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", 0.2238721, 1.0, 20};
            frequency = 1;
            volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
        };
        class scrubLandInt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open", 1.0, 1.0, 100};
            frequency = 1;
            volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
        };
        class scrubLandExt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt", 1.0, 1.0, 100};
            frequency = 1;
            volume = "camPos * (scrubLand factor[0.02, 0.05])";
        };
        class scrubBuildingInt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt", 1.0, 1.0, 100};
            frequency = 1;
            volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
        };
        class scrubBuildingExt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt", 1.0, 1.0, 100};
            frequency = 1;
            volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
        };
        class scrubTreeInt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", 1.0, 1.0, 100};
            frequency = 1;
            volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
        };
        class scrubTreeExt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", 1.0, 1.0, 100};
            frequency = 1;
            volume = "camPos * ((scrubTree) factor [0, 0.01])";
        };
        class RainExt
        {
            sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1.0, 1.0, 100};
            frequency = 1;
            volume = "camPos * (rain - rotorSpeed/2) * 2";
        };
        class RainInt
        {
            sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int_open", 1.0, 1.0, 100};
            frequency = 1;
            volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
        };
        class SlingLoadDownExt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", 1.0, 1.0, 500};
            frequency = 1;
            volume = "camPos*(slingLoadActive factor [0,-1])";
        };
        class SlingLoadUpExt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", 1.0, 1.0, 500};
            frequency = 1;
            volume = "camPos*(slingLoadActive factor [0,1])";
        };
        class SlingLoadDownInt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", 1.0, 1.0, 500};
            frequency = 1;
            volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
        };
        class SlingLoadUpInt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", 1.0, 1.0, 500};
            frequency = 1;
            volume = "(1-camPos)*(slingLoadActive factor [0,1])";
        };
        class WindInt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_open_int", 1, 1.0, 50};
            frequency = 1;
            volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
        };
        class WindLateralMovementInt
        {
            sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int", 1, 1.0, 50};
            frequency = 1;
            volume = "(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
        };
        class GStress
        {
            sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b", 0.11622776, 1.0, 50};
            frequency = 1;
            volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
        };
    };
    class SoundsExt
    {
        class SoundEvents
        {
        };
        class Sounds
        {
            class Engine
            {
                sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_engine_ext_2", 1.2889254, 1.0, 1200};
                frequency = "rotorSpeed";
                volume = "camPos*((rotorSpeed-0.72)*4)";
            };
            class RotorLowOut
            {
                sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_ext_1", 1.2589254, 1, 1500};
                frequency = "rotorSpeed";
                volume = "camPos*(0 max (rotorSpeed-0.1))";
                cone[] = {1.6, 3.14, 2.0, 0.5};
            };
            class RotorHighOut
            {
                sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_high_ext_1", 1.2589254, 1, 1500};
                frequency = "rotorSpeed";
                volume = "camPos*10*(0 max (rotorThrust-0.9))";
                cone[] = {1.6, 3.14, 2.0, 0.5};
            };
            class EngineIn
            {
                sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_engine_int_1", 1, 1};
                frequency = "rotorSpeed";
                volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
            };
            class RotorLowIn
            {
                sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_int_1", 1, 1};
                frequency = "rotorSpeed";
                volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
            };
            class RotorHighIn
            {
                sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_high_int_1", 1, 1};
                frequency = "rotorSpeed";
                volume = "(1-camPos)*3*(rotorThrust-0.9)";
            };
            class TransmissionDamageExt_phase1
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1", 1.0, 1.0, 150};
                frequency = "0.66 + rotorSpeed / 3";
                volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class TransmissionDamageExt_phase2
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2", 1.0, 1.0, 150};
                frequency = "0.66 + rotorSpeed / 3";
                volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class TransmissionDamageInt_phase1
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1", 1.0, 1.0, 150};
                frequency = "0.66 + rotorSpeed / 3";
                volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class TransmissionDamageInt_phase2
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2", 1.0, 1.0, 150};
                frequency = "0.66 + rotorSpeed / 3";
                volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class damageAlarmInt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor", 0.31622776, 1.0};
                frequency = 1;
                volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
            };
            class damageAlarmExt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor", 0.2238721, 1.0, 20};
                frequency = 1;
                volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
            };
            class rotorLowAlarmInt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", 0.31622776, 1.0};
                frequency = 1;
                volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
            };
            class rotorLowAlarmExt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", 0.2238721, 1.0, 20};
                frequency = 1;
                volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
            };
            class scrubLandInt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open", 1.0, 1.0, 100};
                frequency = 1;
                volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
            };
            class scrubLandExt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt", 1.0, 1.0, 100};
                frequency = 1;
                volume = "camPos * (scrubLand factor[0.02, 0.05])";
            };
            class scrubBuildingInt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt", 1.0, 1.0, 100};
                frequency = 1;
                volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
            };
            class scrubBuildingExt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt", 1.0, 1.0, 100};
                frequency = 1;
                volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
            };
            class scrubTreeInt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", 1.0, 1.0, 100};
                frequency = 1;
                volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
            };
            class scrubTreeExt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", 1.0, 1.0, 100};
                frequency = 1;
                volume = "camPos * ((scrubTree) factor [0, 0.01])";
            };
            class RainExt
            {
                sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1.0, 1.0, 100};
                frequency = 1;
                volume = "camPos * (rain - rotorSpeed/2) * 2";
            };
            class RainInt
            {
                sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int_open", 1.0, 1.0, 100};
                frequency = 1;
                volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
            };
            class SlingLoadDownExt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", 1.0, 1.0, 500};
                frequency = 1;
                volume = "camPos*(slingLoadActive factor [0,-1])";
            };
            class SlingLoadUpExt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", 1.0, 1.0, 500};
                frequency = 1;
                volume = "camPos*(slingLoadActive factor [0,1])";
            };
            class SlingLoadDownInt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", 1.0, 1.0, 500};
                frequency = 1;
                volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
            };
            class SlingLoadUpInt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", 1.0, 1.0, 500};
                frequency = 1;
                volume = "(1-camPos)*(slingLoadActive factor [0,1])";
            };
            class WindInt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_open_int", 1.1220185, 1.0, 50};
                frequency = 1;
                volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
            };
            class WindLateralMovementInt
            {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int", 1.9952624, 1.0, 50};
                frequency = 1;
                volume = "(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
            };
            class GStress
            {
                sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b", 0.11622776, 1.0, 50};
                frequency = 1;
                volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
            };
        };
    };
    class Reflectors
    {
        class Front
        {
            color[] = {11000, 7000, 5000};
            ambient[] = {11, 7, 5};
            intensity = 120;
            size = 1;
            innerAngle = 15;
            outerAngle = 65;
            coneFadeCoef = 10;
            position = "Light_pos";
            direction = "Light_dir";
            hitpoint = "Light_hitpoint";
            selection = "Light";
            useFlare = 1;
            flareSize = 10;
            flareMaxDistance = 250;
            dayLight = 1;
            class Attenuation
            {
                start = 0;
                constant = 0;
                linear = 1;
                quadratic = 1;
                hardLimitStart = 100;
                hardLimitEnd = 300;
            };
        };
    };
    class MarkerLights
    {
        class CollisionLight_Red
        {
            name = "CollisionLight_Red";
            color[] = {0.9, 0.15, 0.1};
            ambient[] = {0.09, 0.015, 0.01};
            intensity = 20;
            blinking = 1;
            blinkingPattern[] = {0.1, 0.9};
            blinkingPatternGuarantee = 0;
            drawLightSize = 0.2;
            drawLightCenterSize = 0.04;
            class Attenuation
            {
                start = 0;
                constant = 0;
                linear = 25;
                quadratic = 50;
                hardLimitStart = 0;
                hardLimitEnd = 25;
            };
        };
        class Red_Interior : CollisionLight_Red
        {
            name = "Interior_Red";
            color[] = {0.9, 0.15, 0.1};
            ambient[] = {0.09, 0.015, 0.01};
            intensity = 800;
            blinking = 0;
            drawLightSize = 0;
            drawLightCenterSize = 0;
        };
        class Red_Top_Position : CollisionLight_Red
        {
            name = "CollisionLight_Top_Red";
            color[] = {0.9, 0.15, 0.1};
            ambient[] = {0.09, 0.015, 0.01};
            intensity = 20;
            blinking = 1;
            blinkingPattern[] = {0.5, 0.5};
            blinkingPatternGuarantee = 0;
            drawLightSize = 0.2;
            drawLightCenterSize = 0.04;
        };
        class Green_Position : CollisionLight_Red
        {
            name = "CollisionLight_Green";
            color[] = {0.4, 1, 0.5};
            ambient[] = {0.04, 0.1, 0.05};
        };
    };
    class Turrets : Turrets
    {
        class CopilotTurret : CopilotTurret
        {
            CanEject = 0;
            isCopilot = 1;
            hideWeaponsGunner = 0;
            gunnerAction = "RHS_UH1H_CoPilot";
            gunnerInAction = "RHS_UH1H_CoPilot";
            memoryPointsGetInGunner = "pos Codriver";
            memoryPointsGetInGunnerDir = "pos Codriver dir";
            gunnerGetInAction = "copilot_Heli_Light_02_Enter";
            gunnerGetOutAction = "copilot_Heli_Light_02_Exit";
            preciseGetInOut = 1;
            GunnerDoor = "door_copilot";
            gunnerLeftHandAnimName = "collective";
            gunnerRightHandAnimName = "stick_copilot";
            gunnerLeftLegAnimName = "PedalL";
            gunnerRightLegAnimName = "PedalR";
            gunBeg = "muzzle_copilot";
            gunEnd = "chamber_copilot";
            primaryGunner = 1;
            proxyIndex = 1;
            LODTurnedIn = 1100;
            LODTurnedOut = 1100;
            gunnerCompartments = "Compartment2";
            weapons[] = {"rhs_weap_DummyLauncher", "rhs_weap_fcs_nolrf_ammo"};
            magazines[] = {"rhs_laserfcsmag", "rhs_laserfcsmag"};
            class ViewGunner
            {
                minAngleX = -65;
                maxAngleX = 85;
                initAngleX = 0;
                minAngleY = -150;
                maxAngleY = 150;
                initAngleY = 0;
                minFov = 0.25;
                maxFov = 0.95;
                initFov = 0.85;
            };
            class Hitpoints
            {
            };
        };
        class RightGunner : MainTurret
        {
            body = "RightTurretBase";
            gun = "RightTurretGun";
            animationSourceBody = "RightTurretBase";
            animationSourceGun = "RightTurretGun";
            turretInfoType = "RHS_RscWeaponZeroing";
            CanEject = 1;
            isCopilot = 0;
            initelev = 0;
            initturn = -90;
            maxelev = 20;
            maxturn = -25;
            minelev = -55;
            minturn = -135;
            soundServo[] = {"", 0.01, 1.0};
            stabilizedInAxes = 0;
            weapons[] = {"rhs_weap_m240H_2"};
            magazines[] = {"rhs_mag_762x51_M240_200_M80", "rhs_mag_762x51_M240_200_M80", "rhs_mag_762x51_M240_200_M80", "rhs_mag_762x51_M240_200_M80", "rhs_mag_762x51_M240_200_M80"};
            discreteDistance[] = {200, 300, 400, 500, 600, 700, 800};
            discreteDistanceInitIndex = 0;
            gunBeg = "muzzle_2";
            gunEnd = "chamber_2";
            gunnerName = "$STR_A3_RIGHT_GUNNER";
            memoryPointsGetInGunner = "pos Gunner R";
            memoryPointsGetInGunnerDir = "pos Gunner R dir";
            gunneropticsmodel = "\A3\weapons_f\reticle\optics_empty";
            memoryPointGunnerOptics = "gunnerview_2";
            gunnerOutOpticsShowCursor = 1;
            gunnerLeftHandAnimName = "OtocHlaven_2";
            gunnerRightHandAnimName = "OtocHlaven_2";
            gunnerLeftLegAnimName = "gunner_2_leg_left";
            gunnerRightLegAnimName = "gunner_2_legs";
            gunnerAction = "RHS_UH1H_Gunner_R";
            gunnerInAction = "RHS_UH1H_Gunner_R";
            selectionFireAnim = "zasleh_2";
            primaryGunner = 0;
            proxyIndex = 3;
            class ViewOptics
            {
                initanglex = 0;
                initangley = 0;
                initfov = 0.7;
                maxanglex = 30;
                maxangley = 100;
                maxfov = 1.1;
                minanglex = -30;
                minangley = -100;
                minfov = 0.25;
            };
            gunnerCompartments = "Compartment3";
            soundAttenuationTurret = "HeliAttenuationGunner";
            disableSoundAttenuation = 0;
            class Hitpoints
            {
            };
        };
        class LeftGunner : RightGunner
        {
            body = "LeftTurretBase";
            gun = "LeftTurretGun";
            animationSourceBody = "LeftTurretBase";
            animationSourceGun = "LeftTurretGun";
            weapons[] = {"rhs_weap_m240H_1"};
            magazines[] = {"rhs_mag_762x51_M240_200_M80", "rhs_mag_762x51_M240_200_M80", "rhs_mag_762x51_M240_200_M80", "rhs_mag_762x51_M240_200_M80", "rhs_mag_762x51_M240_200_M80"};
            gunBeg = "muzzle_1";
            gunEnd = "chamber_1";
            gunnerLeftHandAnimName = "OtocHlaven_1";
            gunnerRightHandAnimName = "OtocHlaven_1";
            gunnerLeftLegAnimName = "gunner_1_leg_left";
            gunnerRightLegAnimName = "gunner_1_legs";
            gunnerAction = "RHS_UH1H_Gunner_L";
            gunnerInAction = "RHS_UH1H_Gunner_L";
            memoryPointsGetInGunner = "pos Gunner L";
            memoryPointsGetInGunnerDir = "pos Gunner L dir";
            primaryGunner = 0;
            proxyIndex = 2;
            memoryPointGunnerOptics = "gunnerview_1";
            selectionFireAnim = "zasleh_1";
            gunnerName = "$STR_A3_LEFT_GUNNER";
            initelev = 0;
            initturn = 90;
            maxelev = 20;
            maxturn = 125;
            minelev = -55;
            minturn = 30;
        };
        class CargoTurret_01 : CargoTurret
        {
            gunnerAction = "passenger_bench_1";
            gunnerGetInAction = "GetInHeli_Light_01bench";
            gunnerCompartments = "compartment3";
            memoryPointsGetInGunner = "pos Gunner L";
            memoryPointsGetInGunnerDir = "pos Gunner L dir";
            gunnerName = "Passenger (Left Door)";
            gunBeg = "muzzle_copilot";
            gunEnd = "chamber_copilot";
            proxyIndex = 7;
            maxElev = 45;
            minElev = -55;
            maxTurn = 70;
            minTurn = -10;
            isPersonTurret = 1;
            ejectDeadGunner = 0;
            playerPosition = 4;
            soundAttenuationTurret = "";
            disableSoundAttenuation = 1;
            weapons[] = {"rhs_weap_DummyLauncher"};
            class Hitpoints
            {
            };
        };
        class CargoTurret_02 : CargoTurret_01
        {
            gunnerCompartments = "compartment3";
            memoryPointsGetInGunner = "pos Gunner R";
            memoryPointsGetInGunnerDir = "pos Gunner R dir";
            gunnerName = "Passenger (Right Door)";
            proxyIndex = 8;
            maxTurn = 35;
            minTurn = -60;
        };
    };
    class AnimationSources : AnimationSources
    {
        class door_pilot
        {
            source = "door";
            animPeriod = 0.8;
            initPhase = 0;
            sound = "MetalDoorsSound";
            soundPosition = "axis_door_pilot";
        };
        class door_copilot : door_pilot
        {
            soundPosition = "axis_door_copilot";
        };
        class rightturretbase
        {
            source = "user";
            initPhase = 0;
            animPeriod = 0;
        };
        class rightturretgun
        {
            source = "user";
            initPhase = 0;
            animPeriod = 0;
        };
        class leftturretgun
        {
            source = "user";
            initPhase = 0;
            animPeriod = 0;
        };
        class leftturretbase
        {
            source = "user";
            initPhase = 0;
            animPeriod = 0;
        };
        class Hide_mid_doors
        {
            source = "user";
            animPeriod = 1e-07;
            initPhase = 1;
        };
        class close_cargo_doors
        {
            source = "door";
            sound = "RollDoorsSound";
            soundPosition = "door_sounds";
            animPeriod = 1.5;
            initPhase = 0;
        };
        class hide_crosshair
        {
            source = "user";
            animPeriod = 1e-06;
            initPhase = 1;
        };
        class Hide_guns
        {
            source = "user";
            animPeriod = 1e-07;
            initPhase = 0;
        };
        class hide_gunmount
        {
            source = "user";
            animPeriod = 1e-07;
            initPhase = 1;
        };
        class reloadAnim_1
        {
            source = "reload";
            weapon = "rhs_weap_m240H_1";
        };
        class reloadMagazine_1
        {
            source = "reloadmagazine";
            weapon = "rhs_weap_m240H_1";
        };
        class revolving_1
        {
            source = "revolving";
            weapon = "rhs_weap_m240H_1";
        };
        class reloadAnim_2
        {
            source = "reload";
            weapon = "rhs_weap_m240H_2";
        };
        class reloadMagazine_2
        {
            source = "reloadmagazine";
            weapon = "rhs_weap_m240H_2";
        };
        class revolving_2
        {
            source = "revolving";
            weapon = "rhs_weap_m240H_2";
        };
        class hit_pylon_1_source
        {
            source = "user";
            initPhase = 0;
            animPeriod = 0;
        };
        class hit_pylon_2_source
        {
            source = "user";
            initPhase = 0;
            animPeriod = 0;
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
    };
    armor = 35;
    armorStructural = 20;
    hullDamageCauseExplosion = 1;
    hullExplosionDelay[] = {10, 20};
    class HitPoints : HitPoints
    {
        class HitHull
        {
            simulation = "RHS_Hull_Helicopter";
            armor = -100;
            minimalHit = -0.2;
            explosionShielding = 1;
            radius = 0.4;
            armorComponent = "Hit_Hull";
            name = "hit_hull";
            visual = "zbytek";
            passThrough = 1;
            class DestructionEffects : RHS_Effects_Helicopter_Hull_Destruction
            {
            };
        };
        class HitFuel
        {
            armor = -70;
            name = "hit_fuel";
            visual = "-";
            radius = 0.15;
            explosionShielding = 1.5;
            passThrough = 0.2;
        };
        class HitGlass1
        {
            armor = -12;
            explosionShielding = 1;
            passThrough = 0.0;
            minimalHit = -0.1;
            radius = 0.2;
            armorComponent = "glass1";
            name = "glass1";
            visual = "glass1";
        };
        class HitGlass2
        {
            armor = -12;
            explosionShielding = 1;
            passThrough = 0.0;
            minimalHit = -0.1;
            radius = 0.2;
            armorComponent = "glass2";
            name = "glass2";
            visual = "glass2";
        };
        class HitGlass3
        {
            armor = -12;
            explosionShielding = 1;
            passThrough = 0.0;
            minimalHit = -0.1;
            radius = 0.2;
            armorComponent = "glass3";
            name = "glass3";
            visual = "glass3";
        };
        class HitGlass4
        {
            armor = -12;
            explosionShielding = 1;
            passThrough = 0.0;
            minimalHit = -0.1;
            radius = 0.2;
            armorComponent = "glass4";
            name = "glass4";
            visual = "glass4";
        };
        class HitGlass5
        {
            armor = -12;
            explosionShielding = 1;
            passThrough = 0.0;
            minimalHit = -0.1;
            radius = 0.2;
            armorComponent = "glass5";
            name = "glass5";
            visual = "glass5";
        };
        class HitGlass6
        {
            armor = -12;
            explosionShielding = 1;
            passThrough = 0.0;
            minimalHit = -0.1;
            radius = 0.2;
            armorComponent = "glass6";
            name = "glass6";
            visual = "glass6";
        };
        class HitGlass7
        {
            armor = -12;
            explosionShielding = 1;
            passThrough = 0.0;
            minimalHit = -0.1;
            radius = 0.2;
            armorComponent = "glass7";
            name = "glass7";
            visual = "glass7";
        };
        class HitVRotor : HitVRotor
        {
            simulation = "RHS_Hull_Helicopter";
            armorComponent = "Hit_Tail";
            name = "Hit_Rotor_Tail";
            visual = "tail rotor static";
            armor = -80;
            minimalHit = -0.2;
            radius = 0.3;
            explosionShielding = 3;
            passThrough = 0.5;
        };
        class HitHRotor : HitHRotor
        {
            armorComponent = "Hit_Rotor_Main";
            name = "Hit_Rotor_Main";
            visual = "main rotor static";
            armor = -90;
            radius = 0.2;
            explosionShielding = 0.5;
        };
        class HitAvionics : HitAvionics
        {
            armor = -40;
            visual = "";
            name = "elektronika";
            radius = 0.05;
            explosionShielding = 1.5;
        };
        class HitEngine : HitEngine
        {
            armorComponent = "Hit_Engine";
            armor = -80;
            name = "motor";
            passThrough = 0.5;
            minimalHit = -0.12;
            explosionShielding = 2;
            radius = 0.27;
        };
        class HitWinch
        {
            armor = 999;
            name = "";
            visual = "-";
            radius = 0.001;
            passThrough = 0;
        };
    };
    class Damage
    {
        tex[] = {};
        mat[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_destruct.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit1.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit1.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit1_destruct.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit2.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit2.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit2_destruct.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit3.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit3.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit3_destruct.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_glass.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_glass_damage.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_glass_damage.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in_destruct.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_instruments.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_instruments.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_instruments_destruct.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_rotor.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_rotor.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_rotor_destruct.rvmat", "a3\data_f\default.rvmat", "a3\data_f\default.rvmat", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_destruct.rvmat", "a3\data_f\default.rvmat", "a3\data_f\default.rvmat", "a3\data_f\default_destruct.rvmat"};
    };
    hiddenSelections[] = {"decals"};
    hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
    irScanRangeMin = 100;
    irScanRangeMax = 1000;
    irScanToEyeFactor = 2;
    class Components;
    class textureSources
    {
        class hidf_grey
        {
            displayName = "HIDF Grey";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
            factions[] = {"rhsgref_faction_hidf"};
        };
        class hidf_summer : hidf_grey
        {
            displayName = "HIDF MERDC (Summer verdant)";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
        };
        class hidf_tropical : hidf_grey
        {
            displayName = "HIDF MERDC (Tropical verdant)";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
        };
        class hidf_olv : hidf_grey
        {
            displayName = "HIDF Olive";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
        };
        class hidf_tan : hidf_grey
        {
            displayName = "HIDF Tan";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
        };
        class un
        {
            displayName = "UN";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_un_decals_ca.paa"};
            factions[] = {"rhsgref_faction_un"};
        };
        class idap
        {
            displayName = "IDAP";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_idap_decals_ca.paa"};
            factions[] = {"CIV_IDAP_F"};
        };
        class us_army
        {
            displayName = "US Army";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"};
            factions[] = {"rhs_faction_usarmy_wd", "rhs_faction_usarmy_d"};
        };
        class us_army_med : us_army
        {
            displayName = "US Army (Medevac)";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_med_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"};
        };
        class black
        {
            displayName = "Black";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
            factions[] = {"CIV_F"};
        };
        class iraq
        {
            displayName = "Iraqi Air Force";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_iaf_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
            factions[] = {"IND_F"};
        };
        class takistan
        {
            displayName = "Takistan";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tka_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in_tka_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_tka_co", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
            factions[] = {"OPF_F"};
        };
        class guerilla
        {
            displayName = "Guerilla";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
            factions[] = {"IND_G_F", "BLU_G_F", "OPF_G_F"};
        };
        class tan
        {
            displayName = "Tan";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
            factions[] = {"IND_G_F", "BLU_G_F", "OPF_G_F", "IND_F"};
        };
        class olive : tan
        {
            displayName = "Olive";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_olv_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_olv_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
        };
        class white : tan
        {
            displayName = "White";
            textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
        };
    };
};
class cgqc_heli_uh1 : cgqc_heli_uh1_base
{
    scope = 2;
    author = "silent1";
    displayName = "UH1H Huey(8+3)";
    editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_uh1h_hidf.paa";
    scopeCurator = 2;
    side = 1;
    faction = "cgqc";
    crew = "CGQC_units_mk1_4_Pilot_heli";
    typicalCargo[] = {"CGQC_units_mk1_4_crew_heli"};
#include "cgqc_heli_medium.sqf"
    enableSweep = 0;
    hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
    hiddenSelectionsTextures[] = {"cgqc_2022\vehicles\cgqc_heli_uh-1_exterior.paa",
                                  "cgqc_2022\vehicles\cgqc_heli_uh-1_interior.paa",
                                  "rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa",
                                  ""};
    class textureSources : textureSources
    {
        class hidf_grey : hidf_grey
        {
        };
        class hidf_summer : hidf_summer
        {
        };
        class hidf_tropical : hidf_tropical
        {
        };
        class hidf_olv : hidf_olv
        {
        };
        class hidf_tan : hidf_tan
        {
        };
        class us_army : us_army
        {
        };
        class us_army_med : us_army_med
        {
        };
        class black : black
        {
        };
        class iraq : iraq
        {
        };
        class takistan : takistan
        {
        };
        class guerilla : guerilla
        {
        };
    };
    class AnimationSources : AnimationSources
    {
        class Hide_mid_doors
        {
            source = "user";
            animPeriod = 1e-06;
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
            hideOnUse = 1;
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
            hideOnUse = 1;
        };
    };
    textureList[] = {};
    class Attributes
    {
        class uh1h_textures
        {
            control = "ObjectTexture";
            data = "ObjectTexture";
            displayName = "Paint";
            tooltip = "Select paint color.";
        };
    };
};
