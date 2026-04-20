-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuMobileMapFrame = {}
local v0 = Class(InGameMenuMobileMapFrame, TabbedMenuFrameElement)
InGameMenuMobileMapFrame.CONTROLS = {INGAME_MAP = "inGameMap", MAP_CURSOR = "mapCursor", PAGING_ELEMENT = "pagingElement", MAP_PAGE_SELECTOR = "mapPageSelector", ROUNDED_TOP_CONTAINER = "roundedTopContainer", ROUNDED_TOP_CENTER = "roundedTopCenter", FILTER_BOX_CONTAINER = "filterBoxContainer", FILTER_BOXES = "filterBoxes", FILTER_BOX_CONTAINER_BG = "filterBoxContainerBg", VEHICLES_LIST = "vehiclesList", VEHICLES_LIST_SLIDER = "vehiclesListSlider", VEHICLES_LIST_SLIDER_BAR = "vehiclesListSliderBar", VEHICLES_LIST_TOP_CLIPPER = "vehiclesListTopClipper", VEHICLES_LIST_BOTTOM_CLIPPER = "vehiclesListBottomClipper", VEHICLE_DETAILS_BOX = "vehicleDetailsBox", VEHICLE_DETAILS_IMAGE = "vehicleDetailsImage", VEHICLE_DETAILS_BRAND = "vehicleDetailsBrand", VEHICLE_DETAILS_NAME = "vehicleDetailsName", VEHICLE_DETAILS_ATTACHABLES = "vehicleDetailsAttachables", VEHICLE_DETAILS_ATTACHABLE_ICONS = "vehicleDetailsAttachableIcons", VEHICLE_DETAILS_DAILY_RIDING = "vehicleDetailsDailyRiding", POINTS_FILTER_BUTTON_BOX = "pointsFilterButtonBox", POINTS_FILTER_BUTTON_GLYPH = "pointsFilterButtonGlyph", POINTS_LIST = "pointsList", POINTS_LIST_SLIDER = "pointsListSlider", POINTS_LIST_SLIDER_BAR = "pointsListSliderBar", POINTS_LIST_TOP_CLIPPER = "pointsListTopClipper", POINTS_LIST_BOTTOM_CLIPPER = "pointsListBottomClipper", POINT_DETAILS_IMAGE = "pointDetailsImage", POINT_DETAILS_NAME = "pointDetailsName", POINT_DETAILS_BOX = "pointDetailsBox", POINT_DETAILS_ICON_TEMPLATE = "pointDetailsIconTemplate", POINT_DETAILS_LAYOUT = "pointDetailsLayout", POINT_DETAILS_ICON = "pointDetailsIcon", POINT_DETAILS_VALUE = "pointDetailsValue", POINT_DETAILS_ICON_LAYOUT = "pointDetailsIconsLayout", STATUS_SELECTOR = "statusSelector", STATUS_LIST = "statusList", STATUS_LIST_SLIDER = "statusListSlider", STATUS_LIST_SLIDER_BAR = "statusListSliderBar", STATUS_LIST_TOP_CLIPPER = "statusListTopClipper", STATUS_LIST_BOTTOM_CLIPPER = "statusListBottomClipper", FIELDS_LIST = "fieldsList", FIELDS_LIST_SLIDER = "fieldsListSlider", FIELDS_LIST_SLIDER_BAR = "fieldsListSliderBar", FIELDS_LIST_TOP_CLIPPER = "fieldsListTopClipper", FIELDS_LIST_BOTTOM_CLIPPER = "fieldsListBottomClipper", AI_VEHICLE_BOX = "aiDetailsBox", AI_VEHICLE_IMAGE = "aiDetailsImage", AI_VEHICLE_BRAND = "aiDetailsBrand", AI_VEHICLE_NAME = "aiDetailsName", AI_WORKERS_LIST_TITLE = "aiWorkersListTitle", AI_WORKERS_LIST = "aiWorkersList", AI_WORKERS_LIST_SLIDER = "aiWorkersListSlider", AI_WORKERS_LIST_SLIDER_BAR = "aiWorkersListSliderBar", AI_WORKERS_LIST_EMPTY = "aiWorkersListEmpty", AI_WORKERS_LIST_TOP_CLIPPER = "aiWorkersListTopClipper", AI_WORKERS_LIST_BOTTOM_CLIPPER = "aiWorkersListBottomClipper", BUTTON_CLOSE_MAP = "buttonCloseMap", BUTTON_CLOSE_MAP_CONTAINER = "buttonCloseMapContainer", BUTTON_BOX = "buttonBox", BUTTON_SELECT = "buttonSelectInGame", BUTTON_ENTER_VEHICLE = "buttonEnterVehicle", BUTTON_RESET_VEHICLE = "buttonResetVehicle", BUTTON_VISIT_PLACE = "buttonVisitPlace", BUTTON_SET_MARKER = "buttonSetMarker", BUTTON_BUY_FARMLAND = "buttonBuyField", BUTTON_GOTO_JOB = "buttonGoToJob", BUTTON_CREATE_JOB = "buttonCreateJob", BUTTON_START_JOB = "buttonStartJob", BUTTON_CANCEL_JOB = "buttonCancelJob", BUTTON_SKIP_TASK = "buttonSkipTask", BUTTON_CONFIRM_AI_TARGET = "buttonConfirmAITarget", AI_TASK_DIALOG = "aiTaskDialog", AI_TASK_DIALOG_JOB_TYPE_SELECTOR = "aiTaskDialogJobTypeSelector", AI_TASK_DIALOG_LAYOUT = "aiTaskDialogLayout", AI_TASK_DIALOG_MULTI_OPTION_TEMPLATE = "aiTaskDialogMultiOptionTemplate", AI_TASK_DIALOG_TITLE_TEMPLATE = "aiTaskDialogTitleTemplate", AI_TASK_DIALOG_POSITION_TEMPLATE = "aiTaskDialogPositionTemplate", AI_TASK_DIALOG_POSITION_ROTATION_TEMPLATE = "aiTaskDialogPositionRotationTemplate", AI_TASK_DIALOG_ERROR_MESSAGE = "aiTaskDialogErrorMessage", AI_TASK_DIALOG_ERROR_MESSAGE_BG = "aiTaskDialogErrorMessageBg", ACTION_MESSAGE = "actionMessage", ACTION_MESSAGE_BG = "actionMessageBg", STATUS_MESSAGE = "statusMessage", STATUS_MESSAGE_BG = "statusMessageBg", LIMIT_REACHED_WARNING = "limitReachedWarning", LIMIT_REACHED_WARNING_BG = "limitReachedWarningBg", DYNAMIC_MAP_IMAGE_LOADING = "dynamicMapImageLoading", DYNAMIC_MAP_IMAGE_LOADING_BG = "dynamicMapImageLoadingBg"}
InGameMenuMobileMapFrame.MODE_NONE = 0
InGameMenuMobileMapFrame.MODE_OVERVIEW = 1
InGameMenuMobileMapFrame.MODE_AI_PAGE = 2
InGameMenuMobileMapFrame.MODE_CREATE_JOB = 3
InGameMenuMobileMapFrame.MAP_FRUIT_TYPE = 1
InGameMenuMobileMapFrame.MAP_GROWTH = 2
InGameMenuMobileMapFrame.MAP_SOIL = 3
InGameMenuMobileMapFrame.MAP_HOTSPOTS = InGameMenuMobileMapFrame.MAP_FRUIT_TYPE
InGameMenuMobileMapFrame.PAGE_ID = {STATUS = 1, VEHICLES = 2, POINTS = 3, FIELDS = 4, AI = 5}
{}[InGameMenuMobileMapFrame.PAGE_ID.VEHICLES] = "ui_inGameMenuVehicles"
{}[InGameMenuMobileMapFrame.PAGE_ID.POINTS] = "ui_inGameMenuPointsOfInterest"
{}[InGameMenuMobileMapFrame.PAGE_ID.STATUS] = "ui_inGameMenuFieldStatus"
{}[InGameMenuMobileMapFrame.PAGE_ID.FIELDS] = "ui_inGameMenuFields"
{}[InGameMenuMobileMapFrame.PAGE_ID.AI] = "ui_helpers"
InGameMenuMobileMapFrame.PAGE_NAMES = {}
InGameMenuMobileMapFrame.SECTION_NAMES = {VEHICLES = {"ui_mapHotspotFilter_driveables", "ui_mapHotspotFilter_tools", "helpLine_Animals_Horses"}, POINTS = {"ui_mapHotspotFilter_buyingSelling", "ui_mapHotspotFilter_productionPoints", "ui_mapHotspotFilter_animals", "ui_mapHotspotFilter_others"}, FIELDS = {"ui_mapPageFields_ownedByYou", "ui_mapPageFields_availableToBuy"}}
InGameMenuMobileMapFrame.HOTSPOT_FILTERS = {LOADING = 1, PRODUCTIONS = 2, ANIMALS = 3, OTHER = 4}
InGameMenuMobileMapFrame.FIELD_STATUS = {"ui_mapViewMode2", "ui_mapViewMode1", "ui_mapOverviewSoil"}
{}[MapHotspot.CATEGORY_TOOL] = true
{}[MapHotspot.CATEGORY_TRAILER] = true
{}[MapHotspot.CATEGORY_COMBINE] = true
{}[MapHotspot.CATEGORY_STEERABLE] = true
{}[MapHotspot.CATEGORY_AI] = true
{}[InGameMenuMobileMapFrame.PAGE_ID.VEHICLES] = {}
{}[MapHotspot.CATEGORY_ANIMAL] = true
{}[MapHotspot.CATEGORY_LOADING] = true
{}[MapHotspot.CATEGORY_OTHER] = true
{}[InGameMenuMobileMapFrame.PAGE_ID.POINTS] = {}
{}[MapHotspot.CATEGORY_FIELD] = true
{}[InGameMenuMobileMapFrame.PAGE_ID.FIELDS] = {}
{}[MapHotspot.CATEGORY_TOOL] = true
{}[MapHotspot.CATEGORY_TRAILER] = true
{}[MapHotspot.CATEGORY_COMBINE] = true
{}[MapHotspot.CATEGORY_STEERABLE] = true
{}[MapHotspot.CATEGORY_AI] = true
{}[MapHotspot.CATEGORY_ANIMAL] = true
{}[MapHotspot.CATEGORY_LOADING] = true
{}[MapHotspot.CATEGORY_OTHER] = true
{}[InGameMenuMobileMapFrame.PAGE_ID.AI] = {}
{}[MapHotspot.CATEGORY_PLAYER] = true
InGameMenuMobileMapFrame.HOTSPOT_SWITCH_CATEGORIES = {}
{}[InGameMenuMobileMapFrame.PAGE_ID.STATUS] = {MapHotspot.CATEGORY_FIELD, MapHotspot.CATEGORY_MISSION, MapHotspot.CATEGORY_TOUR, MapHotspot.CATEGORY_STEERABLE, MapHotspot.CATEGORY_COMBINE, MapHotspot.CATEGORY_TRAILER, MapHotspot.CATEGORY_TOOL, MapHotspot.CATEGORY_AI, MapHotspot.CATEGORY_ANIMAL, MapHotspot.CATEGORY_UNLOADING, MapHotspot.CATEGORY_LOADING, MapHotspot.CATEGORY_PRODUCTION, MapHotspot.CATEGORY_SHOP, MapHotspot.CATEGORY_OTHER, MapHotspot.CATEGORY_PLAYER}
{}[InGameMenuMobileMapFrame.PAGE_ID.VEHICLES] = {MapHotspot.CATEGORY_FIELD, MapHotspot.CATEGORY_ANIMAL, MapHotspot.CATEGORY_MISSION, MapHotspot.CATEGORY_TOUR, MapHotspot.CATEGORY_UNLOADING, MapHotspot.CATEGORY_LOADING, MapHotspot.CATEGORY_PRODUCTION, MapHotspot.CATEGORY_SHOP, MapHotspot.CATEGORY_OTHER, MapHotspot.CATEGORY_STEERABLE, MapHotspot.CATEGORY_COMBINE, MapHotspot.CATEGORY_TRAILER, MapHotspot.CATEGORY_TOOL, MapHotspot.CATEGORY_AI, MapHotspot.CATEGORY_PLAYER}
{}[InGameMenuMobileMapFrame.PAGE_ID.POINTS] = {MapHotspot.CATEGORY_FIELD, MapHotspot.CATEGORY_MISSION, MapHotspot.CATEGORY_TOUR, MapHotspot.CATEGORY_STEERABLE, MapHotspot.CATEGORY_COMBINE, MapHotspot.CATEGORY_TRAILER, MapHotspot.CATEGORY_TOOL, MapHotspot.CATEGORY_AI, MapHotspot.CATEGORY_ANIMAL, MapHotspot.CATEGORY_UNLOADING, MapHotspot.CATEGORY_LOADING, MapHotspot.CATEGORY_PRODUCTION, MapHotspot.CATEGORY_SHOP, MapHotspot.CATEGORY_OTHER, MapHotspot.CATEGORY_PLAYER}
{}[InGameMenuMobileMapFrame.PAGE_ID.FIELDS] = {MapHotspot.CATEGORY_MISSION, MapHotspot.CATEGORY_TOUR, MapHotspot.CATEGORY_OTHER, MapHotspot.CATEGORY_STEERABLE, MapHotspot.CATEGORY_COMBINE, MapHotspot.CATEGORY_TRAILER, MapHotspot.CATEGORY_TOOL, MapHotspot.CATEGORY_ANIMAL, MapHotspot.CATEGORY_UNLOADING, MapHotspot.CATEGORY_LOADING, MapHotspot.CATEGORY_PRODUCTION, MapHotspot.CATEGORY_SHOP, MapHotspot.CATEGORY_AI, MapHotspot.CATEGORY_FIELD, MapHotspot.CATEGORY_PLAYER}
{}[InGameMenuMobileMapFrame.PAGE_ID.AI] = {MapHotspot.CATEGORY_FIELD, MapHotspot.CATEGORY_MISSION, MapHotspot.CATEGORY_TOUR, MapHotspot.CATEGORY_ANIMAL, MapHotspot.CATEGORY_UNLOADING, MapHotspot.CATEGORY_LOADING, MapHotspot.CATEGORY_PRODUCTION, MapHotspot.CATEGORY_SHOP, MapHotspot.CATEGORY_OTHER, MapHotspot.CATEGORY_STEERABLE, MapHotspot.CATEGORY_COMBINE, MapHotspot.CATEGORY_TRAILER, MapHotspot.CATEGORY_TOOL, MapHotspot.CATEGORY_AI, MapHotspot.CATEGORY_PLAYER}
InGameMenuMobileMapFrame.HOTSPOT_SORTING_PRIO = {}
InGameMenuMobileMapFrame.BUTTON_TEXTS = {SET_MARKER = "action_tag", REMOVE_MARKER = "action_untag", VEHICLE_RESET = "button_reset", DIALOG_VEHICLE_RESET_DONE = "ui_vehicleResetDone", DIALOG_VEHICLE_RESET_FAILED = "ui_vehicleResetFailed", DIALOG_VEHICLE_IN_USE = "shop_messageReturnVehicleInUse", DIALOG_VEHICLE_NO_PERMISSION = "shop_messageNoPermissionGeneral", DIALOG_VEHICLE_RESET_CONFIRM = "ui_wantToResetVehicleText", DIALOG_BUY_FARMLAND_TITLE = "shop_messageBuyFarmlandTitle", DIALOG_BUY_FARMLAND_NOT_ENOUGH_MONEY = "shop_messageNotEnoughMoneyToBuyFarmland", MOBILE_BUY_FIELD_TEXT = "ui_mobile_buyFieldDialogText", MOBILE_BUY_FIELD_TEXT_COINS = "ui_mobile_buyFieldDialogText_buyCoins", BUTTON_CLOSE_MAP = "button_closeMap", BUTTON_CANCEL = "button_cancel"}
InGameMenuMobileMapFrame.CLEAR_INPUT_ACTIONS = {InputAction.MENU_ACCEPT, InputAction.MENU_ACTIVATE, InputAction.MENU_CANCEL, InputAction.MENU_EXTRA_1, InputAction.MENU_EXTRA_2, InputAction.SWITCH_VEHICLE, InputAction.SWITCH_VEHICLE_BACK, InputAction.CAMERA_ZOOM_IN, InputAction.CAMERA_ZOOM_OUT, InputAction.MENU_AXIS_LEFT_RIGHT}
InGameMenuMobileMapFrame.CLEAR_CLOSE_INPUT_ACTIONS = {InputAction.SWITCH_VEHICLE, InputAction.SWITCH_VEHICLE_BACK, InputAction.CAMERA_ZOOM_IN, InputAction.CAMERA_ZOOM_OUT}
InGameMenuMobileMapFrame.INPUT_CONTEXT_NAME = "MENU_MOBILE_MAP"
function InGameMenuMobileMapFrame.register()
  if Platform.isMobile then
    local v0 = InGameMenuMobileMapFrame.new()
    v1:loadGui("dataS/gui/InGameMenuMobileMapFrame.xml", "MobileMapFrame", v0, true)
  end
