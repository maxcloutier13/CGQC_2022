// Wait until Core is finished initializing.
waitUntil {cgqc_player_rank_found};

// Variables pour le ghillie up kit
ghillie_menu = 0;
ghillie_isOn = 0;
ghillie_uniform = "";

// ==== Arsenal mk2 ==================================================================================================
cgqc_mk2_arsenal_list = [];
// Prep les variables de l'arsenal dynamique
#include "\cgqc_2022\loadouts\arsenal\init_arsenal.sqf";