// --- loadMk2 ----------------------------------------------------------
// Open up the arsenal according to rank
_type = _this select 0;
//param [0, objNull, [objNull]];

[_type] spawn { 

	params ["_type"];
	waitUntil {sleep 1; cgqc_mk2_arsenal_init_done}; 
	//hintc format ["Type:%1", _type];
	_zeus = false;
	_items = cgqc_mk2_arsenal_1;
	switch (_type) do {
		case 0: { 
			hint "Arsenal: Unlocked";
			_items = cgqc_mk2_arsenal_5;
		};
		case 1: { 
			hint "Arsenal: Soldat";
			_items = cgqc_mk2_arsenal_1;
		};
		case 2: { 
			hint "Arsenal: Caporal";
			_items = cgqc_mk2_arsenal_2;
		};
		case 3: { 
			hint "Arsenal: Caporal-Chef";
			_items = cgqc_mk2_arsenal_3;
		};
		case 4: { 
			hint "Arsenal: Sergent";
			_items = cgqc_mk2_arsenal_4;
		};
		case 5: { 
			hint "Arsenal: Zeus";
			_zeus = true;
			[player, player, true] call ace_arsenal_fnc_openBox;
		};
		default	{
			hintc "fnc_loadMk2 fucked up. ";
		};
	};
	if (!_zeus) then {
		hintc "Not Zeus: Pop box";
		// Init crate
		[player, _items] call ace_arsenal_fnc_initBox;
		// Open arsenal
		[player, player, false] call ace_arsenal_fnc_openBox;
		// Remove option
		//[player, true] call ace_arsenal_fnc_removeBox;
	};
};






