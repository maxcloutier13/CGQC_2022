_type = _this select 0;

switch (_type) do {
    case "stash":
    {
        cgqc_perk_player_stash = "cgqc_box_mk2_stash" createVehicle (position player);
        cgqc_perk_player_stash_on = true;
    };
    case "del_stash":
    {
        deleteVehicle cgqc_perk_player_stash;
        cgqc_perk_player_stash_on = false;
    };
};