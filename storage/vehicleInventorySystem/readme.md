## init

Require : CBA, optionally cfgF ;

Mission-folder Compatible with : en, GOM Aircraft Loadout, Vehicle Appearance Manager (GUI) ;

description.ext / config.cpp
```

class CfgFunctions {
	class missionConfigFile {		// Tag-class . by default : file = "functions\" ; . description.ext doesn't support > 1 .
		tag = "Mission";		// in description.ext, doesn't work in subs of Tag-classes .

		#include "storage\vehicleInventorySystem\cfgFunctions.cpp"		// #vehicleInventorySystem

	};
};

// ## vehicleInventorySystem

#include "storage\vehicleInventorySystem\config.cpp"

````