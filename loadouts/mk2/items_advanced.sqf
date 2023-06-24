// === Linked Items 
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
// === Binos
player addWeapon "Laserdesignator_01_khk_F";
player addMagazine "Laserbatteries";
// === Items GPS/UAV
player linkItem "B_UavTerminal";
// === NVG's - In backpack if daytime
[] call CGQC_fnc_isDaytime;
if (cgqc_mission_daytime) then {
    player addItemToBackpack "JAS_GPNVG18_Full_blk_TI";
}else{
    //Night mission 
    player linkItem "JAS_GPNVG18_Full_blk_TI";
};


