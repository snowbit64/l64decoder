-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuMapFrame = {}
local InGameMenuMapFrame_mt = Class(InGameMenuMapFrame, TabbedMenuFrameElement)
InGameMenuMapFrame.CONTROLS = {"mapOverviewHotspotBox", "hotspotFilterButton", "mapZoomGlyph", "mapMoveGlyph", "mapMoveGlyphText", "mapZoomGlyphText", MAP_OVERVIEW_SELECTOR = "mapOverviewSelector", INGAME_MAP = "ingameMap", MAP_CURSOR = "mapCursor", MAP_CONTROLS_DISPLAY = "mapControls", DYNAMIC_MAP_IMAGE_LOADING = "dynamicMapImageLoading", DYNAMIC_MAP_IMAGE_LOADING_BG = "dynamicMapImageLoadingBg", FRUITBOX_TEMPLATE = "mapOverviewFruitTypeBoxTemplate", FRUIT_TYPE_SLIDER = "fruitTypeSlider", FRUIT_TYPE_SLIDER_ELEMENT = "fruitTypeSliderElement", CONTEXT_BOX = "contextBox", CONTEXT_BOX_CORNER = "contextBoxCorner", CONTEXT_IMAGE = "contextImage", CONTEXT_TEXT = "contextText", CONTEXT_FARM = "contextFarm", FILTER_BOX = "filterBox", FILTER_BOX_BG = "filterBoxBackground", FILTER_PAGING = "filterPaging", FILTER_BUTTON_VEHICLE = "filterButtonVehicle", FILTER_BUTTON_COMBINE = "filterButtonCombine", FILTER_BUTTON_TRAILER = "filterButtonTrailer", FILTER_BUTTON_TOOL = "filterButtonTool", FILTER_BUTTON_TIPPING = "filterButtonTipping", FILTER_BUTTON_LOADING = "filterButtonLoading", FILTER_BUTTON_PRODUCTION = "filterButtonProductions", FILTER_BUTTON_ANIMALS = "filterButtonAnimals", FILTER_BUTTON_AI = "filterButtonAI", FILTER_BUTTON_FIELD_JOBS = "filterButtonContracts", FILTER_BUTTON_OTHER = "filterButtonOther", CROP_TYPE_FILTER_BOX = "mapOverviewFruitTypeBox", GROWTH_STATE_FILTER_BOX = "mapOverviewGrowthBox", GROWTH_STATE_FILTER_BUTTONS = "growthStateFilterButton", GROWTH_STATE_FILTER_COLORS = "growthStateFilterColor", GROWTH_STATE_FILTER_TEXTS = "growthStateFilterText", SOIL_STATE_FILTER_BOX = "mapOverviewSoilBox", SOIL_STATE_FILTER_BUTTONS = "soilStateFilterButton", SOIL_STATE_FILTER_COLORS = "soilStateFilterColor", SOIL_STATE_FILTER_TEXTS = "soilStateFilterText", FARMLAND_VALUE_BOX = "farmlandValueBox", BALANCE_TEXT = "balanceText", FARMLAND_VALUE_TEXT = "farmlandValueText", FARMLAND_ID_TEXT = "farmlandIdText", BUTTON_SWITCH_MAP_MODE = "buttonSwitchMapMode", BUTTON_BOX = "buttonBox", BUTTON_BACK = "buttonBack", BUTTON_SELECT = "buttonSelectIngame", BUTTON_ENTER_VEHICLE = "buttonEnterVehicle", BUTTON_RESET_VEHICLE = "buttonResetVehicle", BUTTON_VISIT_PLACE = "buttonVisitPlace", BUTTON_SET_MARKER = "buttonSetMarker", BUTTON_BUY_FARMLAND = "buttonBuyFarmland", BUTTON_SELL_FARMLAND = "buttonSellFarmland", MAP_BOX = "mapBox"}
InGameMenuMapFrame.MODE_NONE = 0
InGameMenuMapFrame.MODE_OVERVIEW = 1
InGameMenuMapFrame.MODE_FARMLANDS = 2
InGameMenuMapFrame.MAP_FRUIT_TYPE = 1
InGameMenuMapFrame.MAP_GROWTH = 2
InGameMenuMapFrame.MAP_SOIL = 3
InGameMenuMapFrame.MAP_HOTSPOTS = InGameMenuMapFrame.MAP_FRUIT_TYPE
InGameMenuMapFrame.FRUIT_TYPE_BUTTON_ELEMENT = {BUTTON = "cropTypeFilterButton", COLOR = "cropTypeFilterColor", ICON = "cropTypeFilterIcon", TYPE = "cropTypeFilterText"}
InGameMenuMapFrame.INPUT_CONTEXT_NAME = "MENU_MAP_OVERVIEW"
InGameMenuMapFrame.CLEAR_INPUT_ACTIONS = {InputAction.MENU_ACTIVATE, InputAction.MENU_CANCEL, InputAction.MENU_EXTRA_1, InputAction.MENU_EXTRA_2, InputAction.SWITCH_VEHICLE, InputAction.SWITCH_VEHICLE_BACK, InputAction.CAMERA_ZOOM_IN, InputAction.CAMERA_ZOOM_OUT}
InGameMenuMapFrame.CLEAR_CLOSE_INPUT_ACTIONS = {InputAction.SWITCH_VEHICLE, InputAction.SWITCH_VEHICLE_BACK, InputAction.CAMERA_ZOOM_IN, InputAction.CAMERA_ZOOM_OUT}
InGameMenuMapFrame.CURRENT_CUSTOM_PAGE = {NONE = 0, POINTS = 1, FIELDS = 2, VEHICLES = 3}
InGameMenuMapFrame.SECTION_NAMES = {VEHICLES = {"ui_mapHotspotFilter_vehicles", "ui_mapHotspotFilter_tools"}, POINTS = {"ui_mapHotspotFilter_productionPoints", "ui_mapHotspotFilter_animals", "ui_mapHotspotFilter_buyingSelling", "ui_mapHotspotFilter_others"}, FIELDS = {"ui_fields"}}
InGameMenuMapFrame.BUTTON_FRAME_SIDE = GuiElement.FRAME_RIGHT
function InGameMenuMapFrame.register()
  local v0 = InGameMenuMapFrame.new()
  v1:loadGui("dataS/gui/InGameMenuMapFrame.xml", "MapFrame", v0, true)
end
function InGameMenuMapFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuMapFrame.CONTROLS)
  v2.onClickBackCallback = u1
  v2.client = nil
  v2.playerFarm = nil
  v2.mode = InGameMenuMapFrame.MODE_OVERVIEW
  v2.hotspotFilterState = {}
  v2.fruitTypeFilter = {}
  v2.growthStateFilter = {}
  v2.soilStateFilter = {}
  v2.mapOverviewFruitTypeBox = {}
  v2.hasFullScreenMap = true
  v2.mapOverlayGenerator = nil
  v2.growthSelectionMappingIndex = 1
  v2.soilSelectionMappingIndex = 1
  v2.marqueeBoxes = {}
  v2.clonedElements = {}
  v2.customListItems = {}
  v2.lastListBlinkingHotspot = nil
  local v4 = v4:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  v2.isColorBlindMode = v4 or false
  v2.isMapOverviewInitialized = false
  v2.lastInputHelpMode = 0
  v2.isInputContextActive = false
  v2.foliageStateOverlay = nil
  v2.foliageStateOverlayIsReady = false
  v2.farmlandStateOverlay = nil
  v2.farmlandStateOverlayIsReady = false
  v2.currentFruitPageId = 1
  v2.selectedFarmland = nil
  v2.overviewOverlayFinishedCallback = function(v0)
    v1:onOverviewOverlayFinished(v0)
  end
  v2.farmlandOverlayFinishedCallback = function(v0)
    v1:onFarmlandOverlayFinished(v0)
  end
  v2.currentHotspot = nil
  v2.ingameMapBase = nil
  v2.staticUIDeadzone = {0, 0, 0, 0}
  v2.needsSolidBackground = Platform.ingameMap.needsSolidBackground
  v2:initializeValidHotspots()
  v2.canEnter = false
  v2.canReset = false
  v2.canVisit = false
  v2.canSetMarker = false
  v2.removeMarker = false
  v2.canBuy = false
  v2.canSell = false
  v2.showIntroductionHud = false
  v2.showIntroHudIfNotSaving = false
  local v3, v4 = getNormalizedScreenValues(0, InGameMenuMapFrame.SIZE.TEXT)
  v2.textSize = v4
  local v8 = v8:getText("introduction_zoomMap")
  v2.zoomHelpText = v8 .. " "
  local v5 = getTextWidth(v4, v2.zoomHelpText)
  local v9 = v9:getText("introduction_panMap")
  v2.panHelpText = v9 .. " "
  local v6 = getTextWidth(v4, v2.panHelpText)
  local v7, v8 = getNormalizedScreenValues(InGameMenuMapFrame.SIZE.INPUT_GLYPH_ZOOM_TOUCH[1], InGameMenuMapFrame.SIZE.INPUT_GLYPH_ZOOM_TOUCH[2])
  v9 = Overlay.new("dataS/menu/controllerSymbols2048.png", 0, 0, v7, v8)
  v2.glyphZoomTouch = v9
  local v11 = GuiUtils.getUVs(InGameMenuMapFrame.UV.INPUT_GLYPH_ZOOM_TOUCH, {2048, 1024})
  v9:setUVs(...)
  v11 = unpack(InGameMenuMapFrame.COLOR.INPUT_GLYPH)
  v9:setColor(...)
  v11:setPosition(InGameMenuMapFrame.POSITION.HELP_TEXT[1] + v5 * 0.5, InGameMenuMapFrame.POSITION.HELP_TEXT[2] + (v4 - v8) * 0.5)
  local v11, v12 = getNormalizedScreenValues(InGameMenuMapFrame.SIZE.INPUT_GLYPH_ZOOM_GAMEPAD[1], InGameMenuMapFrame.SIZE.INPUT_GLYPH_ZOOM_GAMEPAD[2])
  v11 = InputGlyphElement.new(g_inputDisplayManager, v11, v12)
  v2.glyphZoomGamepad = v11
  v11:setActions({InputAction.AXIS_MAP_ZOOM_OUT, InputAction.AXIS_MAP_ZOOM_IN})
  v11:setButtonGlyphColor(InGameMenuMapFrame.COLOR.INPUT_GLYPH)
  v11:setPosition(InGameMenuMapFrame.POSITION.HELP_TEXT[1] + v5 * 0.5, InGameMenuMapFrame.POSITION.HELP_TEXT[2] + (v4 - v12) * 0.5)
  v11, v12 = getNormalizedScreenValues(InGameMenuMapFrame.SIZE.INPUT_GLYPH_PAN_TOUCH[1], InGameMenuMapFrame.SIZE.INPUT_GLYPH_PAN_TOUCH[2])
  v11 = Overlay.new("dataS/menu/controllerSymbols2048.png", 0, 0, v11, v12)
  v2.glyphPanTouch = v11
  local v13 = GuiUtils.getUVs(InGameMenuMapFrame.UV.INPUT_GLYPH_PAN_TOUCH, {2048, 1024})
  v11:setUVs(...)
  v13 = unpack(InGameMenuMapFrame.COLOR.INPUT_GLYPH)
  v11:setColor(...)
  v11:setPosition(InGameMenuMapFrame.POSITION.HELP_TEXT[1] + v6 * 0.5, InGameMenuMapFrame.POSITION.HELP_TEXT[2] + (v4 - v12) * 0.5)
  v11, v12 = getNormalizedScreenValues(InGameMenuMapFrame.SIZE.INPUT_GLYPH_PAN_GAMEPAD[1], InGameMenuMapFrame.SIZE.INPUT_GLYPH_PAN_GAMEPAD[2])
  v11 = InputGlyphElement.new(g_inputDisplayManager, v11, v12)
  v2.glyphPanGamepad = v11
  v11:setActions({InputAction.AXIS_MAP_SCROLL_UP_DOWN, InputAction.AXIS_MAP_SCROLL_LEFT_RIGHT})
  v11:setButtonGlyphColor(InGameMenuMapFrame.COLOR.INPUT_GLYPH)
  v11:setPosition(InGameMenuMapFrame.POSITION.HELP_TEXT[1] + v6 * 0.5, InGameMenuMapFrame.POSITION.HELP_TEXT[2] + (v4 - v12) * 0.5)
  v2.goToMainOverview = false
  return v2
