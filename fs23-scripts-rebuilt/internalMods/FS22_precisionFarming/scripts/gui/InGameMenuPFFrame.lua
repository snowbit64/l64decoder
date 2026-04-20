-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuPFFrame = {}
local InGameMenuPFFrame_mt = Class(InGameMenuPFFrame, TabbedMenuFrameElement)
InGameMenuPFFrame.CONTROLS = {"mapOverviewSelector", "ingameMap", "mapCursor", "mapControls", "mapZoomGlyph", "mapMoveGlyph", "mapBox", "mapMoveGlyphText", "mapZoomGlyphText", "mapOverviewSoilBox", "valueMapFilterButton", "valueMapFilterColor", "valueMapFilterText", "laboratoryInfoText", "laboratoryWindow", "economicAnalysisWindow", "economicAnalysisHeaderField", "economicAnalysisHeaderValues", "buttonSwitchValues", "buttonResetStats", "statAmountText", "statCostText", "statPercentageText", "statTotalCostText", "statTotalCostPercentageText", "statTotalEarningsText", "statTotalEarningsPercentageText", "statTotalText", "statTotalPercentageText", "fieldBuyInfoWindow", "fieldBuyHeader", "soilNameText", "soilPercentageText", "soilPercentageBar", "yieldPercentageText", "yieldPercentageBarBase", "yieldPercentageBarPos", "yieldPercentageBarNeg", "resetYieldButtonBackground", "resetYieldButton", "helpButtonBackground", "helpButton", "envScoreWindow", "envScoreBarStatic", "envScoreBarDynamic", "envScoreBarIndicator", "envScoreBarNumber", "envScoreDistributionText", "envScoreDistributionBarBackground", "envScoreDistributionBar", "envScoreDistributionValue", "envScoreInfoText", "buttonAdditionalFunc", "buttonSelectIngame"}
InGameMenuPFFrame.INPUT_CONTEXT_NAME = "MENU_PF"
InGameMenuPFFrame.MOD_NAME = g_currentModName
InGameMenuPFFrame.BUTTON_FRAME_SIDE = GuiElement.FRAME_RIGHT
function InGameMenuPFFrame.new(subclass_mt, messageCenter, l10n, inputManager, inputDisplayManager, farmlandManager, farmManager)
  if not subclass_mt then
  end
  local v7 = v7(v8, v9)
  v7:registerControls(InGameMenuPFFrame.CONTROLS)
  v7.inputManager = inputManager
  v7.farmManager = farmManager
  v7.farmlandManager = farmlandManager
  v7.onClickBackCallback = u1
  v7.hasFullScreenMap = true
  v7.hotspotFilterState = {}
  local v9 = v9:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  v7.isColorBlindMode = v9 or false
  v7.isMapOverviewInitialized = false
  v7.lastInputHelpMode = 0
  v7.ingameMapBase = nil
  v7.staticUIDeadzone = {0, 0, 0, 0}
  v7.needsSolidBackground = true
  v7.precisionFarming = g_precisionFarming
  v7.activeValueMapIndex = 1
  return v7
end
function InGameMenuPFFrame:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.inputManager = src.inputManager
  self.farmlandManager = src.farmlandManager
  self.farmManager = src.farmManager
  if not src.onClickBackCallback then
  end
  self.onClickBackCallback = v2
end
function InGameMenuPFFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  local v2, v3 = getNormalizedScreenValues(0, InGameMenuPFFrame.GLYPH_TEXT_SIZE)
  self.glyphTextSize = v3
  v2 = v2:getText(InGameMenuPFFrame.L10N_SYMBOL.INPUT_ZOOM_MAP)
  self.zoomText = v2
  v2 = v2:getText(InGameMenuPFFrame.L10N_SYMBOL.INPUT_MOVE_CURSOR)
  self.moveCursorText = v2
  v2 = v2:getText(InGameMenuPFFrame.L10N_SYMBOL.INPUT_PAN_MAP)
  self.panMapText = v2
