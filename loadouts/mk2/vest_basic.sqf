// Basic Vest loadout (Pretty universal)
// === Throwables ================================
player addItemToVest "rhs_mag_m67";
player addItemToVest "rhs_mag_m67";
player addItemToVest "ACE_M84";
player addItemToVest "ACE_M84";

for "_i" from 1 to cgqc_config_sidearm_mag_nbr do {
	player addItemToVest cgqc_config_sidearm_mag;
};