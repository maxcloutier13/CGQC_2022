// === Mags depending on limitMags setting ========
if (cgqc_setting_limitMags) then {
    _maxmags = cgqc_setting_limitMags_max / 2;
} else{
    _maxmags = 4; //If the maximum is not imposed, use 8 as default
};
for "_i" from 1 to _maxmags do {
	player addItemToVest "50Rnd_570x28_SMG_03";
};
player addItemToVest "WBK_HeadLampItem";
player addItemToVest "ACE_Chemlight_HiRed";
player addItemToVest "ACE_Chemlight_IR";
player addItemToVest "SmokeShell";
player addItemToVest "SmokeShellBlue";
player addItemToVest "SmokeShellRed";
player addItemToVest "B_IR_Grenade";