end
function InGameMenuPFFrame:delete()
  v1:unsubscribeAll(self)
  v1:removeStateChangeListener(self)
  if self.soilStateOverlay ~= nil then
    delete(self.soilStateOverlay)
  end
  if self.farmlandSelectionOverlay ~= nil then
    delete(self.farmlandSelectionOverlay)
  end
  if self.coverStateOverlays ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 39, target 49)
    delete(self.coverStateOverlays[1].overlay)
    -- TODO: structure LOP_FORNLOOP (pc 48, target 40)
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function InGameMenuPFFrame:initialize(onClickBackCallback)
  if not GS_IS_MOBILE_VERSION then
    self:updateInputGlyphs()
  end
  self.deadzoneElements = {self.economicAnalysisWindow, self.laboratoryWindow, self.mapOverviewSelector}
  if not onClickBackCallback then
  end
  self.onClickBackCallback = v2
end
function InGameMenuPFFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self.isOpen = true
  self:toggleCustomInputContext(true, InGameMenuPFFrame.INPUT_CONTEXT_NAME)
  v1:removeActionEventsByActionName(InputAction.MENU_EXTRA_2)
  v1:onOpen()
  v1:registerActionEvents()
  v1:applyCustomFilter(self.customFilter)
  self.mapOverviewZoom = 1
  self.mapOverviewCenterX = 0.5
  self.mapOverviewCenterY = 0.5
  if self.visible and not self.isMapOverviewInitialized then
    self:setupMapOverview()
  end
  if self.precisionFarming.environmentalScore ~= nil then
    v2:onMapFrameOpen(self)
  end
  v2 = v2:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  if self.isColorBlindMode ~= v2 then
    self.isColorBlindMode = v2
    -- if not v0.visible then goto L106 end
    -- if not v0.isMapOverviewInitialized then goto L106 end
    self:setActiveValueMap()
  elseif self.visible and self.isMapOverviewInitialized then
    self:updateSoilStateMapOverlay()
  end
  v3:setFocus(self.mapOverviewSelector)
  self:updateInputGlyphs()
  self:updateAdditionalFunctionButton()
end
function InGameMenuPFFrame:onFrameClose()
  v1:onClose()
  self:toggleCustomInputContext(false, InGameMenuPFFrame.INPUT_CONTEXT_NAME)
  v1:restoreDefaultFilter()
  self.isOpen = false
  local v2 = v2:superClass()
  v2.onFrameClose(self)
end
function InGameMenuPFFrame:onLoadMapFinished()
  local v1 = createDensityMapVisualizationOverlay("soilState", 1024, 1024)
  self.soilStateOverlay = v1
  setDensityMapVisualizationOverlayUpdateTimeLimit(self.soilStateOverlay, 20)
  self.soilStateOverlayReady = false
  v1 = createDensityMapVisualizationOverlay("farmlandSelection", 512, 512)
  self.farmlandSelectionOverlay = v1
  setDensityMapVisualizationOverlayUpdateTimeLimit(self.farmlandSelectionOverlay, 20)
  self.farmlandSelectionOverlayReady = false
  if self.precisionFarming.coverMap ~= nil then
    self.coverStateOverlays = {}
    local v5 = self.precisionFarming.coverMap:getNumCoverOverlays()
    -- TODO: structure LOP_FORNPREP (pc 50, target 81)
    local v6 = createDensityMapVisualizationOverlay("coverState" .. 1, 1024, 1024)
    setDensityMapVisualizationOverlayUpdateTimeLimit({overlay = v6}.overlay, 20)
    table.insert(self.coverStateOverlays, {overlay = v6, overlayReady = false})
    -- TODO: structure LOP_FORNLOOP (pc 80, target 51)
  end
  v2:registerVisualizationOverlay(self.soilStateOverlay)
  v2:registerVisualizationOverlay(self.farmlandSelectionOverlay)
  -- TODO: structure LOP_FORNPREP (pc 100, target 112)
  v5:registerVisualizationOverlay(self.coverStateOverlays[1].overlay)
  -- TODO: structure LOP_FORNLOOP (pc 111, target 101)