end
function InGameMenuMobileMapFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuMobileMapFrame.CONTROLS)
  v2.onClickBackCallback = u1
  v2.client = nil
  v2.playerFarm = nil
  v2.statusMessages = {}
  v2.mode = InGameMenuMobileMapFrame.MODE_NONE
  local v4 = v4:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  v2.isColorBlindMode = v4 or false
  v2.fruitTypeFilter = {}
  v2.fruitTypeFilterMapping = {}
  v2.growthStateFilter = {}
  v2.soilStateFilter = {}
  {}[InGameMenuMobileMapFrame.MAP_FRUIT_TYPE] = v2.fruitTypeFilter
  {}[InGameMenuMobileMapFrame.MAP_GROWTH] = v2.growthStateFilter
  {}[InGameMenuMobileMapFrame.MAP_SOIL] = v2.soilStateFilter
  v2.fieldStatusFilters = {}
  v2.foliageStateOverlay = nil
  v2.foliageStateOverlayIsReady = false
  v2.overviewOverlayFinishedCallback = function(v0)
    v1:onOverviewOverlayFinished(v0)
  end
  v2.inGameMapBase = nil
  v2.needsSolidBackground = Platform.ingameMap.needsSolidBackground
  v2.isOpening = true
  v2.blockListSelectionEvents = false
  v2.hasFullScreenMap = true
  v2.goToMainOverview = false
  v2.pageLists = {}
  v2.vehicles = {}
  v2.fieldStatus = {}
  v2.fields = {}
  v2.hotspotsSorted = {}
  v2.hotspotFiltersActive = {true, true, true, true}
  v2.hotspotFiltersMapping = {}
  v2.marqueeBoxes = {}
  v2.clonedElements = {}
  v2.currentHotspot = nil
  v2.currentList = nil
  v2.currentListItem = nil
  v2.jobTypeInstances = {}
  v2.statusMessages = {}
  v2.currentJob = nil
  v2.hasPickedLocationTouch = false
  v2.hasPickedRotationTouch = false
  v2.lastTouchPosX = 0
  v2.lastTouchPosY = 0
  v2.updateTime = 0
  local v3 = AITargetHotspot.new()
  v2.aiTargetMapHotspot = v3
  v2.pickingRotationSnapAngle = 0
  return v2
end
function InGameMenuMobileMapFrame:createFromExistingGui(v1)
  local v2 = InGameMenuMobileMapFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuMobileMapFrame:copyAttributes(v1)
  local v3 = v3:superClass()
  v3.copyAttributes(self, v1)
  if not v1.onClickBackCallback then
  end
  self.onClickBackCallback = v2
end
function InGameMenuMobileMapFrame:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  v1:removeStateChangeListener(self)
  if self.aiTargetMapHotspot ~= nil then
    v1:delete()
    self.aiTargetMapHotspot = nil
  end
end
function InGameMenuMobileMapFrame:initialize(v1)
  if not v1 then
  end
  self.onClickBackCallback = v2
  self.buttonsResizeTextSize = self.buttonSelectInGame.defaultTextSize
  self.buttonsResizeNeeded = {self.buttonSelectInGame, self.buttonEnterVehicle, self.buttonResetVehicle, self.buttonGoToJob, self.buttonCreateJob}
  {}[InGameMenuMobileMapFrame.PAGE_ID.STATUS] = self.statusList
  {}[InGameMenuMobileMapFrame.PAGE_ID.VEHICLES] = self.vehiclesList
  {}[InGameMenuMobileMapFrame.PAGE_ID.POINTS] = self.pointsList
  {}[InGameMenuMobileMapFrame.PAGE_ID.FIELDS] = self.fieldsList
  {}[InGameMenuMobileMapFrame.PAGE_ID.AI] = self.aiWorkersList
  self.pageLists = {}
  self.currentList = self.statusList
  self.vehiclesList.detailsBox = self.vehicleDetailsBox
  self.pointsList.detailsBox = self.pointDetailsBox
  self.aiWorkersList.detailsBox = self.aiDetailsBox
  self.mapPageSelector.texts = {}
  for v5, v6 in pairs(InGameMenuMobileMapFrame.PAGE_NAMES) do
    local v9 = v9:getText(v6)
    table.insert(...)
  end
  for v5, v6 in pairs(self.pagingElement.elements) do
    if not (v6.getOverlayState ~= nil) then
      continue
    end
    v6.getOverlayState = function()
      if u0.mapPageSelector.state == u1 then
        -- if GuiOverlay.STATE_SELECTED then goto L13 end
      end
      return GuiOverlay.STATE_NORMAL
    end
  end
  v2:setState(1)
  self.statusSelector.texts = {}
  for v5, v6 in pairs(InGameMenuMobileMapFrame.FIELD_STATUS) do
    v9 = v9:getText(v6)
    table.insert(...)
  end
  v2:setState(1)
  for v5, v6 in pairs(self.pointsFilterButtonBox.elements) do
    v6.getOverlayState = function()
      if u0.hotspotFiltersActive[u1] then
        -- if GuiOverlay.STATE_SELECTED then goto L11 end
      end
      return GuiOverlay.STATE_NORMAL
    end
  end
  function self.pointsFilterButtonGlyph.glyphElement.overlay.getIsVisible()
    if u0.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
      local v1 = v1:getFocusedElement()
      if v1 == u0.pointsList then
      end
    end
    return self
  end
  v2:linkElements(self.pointsList, FocusManager.BOTTOM, nil)
  v2:linkElements(self.pointsList, FocusManager.RIGHT, self.pointsFilterButtonBox)
  self.aiWorkersList.onClickCallback = self.onListSelectionChanged
end
function InGameMenuMobileMapFrame:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  if self.mapOverlayGenerator ~= nil then
    v1:delete()
    self.mapOverlayGenerator = nil
  end
  self.isInputContextActive = false
end
function InGameMenuMobileMapFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:loadFilters()
  local v4 = v4:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  local v3 = Utils.getNoNil(v4, false)
  self:setColorBlindMode(...)
  self:updateElementSizes()
  self:toggleMapInput(true)
  v4:setMapWidth(1 - self.filterBoxContainer.absSize[1] - self.leftInset + 27 * g_aspectScaleX / g_referenceScreenWidth)
  self.inGameMapBase:restoreDefaultFilter()
  self.inGameMap:onOpen()
  self.inGameMap:registerActionEvents()
  self:generateOverviewOverlay()
  v4:reloadData()
  self:updateVehicles()
  v4:reloadData()
  self:updatePoints()
  v4:reloadData()
  self:updateFields()
  v4:reloadData()
  self:setJobMenuVisible(false)
  self:generateJobTypes()
  v4:reloadData()
  v4:updateHotspotSorting()
  v4 = v4:getPlayerHotspot(self.inGameMap.ingameMap.hotspotsSorted[true])
  local v5 = v4:getVehicle()
  if v5 ~= nil then
    local v8 = v5:getMapHotspot()
    self:selectHotspotInList(v8, self.vehiclesList)
    if self.mapPageSelector.state ~= InGameMenuMobileMapFrame.PAGE_ID.VEHICLES then
      -- if v0.mapPageSelector.state ~= InGameMenuMobileMapFrame.PAGE_ID.AI then goto L177 end
    end
    v8 = v5:getMapHotspot()
    self:setMapSelectionItem(...)
  end
  v6:subscribe(MessageType.AI_JOB_STARTED, self.onAIJobStarted, self)
  v6:subscribe(MessageType.AI_JOB_STOPPED, self.onAIJobStopped, self)
  v6:subscribe(MessageType.AI_JOB_REMOVED, self.onAIJobRemoved, self)
  v6:subscribe(MessageType.AI_TASK_SKIPPED, self.onAITaskSkipped, self)
  v6:subscribe(MessageType.INSETS_CHANGED, self.onInsetsChanged, self)
  if self.currentList.sliderElement ~= nil then
    if self.currentList.visible and 0 < self.currentList.totalItemCount then
    end
    v7:setVisible(v9)
  end
  self:onMapPageSelected()
end
function InGameMenuMobileMapFrame:onFrameClose()
  v1:unsubscribeAll(self)
  local v2 = v2:superClass()
  v2.onFrameClose(self)
  v1:onClose()
  self:toggleMapInput(false)
  v1:restoreDefaultFilter()
  v1:applyCustomHotspotSortingOrder(InGameMenuMobileMapFrame.HOTSPOT_SORTING_PRIO[InGameMenuMobileMapFrame.PAGE_ID.STATUS])
  v1:removeMapHotspot(self.aiTargetMapHotspot)
  self.isOpening = true
end
function InGameMenuMobileMapFrame:saveFilters()
  for v5, v6 in pairs(self.fruitTypeFilter) do
    if not (self.fruitTypeFilter[v5] == false) then
      continue
    end
    local v9 = v9:getFillTypeByFruitTypeIndex(self.fruitTypeFilterMapping[v5])
    if v1 ~= "" then
    else
    end
  end
  for v6, v7 in ipairs(self.growthStateFilter) do
    if not v7 then
      continue
    end
    local v8 = Utils.setBit(v2, v6)
  end
  for v7, v8 in ipairs(self.soilStateFilter) do
    if not v8 then
      continue
    end
    v9 = Utils.setBit(v3, v7)
  end
  v4:setValue(GameSettings.SETTING.INGAME_MAP_FRUIT_FILTER, v1, false)
  v4:setValue(GameSettings.SETTING.INGAME_MAP_GROWTH_FILTER, v2, false)
  v4:setValue(GameSettings.SETTING.INGAME_MAP_SOIL_FILTER, v3, true)
  self.statusMessages = {}
  self:updateStatusMessages()
end
function InGameMenuMobileMapFrame:loadFilters()
  local v1 = v1:getValue(GameSettings.SETTING.INGAME_MAP_FRUIT_FILTER)
  local v2 = v1:split(";")
  for v7, v8 in pairs(self.fruitTypeFilterMapping) do
    v3[v8] = v7
  end
  for v7, v8 in ipairs(v2) do
    local v9 = v9:getFruitTypeByName(v8)
    if not (v9 ~= nil) then
      continue
    end
    if not (v3[v9.index] ~= nil) then
      continue
    end
    self.fruitTypeFilter[v3[v9.index]] = false
  end
  v4 = v4:getValue(GameSettings.SETTING.INGAME_MAP_GROWTH_FILTER)
  for v8, v9 in pairs(self.displayGrowthStates) do
    local v11 = Utils.isBitSet(v4, v8)
    self.growthStateFilter[v8] = v11
  end
  v5 = v5:getValue(GameSettings.SETTING.INGAME_MAP_SOIL_FILTER)
  for v9, v10 in pairs(self.displaySoilStates) do
    local v12 = Utils.isBitSet(v5, v9)
    self.soilStateFilter[v9] = v12
  end
end
function InGameMenuMobileMapFrame:onLoadMapFinished()
  local v1 = MapOverlayGenerator.new(g_i18n, g_fruitTypeManager, g_fillTypeManager, g_farmlandManager, g_farmManager, g_currentMission.weedSystem)
  self.mapOverlayGenerator = v1
  v1:setColorBlindMode(self.isColorBlindMode)
  v1:setMissionFruitTypes(self.missionFruitTypes)
  v1:setFieldColor(g_currentMission.mapFieldColor, g_currentMission.mapGrassFieldColor)
  v1 = v1:getDisplayCropTypes()
  self.displayCropTypes = v1
  v1 = v1:getDisplayGrowthStates()
  self.displayGrowthStates = v1
  v1 = v1:getDisplaySoilStates()
  self.displaySoilStates = v1
  table.insert(self.fieldStatus, self.displayCropTypes)
  table.insert(self.fieldStatus, self.displayGrowthStates)
  table.insert(self.fieldStatus, self.displaySoilStates)
  for v4, v5 in pairs(self.displayCropTypes) do
    self.fruitTypeFilter[v4] = true
    self.fruitTypeFilterMapping[v4] = v5.fruitTypeIndex
  end
  v1:applyCustomHotspotSortingOrder(InGameMenuMobileMapFrame.HOTSPOT_SORTING_PRIO[InGameMenuMobileMapFrame.PAGE_ID.STATUS])
  self:setMapSelectionItem(nil)
