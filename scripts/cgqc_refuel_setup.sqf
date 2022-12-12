_object = _this select 0;
_type = _this select 1;

switch (_type) do {
	case 0:	{
		// Setup trigger
        private _loc = _object select 0;
        private _area = [6.8, 6.8, 0.00131226, true];
        private _cond = "this";
        private _act = "cgqc_flag_supply = true";
        private _deAct = "cgqc_flag_supply = false";
        private _int = 2;

        // Create trigger
        _trg = createTrigger ["EmptyDetector",_loc, false];
        _trg setTriggerArea _area;
        _trg setTriggerActivation ["ANYPLAYER", "PRESENT", true];
        _trg setTriggerStatements [_cond, _act, _deAct];
        _trg setTriggerInterval _int;
	};
    case 1:	{
		// Setup trigger
        private _loc = _object select 0;
        private _area = [6.8, 6.8, 0.00131226, true];
        private _cond = "this";
        private _act = "cgqc_flag_supply_rapide = true";
        private _deAct = "cgqc_flag_supply_rapide = false";
        private _int = 2;

        // Create trigger
        _trg = createTrigger ["EmptyDetector",_loc, false];
        _trg setTriggerArea _area;
        _trg setTriggerActivation ["ANYPLAYER", "PRESENT", true];
        _trg setTriggerStatements [_cond, _act, _deAct];
        _trg setTriggerInterval _int;
	};
    default
	{
		hintc "cgqc_refuel_setup fail";
	};
};