end
function InGameMenuPFFrame:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  self.isMapOverviewInitialized = false
  InGameMenuMapUtil.hideContextBox(self.contextBox)
end
function InGameMenuPFFrame.mouseEvent(v0, v1, v2, v3, v4, v5, v6)
  local v8 = v8:superClass()
  return v8.mouseEvent(v0, v1, v2, v3, v4, v5, v6)
end
function InGameMenuPFFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:getInputHelpMode()
  if v2 ~= self.lastInputHelpMode then
    self.lastInputHelpMode = v2
    PrecisionFarmingGUI.updateButtonOnInputHelpChange(self.helpButton, "ingameMenuPrecisionFarmingHelpButtonConsole", "ingameMenuPrecisionFarmingHelpButton")
    if v2 ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
    v3:setVisible(true)
    if self.precisionFarming.environmentalScore ~= nil then
      v3:setInputHelpMode(v2)
    end
    if not GS_IS_MOBILE_VERSION then
      self:updateInputGlyphs()
      self:updateAdditionalFunctionButton()
    end
  end
end
function InGameMenuPFFrame.setTargetPointHotspotPosition(v0, v1, v2)
end
function InGameMenuPFFrame:setInGameMap(ingameMap)
  self.ingameMapBase = ingameMap
  v2:setIngameMap(ingameMap)
  local v2 = ingameMap:createCustomFilter(false)
  self.customFilter = v2
  self.customFilter[MapHotspot.CATEGORY_FIELD] = true
  self.customFilter[MapHotspot.CATEGORY_COMBINE] = true
  self.customFilter[MapHotspot.CATEGORY_STEERABLE] = true
  self.customFilter[MapHotspot.CATEGORY_PLAYER] = true
end
function InGameMenuPFFrame:setTerrainSize(terrainSize)
  v2:setTerrainSize(terrainSize)
end
function InGameMenuPFFrame:setMissionFruitTypes(missionFruitTypes)
  self.missionFruitTypes = missionFruitTypes
end
function InGameMenuPFFrame:setClient(client)
  self.client = client
end
function InGameMenuPFFrame:resetUIDeadzones()
  v1:clearCursorDeadzones()
  -- TODO: structure LOP_FORNPREP (pc 10, target 36)
  local v5 = self.deadzoneElements[1]:getIsVisible()
  if v5 then
    v5:addCursorDeadzone(self.deadzoneElements[1].absPosition[1], self.deadzoneElements[1].absPosition[2], self.deadzoneElements[1].size[1], self.deadzoneElements[1].size[2])
  end
  -- TODO: structure LOP_FORNLOOP (pc 35, target 11)
end
function InGameMenuPFFrame:setStaticUIDeadzone(screenX, screenY, width, height)
  self.staticUIDeadzone = {screenX, screenY, width, height}
end
function InGameMenuPFFrame:setupMapOverview()
  self.isMapOverviewInitialized = true
  if self.precisionFarming.soilMap ~= nil then
    v2:setMapFrame(self)
  end
  if v1.farmlandStatistics ~= nil then
    v2:setMapFrame(self)
  end
  if v1.yieldMap ~= nil then
    v2:setMapFrame(self)
  end
  if v1.environmentalScore ~= nil then
    v2:setMapFrame(self)
  end
  self.mapSelectorTexts = {}
  local v2 = v2:getValueMaps()
  -- TODO: structure LOP_FORNPREP (pc 57, target 73)
  local v7 = v2[1]:getShowInMenu()
  if v7 then
    local v9 = v2[1]:getOverviewLabel()
    table.insert(...)
  end
  -- TODO: structure LOP_FORNLOOP (pc 72, target 58)
  v3:setTexts(self.mapSelectorTexts)
  self:setActiveValueMap()
  self:updateFarmlandSelection()