end
function InGameMenuMobileMapFrame:toggleMapInput(v1)
  if self.isInputContextActive ~= v1 then
    self.isInputContextActive = v1
    self:toggleCustomInputContext(v1, InGameMenuMobileMapFrame.INPUT_CONTEXT_NAME)
    if v1 then
      self:registerInput()
      return
    end
    self:unregisterInput(true)
  end
end
function InGameMenuMobileMapFrame:touchEvent(v1, v2, v3, v4, v5, v6)
  if self.isPickingRotation and not self.hasPickedRotationTouch then
    local v7, v8 = v7:getLocalPosition(v1, v2)
    local v9, v10 = v9:localToWorldPos(v7, v8)
    local v11 = math.atan2(v9 - self.pickingRotationOrigin[1], v10 - self.pickingRotationOrigin[2])
    if 0 < self.pickingRotationSnapAngle then
      local v12 = MathUtil.round((v11 + math.pi) / self.pickingRotationSnapAngle, 0)
    end
    v12:setWorldRotation(v11)
  end
  if v4 then
    self.lastTouchPosX = v1
    self.lastTouchPosY = v2
  end
  v8 = v8:superClass()
  v7 = v8.touchEvent(self, v1, v2, v3, v4, v5, v6)
  return v7
end
function InGameMenuMobileMapFrame:update(v1)
  local v3 = v3:superClass()
  v3.update(self, v1)
  self.isOpening = false
  local v2 = v2:getInputHelpMode()
  if v2 ~= self.lastInputHelpMode then
    self.lastInputHelpMode = v2
    self:refreshContextInput()
  end
  if v2 == GS_INPUT_HELP_MODE_GAMEPAD then
    local v3, v4 = v3:getLocalPointerTarget()
    if self.isPickingLocation then
      self:setTargetPointHotspotPosition(v3, v4)
    elseif self.isPickingRotation then
      local v5, v6 = v5:localToWorldPos(v3, v4)
      local v7 = math.atan2(v5 - self.pickingRotationOrigin[1], v6 - self.pickingRotationOrigin[2])
      if 0 < self.pickingRotationSnapAngle then
        local v8 = MathUtil.round((v7 + math.pi) / self.pickingRotationSnapAngle, 0)
      end
      v8:setWorldRotation(v7)
    end
  end
  v3:update(v1)
  -- TODO: structure LOP_FORNPREP (pc 104, target 122)
  if self.statusMessages[1].removeTime < g_time then
    table.remove(self.statusMessages, 1)
  end
  -- TODO: structure LOP_FORNLOOP (pc 121, target 105)
  if v3 then
    self:updateStatusMessages()
  end
  self:updateMarqueeAnimation(v1)
end
function InGameMenuMobileMapFrame:setTargetPointHotspotPosition(v1, v2)
  local v3, v4 = v3:localToWorldPos(v1, v2)
  v5:setWorldPosition(v3, v4)
end
function InGameMenuMobileMapFrame:showContextInput(v1, v2, v3, v4, v5)
  if self.mapPageSelector.state == InGameMenuMobileMapFrame.PAGE_ID.AI then
  end
  v7:setVisible(v1 and true)
  v7:setVisible(v2 and true)
  v7:setVisible(v3 and true)
  v7:setVisible(v5 and true)
  local v9 = self:getCanCancelJob()
  v7:setVisible(...)
  v9 = self:getCanGoTo()
  v7:setVisible(...)
  v9 = self:getCanCreateJob()
  v7:setVisible(...)
  v9 = self:getCanStartJob()
  v7:setVisible(...)
  v9 = self:getCanSkipJobTask()
  v7:setVisible(...)
  v9 = self:canConfirmAITarget()
  v7:setVisible(...)
  self:showContextMarker(v3, v4)
  local v7 = self:getIsPicking()
  if not v7 and self.mode ~= InGameMenuMobileMapFrame.MODE_CREATE_JOB then
  end
  if v7 then
    -- if InGameMenuMobileMapFrame.BUTTON_TEXTS.BUTTON_CANCEL then goto L119 end
  end
  local v11 = v11:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.BUTTON_CLOSE_MAP)
  v9:setText(...)
  if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
    v11 = self:getIsPicking()
    if not v11 and self.mode == InGameMenuMobileMapFrame.MODE_CREATE_JOB then
    end
  end
  v9:setVisible(v11)
  v9:invalidateLayout()
end
function InGameMenuMobileMapFrame:showContextInputAI(v1, v2, v3, v4)
  if self.mapPageSelector.state ~= InGameMenuMobileMapFrame.PAGE_ID.AI then
  end
  self.canGoTo = v1 and true
  self.canCreateJob = v2 and true
  self.canCancel = v3 and true
  self.canSkipTask = v4 and true
end
function InGameMenuMobileMapFrame:showContextMarker(v1, v2)
  if v1 then
    if v2 then
      local v4 = v4:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.REMOVE_MARKER)
    else
      v4 = v4:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.SET_MARKER)
    end
    v4:setText(v3)
  end
end
function InGameMenuMobileMapFrame:getCanCancelJob()
  if self.mode == InGameMenuMobileMapFrame.MODE_AI_PAGE then
    local v2 = self:getIsPicking()
    if not v2 and self.canCancel then
      local v1 = v1:getHasPlayerPermission("hireAssistant")
      if v1 then
        v2 = v2:getIsRunning()
      end
    end
  end
  return v1
end
function InGameMenuMobileMapFrame:getCanCreateJob()
  if self.mode == InGameMenuMobileMapFrame.MODE_AI_PAGE then
    local v2 = self:getIsPicking()
    if not v2 and self.canCreateJob then
      local v1 = v1:getHasPlayerPermission("hireAssistant")
      if v1 then
        v2 = v2:getIsRunning()
      end
    end
  end
  return v1
end
function InGameMenuMobileMapFrame:getCanGoTo()
  if self.mode == InGameMenuMobileMapFrame.MODE_AI_PAGE then
    local v2 = self:getIsPicking()
    if not v2 and self.canGoTo then
      local v1 = v1:getHasPlayerPermission("hireAssistant")
      if v1 then
        v2 = v2:getIsRunning()
      end
    end
  end
  return v1
end
function InGameMenuMobileMapFrame:getCanStartJob()
  if self.mode == InGameMenuMobileMapFrame.MODE_CREATE_JOB then
    local v2 = self:getIsPicking()
    if not v2 then
      local v1 = v1:getHasPlayerPermission("hireAssistant")
      if v1 then
        v2 = v2:getIsRunning()
      end
    end
  end
  return v1
end
function InGameMenuMobileMapFrame:getCanSkipJobTask()
  if self.mode == InGameMenuMobileMapFrame.MODE_AI_PAGE then
    local v2 = self:getIsPicking()
    if not v2 and self.canSkipTask then
      local v1 = v1:getHasPlayerPermission("hireAssistant")
      if v1 then
        v2 = v2:getIsRunning()
      end
    end
  end
  return v1
end
function InGameMenuMobileMapFrame:getCanCloseMap()
  if self.mode ~= InGameMenuMobileMapFrame.MODE_CREATE_JOB then
    local v2 = self:getIsPicking()
  end
  return v1
end
function InGameMenuMobileMapFrame:canConfirmAITarget()
  if self.lastInputHelpMode == GS_INPUT_HELP_MODE_TOUCH and not self.aiTaskDialog.visible then
    if self.mode ~= InGameMenuMobileMapFrame.MODE_CREATE_JOB then
      local v1 = self:getIsPicking()
      -- if not v1 then goto L31 end
    end
    local v2 = v2:getIsRunning()
  end
  return v1
end
function InGameMenuMobileMapFrame:refreshContextInput()
  local v2 = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
  if v2 ~= nil then
    local v7 = v7:canPlayerAccess(v2)
    if v7 and v2.spec_aiJobVehicle ~= nil then
      v7 = v2:getIsAIActive()
      if not v7 then
        v7 = v7:getIsAvailableForVehicle(v2)
        for v10, v11 in pairs(self.jobTypeInstances) do
          local v12 = v11:getIsAvailableForVehicle(v2)
          if not v12 then
            continue
          end
          v12 = self:getIsPicking()
          if not not v12 then
            continue
          end
          -- goto L69  (LOP_JUMP +13)
        end
      else
        v7 = v2:getJob()
        if v7 ~= nil then
          v8 = v7:getCanSkipTask()
          if v8 then
          end
        end
      end
    end
  end
  if not v4 then
    v7 = v7:getAILimitedReached()
  end
  v8:setVisible(v7)
  v8:setVisible(v7)
  self:showContextInputAI(v3, v4, v5, v6)
  self:showContextInput()
end
function InGameMenuMobileMapFrame:updateElementSizes()
  local v1 = getSafeFrameInsets()
  self.leftInset = v1
  v7:setPosition(v1, nil)
  v7:setPosition(v1, nil)
  v7:setSize(self.pagingElement.size[1] + v1, nil)
  v7:setSize(self.pagingElement.size[1] - 42 * 1 / g_screenWidth + v1, nil)
  v7:setSize(self.pagingElement.size[1] + v1, nil)
  v7:setAnchors(0, 0, 0, 1 - self.pagingElement.absSize[2])
  v7:setPosition(v1, nil)
  local v13 = GuiUtils.getUVs({v1, 0, self.filterBoxContainer.absSize[1] * g_screenWidth, self.filterBoxContainer.absSize[2] * g_screenHeight}, {2048, 2048})
  local v12 = unpack(...)
  v9:setImageUVs(...)
  v9:setAnchors(0, 0, 0, 1 - self.pagingElement.absSize[2])
  v9:updateAbsolutePosition()
  v13 = GuiUtils.getUVs({0, 0, self.filterBoxContainer.absSize[1] * g_screenWidth, self.filterBoxContainer.absSize[2] * g_screenHeight}, {2048, 2048})
  v12 = unpack(...)
  v9:setImageUVs(...)
  v9:setCursorCenter((self.filterBoxContainer.absSize[1] + self.leftInset) * 0.5, 0)
  v9:setSize(1 - self.pagingElement.size[1] - v1 - 50 / g_screenWidth)
  v9:setAnchors(0, 0, self.buttonBox.absSize[2] + 20 * 1 / g_screenHeight, 1 + self.statusSelector.position[2] - self.statusSelector.absSize[2] - 30 * 1 / g_screenHeight)
  v9:updateAbsolutePosition()
  v9:setAnchors(0, 0, self.buttonBox.absSize[2] + 20 * 1 / g_screenHeight, 1 + self.statusSelector.position[2] - self.statusSelector.absSize[2] - 30 * 1 / g_screenHeight)
  v9:setAnchors(0.5, 0.5, 4 / g_screenHeight, 1 - 4 / g_screenHeight)
  v9:setPosition(self.filterBoxContainer.absSize[1] - self.statusListSlider.absSize[1] * 1.5)
  v9:setPosition(0, self.statusList.absPosition[2] + self.statusList.absSize[2])
  v9:setPosition(0, self.statusList.absPosition[2] - self.statusListBottomClipper.absSize[2])
  v9:setAnchors(0, 0, self.buttonBox.absSize[2] + 20 * 1 / g_screenHeight, 1 - self.mapPageSelector.absSize[2] - 45 * 1 / g_screenHeight)
  v9:updateAbsolutePosition()
  v9:setAnchors(0, 0, self.buttonBox.absSize[2] + 20 * 1 / g_screenHeight, 1 - self.mapPageSelector.absSize[2] - 45 * 1 / g_screenHeight)
  v9:setAnchors(0.5, 0.5, 0 + 4 / g_screenHeight, 1 - 4 / g_screenHeight)
  v9:setPosition(self.filterBoxContainer.absSize[1] - self.statusListSlider.absSize[1] * 1.5)
  v9:setPosition(0, self.vehiclesList.absPosition[2] + self.vehiclesList.absSize[2])
  v9:setPosition(0, self.vehiclesList.absPosition[2] - self.vehiclesListBottomClipper.absSize[2])
  v9:setAnchors(0, 0, self.buttonBox.absSize[2] + 20 * 1 / g_screenHeight, self.pointsFilterButtonBox.absPosition[2] - self.pointsFilterButtonBox.position[2] - 20 * 1 / g_screenHeight)
  v9:updateAbsolutePosition()
  v9:setAnchors(0, 0, self.buttonBox.absSize[2] + 20 * 1 / g_screenHeight, self.pointsFilterButtonBox.absPosition[2] - self.pointsFilterButtonBox.position[2] - 20 * 1 / g_screenHeight)
  v9:setAnchors(0.5, 0.5, 0 + 4 / g_screenHeight, 1 - 4 / g_screenHeight)
  v9:setPosition(self.filterBoxContainer.absSize[1] - self.statusListSlider.absSize[1] * 1.5)
  v9:setPosition(0, self.pointsList.absPosition[2] + self.pointsList.absSize[2])
  v9:setPosition(0, self.pointsList.absPosition[2] - self.pointsListBottomClipper.absSize[2])
  v9:setAnchors(0, 0, self.buttonBox.absSize[2] + 20 * 1 / g_screenHeight, 1 - self.mapPageSelector.absSize[2] - 45 * 1 / g_screenHeight)
  v9:updateAbsolutePosition()
  v9:setAnchors(0, 0, self.buttonBox.absSize[2] + 20 * 1 / g_screenHeight, 1 - self.mapPageSelector.absSize[2] - 45 * 1 / g_screenHeight)
  v9:setAnchors(0.5, 0.5, 0 + 4 / g_screenHeight, 1 - 4 / g_screenHeight)
  v9:setPosition(self.filterBoxContainer.absSize[1] - self.statusListSlider.absSize[1] * 1.5)
  v9:setPosition(0, self.fieldsList.absPosition[2] + self.fieldsList.absSize[2])
  v9:setPosition(0, self.fieldsList.absPosition[2] - self.fieldsListBottomClipper.absSize[2])
  v9:setAnchors(0, 0, self.buttonBox.absSize[2] + 15 * 1 / g_screenHeight, self.aiWorkersListTitle.absPosition[2] + 20 * 1 / g_screenHeight)
  v9:updateAbsolutePosition()
  v9:setAnchors(0, 0, self.buttonBox.absSize[2] + 15 * 1 / g_screenHeight, self.aiWorkersListTitle.absPosition[2] + 20 * 1 / g_screenHeight)
  v9:setAnchors(0.5, 0.5, 0 + 4 / g_screenHeight, 1 - 4 / g_screenHeight)
  v9:setPosition(self.filterBoxContainer.absSize[1] - self.statusListSlider.absSize[1] * 1.5)
  v9:setPosition(0, self.aiWorkersList.absPosition[2] + self.aiWorkersList.absSize[2])
  v9:setPosition(0, self.aiWorkersList.absPosition[2] - self.aiWorkersListBottomClipper.absSize[2])
