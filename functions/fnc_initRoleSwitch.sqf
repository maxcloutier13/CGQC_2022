waitUntil {!isNil "cgqc_start_postInitClient_done"};
waitUntil {cgqc_start_postInitClient_done};
_type = _this select 0;
_section = _this select 1;
_auRepos = _this select 2;
[_type, _section, _auRepos] execVM "\CGQC_2022\loadouts\mk2_role_switch.sqf";
