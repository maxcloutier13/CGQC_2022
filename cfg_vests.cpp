class Vest_NoCamo_Base;
class V_EOD_base_F;
class V_EOD_blue_F: V_EOD_base_F
{
    class ItemInfo;
};
class V_PlateCarrier1_rgr: Vest_NoCamo_Base
{
    class ItemInfo;
};
class V_mas_can_PlateCarrier1_rgr: V_PlateCarrier1_rgr
{
    class ItemInfo: ItemInfo
    {
        //uniformModel = "\mas_can_lite\vest\mas_plate_carrier_OP";
        //containerClass = "Supply140";
        //mass = 40;
        // hiddenSelections[] = {"camo","Camo1","Camo2","CamoB"};
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName = "HitChest";
                armor = 20; // original = 28
                passThrough = 0.2;
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 20;
                passThrough = 0.2;
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 20;
                passThrough = 0.4;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.4;
            };
        };
    };
};
class V_mas_can_PlateCarrierAR_rgr: V_mas_can_PlateCarrier1_rgr
{
    class ItemInfo: ItemInfo
    {
        //uniformModel = "\mas_can_lite\vest\mas_plate_carrier_OP";
        //containerClass = "Supply140";
        //mass = 40;
        // hiddenSelections[] = {"camo","Camo1","Camo2","CamoB"};
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName = "HitChest";
                armor = 20; // original = 28
                passThrough = 0.2;
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 20;
                passThrough = 0.2;
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 20;
                passThrough = 0.4;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.4;
            };
        };
    };
};
class V_mas_can_PlateCarrierLR_rgr: V_mas_can_PlateCarrier1_rgr
{
    class ItemInfo: ItemInfo
    {
        //uniformModel = "\mas_can_lite\vest\mas_plate_carrier_OP";
        //containerClass = "Supply140";
        //mass = 40;
        // hiddenSelections[] = {"camo","Camo1","Camo2","CamoB"};
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName = "HitChest";
                armor = 20; // original = 28
                passThrough = 0.2;
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 20;
                passThrough = 0.2;
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 20;
                passThrough = 0.4;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.4;
            };
        };
    };
};
class V_mas_can_PlateCarrierRF_rgr: V_mas_can_PlateCarrier1_rgr
{
    class ItemInfo: ItemInfo
    {
        //uniformModel = "\mas_can_lite\vest\mas_plate_carrier_OP";
        //containerClass = "Supply140";
        //mass = 40;
        // hiddenSelections[] = {"camo","Camo1","Camo2","CamoB"};
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName = "HitChest";
                armor = 20; // original = 28
                passThrough = 0.2;
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 20;
                passThrough = 0.2;
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 20;
                passThrough = 0.4;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.4;
            };
        };
    };
};

class V_mas_can_PlateCarrierLR_tan;
class V_mas_can_PlateCarrierRF_tan;
class V_mas_can_PlateCarrierAR_tan;
class V_mas_can_PlateCarrier1_tan;
class V_mas_can_PlateCarrier1_green;
class V_mas_can_PlateCarrierLR_green;
class V_mas_can_PlateCarrierRF_green;
class V_mas_can_PlateCarrierAR_green;
class V_mas_can_PlateCarrier1_swat;
class V_mas_can_PlateCarrierLR_swat;
class V_mas_can_PlateCarrierRF_swat;
class V_mas_can_PlateCarrierAR_swat;
class V_mas_can_PlateCarrier1_wint;
class V_mas_can_PlateCarrierLR_wint;
class V_mas_can_PlateCarrierRF_wint;
class V_mas_can_PlateCarrierAR_wint;
class rhsgref_otv_khaki;
class V_Rangemaster_belt;
class V_mas_can_RebreatherB;

