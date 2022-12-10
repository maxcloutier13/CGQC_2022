// Load tout les arrays pour populer l'arsenal

[] spawn {

    // === Rang 1 - Std - Rifleman/Grenadier ================================================================
    // Uniformes et clothing ---------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_uniforms.hpp";
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_helmets.hpp";
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_face.hpp";
    // Items -------------------------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_items.hpp";
    // Explosives --------------------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_explosives.hpp";
    // Guns --------------------------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_guns.hpp";
    // Gun accs ----------------------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_scopes.hpp";
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_lasers.hpp";
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_silencers.hpp";
    #include "\cgqc_2022\loadouts\arsenal\1\arsenal_bipods.hpp";

    // === Rang 2 - Cpl - AT/MG ================================================================
    // Guns --------------------------------------------------------
    #include "\cgqc_2022\loadouts\arsenal\2\arsenal_guns.hpp";

    // - Basic arsenal ----------------------------------------------------
    // Contiens tout les items pour les soldats de base
    cgqc_mk2_arsenal_list = (
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
    // Rang 2 - Cpl - AT/MG
    if (cgqc_player_rank > 1 ) then {
        //hint "Rank > 1: Cpl";
        cgqc_mk2_arsenal_list = (
            cgqc_mk2_arsenal_list +
            cgqc_mk2_arsenal_2_guns
        );
    };
    // Rang 3 - CplC - Spécialiste
    // Rang 4 - Sgt - Recon/Centaure
    // Rang 5 - Adju - TL/Griffon
    // Rang 6 - AdjuM - HQ

    cgqc_mk2_arsenal_init_done = true;
};