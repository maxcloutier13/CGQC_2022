execVM "\CGQC_2022\scripts\transition.sqf";
sleep 2;
player setUnitTrait ["Medic", false];
player setUnitTrait ["engineer", true];
player setUnitTrait ["explosiveSpecialist", true];
hint "Tu es EOD"