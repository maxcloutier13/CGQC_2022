// === TL Radios ================================
player addItem "ACRE_PRC343";
player addItem "ACRE_PRC152";
// Delete event in case it exists
if(!isNil "cgqc_event_148") then {
    ["acre_startedSpeaking", cgqc_event_148] call CBA_fnc_removeEventHandler;
};