end
function InGameMenuPFFrame:updateFarmlandSelection()
  if self.precisionFarming.farmlandStatistics ~= nil then
    v1:buildOverlay(self.farmlandSelectionOverlay)
    generateDensityMapVisualizationOverlay(self.farmlandSelectionOverlay)
    self.farmlandSelectionOverlayReady = false
  end
end
function InGameMenuPFFrame:setActiveValueMap(valueMapindex)
  if not valueMapindex then
  end
  if v2 ~= nil then
    local v2 = v2:getValueMaps()
    local v4 = v2[v2]:getDisplayValues()
    local v5, v6 = v2[v2]:getValueFilter()
    -- TODO: structure LOP_FORNPREP (pc 24, target 120)
    if 1 <= #v5 then
      self.valueMapFilterButton[1]:setVisible(true)
      self.valueMapFilterButton[1]:toggleFrameSide(InGameMenuMapFrame.BUTTON_FRAME_SIDE, false)
      self.valueMapFilterButton[1].onHighlightCallback = self.onFilterButtonSelect
      self.valueMapFilterButton[1].onHighlightRemoveCallback = self.onFilterButtonUnselect
      self.valueMapFilterButton[1].onFocusCallback = self.onFilterButtonSelect
      self.valueMapFilterButton[1].onLeaveCallback = self.onFilterButtonUnselect
      local v16 = unpack(v4[1].colors[self.isColorBlindMode][1])
      v13:setImageColor(...)
      v13:setText(v4[1].description)
      if v6 ~= nil then
        -- if not v6[1] then goto L95 end
      end
      v10.onClickCallback = function()
        self:onClickValueFilter(u1, u2)
      end
      -- goto L98  (LOP_JUMP +3)
      v10.onClickCallback = nil
      for v16, v17 in pairs(v10.elements) do
        v17:setDisabled(not v5[v9])
      end
    else
      v10:setVisible(false)
    end
    -- TODO: structure LOP_FORNLOOP (pc 119, target 25)
    self.activeValueMapIndex = valueMapindex
    -- TODO: structure LOP_FORNPREP (pc 125, target 137)
    if v2[1].onValueMapSelectionChanged ~= nil then
      v10:onValueMapSelectionChanged(v3)
    end
    -- TODO: structure LOP_FORNLOOP (pc 136, target 126)
    self:updateSoilStateMapOverlay()
    self:updateAdditionalFunctionButton()
  end
end
function InGameMenuPFFrame:updateSoilStateMapOverlay()
  local v1 = v1:getValueMaps()
  if v1[self.activeValueMapIndex] ~= nil then
    local v3, v4 = v1[self.activeValueMapIndex]:getValueFilter()
    v1[self.activeValueMapIndex]:buildOverlay(self.soilStateOverlay, v3, self.isColorBlindMode)
    generateDensityMapVisualizationOverlay(self.soilStateOverlay)
    self.soilStateOverlayReady = false
  end
  if self.precisionFarming.coverMap ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 40, target 59)
    self.precisionFarming.coverMap:buildCoverStateOverlay(self.coverStateOverlays[1].overlay, 1)
    generateDensityMapVisualizationOverlay(self.coverStateOverlays[1].overlay)
    self.coverStateOverlays[1].overlayReady = false
    -- TODO: structure LOP_FORNLOOP (pc 58, target 41)
  end
