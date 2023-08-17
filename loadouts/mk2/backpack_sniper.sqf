// Sniper backpack 

//Add some items to uniform instead 
player addItem "ACE_M26_Clacker";
player addItem "ACE_ATragMX";
player addItem "ACE_Kestrel4500";

player addItemToBackpack "ACE_Tripod";
player addItemToBackpack "ACE_DefusalKit";
player addItemToBackpack "rhsusf_m112_mag";
player addItemToBackpack "rhsusf_mine_m14_mag";
player addItemToBackpack "rhsusf_mine_m14_mag";
player addItemToBackpack "tsp_stickCharge_auto_mag";
player addItemToBackpack "tsp_popperCharge_auto_mag";
player addItemToBackpack "tsp_popperCharge_auto_mag";
if (!cgqc_config_sidearm) then {
    player addItemToBackpack cgqc_config_sidearm_alternate;
    player addItemToBackpack cgqc_config_sidearm_alternate;
    player addItemToBackpack cgqc_config_sidearm_alternate;
};