end
function InGameMenuMapFrame:createFromExistingGui(v1)
  local v2 = InGameMenuMapFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuMapFrame:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  if not src.onClickBackCallback then
  end
  self.onClickBackCallback = v2
end
function InGameMenuMapFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  local v2, v3 = getNormalizedScreenValues(0, InGameMenuMapFrame.GLYPH_TEXT_SIZE)
  self.glyphTextSize = v3
  v2 = v2:getText(InGameMenuMapFrame.L10N_SYMBOL.INPUT_ZOOM_MAP)
  self.zoomText = v2
  v2 = v2:getText(InGameMenuMapFrame.L10N_SYMBOL.INPUT_MOVE_CURSOR)
  self.moveCursorText = v2
  v2 = v2:getText(InGameMenuMapFrame.L10N_SYMBOL.INPUT_PAN_MAP)
  self.panMapText = v2
end
function InGameMenuMapFrame:delete()
  if self.mapOverviewFruitTypeBoxTemplate ~= nil then
    v1:delete()
    self.mapOverviewFruitTypeBoxTemplate = nil
  end
  if self.mapOverviewGrowthBox ~= nil then
    v1:delete()
    self.mapOverviewGrowthBox = nil
  end
  if self.mapOverviewSoilBox ~= nil then
    v1:delete()
    self.mapOverviewSoilBox = nil
  end
  if self.mapOverviewHotspotBox ~= nil then
    v1:delete()
    self.mapOverviewHotspotBox = nil
  end
  if self.glyphZoomTouch ~= nil then
    v1:delete()
    self.glyphZoomTouch = nil
  end
  if self.glyphZoomGamepad ~= nil then
    v1:delete()
    self.glyphZoomGamepad = nil
  end
  if self.glyphPanTouch ~= nil then
    v1:delete()
    self.glyphPanTouch = nil
  end
  if self.glyphPanGamepad ~= nil then
    v1:delete()
    self.glyphPanGamepad = nil
  end
  local v2 = v2:superClass()
  v2.delete(self)
  v1:removeStateChangeListener(self)
end
function InGameMenuMapFrame:initialize(onClickBackCallback)
  self:updateInputGlyphs()
  v2:unlinkElement()
  v2:removeElement(self.mapOverviewFruitTypeBoxTemplate)
  if not onClickBackCallback then
  end
  self.onClickBackCallback = v2
  v2:updatePageMapping()
end
function InGameMenuMapFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:loadFilters()
  local v4 = v4:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  local v3 = Utils.getNoNil(v4, false)
  self:setColorBlindMode(...)
  self:toggleMapInput(true)
  v1:onOpen()
  v1:registerActionEvents()
  self:disableAlternateBindings()
  v1:restoreDefaultFilter()
  self.mode = InGameMenuMapFrame.MODE_OVERVIEW
  v1:setVisible(true)
  if self.farmlandValueBox ~= nil then
    v1:setVisible(false)
  end
  if self.visible and not self.isMapOverviewInitialized then
    self:setupMapOverview()
    self:assignFilterData()
    v1:setState(1)
  end
  v3 = v3:getState()
  self:onClickMapOverviewSelector(...)
  self:initializeFilterButtonState()
  self:setMapSelectionItem(nil)
  self:showContextInput(false, false, false, false, false, false, false)
  v1:subscribe(MessageType.PAUSE, self.onPauseChanged, self)
  self:setSoundSuppressed(true)
  v1:setFocus(self.mapOverviewSelector)
  self:setSoundSuppressed(false)
  self:updateInputGlyphs()
end
function InGameMenuMapFrame:onFrameClose()
  v1:unsubscribeAll(self)
  local v2 = v2:superClass()
  v2.onFrameClose(self)
  v1:onClose()
  self:toggleMapInput(false)
  v1:restoreDefaultFilter()
end
function InGameMenuMapFrame:saveFilters()
  for v5, v6 in pairs(self.fruitTypeFilter) do
    if not not v6 then
      continue
    end
    local v8 = v8:getFillTypeByFruitTypeIndex(v5)
    if v1 ~= "" then
    else
    end
  end
  for v6, v7 in ipairs(self.growthStateFilter) do
    if not v7 then
      continue
    end
    v8 = Utils.setBit(v2, v6)
  end
  for v7, v8 in ipairs(self.soilStateFilter) do
    if not v8 then
      continue
    end
    local v9 = Utils.setBit(v3, v7)
  end
  v4:setValue(GameSettings.SETTING.INGAME_MAP_FRUIT_FILTER, v1, false)
  v4:setValue(GameSettings.SETTING.INGAME_MAP_GROWTH_FILTER, v2, false)
  v4:setValue(GameSettings.SETTING.INGAME_MAP_SOIL_FILTER, v3, true)
end
function InGameMenuMapFrame:loadFilters()
  local v1 = v1:getValue(GameSettings.SETTING.INGAME_MAP_FRUIT_FILTER)
  local v3 = v1:split(";")
  for v5, v6 in ipairs(...) do
    local v7 = v7:getFruitTypeByName(v6)
    if not (v7 ~= nil) then
      continue
    end
    self.fruitTypeFilter[v7.index] = false
  end
  v2 = v2:getValue(GameSettings.SETTING.INGAME_MAP_GROWTH_FILTER)
  for v6, v7 in pairs(self.displayGrowthStates) do
    local v9 = Utils.isBitSet(v2, v6)
    self.growthStateFilter[v6] = v9
  end
  v3 = v3:getValue(GameSettings.SETTING.INGAME_MAP_SOIL_FILTER)
  for v7, v8 in pairs(self.displaySoilStates) do
    local v10 = Utils.isBitSet(v3, v7)
    self.soilStateFilter[v7] = v10
  end
end
function InGameMenuMapFrame:onLoadMapFinished()
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
  if g_currentMission.terrainRootNode ~= nil then
    self:assignFilterData()
    v1:addStateChangeListener(self)
  end
  v1:registerHelp("helpZoomMap", self, self.drawHelpZoomMap, nil)
  v1:registerHelp("helpPanMap", self, self.drawHelpPanMap, nil)
end
function InGameMenuMapFrame:onSoilSettingChanged()
  v1:updateStates()
  local v1 = v1:getDisplayGrowthStates()
  self.displayGrowthStates = v1
  v1 = v1:getDisplaySoilStates()
  self.displaySoilStates = v1
  self:assignFilterData()
