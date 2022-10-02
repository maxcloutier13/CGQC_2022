_source = _this select 0;
_pilot_class = "CGQC_units_mk1_4_pilot_heli";
_gunner_class = "CGQC_units_mk1_4_crew_heli";
// Find player group
_player_group = group player;
// Spawn copilot  
_copilot = _player_group createUnit [_pilot_class, [0, 0, 100], [], 0, "CAN_COLLIDE"];
_copilot moveInTurret [_source, [0]];
_copilot setUnloadInCombat [false, false];
// Spawn gunners
_gunner_left = _player_group createUnit [_gunner_class, [0, 0, 100], [], 0, "CAN_COLLIDE"];
_gunner_left moveInTurret [_source, [1]];
_gunner_left setUnloadInCombat [false, false];
sleep 1;
_gunner_right = _player_group createUnit [_gunner_class, [0, 0, 100], [], 0, "CAN_COLLIDE"];
_gunner_right moveInTurret [_source, [2]];
_gunner_right setUnloadInCombat [false, false];
hint "Le crew est prêt!";