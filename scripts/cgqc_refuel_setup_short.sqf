_type = _this select 0;

// Setup trigger
private _loc = _type select 0;
private _area = [6.8, 6.8, 0.00131226, true];
private _cond = "(vehicle player) in thisList && (vehicle player) != player";
private _act = "{['on_short'] execVM '\cgqc_2022\scripts\cgqc_refuel_actions.sqf'} forEach (allUnits inAreaArray thisTrigger);";
private _deAct = "['off_short'] execVM '\cgqc_2022\scripts\cgqc_refuel_actions.sqf';";
private _int = 2;

// Create trigger
_trg = createTrigger ["EmptyDetector",_loc, false];
_trg setTriggerArea _area;
_trg setTriggerActivation ["ANYPLAYER", "PRESENT", true];
_trg setTriggerStatements [_cond, _act, _deAct];
_trg setTriggerInterval _int;