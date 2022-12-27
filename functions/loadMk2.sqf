// --- loadMk2 ----------------------------------------------------------
// Open up the arsenal according to rank
_type = _this select 0;
//param [0, objNull, [objNull]];

[_type] spawn { 

	params ["_type"];
	//if(isNil "loadMk2_firstRun") then {
	//	waitUntil {sleep 0.5; cgqc_mk2_arsenal_init_done}; 
	//};
	//hintc format ["Type:%1", _type];
	if (isNil "loadMk2_lastRun") then {
		loadMk2_lastRun = 25;
	};
	loadMk2_firstRun = true;
	_zeus = false;
	_items = cgqc_mk2_arsenal_1;
	_found = false;
	switch (_type) do {
		case 0: { 
			hint "Arsenal: Complet";
			_items = cgqc_mk2_arsenal_8;
			_found = true;
		};
		case 1: { 
			hint "Arsenal: Soldat";
			_items = cgqc_mk2_arsenal_1;
			_found = true;
		};
		case 2: { 
			hint "Arsenal: Caporal";
			_items = cgqc_mk2_arsenal_2;
			_found = true;
		};
		case 3: { 
			hint "Arsenal: Caporal-Chef";
			_items = cgqc_mk2_arsenal_3;
			_found = true;
		};
		case 4: { 
			hint "Arsenal: Sergent";
			_items = cgqc_mk2_arsenal_4;
			_found = true;
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
		//hintc "Not Zeus: Pop box";
		waitUntil {_found}; 
		// Clear items
		//[player, true, false] call ace_arsenal_fnc_removeVirtualItems;
		// Init crate
		[player, _items] call ace_arsenal_fnc_initBox;
		// Open arsenal
		[player, player, false] call ace_arsenal_fnc_openBox;
	};
};






