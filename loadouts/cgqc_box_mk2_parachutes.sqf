_crate = _this select 0;

waitUntil {sleep 1; cgqc_mk2_arsenal_init_done};
if (!isNil "_crate") then {
    // Jumping uniform 
    _action = [ "menu_mk2_camo_para_std", "Parachutiste", "\CGQC\textures\cgqc_ace_para", {["para", false] execVM "\CGQC_2022\loadouts\mk1_camo_switch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions"], _action ] call ace_interact_menu_fnc_addActionToObject;
}; 