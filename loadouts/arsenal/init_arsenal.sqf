// Load tout les arrays pour populer l'arsenal
[] spawn {
    // === Rang 1 - Std - Rifleman/Grenadier ================================================================
    // Uniformes et clothing ---------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_uniforms.sqf";
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_helmets.sqf";
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_face.sqf";
    // Items -------------------------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_items.sqf";
    // Explosives --------------------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_explosives.sqf";
    // Guns --------------------------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_guns.sqf";
    // Gun accs ----------------------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_scopes.sqf";
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_lasers.sqf";
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_silencers.sqf";
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_bipods.sqf";

    cgqc_mk2_arsenal_1 = (
        cgqc_mk2_arsenal_1_uniforms + 
        cgqc_mk2_arsenal_1_helmets +
        cgqc_mk2_arsenal_1_face +
        cgqc_mk2_arsenal_1_items +
        cgqc_mk2_arsenal_1_explosives +
        cgqc_mk2_arsenal_1_guns +
        cgqc_mk2_arsenal_1_scopes +
        cgqc_mk2_arsenal_1_lasers +
        cgqc_mk2_arsenal_1_silencers +
        cgqc_mk2_arsenal_1_bipods
    );
    // === Rang 2 - Cpl - AT/MG ================================================================
    // Guns --------------------------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\arsenal_rank2.sqf";
    cgqc_mk2_arsenal_2 = (
        cgqc_mk2_arsenal_1 +
        cgqc_mk2_arsenal_rank2
    );
    // Rang 3 - CplC - Spécialiste
    #include "\cgqc_2022\loadouts\arsenal\arsenal_rank3.sqf";
    cgqc_mk2_arsenal_3 = (
        cgqc_mk2_arsenal_2 +
        cgqc_mk2_arsenal_rank3
    );
    // Rang 4 - Sgt - Recon/Centaure
    #include "\cgqc_2022\loadouts\arsenal\arsenal_rank4.sqf";
    cgqc_mk2_arsenal_4 = (
        cgqc_mk2_arsenal_3 +
        cgqc_mk2_arsenal_rank4
    );
    // Rang 5 - Adju - TL/Griffon
    #include "\cgqc_2022\loadouts\arsenal\arsenal_rank5.sqf";
    cgqc_mk2_arsenal_5 = (
        cgqc_mk2_arsenal_4 +
        cgqc_mk2_arsenal_rank5
    );
    
    // Arsenal init done
    cgqc_mk2_arsenal_init_done = true;
};