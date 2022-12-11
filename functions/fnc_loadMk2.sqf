// --- loadMk2 ----------------------------------------------------------
// Open up the arsenal according to rank

params ["_type", "_crate"];
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
    default	{
	    hintc "fnc_loadMk2 fucked up. ";
	};
};
// Init crate
[_crate, _items] call ace_arsenal_fnc_initBox;
// Open arsenal
[_crate, player] call ace_arsenal_fnc_openBox

