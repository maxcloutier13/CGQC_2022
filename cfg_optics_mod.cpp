// Change Zeros and remove ranging from some optics
class ItemCore;

class OpticsModes;
class ACO;
class optic_lrps;

// == RHS ===============================================================================================
class rhsusf_acc_sniper_base;
class InventoryOpticsItem_Base_F;
class rhsusf_acc_ACOG : rhsusf_acc_sniper_base
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class elcan_scope
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class alternative_view
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class rhsusf_acc_ELCAN : rhsusf_acc_sniper_base
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class elcan_scope
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class alternative_view
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class rhsusf_acc_compm4 : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class ACO
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};
class rhsusf_acc_T1_high;
class rhsusf_acc_mrds : rhsusf_acc_T1_high
{
    class ItemInfo : ItemInfo
    {
        class OpticsModes : OpticsModes
        {
            class ACO : ACO
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class rhsusf_acc_su230_base : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class Elcan_x1
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Elcan_x4
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Elcan_iron
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

// == tier1 ===============================================================================================
class Tier1_LeupoldM3A_ADM_Desert : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class Snip
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Iron
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class Tier1_LeupoldM3A_ADM_T2_Desert : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class Snip
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class T2
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class Tier1_LeupoldM3A_Geissele_Desert : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class Snip
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Iron
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class Tier1_ANPVS10_Tan : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class Snip
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Iron
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class Tier1_Shortdot_ADM_Black : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Shortdot
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class Tier1_Shortdot_ADM_Black_CQB : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Shortdot
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class Tier1_ATACR18_ADM_Black : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class Scope
            {
                discreteDistance[] = {50};
                discreteDistanceInitIndex = 0;
            };
            class Nightforce
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class Tier1_LeupoldM3A_Geissele_Docter_Desert : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class Snip
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class T2
            {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class Tier1_MicroT1_Low_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_3xMag_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_3xMag_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Low_Desert : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_Desert : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_3xMag_Desert_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_3xMag_Desert_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_Riser_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_3xMag_Riser_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_3xMag_Riser_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_Riser_Desert : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_3xMag_Riser_Desert_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT1_Leap_3xMag_Riser_Desert_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT1
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Low_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_3xMag_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_3xMag_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Low_Tan : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Tan : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_3xMag_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_3xMag_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Desert_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Desert_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Riser_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_3xMag_Riser_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_3xMag_Riser_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Riser_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Riser_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Riser_Tan : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_3xMag_Riser_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_3xMag_Riser_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Riser_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Riser_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Riser_Desert_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_G33_Riser_Desert_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_3xMag_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_3xMag_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_Tan : ItemCore
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_3xMag_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_3xMag_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_TanBlack_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_TanBlack_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Desert_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Desert_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_Riser_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_3xMag_Riser_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_3xMag_Riser_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Riser_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Riser_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_Riser_Tan : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_3xMag_Riser_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_3xMag_Riser_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Riser_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Riser_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Riser_TanBlack_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Riser_TanBlack_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Riser_Desert_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_MicroT2_Leap_G33_Riser_Desert_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class MicroT2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_Low_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_Low_Tan : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_Tan : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_TanBlack_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_TanBlack_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_Riser_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_Riser_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_Riser_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_Riser_Tan : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_Riser_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_Riser_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_Riser_TanBlack_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCD_G33_Riser_TanBlack_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_Low_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_Low_Tan : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_Tan : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_TanBlack_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_TanBlack_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_Riser_Black : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_Riser_Black_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_Riser_Black_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_Riser_Tan : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_Riser_Tan_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_Riser_Tan_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_Riser_TanBlack_Up : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};
class Tier1_Romeo4T_BCQ_G33_Riser_TanBlack_Down : ItemCore
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Romeo4T
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_ATACR18_ADM_T1_Black : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {50};
                discreteDistanceInitIndex = 0;
            };
            class T1
            {
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen2_16 : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Razor
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen2_16_CQB : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Razor
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen2_16_ADM : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Razor
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen2_16_Geissele : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Razor
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen2_16_Geissele_Docter : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Docter
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen3_110_ADM : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Razor
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen3_110_ADM_CQB : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Razor
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen3_110_ADM_T2 : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class T2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen3_110_ADM_T2_CQB : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class T2
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen3_110_Geissele : optic_lrps
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Razor
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen3_110_Geissele_CQB : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Razor
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen3_110_Geissele_Docter : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Docter
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Razor_Gen3_110_Geissele_Docter_CQB : optic_lrps
{

    class ItemInfo : InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class Scope
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
            class Docter
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Elcan_156_C1_FDE_2D: optic_lrps
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{

			class OpticsModes
			{
				class Scope
				{

					discreteDistance[] = {100};
					discreteInitIndex = 0;

				};
				class Iron
				{

					distanceZoomMin = 100;
					distanceZoomMax = 100;

				};
			};
		};
	};

class Tier1_Elcan_156_C2_FDE_2D : optic_lrps
{
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class Scope
            {
                discreteDistance[] = {100};
                discreteInitIndex = 0;
            };
            class Iron
            {
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};

class Tier1_Elcan_156_C1_FDE: optic_lrps
{

    class ItemInfo: InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class CX5455_1x
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;

            };
            class CX5455_6x
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;

            };
            class Iron
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;

            };
        };
    };
};

class Tier1_Elcan_156_C2_FDE: optic_lrps
{

    class ItemInfo: InventoryOpticsItem_Base_F
    {

        class OpticsModes
        {
            class CX5456_1x
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;

            };
            class CX5456_6x
            {

                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;

            };
            class Iron
            {

                distanceZoomMin = 100;
                distanceZoomMax = 100;

            };
        };
    };
};



class Tier1_Shortdot_Geissele_Black : optic_lrps
{

	class ItemInfo : InventoryOpticsItem_Base_F
	{

		class OpticsModes
		{
			class Scope
			{

				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
			};
			class Shortdot
			{

				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
		};
	};
};

class Tier1_Shortdot_Geissele_Black_CQB : optic_lrps
{

	class ItemInfo : InventoryOpticsItem_Base_F
	{

		class OpticsModes
		{
			class Scope
			{

				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
        	};
			class Shortdot
			{

				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
		};
	};
};

class Tier1_Shortdot_Geissele_Docter_Black : optic_lrps
{

	class ItemInfo : InventoryOpticsItem_Base_F
	{

		class OpticsModes
		{
			class Scope
			{

				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
    		};
			class Docter
			{

				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
		};
	};
};

class Tier1_Shortdot_Geissele_Docter_Black_CQB : optic_lrps
{

	class ItemInfo : InventoryOpticsItem_Base_F
	{

		class OpticsModes
		{
			class Scope
			{

				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
            };
			class Docter
			{

				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
		};
	};
};

class Tier1_ATACR18_Geissele_Black : optic_lrps
{

	class ItemInfo : InventoryOpticsItem_Base_F
	{

		class OpticsModes
		{
			class Scope
			{
                discreteDistance[] = {100};
			    discreteDistanceInitIndex = 0;
			};
			class Nightforce
			{

				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
		};
	};
};

class Tier1_ATACR18_Geissele_Docter_Black : optic_lrps
{

	class ItemInfo : InventoryOpticsItem_Base_F
	{

		class OpticsModes
		{
			class Scope
			{

				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
			};
			class Docter
			{

				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
		};
	};
};
