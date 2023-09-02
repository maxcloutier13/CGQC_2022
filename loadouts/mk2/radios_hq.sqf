// === HQ Radios ================================
player addItemToUniform "ACRE_PRC343";
player addItemToBackpack "ACRE_PRC117F";
player addItemToBackpack "ACRE_PRC117F";
// Delete event in case it exists
if(!isNil "cgqc_event_148") then {
    ["acre_startedSpeaking", cgqc_event_148] call CBA_fnc_removeEventHandler;
};