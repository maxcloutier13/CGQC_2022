// === Linked Items 
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
// === Binos
player addWeapon "ACE_Vector";
// === Items GPS/UAV/NVG
player linkItem "B_UavTerminal";

[] call CGQC_fnc_isDaytime;
if (cgqc_mission_daytime) then {
    player addItemToBackpack "JAS_GPNVG18_Full_blk_TI";
}else{
    //Night mission 
    player linkItem "JAS_GPNVG18_Full_blk_TI";
};