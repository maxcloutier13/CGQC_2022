_vic = _this select 0;
_player = _this select 1;
{
	//Check if in vehicle
	if (_x in _vic) then 
	{
		deleteVehicle _x;
	};
} forEach cgqc_crew_heli;


