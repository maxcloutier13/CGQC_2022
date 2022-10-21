
class V_mas_can_PlateCarrierLR_tan;
class V_mas_can_PlateCarrierRF_tan;
class V_mas_can_PlateCarrierAR_tan;
class V_mas_can_PlateCarrier1_rgr;
class V_mas_can_PlateCarrierLR_rgr;
class V_mas_can_PlateCarrierRF_rgr;
class V_mas_can_PlateCarrierAR_rgr;
class V_mas_can_PlateCarrier1_tan : V_mas_can_PlateCarrier1_rgr
{
    class ItemInfo;
};
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
class UK3CB_V_Pilot_Vest;
class UK3CB_V_Pilot_Vest_Black;
class rhsgref_otv_khaki;
class UK3CB_TKA_B_V_GA_LITE_TAN;
class V_Rangemaster_belt;



// Training belt
class cgqc_vest_mk1_belt : V_Rangemaster_belt
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_belt";
    displayName = "CGQC Ceinture mk1";
};
// Base/training
class cgqc_vest_mk1_tan : V_mas_can_PlateCarrier1_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_tan";
    displayName = "CGQC Veste mk1";
    class ItemInfo : ItemInfo
    {
        mass = 40;
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName = "HitChest";
                armor = 28; // original = 28
                passThrough = 0.1;
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 28;
                passThrough = 0.1;
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 28;
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
class cgqc_vest_mk1_tan_lr : V_mas_can_PlateCarrierLR_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_tan_lr";
    displayName = "CGQC Veste mk1 LR";
 
};
class cgqc_vest_mk1_tan_rf : V_mas_can_PlateCarrierRF_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_tan_rf";
    displayName = "CGQC Veste mk1 RF";
 
};
class cgqc_vest_mk1_tan_ar : V_mas_can_PlateCarrierAR_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_tan_ar";
    displayName = "CGQC Veste mk1 AR";
 
};
// Desert
class cgqc_vest_mk1_desert : cgqc_vest_mk1_tan
{
    _generalMacro = "cgqc_vest_mk1_desert";
    displayName = "CGQC Veste mk1 - Desert";
};
class cgqc_vest_mk1_desert_lr : cgqc_vest_mk1_tan_lr
{
    _generalMacro = "cgqc_vest_mk1_desert_lr";
    displayName = "CGQC Veste mk1 LR - Desert";
};
class cgqc_vest_mk1_desert_rf : cgqc_vest_mk1_tan_rf
{
    _generalMacro = "cgqc_vest_mk1_desert_rf";
    displayName = "CGQC Veste mk1 RF - Desert";
};
class cgqc_vest_mk1_desert_ar : cgqc_vest_mk1_tan_ar
{
    _generalMacro = "cgqc_vest_mk1_desert_ar";
    displayName = "CGQC Veste mk1 AR - Desert";
};
// Multicam
class cgqc_vest_mk1_mcam : V_mas_can_PlateCarrier1_rgr
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_mcam";
    displayName = "CGQC Veste mk1 - Multicam";
 
};
class cgqc_vest_mk1_mcam_lr : V_mas_can_PlateCarrierLR_rgr
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_mcam_lr";
    displayName = "CGQC Veste mk1 LR - Multicam";
};
class cgqc_vest_mk1_mcam_rf : V_mas_can_PlateCarrierRF_rgr
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_mcam_rf";
    displayName = "CGQC Veste mk1 RF - Multicam";
 
};
class cgqc_vest_mk1_mcam_ar : V_mas_can_PlateCarrierAR_rgr
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_mcam_ar";
    displayName = "CGQC Veste mk1 AR - Multicam";
 
};
// Woodland
class cgqc_vest_mk1_cadpat : V_mas_can_PlateCarrier1_green
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_cadpat";
    displayName = "CGQC Veste mk1 - Cadpat";
 
};
class cgqc_vest_mk1_cadpat_lr : V_mas_can_PlateCarrierLR_green
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_cadpat_lr";
    displayName = "CGQC Veste mk1 LR - Cadpat";
 
};
class cgqc_vest_mk1_cadpat_rf : V_mas_can_PlateCarrierRF_green
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_cadpat_rf";
    displayName = "CGQC Veste mk1 RF - Cadpat";
 
};
class cgqc_vest_mk1_cadpat_ar : V_mas_can_PlateCarrierAR_green
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_cadpat_ar";
    displayName = "CGQC Veste mk1 AR - Cadpat";
 
};
// Black
class cgqc_vest_mk1_black : V_mas_can_PlateCarrier1_swat
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_black";
    displayName = "CGQC Veste mk1 - Black";
 
};
class cgqc_vest_mk1_black_lr : V_mas_can_PlateCarrierLR_swat
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_black_lr";
    displayName = "CGQC Veste mk1 LR - Black";
 
};
class cgqc_vest_mk1_black_rf : V_mas_can_PlateCarrierRF_swat
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_black_rf";
    displayName = "CGQC Veste mk1 RF - Black";
 
};
class cgqc_vest_mk1_black_ar : V_mas_can_PlateCarrierAR_swat
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_black_ar";
    displayName = "CGQC Veste mk1 AR - Black";
 
};
// Winter
class cgqc_vest_mk1_white : V_mas_can_PlateCarrier1_wint
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_white";
    displayName = "CGQC Veste mk1 - White";
 
};
class cgqc_vest_mk1_white_lr : V_mas_can_PlateCarrierLR_wint
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_white_lr";
    displayName = "CGQC Veste mk1 LR - White";
 
};
class cgqc_vest_mk1_white_rf : V_mas_can_PlateCarrierRF_wint
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_white_rf";
    displayName = "CGQC Veste mk1 RF - White";
 
};
class cgqc_vest_mk1_white_ar : V_mas_can_PlateCarrierAR_wint
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_white_ar";
    displayName = "CGQC Veste mk1 AR - White";
 
};
// Pilot
class cgqc_vest_mk1_pilot : UK3CB_V_Pilot_Vest
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_pilot";
    displayName = "CGQC Veste mk1 Pilote (Vert)";
};
class cgqc_vest_mk1_pilot_black : UK3CB_V_Pilot_Vest_Black
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_pilot_black";
    displayName = "CGQC Veste mk1 Pilote (Noir)";
};
// Tank driver
class cgqc_vest_mk1_driver : rhsgref_otv_khaki
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_driver";
    displayName = "CGQC Veste mk1 Driver (Green)";
    hiddenSelectionsTextures[] = {"\cgqc_2022\vests\cgqc_vest_tank_green.paa"};

};

