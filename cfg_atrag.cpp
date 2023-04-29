class ACE_ATragMX_Presets {
    class cgqc_atrag_m200_ball {
        // Profile Name, Muzzle Velocity, Zero Range, Scope Base Angle, AirFriction, Bore Height, Scope Unit, Scope Click Unit, Scope Click Number, Maximum Elevation, Dialed Elevation, Dialed Windage, Mass, Bullet Diameter, Rifle Twist, BC, Drag Model, Atmosphere Model, Muzzle Velocity vs. Temperature Interpolation, C1 Ballistic Coefficient vs. Distance Interpolation
        preset[] = {"CGQC M200 Ball", 901.903,99.6696,0.0778564,-0.001035,7.366,0,2,10,120,0,0,27.3451,10.3632,33.02,0.879,1,"ICAO", 
        {{-15,883.006},{5,893.064},{10,897.026},{15,901.903},{25,915.924},{30,925.068},{35,936.041}}, 
        {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
    };
    class cgqc_atrag_m200_APDS {
        preset[] = {"CGQC M200 APDS",852,100,0.0821273,-0.001035,7.37,0,2,10,120,0,0,27.5,10.36,33.02,0.869,1,"ICAO", 
        {{-15,832.916},{5,842.916},{10,846.916},{15,851.916},{25,865.916},{30,874.916},{35,885.916}}, 
        {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
    };
};