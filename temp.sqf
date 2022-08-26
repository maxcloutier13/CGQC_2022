class rhsusf_acc_premier;
class ItemInfo;
class OpticsModes;
class pso1_scope;
class cgqc_acc_M8541A_wood : rhsusf_acc_premier
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC M8541A Woodland";
	model = "\CGQC_2022\acc\cgqc_acc_M8541A_wood";
	class ItemInfo : ItemInfo
	{
		mass = 9;
		class OpticsModes : OpticsModes
		{
			class pso1_scope : pso1_scope
			{};
			class Mrds
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {
					""
				};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
		};
	};
};
// *------------------------------------------------------------------------------

class rhsusf_acc_premier_mrds: rhsusf_acc_premier
{
	scope = 2;
	displayName = "M8541A SSDS (MRDS)";
	author = "$STR_RHSUSF_AUTHOR_FULL";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\ph_5_25x_56mm\prem_scope_pt";
	class ItemInfo: ItemInfo
	{
		mass = 9;
		class OpticsModes: OpticsModes
		{
			class pso1_scope: pso1_scope{};
			class Mrds
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {
					""
				};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
		};
	};
};

class Item_rhsusf_acc_premier_mrds: Item_Base_F
{
	scope = 2;
	scopeCurator = 2;
	author = "$STR_RHSUSF_AUTHOR_FULL";
	displayName = "M8541A SSDS (MRDS)";
	vehicleClass = "WeaponAccessories";
	editorCategory = "EdCat_WeaponAttachments";
	editorSubcategory = "EdSubcat_TopSlot_Optics";
	model = "\A3\Weapons_f\dummyweapon.p3d";
	class TransportItems
	{
		class rhsusf_acc_premier_mrds
		{
			name = "rhsusf_acc_premier_mrds";
			count = 1;
		};
	};
};

// Woodland scope
class ItemInfo;
class OpticsModes;
class pso1_scope;
class rhsusf_acc_premier;
class cgqc_acc_M8541A_wood : rhsusf_acc_premier
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC M8541A Woodland";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\ph_5_25x_56mm\prem_scope_pt";
	hiddenSelectionsTextures[] = {
		"\CGQC_2022\acc\Optic_EndPart_Ca.paa"
		"\CGQC_2022\acc\rhs_pred_tac_sight_co.paa"
		"\CGQC_2022\acc\rmr_lens_ca.paa"
		"\CGQC_2022\acc\cgqc_scope_mrds_wood.paa"
		"\CGQC_2022\acc\collimdot_red_ca.paa"
		"\CGQC_2022\acc\cgqc_scope_M8541A_wood.paa"
	};
	class ItemInfo : ItemInfo
	{
		mass = 9;
		class OpticsModes : OpticsModes
		{
			class pso1_scope : pso1_scope
			{};
			class Mrds
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {
					""
				};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
		};
	};
};

class rhsusf_acc_anpeq15_bk: rhsusf_acc_anpeq15
{
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_anpeq15_bk_ca.paa";
	author = "$STR_RHSUSF_AUTHOR_FULL";
	displayName = "$STR_RHSUSF_ACC_PEQ15SURE_BK_Laser";
	weaponInfoType = "RHS_Flashlight2";
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_light";
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_bk";
};

class rhsusf_acc_anpeq15_bk_light: rhsusf_acc_anpeq15_light
{
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_anpeq15_bk_light_ca.paa";
	author = "$STR_RHSUSF_AUTHOR_FULL";
	displayName = "$STR_RHSUSF_ACC_PEQ15SURE_BK_Light";
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_bk_light";
	weaponInfoType = "RHS_Flashlight2";
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top";
};
// -----------------------------------------------------------------------------------------------
class rhsusf_acc_LEUPOLDMK4_2_d: rhsusf_acc_LEUPOLDMK4_2
{
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_LEUPOLDMK4_2_d_ca.paa";
	displayName = "$STR_RHSUSF_ACC_LEUPOLDMK402_SD_D";
	scope = 2;
	author = "$STR_RHSUSF_AUTHOR_FULL";
	weaponInfoType = "RscWeaponZeroing";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\leupoldmk4\leupoldmk4_2_d";
};
class rhsusf_acc_premier: rhsusf_acc_LEUPOLDMK4_2
{
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_premier_ca.paa";
	displayName = "M8541A SSDS";
	scope = 2;
	author = "$STR_RHSUSF_AUTHOR_FULL";
	weaponInfoType = "RscWeaponZeroing";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\ph_5_25x_56mm\prem_scope";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 8;
		RMBhint = "Optical Sniper Sight";
		optics = 1;
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3";
		class OpticsModes
		{
			class pso1_scope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {
					"OpticsCHAbera1", "OpticsBlur1"
				};
				discreteDistance[] = {
					100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800
				};
				discreteDistanceInitIndex = 1;
				opticsZoomMax = "0.25/3";
				opticsZoomMin = "0.25/15";
				opticsZoomInit = "0.25/3";
				discretefov[] = {
					"0.25/3", "0.25/6", "0.25/9", "0.25/12", "0.25/15"
				};
				discreteInitIndex = 0;
				modelOptics[] = {
					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3", "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot6", "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot9", "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot12", "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot15"
				};
				memoryPointCamera = "opticView";
				visionMode[] = {
					"Normal"
				};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1800;
				cameraDir = "";
			};
		};
	};
};