// Training belt
class cgqc_vest_mk1_belt : V_Rangemaster_belt
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_belt";
    displayName = "CGQC Ceinture";
};
// Base/training
class cgqc_vest_mk1_tan : V_mas_can_PlateCarrier1_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_tan";
    displayName = "CGQC Veste";

};
class cgqc_vest_mk1_tan_lr : V_mas_can_PlateCarrierLR_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_tan_lr";
    displayName = "CGQC Veste LR";

};
class cgqc_vest_mk1_tan_rf : V_mas_can_PlateCarrierRF_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_tan_rf";
    displayName = "CGQC Veste RF";

};
class cgqc_vest_mk1_tan_ar : V_mas_can_PlateCarrierAR_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_tan_ar";
    displayName = "CGQC Veste AR";

};
// Desert
class cgqc_vest_mk1_desert : cgqc_vest_mk1_tan
{
    _generalMacro = "cgqc_vest_mk1_desert";
    displayName = "CGQC Veste - Desert";
    scope = 1;
};
class cgqc_vest_mk1_desert_lr : cgqc_vest_mk1_tan_lr
{
    _generalMacro = "cgqc_vest_mk1_desert_lr";
    displayName = "CGQC Veste LR - Desert";
    scope = 1;
};
class cgqc_vest_mk1_desert_rf : cgqc_vest_mk1_tan_rf
{
    _generalMacro = "cgqc_vest_mk1_desert_rf";
    displayName = "CGQC Veste RF - Desert";
    scope = 1;
};
class cgqc_vest_mk1_desert_ar : cgqc_vest_mk1_tan_ar
{
    _generalMacro = "cgqc_vest_mk1_desert_ar";
    displayName = "CGQC Veste AR - Desert";
    scope = 1;
};
// Multicam
class cgqc_vest_mk1_mcam : V_mas_can_PlateCarrier1_rgr
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_mcam";
    displayName = "CGQC Veste - Multicam";

};
class cgqc_vest_mk1_mcam_lr : V_mas_can_PlateCarrierLR_rgr
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_mcam_lr";
    displayName = "CGQC Veste LR - Multicam";

};
class cgqc_vest_mk1_mcam_rf : V_mas_can_PlateCarrierRF_rgr
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_mcam_rf";
    displayName = "CGQC Veste RF - Multicam";

};
class cgqc_vest_mk1_mcam_ar : V_mas_can_PlateCarrierAR_rgr
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_mcam_ar";
    displayName = "CGQC Veste AR - Multicam";

};
// Woodland
class cgqc_vest_mk1_cadpat : V_mas_can_PlateCarrier1_green
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_cadpat";
    displayName = "CGQC Veste - Cadpat";

};
class cgqc_vest_mk1_cadpat_lr : V_mas_can_PlateCarrierLR_green
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_cadpat_lr";
    displayName = "CGQC Veste LR - Cadpat";

};
class cgqc_vest_mk1_cadpat_rf : V_mas_can_PlateCarrierRF_green
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_cadpat_rf";
    displayName = "CGQC Veste RF - Cadpat";

};
class cgqc_vest_mk1_cadpat_ar : V_mas_can_PlateCarrierAR_green
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_cadpat_ar";
    displayName = "CGQC Veste AR - Cadpat";

};
// Black
class cgqc_vest_mk1_black : V_mas_can_PlateCarrier1_swat
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_black";
    displayName = "CGQC Veste - Black";

};
class cgqc_vest_mk1_black_lr : V_mas_can_PlateCarrierLR_swat
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_black_lr";
    displayName = "CGQC Veste LR - Black";

};
class cgqc_vest_mk1_black_rf : V_mas_can_PlateCarrierRF_swat
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_black_rf";
    displayName = "CGQC Veste RF - Black";

};
class cgqc_vest_mk1_black_ar : V_mas_can_PlateCarrierAR_swat
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_black_ar";
    displayName = "CGQC Veste AR - Black";

};
// Winter
class cgqc_vest_mk1_white : V_mas_can_PlateCarrier1_wint
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_white";
    displayName = "CGQC Veste - White";

};
class cgqc_vest_mk1_white_lr : V_mas_can_PlateCarrierLR_wint
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_white_lr";
    displayName = "CGQC Veste LR - White";

};
class cgqc_vest_mk1_white_rf : V_mas_can_PlateCarrierRF_wint
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_white_rf";
    displayName = "CGQC Veste RF - White";

};
class cgqc_vest_mk1_white_ar : V_mas_can_PlateCarrierAR_wint
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_white_ar";
    displayName = "CGQC Veste AR - White";

};

// Pilot
class V_Pocketed_black_F;
class cgqc_vest_mk1_pilot_black : V_Pocketed_black_F
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_pilot_black";
    displayName = "CGQC Veste Pilote (Noir)";
};
class cgqc_vest_mk1_pilot : cgqc_vest_mk1_pilot_black
{
    scope = 1;
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_pilot";
    displayName = "CGQC Veste Pilote (Vert) - deprecated";
};
// Tank driver
class cgqc_vest_mk1_driver : rhsgref_otv_khaki
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_driver";
    displayName = "CGQC Veste Driver (Green)";
    hiddenSelectionsTextures[] = {"\cgqc_2022\vests\cgqc_vest_tank_green.paa"};
};
//Diver Rebreather
class cgqc_vest_mk1_diver : V_mas_can_RebreatherB
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_diver";
    displayName = "CGQC Rebreather";
    //hiddenSelectionsTextures[] = {"\cgqc_2022\vests\cgqc_vest_tank_green.paa"};
};

// Kidnapping vest
class cgqc_vest_kidnapping: V_EOD_blue_F
{
    author = "silent1";
    _generalMacro = "cgqc_vest_kidnapping";
    displayName = "CGQC HVT/VIP Vest";
    class ItemInfo: ItemInfo
    {
        uniformModel = "\A3\Characters_F_Orange\Vests\V_EOD_vest_F.p3d";
        hiddenSelections[] = {"Camo","Camo2"};
        containerClass = "Supply30";
        mass = 5;
        class HitpointsProtectionInfo
        {
            class Neck
            {
                hitpointName = "HitNeck";
                armor = 20;
                passThrough = 0.5;
            };
            class Arms
            {
                hitpointName = "HitArms";
                armor = 20;
                passThrough = 0.5;
            };
            class Chest
            {
                hitpointName = "HitChest";
                armor = 80;
                passThrough = 0.6;
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 80;
                passThrough = 0.6;
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 80;
                passThrough = 0.3;
            };
            class Pelvis
            {
                hitpointName = "HitPelvis";
                armor = 20;
                passThrough = 0.3;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.6;
            };
        };
    };
};