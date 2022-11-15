_vic = _this select 0;
_type = _this select 1;
// Add spare fuelcan + ammo
["cgqc_box_mk1_fuelcan", _vic, true] call ace_cargo_fnc_loadItem;
["cgqc_box_mk1_ammocan", _vic, true] call ace_cargo_fnc_loadItem;

switch (_type)
do
{
    case "car":
	{
        ["ACE_Wheel", _vic, true] call ace_cargo_fnc_loadItem;
	};
	case "tank":
	{
        ["ACE_Track", _vic, true] call ace_cargo_fnc_loadItem;
	};
    default
	{
        _air = 1;
    };
};

