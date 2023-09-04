class XtdGearModels
{
	class CfgVehicles
	{
		// Backpacks ---------------------------
		class CGQC_Backpacks
		{
			options[] = {"Camo","Type"};
			label = "Backpacks";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {"TAN","MC","Cadpat", "RGR","Blk","WHT"};
			};
			class Type
			{
				label = "Type";
				alwaysSelectable = 1;
				values[] = {"Assault", "Kitbag", "Carryall", "Radiobag"};
			};
		};
	};
	class CfgWeapons
	{
		// Basic helmets ----------------------------
		class CGQC_Helmets
		{
			options[] = {"Type", "Camo"};
			label = "CGQC Helmets";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {"TAN", "MC", "Cadpat", "RGR", "Blk", "WHT", "GRY", "Coyote", "Matte", "Matte Green"};
			};
            class Type
			{
				label = "Type";
				alwaysSelectable = 1;
				values[] = {"Normal", "Medic"};
			};
		};
		// Tank helmets -----------------------------
		class CGQC_Tank_Helmets
		{
			options[] = {"Type"};
			label = "CGQC Tank Helmet";
            class Type
			{
				label = "Type";
				alwaysSelectable = 1;
				values[] = {"Basic", "Turcotte", "Audi", "Tremblay", "Comeau", "Genest", "Fréchette", "Laforest","Fortin","Pinard","Gaudreault","Cloutier"};
			};
		};
		// Uniforms -------------------------------
		class CGQC_Uniform
		{
			options[] = {"Camo"};
			label = "CGQC Uniform";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {"RGR", "TAN","MC","CADPAT","Blk","WHT"};
			};
		};
		// Vests -------------------------------
		class CGQC_ChestRig
		{
			options[] = {"Type", "Camo"};
			label = "CGQC Chest Rig";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {"TAN","MC","RGR","Blk","WHT"};
			};
            class Type
			{
				label = "Type";
				alwaysSelectable = 1;
				values[] = {"Rifleman","MG","Grenadier","Recce"};
			};
		};
		class CGQC_Pilotvest
		{
			options[] = {"Camo"};
			label = "CGQC Pilot Vest";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {"OD","Blk"};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgVehicles
	{
		class cgqc_pack_mk1_kitbag
		{
            model = "CGQC_Backpacks";
			Camo = "RGR";
			Type = "Kitbag";
        };
		class cgqc_pack_mk1_kitbag_desert
		{
            model = "CGQC_Backpacks";
			Camo = "TAN";
			Type = "Kitbag";
        };
		class cgqc_pack_mk1_kitbag_mcam
		{
            model = "CGQC_Backpacks";
			Camo = "MC";
			Type = "Kitbag";
        };
		class cgqc_pack_mk1_kitbag_cadpat
		{
            model = "CGQC_Backpacks";
			Camo = "Cadpat";
			Type = "Kitbag";
        };
		class cgqc_pack_mk1_kitbag_black
		{
            model = "CGQC_Backpacks";
			Camo = "Blk";
			Type = "Kitbag";
        };
		class cgqc_pack_mk1_kitbag_white
		{
            model = "CGQC_Backpacks";
			Camo = "WHT";
			Type = "Kitbag";
        };
		class cgqc_pack_mk1_assault
		{
            model = "CGQC_Backpacks";
			Camo = "RGR";
			Type = "Assault";
        };
		class cgqc_pack_mk1_assault_desert
		{
            model = "CGQC_Backpacks";
			Camo = "TAN";
			Type = "Assault";
        };
		class cgqc_pack_mk1_assault_mcam
		{
            model = "CGQC_Backpacks";
			Camo = "MC";
			Type = "Assault";
        };
		class cgqc_pack_mk1_assault_cadpat
		{
            model = "CGQC_Backpacks";
			Camo = "Cadpat";
			Type = "Assault";
        };
		class cgqc_pack_mk1_assault_black
		{
            model = "CGQC_Backpacks";
			Camo = "Blk";
			Type = "Assault";
        };
		class cgqc_pack_mk1_assault_white
		{
            model = "CGQC_Backpacks";
			Camo = "WHT";
			Type = "Assault";
        };
		class cgqc_pack_mk1_Radiobag
		{
            model = "CGQC_Backpacks";
			Camo = "RGR";
			Type = "Radiobag";
        };
		class cgqc_pack_mk1_Radiobag_desert
		{
            model = "CGQC_Backpacks";
			Camo = "TAN";
			Type = "Radiobag";
        };
		class cgqc_pack_mk1_Radiobag_mcam
		{
            model = "CGQC_Backpacks";
			Camo = "MC";
			Type = "Radiobag";
        };
		class cgqc_pack_mk1_Radiobag_cadpat
		{
            model = "CGQC_Backpacks";
			Camo = "Cadpat";
			Type = "Radiobag";
        };
		class cgqc_pack_mk1_Radiobag_black
		{
            model = "CGQC_Backpacks";
			Camo = "Blk";
			Type = "Radiobag";
        };
		class cgqc_pack_mk1_Radiobag_white
		{
            model = "CGQC_Backpacks";
			Camo = "WHT";
			Type = "Radiobag";
        };
		class cgqc_pack_mk1_carryall
		{
            model = "CGQC_Backpacks";
			Camo = "RGR";
			Type = "Carryall";
        };
		class cgqc_pack_mk1_carryall_desert
		{
            model = "CGQC_Backpacks";
			Camo = "TAN";
			Type = "Carryall";
        };
		class cgqc_pack_mk1_carryall_mcam
		{
            model = "CGQC_Backpacks";
			Camo = "MC";
			Type = "Carryall";
        };
		class cgqc_pack_mk1_carryall_cadpat
		{
            model = "CGQC_Backpacks";
			Camo = "Cadpat";
			Type = "Carryall";
        };
		class cgqc_pack_mk1_carryall_black
		{
            model = "CGQC_Backpacks";
			Camo = "Blk";
			Type = "Carryall";
        };
		class cgqc_pack_mk1_carryall_white
		{
            model = "CGQC_Backpacks";
			Camo = "WHT";
			Type = "Carryall";
        };
	};

    class CfgWeapons
    {
		// Basic Helmets -------------------------------------------------------------
		class cgqc_helmet_mk1
		{
            model = "CGQC_Helmets";
			Camo = "RGR";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_medic
		{
            model = "CGQC_Helmets";
			Camo = "RGR";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_black
		{
            model = "CGQC_Helmets";
			Camo = "Blk";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_black_medic
		{
            model = "CGQC_Helmets";
			Camo = "Blk";
			Type = "Medic";
        };
		class cgqc_helmet_mk1_white
		{
            model = "CGQC_Helmets";
			Camo = "WHT";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_white_medic
		{
            model = "CGQC_Helmets";
			Camo = "WHT";
			Type = "Medic";
        };
		class cgqc_helmet_mk1_desert
		{
            model = "CGQC_Helmets";
			Camo = "TAN";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_desert_medic
		{
            model = "CGQC_Helmets";
			Camo = "TAN";
			Type = "Medic";
        };
		class cgqc_helmet_mk1_mcam
		{
            model = "CGQC_Helmets";
			Camo = "MC";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_mcam_medic
		{
            model = "CGQC_Helmets";
			Camo = "MC";
			Type = "Medic";
        };
		class cgqc_helmet_mk1_cadpat
		{
            model = "CGQC_Helmets";
			Camo = "Cadpat";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_cadpat_medic
		{
            model = "CGQC_Helmets";
			Camo = "Cadpat";
			Type = "Medic";
        };
		class cgqc_helmet_mk1_f_gray
		{
            model = "CGQC_Helmets";
			Camo = "GRY";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_f_gray_medic
		{
            model = "CGQC_Helmets";
			Camo = "GRY";
			Type = "Medic";
        };
		class cgqc_helmet_mk1_f_coyote
		{
            model = "CGQC_Helmets";
			Camo = "Coyote";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_f_coyote_medic
		{
            model = "CGQC_Helmets";
			Camo = "Coyote";
			Type = "Medic";
        };
		class cgqc_helmet_mk1_f_black
		{
            model = "CGQC_Helmets";
			Camo = "Matte";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_f_black_medic
		{
            model = "CGQC_Helmets";
			Camo = "Matte";
			Type = "Medic";
        };
		class cgqc_helmet_mk1_f_green
		{
            model = "CGQC_Helmets";
			Camo = "Matte Green";
			Type = "Normal";
        };
		class cgqc_helmet_mk1_f_green_medic
		{
            model = "CGQC_Helmets";
			Camo = "Matte Green";
			Type = "Medic";
        };
		// Tank helmets ------------------------------------------------------------
		class cgqc_helmet_mk1_tank
		{
            model = "CGQC_Tank_Helmets";
			Type = "Basic";
        };
		class cgqc_helmet_mk1_tank_turcotte
		{
            model = "CGQC_Tank_Helmets";
			Type = "Turcotte";
        };
		class cgqc_helmet_mk1_tank_audi
		{
            model = "CGQC_Tank_Helmets";
			Type = "Audi";
        };
		class cgqc_helmet_mk1_tank_tremblay
		{
            model = "CGQC_Tank_Helmets";
			Type = "Tremblay";
        };
		class cgqc_helmet_mk1_tank_comeau
		{
            model = "CGQC_Tank_Helmets";
			Type = "Comeau";
        };
		class cgqc_helmet_mk1_tank_genest
		{
            model = "CGQC_Tank_Helmets";
			Type = "Genest";
        };
		class cgqc_helmet_mk1_tank_frechette
		{
            model = "CGQC_Tank_Helmets";
			Type = "Fréchette";
        };
		class cgqc_helmet_mk1_tank_laforest
		{
            model = "CGQC_Tank_Helmets";
			Type = "Laforest";
        };
		class cgqc_helmet_mk1_tank_fortin
		{
            model = "CGQC_Tank_Helmets";
			Type = "Fortin";
        };
		class cgqc_helmet_mk1_tank_pinard
		{
            model = "CGQC_Tank_Helmets";
			Type = "Pinard";
        };
		class cgqc_helmet_mk1_tank_cloutier
		{
            model = "CGQC_Tank_Helmets";
			Type = "Cloutier";
        };

		// Vests ------------------------------------------------------------------------------
        class cgqc_vest_mk1_tan
        {
            model = "CGQC_ChestRig";
			Camo = "TAN";
			Type = "Grenadier";
        };
        class cgqc_vest_mk1_tan_lr
        {
            model = "CGQC_ChestRig";
			Camo = "TAN";
			Type = "Recce";
        };
        class cgqc_vest_mk1_tan_rf
        {
            model = "CGQC_ChestRig";
			Camo = "TAN";
			Type = "Rifleman";
        };
        class cgqc_vest_mk1_tan_ar
        {
            model = "CGQC_ChestRig";
			Camo = "TAN";
			Type = "MG";
        };
		class cgqc_vest_mk1_mcam
        {
            model = "CGQC_ChestRig";
			Camo = "MC";
			Type = "Grenadier";
        };
		class cgqc_vest_mk1_mcam_lr
        {
            model = "CGQC_ChestRig";
			Camo = "MC";
			Type = "Recce";
        };
		class cgqc_vest_mk1_mcam_rf
        {
            model = "CGQC_ChestRig";
			Camo = "MC";
			Type = "Rifleman";
        };
		class cgqc_vest_mk1_mcam_ar
        {
            model = "CGQC_ChestRig";
			Camo = "MC";
			Type = "MG";
        };
		class cgqc_vest_mk1_cadpat
        {
            model = "CGQC_ChestRig";
			Camo = "RGR";
			Type = "Grenadier";
        };
		class cgqc_vest_mk1_cadpat_lr
        {
            model = "CGQC_ChestRig";
			Camo = "RGR";
			Type = "Recce";
        };
		class cgqc_vest_mk1_cadpat_rf
        {
            model = "CGQC_ChestRig";
			Camo = "RGR";
			Type = "Rifleman";
        };
		class cgqc_vest_mk1_cadpat_ar
        {
            model = "CGQC_ChestRig";
			Camo = "RGR";
			Type = "MG";
        };
		class cgqc_vest_mk1_black
        {
            model = "CGQC_ChestRig";
			Camo = "Blk";
			Type = "Grenadier";
        };
		class cgqc_vest_mk1_black_lr
        {
            model = "CGQC_ChestRig";
			Camo = "Blk";
			Type = "Recce";
        };
		class cgqc_vest_mk1_black_rf
        {
            model = "CGQC_ChestRig";
			Camo = "Blk";
			Type = "Rifleman";
        };
		class cgqc_vest_mk1_black_ar
        {
            model = "CGQC_ChestRig";
			Camo = "Blk";
			Type = "MG";
        };
		class cgqc_vest_mk1_white
        {
            model = "CGQC_ChestRig";
			Camo = "WHT";
			Type = "Grenadier";
        };
		class cgqc_vest_mk1_white_lr
        {
            model = "CGQC_ChestRig";
			Camo = "WHT";
			Type = "Recce";
        };
		class cgqc_vest_mk1_white_rf
        {
            model = "CGQC_ChestRig";
			Camo = "WHT";
			Type = "Rifleman";
        };
		class cgqc_vest_mk1_white_ar
        {
            model = "CGQC_ChestRig";
			Camo = "WHT";
			Type = "MG";
        };
		// Pilot vests
		class cgqc_vest_mk1_pilot
        {
            model = "CGQC_Pilotvest";
			Camo = "OD";
        };
		class cgqc_vest_mk1_pilot_black
        {
            model = "CGQC_Pilotvest";
			Camo = "Blk";
        };
    };
};