end
function InGameMenuMapFrame:toggleMapInput(isActive)
  if self.isInputContextActive ~= isActive then
    self.isInputContextActive = isActive
    self:toggleCustomInputContext(isActive, InGameMenuMapFrame.INPUT_CONTEXT_NAME)
    if isActive then
      self:registerInput()
    else
      self:unregisterInput(true)
    end
    self:disableAlternateBindings()
  end
end
function InGameMenuMapFrame:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  if self.mapOverlayGenerator ~= nil then
    v1:delete()
    self.mapOverlayGenerator = nil
  end
  self:resetFarmlandSelection()
  self.foliageStateOverlayIsReady = false
  self.farmlandStateOverlayIsReady = false
  self.isMapOverviewInitialized = false
  self.isInputContextActive = false
  self.currentHotspot = nil
  self.hotspotFilterState = {}
  InGameMenuMapUtil.hideContextBox(self.contextBox)
end
function InGameMenuMapFrame.disableAlternateBindings(v0)
  v1:disableAlternateBindingsForAction(InputAction.MENU_AXIS_UP_DOWN)
  v1:disableAlternateBindingsForAction(InputAction.MENU_AXIS_LEFT_RIGHT)
end
function InGameMenuMapFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:getInputHelpMode()
  if v2 ~= self.lastInputHelpMode then
    self.lastInputHelpMode = v2
    self:disableAlternateBindings()
    if v2 ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
    v3:setVisible(true)
    self:updateContextInputBarVisibility()
    self:updateInputGlyphs()
  end
  v3:update(dt)
  if self.showIntroHudIfNotSaving then
    v3 = v3:getIsSaving()
    if v3 then
      self.showIntroductionHud = true
      self.showIntroHudIfNotSaving = false
    else
      v3 = v3:getIsActive()
      if v3 then
        v3:showHelp("helpZoomMap")
        v3:showHelp("helpPanMap")
      end
      self.showIntroHudIfNotSaving = false
    end
  end
  if self.showIntroductionHud then
    v3 = v3:getIsSaving()
    if not v3 then
      self.showIntroductionHud = false
      self.showIntroHudIfNotSaving = true
    end
  end
end
function InGameMenuMapFrame:showContextInput(canEnter, canReset, canVisit, canSetMarker, removeMarker, canBuy, canSell)
  v8:setVisible(canEnter)
  v8:setVisible(canReset)
  if canVisit then
  end
  v8:setVisible(v10)
  v8:setVisible(canSetMarker)
  v8:setVisible(canBuy)
  v8:setVisible(canSell)
  self:showContextMarker(canSetMarker, removeMarker)
  self:updateContextInputBarVisibility()
  v8:invalidateLayout()
end
function InGameMenuMapFrame.updateContextInputBarVisibility(v0)
end
function InGameMenuMapFrame:showContextMarker(canSetMarker, removeMarker)
  if canSetMarker then
    if removeMarker then
      local v4 = v4:getText(InGameMenuMapFrame.L10N_SYMBOL.REMOVE_MARKER)
    else
      v4 = v4:getText(InGameMenuMapFrame.L10N_SYMBOL.SET_MARKER)
    end
    v4:setText(v3)
  end
end
function InGameMenuMapFrame:setInGameMap(ingameMap)
  self.ingameMapBase = ingameMap
  v2:setIngameMap(ingameMap)
  if ingameMap ~= nil then
    local v2 = ingameMap:createCustomFilter(false)
    self.customFilterFarmlands = v2
  end
end
function InGameMenuMapFrame:setTerrainSize(terrainSize)
  v2:setTerrainSize(terrainSize)
end
function InGameMenuMapFrame:setMissionFruitTypes(missionFruitTypes)
  self.missionFruitTypes = missionFruitTypes
end
function InGameMenuMapFrame:setClient(client)
  self.client = client
end
function InGameMenuMapFrame:setPlayerFarm(playerFarm)
  self.playerFarm = playerFarm
  if playerFarm ~= nil then
    local v5 = playerFarm:getBalance()
    self:onMoneyChanged(...)
  end
end
function InGameMenuMapFrame:assignFilterData()
  v1:updatePageMapping()
  self:assignCropTypeFilterData()
  self:assignGroundStateFilterData(true, self.displayGrowthStates, self.growthStateFilterButton, self.growthStateFilterColor, self.growthStateFilterText)
  self:assignGroundStateFilterData(false, self.displaySoilStates, self.soilStateFilterButton, self.soilStateFilterColor, self.soilStateFilterText)
  self:invalidateLayout()
end
function InGameMenuMapFrame:assignCropTypeFilterData()
  -- TODO: structure LOP_FORNPREP (pc 6, target 169)
  local v6 = self.mapOverviewFruitTypeBox[1]:getDescendants(u0)
  local v7 = self.mapOverviewFruitTypeBox[1]:getDescendants(u1)
  local v8 = self.mapOverviewFruitTypeBox[1]:getDescendants(u2)
  local v9 = self.mapOverviewFruitTypeBox[1]:getDescendants(u3)
  -- TODO: structure LOP_FORNPREP (pc 29, target 165)
  if 1 <= Platform.gameplay.ingameMapFruitsPerPage then
    if 1 <= #self.displayCropTypes then
      v13:setVisible(true)
      v13:toggleFrameSide(InGameMenuMapFrame.BUTTON_FRAME_SIDE, false)
      v6[1].onHighlightCallback = self.onFilterButtonSelect
      v6[1].onHighlightRemoveCallback = self.onFilterButtonUnselect
      v6[1].onFocusCallback = self.onFilterButtonSelect
      v6[1].onLeaveCallback = self.onFilterButtonUnselect
      function v6[1].onClickCallback()
        self:onClickCropFilter(u1[u2], u3.fruitTypeIndex)
      end
      local v18 = unpack(self.displayCropTypes[1].colors[self.isColorBlindMode])
      v15:setImageColor(...)
      v15:setImageFilename(self.displayCropTypes[1].iconFilename)
      v18 = unpack(self.displayCropTypes[1].iconUVs)
      v15:setImageUVs(...)
      v15:setText(self.displayCropTypes[1].description)
      if self.fruitTypeFilter[self.displayCropTypes[1].fruitTypeIndex] == nil and self.displayCropTypes[1].fruitTypeIndex == FruitType.GRASS then
      end
      self.fruitTypeFilter[v13.fruitTypeIndex] = v15
      self:setFilterButtonDisplayEnabled(v6[v12], v15)
    else
      v13:setVisible(false)
    end
  else
    v13:setVisible(false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 164, target 30)
  v5:invalidateLayout()
  -- TODO: structure LOP_FORNLOOP (pc 168, target 7)
end
function InGameMenuMapFrame:assignGroundStateFilterData(isGrowth, displayStates, filterButtons, filterColors, filterTexts)
  -- TODO: structure LOP_FORNPREP (pc 4, target 104)
  while true do
    if not (displayStates[v6] == nil) then
      break
    end
    if not (12 >= v6 + 1) then
      break
    end
  end
  if displayStates[v6] ~= nil then
    if displayStates[v6].isActive ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R11 aux=0x80000001 -> L98
    end
    filterButtons[v9]:setVisible(true)
    filterButtons[v9]:toggleFrameSide(InGameMenuMapFrame.BUTTON_FRAME_SIDE, false)
    filterButtons[v9].onHighlightCallback = self.onFilterButtonSelect
    filterButtons[v9].onHighlightRemoveCallback = self.onFilterButtonUnselect
    filterButtons[v9].onFocusCallback = self.onFilterButtonSelect
    filterButtons[v9].onLeaveCallback = self.onFilterButtonUnselect
    self:assignGroundStateColors(filterColors[v9], v10.colors[self.isColorBlindMode])
    v14:setText(v10.description)
    function filterButtons[v9].onClickCallback()
      if u0 then
        self:onClickGrowthFilter(u2, u3)
        return
      end
      self:onClickSoilFilter(u2, u3)
    end
    if isGrowth then
    else
    end
    if v14[v9] == nil then
    else
    end
    v14[v9] = v16
    self:setFilterButtonDisplayEnabled(v11, v14[v9])
  else
    v11:setVisible(false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 103, target 5)
