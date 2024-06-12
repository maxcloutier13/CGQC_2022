[] spawn {
    // Wait until Core is finished initializing.
    //waitUntil {sleep 1;cgqc_player_rank_found};
    _version = "3.4";
    // Client-side code
    player setVariable ["cgqc_version_2023", _version, true]; // Set the client's mod version
};