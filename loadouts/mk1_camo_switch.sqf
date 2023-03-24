_camo = _this select 0;
// Fade to black  
cutText ["", "BLACK FADED", 999];
titleText ["", "PLAIN"];
// Fade to black transition
["camo"] execVM "\CGQC_2022\scripts\transition.sqf";
//disableUserInput true;

// Check if player in chill mode
if (cgqc_player_chill) then {
    ["ready", true] call CGQC_fnc_perksBasic;
    waitUntil {!cgqc_player_chill};
};

sleep 1;

// Init new variables
_helmet_new = "";
_uniform_new = "";
_vest_new = "";
_backpack_new = "";
_goggles_new = "";

// Current soldier equipment
player_helmet_old = headgear player;
player_uniform_old = uniform player;
player_vest_old = vest player;
player_backpack_old = backpack player;
player_goggles_old = goggles player;

// Save inventory 
_items_uniform = uniformItems player;
_items_vest = vestItems player;
_items_pack = backpackItems player;

// Delete old stuff 
removeHeadgear player;
removeUniform player;
removeVest player;
removeBackpack player;
removeGoggles player;

// Find what to switch to
switch (_camo) do {
	case "diver": //Diver time
	{
		// Diving suit
		_uniform_new = "cgqc_uniform_mk1_diver";
		// Rebreather
		_vest_new = "cgqc_vest_mk1_diver";
		// goggles
		_goggles_new = "cgqc_goggles_mk1_diver";
		// Black backpack
		player_backpack_old = toLower player_backpack_old;
		if ((player_backpack_old find["radiobag", 0]) > 0) then {_backpack_new = "cgqc_pack_mk1_radiobag_black";};
		if ((player_backpack_old find["assault", 0]) > 0) then {_backpack_new = "cgqc_pack_mk1_assault_black";}; 
		if ((player_backpack_old find["carryall", 0]) > 0) then {_backpack_new = "cgqc_pack_mk1_carryall_black";};
		if ((player_backpack_old find["kitbag", 0]) > 0) then {_backpack_new = "cgqc_pack_mk1_kitbag_black";};
		if ((player_backpack_old find["magic", 0]) > 0) then {_backpack_new = "cgqc_pack_mk1_magic";};
		// Add diver perks
		cgqc_perks_diver = true;
	};
	default // Normal camo switch
	{
		// Backpack type first
		_backpack_new = "cgqc_pack_mk1";
		// goggles
		_goggles_new = player_goggles_old;
		// Check backpack variant 
		player_backpack_old = toLower player_backpack_old;
		if ((player_backpack_old find["radiobag", 0]) > 0) then {_backpack_new = _backpack_new + "_radiobag";};
		if ((player_backpack_old find["assault", 0]) > 0) then {_backpack_new = _backpack_new + "_assault";}; 
		if ((player_backpack_old find["carryall", 0]) > 0) then {	_backpack_new = _backpack_new + "_carryall";};
		if ((player_backpack_old find["kitbag", 0]) > 0) then {	_backpack_new = _backpack_new + "_kitbag";};
		if ((player_backpack_old find["magic", 0]) > 0) then {	_backpack_new = _backpack_new + "_magic";};

		// Sets base names 
		if (_camo == "tan") then {
			_helmet_new = "cgqc_helmet_mk1";
			_uniform_new = "cgqc_uniform_mk1";
			_vest_new = "cgqc_vest_mk1_" + _camo;
		} else {
			_helmet_new = "cgqc_helmet_mk1_" + _camo;
			_uniform_new = "cgqc_uniform_mk1_" + _camo;
			_vest_new = "cgqc_vest_mk1_" + _camo;
			_backpack_new = _backpack_new + "_" + _camo;
		};

		// ------- Helmet -------------------------------------------------------------------------------
		if ((player_helmet_old find["_medic", 0]) > 0) then {
			_helmet_new = _helmet_new + "_medic";
		};
		// ------- vest -------------------------------------------------------------------------------
		if ((player_vest_old find["_ar", 0]) > 0) then {
			_vest_new = _vest_new + "_ar";
		};
		if ((player_vest_old find["_lr", 0]) > 0) then {
			_vest_new = _vest_new + "_lr";
		};
		if ((player_vest_old find["_rf", 0]) > 0) then {
			_vest_new = _vest_new + "_rf";
		};
	};
};






// ------- Add stuff ----------------------------------------------------------------------------
// Add selected uniform
player addHeadgear _helmet_new;
player forceAddUniform _uniform_new;
player addVest _vest_new;
player addBackpack _backpack_new;
player addGoggles _goggles_new;

// Check that equiment switch worked
check_helmet = headgear player;
check_uniform = uniform player;
check_vest = vest player;
check_backpack = backpack player;
check_goggles = goggles player;
if (check_helmet == "") then {
	player addHeadgear player_helmet_old;
};
if (check_uniform == "") then {
	player forceAddUniform player_uniform_old;
};
if (check_vest == "") then {
	player addVest player_vest_old;
};
if (check_backpack == "") then {
	player addBackpack player_backpack_old;
};
if (check_goggles == "") then {
	player addGoggles player_goggles_old;
};

// Flush potential leftovers 
clearAllItemsFromBackpack player;

// load items in new uniform
{
	player addItemToUniform _x
} forEach _items_uniform;
{
	player addItemToVest _x
} forEach _items_vest;
{
	player addItemToBackpack _x
} forEach _items_pack;
// Return control to player
//disableUserInput false;

// Set back patch
player setVariable ["BIS_fnc_setUnitInsignia_class", nil]; //Remove patch
[ player, cgqc_player_patch ] call BIS_fnc_setUnitInsignia;