// Vest settings test
// Original
class cgqc_vest_test1 : cgqc_vest_mk1_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_test1_og";
    displayName = "CGQC Veste test 1 - 28 (OG)";
    class ItemInfo :ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName = "HitChest";
                armor = 28; // original = 28
                passThrough = 0.1;
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 28;
                passThrough = 0.1;
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 28;
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
class cgqc_vest_test2 : cgqc_vest_mk1_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_test2_og";
    displayName = "CGQC Veste test 2 - 20";
    class ItemInfo :ItemInfo
    {
        mass = 40;
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
class cgqc_vest_test3 : cgqc_vest_mk1_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_tan";
    displayName = "CGQC Veste test 3 - 20+pass";
    class ItemInfo : ItemInfo
    {
        mass = 40;
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName = "HitChest";
                armor = 20; // original = 28
                passThrough = 0.3;
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 20;
                passThrough = 0.3;
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
class cgqc_vest_test4 : cgqc_vest_mk1_tan
{
    author = "silent1";
    _generalMacro = "cgqc_vest_mk1_tan";
    displayName = "CGQC Veste test 4 - 16 (Vanilla)";

    class ItemInfo : ItemInfo
    {
        mass = 40;
        class HitpointsProtectionInfo
        {
             class Chest
            {
                hitpointName = "HitChest";
                armor = 16; // original = 28
                passThrough = 0.3;
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 16; // original = 28
                passThrough = 0.3;
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 16; // original = 28
                passThrough = 0.3;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
    };
};


