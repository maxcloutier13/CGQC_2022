// === Mags depending on limitMags setting ========
for "_i" from 1 to (cgqc_setting_limitMags_max * 2) do {player addItemToVest "7Rnd_mas_can_408_Mag"};
if (!cgqc_config_sidearm_2023) then {
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
};