end
function InGameMenuMapFrame.assignGroundStateColors(v0, v1, v2)
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  v6:delete()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  v1:applyProfile(InGameMenuMapFrame.GROUND_STATE_FILTER_COLOR_PROFILE)
  v1:setSize(v1.size[1] / #v2, nil)
  local v7 = unpack(v2[1])
  v1:setImageColor(...)
  if 1 < #v2 then
    -- TODO: structure LOP_FORNPREP (pc 49, target 82)
    local v8 = v1:clone()
    table.insert({}, v8)
    v8:setSize(v1.size[1] / #v2, nil)
    v8:setPosition((2 - 1) * v1.size[1] / #v2, 0)
    local v12 = unpack(v2[2])
    v8:setImageColor(...)
    -- TODO: structure LOP_FORNLOOP (pc 81, target 50)
    for v8, v9 in ipairs({}) do
      v1:addElement(v9)
    end
  end
end
function InGameMenuMapFrame:resetUIDeadzones()
  v1:clearCursorDeadzones()
  local v3 = unpack(self.staticUIDeadzone)
  v1:addCursorDeadzone(...)
  if self.mode == InGameMenuMapFrame.MODE_OVERVIEW then
    v1:addCursorDeadzone(self.filterBox.absPosition[1], self.filterBox.absPosition[2], self.filterBox.absPosition[1] + self.filterBox.size[1], self.filterBox.absPosition[2] + self.filterBox.size[2])
  end
end
function InGameMenuMapFrame:setStaticUIDeadzone(screenX, screenY, width, height)
  self.staticUIDeadzone = {screenX, screenY, width, height}
end
function InGameMenuMapFrame:setupMapOverview()
  self.isMapOverviewInitialized = true
  self.mapSelectorMapping = {InGameMenuMapFrame.MAP_FRUIT_TYPE}
  local v1 = v1:getText("ui_mapOverviewFruitTypes")
  local v3 = string.format(v1, "")
  self.mapSelectorTexts = {}
  -- TODO: structure LOP_FORNPREP (pc 35, target 49)
  v5:delete()
  table.remove(self.mapOverviewFruitTypeBox, #self.mapOverviewFruitTypeBox)
  -- TODO: structure LOP_FORNLOOP (pc 48, target 36)
  v2:removeElement(self.mapOverviewGrowthBox)
  v2:removeElement(self.mapOverviewSoilBox)
  v2:removeElement(self.mapOverviewHotspotBox)
  local v2 = v2:clone(self.filterPaging)
  if self.fruitTypeSlider ~= nil then
    v3:setDataElement(v2)
  end
  v3:loadElementFromCustomValues(v2)
  table.insert(self.mapOverviewFruitTypeBox, v2)
  self.fruitTypePages = {{}}
  self.fruitMapping = {}
  for v7, v8 in pairs(self.displayCropTypes) do
    if Platform.gameplay.ingameMapFruitsPerPage <= v3 then
      local v9 = v9:clone(self.filterPaging)
      v10:loadElementFromCustomValues(v9)
      table.insert(self.mapOverviewFruitTypeBox, v9)
      table.insert(self.fruitTypePages, {})
      table.insert(self.mapSelectorMapping, InGameMenuMapFrame.MAP_FRUIT_TYPE)
      local v11 = string.format(v1, " 1")
      self.mapSelectorTexts[1] = v11
      local v12 = string.format(v1, " " .. #self.fruitTypePages)
      table.insert(...)
    end
    table.insert(self.fruitTypePages[#self.fruitTypePages], {fruitIndex = v8.fruitTypeIndex, isVisible = true, element = nil})
    self.fruitMapping[v8.fruitTypeIndex] = {fruitIndex = v8.fruitTypeIndex, isVisible = true, element = nil}
  end
  table.insert(self.mapSelectorMapping, InGameMenuMapFrame.MAP_GROWTH)
  v6 = v6:getText("ui_mapOverviewGrowth")
  table.insert(...)
  table.insert(self.mapSelectorMapping, InGameMenuMapFrame.MAP_SOIL)
  v6 = v6:getText("ui_mapOverviewSoil")
  table.insert(...)
  table.insert(self.mapSelectorMapping, InGameMenuMapFrame.MAP_HOTSPOTS)
  v6 = v6:getText("ui_mapOverviewHotspots")
  table.insert(...)
  self.mapSelectorTextsHotspotIndex = #self.mapSelectorTexts
  v4:addElement(self.mapOverviewGrowthBox)
  v4:addElement(self.mapOverviewSoilBox)
  v4:addElement(self.mapOverviewHotspotBox)
  v4:setTexts(self.mapSelectorTexts)
  g_inGameMenu.isMapLoaded = true
end
function InGameMenuMapFrame:onOverviewOverlayFinished(overlayId)
  self.foliageStateOverlay = overlayId
  self.foliageStateOverlayIsReady = true
  v2:setVisible(false)
  if self.dynamicMapImageLoadingBg ~= nil then
    v2:setVisible(false)
  end
end
function InGameMenuMapFrame:onFarmlandOverlayFinished(overlayId)
  self.farmlandStateOverlay = overlayId
  self.farmlandStateOverlayIsReady = true
  v2:setVisible(false)
  if self.dynamicMapImageLoadingBg ~= nil then
    v2:setVisible(false)
  end
end
function InGameMenuMapFrame:generateOverviewOverlay()
  if self.isMapOverviewInitialized then
    local v1 = v1:getState()
    if self.foliageStateOverlay == nil then
      self.foliageStateOverlayIsReady = false
    end
    v3:setVisible(true)
    if self.dynamicMapImageLoadingBg ~= nil then
      v3:setVisible(true)
    end
    if self.fruitTypeSliderElement ~= nil then
      v3:setVisible(false)
    end
    if v2 == InGameMenuMapFrame.MAP_FRUIT_TYPE then
      v3:generateFruitTypeOverlay(self.overviewOverlayFinishedCallback, self.fruitTypeFilter)
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L103
      v3:setVisible(true)
      return
    end
    if v2 == InGameMenuMapFrame.MAP_GROWTH then
      v3:generateGrowthStateOverlay(self.overviewOverlayFinishedCallback, self.growthStateFilter, self.fruitTypeFilter)
      return
    end
    if v2 == InGameMenuMapFrame.MAP_SOIL then
      v3:generateSoilStateOverlay(self.overviewOverlayFinishedCallback, self.soilStateFilter)
    end
  end
end
function InGameMenuMapFrame:generateFarmlandOverlay(selectedFarmland)
  if self.isMapOverviewInitialized then
    v2:generateFarmlandOverlay(self.farmlandOverlayFinishedCallback, selectedFarmland)
  end
end
function InGameMenuMapFrame:setFilterIconState(element, category)
  local v3 = v3:getDefaultFilterValue(category)
  v5:applyProfile(InGameMenuMapFrame.HOTSPOT_FILTER_ICON_PROFILE[v3][category])
end
function InGameMenuMapFrame:onDrawPostIngameMapHotspots()
  InGameMenuMapUtil.updateContextBoxPosition(self.contextBox, self.currentHotspot)
end
function InGameMenuMapFrame:drawHelpZoomMap()
  local v1 = v1:getIsSaving()
  if not v1 then
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextColor(1, 1, 1, 1)
    setTextBold(false)
    renderText(InGameMenuMapFrame.POSITION.HELP_TEXT[1], InGameMenuMapFrame.POSITION.HELP_TEXT[2], self.textSize, self.zoomHelpText)
    setTextAlignment(RenderText.ALIGN_LEFT)
    if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
      v1:draw()
      return
    end
    v1:render()
    return
  end
  v1:resetElement("helpZoomMap")
end
function InGameMenuMapFrame:drawHelpPanMap()
  local v1 = v1:getIsSaving()
  if not v1 then
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextColor(1, 1, 1, 1)
    setTextBold(false)
    renderText(InGameMenuMapFrame.POSITION.HELP_TEXT[1], InGameMenuMapFrame.POSITION.HELP_TEXT[2], self.textSize, self.panHelpText)
    setTextAlignment(RenderText.ALIGN_LEFT)
    if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
      v1:draw()
      return
    end
    v1:render()
    return
  end
  v1:resetElement("helpPanMap")
end
function InGameMenuMapFrame:setMapSelectionItem(hotspot)
  if hotspot ~= nil then
    local v2, v3 = hotspot:getWorldPosition()
    if v2 == nil then
    end
  end
  v2:setSelectedHotspot(hotspot)
  self.selectedField = nil
  if hotspot ~= nil then
    local v15 = InGameMenuMapUtil.getHotspotVehicle(hotspot)
    if v15 ~= nil then
      v15 = v15:getOwnerFarmId()
      v15 = v15:getName()
      v15 = v15:getImageFilename()
      self.currentHotspot = hotspot
      if not g_currentMission.isTutorialMission then
        if g_currentMission.tourIconsBase ~= nil then
          -- if g_currentMission.tourIconsBase.visible then goto L90 end
        end
        if v11.getIsEnterableFromMenu ~= nil then
          v15 = v11:getIsEnterableFromMenu()
        end
        if not self.isResetPending then
          v15 = v11:getCanBeReset()
          if v15 then
            v15 = hotspot:getCategory()
            if v15 ~= MapHotspot.CATEGORY_AI then
            end
          end
        end
      end
      if v11.spec_rideable == nil then
      end
      -- goto L158  (LOP_JUMP +61)
    end
    v15 = hotspot:isa(PlaceableHotspot)
    if v15 then
      v15 = hotspot:getName()
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L158
      v15 = hotspot:getPlaceable()
      if v15 ~= nil then
        local v16 = v15:getOwnerFarmId()
        v16 = v15:getImageFilename()
      end
      if g_currentMission.currentMapTargetHotspot ~= hotspot then
      end
      v16 = hotspot:getBeVisited()
      self.currentHotspot = hotspot
      -- goto L158  (LOP_JUMP +19)
    end
    v15 = hotspot:isa(FieldHotspot)
    -- if not v15 then goto L158 end
    self.currentHotspot = hotspot
    v15 = hotspot:getField()
    v16 = v15:getIsAIActive()
  else
    self.currentHotspot = nil
  end
  if v12 then
    local v18 = v18:getText("action_rideAnimal")
    local v17 = string.format(v18, v8)
    v15:setText(...)
    v16 = GuiUtils.getUVs(InGameMenuMapFrame.UV.BUTTON_RIDE_HORSE)
    self.buttonEnterVehicle.touchIcon.uvs = v16
  else
    v17 = v17:getText("button_enterVehicle")
    v15:setText(...)
    v16 = GuiUtils.getUVs(InGameMenuMapFrame.UV.BUTTON_ENTER_VEHICLE)
    self.buttonEnterVehicle.touchIcon.uvs = v16
  end
  if v14 then
    InGameMenuMapUtil.showContextBox(self.contextBox, hotspot, v8, v9, v10, v13)
  else
    InGameMenuMapUtil.hideContextBox(self.contextBox)
  end
  self:showContextInput(v2 and not g_currentMission.paused, v3 and not g_currentMission.paused, v4 and not g_currentMission.paused, v5, v6, v7 and not g_currentMission.paused, false)
  self.canEnter = v2 and not g_currentMission.paused
  self.canReset = v3 and not g_currentMission.paused
  self.canVisit = v4 and not g_currentMission.paused
  self.canSetMarker = v5
  self.removeMarker = v6
  self.canBuy = v7 and not g_currentMission.paused
end
function InGameMenuMapFrame:updateMapSelectionFilterNavigation()
  if self.mapSelectionPreviousItem.visible then
  elseif self.mapSelectionNextItem.visible then
  end
  if v2 == nil then
    if self.mapSelectionEnter.visible then
    elseif self.mapSelectionReset.visible then
    else
      if self.mapSelectionVisit.visible then
      elseif self.mapSelectionTag.visible then
      end
    end
  end
  local v3 = Utils.getNoNil(v1, self.mapSelectionPreviousItem)
  v3 = Utils.getNoNil(v2, self.mapSelectionEnter)
  for v6, v7 in pairs(self.mapOverviewFilters) do
    v7.focusChangeData[FocusManager.BOTTOM] = v1.focusId
  end
  v1.focusChangeData[FocusManager.BOTTOM] = v2.focusId
  v2.focusChangeData[FocusManager.TOP] = v1.focusId
end
function InGameMenuMapFrame:setColorBlindMode(isActive)
  if isActive ~= self.isColorBlindMode then
    self.isColorBlindMode = isActive
    v2:setColorBlindMode(self.isColorBlindMode)
    self:assignFilterData()
    self:generateOverviewOverlay()
  end
end
function InGameMenuMapFrame:initializeFilterButtonState()
  self:setFilterIconState(self.filterButtonVehicle, MapHotspot.CATEGORY_STEERABLE)
  self:setFilterIconState(self.filterButtonCombine, MapHotspot.CATEGORY_COMBINE)
  self:setFilterIconState(self.filterButtonTrailer, MapHotspot.CATEGORY_TRAILER)
  self:setFilterIconState(self.filterButtonTool, MapHotspot.CATEGORY_TOOL)
  self:setFilterIconState(self.filterButtonTipping, MapHotspot.CATEGORY_UNLOADING)
  self:setFilterIconState(self.filterButtonLoading, MapHotspot.CATEGORY_LOADING)
  self:setFilterIconState(self.filterButtonProductions, MapHotspot.CATEGORY_PRODUCTION)
  self:setFilterIconState(self.filterButtonAnimals, MapHotspot.CATEGORY_ANIMAL)
  self:setFilterIconState(self.filterButtonAI, MapHotspot.CATEGORY_AI)
  self:setFilterIconState(self.filterButtonContracts, MapHotspot.CATEGORY_MISSION)
  self:setFilterIconState(self.filterButtonOther, MapHotspot.CATEGORY_OTHER)
  self:setFilterIconState(self.filterButtonOther, MapHotspot.CATEGORY_SHOP)
  for v6, v7 in ipairs(self.mapOverviewFruitTypeBox) do
    local v8 = v7:getDescendants(u0)
    for v12, v13 in ipairs(v8) do
      if self.displayCropTypes[v1] ~= nil then
      end
      self:setFilterButtonDisplayEnabled(v13, v15)
      if not (Platform.gameplay.ingameMapFruitsPerPage <= v2 + 1) then
        continue
      end
      break
    end
  end
  for v6, v7 in ipairs(self.growthStateFilterButton) do
    self:setFilterButtonDisplayEnabled(v7, self.growthStateFilter[v6])
  end
  for v6, v7 in ipairs(self.soilStateFilterButton) do
    self:setFilterButtonDisplayEnabled(v7, self.soilStateFilter[v6])
  end
end
function InGameMenuMapFrame:resetFarmlandSelection()
  self.selectedFarmland = nil
  self.canBuy = false
  self.canSell = false
end
function InGameMenuMapFrame.checkPlaceablesOnFarmland(v0, v1)
  local v2 = v2:getOwnedFarmItems()
  for v6, v7 in pairs(v2) do
    if not v6.canBeSold then
      continue
    end
    local v8 = StoreItemUtil.getIsPlaceable(v6)
    if not v8 then
      continue
    end
    for v11, v12 in pairs(v7.items) do
      if not not v12.boughtWithFarmland then
        continue
      end
      local v13, v14, v15 = getWorldTranslation(v12.rootNode)
      local v16 = v16:getFarmlandIdAtWorldPosition(v13, v15)
      if not (v16 == v1.id) then
        continue
      end
      return true
    end
  end
  return false
end
function InGameMenuMapFrame:invalidateLayout()
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  v4:invalidateLayout()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  v1:invalidateLayout()
  v1:invalidateLayout()
  v1:invalidateLayout()
end
function InGameMenuMapFrame:onMoneyChanged(farmId, newBalance)
  if farmId == self.playerFarm.farmId and self.balanceText ~= nil then
    v3:setValue(newBalance)
    local v4 = math.floor(newBalance)
    if v4 <= -1 then
    end
    v4:applyProfile(v3)
    v4:invalidateLayout()
  end
end
function InGameMenuMapFrame:onClickMapFilterSteerable(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_STEERABLE)
  self:setFilterIconState(element, MapHotspot.CATEGORY_STEERABLE)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onClickMapFilterCombine(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_COMBINE)
  self:setFilterIconState(element, MapHotspot.CATEGORY_COMBINE)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onClickMapFilterTrailer(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_TRAILER)
  self:setFilterIconState(element, MapHotspot.CATEGORY_TRAILER)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onClickMapFilterTools(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_TOOL)
  self:setFilterIconState(element, MapHotspot.CATEGORY_TOOL)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onClickMapFilterTipStations(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_UNLOADING)
  self:setFilterIconState(element, MapHotspot.CATEGORY_UNLOADING)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onClickMapFilterLoadingStations(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_LOADING)
  self:setFilterIconState(element, MapHotspot.CATEGORY_LOADING)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onClickMapFilterProductions(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_PRODUCTION)
  self:setFilterIconState(element, MapHotspot.CATEGORY_PRODUCTION)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onClickMapFilterAI(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_AI)
  self:setFilterIconState(element, MapHotspot.CATEGORY_AI)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onClickMapFilterAnimals(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_ANIMAL)
  self:setFilterIconState(element, MapHotspot.CATEGORY_ANIMAL)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onClickMapFilterContracts(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_MISSION)
  self:setFilterIconState(element, MapHotspot.CATEGORY_MISSION)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onClickMapFilterOther(element)
  v2:toggleDefaultFilter(MapHotspot.CATEGORY_OTHER)
  local v5 = v5:getDefaultFilterValue(MapHotspot.CATEGORY_OTHER)
  v2:setDefaultFilterValue(...)
  self:setFilterIconState(element, MapHotspot.CATEGORY_OTHER)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onDrawPostIngameMap(element, ingameMap)
  if self.hideContentOverlay then
    return
  end
  if self.mode == InGameMenuMapFrame.MODE_OVERVIEW then
    -- if not v0.foliageStateOverlayIsReady then goto L19 end
  elseif self.mode == InGameMenuMapFrame.MODE_FARMLANDS and self.farmlandStateOverlayIsReady then
  end
  if v3 ~= 0 then
    local v4, v5 = v4:getMapSize()
    local v6, v7 = v6:getMapPosition()
    renderOverlay(v3, v6 + v4 * 0.25, v7 + v5 * 0.25, v4 * 0.5, v5 * 0.5)
    if self.mode == InGameMenuMapFrame.MODE_FARMLANDS then
      local textSize = getCorrectTextSize(0.018)
      setTextBold(true)
      setTextAlignment(RenderText.ALIGN_CENTER)
      setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_MIDDLE)
      local v16 = v16:getFarmlands()
      for v18, v19 in pairs(...) do
        if not v19.showOnFarmlandsScreen then
          continue
        end
        setTextColor(0, 0, 0, 1)
        local v28 = tostring(v19.id)
        renderText(...)
        if v19 == self.selectedFarmland then
          setTextColor(0.0227, 0.5346, 0.8519, 1)
        else
          setTextColor(1, 1, 1, 1)
        end
        v28 = tostring(v19.id)
        renderText(...)
      end
      setTextBold(false)
      setTextAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
      setTextVerticalAlignment(RenderText.ALIGN_LEFT)
    end
  end
end
function InGameMenuMapFrame:onClickMapOverviewSelector(state)
  ingameMap:setPage(state)
  self:invalidateLayout()
  self:generateOverviewOverlay()
end
function InGameMenuMapFrame.onFilterButtonSelect(_, button)
  button:toggleFrameSide(InGameMenuMapFrame.BUTTON_FRAME_SIDE, true)
end
function InGameMenuMapFrame.onFilterButtonUnselect(_, button)
  button:toggleFrameSide(InGameMenuMapFrame.BUTTON_FRAME_SIDE, false)
  for v5, v6 in pairs(button.elements) do
    local v9 = v6:getIsDisabled()
    v6:setDisabled(...)
  end
end
function InGameMenuMapFrame.setFilterButtonDisplayEnabled(v0, element, ingameMap)
  for v6, v7 in pairs(element.elements) do
    v7:setDisabled(not ingameMap)
  end
end
function InGameMenuMapFrame:toggleFilter(filterButton, filterMap, filterKey)
  filterMap[filterKey] = not filterMap[filterKey]
  self:setFilterButtonDisplayEnabled(filterButton, not filterMap[filterKey])
  self:generateOverviewOverlay()
  self:saveFilters()
end
function InGameMenuMapFrame:onClickCropFilter(element, fruitTypeIndex)
  self:toggleFilter(element, self.fruitTypeFilter, fruitTypeIndex)
end
function InGameMenuMapFrame:onClickGrowthFilter(element, growthStateIndex)
  self:toggleFilter(element, self.growthStateFilter, growthStateIndex)
end
function InGameMenuMapFrame:onClickSoilFilter(element, soilStateIndex)
  self:toggleFilter(element, self.soilStateFilter, soilStateIndex)
end
function InGameMenuMapFrame:onClickHotspot(element, hotspot)
  if self.mode == InGameMenuMapFrame.MODE_OVERVIEW then
    local category = hotspot:getCategory()
    if self.currentHotspot ~= hotspot and InGameMenuMapFrame.HOTSPOT_VALID_CATEGORIES[category] and hotspot ~= self.anywhereHotspot then
      self:showContextInput(false, false, false, false, false, false, false)
      self:setMapSelectionItem(hotspot)
    end
  end
end
function InGameMenuMapFrame:onClickMap(element, worldX, worldZ)
  if self.mode == InGameMenuMapFrame.MODE_OVERVIEW then
    self:setMapSelectionItem(nil)
    self:showContextInput(false, false, false, false, false, false, false)
    return
  end
  if self.mode == InGameMenuMapFrame.MODE_FARMLANDS then
    local v4 = v4:getFarmlandAtWorldPosition(worldX, worldZ)
    self.selectedFarmland = v4
    if self.selectedFarmland ~= nil then
      -- if not v0.selectedFarmland.showOnFarmlandsScreen then goto L185 end
      self:generateFarmlandOverlay(self.selectedFarmland)
      local v5 = v5:getBalance()
      if self.selectedFarmland.price > v5 then
        -- if not v0.selectedFarmland.isOwned then goto L82 end
      end
      v4:applyProfile(InGameMenuMapFrame.PROFILE.MONEY_VALUE_NEUTRAL)
      -- goto L93  (LOP_JUMP +11)
      v4:applyProfile(InGameMenuMapFrame.PROFILE.MONEY_VALUE_NEGATIVE)
      v4:setText(self.selectedFarmland.id)
      v4:setValue(self.selectedFarmland.price)
      v4:setVisible(true)
      v4:invalidateLayout()
      v4 = v4:getFarmlandOwner(self.selectedFarmland.id)
      v5 = v5:getHasPlayerPermission("farmManager")
      if v4 == FarmlandManager.NO_OWNER_FARM_ID then
      end
      self.canBuy = v6
      if v4 == self.playerFarm.farmId then
      end
      self.canSell = v6
      self:showContextInput(false, false, false, false, false, self.canBuy, self.canSell)
      return
    end
    self:generateFarmlandOverlay(nil)
    self:resetFarmlandSelection()
    self:showContextInput(false, false, false, false, false, false, false)
  end
end
function InGameMenuMapFrame:onVehiclesChanged(vehicle, wasAdded, isExitingGame)
  self:selectFirstHotspot()
end
function InGameMenuMapFrame:onFarmlandStateChanged(farmlandId, farmId)
  if self.mode == InGameMenuMapFrame.MODE_FARMLANDS then
    if self.selectedFarmland ~= nil and self.selectedFarmland.id == farmlandId then
      self:resetFarmlandSelection()
    end
    self:generateFarmlandOverlay(nil)
    self:showContextInput()
  end
end
function InGameMenuMapFrame:onVehicleReset(state)
  self.isResetPending = false
  ingameMap:unsubscribe(ResetVehicleEvent, self)
  if state == ResetVehicleEvent.STATE_SUCCESS then
    local v3 = v3:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_VEHICLE_RESET_DONE)
    InfoDialog.show(v3, self.onInfoOkClick, self, DialogElement.TYPE_INFO)
    self:selectFirstHotspot()
    return
  end
  if state == ResetVehicleEvent.STATE_FAILED then
    v3 = v3:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_VEHICLE_RESET_FAILED)
    InfoDialog.show(v3, self.onInfoOkClick, self)
    return
  end
  if state == ResetVehicleEvent.STATE_IN_USE then
    v3 = v3:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_VEHICLE_IN_USE)
    InfoDialog.show(v3, self.onInfoOkClick, self)
    return
  end
  v3 = v3:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_VEHICLE_NO_PERMISSION)
  InfoDialog.show(v3, self.onInfoOkClick, self)
end
function InGameMenuMapFrame:onInfoOkClick()
  self:disableAlternateBindings()
end
function InGameMenuMapFrame:onClickResetVehicle()
  if not self.isResetPending then
    if g_currentMission.tourIconsBase ~= nil then
      -- if g_currentMission.tourIconsBase.visible then goto L42 end
    end
    if self.currentHotspot ~= nil then
      local v4 = v4:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_VEHICLE_RESET_CONFIRM)
      local v5 = v5:getText(InGameMenuMapFrame.L10N_SYMBOL.VEHICLE_RESET)
      YesNoDialog.show(...)
    end
  end
end
function InGameMenuMapFrame:onClickVisitPlace()
  if self.currentHotspot ~= nil then
    local element, ingameMap, v3 = element:getTeleportWorldPosition()
    if element ~= nil and ingameMap ~= nil and v3 ~= nil then
      self.onClickBackCallback()
      if g_currentMission.controlledVehicle ~= nil then
        v4:onLeaveVehicle(element, ingameMap, v3, true, false)
        return
      end
      v4:moveToAbsolute(element, ingameMap, v3, false, false)
    end
  end
end
function InGameMenuMapFrame:onClickTagPlace()
  if self.currentHotspot ~= nil and self.currentHotspot.worldX ~= nil and self.currentHotspot.worldZ ~= nil then
    if g_currentMission.currentMapTargetHotspot ~= self.currentHotspot then
      self.removeMarker = true
      element:setMapTargetHotspot(self.currentHotspot)
    else
      self.removeMarker = false
      element:setMapTargetHotspot(nil)
    end
    self:showContextMarker(self.canSetMarker, self.removeMarker)
  end
end
function InGameMenuMapFrame:onClickEnterVehicle()
  if not g_currentMission.isPlayerFrozen then
    local vehicle = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
    if not vehicle then
      vehicle = InGameMenuMapUtil.getHotspotVehicle(self.currentVehicleHotspot)
    end
    if vehicle ~= nil and vehicle.getIsEnterableFromMenu ~= nil then
      local ingameMap = vehicle:getIsEnterableFromMenu()
      if ingameMap then
        self.onClickBackCallback()
        ingameMap:requestToEnterVehicle(vehicle)
      end
    end
  end
end
function InGameMenuMapFrame:onClickSwitchMapMode()
  if self.mode == InGameMenuMapFrame.MODE_OVERVIEW then
    self:setMode(InGameMenuMapFrame.MODE_FARMLANDS)
    return
  end
  self:setMode(InGameMenuMapFrame.MODE_OVERVIEW)
end
function InGameMenuMapFrame:setMode(mode)
  self.mode = mode
  if mode == InGameMenuMapFrame.MODE_FARMLANDS then
    self:generateFarmlandOverlay()
    local v5 = v5:getBalance()
    v3:setValue(...)
    self:resetFarmlandSelection()
    InGameMenuMapUtil.hideContextBox(self.contextBox)
    self:showContextInput(false, false, false, false, false, false, false)
    v3:applyCustomFilter(self.customFilterFarmlands)
  else
    self:generateOverviewOverlay()
    self:setMapSelectionItem(self.currentHotspot)
    v3:restoreDefaultFilter()
  end
  v3:setVisible(ingameMap)
  v3:setVisible(false)
  self:updateInputGlyphs()
  self:resetUIDeadzones()
end
function InGameMenuMapFrame:onClickBuyFarmland()
  if self.selectedFarmland ~= nil then
    local ingameMap = ingameMap:getBalance()
    if self.selectedFarmland.price <= ingameMap then
      local v3 = v3:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_BUY_FARMLAND)
      local v4 = v4:formatMoney(self.selectedFarmland.price, 0, true, true)
      ingameMap = string.format(...)
      v3 = v3:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_BUY_FARMLAND_TITLE)
      YesNoDialog.show(self.onYesNoBuyFarmland, self, ingameMap, v3)
      return
    end
    v3 = v3:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_BUY_FARMLAND_NOT_ENOUGH_MONEY)
    InfoDialog.show(...)
  end
