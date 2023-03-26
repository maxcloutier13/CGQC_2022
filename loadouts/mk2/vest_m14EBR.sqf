// === Mags depending on limitMags setting ========
for "_i" from 1 to 9 do {
	player addItemToVest "ACE_20Rnd_762x51_M118LR_Mag";
};
if (!cgqc_config_sidearm) then {
    player addItemToBackpack cgqc_config_sidearm_mag;
    player addItemToBackpack cgqc_config_sidearm_mag;
    player addItemToBackpack cgqc_config_sidearm_mag;
};
