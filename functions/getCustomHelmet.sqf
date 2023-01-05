// --- getCustomHelmet ----------------------------------------------------------
// Get player custom helmet if exists
_helmet = _this select 0;
_customHelmet = _helmet + "_" + cgqc_custom_playername;
//hint format ["Custom Helmet:%1", _customHelmet];sleep 5;
player addHeadgear _customHelmet;
_checkHelmet = headgear player;
//hint format ["Check Helmet:%1", _checkHelmet];sleep 5;
if (_checkHelmet == "") then {
    player addHeadgear _helmet;
} else {
    hint format ["Custom Helmet :%1", _customHelmet];
};