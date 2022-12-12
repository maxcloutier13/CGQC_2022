_vic = _this select 0;
_pilot_class = "CGQC_units_mk1_4_pilot_heli";
_gunner_class = "CGQC_units_mk1_4_crew_heli";
// find player group
_player_group = group player;
// Delete crew if it exists 
if (isNil "cgqc_crew_heli") then {
	cgqc_crew_heli = [];
} else {
	{deleteVehicle _x;} forEach cgqc_crew_heli;
};
// spawn copilot  
_copilot = _player_group createUnit [_pilot_class, [0, 0, 100], [], 0, "CAN_COLLIDE"];
_copilot moveInTurret [_vic, [0]];
_copilot setUnloadInCombat [false, false];
_copilot disableAI "PATH";
cgqc_crew_heli pushBack _copilot;
sleep 1;
// spawn gunners
_gunner_left = _player_group createUnit [_gunner_class, [0, 0, 100], [], 0, "CAN_COLLIDE"];
_gunner_left moveInTurret [_vic, [1]];
_gunner_left setUnloadInCombat [false, false];
_gunner_left disableAI "PATH";
cgqc_crew_heli pushBack _gunner_left;
sleep 1;
_gunner_right = _player_group createUnit [_gunner_class, [0, 0, 100], [], 0, "CAN_COLLIDE"];
_gunner_right moveInTurret [_vic, [2]];
_gunner_right setUnloadInCombat [false, false];
_gunner_right disableAI "PATH";
cgqc_crew_heli pushBack _gunner_right;
sleep 1;
hint "Le crew est prêt!";