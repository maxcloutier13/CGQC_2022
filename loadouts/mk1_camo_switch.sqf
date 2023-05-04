_camo = _this select 0;
_fromLoadout = _this select 1;
cgqc_camoSwitch_done = false;
waitUntil {sleep 0.5;cgqc_roleSwitch_done};
_text = "";
_skip = true;
_skip_msg = "";

try {
	disableUserInput true;
	// Transition/text
	if !(_fromLoadout) then {
		// Fade to black transition with text
		[_camo] execVM "\CGQC_2022\scripts\transition.sqf";
	} else {
		// Spawning in, so simple text
		switch (_camo) do {
			case "diver":{_text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >Kit de plongeur</t><br/>");};
			case "para":{_text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >Kit de parachutiste</t><br/>");};
		};
	};
	// Check if player in chill mode
	if (cgqc_player_chill) then {
		["ready", true] call CGQC_fnc_perksBasic;
		waitUntil {!cgqc_player_chill};
	};
	sleep 1;
	// Init new variables
	_helmet_new = "";
	_uniform_new = "";
	_vest_new = "";
	_backpack_new = "";
	_goggles_new = "";

	// Current soldier equipment
	player_helmet_old = headgear player;
	player_uniform_old = uniform player;
	player_vest_old = vest player;
	player_backpack_old = backpack player;
	player_goggles_old = goggles player;

	// Save inventory 
	_items_uniform = uniformItems player;
	_items_vest = vestItems player;
	_items_pack = backpackItems player;

	// Delete old stuff 
	removeHeadgear player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeGoggles player;

	// Find what to switch to
	switch (_camo) do {
		case "diver": //Diver time
		{
			
			if ((player_uniform_old find["diver", 0]) > 0) then {
				_skip = true;
				_skip_msg = "T'as déja un suit de diver, dummy! Skipping.";
			};
			if (_skip) then {
				// Reset everything as it was... 
				_helmet_new = player_helmet_old;
				_uniform_new = player_uniform_old;
				_vest_new = player_vest_old;
				_backpack_new = player_backpack_old;
				_goggles_new = player_goggles_old;
				sleep 0.5;
				[_skip_msg, 0, 0, 2, 2] spawn BIS_fnc_dynamicText;
			}else{//Keep proceeding
				[_text, 0, 0, 2, 2] spawn BIS_fnc_dynamicText;
				// Diving suit
				_uniform_new = "cgqc_uniform_mk1_diver";
				// Rebreather
				_vest_new = "cgqc_vest_mk1_diver";
				// goggles
				_goggles_new = "cgqc_goggles_mk1_diver";
				// Keep old mask in backpack
				player addItemToBackpack player_goggles_old;
				// Black backpack
				player_backpack_old = toLower player_backpack_old;
				if ((player_backpack_old find["radiobag", 0]) > 0) then {_backpack_new = "cgqc_pack_mk1_radiobag_black";};
				if ((player_backpack_old find["assault", 0]) > 0) then {_backpack_new = "cgqc_pack_mk1_assault_black";}; 
				if ((player_backpack_old find["carryall", 0]) > 0) then {_backpack_new = "cgqc_pack_mk1_carryall_black";};
				if ((player_backpack_old find["kitbag", 0]) > 0) then {_backpack_new = "cgqc_pack_mk1_kitbag_black";};
				if ((player_backpack_old find["magic", 0]) > 0) then {_backpack_new = "cgqc_pack_mk1_magic";};
				// Add diver perks
				cgqc_perks_diver = true;
			};
		};
		case "para": //Paradrop time
		{
			// Check if backpack is parachute. Skip if it is.
			_chest_check = [player] call bocr_main_fnc_chestpack;
			if (_chest_check == "") then {
				_skip = true;
				_skip_msg = "T'as déja un backpack sur ton chest! Skipping.";
			};
			if ((player_backpack_old find["chute", 0]) > 0) then {
				_skip = true;
				_skip_msg = "T'as déja un parachute, dummy! Skipping.";
			};
			if(_skip) then { 
				// Reset everything as it was... 
				_helmet_new = player_helmet_old;
				_uniform_new = player_uniform_old;
				_vest_new = player_vest_old;
				_backpack_new = player_backpack_old;
				_goggles_new = player_goggles_old;
				sleep 0.5;
				[_skip_msg, 0, 0, 2, 2] spawn BIS_fnc_dynamicText;
			}else{//Keep proceeding
				[_text, 0, 0, 2, 2] spawn BIS_fnc_dynamicText;
				// Keep uniform
				_uniform_new = player_uniform_old;
				// Keep Vest
				_vest_new = player_vest_old;
				// Switch to mask
				_goggles_new = "cgqc_goggles_mk1_para";
				// Parachute
				_backpack_new  = "B_Parachute";
				// Add Paradrop perks
				cgqc_perks_para = true;
				// Add old backpack on chest
				player addBackpack player_backpack_old;
				{player addItemToBackpack _x} forEach _items_pack;
				// Keep old mask in backpack
				player addItemToBackpack player_goggles_old;
				// Watch / Altimeter
				_items = assignedItems player;
				_current_watch = _items select 2;
				if (_current_watch == "ItemWatch") then {player linkItem "ACE_Altimeter";};
				sleep 0.5;
				[player] call bocr_main_fnc_actionOnChest;
				hint "Prêt à sauter. Ton backpack est sur ton chest.";
			};
		};
		case "23_moss": 
		{
			_helmet_new = "23rd_logo_helmet_moss";
			_uniform_new = "23rd_logo_U_combatshirt_moss";
			_vest_new = "23rd_logo_carrier_light_moss";
			_backpack_new = "23rd_logo_civbag_moss";   
			_goggles_new = player_goggles_old;  
		};
		case "23_multi":
		{
			_helmet_new = "23rd_logo_helmet_multi";
			_uniform_new = "23rd_logo_U_combatshirt_multi";
			_vest_new = "23rd_logo_carrier_light_multi";
			_backpack_new = "23rd_logo_civbag_multi";   
			_goggles_new = player_goggles_old;  
		};
		case "23_frost":
		{
			_helmet_new = "23rd_logo_helmet_win";
			_uniform_new = "23rd_logo_U_combatshirt_win";
			_vest_new = "23rd_logo_carrier_light_win";
			_backpack_new = "23rd_logo_civbag_win";  
			_goggles_new = player_goggles_old; 
		};
		case "23_tard": 
		{
			_helmet_new = "23rd_logo_helmet";
			_uniform_new = "23rd_logo_U_shirt2";
			_vest_new = "23rd_logo_carrier_light_tard";
			_backpack_new = "23rd_logo_civbag_tard";  
			_goggles_new = player_goggles_old; 
		};
		default // Normal camo switch
		{
			// Backpack type first
			_backpack_new = "cgqc_pack_mk1";
			// goggles
			_goggles_new = player_goggles_old;
			// Check backpack variant 
			player_backpack_old = toLower player_backpack_old;
			if ((player_backpack_old find["radiobag", 0]) > 0) then {_backpack_new = _backpack_new + "_radiobag";};
			if ((player_backpack_old find["assault", 0]) > 0) then {_backpack_new = _backpack_new + "_assault";}; 
			if ((player_backpack_old find["carryall", 0]) > 0) then {	_backpack_new = _backpack_new + "_carryall";};
			if ((player_backpack_old find["kitbag", 0]) > 0) then {	_backpack_new = _backpack_new + "_kitbag";};
			if ((player_backpack_old find["magic", 0]) > 0) then {	_backpack_new = _backpack_new + "_magic";};

			// Sets base names 
			if (_camo == "tan") then {
				_helmet_new = "cgqc_helmet_mk1";
				_uniform_new = "cgqc_uniform_mk1";
				_vest_new = "cgqc_vest_mk1_" + _camo;
			} else {
				_helmet_new = "cgqc_helmet_mk1_" + _camo;
				_uniform_new = "cgqc_uniform_mk1_" + _camo;
				_vest_new = "cgqc_vest_mk1_" + _camo;
				_backpack_new = _backpack_new + "_" + _camo;
			};

			// ------- Helmet -------------------------------------------------------------------------------
			if ((player_helmet_old find["_medic", 0]) > 0) then {
				_helmet_new = _helmet_new + "_medic";
			};
			// ------- vest -------------------------------------------------------------------------------
			if ((player_vest_old find["_ar", 0]) > 0) then {
				_vest_new = _vest_new + "_ar";
			};
			if ((player_vest_old find["_lr", 0]) > 0) then {
				_vest_new = _vest_new + "_lr";
			};
			if ((player_vest_old find["_rf", 0]) > 0) then {
				_vest_new = _vest_new + "_rf";
			};
		};
	};

	// ------- Add stuff ----------------------------------------------------------------------------
	// Add selected uniform
	player addHeadgear _helmet_new;
	player forceAddUniform _uniform_new;
	player addVest _vest_new;
	player addBackpack _backpack_new;
	player addGoggles _goggles_new;

	// Check that equiment switch worked
	check_helmet = headgear player;
	check_uniform = uniform player;
	check_vest = vest player;
	check_backpack = backpack player;
	check_goggles = goggles player;
	if (check_helmet == "") then {
		player addHeadgear player_helmet_old;
	};
	if (check_uniform == "") then {
		player forceAddUniform player_uniform_old;
	};
	if (check_vest == "") then {
		player addVest player_vest_old;
	};
	if (check_backpack == "") then {
		player addBackpack player_backpack_old;
	};
	if (check_goggles == "") then {
		player addGoggles player_goggles_old;
	};

	// Flush potential leftovers 
	clearAllItemsFromBackpack player;

	// load items in new uniform
	{
		player addItemToUniform _x
	} forEach _items_uniform;
	{
		player addItemToVest _x
	} forEach _items_vest;
	if (_camo != "para") then {
		{player addItemToBackpack _x} forEach _items_pack;
	};

	// Return control to player
	//disableUserInput false;

	// Set back patch
	player setVariable ["BIS_fnc_setUnitInsignia_class", nil]; //Remove patch
	[ player, cgqc_player_patch ] call BIS_fnc_setUnitInsignia;

	disableUserInput false;
	if (userInputDisabled) then {
        disableUserInput false;
    };
	// Done
	cgqc_camoSwitch_done = true;

} catch{ // In case of error: Return control to player
	disableUserInput false;
	if (userInputDisabled) then {
        disableUserInput false;
    };
	// Done
	cgqc_camoSwitch_done = true;
	hintc "Erreur: mk2_camo_switch";
};
disableUserInput false;
