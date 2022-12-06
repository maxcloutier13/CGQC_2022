// === Mags depending on limitMags setting ========
if (cgqc_setting_limitMags) then {
    _maxmags = cgqc_setting_limitMags_max * 2;
} else{
    _maxmags = 12; //If the maximum is not imposed, use 12 as default
};
for "_i" from 1 to _maxmags do {
	player addItemToVest "7Rnd_mas_can_408_Mag";
};