// === Linked Items 
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
// === Binos
player addWeapon "cgqc_item_rangefinder";
// === Items GPS/UAV/NVG
player linkItem "ItemGPS";
// === NVG's - In backpack if daytime
[] call CGQC_fnc_isDaytime;
if (cgqc_mission_daytime) then {
    player addItemToBackpack "JAS_GPNVG18_blk";
}else{
    //Night mission 
    player linkItem "JAS_GPNVG18_blk";
};