end
function InGameMenuMapFrame:onClickSellFarmland()
  local element = self:checkPlaceablesOnFarmland(self.selectedFarmland)
  if element then
    local ingameMap = ingameMap:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_CANNOT_SELL_WTIH_PLACEABLES)
    InfoDialog.show(...)
    return
  end
  local v3 = v3:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_SELL_FARMLAND)
  local v4 = v4:formatMoney(self.selectedFarmland.price, 0, true, true)
  ingameMap = string.format(...)
  v3 = v3:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_SELL_FARMLAND_TITLE)
  YesNoDialog.show(self.onYesNoSellFarmland, self, ingameMap, v3)
end
function InGameMenuMapFrame:onYesNoReset(yes)
  if yes and self.currentHotspot ~= nil then
    local vehicle = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
    if vehicle ~= nil then
      v3:setVisible(false)
      v3:subscribe(ResetVehicleEvent, self.onVehicleReset, self)
      self.isResetPending = true
      local v3 = v3:getServerConnection()
      local v5 = ResetVehicleEvent.new(vehicle)
      v3:sendEvent(...)
      self.currentVehicleHotspot = nil
      self.currentHotspot = nil
    end
  end
end
function InGameMenuMapFrame:onPauseChanged(isActive)
  self:setMapSelectionItem(self.currentHotspot)
