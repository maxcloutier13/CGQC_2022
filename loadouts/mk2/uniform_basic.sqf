// Basic uniform loadout
// === Essentials ================================
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ItemAndroid";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "ACE_RangeCard";
player addItemToUniform "WBK_HeadLampItem";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "cgqc_items_ifak";
player addItemToUniform "tsp_lockpick";
// === Handgun mags ===========================
_mags = cgqc_config_sidearm_mag;
if (cgqc_perks_recon) then {
    _mags = cgqc_config_sidearm_alternate;
};
for "_i" from 1 to 2 do {
    if (player canAdd [_mags, 1]) then {
        player addItemToUniform _mags;
    } else{
        player addItem _mags;
    };
};
/*
// === Meds =====================================
player addItemToUniform "FF_Painkiller";
player addItemToUniform "FF_Painkiller";
player addItemToUniform "FF_Painkiller";
player addItemToUniform "FF_Painkiller";
player addItemToUniform "FF_Painkiller";
player addItemToUniform "ACE_fieldDressing";
player addItemToUniform "ACE_fieldDressing";
player addItemToUniform "ACE_fieldDressing";
player addItemToUniform "ACE_fieldDressing";
player addItemToUniform "ACE_fieldDressing";
player addItemToUniform "ACE_fieldDressing";
player addItemToUniform "ACE_fieldDressing";
player addItemToUniform "ACE_fieldDressing";
player addItemToUniform "ACE_fieldDressing";
player addItemToUniform "ACE_fieldDressing";
player addItemToUniform "ACE_epinephrine";
player addItemToUniform "ACE_morphine";
player addItemToUniform "ACE_tourniquet";
player addItemToUniform "ACE_tourniquet";
player addItemToUniform "ACE_splint";
*/
// =============================================