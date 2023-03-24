// Default info
#include "cfg_patches.cpp"
// Rails setup
#include "cfg_rails.cpp"
// Ammo ------------------------------------------------------------------------
#include "cfg_ammo.cpp"

// Weapons ------------------------------------------------------------------------
class cfgWeapons
{
	// Custom helmets ---------------------------------------
	#include "cfg_helmets.cpp"
	// Custom uniforms ---------------------------------------
	#include "cfg_uniforms.cpp"
	// Custom vests ---------------------------------------
	#include "cfg_vests.cpp"
	// Custom guns ---------------------------------------
	#include "cfg_guns.cpp"
	// Custom accessories ---------------------------------------
	#include "cfg_acc.hpp"
	// Mortar stuff
	#include "cfg_mortar.cpp"
};
class cfgGlasses
{
	#include "cfg_goggles.cpp"
};
// Custom units ----------------------------------------------------------------------------
#include "cfg_pre_vehicles.cpp"
class cfgVehicles
{
	// Containers
	#include "cfg_containers.cpp"
	// Training units
	#include "cfg_units_training.cpp"
	// mk1 units
	#include "cfg_units_mk1.cpp"
	// mk1 vehicles
	#include "cfg_vehicles.cpp"
};
class CfgMagazines {
	class Titan_AT;
	class jav_AT_mas_can: Titan_AT {
		displayName = "Javelin AT";
		descriptionshort = "Caliber: 127 mm<br />Rounds: 1<br />Used in: FMG-148 Javelin";
		mass = 120;
	};
};
// Groups ---------------------------------------------------------------------------------
#include "cfg_groups.cpp"
// Audio -----------------------------------------------------------------------------------
#include "cfg_audio.cpp"


// Custom functions
#include "cfg_functions.hpp"


// Eventhandlers
#include "cfg_eventHandlers.cpp"

// Ace ATragMX custom settings
/*
class ACE_ATragMX_Presets {
	class yourTestPreset1 {
		// Profile Name, Muzzle Velocity, Zero Range, Scope Base Angle, AirFriction, Bore Height, Scope Unit, Scope Click Unit, Scope Click Number, Maximum Elevation, Dialed Elevation, Dialed Windage, Mass, Bullet Diameter, Rifle Twist, BC, Drag Model, Atmosphere Model, Muzzle Velocity vs. Temperature Interpolation, C1 Ballistic Coefficient vs. Distance Interpolation
		preset[] = {"testPreset1", 810, 100, 0.0679, -0.0010350, 3.81, 0, 2, 10, 120, 0, 0, 9.525, 7.82, 25.40, 0.393, 1, "ICAO", {{-15,0},{0,0},{10,0},{15,0},{25,0},{30,0},{35,0}}, {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
	};
	class yourTestPreset2 {
		// Profile Name, Muzzle Velocity, Zero Range, Scope Base Angle, AirFriction, Bore Height, Scope Unit, Scope Click Unit, Scope Click Number, Maximum Elevation, Dialed Elevation, Dialed Windage, Mass, Bullet Diameter, Rifle Twist, BC, Drag Model, Atmosphere Model, Muzzle Velocity vs. Temperature Interpolation, C1 Ballistic Coefficient vs. Distance Interpolation
		preset[] = {"testPreset2", 810, 100, 0.0679, -0.0010350, 3.81, 0, 2, 10, 120, 0, 0, 9.525, 7.82, 25.40, 0.393, 1, "ICAO", {{-15,0},{0,0},{10,0},{15,0},{25,0},{30,0},{35,0}}, {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
	};
};
*/