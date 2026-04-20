-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMapExtension = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory, GUI_ELEMENTS = g_currentModDirectory .. "gui/ui_elements.png"}
local InGameMapExtension_mt = Class(InGameMapExtension)
function InGameMapExtension:new(v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  local v3 = v3:getValue("uiScale")
  local v4, v5 = getNormalizedScreenValues(120 * v3, 6 * v3)
  local v6 = Overlay.new(InGameMapExtension.GUI_ELEMENTS, 0, 0, v4, v5)
  v6:setUVs(g_colorBgUVs)
  v6:setColor(1, 1, 1, 1)
  local v7 = HUDElement.new(v6)
  v2.gradientElement = v7
  local v7, v8 = getNormalizedScreenValues(122 * v3, 8 * v3)
  v7 = Overlay.new(g_baseUIFilename, 0, 0, v7, v8)
  v7:setUVs(g_colorBgUVs)
  v7:setColor(0, 0, 0, 0.6)
  v8 = HUDElement.new(v7)
  v2.gradientBackgroundElement = v8
  v2.labelPositionsByState = {}
  local v12 = getNormalizedScreenValues(0, 15 * v3)
  v12 = getNormalizedScreenValues(0, 15 * v3)
  v12 = getNormalizedScreenValues(0, 40 * v3)
  v2.labelPositionsByState[IngameMap.STATE_MINIMAP_ROUND] = {labelOffset = {}, labelTextSize = {}, gradientOffset = {}, labelXAlignment = RenderText.ALIGN_CENTER, gradientXAlignment = RenderText.ALIGN_CENTER}
  v12 = getNormalizedScreenValues(18 * v3, 15 * v3)
  v12 = getNormalizedScreenValues(0, 15 * v3)
  v12 = getNormalizedScreenValues(0, 30 * v3)
  v2.labelPositionsByState[IngameMap.STATE_MINIMAP_SQUARE] = {labelOffset = {}, labelTextSize = {}, gradientOffset = {}, labelXAlignment = RenderText.ALIGN_LEFT, gradientXAlignment = RenderText.ALIGN_CENTER}
  v12 = getNormalizedScreenValues(18 * v3, 15 * v3)
  v12 = getNormalizedScreenValues(0, 15 * v3)
  v12 = getNormalizedScreenValues(20 * v3, 20 * v3)
  v2.labelPositionsByState[IngameMap.STATE_MAP] = {labelOffset = {}, labelTextSize = {}, gradientOffset = {}, labelXAlignment = RenderText.ALIGN_LEFT, gradientXAlignment = RenderText.ALIGN_LEFT}
  v8 = createDensityMapVisualizationOverlay("soilStateOverlay", 1024, 1024)
  v2.minimapSoilStateOverlay = v8
  v2.minimapSoilStateOverlayIsReady = nil
  v2.minimapSoilStateOverlayIsReadyForDisplay = nil
  self:registerVisualizationOverlay(v2.minimapSoilStateOverlay)
  v2.smoothedMapZoomLevel = 1
  v2.smoothedMapZoomTargetLevel = 1
  local v9 = v9:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  v2.isColorBlindMode = v9 or false
  v2.precisionFarming = self
  v2.inGameMap = nil
  v8:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_COLORBLIND_MODE], v2.onColorBlindModeChanged, v2)
  return v2
end
function InGameMapExtension.unloadMapData(v0)
end
function InGameMapExtension:delete()
  if self.minimapSoilStateOverlay ~= nil then
    delete(self.minimapSoilStateOverlay)
  end
  v1:delete()
  v1:delete()
  v1:unsubscribeAll(self)
