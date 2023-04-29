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
	// Mortar stuff -------------------------------------------
	#include "cfg_mortar.cpp"
	// Items -------------------------------------------------
	#include "cfg_misc.cpp"
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

// AtragMX profiles ------------------------------------------
#include "cfg_atrag.cpp"