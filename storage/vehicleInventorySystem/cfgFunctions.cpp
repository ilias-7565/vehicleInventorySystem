
	class vehicleInventorySystem_init {
		tag = "VIS";
		file = "storage\vehicleInventorySystem";
		requiredAddons[] = {"A3_Data_F","A3_Characters_F","cba_main"};

		class postInit_vehicleInventorySystem {
			headerType = -1;

			preStart = 0;
			//if file is in missionFolder, sometimes shows error; recompile = 1;
			preInit = 0;
			postInit = 1;

			ext = ".sqf";
		};
	};

	class vehicleInventorySystem {
		tag = "VIS";
		file = "storage\vehicleInventorySystem\functions";
		requiredAddons[] = {"A3_Data_F","A3_Characters_F","cba_main"};

		class init_vehicleInventorySystem {
			headerType = -1;

			preStart = 0;
			//if file is in missionFolder, sometimes shows error; recompile = 1;
			preInit = 0;
			postInit = 0;

			ext = ".sqf";
		};

		class getFullInventory {
		};
		class loadFullInventory {
		};
		class arsenalNearby {
		};
		class initLoadDialog {
		};
		class loadDialogClose {
		};
		class loadListChange {
		};
		class addLoadAction {
		};
		class saveDialogClose {
		};
		class addSaveAction {
		};
		class initSaveDialog {
		};
		class calcWeight {
		};
		class initEditDialog {
		};
		class editDialogClose {
		};
		class editListChange {
		};

	};
