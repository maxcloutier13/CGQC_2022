_arguments = _this select 3;
_style = _arguments select 0;

switch _style
do{
	case 1:
	{
		klpq_musicRadio_radioThemes = ["buildup"];
	};
	case 2:
	{
		klpq_musicRadio_radioThemes = ["funstuff"];
	};
	default
	{
		klpq_musicRadio_radioThemes = ["relax"];
	};
};