end
function InGameMenuMobileMapFrame:setInGameMap(v1)
  self.inGameMapBase = v1
  v2:setIngameMap(v1)
  if v1 ~= nil then
    local v2 = v1:createCustomFilter(false)
    self.customFilterFarmlands = v2
  end
end
function InGameMenuMobileMapFrame:setTerrainSize(v1)
  v2:setTerrainSize(v1)
end
function InGameMenuMobileMapFrame:setMissionFruitTypes(v1)
  self.missionFruitTypes = v1
end
function InGameMenuMobileMapFrame:setClient(v1)
  self.client = v1
end
function InGameMenuMobileMapFrame:setPlayerFarm(v1)
  self.playerFarm = v1
end
function InGameMenuMobileMapFrame.assignGroundStatusColors(v0, v1, v2, v3)
  v1:setSize(v1.absSize[1] / #v2, nil)
  local v5, v6, v7, v8 = unpack(InGameMenuMobileMapFrame.STATUS_BG_COLOR_UVS)
  local v9 = GuiUtils.getUVs({v5, v6, v7 / #v2, v8}, {2048, 2048})
  local v13 = unpack(v9)
  v1:setImageUVs(...)
  local v12 = unpack(v2[1])
  GuiOverlay.setSelectedColor(...)
  if 1 < #v2 then
    -- TODO: structure LOP_FORNPREP (pc 65, target 131)
    local v14 = v1:clone()
    table.insert({}, v14)
    v14:setSize(v1.absSize[1] / #v2, nil)
    local v15 = GuiUtils.getUVs({v5 + v7 / #v2 * (2 - 1), v6, v7 / #v2, v8}, {2048, 2048})
    local v18 = unpack(v15)
    v14:setImageUVs(...)
    v14:setPosition((2 - 1) * v1.absSize[1] / #v2, 0)
    local v17 = unpack(v2[2])
    GuiOverlay.setSelectedColor(...)
    v14.getOverlayState = function()
      if u0.isStatusEnabled then
        -- if GuiOverlay.STATE_SELECTED then goto L9 end
      end
      return GuiOverlay.STATE_NORMAL
    end
    -- TODO: structure LOP_FORNLOOP (pc 130, target 66)
    for v14, v15 in ipairs({}) do
      v1:addElement(v15)
    end
  end
end
function InGameMenuMobileMapFrame:resetUIDeadzones()
  v1:clearCursorDeadzones()
  if self.mode == InGameMenuMobileMapFrame.MODE_CREATE_JOB then
    local v1 = self:getIsPicking()
    if not v1 then
      v1:addCursorDeadzone(0, 0, 1, 1)
      return
    end
  end
  v1:addCursorDeadzone(0, 0, self.filterBoxContainer.absPosition[1] + self.filterBoxContainer.absSize[1], self.filterBoxContainer.absPosition[2] + self.filterBoxContainer.absSize[2])
end
function InGameMenuMobileMapFrame:onOverviewOverlayFinished(v1)
  self.foliageStateOverlay = v1
  self.foliageStateOverlayIsReady = true
  v2:setVisible(false)
end
function InGameMenuMobileMapFrame:generateOverviewOverlay()
  if self.foliageStateOverlay == nil then
    self.foliageStateOverlayIsReady = false
  end
  v1:setVisible(true)
  v1:setSize(self.dynamicMapImageLoading.absSize[1] + 80 / g_screenWidth)
  for v5, v6 in pairs(self.fruitTypeFilterMapping) do
    v1[v6] = self.fruitTypeFilter[v5]
  end
  v2 = v2:getState()
  if v2 == InGameMenuMobileMapFrame.MAP_FRUIT_TYPE then
    v3:generateFruitTypeOverlay(self.overviewOverlayFinishedCallback, v1)
    return
  end
  if v2 == InGameMenuMobileMapFrame.MAP_GROWTH then
    v3:generateGrowthStateOverlay(self.overviewOverlayFinishedCallback, self.growthStateFilter, v1)
    return
  end
  if v2 == InGameMenuMobileMapFrame.MAP_SOIL then
    v3:generateSoilStateOverlay(self.overviewOverlayFinishedCallback, self.soilStateFilter)
  end
end
function InGameMenuMobileMapFrame:setMode(v1)
  self.mode = v1
  if v1 ~= InGameMenuMobileMapFrame.MODE_NONE then
    self:generateOverviewOverlay()
  end
  v2:restoreDefaultFilter()
  self:resetUIDeadzones()
end
function InGameMenuMobileMapFrame:setMapSelectionItem(v1)
  v2:setSelectedHotspot(v1)
  self.selectedField = nil
  v2:removeMapHotspot(self.aiTargetMapHotspot)
  if self.currentHotspot ~= nil then
    v2:setBlinking(false)
  end
  if v1 ~= nil then
    local v12 = InGameMenuMapUtil.getHotspotVehicle(v1)
    if v12 ~= nil then
      if self.mapPageSelector.state ~= InGameMenuMobileMapFrame.PAGE_ID.VEHICLES and self.mapPageSelector.state ~= InGameMenuMobileMapFrame.PAGE_ID.AI then
        self.blockListSelectionEvents = true
        v12:setState(InGameMenuMobileMapFrame.PAGE_ID.VEHICLES, true)
        self.blockListSelectionEvents = false
      end
      self.currentHotspot = v1
      if v11 == InGameMenuMobileMapFrame.PAGE_ID.AI then
        -- if v0.aiWorkersList then goto L97 end
      end
      self.currentList = self.vehiclesList
      v12 = v9:getName()
      v12 = v9:getImageFilename()
      if g_currentMission.tourIconsBase ~= nil then
        -- cmp-jump LOP_JUMPXEQKB R12 aux=0x80000000 -> L139
      end
      if v9.getIsEnterableFromMenu ~= nil then
        v12 = v9:getIsEnterableFromMenu()
      end
      if not self.isResetPending then
        v12 = v9:getCanBeReset()
        if v12 then
          v12 = v1:getCategory()
          if v12 ~= MapHotspot.CATEGORY_AI then
          end
        end
      end
      if v9.spec_rideable == nil then
      end
      v12:setImageFilename(v8)
      local v14 = v9:getBrand()
      v12 = v12:getBrandByIndex(...)
      v13:setImageFilename(v12.image)
      v13:setText(v7)
      v13:setVisible(not true)
      v13:setVisible(true)
      if true then
        local v13 = v9:getCluster()
        local v16 = v13:getRidingFactor()
        v14 = math.floor(v16 * 100)
        local v19 = v19:getText("ui_horseDailyRiding")
        local v17 = string.format("%s: %s%%", v19, v14)
        v15:setText(...)
      end
      v13:setImageFilename(v8)
      v13:setVisible(true)
      v13:setImageFilename(v12.image)
      v13:setText(v7)
      for v16, v17 in pairs(self.vehicleDetailsAttachables) do
        if v9.childVehicles[v16] ~= nil then
          v19 = v17:getDescendantByName("text")
          local v22 = v9.childVehicles[v16]:getName()
          v19:setText(...)
          local v20 = v17:getDescendantByName("icon")
          local v24 = unpack(v9.childVehicles[v16].mapHotspot.icon.uvs)
          v20:setImageUVs(...)
          v17:setVisible(true)
        else
          v17:setVisible(false)
        end
      end
      -- TODO: structure LOP_FORNPREP (pc 292, target 502)
      v16:setVisible(false)
      -- TODO: structure LOP_FORNLOOP (pc 300, target 293)
      -- goto L502  (LOP_JUMP +200)
    end
    v12 = v1:isa(PlaceableHotspot)
    if v12 then
      v12 = v1:getName()
      -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L502
      if v11 ~= InGameMenuMobileMapFrame.PAGE_ID.POINTS and v11 ~= InGameMenuMobileMapFrame.PAGE_ID.AI then
        self.blockListSelectionEvents = true
        v12:setState(InGameMenuMobileMapFrame.PAGE_ID.POINTS, true)
        self.blockListSelectionEvents = false
      end
      self.currentHotspot = v1
      if v11 == InGameMenuMobileMapFrame.PAGE_ID.AI then
        -- if v0.aiWorkersList then goto L363 end
      end
      self.currentList = self.pointsList
      v12 = v1:getPlaceable()
      if v12 ~= nil then
        v13 = v12:getImageFilename()
        v13:setImageFilename(v13)
        v13:setText(v7)
        v13:setImageFilename(v13)
        v13:setVisible(false)
        v13:setText(v7)
        if v12.storeItem ~= nil then
          g_currentMission.slotSystem.slotLimit = math.huge
          v15 = v15:makeDisplayItem(v12.storeItem)
          self:setDetailAttributes(v12.storeItem, v15)
          g_currentMission.slotSystem.slotLimit = g_currentMission.slotSystem.slotLimit
        end
      end
      if g_currentMission.currentMapTargetHotspot ~= v1 then
      end
      -- goto L502  (LOP_JUMP +63)
    end
    v12 = v1:isa(FieldHotspot)
    -- if not v12 then goto L502 end
    if v11 ~= InGameMenuMobileMapFrame.PAGE_ID.FIELDS then
      self.blockListSelectionEvents = true
      v12:setState(InGameMenuMobileMapFrame.PAGE_ID.FIELDS, true)
      self.blockListSelectionEvents = false
      if self.currentHotspot ~= nil then
        v12:setBlinking(false)
      end
    end
    self.currentHotspot = v1
    self.currentList = self.fieldsList
    v12 = v1:getField()
    v13 = v12:getIsAIActive()
    self.selectedField = v12.fieldId
  else
    self.currentHotspot = nil
  end
  if self.currentHotspot ~= nil then
    v12:setBlinking(true)
  end
  if v10 then
    v15 = v15:getText("action_rideAnimal")
    v14 = string.format(v15, v7)
    v12:setText(...)
    v13 = GuiUtils.getUVs(InGameMenuMobileMapFrame.UV.BUTTON_RIDE_HORSE)
    self.buttonEnterVehicle.touchIcon.uvs = v13
  else
    v14 = v14:getText("button_enterVehicle")
    v12:setText(...)
    v13 = GuiUtils.getUVs(InGameMenuMobileMapFrame.UV.BUTTON_ENTER_VEHICLE)
    self.buttonEnterVehicle.touchIcon.uvs = v13
  end
  v12:setTextSize(self.buttonsResizeTextSize)
  self:refreshContextInput()
  self:showContextInput(v2, v3, v4, v5, v6)
  self.canEnter = v2
  self.canReset = v3
  self.canSetMarker = v4
  self.removeMarker = v5
  self.canBuy = v6
end
function InGameMenuMobileMapFrame:showDetailsBox(v1)
  if not v1 and self.currentList == self.aiWorkersList and self.currentHotspot == nil then
  end
  if v2 ~= nil then
    v2:setVisible(v3)
  end
  if not not v1 and v2 ~= nil and self.currentList ~= self.aiWorkersList then
  end
  v4:setVisible(v3)
  v4:updateScrollClippers()
  if self.currentList.sliderElement ~= nil and self.currentList.sliderElement.needsSlider and 0 < self.currentList.totalItemCount then
    v4:setVisible(v3)
  end
  if self.currentList == self.pointsList then
    v4:setVisible(v3)
  end
end
function InGameMenuMobileMapFrame:showActionMessage(v1, v2)
  if v1 ~= nil then
    v4:setVisible(true)
    v4:setText(v1)
  elseif v2 ~= nil then
    v4:setVisible(true)
    v4:setLocaKey(v2)
  else
    v4:setVisible(false)
  end
  if v3 then
    v4:setVisible(true)
    v4:setSize(self.actionMessage.absSize[1] + 80 / g_screenWidth)
  end
end
function InGameMenuMobileMapFrame:setColorBlindMode(v1)
  if v1 ~= self.isColorBlindMode then
    self.isColorBlindMode = v1
    v2:setColorBlindMode(self.isColorBlindMode)
    v2:reloadData()
    self:generateOverviewOverlay()
  end
end
function InGameMenuMobileMapFrame:setActiveJobTypeSelection(v1)
  if self.currentJob ~= nil then
    -- if v1 == v0.currentJob.jobTypeIndex then goto L213 end
  end
  -- TODO: structure LOP_FORNPREP (pc 17, target 27)
  v5:delete()
  -- TODO: structure LOP_FORNLOOP (pc 26, target 18)
  local v2 = v2:createJob(v1)
  self.currentJob = v2
  if g_currentMission.player ~= nil then
  end
  v3:applyCurrentState(self.currentJobVehicle, g_currentMission, v2, false)
  self.currentJobElements = {}
  local v4 = v4:getGroupedParameters()
  for v6, v7 in ipairs(...) do
    local v9 = v7:getParameters()
    for v11, v12 in ipairs(...) do
      local v14 = v12:getType()
      if v14 == AIParameterType.TEXT then
        break
      elseif v14 == AIParameterType.POSITION then
        local v15 = v15:clone(self.aiTaskDialogLayout)
        v15 = v15:getDescendantByName("title")
        local v17 = v7:getTitle()
        v15:setText(...)
        v15 = v15:getDescendantByName("button")
        v15.aiParameter = v12
      else
        if v14 == AIParameterType.POSITION_ANGLE then
          v15 = v15:clone(self.aiTaskDialogLayout)
          v15 = v15:getDescendantByName("title")
          v17 = v7:getTitle()
          v15:setText(...)
          v15 = v15:getDescendantByName("button")
          v15.aiParameter = v12
        else
          if v14 ~= AIParameterType.SELECTOR and v14 ~= AIParameterType.UNLOADING_STATION and v14 ~= AIParameterType.LOADING_STATION then
            -- if v14 ~= AIParameterType.FILLTYPE then goto L175 end
          end
          v15 = v15:clone(self.aiTaskDialogLayout)
          v15:setDataSource(v12)
          v17 = v7:getTitle()
          v15:setLabel(...)
        end
      end
      v15:loadElementFromCustomValues(v13)
      v13.aiParameter = v12
      local v18 = v12:getCanBeChanged()
      v13:setDisabled(not v18)
      table.insert(self.currentJobElements, v13)
    end
  end
  self:updateParameterValueTexts()
  self:validateParameters()
  v3:invalidateLayout()
  self:refreshContextInput()
end
function InGameMenuMobileMapFrame:updateVehicles()
  self.vehicles = {{}, {}}
  if g_currentMission.player ~= nil then
    for v4, v5 in ipairs(g_currentMission.vehicles) do
      local v6 = v6:canPlayerAccess(v5)
      if not v6 then
        continue
      end
      v6 = v5:getShowInVehiclesOverview()
      if v6 then
        local v7 = v5:getName()
        local v10 = v5:getBrand()
        local v8 = v8:getBrandByIndex(...)
        if v8 ~= nil then
        end
        v6.name = v7
        v10 = SpecializationUtil.hasSpecialization(Drivable, v5.specializations)
        if v10 then
        else
        end
        if self.vehicles[v9] == nil then
          self.vehicles[v9] = {}
        end
        table.insert(self.vehicles[v9], v6)
      else
        v6 = SpecializationUtil.hasSpecialization(Rideable, v5.specializations)
        if not v6 then
          continue
        end
        v7 = v5:getName()
        if self.vehicles[3] == nil then
          self.vehicles[3] = {}
        end
        table.insert(self.vehicles[3], v6)
      end
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 130, target 139)
  table.sort(self.vehicles[1], function(self, v1)
    if self == nil then
      return true
    end
    if v1 == nil then
      return false
    end
    if self.name >= v1.name then
    end
    return true
  end)
  -- TODO: structure LOP_FORNLOOP (pc 138, target 131)
end
function InGameMenuMobileMapFrame:updatePoints()
  self.hotspotsSorted = {}
  for v7, v8 in pairs(self.inGameMap.ingameMap.hotspots) do
    local v9 = v8:isa(PlaceableHotspot)
    if not v9 then
      continue
    end
    v9 = v1(v8)
    if self.hotspotsSorted[v9] == nil then
      self.hotspotsSorted[v9] = {}
    end
    table.insert(self.hotspotsSorted[v3], v8)
  end
  -- TODO: structure LOP_FORNPREP (pc 54, target 63)
  table.sort(self.hotspotsSorted[1], function(self, v1)
    if self == nil then
      return true
    end
    if v1 == nil then
      return false
    end
    local v3 = self:getName()
    local v4 = v1:getName()
    if v3 >= v4 then
    end
    return true
  end)
  -- TODO: structure LOP_FORNLOOP (pc 62, target 55)
  self:updatePointsFilterMapping()
end
function InGameMenuMobileMapFrame:updatePointsFilterMapping()
  self.hotspotFiltersMapping = {}
  for v5, v6 in pairs(self.hotspotFiltersActive) do
    if not v6 then
      continue
    end
    self.hotspotFiltersMapping[v1] = v5
  end
  if v1 == 1 then
    v2:setVisible(false)
    self:setMapSelectionItem(nil)
  else
    v2:setVisible(self.pointsList.visible)
  end
  v2:reloadData()
end
function InGameMenuMobileMapFrame:updateFields()
  self.fields = {}
  local v2 = v2:getFields()
  for v4, v5 in pairs(...) do
    local v8 = v8:getFarmlandOwner(v5.farmland.id)
    local v9 = v9:getFarmId()
    if v8 == v9 then
    else
    end
    if self.fields[v7] == nil then
      self.fields[v7] = {}
    end
    table.insert(self.fields[v7], v5)
  end
  -- TODO: structure LOP_FORNPREP (pc 59, target 68)
  table.sort(self.fields[1], function(self, v1)
    if self.fieldId >= v1.fieldId then
    end
    return true
  end)
  -- TODO: structure LOP_FORNLOOP (pc 67, target 60)
end
function InGameMenuMobileMapFrame:generateJobTypes()
  for v4, v5 in pairs(AIJobType) do
    local v7 = v7:createJob(v5)
    self.jobTypeInstances[v5] = v7
  end
end
function InGameMenuMobileMapFrame:startGoToJob(v1, v2, v3, v4)
  v6:setVehicle(v1)
  v6:setPosition(v2, v3)
  v6:setAngle(v4)
  self.jobTypeInstances[AIJobType.GOTO]:setValues()
  local v6, v7 = self.jobTypeInstances[AIJobType.GOTO]:validate(g_currentMission.player.farmId)
  if v6 then
    v9:setFocus(self.aiWorkersList)
    self:tryStartJob(self.jobTypeInstances[AIJobType.GOTO], g_currentMission.player.farmId, function(self)
      if self == AIJob.START_SUCCESS then
        local v3 = v3:createJob(AIJobType.GOTO)
        u0.jobTypeInstances[AIJobType.GOTO] = v3
      end
    end)
    return true
  end
  local v9 = tostring(v7)
  InfoDialog.show(v9, nil, nil, DialogElement.TYPE_ERROR)
  return false
end
function InGameMenuMobileMapFrame:getIsPicking()
  if not self.isPickingRotation then
  end
  return v1
end
function InGameMenuMobileMapFrame:executePickingCallback(...)
  v1:setHotspotSelectionActive(true)
  self.isPickingLocation = false
  self.isPickingRotation = false
  v1:unlockMapMovement()
  self:resetUIDeadzones()
  self.pickingCallback = nil
  if self.pickingCallback ~= nil then
    self.pickingCallback(...)
  end
end
function InGameMenuMobileMapFrame:startPickPosition(v1, v2)
  v3:setHotspotSelectionActive(false)
  v3:setIsCursorAvailable(false)
  self.isPickingLocation = true
  self.hasPickedLocationTouch = false
  self:showActionMessage(nil, "ui_ai_pickTargetLocation")
  self:resetUIDeadzones()
  v3:removeMapHotspot(self.aiTargetMapHotspot)
  v3:addMapHotspot(self.aiTargetMapHotspot)
  self.pickingCallback = function(self, v1, v2)
    v3:showActionMessage()
    v3:setIsCursorAvailable(true)
    u0.hasPickedRotationTouch = false
    if self then
      v3:setValue(v1, v2)
      v3:setWorldPosition(v1, v2)
    end
    u2(self, v1, v2, u1)
    v3:validateParameters()
  end
end
function InGameMenuMobileMapFrame:startPickPositionAndRotation(v1, v2)
  self.isPickingLocation = true
  self.hasPickedLocationTouch = false
  v3:setHotspotSelectionActive(false)
  v3:setIsCursorAvailable(false)
  self:showActionMessage(nil, "ui_ai_pickTargetLocation")
  self:resetUIDeadzones()
  v3:removeMapHotspot(self.aiTargetMapHotspot)
  v3:addMapHotspot(self.aiTargetMapHotspot)
  self.pickingCallback = function(self, v1, v2)
    v3:showActionMessage()
    v3:setIsCursorAvailable(true)
    u0.hasPickedRotationTouch = false
    if self then
      v3:setHotspotSelectionActive(false)
      v3:setIsCursorAvailable(false)
      v3:setWorldPosition(v1, v2)
      u0.isPickingRotation = true
      v3:lockMapMovement()
      u0.pickingRotationOrigin = {v1, v2}
      local v4 = v4:getSnappingAngle()
      u0.pickingRotationSnapAngle = v4
      v3:showActionMessage(nil, "ui_ai_pickTargetRotation")
      v3:resetUIDeadzones()
      u0.pickingCallback = function(self, v1)
        v2:showActionMessage()
        v2:setIsCursorAvailable(true)
        if self then
          v2:setPosition(u2, u3)
          v2:setAngle(v1)
          local v2 = v2:getAngle()
          if u0.lastInputHelpMode ~= GS_INPUT_HELP_MODE_TOUCH then
            v3:setWorldRotation(v2 + math.pi)
          end
          u4(true, u2, u3, v1)
        else
          u4(false, u2, u3, nil)
        end
        v2:validateParameters()
      end
    else
      u2(false, nil, nil, nil)
    end
    v3:validateParameters()
  end
end
function InGameMenuMobileMapFrame:onClickHotspot(v1, v2)
  if self.mode ~= InGameMenuMobileMapFrame.MODE_CREATE_JOB then
    self:setMapSelectionItem(v2)
    self:showDetailsBox(true)
    if not InGameMenuMobileMapFrame.MODE_OVERVIEW then
      -- if v0.mode ~= InGameMenuMobileMapFrame.MODE_NONE then goto L39 end
      -- if v0.currentHotspot == v2 then goto L39 end
    end
    self:selectHotspotInList(v2, self.currentList)
    self:resizeButtonTexts()
  end
end
function InGameMenuMobileMapFrame:onClickMap(v1, v2, v3)
  if self.mode ~= InGameMenuMobileMapFrame.MODE_OVERVIEW then
    -- if v0.mode ~= InGameMenuMobileMapFrame.MODE_NONE then goto L35 end
  end
  if 0 < self.currentList.totalItemCount then
    self:showDetailsBox(false)
    v4:setFocus(self.currentList)
    return
  end
  if self.mode ~= InGameMenuMobileMapFrame.MODE_AI_PAGE then
    -- if v0.mode ~= InGameMenuMobileMapFrame.MODE_CREATE_JOB then goto L134 end
  end
  if self.isPickingLocation then
    if self.lastInputHelpMode == GS_INPUT_HELP_MODE_TOUCH then
      local v4, v5 = v4:getLocalPosition(self.lastTouchPosX, self.lastTouchPosY)
      self:setTargetPointHotspotPosition(v4, v5)
      -- goto L131  (LOP_JUMP +56)
    end
    -- if v0.hasPickedLocationTouch then goto L131 end
    self:executePickingCallback(true, v2, v3)
  elseif self.isPickingRotation then
    v4 = math.atan2(v2 - self.pickingRotationOrigin[1], v3 - self.pickingRotationOrigin[2])
    if self.lastInputHelpMode == GS_INPUT_HELP_MODE_TOUCH then
      v5:setWorldRotation(v4 + math.pi)
      self.hasPickedRotationTouch = true
    else
      v5:panToHotspot(self.aiTargetMapHotspot)
      self:executePickingCallback(true, v4)
    end
  end
  self:refreshContextInput()
end
function InGameMenuMobileMapFrame:selectHotspotInList(v1, v2)
  local v3, v4 = self:findListItemForHotspot(v1, v2)
  self.blockListSelectionEvents = true
  v2:setSelectedItem(v3, v4)
  self.blockListSelectionEvents = self.blockListSelectionEvents
end
function InGameMenuMobileMapFrame:findListItemForHotspot(v1, v2)
  if v2 == self.pointsList then
  elseif v2 == self.fieldsList then
  end
  for v7, v8 in pairs(v3) do
    -- TODO: structure LOP_FORNPREP (pc 23, target 79)
    if v2 == self.vehiclesList then
      -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L78
      -- if v0.vehicles[v7][1].vehicle ~= v1.vehicle then goto L78 end
      return v7, 1
    elseif v2 == self.pointsList then
      -- if v1 ~= v0.hotspotsSorted[v0.hotspotFiltersMapping[v7]][1] then goto L78 end
      return v7, 1
    else
      if v2 == self.fieldsList and v1 ~= nil and v1.field == self.fields[v7][1] then
        return v7, 1
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 78, target 24)
  end
  return nil, nil
end
function InGameMenuMobileMapFrame:resizeButtonTexts()
  if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
    if self.buttonEnterVehicle.visible then
    elseif self.buttonGoToJob.visible then
    else
      for v5, v6 in pairs(self.buttonsResizeNeeded) do
        v6:setTextSize(v6.defaultTextSize)
      end
      self.buttonsResizeTextSize = self.buttonSelectInGame.defaultTextSize
    end
    while true do
      -- if v0.buttonBox.absSize[1] > v1 then goto L193 end
      for v5, v6 in pairs(self.buttonsResizeNeeded) do
        v6:setTextSize(v6.textSize - 1 / g_screenHeight)
      end
      self.buttonsResizeTextSize = self.buttonSelectInGame.textSize
      if self.buttonEnterVehicle.visible then
      elseif not self.buttonGoToJob.visible then
        continue
      end
    end
    return
  end
  for v4, v5 in pairs(self.buttonsResizeNeeded) do
    v5:setTextSize(v5.defaultTextSize)
  end
  self.buttonsResizeTextSize = self.buttonSelectInGame.defaultTextSize
end
function InGameMenuMobileMapFrame:onMoneyChanged(v1, v2)
  if v1 == self.playerFarm.farmId and self.balanceText ~= nil then
    v3:setValue(v2)
    local v4 = math.floor(v2)
    if v4 <= -1 then
    end
    v4:applyProfile(v3)
    v4:invalidateLayout()
  end
end
function InGameMenuMobileMapFrame:onAIJobStarted(v1, v2)
  self.blockListSelectionEvents = true
  v3:reloadData()
  v3:setFocus(self.aiWorkersList)
  self.blockListSelectionEvents = false
  local v3 = v3:getIngameMap()
  for v9, v10 in pairs(v3.hotspots) do
    local v11 = InGameMenuMapUtil.getHotspotVehicle(v10)
    if not (v11 ~= nil) then
      continue
    end
    if not (v11.getJob ~= nil) then
      continue
    end
    local v12 = v11:getJob()
    if not (v12 ~= nil) then
      continue
    end
    local v13 = v10:isa(AIHotspot)
    if not v13 then
      continue
    end
    if not (v1.jobId == v12.jobId) then
      continue
    end
  end
  self:setMapSelectionItem(v5)
  v7 = v7:getText("ai_startStateSuccess")
  InfoDialog.show(...)
end
function InGameMenuMobileMapFrame:onAIJobRemoved(v1)
  v2:reloadData()
end
function InGameMenuMobileMapFrame:onAITaskSkipped()
  self:refreshContextInput()
end
function InGameMenuMobileMapFrame:onAIJobStopped(v1, v2)
  if v2 ~= nil and v1 ~= nil and g_currentMission.player ~= nil and v1.startedFarmId == g_currentMission.player.farmId then
    local v3 = v1:getHelperName()
    local v4 = v2:getMessage()
    local v7 = string.format(v4, v3 or "Unknown")
    self:addStatusMessage(...)
  end
end
function InGameMenuMobileMapFrame:onInsetsChanged()
  self:updateElementSizes()
end
function InGameMenuMobileMapFrame:onDrawPostIngameMap()
  if self.mode == InGameMenuMobileMapFrame.MODE_OVERVIEW and self.foliageStateOverlayIsReady then
    local v1, v2 = v1:getMapSize()
    local v3, v4 = v3:getMapPosition()
    local v12 = GuiUtils.getUVs({(self.filterBoxContainer.absSize[1] + self.leftInset) * g_screenWidth - v3 * g_screenWidth, 0, v1 * g_screenWidth + (self.filterBoxContainer.absSize[1] + self.leftInset) * g_screenWidth - v3 * g_screenWidth, v2 * g_screenHeight}, {v1 * g_screenWidth, v2 * g_screenHeight})
    local v11, v12, v13, v14, v15, v16, v17, v18 = unpack(...)
    setOverlayUVs(self.foliageStateOverlay, v11, v12, v13, v14, v15, v16, v17, v18)
    renderOverlay(self.foliageStateOverlay, self.filterBoxContainer.absSize[1] + self.leftInset, v4, v1 + self.filterBoxContainer.absSize[1] + self.leftInset - v3, v2)
  end
end
function InGameMenuMobileMapFrame:validateParameters()
  if self.currentJob ~= nil then
    v3:setValues()
    local v3, v4 = v3:validate(g_currentMission.player.farmId)
    self:updateWarnings()
  end
  v3:setText(v2)
  v3:setSize(self.aiTaskDialogErrorMessage.absSize[1] + 80 / g_screenWidth)
  v3:setVisible(not v1)
end
function InGameMenuMobileMapFrame:updateWarnings()
  for v4, v5 in ipairs(self.currentJobElements) do
    local v7 = v5:getDescendantByName("invalid")
    if not (v7 ~= nil) then
      continue
    end
    local v11 = v5.aiParameter:getIsValid()
    v7:setVisible(not v11)
  end
end
function InGameMenuMobileMapFrame:addStatusMessage(v1)
  table.insert(self.statusMessages, {removeTime = g_time + 5000, text = v1})
  self:updateStatusMessages()
end
function InGameMenuMobileMapFrame:updateStatusMessages()
  for v5, v6 in ipairs(self.statusMessages) do
  end
  v2:setText(v1)
  v5 = getTextLength(self.statusMessage.textSize, v1, 99999)
  if 0 >= v5 then
  end
  v2:setVisible(true)
  setTextBold(true)
  v4 = getTextWidth(self.statusMessage.textSize, self.statusMessage.text)
  v5 = getTextHeight(self.statusMessage.textSize, self.statusMessage.text)
  setTextBold(false)
  v5:setSize(v4 + 20 / g_screenWidth, v5 + 14 / g_screenWidth)
  v5:setPosition(nil, self.statusMessage.absPosition[2] + self.statusMessage.textSize * 0.5 - (v5 + 14 / g_screenWidth) * 0.5)
end
function InGameMenuMobileMapFrame:assignItemFillTypesData(v1, v2, v3)
  if #self.pointDetailsValue >= v3 then
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x80000002 -> L18
  end
  v5:setVisible(false)
  return v3
  v7:applyProfile(v1)
  v7:setVisible(true)
  v7:setVisible(true)
  v7:setVisible(false)
  -- TODO: structure LOP_FORNPREP (pc 55, target 95)
  local v10 = v10:clone(v4)
  v10:setVisible(true)
  table.insert(self.clonedElements, v10)
  v10:applyProfile("inGameMenuMobileMapDetailsIconTemplate")
  v10:setImageFilename(v2[1])
  -- TODO: structure LOP_FORNLOOP (pc 94, target 56)
  local v7 = math.min(self.pointDetailsLayout.absSize[1] * 0.75, 0 + v10.absSize[1] + v10.margin[1] + v10.margin[3])
  v8:setSize(v7, nil)
  v4:setPosition(0)
  v4:setSize(0 + v10.absSize[1] + v10.margin[1] + v10.margin[3], nil)
  v4:invalidateLayout()
  if v7 < 0 + v10.absSize[1] + v10.margin[1] + v10.margin[3] then
    self.marqueeBoxes[v4] = 0
  else
    self.marqueeBoxes[v4] = nil
  end
  return v3 + 1
end
function InGameMenuMobileMapFrame:assignItemTextData(v1, v2)
  -- TODO: structure LOP_FORNPREP (pc 6, target 93)
  if v2 ~= nil and 1 <= #v2.attributeValues then
    local v8 = tostring(v2.attributeValues[1])
    if v2.attributeIconProfiles[1] ~= nil and v2.attributeIconProfiles[1] ~= "" then
      v10:setText(v8)
      v10:updateAbsolutePosition()
      local v10 = v2.attributeIconProfiles[1]:startsWith("shopListAttributeIcon")
      if v10 then
        local v11 = v2.attributeIconProfiles[1]:sub(22)
      end
      v10:applyProfile(v9)
      if v8 ~= nil and v8 == "" then
      end
    end
  end
  v8:setVisible(v7)
  v8:setVisible(v7)
  v8:setVisible(false)
  if v7 then
  end
  -- TODO: structure LOP_FORNLOOP (pc 92, target 7)
  return v3
end
function InGameMenuMobileMapFrame:setDetailAttributes(v1, v2)
  for v6, v7 in pairs(self.clonedElements) do
    v7:delete()
    self.clonedElements[v6] = nil
  end
  for v6, v7 in pairs(self.marqueeBoxes) do
    self.marqueeBoxes[v6] = nil
  end
  v3 = self:assignItemTextData(v1, v2)
  if v2 ~= nil then
    v4 = self:assignItemFillTypesData("inGameMenuMobileMapDetailsIconFillTypes", v2.fillTypeIconFilenames, v3 + 1)
    v5 = self:assignItemFillTypesData("inGameMenuMobileMapDetailsIconFillTypes", v2.foodFillTypeIconFilenames, v4)
    v5 = self:assignItemFillTypesData("inGameMenuMobileMapDetailsIconInput", v2.prodPointInputFillTypeIconFilenames, v5)
    v5 = self:assignItemFillTypesData("inGameMenuMobileMapDetailsIconOutput", v2.prodPointOutputFillTypeIconFilenames, v5)
    v5 = self:assignItemFillTypesData("inGameMenuMobileMapDetailsIconInput", v2.sellingStationFillTypesIconFilenames, v5)
    self:assignItemFillTypesData("inGameMenuMobileMapDetailsIconOutput", v2.buyingStationFillTypesIconFilenames, v5)
  end
  v4:invalidateLayout()
end
function InGameMenuMobileMapFrame:updateMarqueeAnimation(v1)
  for v5, v6 in pairs(self.marqueeBoxes) do
    if 9000 * (((v5.absSize[1] - v5.parent.absSize[1]) / v5.parent.absSize[1] - 1) * 0.5 + 1) <= v6 + v1 then
    end
    local v16 = math.abs(v6)
    local v12 = MathUtil.smoothstep(0.2, 0.8, v16 / v11)
    v5:setPosition(-(v9 * v12))
    self.marqueeBoxes[v5] = v6
  end
end
function InGameMenuMobileMapFrame:onSlotUsageChanged()
  self:refreshDetails()
end
function InGameMenuMobileMapFrame:getNumberOfItemsInSection(v1, v2)
  if v1 == self.vehiclesList then
    return #self.vehicles[v2]
  end
  if v1 == self.pointsList then
    return #self.hotspotsSorted[self.hotspotFiltersMapping[v2]]
  end
  if v1 == self.statusList then
    return #self.fieldStatus[self.statusSelector.state]
  end
  if v1 == self.fieldsList then
    if self.fields[v2] ~= nil then
      -- if #v0.fields[v2] then goto L49 end
    end
    return 0
  end
  if v1 == self.aiWorkersList then
    local v5 = v5:getActiveJobs()
    for v7, v8 in ipairs(...) do
    end
    return v3
  end
  return 0
end
function InGameMenuMobileMapFrame:populateCellForItemInSection(v1, v2, v3, v4)
  local v5 = v4:getAttribute("glyph")
  if v5 ~= nil then
    function v5.glyphElement.overlay.getIsVisible()
      if u0.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
        local self = self:getIsSelected()
        if self then
          local v1 = v1:getFocusedElement()
          if v1 ~= u2 then
          end
        end
      end
      return self
    end
  end
  if v1 == self.vehiclesList then
    local v8 = v4:getAttribute("icon")
    local v12 = unpack(self.vehicles[v2][v3].vehicle.mapHotspot.icon.uvs)
    v8:setImageUVs(...)
    local v9 = v4:getAttribute("text")
    v9:setText(self.vehicles[v2][v3].name)
    return
  end
  if v1 == self.pointsList then
    local v7 = v4:getAttribute("text")
    v9 = self.hotspotsSorted[self.hotspotFiltersMapping[v2]][v3]:getName()
    v7:setText(...)
    v7 = v4:getAttribute("icon")
    local v11 = unpack(self.hotspotsSorted[self.hotspotFiltersMapping[v2]][v3].icon.uvs)
    v7:setImageUVs(...)
    return
  end
  if v1 == self.statusList then
    self:populateStatusCellForItemInSection(v1, v2, v3, v4)
    return
  end
  if v1 == self.fieldsList then
    v7 = v4:getAttribute("text")
    local v13 = v13:getText("ui_fieldNo")
    v7:setText(v13 .. " " .. self.fields[v2][v3].fieldId)
    v7 = v4:getAttribute("size")
    v9 = v9:formatArea(self.fields[v2][v3].fieldArea, 2)
    v7:setText(...)
    v7 = v4:getAttribute("icon")
    if v2 == 1 then
      v7:applyProfile("inGameMenuMobileMapFieldsListIconOwned")
      v8 = v4:getAttribute("cost")
      v8:setText("")
      return
    end
    v7:applyProfile("inGameMenuMobileMapFieldsListIcon")
    v8 = v4:getAttribute("cost")
    local v10 = v10:formatMoney(v6.farmland.price, 0, true, true)
    v8:setText(...)
    return
  end
  if v1 == self.aiWorkersList then
    v9 = v9:getActiveJobs()
    for v11, v12 in ipairs(...) do
      if not (v12.startedFarmId == self.playerFarm.farmId) then
        continue
      end
      if not (v6 + 1 == v3) then
        continue
      end
      break
    end
    if v7 ~= nil then
      v8 = v4:getAttribute("text")
      v10 = v7:getDescription()
      v8:setText(...)
      v8 = v4:getAttribute("title")
      v10 = v7:getTitle()
      v8:setText(...)
      v8 = v4:getAttribute("helper")
      v10 = v7:getHelperName()
      v8:setText(...)
    end
  end
end
function InGameMenuMobileMapFrame:populateStatusCellForItemInSection(v1, v2, v3, v4)
  if self.fieldStatusFilters[v2][v3] == nil then
    self.fieldStatusFilters[v2][v3] = true
  end
  local v7 = v4:getAttribute("text")
  v7:setText(self.fieldStatus[self.statusSelector.state][v3].description)
  v7 = v4:getAttribute("text")
  v7.getIsSelected = function()
    return u0.fieldStatusFilters[u0.statusSelector.state][u1]
  end
  local v8 = v4:getAttribute("iconBg")
  -- TODO: structure LOP_FORNPREP (pc 51, target 59)
  v12:delete()
  -- TODO: structure LOP_FORNLOOP (pc 58, target 52)
  v8:applyProfile(InGameMenuMobileMapFrame.STATUS_BG_COLOR_PROFILE)
  if self.statusSelector.state == 1 then
    local v11 = unpack(self.fieldStatus[self.statusSelector.state][v3].colors[self.isColorBlindMode])
    GuiOverlay.setSelectedColor(...)
  else
    self:assignGroundStatusColors(v8, self.fieldStatus[self.statusSelector.state][v3].colors[self.isColorBlindMode], v4)
  end
  v8.getOverlayState = function()
    if u0.fieldStatusFilters[u0.statusSelector.state][u1] then
      -- if GuiOverlay.STATE_SELECTED then goto L17 end
    end
    return GuiOverlay.STATE_NORMAL
  end
  -- TODO: structure LOP_FORNPREP (pc 95, target 102)
  function v8.elements[#v8.elements].getOverlayState()
    if u0.fieldStatusFilters[u0.statusSelector.state][u1] then
      -- if GuiOverlay.STATE_SELECTED then goto L17 end
    end
    return GuiOverlay.STATE_NORMAL
  end
  -- TODO: structure LOP_FORNLOOP (pc 101, target 96)
  local v10 = v4:getAttribute("icon")
  if v5 == 1 then
    v10:setVisible(true)
    v10:setImageFilename(v6.iconFilename)
    v10.getOverlayState = function()
      if u0.fieldStatusFilters[u0.statusSelector.state][u1] then
        -- if GuiOverlay.STATE_SELECTED then goto L17 end
      end
      return GuiOverlay.STATE_NORMAL
    end
    return
  end
  v10:setVisible(false)
end
function InGameMenuMobileMapFrame:onListSelectionChanged(v1, v2, v3)
  if not self.isOpening and not self.blockListSelectionEvents then
    if v1 == self.aiWorkersList then
      local v4 = v4:getJobByIndex(v3)
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L120
      -- if not v4.vehicleParameter then goto L120 end
      local v5 = v5:getVehicle()
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L120
      local v6 = v5:getMapHotspot()
      if self.blockPanToHotspot then
        self.blockPanToHotspot = false
      else
        v7:panToHotspot(v6)
      end
      self:setMapSelectionItem(v6)
      return
    end
    if v1 ~= self.statusList then
      if v1 == self.vehiclesList then
        v6 = self.vehicles[v2][v3].vehicle:getMapHotspot()
      elseif v1 == self.pointsList then
      else
        if v1 == self.fieldsList then
          v6 = self.fields[v2][v3]:getMapHotspot()
        end
      end
      self.currentList = v1
      self.currentListItemSectionIndex = v1.selectedSectionIndex
      self.currentListItemIndex = v1.selectedIndex
      if self.blockPanToHotspot then
        self.blockPanToHotspot = false
      else
        v5:panToHotspot(v4)
      end
      self:setMapSelectionItem(v4)
    end
  end
end
function InGameMenuMobileMapFrame:getNumberOfSections(v1)
  if v1 == self.vehiclesList then
    return #self.vehicles
  end
  if v1 == self.pointsList then
    return #self.hotspotFiltersMapping
  end
  if v1 == self.fieldsList then
    return #self.fields
  end
  return 1
end
function InGameMenuMobileMapFrame:getTitleForSectionHeader(v1, v2)
  if v1 == self.vehiclesList then
    return v3:getText(InGameMenuMobileMapFrame.SECTION_NAMES.VEHICLES[v2])
  end
  if v1 == self.pointsList then
    v3 = v3:getText(InGameMenuMobileMapFrame.SECTION_NAMES.POINTS[self.hotspotFiltersMapping[v2]])
    return v3
  end
  if v1 == self.fieldsList then
    v3 = v3:getText(InGameMenuMobileMapFrame.SECTION_NAMES.FIELDS[v2])
    if v2 == 2 then
      local v8 = v8:getText("ui_balance")
      local v9 = v9:getBalance()
      local v7 = v7:formatMoney(v9, 0, true, true)
    end
    return v3
  end
  return ""
end
function InGameMenuMobileMapFrame:onClickListItem(v1)
  if not v1.parent.wasScrolling then
    if v1.indexInSection == self.currentListItemIndex and v1.sectionIndex == self.currentListItemSectionIndex then
      self:showDetailsBox(true)
      return
    end
    self.currentListItem = v1
  end
end
function InGameMenuMobileMapFrame:onClickStatusListItem(v1)
  if not v1.parent.wasScrolling then
    if self.fieldStatusFilters[self.statusSelector.state][v1.indexInSection] ~= nil then
    end
    v2[v3] = v4
  end
  self:generateOverviewOverlay()
  self:saveFilters()
end
function InGameMenuMobileMapFrame:onJobTypeChanged(v1)
  self:setActiveJobTypeSelection(self.currentJobTypes[v1])
end
function InGameMenuMobileMapFrame:updateParameterValueTexts()
  v1:removeMapHotspot(self.aiTargetMapHotspot)
  for v4, v5 in ipairs(self.currentJobElements) do
    local v7 = v5.aiParameter:getType()
    if v7 == AIParameterType.TEXT then
      local v8 = v5:getDescendantByName("title")
      local v11 = v5.aiParameter:getString()
      v8:setText(...)
    else
      if v7 ~= AIParameterType.POSITION then
        -- if v7 ~= AIParameterType.POSITION_ANGLE then goto L85 end
      end
      v8 = v5:getDescendantByName("text")
      local v10 = v6:getString()
      v8:setText(...)
      v8:addMapHotspot(self.aiTargetMapHotspot)
      local v8, v9 = v6:getPosition()
      v10:setWorldPosition(v8, v9)
      if not (v7 == AIParameterType.POSITION_ANGLE) then
        continue
      end
      v11 = v6:getAngle()
      v11:setWorldRotation(v11 + math.pi)
      continue
      v5:updateTitle()
    end
  end
end
function InGameMenuMobileMapFrame:onClickMultiTextOptionParameter(v1, v2)
  if self.currentJob ~= nil then
    v4:onParameterValueChanged(v2.aiParameter)
    self:updateParameterValueTexts()
  end
  self:validateParameters()
end
function InGameMenuMobileMapFrame:onClickPositionParameter(v1)
  self:startPickPosition(v1.aiParameter, function(self, v1, v2)
    if self then
      local v3 = v3:getDescendantByName("text")
      local v5 = v5:getString()
      v3:setText(...)
    end
    v3:setJobMenuVisible(true)
  end)
  self:setJobMenuVisible(false, true)
end
function InGameMenuMobileMapFrame:onClickPositionRotationParameter(v1)
  self:startPickPositionAndRotation(v1.aiParameter, function(self, v1, v2, v3)
    if self then
      local v4 = v4:getDescendantByName("text")
      local v6 = v6:getString()
      v4:setText(...)
    end
    v4:setJobMenuVisible(true)
  end)
  self:setJobMenuVisible(false, true)
end
function InGameMenuMobileMapFrame:registerInput()
  self:unregisterInput()
  v1:registerActionEvent(InputAction.MENU_ACCEPT, self, self.onMenuAccept, false, true, false, true)
  v1:registerActionEvent(InputAction.MENU_ACTIVATE, self, self.onMenuActivate, false, true, false, true)
  v1:registerActionEvent(InputAction.MENU_CANCEL, self, self.onMenuCancel, false, true, false, true)
  v1:registerActionEvent(InputAction.MENU_AXIS_LEFT_RIGHT, self, self.onMenuLeftRight, false, true, false, true)
  v1:registerActionEvent(InputAction.MENU_AXIS_LEFT_RIGHT, self, self.onMenuLeftRightContinuous, false, false, true, true)
end
function InGameMenuMobileMapFrame.unregisterInput(v0, v1)
  if v1 then
    -- if InGameMenuMobileMapFrame.CLEAR_CLOSE_INPUT_ACTIONS then goto L10 end
  end
  for v6, v7 in pairs(InGameMenuMobileMapFrame.CLEAR_INPUT_ACTIONS) do
    v8:removeActionEventsByActionName(v7)
  end
end
function InGameMenuMobileMapFrame:onMenuAccept()
  if self.mode ~= InGameMenuMobileMapFrame.MODE_NONE then
    -- if v0.mode ~= InGameMenuMobileMapFrame.MODE_OVERVIEW then goto L102 end
  end
  if self.currentList == self.statusList then
    self:onClickStatusListItem(self.currentList.sections[self.currentList.selectedSectionIndex].cells[self.currentList.selectedIndex])
    return
  end
  if self.currentList.visible then
    local v1 = v1:getFocusedElement()
    if self.currentList == self.pointsList and v1 ~= self.pointsList and v1.onClickCallback ~= nil then
      v1.onClickCallback(self)
      return
    end
    -- if 0 >= v0.currentList.totalItemCount then goto L124 end
    self:onClickListItem(self.currentList.sections[self.currentList.selectedSectionIndex].cells[self.currentList.selectedIndex])
    return
  end
  self:onDetailsButtonBack()
  return
  if self.mode == InGameMenuMobileMapFrame.MODE_CREATE_JOB then
    v1 = v1:getFocusedElement()
    if v1.name == "button" then
      v1.onClickCallback(self, v1)
    end
  end
end
function InGameMenuMobileMapFrame:onMenuActivate()
  if self.mode == InGameMenuMobileMapFrame.MODE_NONE and self.canEnter then
    self:onClickEnterVehicle()
    return
  end
  if self.mode == InGameMenuMobileMapFrame.MODE_NONE and self.canBuy then
    self:onClickBuyField()
    return
  end
  if self.mode == InGameMenuMobileMapFrame.MODE_AI_PAGE then
    local v1 = self:getCanCreateJob()
    if v1 then
      self:onCreateJob()
      return
    end
  end
  if self.mode == InGameMenuMobileMapFrame.MODE_AI_PAGE then
    v1 = self:getCanCancelJob()
    if v1 then
      self:onCancelJob()
      return
    end
  end
  if self.mode == InGameMenuMobileMapFrame.MODE_CREATE_JOB then
    self:onStartJob()
  end
end
function InGameMenuMobileMapFrame:onMenuCancel()
  if self.mode == InGameMenuMobileMapFrame.MODE_NONE then
    if self.canSetMarker then
      self:onClickTagPlace()
      return
    end
    -- if not v0.canReset then goto L41 end
    self:onClickResetVehicle()
    return
  end
  if self.mode == InGameMenuMobileMapFrame.MODE_AI_PAGE then
    local v1 = self:getCanGoTo()
    if v1 then
      self:onStartGoToJob()
      return
    end
    self:onSkipJobTask()
  end
end
function InGameMenuMobileMapFrame:onMenuLeftRight(v1, v2)
  if self.mapPageSelector.state == InGameMenuMobileMapFrame.PAGE_ID.STATUS then
    local v3 = math.abs(v2)
    if g_analogStickVTolerance < v3 then
      self:onStatusFilterChanged(v1, v2)
    end
  end
end
function InGameMenuMobileMapFrame:onMenuLeftRightContinuous(v1, v2)
  if self.mapPageSelector.state == InGameMenuMobileMapFrame.PAGE_ID.POINTS then
    v3:inputEvent(InputAction.MENU_AXIS_LEFT_RIGHT, v2)
    return
  end
  if self.mode == InGameMenuMobileMapFrame.MODE_CREATE_JOB then
    local v3 = v3:getFocusedElement()
    if v3.inputEvent ~= nil then
      v3:inputEvent(v1, v2)
    end
  end
end
function InGameMenuMobileMapFrame:onDetailsButtonBack()
  self:showDetailsBox(false)
  v1:setFocus(self.currentList)
end
function InGameMenuMobileMapFrame:onClickCloseMap()
  local v1 = self:getCanCloseMap()
  if v1 then
    g_inGameMenu.showMap = false
    self:onClickBackCallback()
  end
  v1 = self:getIsPicking()
  if v1 then
    self:executePickingCallback(false)
    self:refreshContextInput()
    v1:removeMapHotspot(self.aiTargetMapHotspot)
    self.inGameMap.isTouchPickingRotation = false
    local v3 = v3:getText("button_confirmPosition")
    v1:setText(...)
  end
  if self.mode == InGameMenuMobileMapFrame.MODE_CREATE_JOB then
    self:setMode(InGameMenuMobileMapFrame.MODE_AI_PAGE)
    self:setJobMenuVisible(false)
    self.aiWorkersList.handleFocus = true
    v1:setFocus(self.aiWorkersList)
  end
end
function InGameMenuMobileMapFrame:onClickEnterVehicle()
  local v1 = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
  if v1 ~= nil and v1.getIsEnterableFromMenu ~= nil then
    local v2 = v1:getIsEnterableFromMenu()
    if v2 then
      g_inGameMenu.showMap = false
      self.onClickBackCallback()
      v2:requestToEnterVehicle(v1)
    end
  end
end
function InGameMenuMobileMapFrame:onClickResetVehicle()
  if not self.isResetPending then
    if g_currentMission.tourIconsBase ~= nil then
      -- if g_currentMission.tourIconsBase.visible then goto L42 end
    end
    if self.currentHotspot ~= nil then
      local v4 = v4:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.DIALOG_VEHICLE_RESET_CONFIRM)
      local v5 = v5:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.VEHICLE_RESET)
      YesNoDialog.show(...)
    end
  end
end
function InGameMenuMobileMapFrame:onYesNoReset(v1)
  if v1 and self.currentHotspot ~= nil then
    local v2 = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
    if v2 ~= nil then
      v3:setVisible(false)
      v3:subscribe(ResetVehicleEvent, self.onVehicleReset, self)
      self.isResetPending = true
      local v3 = v3:getServerConnection()
      local v5 = ResetVehicleEvent.new(v2)
      v3:sendEvent(...)
    end
  end
end
function InGameMenuMobileMapFrame:onVehicleReset(v1)
  self.isResetPending = false
  v2:unsubscribe(ResetVehicleEvent, self)
  if v1 == ResetVehicleEvent.STATE_SUCCESS then
    local v3 = v3:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.DIALOG_VEHICLE_RESET_DONE)
    InfoDialog.show(v3, nil, nil, DialogElement.TYPE_INFO)
    self:updateVehicles()
    v2:reloadData()
    if self.vehiclesList.visible and 0 < self.vehiclesList.totalItemCount then
    end
    v2:setVisible(v4)
    self:showDetailsBox(false)
    self.blockListSelectionEvents = true
    v2:setSelectedItem(1, 1)
    self.blockListSelectionEvents = false
    self.blockPanToHotspot = true
    return
  end
  if v1 == ResetVehicleEvent.STATE_FAILED then
    v3 = v3:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.DIALOG_VEHICLE_RESET_FAILED)
    InfoDialog.show(...)
    return
  end
  if v1 == ResetVehicleEvent.STATE_IN_USE then
    v3 = v3:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.DIALOG_VEHICLE_IN_USE)
    InfoDialog.show(...)
    return
  end
  v3 = v3:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.DIALOG_VEHICLE_NO_PERMISSION)
  InfoDialog.show(...)
