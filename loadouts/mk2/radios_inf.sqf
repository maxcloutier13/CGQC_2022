// === Infantry Radios ================================
player addItemToUniform "ACRE_PRC343";
player addItemToUniform "ACRE_PRC148";
// Event with notifications if they try to communicate on ch:1
cgqc_event_148 = ["acre_startedSpeaking", {	
 params ["_unit", "_onRadio", "_radioId", "_speakingType"];	
 if (_onRadio) then {   
  if(_radioId find "148" > -1) then { 
 y_channel = [] call acre_api_fnc_getCurrentRadioChannelNumber; 
 if(y_channel == 1) then { 
  _channel_txt = parseText( "148:Ch1 = Listen Only" + "<br/>" + "Change channel to communicate!"); 
  [ _channel_txt, 0, 1, 3, 1 ] spawn BIS_fnc_dynamicText; 
 };  
  };   
 };   
}] call CBA_fnc_addEventHandler;
hint "Radio 148:Ch1-ListenOnly";