//systemChat "editListChange.sqf called";

_list2 = [];
_sumMass = 0;
_subItems = [];
_count = 0;

_text = "";
_img = "";

//Dialog item references
_combo = (findDisplay 8002) displayCtrl 7000;		//Reference to the loadout combo box on the left
_list = (findDisplay 8002) displayCtrl 7001;			//reference to the list box on the right
_index = lbCurSel 7000;
_items = parseSimpleArray(lbData [7000, _index]);	//The array of items associated with the currently selected loadout
_button = (findDisplay 8002) displayCtrl 1;

_dlgLoadoutMass = (findDisplay 8002) displayCtrl 7004;	//Mass of the loadout

lbClear _list;		//Clear list of items

//Consolidate the listing of items so we get counts of items
_consolidatedItems = _items call BIS_fnc_consolidateArray;

//===== BUILD LIST OF ITEMS
{
	//==== RETRIEVE NAME AND IMAGE
	_text = "";
	_img = "";
	
	_type = toLower((_x select 0) select 0);
	_classname = toLower((_x select 0) select 1);
	_subItems = ((_x select 0) select 2);
	_count = _x select 1;
	
	if(_type == "magazine") then 
	{
		_text = str(_count) + "x  " + getText (configFile >> "CfgMagazines" >> _classname >> "displayName");
		_img = getText (configfile >> "CfgMagazines" >> _classname >> "picture");
	}
	else
	{
		_text = str(_count) + "x  " + getText (configFile >> "CfgWeapons" >> _classname >> "displayName");
		_img = getText (configfile >> "CfgWeapons" >> _classname >> "picture");
	};

	if(_type  == "backpack") then 
	{
		_text = str(_count) + "x  " + getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
		_img = getText (configfile >> "CfgVehicles" >> _classname >> "picture");
	};
	
	//===== ADD TEXT & IMAGE OF EACH ITEM TO LIST
	_index = _list lbAdd _text;					//Set the text for the item
	_list lbSetPictureRight [_index, _img];			//Set the image for the item
	_list lbSetPictureRightColor [_index, [1, 1, 1, 1]];	//Setup the image colors so the item is shown in color instead of all black

}forEach _consolidatedItems;

_sumMass=[_items] call fatLurch_fnc_calcWeight;	//Return the mass of the proposed loadout

//===== UPDATE DIALOGS
_dlgLoadoutMass ctrlSetText ("Mass: " + str(_sumMass));