end
function InGameMapExtension:update(dt)
  local v2 = v2:getValueMaps()
  -- TODO: structure LOP_FORNPREP (pc 10, target 26)
  local v9, v10 = v2[1]:getRequireMinimapDisplay()
  if v9 then
    if nil == nil then
    elseif not nil and v10 then
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 25, target 11)
  if v3 ~= nil then
    if self.inGameMap ~= nil then
      -- if not v0.inGameMap.isVisible then goto L143 end
      -- if v0.inGameMap.state == IngameMap.STATE_OFF then goto L143 end
    end
    if self.minimapSoilStateOverlayIsReady ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R5 aux=0x80000001 -> L121
    end
    local v5 = v3:getMinimapValueFilter()
    local v6 = v3:getMinimapRequiresUpdate()
    if not v6 and g_server ~= nil then
    end
    if self.lastValueMap ~= v3 then
      self.minimapSoilStateOverlayIsReadyForDisplay = false
    end
    if self.lastValueMap == v3 and self.lastValueMapFilter == v5 then
      -- if not v6 then goto L121 end
    end
    local v7 = v3:getMinimapUpdateTimeLimit()
    if g_server == nil then
    end
    setDensityMapVisualizationOverlayUpdateTimeLimit(self.minimapSoilStateOverlay, v7)
    v3:buildOverlay(self.minimapSoilStateOverlay, v5, self.isColorBlindMode, true)
    generateDensityMapVisualizationOverlay(self.minimapSoilStateOverlay)
    self.minimapSoilStateOverlayIsReady = false
    v3:setMinimapRequiresUpdate(false)
    self.lastValueMap = v3
    self.lastValueMapFilter = v5
    if self.minimapSoilStateOverlayIsReady == false then
      v5 = getIsDensityMapVisualizationOverlayReady(self.minimapSoilStateOverlay)
      if v5 then
        self.minimapSoilStateOverlayIsReady = true
        self.minimapSoilStateOverlayIsReadyForDisplay = true
      end
    end
    v5 = v3:getMinimapZoomFactor()
    self.smoothedMapZoomTargetLevel = v5
  else
    self.minimapSoilStateOverlayIsReady = nil
    self.minimapSoilStateOverlayIsReadyForDisplay = false
    self.lastValueMap = nil
    self.lastValueMapFilter = nil
    self.smoothedMapZoomTargetLevel = 1
  end
  if self.smoothedMapZoomLevel ~= self.smoothedMapZoomTargetLevel then
    v5 = MathUtil.sign(self.smoothedMapZoomTargetLevel - self.smoothedMapZoomLevel)
    if v5 == 1 then
      -- if math.min then goto L179 end
    end
    v7 = math.max(self.smoothedMapZoomLevel + dt * 0.001 * v5 * 2, self.smoothedMapZoomTargetLevel)
    self.smoothedMapZoomLevel = v7
  end
end
function InGameMapExtension:updatePrecisionFarmingOverlays()
  if self.lastValueMap ~= nil then
    dt:setMinimapRequiresUpdate(true)
  end
end
function InGameMapExtension:onColorBlindModeChanged(isColorBlindMode)
  self.isColorBlindMode = isColorBlindMode
  self.minimapSoilStateOverlayIsReady = nil
  self.lastValueMap = nil
  self.lastValueMapFilter = nil
