// === Mags depending on limitMags setting ========
for "_i" from 1 to 6 do {
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull";
};
player addItemToVest "rhs_mag_m67";
player addItemToVest "rhs_mag_m67";
if (!cgqc_config_sidearm_2023) then {
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
};