// Custom boxes
class Extended_Init_EventHandlers
{
	class B_CargoNet_01_ammo_F
	{
		init = "(_this select 0) call (compile preprocessFileLineNumbers 'scripts\barsenalCrate.sqf')";
	};
};

// 

/oooooooh

class Meteo_EH
{
	init = "_this execVM '\a3\Props_F_Enoch\Military\Equipment\scripts\meteo.sqf'";
};

// AUTOPATCH AUTORANK--------------------------------------------------------------------------------------------

// set rank by prefix ----------------------------------------------------------------------------------
_name = name player;
_prefix = _name select[0, 4];
switch (_prefix)
do
{
	case "Sdt.":
	{
		player setRank "PRIVATE";
		hint "Soldat";
	};
	case "Cpl.":
	{
		player setRank "CORPORAL";
		hint "Caporal";
	};
	case "CplC":
	{
		player setRank "CORPORAL";
		hint "Caporal-Chef";
	};
	case "Sgt.":
	{
		player setRank "SERGEANT";
		hint "Sergeant";
	};
	case "Adju":
	{
		player setRank "SERGEANT";
		hint "Adjudent";
	};
	case "SLt.":
	{
		player setRank "LIEUTENANT";
		hint "Sous-Lieutenant";
	};
	case "Lt. ":
	{
		player setRank "LIEUTENANT";
		hint "Lieutenant";
	};
	case "Capt":
	{
		player setRank "CAPTAIN";
		hint "Capitaine";
	};
	case "Maj.":
	{
		player setRank "MAJOR";
		hint "Major";
	};
	case "LCol":
	{
		player setRank "COLONEL";
		hint "Lieutenant-Colonel";
	};
	case "Col.":
	{
		player setRank "COLONEL";
		hint "Colonel";
	};
	default
	{
		player setRank "PRIVATE";
		_text = ("<br/>" + "<t size='2' >Bonsoir, Visiteur!</t>" +
		"<br/>" + "<t size='1' >Joint nous sur teamspeak: ts.cgqc.ca</t>" +
		"<br/>" + "<t size='1' >discord.gg/RCyRKWVG</t>");
		[ _text, 0, 0, 3, 2 ] spawn BIS_fnc_dynamicText;
		sleep 6;
	};
};

// default text if the player is not known
_text = (format["<t size='2' >Bonjour %1</t><br/><t>what's up?</t>", _name]);
// default patch pour les joueurs qui en ont pas de custom
[ player, "cgqc_patch_logo" ] call BIS_fnc_setUnitInsignia;

