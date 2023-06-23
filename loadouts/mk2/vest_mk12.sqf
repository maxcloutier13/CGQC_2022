// === Mags depending on limitMags setting ========
for "_i" from 1 to cgqc_setting_limitMags_max do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull"};
if (!cgqc_config_sidearm_2023) then {
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
    player addItemToBackpack cgqc_config_sidearm_mag_2023;
};
