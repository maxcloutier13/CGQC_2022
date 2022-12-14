class Extended_PreInit_EventHandlers
{
    class CGQC_2022
    {
        // This will be executed once in 3DEN, main menu and before briefing has started for every mission
        // init = QUOTE(call COMPILE_FILE(XEH_preInit));
        // Load the arsenal categories
        init = "execVM '\cgqc_2022\factions\pre_init_player.sqf'";
    };
};

class Extended_PostInit_EventHandlers
{
    class CGQC_2022
    {
        // This will be executed once for each mission, once the mission has started       
        // init = QUOTE(call COMPILE_FILE(XEH_postInit));
        // Custom init
        //init = "execVM '\cgqc_2022\factions\init_player.sqf';";
        init = "execVM '\cgqc_2022\factions\init_player.sqf'";
    };
};

class Extended_PreStart_EventHandlers
{
    class CGQC_2022
    {
        // This will be executed once before entering the main menu.
        // init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};