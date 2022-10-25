class ace_medical_treatment_actions 
{
    class Morphine;
    class FF_Painkiller: Morphine 
    {
        allowedSelections[] = {"Head","LeftArm", "RightArm", "LeftLeg", "RightLeg", "Body"};
    };
};

//Change names of the portable mortar for simplicity
class avm224_W_M224_mortar_carry
{
    displayName = "CGQC - M224 60mm Mortar";
};

class avm224_M_6Rnd_60mm_SMOKE_csw
{
    displayName = "CGQC M722 60mm WP Charge 1";
    displayNameShort = "WP Chg:1";
};

class avm224_M_6Rnd_60mm_ILLUM_IR_csw
{
    displayName = "CGQC - 60mm Flare IR";
    displayNameShort = "Flare IR";
};
class avm224_M_6Rnd_60mm_ILLUM_csw
{
    displayName = "CGQC - 60mm Flare";
    displayNameShort = "Flare";
};
class avm224_M_6Rnd_60mm_HE_0_csw
{
    displayName = "CGQC - 60mm HE Charge 0";
    displayNameShort = "HE Chg:0";
};
class avm224_M_6Rnd_60mm_HE_csw
{
    displayName = "CGQC - 60mm HE Charge 1";
    displayNameShort = "HE Chg:1";
};