end
function InGameMenuMapFrame:selectFirstHotspot(allowedHotspots)
  if allowedHotspots == nil then
  end
  local ingameMap = ingameMap:cycleVisibleHotspot(nil, allowedHotspots, 1)
  self:setMapSelectionItem(ingameMap)
end
function InGameMenuMapFrame:updateInputGlyphs()
  if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
  else
  end
  v3:setActions(element, nil, nil, true, true)
  v3:setActions({InputAction.AXIS_MAP_ZOOM_IN, InputAction.AXIS_MAP_ZOOM_OUT}, nil, nil, false, true)
  v3:setText(ingameMap)
  v3:setText(self.zoomText)
  if self.mode == InGameMenuMapFrame.MODE_OVERVIEW then
    local v4 = v4:getText(InGameMenuMapFrame.L10N_SYMBOL.SWITCH_FARMLANDS)
  elseif self.mode == InGameMenuMapFrame.MODE_FARMLANDS then
    v4 = v4:getText(InGameMenuMapFrame.L10N_SYMBOL.SWITCH_OVERVIEW)
  end
  v4:setInputAction(InputAction.MENU_EXTRA_1)
  v4:setText(v3)
end
function InGameMenuMapFrame:onYesNoBuyFarmland(yes)
  if yes then
    local v3 = v3:getBalance()
    if self.selectedFarmland.price <= v3 then
      v3 = v3:getServerConnection()
      local v7 = v7:getFarmId()
      local v5 = FarmlandStateEvent.new(self.selectedFarmland.id, v7, self.selectedFarmland.price)
      v3:sendEvent(...)
    end
  end
