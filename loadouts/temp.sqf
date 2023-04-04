["acre_startedSpeaking", { 
    params ["_unit", "_onRadio", "_radioId", "_speakingType"]; 
    hint format["Unit:%1 -onRadio:%2 -radioId:%3 -speakingType:%4", _unit,_onRadio,_radioId,_speakingType ]; 
    if !(_onRadio) then {
        if(_radioId find "148" == 0) then {
            Hint "148 Ch:1 = Listen Only"
        };
    };
}] call CBA_fnc_addEventHandler;