end
function InGameMenuPFFrame:updateAdditionalFunctionButton()
  local v2 = v2:getValueMaps()
  if v2[self.activeValueMapIndex] ~= nil then
    if self.precisionFarming.farmlandStatistics ~= nil then
      local v5 = v5:getSelectedFarmland()
    end
    v5 = v3:getRequiresAdditionalActionButton(v4)
    if v5 then
      v5 = v3:getAdditionalActionButtonText()
      v6:setText(v5)
    end
  end
  if not v1 then
    if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
      local v6 = v6:getText("ui_environmentalScoreShowDetails")
      v4:setText(...)
      -- goto L70  (LOP_JUMP +9)
    end
    self:setEnvironmentalScoreWindowState(false)
  else
    self:setEnvironmentalScoreWindowState(false)
  end
  v4:setVisible(v1)
  v4:invalidateLayout()
end
function InGameMenuPFFrame.setMapSelectionItem(v0, v1)
end
function InGameMenuPFFrame.setMapSelectionPosition(v0, v1, v2)
end
function InGameMenuPFFrame:setEnvironmentalScoreWindowState(state)
  if self.precisionFarming.environmentalScore ~= nil then
    v2:toggleWindowSize(state)
  end
end
function InGameMenuPFFrame:onClickMapOverviewSelector(state)
  self:setActiveValueMap(state)
end
function InGameMenuPFFrame:onClickValueFilter(button, index)
  local v3 = v3:getValueMaps()
  local v5, v6 = v3[self.activeValueMapIndex]:getValueFilter()
  if v5 ~= nil then
    v5[index] = not v5[index]
    -- TODO: structure LOP_FORNPREP (pc 21, target 39)
    for v13, v14 in pairs(self.valueMapFilterButton[1].elements) do
      v14:setDisabled(not v5[v9])
    end
    -- TODO: structure LOP_FORNLOOP (pc 38, target 22)
    button:toggleFrameSide(InGameMenuMapFrame.BUTTON_FRAME_SIDE, false)
    self:updateSoilStateMapOverlay()
  end
end
function InGameMenuPFFrame.onFilterButtonSelect(_, button)
  button:toggleFrameSide(InGameMenuMapFrame.BUTTON_FRAME_SIDE, true)
end
function InGameMenuPFFrame.onFilterButtonUnselect(_, button)
  button:toggleFrameSide(InGameMenuMapFrame.BUTTON_FRAME_SIDE, false)
  for v5, v6 in pairs(button.elements) do
    local v9 = v6:getIsDisabled()
    v6:setDisabled(...)
  end
end
function InGameMenuPFFrame:onClickButtonHelp()
  local v1 = v1:getValueMaps()
  if v1[self.activeValueMapIndex] ~= nil then
    local v5 = v1[self.activeValueMapIndex]:getHelpLinePage()
    v3:openHelpMenu(...)
    return
  end
  v3:openHelpMenu(0)
end
function InGameMenuPFFrame:onClickButtonResetStats()
  if self.precisionFarming.farmlandStatistics ~= nil then
    v1:onClickButtonResetStats()
  end
end
function InGameMenuPFFrame:onClickButtonSwitchValues()
  if self.precisionFarming.farmlandStatistics ~= nil then
    v1:onClickButtonSwitchValues()
  end
