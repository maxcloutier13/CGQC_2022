_type = _this select 0;
_helipad = _type select 0;

// Setup trigger
private _loc = _helipad;//getPos _helipad;
private _area = [6.8, 6.8, 0.00131226, true];
private _cond = "(vehicle player) in thisList && (vehicle player) != player";
private _act = "{['on_short'] execVM '\cgqc_2022\scripts\cgqc_refuel_actions.sqf'} foreach thislist;";
private _deAct = "{['off_short'] execVM '\cgqc_2022\scripts\cgqc_refuel_actions.sqf'} foreach thislist;";
private _int = 5;

// Create trigger
_trg = createTrigger ["EmptyDetector",_loc, false];
_trg setTriggerArea _area;
_trg setTriggerActivation ["ANYPLAYER", "PRESENT", true];
_trg setTriggerStatements [_cond, _act, _deAct];
_trg setTriggerInterval _int;