end
function InGameMapExtension.overwriteGameFunctions(v0, dt)
  dt:overwriteGameFunction(IngameMap, "loadMap", function(v0, dt, ...)
    u0.inGameMap = dt
    v0(...)
  end)
  dt:overwriteGameFunction(IngameMap, "drawFields", function(v0, dt)
    v0(dt)
    if not dt.isFullscreen then
      if u0.minimapSoilStateOverlayIsReadyForDisplay then
        local v2, v3 = v2:getMapSize()
        local v4, v5 = v4:getMapPosition()
        local v6, v7 = v6:getMapPivot()
        local v10 = v10:getMapRotation()
        setOverlayRotation(u0.minimapSoilStateOverlay, v10, v6 + v4 - v4 + v2 * 0.25, v7 + v5 - v5 + v3 * 0.25)
        local v14 = v14:getMapAlpha()
        local v13 = math.sqrt(...)
        setOverlayColor(...)
        renderOverlay(u0.minimapSoilStateOverlay, v4 + v2 * 0.25, v5 + v3 * 0.25, v2 * 0.5, v3 * 0.5)
      end
      if u0.lastValueMap ~= nil then
        v2 = v2:getMinimapAdditionalElement()
        if v2 ~= nil then
          v3, v4 = v3:getMinimapAdditionalElementRealSize()
          if 0 < v3 and 0 < v4 then
            v5, v6 = v5:getMapSize()
            v2.overlay.width = v3 / dt.worldSizeX * v5 * 0.5
            v2.overlay.height = v4 / dt.worldSizeZ * v6 * 0.5
          end
          if dt.layout.backgroundElement ~= nil then
            v7 = v7:getMinimapAdditionalElementLinkNode()
            if v7 ~= nil then
              local v8, v9, v10 = getWorldTranslation(v7)
              local v13, v14, v15, v16 = v13:getMapObjectPosition((v8 * 0.5 + dt.worldCenterOffsetX) / dt.worldSizeX, (v10 * 0.5 + dt.worldCenterOffsetZ) / dt.worldSizeZ, v2.overlay.width, v2.overlay.height, 0, true)
              v2.overlay.x = v13
              v2.overlay.y = v14
            else
              v2.overlay.x = dt.layout.backgroundElement.overlay.x + dt.layout.backgroundElement.overlay.width * 0.5 - v2.overlay.width * 0.5
              v2.overlay.y = dt.layout.backgroundElement.overlay.y + dt.layout.backgroundElement.overlay.height * 0.5 - v2.overlay.height * 0.5
            end
          end
          v2:draw()
        end
      end
    end
  end)
  dt:overwriteGameFunction(IngameMap, "draw", function(v0, dt)
    v0(dt)
    if not dt.isVisible then
      return
    end
    local v2, v3 = v2:getMapSize()
    if v2 ~= 0 then
      -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000003 -> L17
    end
    return
    if u0.labelPositionsByState[dt.state] == nil then
      return
    end
    if u0.lastValueMap ~= nil and dt.layout.backgroundElement ~= nil then
      local v6 = v6:getMinimapLabel()
      if v6 ~= nil then
        setTextAlignment(RenderText.ALIGN_LEFT)
        if u0.labelPositionsByState[dt.state].labelXAlignment == RenderText.ALIGN_CENTER then
          setTextAlignment(RenderText.ALIGN_CENTER)
        end
        setTextColor(0, 0, 0, 1)
        renderText(v12, v13 - 0.0015, v10, v6)
        setTextColor(1, 1, 1, 1)
        renderText(v12, v13, v10, v6)
        setTextAlignment(RenderText.ALIGN_LEFT)
      end
      local v7 = v7:getMinimapGradientUVs(u0.isColorBlindMode)
      local v8 = v8:getMinimapGradientLabel()
      if v7 ~= nil and v8 ~= nil then
        u0.gradientBackgroundElement.overlay.x = v5.x + u0.labelPositionsByState[dt.state].gradientOffset[1]
        u0.gradientBackgroundElement.overlay.y = v5.y + u0.labelPositionsByState[dt.state].gradientOffset[2]
        if u0.labelPositionsByState[dt.state].gradientXAlignment == RenderText.ALIGN_CENTER then
          u0.gradientBackgroundElement.overlay.x = v5.x + v5.width * 0.5 - u0.gradientBackgroundElement.overlay.width * 0.5
        end
        v10:draw()
        u0.gradientElement.overlay.x = v10.overlay.x + (v10.overlay.width - u0.gradientElement.overlay.width) * 0.5
        u0.gradientElement.overlay.y = v10.overlay.y + (v10.overlay.height - u0.gradientElement.overlay.height) * 0.5
        u0.gradientElement:draw()
        local v14 = unpack(v7)
        u0.gradientElement:setUVs(...)
        setTextAlignment(RenderText.ALIGN_CENTER)
        setTextColor(0, 0, 0, 1)
        renderText(v10.overlay.x + v10.overlay.width * 0.5, v10.overlay.y + v10.overlay.height + v9.labelTextSize[2] * 0.3 - 0.0015, v9.labelTextSize[2] * 0.85, v8)
        setTextColor(1, 1, 1, 1)
        renderText(v10.overlay.x + v10.overlay.width * 0.5, v10.overlay.y + v10.overlay.height + v9.labelTextSize[2] * 0.3, v9.labelTextSize[2] * 0.85, v8)
      end
    end
  end)
  dt:overwriteGameFunction(IngameMapLayoutCircle, "getMapSize", function(v0, dt)
    local v2, v3 = v0(dt)
    return v2 * u0.smoothedMapZoomLevel, v2 * u0.smoothedMapZoomLevel * g_screenAspectRatio
  end)
  dt:overwriteGameFunction(IngameMapLayoutSquare, "getMapSize", function(v0, dt)
    local v2, v3 = v0(dt)
    return v2 * u0.smoothedMapZoomLevel, v2 * u0.smoothedMapZoomLevel * g_screenAspectRatio
  end)
end
