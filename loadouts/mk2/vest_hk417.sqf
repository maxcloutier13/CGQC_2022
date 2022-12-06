// === Mags depending on limitMags setting ========
if (cgqc_setting_limitMags) then {
    _maxmags = cgqc_setting_limitMags_max * 1.5;
} else{
    _maxmags = 9; //If the maximum is not imposed, use 9 as default
};
for "_i" from 1 to _maxmags do {
	player addItemToVest "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
};