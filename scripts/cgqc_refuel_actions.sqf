_type = _this select 0;

switch (_type)
do
{
	case "on":
	{
		_action = [ "menu_self_rrr", "Rearm/Repair/Refuel", "", {['normal'] execVM "\cgqc_2022\scripts\cgqc_refuel_heli.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
        _adding = [ player, 1, ["ACE_SelfActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
	};
    case "off":
	{
		// Remove add crate option
		_remove = [ player, 1, ["ACE_SelfActions", "menu_self_rrr"]] call ace_interact_menu_fnc_removeActionFromObject;
	};
    case "on_short":
	{
		_action = [ "menu_self_rrr_short", "Rearm/Repair/Refuel (rapidos)", "", {['short'] execVM "\cgqc_2022\scripts\cgqc_refuel_heli.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
        _adding = [ player, 1, ["ACE_SelfActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
	};
    case "off_short":
	{
		// Remove add crate option
		_remove = [ player, 1, ["ACE_SelfActions", "menu_self_rrr_short"]] call ace_interact_menu_fnc_removeActionFromObject;
	};
	default
	{
		hint "woops";
	};
};


