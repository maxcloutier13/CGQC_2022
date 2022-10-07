execVM "\CGQC_2022\loadouts\transition.sqf";
sleep 1;
// Must ID the vest/backpack variant 
_camo = _this select 0;
_helmet_new = "";

// Init new variables
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

// Check if unit is medic 
_is_medic = player getUnitTrait "Medic";

// switch uniform
switch (_camo)
do
{
	case "base":
	{
		_helmet_new = "cgqc_helmet_mk1";
		_uniform_new = "cgqc_uniform_mk1";
		_vest_new = "cgqc_vest_mk1_tan";
		_backpack_new = "cgqc_pack_mk1_kitbag";
		hint "Uniforme: Training";
	};
	case "desert":
	{
		_helmet_new = "cgqc_helmet_mk1_desert";
		_uniform_new = "cgqc_uniform_mk1_desert";
		_vest_new = "cgqc_vest_mk1_tan";
		_backpack_new = "cgqc_pack_mk1_kitbag_desert";
		hint "Uniforme: Desert";
	};
	case "multicam":
	{
		_helmet_new = "cgqc_helmet_mk1_mcam";
		_uniform_new = "cgqc_uniform_mk1_mcam";
		_vest_new = "cgqc_vest_mk1_mcam";
		_backpack_new = "cgqc_pack_mk1_kitbag_mcam";
		hint "Uniforme: Multicam";
	};
	case "woodland":
	{
		_helmet_new = "cgqc_helmet_mk1_cadpat";
		_uniform_new = "cgqc_uniform_mk1_cadpat";
		_vest_new = "cgqc_vest_mk1_cadpat";
		_backpack_new = "cgqc_pack_mk1_kitbag_cadpat";
		hint "Uniforme: Woodland";
	};
	case "black":
	{
		_helmet_new = "cgqc_helmet_mk1_black";
		_uniform_new = "cgqc_uniform_mk1_black";
		_vest_new = "cgqc_vest_mk1_black";
		_backpack_new = "cgqc_pack_mk1_kitbag_black";
		hint "Uniforme: Black";
	};
	case "winter":
	{
		_helmet_new = "cgqc_helmet_mk1_white";
		_uniform_new = "cgqc_uniform_mk1_white";
		_vest_new = "cgqc_vest_mk1_white";
		_backpack_new = "cgqc_pack_mk1_kitbag_white";
		hint "Uniforme: Winter";
	};
	default
	{
		player addHeadgear "cgqc_helmet_mk1";
		player forceAddUniform "cgqc_uniform_mk1";
		player addVest "cgqc_vest_mk1_tan_ar";
		player addBackpack "cgqc_pack_mk1_kitbag";
	};
};

// Check Helmet variant
if ((_helmet_old find["_medic", 0]) > 0) then 
{
	_helmet_new = _helmet_new + "_medic";
};

// Check vest variant 
if ((_vest_old find["_ar", 0]) > 0) then 
{
	_vest_new = _vest_new + "_ar";
};
if ((_vest_old find["_lr", 0]) > 0) then 
{
	_vest_new = _vest_new + "_lr";
};
if ((_vest_old find["_rf", 0]) > 0) then 
{
	_vest_new = _vest_new + "_rf";
};

// Add selected uniform
player addHeadgear _helmet_new;
player forceAddUniform _uniform_new;
player addVest _vest_new;
player addBackpack _backpack_new;

// Load items in new uniform
{
	player addItemToUniform _x
} forEach _items_uniform;
{
	player addItemToVest _x
} forEach _items_vest;
{
	player addItemToBackpack _x
} forEach _items_pack;