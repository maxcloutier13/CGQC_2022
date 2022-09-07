execVM "\CGQC_2022\loadouts\transition.sqf";
sleep 2;
player setUnitTrait ["Medic", false];
player setUnitTrait ["engineer", true];
player setUnitTrait ["explosiveSpecialist", false];
hint "Tu es ingénieur"