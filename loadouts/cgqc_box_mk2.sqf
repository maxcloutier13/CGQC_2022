_source = _this select 0;

//cgqc_arsenal_mk2_boxes pushBack _source;
//[_source, cgqc_mk2_arsenal_list] call ace_arsenal_fnc_initBox;

//_arsenal_name = format ["Arsenal: %1", cgqc_player_rank_name];
// ------ Arsenal version --------------------------------------------------------------------------------------
//_action = [ "cgqc_arsenal_mk2", _arsenal_name , "CGQC_2022\textures\icon_arsenal.paa", {[_this, cgqc_mk2_arsenal_list] call ace_arsenal_fnc_initBox;}, {true}] call ace_interact_menu_fnc_createAction;
//_adding = [ _source, 0, ["ACE_MainActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
// Add ace interactions
#include "mk2_loadouts_actions.sqf"