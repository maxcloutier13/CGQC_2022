// === Mags depending on limitMags setting ========
if (cgqc_setting_limitMags) then {
    _maxmags = cgqc_setting_limitMags_max;
} else{
    _maxmags = 8; //If the maximum is not imposed, use 8 as default
};
for "_i" from 1 to _maxmags do {
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull";
};
for "_i" from 1 to 5 do {
	player addItemToVest "1Rnd_HE_Grenade_shell";
};