end
function InGameMenuMobileMapFrame:onClickTagPlace()
  if self.currentHotspot ~= nil and self.currentHotspot.worldX ~= nil and self.currentHotspot.worldZ ~= nil then
    if g_currentMission.currentMapTargetHotspot ~= self.currentHotspot then
      self.removeMarker = true
      v1:setMapTargetHotspot(self.currentHotspot)
    else
      self.removeMarker = false
      v1:setMapTargetHotspot(nil)
      v1:setBlinking(true)
    end
    self:showContextMarker(self.canSetMarker, self.removeMarker)
  end
end
function InGameMenuMobileMapFrame:onClickBuyField()
  local v1 = v1:getField()
  local v3 = v3:getFarmlandOwner(v1.farmland.id)
  local v4 = v4:getFarmId()
  if v3 ~= v4 then
    v3 = v3:getBalance()
    if v1.farmland.price <= v3 then
      local v6 = v6:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.MOBILE_BUY_FIELD_TEXT)
      local v7 = v7:formatMoney(v3, 0, true, true)
      local v8 = v8:formatMoney(v1.farmland.price, 0, true, true)
      local v5 = string.format(...)
      v6 = v6:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.DIALOG_BUY_FARMLAND_TITLE)
      YesNoDialog.show(self.onYesNoBuyField, self, v5, v6)
    elseif Platform.hasInAppPurchases then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L152
      v5 = v5:getIsAvailable()
      -- if not v5 then goto L152 end
      v6 = v6:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.MOBILE_BUY_FIELD_TEXT_COINS)
      v7 = v7:formatMoney(v3, 0, true, true)
      v8 = v8:formatMoney(v1.farmland.price, 0, true, true)
      v5 = string.format(...)
      v6 = v6:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.DIALOG_BUY_FARMLAND_TITLE)
      YesNoDialog.show(self.onYesNoBuyCoins, self, v5, v6)
      self.toBuyField = nil
    else
      v6 = v6:getText(InGameMenuMobileMapFrame.BUTTON_TEXTS.DIALOG_BUY_FARMLAND_NOT_ENOUGH_MONEY)
      InfoDialog.show(...)
    end
  end
  self.toBuyField = v1
