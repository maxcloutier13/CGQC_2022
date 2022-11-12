execVM "\CGQC_2022\scripts\transition.sqf";
sleep 2;
//player setUnitTrait ["Medic", false];
player setUnitTrait ["engineer", true];
//player setUnitTrait ["explosiveSpecialist", false];
hint "Tu es ingénieur"