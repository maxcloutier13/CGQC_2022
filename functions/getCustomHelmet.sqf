// --- getCustomHelmet ----------------------------------------------------------
// Get player custom helmet if exists
_helmet = _this select 0;
_customHelmet = _helmet + "_" + cgqc_custom_playername;
player addHeadgear _customHelmet;
_checkHelmet = headgear player;
if (_checkHelmet == "") then {
    player addHeadgear _helmet;
};