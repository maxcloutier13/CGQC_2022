// --- getCustomHelmet ----------------------------------------------------------
// Get player custom helmet if exists
_helmet = _this select 0;
//hint format ["Helmet:%1", _helmet];sleep 5;
_customHelmet = _helmet + "_" + cgqc_custom_playername;
//hint format ["Custom Helmet:%1", _customHelmet];sleep 5;
player addHeadgear _customHelmet;
sleep 0.5;
_checkHelmet = headgear player;
sleep 0.5;
//hint format ["Check Helmet:%1", _checkHelmet];sleep 5;
if (_checkHelmet == "") then {
    //hint format ["Custom Helmet not found. Setting to :%1", _helmet];
    sleep 0.5;
    player addHeadgear _helmet;
};