
if (cgqc_setting_show_transition) then {
    [] spawn { 
        _role_name = cgqc_mk2_role;
        _text = (
			"<br/>" + "<br/>" + "<br/>" +"<t size='2' >Role: %1</t><br/>"
		);
		//Pop le logo et le texte
		_text = format [_text, _role_name];
		[_text, 0, 0, 3, 2] spawn BIS_fnc_dynamicText;
        sleep 6;
        titleFadeOut 2;
        // Wake up with blur
        "dynamicBlur" ppEffectEnable true;
        "dynamicBlur" ppEffectAdjust [6];
        "dynamicBlur" ppEffectCommit 0;
        titleCut ["", "BLACK IN", 3];
        "dynamicBlur" ppEffectAdjust [0.0];
        "dynamicBlur" ppEffectCommit 2;
    };
};