// Assign patch based on name  ------------------------------------------------------------------------------------
sleep 2;
if ((_name find["Audi", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_audi.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo Audi!</t><br/><t>what's up?</t>");
	[ player, "cgqc_patch_audi" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Braddock", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_braddock.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo Mafia!</t><br/><t>what's up?</t>");
	        // load insignia
	[ player, "cgqc_patch_cloutier" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Cloutier", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_cloutier.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo Cloutier!</t><br/><t>Asti que t'es beau</t>");
	[ player, "cgqc_patch_cloutier" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Comeau", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_comeau.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo Comeau!</t><br/><t>Asti que t'es beau!</t>");
	[ player, "cgqc_patch_comeau" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Fortin", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_fortin.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo Dogo!</t><br/><t>ça roule?</t>");
	        // load insignia
	[ player, "cgqc_patch_fortin" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Frechette", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_frechette.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo Frechette!</t><br/><t>what's up buddy?</t>");
	        // load insignia
	[ player, "cgqc_patch_frechette" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Genest", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_genest.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo petit beurre!</t><br/><t>what's up?</t>");
	        // load insignia
	[ player, "cgqc_patch_genest" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Laforest", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_laforest.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo Frog!</t><br/><t>what's up?</t>");
	        // load insignia
	[ player, "cgqc_patch_laforest" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Pinard", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_pinard.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo PinHard!</t><br/><t>what's up?</t>");
	        // load insignia
	[ player, "cgqc_patch_pinard" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Tremblay", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_tremblay.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo Tremblay!</t><br/><t>what's up Captain'?</t>");
	        // load insignia
	[ player, "cgqc_patch_tremblay" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Villeneuve", 0]) > 0) then {
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_villeneuve.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo Logic!</t><br/><t>what's up?</t>");
	        // load insignia
	[ player, "cgqc_patch_villeneuve" ] call BIS_fnc_setUnitInsignia;
};

if ((_name find["Woods", 0]) > 0) then {
	hint "woods?";
	_text = ("<img size= '6' style='vertical-align:middle' shadow='false' image='\cgqc\patches\cgqc_patch_woods.paa'/>" +
	"<br/>" +
	"<t size='2' >Yo XiPoWnZX!</t><br/><t>what's up?</t>");
	        // load insignia
	[ player, "cgqc_patch_woods" ] call BIS_fnc_setUnitInsignia;
};

// Show text and patch ------------------------------------------------------------------------------------
[ _text, 0, 0, 3, 2 ] spawn BIS_fnc_dynamicText;
// sleep a bit before going out
sleep 4;

// plate carriers 
cgqc_vest_mk1_tan
cgqc_vest_mk1_tan_lr
cgqc_vest_mk1_tan_rf
cgqc_vest_mk1_tan_ar



// Ace action attempt
_action = ["Rifleman (Carbine)", "Rôles MK1", "", {
	[this] spawn {
		execVM "\CGQC_2022\loadouts\mk1_rifleman_carbine.sqf";
	};
}, {true}] call ace_interact_menu_fnc_createAction;
[this, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;


_action = {execVM "\CGQC_2022\loadouts\mk1_rifleman_carbine.sqf";};
_actionCreated = ['Rifleman', 'Rifleman', '', _action, {true}] call ace_interact_menu_fnc_createAction;
[this, 1, ["ACE_MainActions"], _actionCreated] call ace_interact_menu_fnc_addActionToObject;



myaction = ['TestAction 1', 'Test', '', {
	hint 'test1';
}, {
	true
}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], myaction] call ace_interact_menu_fnc_addActionToObject;
myaction = ['TestAction 2', 'Test', '', {
	hint 'test2';
}, {
	true
}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], myaction] call ace_interact_menu_fnc_addActionToObject;


// Example
_action = ["mytrack","My Track Name","",{params ["_target"]; [_target,"my_track_1"] execVM "KIF_Gramophon\play_track.sqf";},{true}] call ace_interact_menu_fnc_createAction;
[this, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;


// More example 
_actionHeliGo = {execVM "EGX_HeliTransport\OrderHeliGO.sqf";};
_OrderHeliGo = ['OrderHeliGO', 'Order heli GO', '', _actionHeliGo, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _OrderHeliGo] call ace_interact_menu_fnc_addActionToObject;

};


// Longer example 
private _breakWindowAction = [
	"Break_Window",
	"Break Window",
	["", "#C4D4E0"],
	{
		params ["_target", "_player", "_params"];
		_params params ["_building", "_selectionName"];
		_building setHit [_selectionName, 1, true];
	}, // statement
	{
		params ["_target", "_player", "_params"];
		_params params ["_building", "_selectionName"];
		(_building getHit _selectionName) < 1;
	// true;
	}, // condition
	{}, // child code
	[_building, _x], // params
	[0,0,0], // position
	2, // distance
	//[showDisabled,enableInside,canCollapse,runOnHover,doNotCheckLOS] // special params
	[false, true, true, false, true]
] call ace_interact_menu_fnc_createAction;

// [typeOf _building, 0, [], _breakWindowAction] call ace_interact_menu_fnc_addActionToClass;
[_helperObject, 0, [], _breakWindowAction] call ace_interact_menu_fnc_addActionToObject;




		

_this addAction ["Relax", "cgqc_2022\scripts\change_music.sqf", [0]];
_this addAction ["Heavier", "cgqc_2022\scripts\change_music.sqf", [1]];
_this addAction ["Oldies", "cgqc_2022\scripts\change_music.sqf", [2]];
[_this, false] call klpq_musicRadio_fnc_addRadio;	