end
function InGameMenuPFFrame:onDrawPostIngameMap(element, ingameMap)
  local v3, v4 = v3:getMapSize()
  local v5, v6 = v5:getMapPosition()
  if not self.farmlandSelectionOverlayReady then
    local v7 = getIsDensityMapVisualizationOverlayReady(self.farmlandSelectionOverlay)
    if v7 then
      self.farmlandSelectionOverlayReady = true
    end
  end
  if self.farmlandSelectionOverlayReady and self.farmlandSelectionOverlay ~= 0 then
    setOverlayUVs(self.farmlandSelectionOverlay, 0, 0, 0, 1, 1, 0, 1, 1)
    renderOverlay(self.farmlandSelectionOverlay, v5 + v3 * 0.25, v6 + v4 * 0.25, v3 * 0.5, v4 * 0.5)
  end
  if not self.soilStateOverlayReady then
    v7 = getIsDensityMapVisualizationOverlayReady(self.soilStateOverlay)
    if v7 then
      self.soilStateOverlayReady = true
    end
  end
  if self.soilStateOverlayReady and self.soilStateOverlay ~= 0 then
    setOverlayUVs(self.soilStateOverlay, 0, 0, 0, 1, 1, 0, 1, 1)
    renderOverlay(self.soilStateOverlay, v5 + v3 * 0.25, v6 + v4 * 0.25, v3 * 0.5, v4 * 0.5)
  end
  local v8 = v8:getValueMaps()
  if v8[self.activeValueMapIndex] ~= nil then
    local v10 = v8[self.activeValueMapIndex]:getAllowCoverage()
  end
  if v7 and self.precisionFarming.coverMap ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 127, target 175)
    if not self.coverStateOverlays[1].overlayReady then
      local v15 = getIsDensityMapVisualizationOverlayReady(self.coverStateOverlays[1].overlay)
      if v15 then
        self.coverStateOverlays[1].overlayReady = true
      end
    end
    if v14.overlayReady and v14.overlay ~= 0 then
      setOverlayUVs(v14.overlay, 0, 0, 0, 1, 1, 0, 1, 1)
      renderOverlay(v14.overlay, v5 + v3 * 0.25, v6 + v4 * 0.25, v3 * 0.5, v4 * 0.5)
    end
    -- TODO: structure LOP_FORNLOOP (pc 174, target 128)
  end
end
function InGameMenuPFFrame:onDrawPostIngameMapHotspots(element, ingameMap)
  if self.activeValueMapIndex == 1 and self.precisionFarming.environmentalScore ~= nil then
    v3:onDraw(element, ingameMap)
  end
end
function InGameMenuPFFrame:onClickMap(element, worldX, worldZ)
  local v4 = v4:getFarmlandIdAtWorldPosition(worldX, worldZ)
  if v4 ~= nil and self.precisionFarming.farmlandStatistics ~= nil then
    v5:onClickMapFarmland(v4)
    self:updateFarmlandSelection()
  end
end
function InGameMenuPFFrame:updateInputGlyphs()
  if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
  else
  end
  v3:setActions(v1, nil, nil, true, true)
  v3:setActions({InputAction.AXIS_MAP_ZOOM_IN, InputAction.AXIS_MAP_ZOOM_OUT}, nil, nil, false, true)
  v3:setText(v2)
  v3:setText(self.zoomText)
end
function InGameMenuPFFrame:hasMouseOverlapInFrame()
  return GuiUtils.checkOverlayOverlap(g_lastMousePosX, g_lastMousePosY, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2])
end
function InGameMenuPFFrame:onZoomIn()
  local v1 = self:hasMouseOverlapInFrame()
  if v1 then
    v1:zoom(1)
  end
end
function InGameMenuPFFrame:onZoomOut()
  local v1 = self:hasMouseOverlapInFrame()
  if v1 then
    v1:zoom(-1)
  end
end
function InGameMenuPFFrame:onClickBack()
  self:onClickBackCallback()
end
function InGameMenuPFFrame:onClickAdditionalFuncButton()
  local v2 = v2:getValueMaps()
  if v2[self.activeValueMapIndex] ~= nil then
    if self.precisionFarming.farmlandStatistics ~= nil then
      local v5 = v5:getSelectedFarmland()
    end
    v5 = v3:getRequiresAdditionalActionButton(v4)
    if v5 then
      v3:onAdditionalActionButtonPressed(v4)
    end
  end
  if not v1 and self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
    self:setEnvironmentalScoreWindowState()
  end
end
InGameMenuPFFrame.GLYPH_TEXT_SIZE = 20
InGameMenuPFFrame.L10N_SYMBOL = {INPUT_MOVE_CURSOR = "ui_ingameMenuMapMoveCursor", INPUT_PAN_MAP = "ui_ingameMenuMapPan", INPUT_ZOOM_MAP = "ui_ingameMenuMapZoom"}
