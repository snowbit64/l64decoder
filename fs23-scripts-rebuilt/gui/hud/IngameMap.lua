-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IngameMap = {}
local IngameMap_mt = Class(IngameMap, HUDElement)
IngameMap.alpha = 1
IngameMap.alphaInc = 0.005
IngameMap.maxIconZoom = 1.4
IngameMap.STATE_OFF = 1
IngameMap.STATE_MINIMAP_ROUND = 2
IngameMap.STATE_MINIMAP_SQUARE = 3
IngameMap.STATE_MAP = 4
IngameMap.STATE_FULLSCREEN = 5
IngameMap.L10N_SYMBOL_TOGGLE_MAP = "input_TOGGLE_MAP_SIZE"
IngameMap.L10N_SYMBOL_SELECT_MAP = "input_INGAMEMAP_ACCEPT"
IngameMap.FIELD_REFRESH_INTERVAL = 60000
IngameMap.DEFAULT_SORTING_PRIO = {MapHotspot.CATEGORY_FIELD, MapHotspot.CATEGORY_ANIMAL, MapHotspot.CATEGORY_MISSION, MapHotspot.CATEGORY_TOUR, MapHotspot.CATEGORY_STEERABLE, MapHotspot.CATEGORY_COMBINE, MapHotspot.CATEGORY_TRAILER, MapHotspot.CATEGORY_TOOL, MapHotspot.CATEGORY_UNLOADING, MapHotspot.CATEGORY_LOADING, MapHotspot.CATEGORY_PRODUCTION, MapHotspot.CATEGORY_SHOP, MapHotspot.CATEGORY_OTHER, MapHotspot.CATEGORY_AI, MapHotspot.CATEGORY_PLAYER}
function IngameMap.new(hud, hudAtlasPath, inputDisplayManager, customMt)
  local v5 = v5:superClass()
  if not customMt then
  end
  local v4 = v4(v5, v6, v7)
  v5 = v4:createBackground(hudAtlasPath)
  v4.overlay = v5
  v4.hud = hud
  v4.hudAtlasPath = hudAtlasPath
  v4.inputDisplayManager = inputDisplayManager
  v4.uiScale = 1
  v4.isVisible = true
  local v6 = IngameMapLayoutNone.new()
  local v7 = IngameMapLayoutCircle.new()
  local v8 = IngameMapLayoutSquare.new()
  local v9 = IngameMapLayoutSquareLarge.new()
  local v10 = IngameMapLayoutFullscreen.new()
  v4.layouts = {}
  v4.fullScreenLayout = v4.layouts[#v4.layouts]
  v4.state = 1
  v4.layout = v4.layouts[v4.state]
  v5 = Overlay.new(nil, 0, 0, 1, 1)
  v4.mapOverlay = v5
  v5 = HUDElement.new(v4.mapOverlay)
  v4.mapElement = v5
  v4:createComponents(hudAtlasPath)
  for v8, v9 in ipairs(v4.layouts) do
    v9:createComponents(v4, hudAtlasPath)
  end
  v4.filter = {}
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_FIELD)
  v4.filter[MapHotspot.CATEGORY_FIELD] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_ANIMAL)
  v4.filter[MapHotspot.CATEGORY_ANIMAL] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_MISSION)
  v4.filter[MapHotspot.CATEGORY_MISSION] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_TOUR)
  v4.filter[MapHotspot.CATEGORY_TOUR] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_STEERABLE)
  v4.filter[MapHotspot.CATEGORY_STEERABLE] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_COMBINE)
  v4.filter[MapHotspot.CATEGORY_COMBINE] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_TRAILER)
  v4.filter[MapHotspot.CATEGORY_TRAILER] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_TOOL)
  v4.filter[MapHotspot.CATEGORY_TOOL] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_UNLOADING)
  v4.filter[MapHotspot.CATEGORY_UNLOADING] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_LOADING)
  v4.filter[MapHotspot.CATEGORY_LOADING] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_PRODUCTION)
  v4.filter[MapHotspot.CATEGORY_PRODUCTION] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_OTHER)
  v4.filter[MapHotspot.CATEGORY_OTHER] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_SHOP)
  v4.filter[MapHotspot.CATEGORY_SHOP] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_AI)
  v4.filter[MapHotspot.CATEGORY_AI] = not v9
  v10 = v10:getValue("ingameMapFilter")
  v9 = Utils.isBitSet(v10, MapHotspot.CATEGORY_PLAYER)
  v4.filter[MapHotspot.CATEGORY_PLAYER] = not v9
  v4.currentFilter = v4.filter
  v4:setWorldSize(2048, 2048)
  v4.hotspots = {}
  v4.selectedHotspot = nil
  v4.mapExtensionOffsetX = 0.25
  v4.mapExtensionOffsetZ = 0.25
  v4.mapExtensionScaleFactor = 0.5
  v4.allowToggle = true
  v4.topDownCamera = nil
  return v4
