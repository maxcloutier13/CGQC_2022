// --- getCustomGun ----------------------------------------------------------
// Get player custom gun if exists
_gun = _this select 0;
//param [0, objNull, [objNull]];
_customGun = _gun + "_" + cgqc_custom_playername;
player addWeapon _customGun;
if !(player hasWeapon _customGun) then {
    player addWeapon _gun;
};