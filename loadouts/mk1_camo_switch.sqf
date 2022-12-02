_camo = _this select 0;
// Fade to black transition
execVM "\CGQC_2022\scripts\transition.sqf";
disableUserInput true;
sleep 1;

// Init new variables
_helmet_new = "";
_uniform_new = "";
_vest_new = "";
_backpack_new = "";

// Current soldier equipment
_helmet_old = headgear player;
_uniform_old = uniform player;
_vest_old = vest player;
_backpack_old = backpack player;

// Save inventory 
_items_uniform = uniformItems player;
_items_vest = vestItems player;
_items_pack = backpackItems player;

// Delete old stuff 
removeHeadgear player;
removeUniform player;
removeVest player;
removeBackpack player;

// Backpack type first
_backpack_new = "cgqc_pack_mk1";
// Check backpack variant 
_backpack_old = toLower _backpack_old;
if ((_backpack_old find["radiobag", 0]) > 0) then {_backpack_new = _backpack_new + "_radiobag";};
if ((_backpack_old find["assault", 0]) > 0) then {_backpack_new = _backpack_new + "_assault";}; 
if ((_backpack_old find["carryall", 0]) > 0) then {	_backpack_new = _backpack_new + "_carryall";};
if ((_backpack_old find["kitbag", 0]) > 0) then {	_backpack_new = _backpack_new + "_kitbag";};

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
if ((_helmet_old find["_medic", 0]) > 0) then {
	_helmet_new = _helmet_new + "_medic";
};
// ------- vest -------------------------------------------------------------------------------
if ((_vest_old find["_ar", 0]) > 0) then {
	_vest_new = _vest_new + "_ar";
};
if ((_vest_old find["_lr", 0]) > 0) then {
	_vest_new = _vest_new + "_lr";
};
if ((_vest_old find["_rf", 0]) > 0) then {
	_vest_new = _vest_new + "_rf";
};

// ------- Add stuff ----------------------------------------------------------------------------
// Add selected uniform
player addHeadgear _helmet_new;
player forceAddUniform _uniform_new;
player addVest _vest_new;
player addBackpack _backpack_new;

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
disableUserInput false;