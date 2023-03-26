// --- 23rd ----------------------------------------------------------
// Sets some stuff up for the 23rd guys
_text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >23rd CTF</t><br/>");
[_text, 0, 0, 2, 2] spawn BIS_fnc_dynamicText;
cgqc_player_23rd = true;
cgqc_player_rank_beret = "23rd_logo_berret_purp";
cgqc_player_patch = "23rd_Logo_Unit_Old";
// Set back patch
player setVariable ["BIS_fnc_setUnitInsignia_class", nil]; //Remove patch
[ player, cgqc_player_patch ] call BIS_fnc_setUnitInsignia;
