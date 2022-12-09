// Fonction: Find zeus
//[player] call myTag_fnc_myFunction;

_unit = param [0, objNull, [objNull]];
// Check that Zeus has been assigned to unit
if (isNull (getAssignedCuratorLogic _unit)) then {
	return false;
}else{
	return true;
};