end
function InGameMenuMapFrame:onYesNoSellFarmland(yes)
  if yes then
    local v3 = v3:getServerConnection()
    local v5 = FarmlandStateEvent.new(self.selectedFarmland.id, FarmlandManager.NO_OWNER_FARM_ID, self.selectedFarmland.price)
    v3:sendEvent(...)
  end
end
function InGameMenuMapFrame:onClickBuyField(fieldId)
  local ingameMap = ingameMap:getFieldByIndex(fieldId)
  local v4 = v4:getFarmlandOwner(ingameMap.farmland.id)
  local v5 = v5:getFarmId()
  if v4 ~= v5 then
    v4 = v4:getBalance()
    if ingameMap.farmland.price <= v4 then
      local v7 = v7:getText(InGameMenuMapFrame.L10N_SYMBOL.MOBILE_BUY_FIELD_TEXT)
      local v8 = v8:formatMoney(v4, 0, true, true)
      local v9 = v9:formatMoney(ingameMap.farmland.price, 0, true, true)
      local v6 = string.format(...)
      v7 = v7:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_BUY_FARMLAND_TITLE)
      YesNoDialog.show(self.onYesNoBuyField, self, v6, v7)
    elseif Platform.hasInAppPurchases then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L153
      v6 = v6:getIsAvailable()
      -- if not v6 then goto L153 end
      v7 = v7:getText(InGameMenuMapFrame.L10N_SYMBOL.MOBILE_BUY_FIELD_TEXT_COINS)
      v8 = v8:formatMoney(v4, 0, true, true)
      v9 = v9:formatMoney(ingameMap.farmland.price, 0, true, true)
      v6 = string.format(...)
      v7 = v7:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_BUY_FARMLAND_TITLE)
      YesNoDialog.show(self.onYesNoBuyCoins, self, v6, v7)
      self.toBuyField = nil
    else
      v7 = v7:getText(InGameMenuMapFrame.L10N_SYMBOL.DIALOG_BUY_FARMLAND_NOT_ENOUGH_MONEY)
      InfoDialog.show(...)
    end
  end
  self.toBuyField = ingameMap
end
function InGameMenuMapFrame:onYesNoBuyField(yes)
  if yes then
    local ingameMap = ingameMap:getServerConnection()
    local v6 = v6:getFarmId()
    local v4 = FarmlandStateEvent.new(self.toBuyField.farmland.id, v6, self.toBuyField.farmland.price)
    ingameMap:sendEvent(...)
    self:setMapSelectionItem(self.currentHotspot)
  end
  self.toBuyField = nil
end
function InGameMenuMapFrame:onYesNoBuyCoins(yes)
  if yes then
    self.onClickBackCallback()
    ingameMap:showCoinShop()
  end
end
function InGameMenuMapFrame:getNumberOfItemsInSection(fieldId, ingameMap)
  return #self.customListItems[ingameMap]
end
function InGameMenuMapFrame:populateCellForItemInSection(fieldId, ingameMap, v3, v4)
  local v6 = InGameMenuMapUtil.getHotspotVehicle(self.customListItems[ingameMap][v3])
  local v7 = v4:getAttribute("icon")
  v7:setImageFilename(self.customListItems[ingameMap][v3].icon.filename)
  local v11 = unpack(self.customListItems[ingameMap][v3].icon.uvs)
  v7:setImageUVs(...)
  v7:setVisible(true)
  if v6 ~= nil then
    local v8 = v4:getAttribute("text")
    local v10 = v6:getName()
    v8:setText(...)
    return
  end
  v8 = v5:isa(PlaceableHotspot)
  if v8 then
    v8 = v4:getAttribute("text")
    v10 = v5:getName()
    v8:setText(...)
    return
  end
  v8 = v5:isa(FieldHotspot)
  if v8 then
    v8 = v4:getAttribute("text")
    local textSize = textSize:getText("ui_fieldNo")
    v8:setText(textSize .. " " .. v5.name)
    v7:setVisible(false)
  end
end
function InGameMenuMapFrame:getNumberOfSections()
  return #self.customListItems
end
function InGameMenuMapFrame:getTitleForSectionHeader(fieldId, ingameMap)
  if self.sectionHeaderNameFunction == nil then
    return ""
  end
  local v5 = self.sectionHeaderNameFunction(ingameMap)
  return v3:getText(...)
end
function InGameMenuMapFrame:registerInput()
  self:unregisterInput()
  fieldId:registerActionEvent(InputAction.MENU_ACTIVATE, self, self.onMenuActivate, false, true, false, true)
  fieldId:registerActionEvent(InputAction.MENU_CANCEL, self, self.onMenuCancel, false, true, false, true)
  fieldId:registerActionEvent(InputAction.SWITCH_VEHICLE, self, self.onSwitchVehicle, false, true, false, true, 1)
  fieldId:registerActionEvent(InputAction.SWITCH_VEHICLE_BACK, self, self.onSwitchVehicle, false, true, false, true, -1)
  fieldId:registerActionEvent(InputAction.MENU_EXTRA_1, self, self.onClickSwitchMapMode, false, true, false, true)
end
function InGameMenuMapFrame.unregisterInput(v0, fieldId)
  if fieldId then
    -- if InGameMenuMapFrame.CLEAR_CLOSE_INPUT_ACTIONS then goto L10 end
  end
  for v6, v7 in pairs(InGameMenuMapFrame.CLEAR_INPUT_ACTIONS) do
    v8:removeActionEventsByActionName(v7)
  end
end
function InGameMenuMapFrame:onMenuActivate()
  if self.mode == InGameMenuMapFrame.MODE_OVERVIEW then
    if self.canEnter then
      self:onClickEnterVehicle()
      return
    end
    -- if not v0.canVisit then goto L36 end
    self:onClickVisitPlace()
    return
  end
  if self.mode == InGameMenuMapFrame.MODE_FARMLANDS and self.canBuy then
    self:onClickBuyFarmland()
  end
end
function InGameMenuMapFrame:onMenuCancel()
  if self.mode == InGameMenuMapFrame.MODE_OVERVIEW then
    if self.canSetMarker then
      self:onClickTagPlace()
      return
    end
    -- if not v0.canReset then goto L36 end
    self:onClickResetVehicle()
    return
  end
  if self.mode == InGameMenuMapFrame.MODE_FARMLANDS and self.canSell then
    self:onClickSellFarmland()
  end
end
function InGameMenuMapFrame:onSwitchVehicle(_, _, direction)
  if g_currentMission.controlledVehicle == nil then
  end
  v4[v5] = true
  local v5 = v5:cycleVisibleHotspot(self.currentHotspot, v4, direction)
  self:setMapSelectionItem(v5)
end
function InGameMenuMapFrame:onSwitchVehicleGeneric(_, dir)
  if dir < 0 then
    self:onSwitchVehicle(nil, nil, -1)
    return
  end
  self:onSwitchVehicle(nil, nil, 1)
end
function InGameMenuMapFrame:onClickBack()
  self:onClickBackCallback()