end
function InGameMenuMobileMapFrame:onYesNoBuyField(v1)
  if v1 then
    local v2 = v2:getServerConnection()
    local v6 = v6:getFarmId()
    local v4 = FarmlandStateEvent.new(self.toBuyField.farmland.id, v6, self.toBuyField.farmland.price)
    v2:sendEvent(...)
    self:setMapSelectionItem(self.currentHotspot)
    self:updateFields()
    v2:reloadData()
    v4 = v4:getMapHotspot()
    self:selectHotspotInList(v4, self.fieldsList)
  end
  self.toBuyField = nil
end
function InGameMenuMobileMapFrame:onYesNoBuyCoins(v1)
  if v1 then
    self.onClickBackCallback()
    v2:showCoinShop()
  end
end
function InGameMenuMobileMapFrame:onStartGoToJob()
  local v1 = self:getCanGoTo()
  if v1 then
    self:tryStartGoToJob()
  end
end
function InGameMenuMobileMapFrame:onStartJob()
  local v1 = self:getCanStartJob()
  if v1 then
    self:startJob()
  end
end
function InGameMenuMobileMapFrame:onCancelJob()
  local v1 = self:getCanCancelJob()
  if v1 then
    self:cancelJob()
  end
end
function InGameMenuMobileMapFrame:onSkipJobTask()
  local v1 = self:getCanSkipJobTask()
  if v1 then
    self:skipCurrentTask()
  end
