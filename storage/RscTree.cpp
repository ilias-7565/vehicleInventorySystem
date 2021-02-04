class RscTreeSearch {
	idc = 100;
	type = 2;
	style = "512";
	x = GUI_GRID_CENTER_X + 10 * GUI_GRID_CENTER_W;
	y = GUI_GRID_CENTER_Y + 0 * GUI_GRID_CENTER_H;
	w = 20 * GUI_GRID_CENTER_W;
	h = 2 * GUI_GRID_CENTER_H;
	font = "PuristaMedium";
	sizeEx = 0.04;
	autocomplete = "";
	canModify = true; 
	maxChars = 100; 
	forceDrawCaret = false;
	colorSelection[] = {0,1,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,0,0,1}; 
	colorBackground[] = {0,0,0,0.8};
	text = "";
	tooltip = "Type to search";
};
class RscTree {
	idc = 200;
	onLoad = "";
	moving = 0;
	type = CT_TREE;
	style = ST_LEFT;
	access = 0;
	x = GUI_GRID_CENTER_X + 10 * GUI_GRID_CENTER_W;
	y = GUI_GRID_CENTER_Y + 3 * GUI_GRID_CENTER_H;
	w = 20 * GUI_GRID_CENTER_W;
	h = 23 * GUI_GRID_CENTER_H;
	sizeEx = GUI_TEXT_SIZE_MEDIUM;
	font = "RobotoCondensed";
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.8};
	colorDisabled[] = {1,1,1,0.25};
	shadow = 0;

	/* CT_TREE specific properties */
	idcSearch = 100;
	multiselectEnabled = 1;

	onTreeSelChanged = "systemChat str ['onTreeSelChanged',_this]; false";
	onTreeLButtonDown = "systemChat str ['onTreeLButtonDown',_this]; false";
	onTreeDblClick = "systemChat str ['onTreeDblClick',_this]; false";
	onTreeExpanded = "systemChat str ['onTreeExpanded',_this]; false";
	onTreeCollapsed = "systemChat str ['onTreeCollapsed',_this]; false";
	onTreeMouseMove = "systemChat str ['onTreeMouseMove',_this]; false";
	onTreeMouseHold = "systemChat str ['onTreeMouseHold',_this]; false";
	onTreeMouseExit = "systemChat str ['onTreeMouseExit',_this]; false";

	colorSelect[] = {1,1,1,0.7};
	colorSelectText[] = {0,0,0,1};
	colorBorder[] = {0,0,0,0};
	colorSearch[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
	};
	colorMarked[] = {0.2,0.3,0.7,1};
	colorMarkedText[] = {0,0,0,1};
	colorMarkedSelected[] = {0,0.5,0.5,1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {0,0,0,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {0,0,0,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorArrow[] = {1,1,1,1};
	maxHistoryDelay = 1;
	colorSelectBackground[] = {0,0,0,0.5};
	colorLines[] = {0,0,0,0};
	class ScrollBar {
		color[] =  {1,1,1,1};
		autoScrollEnabled = 1;
	};
	expandedTexture = "A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa";
	hiddenTexture = "A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa";
	rowHeight = 0.0439091;
	borderSize = 0;
	expandOnDoubleclick = 1;
};
