if (cgqc_setting_show_transition) then {
    // Fade to black  
    cutText ["", "BLACK FADED", 999];
    titleText ["", "PLAIN"];
    //sleep 3;
    titleFadeOut 3;
    // Wake up with blur
    "dynamicBlur" ppEffectEnable true;
    "dynamicBlur" ppEffectAdjust [6];
    "dynamicBlur" ppEffectCommit 0;
    titleCut ["", "BLACK IN", 5];
    "dynamicBlur" ppEffectAdjust [0.0];
    "dynamicBlur" ppEffectCommit 2;
};
