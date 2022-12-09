_source = _this select 0;
waitUntil {sleep 1;!isNil "cgqc_mk2_arsenal_init"};
//cgqc_arsenal_mk2_boxes pushBack _source;
//[_source, cgqc_mk2_arsenal_list] call ace_arsenal_fnc_initBox;

// ------ Arsenal version --------------------------------------------------------------------------------------
_action = [ "cgqc_arsenal_1", "Arsenal: Soldat", "", {hint "Soldat!"}, {cgqc_player_rank == 1} ] call ace_interact_menu_fnc_createAction;
_adding = [ this, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;

_action = [ "cgqc_arsenal_5", "Arsenal: All", "", {hint "All!!"}, {cgqc_player_rank > 5} ] call ace_interact_menu_fnc_createAction;
_adding = [ this, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;

// Add ace interactions
#include "mk2_loadouts_actions.sqf"