end
function InGameMenuMobileMapFrame:onConfirmAITarget()
  if self.isPickingLocation then
    local v3 = v3:getIsPositionReachable(self.aiTargetMapHotspot.worldX, 0, self.aiTargetMapHotspot.worldZ)
    if v3 then
      local v6 = v6:getText("button_confirmRotation")
      v4:setText(...)
      self.hasPickedLocationTouch = true
      self.inGameMap.isTouchPickingRotation = true
      self:executePickingCallback(true, self.aiTargetMapHotspot.worldX, self.aiTargetMapHotspot.worldZ)
      return
    end
    local v5 = v5:getText("ai_validationErrorBlockedPosition")
    InfoDialog.show(v5, nil, nil, DialogElement.TYPE_ERROR)
    return
  end
  if self.isPickingRotation then
    self.inGameMap.isTouchPickingRotation = false
    v3 = v3:getText("button_confirmPosition")
    v1:setText(...)
    self:executePickingCallback(true, self.aiTargetMapHotspot.worldRotation + math.pi)
  end
end
function InGameMenuMobileMapFrame:onCreateJob()
  local v1 = self:getCanCreateJob()
  if v1 then
    self:createJob()
  end
end
function InGameMenuMobileMapFrame:onMapPageSelected()
  self:showDetailsBox(false)
  for v4, v5 in pairs(self.filterBoxes) do
    v5:setVisible(false)
  end
  v2:setVisible(true)
  v2:applyCustomHotspotSortingOrder(InGameMenuMobileMapFrame.HOTSPOT_SORTING_PRIO[self.mapPageSelector.state])
  if self.previousMapPageId == InGameMenuMobileMapFrame.PAGE_ID.AI then
    v2 = self:getIsPicking()
    if v2 then
      self:executePickingCallback(false)
      v2:removeMapHotspot(self.aiTargetMapHotspot)
      self.inGameMap.isTouchPickingRotation = false
      v4 = v4:getText("button_confirmPosition")
      v2:setText(...)
    end
    self:refreshContextInput()
    self:showContextInput(self.canEnter, self.canReset, self.canSetMarker, self.removeMarker, self.canBuy)
    self:selectHotspotInList(self.currentHotspot, self.currentList)
    -- if v0.mode ~= InGameMenuMobileMapFrame.MODE_CREATE_JOB then goto L135 end
    self:onClickCloseMap()
  elseif self.mapPageSelector.state == InGameMenuMobileMapFrame.PAGE_ID.AI and self.previousMapPageId == InGameMenuMobileMapFrame.PAGE_ID.FIELDS then
    self:setMapSelectionItem(nil)
  end
  self.currentList = self.pageLists[v1]
  v2 = v2:setFocus(self.currentList)
  if not self.isOpening then
    self:showDetailsBox(false)
  end
  if v1 == InGameMenuMobileMapFrame.PAGE_ID.STATUS then
    if self.mode ~= InGameMenuMobileMapFrame.MODE_OVERVIEW then
      self:setMode(InGameMenuMobileMapFrame.MODE_OVERVIEW)
    end
    self:setMapSelectionItem(nil)
  elseif v1 == InGameMenuMobileMapFrame.PAGE_ID.AI then
    if self.mode ~= InGameMenuMobileMapFrame.MODE_AI_PAGE then
      self:setMode(InGameMenuMobileMapFrame.MODE_AI_PAGE)
    end
    self:refreshContextInput()
    -- if v2 then goto L232 end
    v3:unsetFocus(FocusManager.currentFocusData.focusElement)
  else
    if self.mode ~= InGameMenuMobileMapFrame.MODE_NONE then
      self:setMode(InGameMenuMobileMapFrame.MODE_NONE)
    end
  end
  self.previousMapPageId = v1
