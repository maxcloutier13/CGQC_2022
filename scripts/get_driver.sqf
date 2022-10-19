_vic = _this select 0;
_driver_class = "CGQC_units_mk1_4_Tank_Driver";

// find player group
_player_group = group player;
// Delete crew if it exists 
if (isNil "cgqc_crew_tank") then {
	cgqc_crew_tank = [];
} else {
	{
		// Check if in vehicle
		if (_x in _vic) then {
			deleteVehicle _x;
		};
	} forEach cgqc_crew_tank;
};
// spawn driver  
_driver = _player_group createUnit [_driver_class, [0, 0, 100], [], 0, "CAN_COLLIDE"];
_driver assignAsDriver _vic;
_driver moveInDriver _vic;
_driver setUnloadInCombat [false, false];
cgqc_crew_tank pushBack _driver;
sleep 1;
hint "Le crew est prêt!";