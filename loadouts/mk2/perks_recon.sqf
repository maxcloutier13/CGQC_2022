if (hasInterface) then {
	_choice = _this select 0;
	_ghillie = "";
	_to_ghillie = 0;
	switch (_choice) do	{
		case "arid":
		{
			_ghillie = "U_B_FullGhillie_ard";
			hintSilent "Ghillie: Arid";
			_to_ghillie = 1;
		};
		case "sarid":
		{
			_ghillie = "U_B_FullGhillie_sard";
			hintSilent "Ghillie: Semi-Arid";
			_to_ghillie = 1;
		};
		case "lush":
		{
			_ghillie = "U_B_FullGhillie_lsh";
			hintSilent "Ghillie: Lush";
			_to_ghillie = 1;
		};
		case "jungle":
		{
			_ghillie = "U_B_T_FullGhillie_tna_F";
			hintSilent "Ghillie: Jungle";
			_to_ghillie = 1;
		};
		case "uniform":
		{
			hintSilent "Ghillie: Back to Uniform";
			_to_ghillie = 2;
		};
        case "cut_grass":
        {
            hintSilent "Cutting grass";
            _to_ghillie = 0;
            sleep 2;
            _cutgrass = createVehicle ["Land_ClutterCutter_medium_F", position player, [], 0, "CAN_COLLIDE"];
        };
		default
		{
			hintSilent "woops";
			_to_ghillie = 0;
		};
	};
	switch (_to_ghillie) do	{
		case 1: // Change to ghillie
		{
            disableUserInput true;
			// Save old uniform 
			cgqc_perks_ghillie_uniform = uniform player;
			// Save items
			_uniform_items = uniformItems player;
			// Animation 
			player playMove "AinvPknlMstpSnonWnonDnon_medic4";
			sleep 6;
			// switch to ghillie 
			player forceAddUniform _ghillie;
			// Add items back 
			{
				player addItemToUniform _x
			} forEach _uniform_items;
			//Lower the camouflage level of unit in ghillie
			player setUnitTrait ["camouflageCoef", 0.4];
			cgqc_perks_ghillie_isOn = true;
            disableUserInput false;
		};
		case 2:// Change back to uniform
		{
            disableUserInput true;
			// Save items
			_uniform_items = uniformItems player;
			// Animation 
			player playMove "AinvPknlMstpSnonWnonDnon_medic4";
			sleep 6;
			// switch to uniform 
			player forceAddUniform cgqc_perks_ghillie_uniform;
			// Add items back 
			{
				player addItemToUniform _x
			} forEach _uniform_items;
			//Lower the camouflage level of unit in ghillie
			player setUnitTrait ["camouflageCoef", 1.4];
			cgqc_perks_ghillie_isOn = false;
            disableUserInput false;
		};
	};
    sleep 1;
};


