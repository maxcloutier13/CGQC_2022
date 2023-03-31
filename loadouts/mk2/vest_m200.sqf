// === Mags depending on limitMags setting ========
for "_i" from 1 to 12 do {
	player addItemToVest "7Rnd_mas_can_408_Mag";
};
if (!cgqc_config_sidearm_2023) then {
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
};
