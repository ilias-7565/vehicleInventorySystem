class CfgPatches {
	class Vehicle_Inventory_System {
		name="Vehicle Inventory System En";
		author="Fat_Lurch and other";
		requiredVersion=1.6;
		requiredAddons[]= {
			"A3_Data_F",
			"A3_Characters_F",
			"cba_main"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgFunctions {
	#include "storage\vehicleInventorySystem\cfgFunctions.cpp"		// #vehicleInventorySystem
};
