_type = _this select 0;
//hintc format ["TransitionType:%1", _type];sleep 1;
_text = "";
_text_insert = "";
if (cgqc_setting_show_transition) then {
    // Fade to black  
    cutText ["", "BLACK FADED", 999];
    titleText ["", "PLAIN"];
    switch (_type) do {
        case "role":{ 
            _text_insert = cgqc_mk2_role;
            _text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >Role: %1</t><br/>"); 
        };
        case "camo":{ 
            _text_insert = format ["camo %1", _type];
            _text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >Changement de %1</t><br/>");
        };
        case "diver":{
            _text_insert = "Plongeur";
            _text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >Kit: %1</t><br/>");
        };
        case "para":{
            _text_insert = "Parachutiste";
            _text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >Kit: %1</t><br/>");
        };
    };
    //Pop le texte
    _text = format [_text, _text_insert];
    [_text, 0, 0, 3, 2] spawn BIS_fnc_dynamicText;
    sleep 5;
    titleFadeOut 3;
    // Wake up with blur
    "dynamicBlur" ppEffectEnable true;
    "dynamicBlur" ppEffectAdjust [6];
    "dynamicBlur" ppEffectCommit 0;
    titleCut ["", "BLACK IN", 3];
    "dynamicBlur" ppEffectAdjust [0.0];
    "dynamicBlur" ppEffectCommit 2;
};