end
InGameMenuMapFrame.HOTSPOT_VALID_CATEGORIES = {}
function InGameMenuMapFrame.initializeValidHotspots(v0)
  {}[MapHotspot.CATEGORY_STEERABLE] = true
  {}[MapHotspot.CATEGORY_COMBINE] = true
  {}[MapHotspot.CATEGORY_TRAILER] = true
  {}[MapHotspot.CATEGORY_TOOL] = true
  {}[MapHotspot.CATEGORY_UNLOADING] = true
  {}[MapHotspot.CATEGORY_LOADING] = true
  {}[MapHotspot.CATEGORY_PRODUCTION] = true
  {}[MapHotspot.CATEGORY_ANIMAL] = true
  {}[MapHotspot.CATEGORY_MISSION] = true
  {}[MapHotspot.CATEGORY_OTHER] = true
  {}[MapHotspot.CATEGORY_AI] = true
  {}[MapHotspot.CATEGORY_FIELD] = false
  {}[MapHotspot.CATEGORY_SHOP] = true
  {}[MapHotspot.CATEGORY_PLAYER] = true
  InGameMenuMapFrame.HOTSPOT_VALID_CATEGORIES = {}
end
{}[MapHotspot.CATEGORY_STEERABLE] = true
{}[MapHotspot.CATEGORY_COMBINE] = true
{}[MapHotspot.CATEGORY_TRAILER] = true
{}[MapHotspot.CATEGORY_TOOL] = true
{}[MapHotspot.CATEGORY_UNLOADING] = true
{}[MapHotspot.CATEGORY_LOADING] = true
{}[MapHotspot.CATEGORY_PRODUCTION] = true
{}[MapHotspot.CATEGORY_ANIMAL] = true
{}[MapHotspot.CATEGORY_AI] = true
{}[MapHotspot.CATEGORY_SHOP] = true
{}[MapHotspot.CATEGORY_PLAYER] = true
InGameMenuMapFrame.HOTSPOT_SWITCH_CATEGORIES = {}
{}[MapHotspot.CATEGORY_TOOL] = true
{}[MapHotspot.CATEGORY_TRAILER] = true
{}[MapHotspot.CATEGORY_COMBINE] = true
{}[MapHotspot.CATEGORY_STEERABLE] = true
{}[MapHotspot.CATEGORY_AI] = true
{}[MapHotspot.CATEGORY_FIELD] = true
{}[MapHotspot.CATEGORY_ANIMAL] = true
{}[MapHotspot.CATEGORY_LOADING] = true
{}[MapHotspot.CATEGORY_OTHER] = true
InGameMenuMapFrame.PAGE_HOTSPOTS = {{}, {}, {}, {}, {}, {}}
InGameMenuMapFrame.GROUND_STATE_FILTER_COLOR_PROFILE = "ingameMenuMapFilterDynamicColorLarge"
InGameMenuMapFrame.CONTEXT_BOX_BOTTOM_FRAME_PROFILE = "ingameMenuMapContextBoxFrameBottom"
InGameMenuMapFrame.CONTEXT_BOX_TOP_FRAME_PROFILE = "ingameMenuMapContextBoxFrameTop"
{}[MapHotspot.CATEGORY_STEERABLE] = "ingameMenuMapFilterButtonIconSteerable"
{}[MapHotspot.CATEGORY_COMBINE] = "ingameMenuMapFilterButtonIconCombine"
{}[MapHotspot.CATEGORY_TRAILER] = "ingameMenuMapFilterButtonIconTrailer"
{}[MapHotspot.CATEGORY_TOOL] = "ingameMenuMapFilterButtonIconTool"
{}[MapHotspot.CATEGORY_UNLOADING] = "ingameMenuMapFilterButtonIconTipping"
{}[MapHotspot.CATEGORY_LOADING] = "ingameMenuMapFilterButtonIconLoading"
{}[MapHotspot.CATEGORY_PRODUCTION] = "ingameMenuMapFilterButtonIconProduction"
{}[MapHotspot.CATEGORY_ANIMAL] = "ingameMenuMapFilterButtonIconAnimal"
{}[MapHotspot.CATEGORY_AI] = "ingameMenuMapFilterButtonIconAI"
{}[MapHotspot.CATEGORY_MISSION] = "ingameMenuMapFilterButtonIconFieldJobs"
{}[MapHotspot.CATEGORY_OTHER] = "ingameMenuMapFilterButtonIconOther"
{}[true] = {}
{}[MapHotspot.CATEGORY_STEERABLE] = "ingameMenuMapFilterButtonIconSteerableInactive"
{}[MapHotspot.CATEGORY_COMBINE] = "ingameMenuMapFilterButtonIconCombineInactive"
{}[MapHotspot.CATEGORY_TRAILER] = "ingameMenuMapFilterButtonIconTrailerInactive"
{}[MapHotspot.CATEGORY_TOOL] = "ingameMenuMapFilterButtonIconToolInactive"
{}[MapHotspot.CATEGORY_UNLOADING] = "ingameMenuMapFilterButtonIconTippingInactive"
{}[MapHotspot.CATEGORY_LOADING] = "ingameMenuMapFilterButtonIconLoadingInactive"
{}[MapHotspot.CATEGORY_PRODUCTION] = "ingameMenuMapFilterButtonIconProductionInactive"
{}[MapHotspot.CATEGORY_ANIMAL] = "ingameMenuMapFilterButtonIconAnimalInactive"
{}[MapHotspot.CATEGORY_AI] = "ingameMenuMapFilterButtonIconAIInactive"
{}[MapHotspot.CATEGORY_MISSION] = "ingameMenuMapFilterButtonIconFieldJobsInactive"
{}[MapHotspot.CATEGORY_OTHER] = "ingameMenuMapFilterButtonIconOtherInactive"
{}[false] = {}
InGameMenuMapFrame.HOTSPOT_FILTER_ICON_PROFILE = {}
InGameMenuMapFrame.GLYPH_SIZE = {36, 36}
InGameMenuMapFrame.GLYPH_TEXT_SIZE = 20
InGameMenuMapFrame.GLYPH_COLOR = {1, 1, 1, 1}
InGameMenuMapFrame.L10N_SYMBOL = {SET_MARKER = "action_tag", REMOVE_MARKER = "action_untag", VEHICLE_RESET = "button_reset", DIALOG_VEHICLE_RESET_DONE = "ui_vehicleResetDone", DIALOG_VEHICLE_RESET_FAILED = "ui_vehicleResetFailed", DIALOG_VEHICLE_IN_USE = "shop_messageReturnVehicleInUse", DIALOG_VEHICLE_NO_PERMISSION = "shop_messageNoPermissionGeneral", DIALOG_VEHICLE_RESET_CONFIRM = "ui_wantToResetVehicleText", DIALOG_BUY_FARMLAND = "shop_messageBuyFarmlandText", DIALOG_BUY_FARMLAND_TITLE = "shop_messageBuyFarmlandTitle", DIALOG_BUY_FARMLAND_NOT_ENOUGH_MONEY = "shop_messageNotEnoughMoneyToBuyFarmland", DIALOG_SELL_FARMLAND = "shop_messageSellFarmlandText", DIALOG_SELL_FARMLAND_TITLE = "shop_messageSellFarmlandTitle", DIALOG_CANNOT_SELL_WTIH_PLACEABLES = "shop_messageCannotSellFarmlandWithPlaceables", SWITCH_FARMLANDS = "ui_ingameMenuMapFarmlands", SWITCH_OVERVIEW = "ui_ingameMenuMapOverview", INPUT_MOVE_CURSOR = "ui_ingameMenuMapMoveCursor", INPUT_PAN_MAP = "ui_ingameMenuMapPan", INPUT_ZOOM_MAP = "ui_ingameMenuMapZoom", MOBILE_BUY_FIELD_TEXT = "ui_mobile_buyFieldDialogText", MOBILE_BUY_FIELD_TEXT_COINS = "ui_mobile_buyFieldDialogText_buyCoins", BUY_FIELD_TITLE = "shop_messageBuyFieldTitle", MAP_PAGES = {"ui_map_crops", "ui_map_growth", "ui_map_soil"}}
InGameMenuMapFrame.PROFILE = {MONEY_VALUE_NEUTRAL = "ingameMenuMapMoneyValue", MONEY_VALUE_NEGATIVE = "ingameMenuMapMoneyValueNegative"}
InGameMenuMapFrame.POSITION = {HELP_TEXT = {0.5, 0.4}}
InGameMenuMapFrame.SIZE = {INPUT_GLYPH_ZOOM_TOUCH = {100, 100}, INPUT_GLYPH_ZOOM_GAMEPAD = {80, 80}, INPUT_GLYPH_PAN_TOUCH = {100, 100}, INPUT_GLYPH_PAN_GAMEPAD = {80, 80}, TEXT = 70}
InGameMenuMapFrame.COLOR = {INPUT_GLYPH = {0.0227, 0.5346, 0.8519, 1}}
InGameMenuMapFrame.UV = {INPUT_GLYPH_ZOOM_TOUCH = {1517, 192, 72, 72}, INPUT_GLYPH_ZOOM_GAMEPAD = {822, 205, 84, 38}, INPUT_GLYPH_PAN_TOUCH = {1600, 192, 72, 72}, INPUT_GLYPH_PAN_GAMEPAD = {773, 205, 38, 38}, BUTTON_RIDE_HORSE = {946, 539, 36, 36}, BUTTON_ENTER_VEHICLE = {909, 502, 36, 36}}
