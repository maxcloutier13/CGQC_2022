// JTAC backpack 
// === Stuff ================================
player addItemToBackpack "Rev_darter_item";
player addItemToBackpack "ACE_Tripod";
player addItemToBackpack "ACE_UAVBattery";
player addItemToBackpack "ACE_ATragMX";
player addItemToBackpack "ACE_Kestrel4500";

// === Explosives ================================
player addItemToBackpack "ACE_DefusalKit";
player addItemToBackpack "rhsusf_m112_mag";
player addItemToBackpack "rhsusf_m112_mag";
for "_i" from 1 to 4 do {
	player addItemToBackpack "rhsusf_mine_m14_mag";
};
player addItemToBackpack "KNB_PanelGreen";

// === Comms =======================================
player removeItem "ItemAndroid"; //Remove default cell
player addItemToBackpack "ItemcTab";
player addItemToBackpack "tsp_stickCharge_auto_mag";
player addItemToBackpack "tsp_stickCharge_auto_mag";
player addItemToBackpack "tsp_popperCharge_auto_mag";
player addItemToBackpack "tsp_popperCharge_auto_mag";