end
function InGameMenuMobileMapFrame:onPreviousPage()
  if self.mapPageSelector.state - 1 == 0 then
  end
  v2:setState(v1, true)
end
function InGameMenuMobileMapFrame:onNextPage()
  if #self.mapPageSelector.texts < self.mapPageSelector.state + 1 then
  end
  v2:setState(v1, true)
end
function InGameMenuMobileMapFrame:onClickPagingStatus()
  if self.mapPageSelector.state ~= InGameMenuMobileMapFrame.PAGE_ID.STATUS then
    v1:setState(InGameMenuMobileMapFrame.PAGE_ID.STATUS, true)
  end
end
function InGameMenuMobileMapFrame:onClickPagingVehicles()
  if self.mapPageSelector.state ~= InGameMenuMobileMapFrame.PAGE_ID.VEHICLES then
    v1:setState(InGameMenuMobileMapFrame.PAGE_ID.VEHICLES, true)
  end
end
function InGameMenuMobileMapFrame:onClickPagingPoints()
  if self.mapPageSelector.state ~= InGameMenuMobileMapFrame.PAGE_ID.POINTS then
    v1:setState(InGameMenuMobileMapFrame.PAGE_ID.POINTS, true)
  end
end
function InGameMenuMobileMapFrame:onClickPagingFields()
  if self.mapPageSelector.state ~= InGameMenuMobileMapFrame.PAGE_ID.FIELDS then
    v1:setState(InGameMenuMobileMapFrame.PAGE_ID.FIELDS, true)
  end
end
function InGameMenuMobileMapFrame:onClickPagingAI()
  if self.mapPageSelector.state ~= InGameMenuMobileMapFrame.PAGE_ID.AI then
    v1:setState(InGameMenuMobileMapFrame.PAGE_ID.AI, true)
  end
end
function InGameMenuMobileMapFrame:onStatusFilterChanged(v1, v2)
  if self.mode == InGameMenuMobileMapFrame.MODE_OVERVIEW then
    if v2 < 0 then
      local v3 = math.max(self.statusSelector.state - 1, 1)
      v4:setState(v3, true)
    else
      v3 = math.min(self.statusSelector.state + 1, #self.statusSelector.texts)
      v4:setState(v3, true)
    end
    self:onStatusSelected()
  end
end
function InGameMenuMobileMapFrame:onStatusSelected()
  v1:reloadData()
  self:generateOverviewOverlay()
end
function InGameMenuMobileMapFrame:onClickFilterLoading()
  self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.LOADING] = not self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.LOADING]
  for v4, v5 in pairs(self.hotspotsSorted[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.LOADING]) do
    v5:setVisible(self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.LOADING])
  end
  self:updatePointsFilterMapping()
end
function InGameMenuMobileMapFrame:onClickFilterProductions()
  self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.PRODUCTIONS] = not self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.PRODUCTIONS]
  for v4, v5 in pairs(self.hotspotsSorted[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.PRODUCTIONS]) do
    v5:setVisible(self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.PRODUCTIONS])
  end
  self:updatePointsFilterMapping()
end
function InGameMenuMobileMapFrame:onClickFilterAnimals()
  self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.ANIMALS] = not self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.ANIMALS]
  for v4, v5 in pairs(self.hotspotsSorted[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.ANIMALS]) do
    v5:setVisible(self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.ANIMALS])
  end
  self:updatePointsFilterMapping()
end
function InGameMenuMobileMapFrame:onClickFilterOther()
  self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.OTHER] = not self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.OTHER]
  for v4, v5 in pairs(self.hotspotsSorted[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.OTHER]) do
    v5:setVisible(self.hotspotFiltersActive[InGameMenuMobileMapFrame.HOTSPOT_FILTERS.OTHER])
  end
  self:updatePointsFilterMapping()
end
function InGameMenuMobileMapFrame.onFilterButtonFocusEnter(v0, v1)
  v1.overlay.color = {0, 0, 0, 0}
  v1.overlay.alpha = 0
  v1.icon.color = {1, 1, 1, 1}
  v1.icon.alpha = 1
end
function InGameMenuMobileMapFrame.onFilterButtonFocusLeave(v0, v1)
  v1.overlay.color = {1, 1, 1, 1}
  v1.overlay.alpha = 1
  v1.icon.color = {0, 0, 0, 0}
  v1.icon.alpha = 0
end
function InGameMenuMobileMapFrame:setJobMenuVisible(v1, v2)
  v3:setText("")
  v3:setVisible(false)
  if not v2 then
    v3:setText("")
    v3:setVisible(false)
  end
  v3:setVisible(v1)
  self:refreshContextInput()
end
function InGameMenuMobileMapFrame:createJob()
  local v1 = v1:getVehicle()
  if v1 ~= nil then
    self.currentJobTypes = {}
    if v1.getLastJob ~= nil then
      local v6 = v1:getLastJob()
    end
    for v9, v10 in pairs(AIJobType) do
      local v11 = v11:getIsAvailableForVehicle(v1)
      if not v11 then
        continue
      end
      table.insert(self.currentJobTypes, v10)
      local v14 = v14:getJobTypeByIndex(v10)
      table.insert(v2, v14.title)
      if v3 ~= nil then
        if not (v5 ~= nil) then
          continue
        end
        if not (v5.class == self.jobTypeInstances[v10].class) then
          continue
        end
      end
    end
    if #self.currentJobTypes == 0 then
      log("Error: vehicle has no support for any jobs, so button should not have been shown!")
      return
    end
    v6:setTexts(v2)
    v6:setState(v4 or 1)
    self:setMode(InGameMenuMobileMapFrame.MODE_CREATE_JOB)
    self.currentJobVehicle = v1
    self.currentJob = nil
    self:setJobMenuVisible(true)
    self.aiWorkersList.handleFocus = false
    v6:setFocus(self.aiTaskDialogJobTypeSelector)
    self:setActiveJobTypeSelection(v3)
  end
end
function InGameMenuMobileMapFrame:tryStartGoToJob()
  if self.currentHotspot ~= nil then
    local v1 = v1:getVehicle()
    if v1 ~= nil then
      self:startPickPositionAndRotation(self.jobTypeInstances[AIJobType.GOTO].positionAngleParameter, function(self, v1, v2, v3)
        if self then
          v4:startGoToJob(u1, v1, v2, v3)
        end
        v4:refreshContextInput()
      end)
      self:refreshContextInput()
    end
  end
end
function InGameMenuMobileMapFrame:startJob()
  if self.startJobPending then
    return
  end
  v1:setValues()
  local v1, v2 = v1:validate(g_currentMission.player.farmId)
  if v1 then
    self:tryStartJob(self.currentJob, g_currentMission.player.farmId, function(self)
      if self == AIJob.START_SUCCESS then
        v1:setMode(InGameMenuMobileMapFrame.MODE_AI_PAGE)
        u0.currentJob = nil
        v1:setJobMenuVisible(false)
        u0.aiWorkersList.handleFocus = true
      end
    end)
    return
  end
  local v4 = tostring(v2)
  InfoDialog.show(v4, nil, nil, DialogElement.TYPE_ERROR)
  self:updateWarnings()
end
function InGameMenuMobileMapFrame:cancelJob()
  local v1 = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
  if v1 ~= nil then
    local v2 = v1:getIsAIActive()
    if v2 then
      local v4 = AIMessageSuccessStoppedByUser.new()
      v1:stopCurrentAIJob(...)
    end
  end
  self:refreshContextInput()
end
function InGameMenuMobileMapFrame:tryStartJob(v1, v2, v3)
  self.startJobPending = true
  v4:subscribe(AIJobStartRequestEvent, self.onStartedJob, self, {v3})
  local v4 = v4:getServerConnection()
  local v6 = AIJobStartRequestEvent.new(v1, v2)
  v4:sendEvent(...)
end
function InGameMenuMobileMapFrame:onStartedJob(v1, v2, v3)
  self.startJobPending = false
  v5:unsubscribe(AIJobStartRequestEvent, self)
  if v2 ~= AIJob.START_SUCCESS then
    local v5 = v5:getJobTypeByIndex(v3)
    local v6 = v5.classObject.getIsStartErrorText(v2)
    InfoDialog.show(v6, nil, nil, DialogElement.TYPE_INFO)
  end
  v4(v2)
end
function InGameMenuMobileMapFrame:skipCurrentTask()
  local v1 = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
  if v1 ~= nil then
    local v2 = v1:getIsAIActive()
    if v2 then
      v2 = v1:getJob()
      if v2 ~= nil then
        local v3 = v2:getCanSkipTask()
        if v3 then
          v1:skipCurrentTask()
          return
        end
        self:refreshContextInput()
      end
    end
  end
end
InGameMenuMobileMapFrame.STATUS_BG_COLOR_PROFILE = "inGameMenuMobileMapStatusListIconBg"
InGameMenuMobileMapFrame.STATUS_BG_COLOR_UVS = {700, 0, 82, 82}
InGameMenuMobileMapFrame.COLOR = {MAIN_MENU_BLUE = {0.0227, 0.5346, 0.8519, 1}}
InGameMenuMobileMapFrame.UV = {BUTTON_RIDE_HORSE = {946, 539, 36, 36}, BUTTON_ENTER_VEHICLE = {909, 502, 36, 36}}
