_type = _this select 0;
_playerVic = vehicle player;
switch (_type)
do
{
	case "on":
	{
		_action = [ "menu_self_rrr", "Maintenance Véhicule", "CGQC_2022\textures\icon_maintenance", {['normal'] execVM "\cgqc_2022\scripts\cgqc_refuel_heli.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
        _adding = [ player, 1, ["ACE_SelfActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
		sleep 3;
		hint "Maintenance dispo dans votre Self-Action";
		sleep 10;
		hintSilent "";
	};
    case "off":
	{
		// Remove add crate option
		_remove = [ player, 1, ["ACE_SelfActions", "menu_self_rrr"]] call ace_interact_menu_fnc_removeActionFromObject;
	};
    case "on_short":
	{
		_action = [ "menu_self_rrr_short", "Maintenance Rapide - Véhicule", "CGQC_2022\textures\icon_maintenance", {['short'] execVM "\cgqc_2022\scripts\cgqc_refuel_heli.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
        _adding = [ player, 1, ["ACE_SelfActions"], _action ] call  ace_interact_menu_fnc_addActionToObject;
		sleep 3;
		hint "Maintenance rapide dans votre Self-Action";
		sleep 10;
		hintSilent "";
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


