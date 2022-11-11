class cfgAmmo
{
	class Bulletbase;
	class B_408_Ball;
	class B_mas_can_408_Ball : B_408_Ball
	{
		hit = 36;
        ACE_bulletMass=27.3451; // 422 gr
        typicalSpeed=910;
        ACE_muzzleVelocities[]={910};
	};
	class B_mas_can_408_APDS : B_408_Ball
	{
		hit = 48;
		indirectHit = 5;
		indirectHitRange = 0.3;
        ACE_bulletMass=27.5395; // 425 gr
        typicalSpeed=860;
        ACE_muzzleVelocities[]={860};
	};
};

/*
class B_408_Ball: BulletBase {
        timeToLive=10;
        airFriction=-0.00046249;
        tracerScale = 1.3;
        ACE_caliber=10.363;
        ACE_bulletLength=55.1942;
        ACE_bulletMass=27.1507; // 419 gr
        ACE_transonicStabilityCoef=1;
        ACE_muzzleVelocityVariationSD=0.2;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.434};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={867};
        ACE_barrelLengths[]={736.6};
    };
    class ACE_408_Ball: BulletBase {
        timeToLive=10;
        airFriction=-0.00065414;
        typicalSpeed=1067;
        tracerScale = 1.3;
        ACE_caliber=10.363;
        ACE_bulletLength=41.4528;
        ACE_bulletMass=19.7637; // 305 gr
        ACE_transonicStabilityCoef=1;
        ACE_muzzleVelocityVariationSD=0.2;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.279};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={1067};
        ACE_barrelLengths[]={736.6};
    };
*/
