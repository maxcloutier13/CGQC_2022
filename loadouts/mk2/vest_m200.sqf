// === Sniper Vest ========
//  

[] execVM "cgqc\functions\fnc_addMags.sqf";
if (!cgqc_config_sidearm) then {for "_i" from 0 to 2 do {player addItemToVest cgqc_config_sidearm_mag};};