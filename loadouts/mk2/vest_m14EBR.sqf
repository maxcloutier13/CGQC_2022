// === Mags depending on limitMags setting ========
for "_i" from 1 to (cgqc_setting_limitMags_max * 1.5) do {player addItemToVest "ACE_20Rnd_762x51_M118LR_Mag"};
if (!cgqc_config_sidearm_2023) then {
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
};