end
function IngameMap:delete()
  v1:removeActionEventsByTarget(self)
  v1:delete()
  self:setSelectedHotspot(nil)
  for v4, v5 in ipairs(self.layouts) do
    v5:delete()
  end
  if self.mapOverlayGenerator ~= nil then
    v1:delete()
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function IngameMap:setFullscreen(isFullscreen)
  if self.isFullscreen == isFullscreen then
    return
  end
  v2:deactivate()
  self.isFullscreen = isFullscreen
  if isFullscreen then
    self.layout = self.fullScreenLayout
  else
    self.layout = self.layouts[self.state]
  end
  v2:activate()
  local v5 = v5:getShowsToggleActionText()
  v2:setActionEventTextVisibility(...)
end
function IngameMap:toggleSize(state, force)
  v3:deactivate()
  if state ~= nil then
    local v4 = math.min(state, #self.layouts - 1)
    local v3 = math.max(v4, 1)
    self.state = v3
  else
    self.state = self.state % (#self.layouts - 1) + 1
  end
  self.layout = self.layouts[self.state]
  v3:activate()
  local v6 = v6:getShowsToggleActionText()
  v3:setActionEventTextVisibility(...)
  v3:setValue("ingameMapState", self.state)
end
function IngameMap:turnSmall()
  if self.state == IngameMap.STATE_MAP then
    self:toggleSize(IngameMap.STATE_MINIMAP_SQUARE, true)
  end
end
function IngameMap:setTopDownCamera(guiTopDownCamera)
  self.topDownCamera = guiTopDownCamera
  if guiTopDownCamera ~= nil then
    self.previousLayout = self.state
    -- if v0.state == IngameMap.STATE_MINIMAP_ROUND then goto L37 end
    self:toggleSize(IngameMap.STATE_MINIMAP_ROUND, true)
    return
  end
  if self.state ~= self.previousLayout then
    self:toggleSize(self.previousLayout, true)
  end
end
function IngameMap:resetSettings()
  if self.overlay == nil then
    return
  end
  self:setSelectedHotspot(nil)
end
function IngameMap:getHeight()
  return v1:getHeight()
end
function IngameMap:getRequiredHeight()
  return self:getHeight()
end
function IngameMap:getIsLarge()
  if self.state ~= IngameMap.STATE_MAP then
  end
  return true
end
function IngameMap:setAllowToggle(isAllowed)
  self.allowToggle = isAllowed
end
function IngameMap:setIsVisible(isVisible)
  self.isVisible = isVisible
  if isVisible then
    local v5 = v5:getShowsToggleActionText()
  end
  v2:setActionEventActive(v4, v5)
end
function IngameMap:onToggleMapSize()
  if self.allowToggle then
    local v1 = v1:getIsGuiVisible()
    if v1 then
      v1 = v1:getIsOverlayGuiVisible()
      -- if not v1 then goto L18 end
    end
    self:toggleSize()
  end
end
function IngameMap:loadMap(filename, worldSizeX, worldSizeZ, fieldColor, grassFieldColor)
  v6:delete()
  self:setWorldSize(worldSizeX, worldSizeZ)
  local v6 = Overlay.new(filename, 0, 0, 1, 1)
  self.mapOverlay = v6
  v6 = HUDElement.new(self.mapOverlay)
  self.mapElement = v6
  self:addChild(self.mapElement)
  self:setScale(self.uiScale)
  v6 = MapOverlayGenerator.new(g_i18n, g_fruitTypeManager, g_fillTypeManager, g_farmlandManager, g_farmManager, g_currentMission.weedSystem)
  self.mapOverlayGenerator = v6
  v6:setColorBlindMode(false)
  v6:setFieldColor(fieldColor, grassFieldColor)
  self.fieldRefreshTimer = IngameMap.FIELD_REFRESH_INTERVAL
end
function IngameMap:registerInput()
  local v1, v2 = v1:registerActionEvent(InputAction.TOGGLE_MAP_SIZE, self, self.onToggleMapSize, false, true, false, true)
  self.toggleMapSizeEventId = v2
  local v6 = v6:getText(IngameMap.L10N_SYMBOL_TOGGLE_MAP)
  v3:setActionEventText(...)
  v6 = v6:getShowsToggleActionText()
  v3:setActionEventTextVisibility(...)
  v3:setActionEventTextPriority(self.toggleMapSizeEventId, GS_PRIO_VERY_LOW)
end
function IngameMap:setWorldSize(worldSizeX, worldSizeZ)
  self.worldSizeX = worldSizeX
  self.worldSizeZ = worldSizeZ
  self.worldCenterOffsetX = self.worldSizeX * 0.5
  self.worldCenterOffsetZ = self.worldSizeZ * 0.5
  for v6, v7 in ipairs(self.layouts) do
    v7:setWorldSize(worldSizeX, worldSizeZ)
  end
end
function IngameMap:setHasUnreadMessages(hasMessages)
  v2:setHasUnreadMessages(hasMessages)
end
function IngameMap.determinePlayerPosition(v0, v1)
  return v1:getPositionData()
end
function IngameMap.determineVehiclePosition(v0, v1)
  local v2, v3, v4 = getTranslation(v1.rootNode)
  local v5, v6, v7 = localDirectionToWorld(v1.rootNode, 0, 0, 1)
  if v1.spec_drivable ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R9 aux=0x80000007 -> L31
    local v9 = MathUtil.getYRotationFromDirection(v5, v7)
  else
    v9 = MathUtil.getYRotationFromDirection(v5, v7)
  end
  v9 = v1:getLastSpeed()
  return v2, v3, v4, v8, v9
end
function IngameMap:addMapHotspot(mapHotspot)
  table.insert(self.hotspots, mapHotspot)
  self:sortHotspots()
  self.hotspotsSorted = nil
  return mapHotspot
end
function IngameMap:removeMapHotspot(mapHotspot)
  if mapHotspot ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 7, target 21)
    if self.hotspots[1] == mapHotspot then
      table.remove(self.hotspots, 1)
    else
      -- TODO: structure LOP_FORNLOOP (pc 20, target 8)
    end
    if self.selectedHotspot == mapHotspot then
      self:setSelectedHotspot(nil)
    end
    if g_currentMission ~= nil and g_currentMission.currentMapTargetHotspot == mapHotspot then
      v2:setMapTargetHotspot(nil)
    end
    self.hotspotsSorted = nil
  end
end
function IngameMap:setSelectedHotspot(hotspot)
  if self.selectedHotspot ~= nil then
    v2:setSelected(false)
  end
  self.selectedHotspot = hotspot
  if self.selectedHotspot ~= nil then
    v2:setSelected(true)
  end
end
function IngameMap:getHotspotIndex(hotspot)
  for v5, v6 in ipairs(self.hotspots) do
    if not (v6 == hotspot) then
      continue
    end
    return v5
  end
  return -1
end
function IngameMap:cycleVisibleHotspot(currentHotspot, categoriesHash, direction)
  local v5 = self:getHotspotIndex(currentHotspot)
  if v5 + direction >= 1 then
    -- if #v0.hotspots >= v5 + v3 then goto L22 end
  end
  if 0 < direction then
  else
  end
  while true do
    if not (v5 < #self.hotspots) then
      break
    end
    v7 = v6:getCategory()
    v8 = v6:getIsVisible()
    if v8 and self.currentFilter[v7] and not not categoriesHash[v7] then
      break
    end
    if #self.hotspots < v4 + direction then
    elseif v4 + direction < 1 then
    end
  end
  if v5 < #self.hotspots then
    return v6
  end
  return nil
end
function IngameMap:updateHotspotSorting(dt)
  if self.hotspotsSorted == nil then
    self.hotspotsSorted = {[true] = {}, [false] = {}}
    for v5, v6 in pairs(self.hotspots) do
      local v9 = v6:getCategory()
      if not self.currentFilter[v9] then
        continue
      end
      local v10 = v6:getRenderLast()
      table.insert(self.hotspotsSorted[v10], v6)
    end
  end
end
function IngameMap.updateBlinkingHotspotAlpha(v0, currentHotspot)
  local v4 = math.sin(g_time / 200)
  local direction = math.abs(...)
  IngameMap.alpha = direction
end
function IngameMap.updateHotspotFilters(v0)
end
function IngameMap:setHotspotFilter(category, isActive)
  self:setDefaultFilterValue(category, isActive)
end
function IngameMap:toggleDefaultFilter(currentHotspot)
  local v6 = self:getDefaultFilterValue(currentHotspot)
  self:setDefaultFilterValue(currentHotspot, not v6)
end
function IngameMap:setDefaultFilterValue(currentHotspot, categoriesHash)
  if currentHotspot ~= nil then
    if categoriesHash then
      local v7 = v7:getValue("ingameMapFilter")
      local v6 = Utils.clearBit(v7, currentHotspot)
      direction:setValue(...)
    else
      v7 = v7:getValue("ingameMapFilter")
      v6 = Utils.setBit(v7, currentHotspot)
      direction:setValue(...)
    end
    self.filter[currentHotspot] = categoriesHash
    self.hotspotsSorted = nil
  end
end
function IngameMap:getDefaultFilterValue(currentHotspot)
  if currentHotspot ~= nil then
    return self.filter[currentHotspot]
  end
  return false
end
function IngameMap:applyCustomFilter(currentHotspot)
  self.currentFilter = currentHotspot
  self.hotspotsSorted = nil
end
function IngameMap:applyCustomHotspotSortingOrder(currentHotspot)
  if not currentHotspot then
  end
  self.sortingOrder = {}
  for v5, v6 in ipairs(categoriesHash) do
    self.sortingOrder[v6] = v5
  end
  self:sortHotspots()
  self.hotspotsSorted = nil
end
function IngameMap:sortHotspots()
  if self.sortingOrder == nil then
    self:applyCustomHotspotSortingOrder(nil)
  end
  table.sort(self.hotspots, function(self, currentHotspot)
    local v4 = self:getCategory()
    local v5 = currentHotspot:getCategory()
    if u0[v4] == nil then
      return false
    end
    if direction == nil then
      return true
    end
    if categoriesHash >= direction then
    end
    return true
  end)
end
function IngameMap:restoreDefaultFilter()
  self.currentFilter = self.filter
  self.hotspotsSorted = nil
end
function IngameMap:createCustomFilter(currentHotspot)
  for v6, v7 in pairs(self.filter) do
    categoriesHash[v6] = currentHotspot
  end
  return categoriesHash
end
function IngameMap:update(dt)
  if self.isVisible and self.state ~= IngameMap.STATE_OFF then
    local categoriesHash = categoriesHash:getShowsToggleAction()
    if categoriesHash then
      self:updateInputGlyphs()
    end
  end
  self:updateHotspotSorting(dt)
  self:updateBlinkingHotspotAlpha(dt)
  self:updatePlayerPosition()
  categoriesHash:setPlayerPosition(self.normalizedPlayerPosX, self.normalizedPlayerPosZ, self.playerRotation)
  categoriesHash:setPlayerVelocity(self.playerVelocity or 0)
  if self.mapOverlayGenerator ~= nil then
    self.fieldRefreshTimer = self.fieldRefreshTimer + dt
    if IngameMap.FIELD_REFRESH_INTERVAL < self.fieldRefreshTimer then
      self.fieldRefreshTimer = 0
      categoriesHash:generateMinimapOverlay(function(self)
        u0.fieldStateOverlay = self
        u0.fieldStateOverlayIsReady = true
      end, nil)
    end
    categoriesHash:update(dt)
  end
end
function IngameMap:updateInputGlyphs()
  currentHotspot:setAction(InputAction.TOGGLE_MAP_SIZE)
end
function IngameMap:updatePlayerPosition()
  if self.topDownCamera ~= nil then
    local v4, v5, v6, v7, v8 = v4:determineMapPosition()
    self.playerRotation = v7
    self.playerVelocity = v8
  elseif g_currentMission.controlPlayer then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L56
    v4, v5, v6, v7, v8 = self:determinePlayerPosition(g_currentMission.player)
    self.playerRotation = v7
    self.playerVelocity = v8
  else
    if g_currentMission.controlledVehicle ~= nil then
      v4, v5, v6, v7, v8 = self:determineVehiclePosition(g_currentMission.controlledVehicle)
      self.playerRotation = v7
      self.playerVelocity = v8
    end
  end
  v4 = MathUtil.clamp((currentHotspot + self.worldCenterOffsetX) / self.worldSizeX, 0, 1)
  self.normalizedPlayerPosX = v4
  v4 = MathUtil.clamp((direction + self.worldCenterOffsetZ) / self.worldSizeZ, 0, 1)
  self.normalizedPlayerPosZ = v4
end
function IngameMap:draw()
  if not self.isVisible then
    return
  end
  local currentHotspot, categoriesHash = currentHotspot:getMapSize()
  if currentHotspot ~= 0 then
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000003 -> L14
  end
  return
  direction:setDimension(currentHotspot, categoriesHash)
  local v5 = v5:getMapAlpha()
  direction:setAlpha(...)
  v5 = v5:getMapPosition()
  direction:setPosition(...)
  v5 = v5:getMapPivot()
  direction:setRotationPivot(...)
  v5 = v5:getMapRotation()
  direction:setRotation(...)
  direction:drawBefore()
  direction:draw()
  self:drawFields()
  self:drawPointsOfInterest()
  direction:drawAfter()
  self:drawPersistentPointsOfInterest()
  local direction = direction:getShowsToggleAction()
  if direction then
    direction:draw()
  end
  self:drawPlayersCoordinates()
  self:drawLatencyToServer()
end
function IngameMap:drawFields()
  if self.fieldStateOverlayIsReady then
    local currentHotspot, categoriesHash = currentHotspot:getMapSize()
    local direction, v4 = direction:getMapPosition()
    local v5, v6 = v5:getMapPivot()
    local v9 = v9:getMapRotation()
    setOverlayRotation(self.fieldStateOverlay, v9, v5 + direction - direction + currentHotspot * self.mapExtensionOffsetX, v6 + v4 - v4 + categoriesHash * self.mapExtensionOffsetZ)
    local v13 = v13:getMapAlpha()
    local v12 = math.sqrt(...)
    setOverlayColor(...)
    renderOverlay(self.fieldStateOverlay, direction + currentHotspot * self.mapExtensionOffsetX, v4 + categoriesHash * self.mapExtensionOffsetZ, currentHotspot * self.mapExtensionScaleFactor, categoriesHash * self.mapExtensionScaleFactor)
  end
end
function IngameMap:drawMapOnly()
  local currentHotspot, categoriesHash = currentHotspot:getMapSize()
  direction:setDimension(currentHotspot, categoriesHash)
  local v5 = v5:getMapAlpha()
  direction:setAlpha(...)
  v5 = v5:getMapPosition()
  direction:setPosition(...)
  v5 = v5:getMapPivot()
  direction:setRotationPivot(...)
  v5 = v5:getMapRotation()
  direction:setRotation(...)
  direction:drawBefore()
  local direction, v4, v5, v6 = self:getMapClipArea(self.clipX1, self.clipY1, self.clipX2, self.clipY2)
  v7:draw(direction, v4, v5, v6)
  self:drawFields()
  v7:drawAfter()
end
function IngameMap:drawHotspotsOnly()
  self:drawPointsOfInterest()
  self:drawPersistentPointsOfInterest()
end
function IngameMap:drawPlayersCoordinates()
  local direction = math.deg(-self.playerRotation % 2 * math.pi)
  local currentHotspot = string.format("%.1f°, %d, %d", direction, self.normalizedPlayerPosX * self.worldSizeX, self.normalizedPlayerPosZ * self.worldSizeZ)
  categoriesHash:drawCoordinates(currentHotspot)
end
function IngameMap:drawLatencyToServer()
  if g_client ~= nil and g_client.currentLatency ~= nil and g_currentMission.missionDynamicInfo.isMultiplayer and g_currentMission.missionDynamicInfo.isClient then
    if g_client.currentLatency <= 50 then
    elseif g_client.currentLatency < 100 then
    else
    end
    local v6 = math.max(g_client.currentLatency, 10)
    local v4 = string.format(...)
    categoriesHash:drawLatency(v4, currentHotspot)
  end
end
function IngameMap:drawPointsOfInterest()
  local currentHotspot = currentHotspot:getShowSmallIconVariation()
  if currentHotspot then
  end
  self:drawHotspots(false, false, currentHotspot)
  self:drawHotspots(false, true, currentHotspot)
  if self.selectedHotspot ~= nil then
    self:drawHotspot(self.selectedHotspot, currentHotspot)
  end
end
function IngameMap:drawPersistentPointsOfInterest()
  local currentHotspot = currentHotspot:getShowSmallIconVariation()
  self:drawHotspots(true, false, currentHotspot)
  self:drawHotspots(true, true, currentHotspot)
end
function IngameMap:drawHotspots(persistent, renderLast, smallVersion)
  if renderLast then
    new2DLayer()
  end
  if self.hotspotsSorted ~= nil then
    for v7, v8 in pairs(self.hotspotsSorted[renderLast]) do
      local v9 = v8:getIsPersistent()
      if not (v9 == persistent) then
        continue
      end
      if not (v8 ~= self.selectedHotspot) then
        continue
      end
      v9 = v8:getIsVisible()
      if not v9 then
        continue
      end
      self:drawHotspot(v8, smallVersion)
    end
  end
end
function IngameMap:drawHotspot(hotspot, smallVersion)
  if hotspot == nil then
    return
  end
  local direction, v4 = hotspot:getWorldPosition()
  local rotation = hotspot:getWorldRotation()
  local v8 = v8:getIconZoom()
  hotspot:setScale(self.uiScale * v8)
  local v13 = hotspot:getWidth()
  local v14 = hotspot:getHeight()
  local v16 = hotspot:getIsPersistent()
  local v9, v10, v11, v12 = v9:getMapObjectPosition(...)
  local v13, v14, v15, v16 = self:getMapClipArea(self.clipX1, self.clipY1, self.clipX2, self.clipY2)
  if g_inGameMenu.showMap and v9 >= v13 and v15 >= v9 and v9 >= v14 then
    -- if v16 >= v9 then goto L84 end
  end
  if v12 then
    hotspot:setLastRenderInfo(v9, v10, v11, self.layout)
    hotspot:render(v9, v10, v11, smallVersion)
  end
end
function IngameMap:setScale(uiScale)
  local direction = direction:superClass()
  direction.setScale(self, uiScale, uiScale)
  self.uiScale = uiScale
  self:storeScaledValues(uiScale)
end
function IngameMap:storeScaledValues(uiScale)
  for v5, v6 in ipairs(self.layouts) do
    v6:storeScaledValues(self, uiScale)
  end
end
function IngameMap.getBackgroundPosition(v0)
  return g_safeFrameOffsetX, g_safeFrameOffsetY
end
function IngameMap.getMapClipArea(v0, currentHotspot, categoriesHash, direction, v4)
  local v5 = math.max(currentHotspot or 0, 0)
  v5 = math.max(categoriesHash or 0, 0)
  v5 = math.min(direction or 1, 1)
  v5 = math.min(v4 or 1, 1)
  return v5, v5, v5, v5
end
function IngameMap:createBackground(hudAtlasPath)
  local direction = unpack(IngameMap.SIZE.SELF)
  local categoriesHash, direction = getNormalizedScreenValues(...)
  local v4, v5 = self:getBackgroundPosition()
  local v6 = Overlay.new(hudAtlasPath, v4, v5, categoriesHash, direction)
  local v9 = GuiUtils.getUVs(IngameMap.UV.BACKGROUND_ROUND)
  v6:setUVs(...)
  v6:setColor(0, 0, 0, 0.75)
  return v6
end
function IngameMap:createComponents(hudAtlasPath)
  local categoriesHash, direction = self:getPosition()
  local width = self:getWidth()
  local height = self:getHeight()
  self:createToggleMapSizeGlyph(hudAtlasPath, categoriesHash, direction, width, height)
end
function IngameMap:createToggleMapSizeGlyph(hudAtlasPath, baseX, baseY, baseWidth, baseHeight)
  local v7 = unpack(IngameMap.SIZE.INPUT_ICON)
  local v6, v7 = getNormalizedScreenValues(...)
  local v9 = unpack(IngameMap.POSITION.INPUT_ICON)
  local v8, v9 = getNormalizedScreenValues(...)
  local v10 = InputGlyphElement.new(self.inputDisplayManager, v6, v7)
  v10:setPosition(baseX + v8, baseY + v9)
  v10:setKeyboardGlyphColor(IngameMap.COLOR.INPUT_ICON)
  v10:setAction(InputAction.TOGGLE_MAP_SIZE)
  self.toggleMapSizeGlyph = v10
  self:addChild(v10)
end
if Platform.isMobile then
else
end
currentHotspot.MIN_MAP_WIDTH = categoriesHash
IngameMap.MIN_MAP_HEIGHT = IngameMap.MIN_MAP_WIDTH
IngameMap.SIZE = {MAP = {236, 236}, SELF = {256, 256}, INPUT_ICON = {35, 35}}
IngameMap.TEXT_SIZE = {GLYPH_TEXT = 16}
IngameMap.POSITION = {MAP = {10, 10}, MAP_LABEL = {0, 3}, INFO_TEXT = {6, 12}, INPUT_ICON = {6, 6}}
IngameMap.UV = {BACKGROUND_ROUND = {48, 288, 256, 256}}
IngameMap.COLOR = {INPUT_ICON = {0.0003, 0.5647, 0.9822, 0.8}, COORDINATES_TEXT = {1, 1, 1, 1}, LATENCY_GOOD = {1, 1, 1, 1}, LATENCY_MEDIUM = {0.9301, 0.2874, 0.013, 1}, LATENCY_BAD = {0.8069, 0.0097, 0.0097, 1}}
