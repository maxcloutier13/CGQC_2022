// Supplies spawner --------------------------------------------------------------------------------------------------------------
_action = [ "menu_supplies", "Logistics", "", {""}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_cgqc" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  Fuel can 
_action = [ "menu_supplies_fuel", "Fuel Can", "", {["fuel"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_cgqc" , "menu_supplies"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  Vehicle ammo can 
_action = [ "menu_supplies_vic", "Vehicle Ammo Can", "", {["vic_ammo"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_cgqc" , "menu_supplies"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  Ammo can 
_action = [ "menu_supplies_ammo", "Infantry Ammo Box", "", {["ammo"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_cgqc" , "menu_supplies"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  60mm mortar crate 
_action = [ "menu_supplies_60", "60mm mortar box", "", {["mort60"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_cgqc" , "menu_supplies"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  82mm mortar crate
_action = [ "menu_supplies_82", "82mm mk6 mortar box", "", {["mort82"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_cgqc" , "menu_supplies"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  Spare wheel
_action = [ "menu_supplies_wheel", "Spare wheel", "", {["wheel"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_cgqc" , "menu_supplies"], _action ] call  ace_interact_menu_fnc_addActionToObject;
//  Spare tracks
_action = [ "menu_supplies_track", "Spare track", "", {["track"] execVM "\CGQC_2022\loadouts\mk1_box_get_items.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
_adding = [ _crate, 0, ["ACE_MainActions", "menu_cgqc" , "menu_supplies"], _action ] call  ace_interact_menu_fnc_addActionToObject;
