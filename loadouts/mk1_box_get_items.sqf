_item = _this select 0;

switch (_item)
do
{
	
	case "343":	{
		player addItem "ACRE_PRC343";
		hintSilent format ["Item: %1", _item];
		sleep 3;
	};
	case "152":	{
		player addItem "ACRE_PRC152";
		hintSilent format ["Item: %1", _item];
		sleep 3;
	};
	case "earplugs": {
		player addItemToUniform "ACE_EarPlugs";
		hintSilent format ["Item: %1", _item];
		sleep 3;
	};
	default	{
		hintSilent "woops";
		sleep 3;
	};
};








