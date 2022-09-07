execVM "\CGQC_2022\loadouts\transition.sqf";
sleep 2;
player setUnitTrait ["Medic", true];
player setUnitTrait ["engineer", false];
player setUnitTrait ["explosiveSpecialist", false];
hint "Tu es medic"