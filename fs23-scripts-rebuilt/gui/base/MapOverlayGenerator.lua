-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MapOverlayGenerator = {}
local MapOverlayGenerator_mt = Class(MapOverlayGenerator)
MapOverlayGenerator.OVERLAY_TYPE = {CROPS = 1, GROWTH = 2, SOIL = 3, FARMLANDS = 4, MINIMAP = 5}
MapOverlayGenerator.OVERLAY_RESOLUTION = {FOLIAGE_STATE = {512, 512}, FARMLANDS = {512, 512}, MINIMAP = {512, 512}}
function MapOverlayGenerator.new(l10n, fruitTypeManager, fillTypeManager, farmlandManager, farmManager, weedSystem)
  local v6 = setmetatable({}, u0)
  v6.l10n = l10n
  v6.fruitTypeManager = fruitTypeManager
  v6.fillTypeManager = fillTypeManager
  v6.farmlandManager = farmlandManager
  v6.farmManager = farmManager
  v6.missionFruitTypes = {}
  v6.isColorBlindMode = nil
  local v10 = v6:adjustedOverlayResolution(MapOverlayGenerator.OVERLAY_RESOLUTION.FOLIAGE_STATE)
  local v9 = unpack(...)
  local v7 = createDensityMapVisualizationOverlay(...)
  v6.foliageStateOverlay = v7
  v10 = v6:adjustedOverlayResolution(MapOverlayGenerator.OVERLAY_RESOLUTION.FARMLANDS, true)
  v9 = unpack(...)
  v7 = createDensityMapVisualizationOverlay(...)
  v6.farmlandStateOverlay = v7
  v10 = v6:adjustedOverlayResolution(MapOverlayGenerator.OVERLAY_RESOLUTION.MINIMAP)
  v9 = unpack(...)
  v7 = createDensityMapVisualizationOverlay(...)
  v6.minimapOverlay = v7
  {}[MapOverlayGenerator.OVERLAY_TYPE.CROPS] = v6.buildFruitTypeMapOverlay
  {}[MapOverlayGenerator.OVERLAY_TYPE.GROWTH] = v6.buildGrowthStateMapOverlay
  {}[MapOverlayGenerator.OVERLAY_TYPE.SOIL] = v6.buildSoilStateMapOverlay
  {}[MapOverlayGenerator.OVERLAY_TYPE.FARMLANDS] = v6.buildFarmlandsMapOverlay
  {}[MapOverlayGenerator.OVERLAY_TYPE.MINIMAP] = v6.buildMinimapOverlay
  v6.typeBuilderFunctionMap = {}
  {}[MapOverlayGenerator.OVERLAY_TYPE.CROPS] = v6.foliageStateOverlay
  {}[MapOverlayGenerator.OVERLAY_TYPE.GROWTH] = v6.foliageStateOverlay
  {}[MapOverlayGenerator.OVERLAY_TYPE.SOIL] = v6.foliageStateOverlay
  {}[MapOverlayGenerator.OVERLAY_TYPE.FARMLANDS] = v6.farmlandStateOverlay
  {}[MapOverlayGenerator.OVERLAY_TYPE.MINIMAP] = v6.minimapOverlay
  v6.overlayHandles = {}
  v6.currentOverlayHandle = nil
  v6.overlayFinishedCallback = u1
  v6.overlayTypeCheckHash = {}
  for v10, v11 in pairs(MapOverlayGenerator.OVERLAY_TYPE) do
    v6.overlayTypeCheckHash[v11] = v10
  end
  v6.fieldColor = MapOverlayGenerator.FIELD_COLOR
  v6.grassFieldColor = MapOverlayGenerator.FIELD_GRASS_COLOR
  if not GS_IS_CONSOLE_VERSION then
    -- if not g_currentMission.missionDynamicInfo.isMultiplayer then goto L245 end
    v7 = v7:getIsServer()
    -- if not v7 then goto L245 end
  end
  setDensityMapVisualizationOverlayUpdateTimeLimit(v6.foliageStateOverlay, 10)
  setDensityMapVisualizationOverlayUpdateTimeLimit(v6.farmlandStateOverlay, 10)
  setDensityMapVisualizationOverlayUpdateTimeLimit(v6.minimapOverlay, 10)
  return v6
  setDensityMapVisualizationOverlayUpdateTimeLimit(v6.foliageStateOverlay, 20)
  setDensityMapVisualizationOverlayUpdateTimeLimit(v6.farmlandStateOverlay, 20)
  setDensityMapVisualizationOverlayUpdateTimeLimit(v6.minimapOverlay, 20)
  return v6
end
function MapOverlayGenerator:delete()
  self:reset()
  delete(self.foliageStateOverlay)
  delete(self.farmlandStateOverlay)
  delete(self.minimapOverlay)
end
function MapOverlayGenerator.adjustedOverlayResolution(v0, v1, v2)
  local v3 = Utils.getPerformanceClassId()
  if v3 == GS_PROFILE_LOW then
    return v1
  end
  if GS_PROFILE_VERY_HIGH <= v3 and not v2 and not GS_IS_CONSOLE_VERSION and not Platform.isMobile then
    if g_currentMission.missionDynamicInfo.isMultiplayer then
      local v4 = v4:getIsServer()
      -- if v4 then goto L37 end
    end
    return {v1[1] * 4, v1[2] * 4}
  end
  return {v1[1] * 2, v1[2] * 2}
end
function MapOverlayGenerator:setMissionFruitTypes(missionFruitTypes)
  self.missionFruitTypes = {}
  for v5, v6 in ipairs(missionFruitTypes) do
    table.insert(self.missionFruitTypes, {foliageId = v6.terrainDataPlaneId, fruitTypeIndex = v6.index, shownOnMap = v6.shownOnMap, defaultColor = v6.defaultMapColor, colorBlindColor = v6.colorBlindMapColor})
  end
  v2 = self:getDisplayCropTypes()
  self.displayCropTypes = v2
  v2 = self:getDisplayGrowthStates()
  self.displayGrowthStates = v2
  v2 = self:getDisplaySoilStates()
  self.displaySoilStates = v2
end
function MapOverlayGenerator:updateStates()
  local v1 = self:getDisplayGrowthStates()
  self.displayGrowthStates = v1
  v1 = self:getDisplaySoilStates()
  self.displaySoilStates = v1
end
function MapOverlayGenerator:setColorBlindMode(isColorBlindMode)
  self.isColorBlindMode = isColorBlindMode
end
function MapOverlayGenerator:setFieldColor(color, grassColor)
  if not color then
  end
  self.fieldColor = v3
  if not grassColor then
  end
  self.grassFieldColor = v3
end
function MapOverlayGenerator:buildFruitTypeMapOverlay(fruitTypeFilter)
  for v5, v6 in ipairs(self.displayCropTypes) do
    if not fruitTypeFilter[v6.fruitTypeIndex] then
      continue
    end
    if not (v6.foliageId ~= nil) then
      continue
    end
    if not (v6.foliageId ~= 0) then
      continue
    end
    local v11 = unpack(v6.colors[self.isColorBlindMode])
    setDensityMapVisualizationOverlayTypeColor(...)
  end
end
function MapOverlayGenerator:buildMinimapOverlay(fruitTypeFilter)
  self:buildFieldMapOverlay(self.minimapOverlay)
end
function MapOverlayGenerator:buildGrowthStateMapOverlay(growthStateFilter, fruitTypeFilter)
  for v6, v7 in ipairs(self.displayCropTypes) do
    if not fruitTypeFilter[v7.fruitTypeIndex] then
      continue
    end
    local v9 = v9:getFruitTypeByIndex(v7.fruitTypeIndex)
    if not (0 <= v9.maxHarvestingGrowthState) then
      continue
    end
    if growthStateFilter[MapOverlayGenerator.GROWTH_STATE_INDEX.WITHERED] and v9.witheredState ~= nil then
      setDensityMapVisualizationOverlayGrowthStateColor(self.foliageStateOverlay, v7.foliageId, v9.witheredState, self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.WITHERED].colors[self.isColorBlindMode][1][1], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.WITHERED].colors[self.isColorBlindMode][1][2], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.WITHERED].colors[self.isColorBlindMode][1][3])
    end
    if growthStateFilter[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVESTED] then
      setDensityMapVisualizationOverlayGrowthStateColor(self.foliageStateOverlay, v8, v9.cutState, self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVESTED].colors[self.isColorBlindMode][1][1], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVESTED].colors[self.isColorBlindMode][1][2], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVESTED].colors[self.isColorBlindMode][1][3])
    end
    if growthStateFilter[MapOverlayGenerator.GROWTH_STATE_INDEX.GROWING] then
      if 0 <= v9.minPreparingGrowthState then
        local v11 = math.min(v9.minHarvestingGrowthState - 1, v9.minPreparingGrowthState - 1)
      end
      -- TODO: structure LOP_FORNPREP (pc 139, target 167)
      local v16 = math.floor(#self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.GROWING].colors[self.isColorBlindMode] / v10 * 1)
      local v15 = math.max(v16, 1)
      setDensityMapVisualizationOverlayGrowthStateColor(self.foliageStateOverlay, v8, 1, self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.GROWING].colors[self.isColorBlindMode][v15][1], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.GROWING].colors[self.isColorBlindMode][v15][2], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.GROWING].colors[self.isColorBlindMode][v15][3])
      -- TODO: structure LOP_FORNLOOP (pc 166, target 140)
    end
    if growthStateFilter[MapOverlayGenerator.GROWTH_STATE_INDEX.TOPPING] and 0 <= v9.minPreparingGrowthState then
      -- TODO: structure LOP_FORNPREP (pc 200, target 212)
      setDensityMapVisualizationOverlayGrowthStateColor(self.foliageStateOverlay, v8, v9.minPreparingGrowthState, self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.TOPPING].colors[self.isColorBlindMode][1][1], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.TOPPING].colors[self.isColorBlindMode][1][2], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.TOPPING].colors[self.isColorBlindMode][1][3])
      -- TODO: structure LOP_FORNLOOP (pc 211, target 201)
    end
    if not growthStateFilter[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVEST] then
      continue
    end
    -- TODO: structure LOP_FORNPREP (pc 239, target 264)
    local v14 = math.min(v9.minHarvestingGrowthState - v9.minHarvestingGrowthState + 1, #self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVEST].colors[self.isColorBlindMode])
    setDensityMapVisualizationOverlayGrowthStateColor(self.foliageStateOverlay, v8, v9.minHarvestingGrowthState, self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVEST].colors[self.isColorBlindMode][v14][1], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVEST].colors[self.isColorBlindMode][v14][2], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVEST].colors[self.isColorBlindMode][v14][3])
    -- TODO: structure LOP_FORNLOOP (pc 263, target 240)
  end
  v4, v5, v6 = v4:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  v9 = bitShiftLeft(1, v6)
  v7 = bitShiftLeft(v9 - 1, v5)
  if growthStateFilter[MapOverlayGenerator.GROWTH_STATE_INDEX.CULTIVATED] then
    local v8 = v8:getFieldGroundValue(FieldGroundType.CULTIVATED)
    setDensityMapVisualizationOverlayStateColor(self.foliageStateOverlay, v4, 0, v7, v5, v6, v8, self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.CULTIVATED].colors[self.isColorBlindMode][1][1], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.CULTIVATED].colors[self.isColorBlindMode][1][2], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.CULTIVATED].colors[self.isColorBlindMode][1][3])
  end
  if growthStateFilter[MapOverlayGenerator.GROWTH_STATE_INDEX.PLOWED] then
    v9 = v9:getFieldGroundValue(FieldGroundType.PLOWED)
    setDensityMapVisualizationOverlayStateColor(self.foliageStateOverlay, v4, 0, v7, v5, v6, v9, self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.PLOWED].colors[self.isColorBlindMode][1][1], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.PLOWED].colors[self.isColorBlindMode][1][2], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.PLOWED].colors[self.isColorBlindMode][1][3])
  end
  if growthStateFilter[MapOverlayGenerator.GROWTH_STATE_INDEX.STUBBLE_TILLAGE] then
    v9 = v9:getFieldGroundValue(FieldGroundType.STUBBLE_TILLAGE)
    setDensityMapVisualizationOverlayStateColor(self.foliageStateOverlay, v4, 0, v7, v5, v6, v9, self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.STUBBLE_TILLAGE].colors[self.isColorBlindMode][1][1], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.STUBBLE_TILLAGE].colors[self.isColorBlindMode][1][2], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.STUBBLE_TILLAGE].colors[self.isColorBlindMode][1][3])
  end
  if growthStateFilter[MapOverlayGenerator.GROWTH_STATE_INDEX.SEEDBED] then
    v9 = v9:getFieldGroundValue(FieldGroundType.SEEDBED)
    setDensityMapVisualizationOverlayStateColor(self.foliageStateOverlay, v4, 0, v7, v5, v6, v9, self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.SEEDBED].colors[self.isColorBlindMode][1][1], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.SEEDBED].colors[self.isColorBlindMode][1][2], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.SEEDBED].colors[self.isColorBlindMode][1][3])
    local v10 = v10:getFieldGroundValue(FieldGroundType.ROLLED_SEEDBED)
    setDensityMapVisualizationOverlayStateColor(self.foliageStateOverlay, v4, 0, v7, v5, v6, v10, self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.SEEDBED].colors[self.isColorBlindMode][1][1], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.SEEDBED].colors[self.isColorBlindMode][1][2], self.displayGrowthStates[MapOverlayGenerator.GROWTH_STATE_INDEX.SEEDBED].colors[self.isColorBlindMode][1][3])
  end
end
function MapOverlayGenerator:buildSoilStateMapOverlay(soilStateFilter)
  local v3, v4, v5 = v3:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v8 = bitShiftLeft(1, v5)
  local v6 = bitShiftLeft(v8 - 1, v4)
  if soilStateFilter[MapOverlayGenerator.SOIL_STATE_INDEX.WEEDS] and g_currentMission.missionInfo.weedsEnabled and g_currentMission.weedSystem ~= nil then
    v8 = g_currentMission.weedSystem:getMapHasWeed()
    if v8 then
      local v8, v9, v10 = g_currentMission.weedSystem:getDensityMapData()
      local v11, v12 = g_currentMission.weedSystem:getColors()
      if self.isColorBlindMode then
        -- if v12 then goto L52 end
      end
      for v17, v18 in ipairs(v11) do
        for v23, v24 in ipairs(v18.states) do
          setDensityMapVisualizationOverlayGrowthStateColor(self.foliageStateOverlay, v8, v24, v19[1], v19[2], v19[3])
        end
      end
    end
  end
  if soilStateFilter[MapOverlayGenerator.SOIL_STATE_INDEX.STONES] and v2.missionInfo.stonesEnabled and v2.stoneSystem ~= nil then
    v8 = v2.stoneSystem:getMapHasStones()
    if v8 then
      v8, v9, v10 = v2.stoneSystem:getDensityMapData()
      v11, v12 = v2.stoneSystem:getColors()
      if self.isColorBlindMode then
        -- if v12 then goto L112 end
      end
      for v17, v18 in ipairs(v11) do
        for v23, v24 in ipairs(v18.states) do
          setDensityMapVisualizationOverlayGrowthStateColor(self.foliageStateOverlay, v8, v24, v19[1], v19[2], v19[3])
        end
      end
    end
  end
  if soilStateFilter[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_PLOWING] and v2.missionInfo.plowingRequiredEnabled then
    v8, v9, v10 = v8:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
    setDensityMapVisualizationOverlayStateColor(self.foliageStateOverlay, v8, v3, v6, v9, v10, 0, self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_PLOWING].colors[self.isColorBlindMode][1][1], self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_PLOWING].colors[self.isColorBlindMode][1][2], self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_PLOWING].colors[self.isColorBlindMode][1][3])
  end
  if soilStateFilter[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_ROLLING] then
    v8, v9, v10 = v8:getDensityMapData(FieldDensityMap.ROLLER_LEVEL)
    setDensityMapVisualizationOverlayStateColor(self.foliageStateOverlay, v8, 0, v6, v9, v10, 1, self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_ROLLING].colors[self.isColorBlindMode][1][1], self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_ROLLING].colors[self.isColorBlindMode][1][2], self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_ROLLING].colors[self.isColorBlindMode][1][3])
  end
  if soilStateFilter[MapOverlayGenerator.SOIL_STATE_INDEX.MULCHED] then
    v8, v9, v10 = v8:getDensityMapData(FieldDensityMap.STUBBLE_SHRED)
    setDensityMapVisualizationOverlayStateColor(self.foliageStateOverlay, v8, 0, v6, v9, v10, 1, self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.MULCHED].colors[self.isColorBlindMode][1][1], self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.MULCHED].colors[self.isColorBlindMode][1][2], self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.MULCHED].colors[self.isColorBlindMode][1][3])
  end
  if not Platform.isMobile and soilStateFilter[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_LIME] and v2.missionInfo.limeRequired then
    v8, v9, v10 = v8:getDensityMapData(FieldDensityMap.LIME_LEVEL)
    setDensityMapVisualizationOverlayStateColor(self.foliageStateOverlay, v8, v3, v6, v9, v10, 0, self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_LIME].colors[self.isColorBlindMode][1][1], self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_LIME].colors[self.isColorBlindMode][1][2], self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_LIME].colors[self.isColorBlindMode][1][3])
  end
  if soilStateFilter[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED] then
    v8, v9, v10 = v8:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    v11 = v11:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
    -- TODO: structure LOP_FORNPREP (pc 367, target 391)
    v16 = math.min(1, #self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED].colors[self.isColorBlindMode])
    setDensityMapVisualizationOverlayStateColor(self.foliageStateOverlay, v8, 0, v6, v9, v10, 1, self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED].colors[self.isColorBlindMode][v16][1], self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED].colors[self.isColorBlindMode][v16][2], self.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED].colors[self.isColorBlindMode][v16][3])
    -- TODO: structure LOP_FORNLOOP (pc 390, target 368)
  end
end
function MapOverlayGenerator:buildFieldMapOverlay(overlay)
  local v3, v4, v5 = v3:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  if v3 ~= nil then
    local v11 = bitShiftLeft(1, v5)
    -- TODO: structure LOP_FORNPREP (pc 23, target 60)
    if 1 ~= FieldGroundType.GRASS then
      -- if 1 ~= FieldGroundType.GRASS_CUT then goto L46 end
    end
    setDensityMapVisualizationOverlayStateColor(overlay, v3, 0, 0, v4, v5, v10, v7[1], v7[2], v7[3])
    -- goto L59  (LOP_JUMP +13)
    setDensityMapVisualizationOverlayStateColor(overlay, v3, 0, 0, v4, v5, v10, v6[1], v6[2], v6[3])
    -- TODO: structure LOP_FORNLOOP (pc 59, target 24)
  end
end
function MapOverlayGenerator:buildFarmlandsMapOverlay(selectedFarmland)
  local v2 = v2:getLocalMap()
  local v3 = v3:getFarmlands()
  setOverlayColor(self.farmlandStateOverlay, 1, 1, 1, MapOverlayGenerator.FARMLANDS_ALPHA)
  for v7, v8 in pairs(v3) do
    local v9 = v9:getFarmlandOwner(v8.id)
    if not (v9 ~= FarmlandManager.NOT_BUYABLE_FARM_ID) then
      continue
    end
    if selectedFarmland ~= nil then
      -- if v8.id ~= v1.id then goto L71 end
      local v16 = getBitVectorMapNumChannels(v2)
      local v18 = unpack(MapOverlayGenerator.COLOR.FIELD_SELECTED)
      setDensityMapVisualizationOverlayStateColor(...)
    else
      if v8.isOwned then
        local v11 = v11:getFarmById(v9)
        if v11 ~= nil then
          local v12 = v11:getColor()
        end
      end
      local v17 = getBitVectorMapNumChannels(v2)
      local v19 = unpack(v10)
      setDensityMapVisualizationOverlayStateColor(...)
    end
  end
  v4 = Utils.getPerformanceClassId()
  if GS_PROFILE_HIGH <= v4 then
    v9 = getBitVectorMapNumChannels(v2)
    v11 = unpack(MapOverlayGenerator.COLOR.FIELD_BORDER)
    setDensityMapVisualizationOverlayStateBorderColor(...)
  end
  self:buildFieldMapOverlay(self.farmlandStateOverlay)
end
function MapOverlayGenerator:generateOverlay(mapOverlayType, finishedCallback, overlayState, overlayState2)
  if self.overlayTypeCheckHash[mapOverlayType] == nil then
    local v8 = tostring(mapOverlayType)
    Logging.warning(...)
    return false
  end
  if not finishedCallback then
  end
  self.overlayFinishedCallback = v7
  resetDensityMapVisualizationOverlay(v6)
  self.currentOverlayHandle = v6
  self.typeBuilderFunctionMap[mapOverlayType](self, overlayState, overlayState2)
  generateDensityMapVisualizationOverlay(v6)
  self:checkOverlayFinished()
  return v5
end
function MapOverlayGenerator:generateFruitTypeOverlay(finishedCallback, fruitTypeFilter)
  return self:generateOverlay(MapOverlayGenerator.OVERLAY_TYPE.CROPS, finishedCallback, fruitTypeFilter)
end
function MapOverlayGenerator:generateMinimapOverlay(finishedCallback, fruitTypeFilter)
  return self:generateOverlay(MapOverlayGenerator.OVERLAY_TYPE.MINIMAP, finishedCallback, fruitTypeFilter)
end
function MapOverlayGenerator:generateGrowthStateOverlay(finishedCallback, growthStateFilter, fruitTypeFilter)
  return self:generateOverlay(MapOverlayGenerator.OVERLAY_TYPE.GROWTH, finishedCallback, growthStateFilter, fruitTypeFilter)
end
function MapOverlayGenerator:generateSoilStateOverlay(finishedCallback, soilStateFilter)
  return self:generateOverlay(MapOverlayGenerator.OVERLAY_TYPE.SOIL, finishedCallback, soilStateFilter)
end
function MapOverlayGenerator:generateFarmlandOverlay(finishedCallback, mapPosition)
  return self:generateOverlay(MapOverlayGenerator.OVERLAY_TYPE.FARMLANDS, finishedCallback, mapPosition)
end
function MapOverlayGenerator:checkOverlayFinished()
  if self.currentOverlayHandle ~= nil then
    local v1 = getIsDensityMapVisualizationOverlayReady(self.currentOverlayHandle)
    if v1 then
      self.overlayFinishedCallback(self.currentOverlayHandle)
      self.currentOverlayHandle = nil
    end
  end
end
function MapOverlayGenerator:reset()
  resetDensityMapVisualizationOverlay(self.foliageStateOverlay)
  resetDensityMapVisualizationOverlay(self.farmlandStateOverlay)
  resetDensityMapVisualizationOverlay(self.minimapOverlay)
  self.currentOverlayHandle = nil
end
function MapOverlayGenerator:update(dt)
  self:checkOverlayFinished()
end
function MapOverlayGenerator:getDisplayCropTypes()
  for v5, v6 in ipairs(self.missionFruitTypes) do
    if not v6.shownOnMap then
      continue
    end
    local v7 = v7:getFillTypeIndexByFruitTypeIndex(v6.fruitTypeIndex)
    local v8 = v8:getFillTypeByIndex(v7)
    {}[false] = v6.defaultColor
    {}[true] = v6.colorBlindColor
    table.insert(v1, {colors = {}, iconFilename = v8.hudOverlayFilename, iconUVs = Overlay.DEFAULT_UVS, description = v8.title, fruitTypeIndex = v6.fruitTypeIndex, foliageId = v6.foliageId})
  end
  return v1
end
function MapOverlayGenerator:getDisplayGrowthStates()
  {}[true] = {MapOverlayGenerator.FRUIT_COLOR_CULTIVATED[true]}
  {}[false] = {MapOverlayGenerator.FRUIT_COLOR_CULTIVATED[false]}
  local v4 = v4:getText(MapOverlayGenerator.L10N_SYMBOL.GROWTH_MAP_CULTIVATED)
  {}[MapOverlayGenerator.GROWTH_STATE_INDEX.CULTIVATED] = {colors = {}, description = v4}
  {}[true] = {MapOverlayGenerator.FRUIT_COLOR_STUBBLE_TILLAGE[true]}
  {}[false] = {MapOverlayGenerator.FRUIT_COLOR_STUBBLE_TILLAGE[false]}
  v4 = v4:getText(MapOverlayGenerator.L10N_SYMBOL.GROWTH_MAP_STUBBLE_TILLAGE)
  {}[MapOverlayGenerator.GROWTH_STATE_INDEX.STUBBLE_TILLAGE] = {colors = {}, description = v4}
  {}[true] = {MapOverlayGenerator.FRUIT_COLOR_SEEDBED[true]}
  {}[false] = {MapOverlayGenerator.FRUIT_COLOR_SEEDBED[false]}
  v4 = v4:getText(MapOverlayGenerator.L10N_SYMBOL.GROWTH_MAP_SEEDBED)
  {}[MapOverlayGenerator.GROWTH_STATE_INDEX.SEEDBED] = {colors = {}, description = v4}
  v4 = v4:getText(MapOverlayGenerator.L10N_SYMBOL.GROWTH_MAP_GROWING)
  {}[MapOverlayGenerator.GROWTH_STATE_INDEX.GROWING] = {colors = MapOverlayGenerator.FRUIT_COLORS_GROWING, description = v4}
  v4 = v4:getText(MapOverlayGenerator.L10N_SYMBOL.GROWTH_MAP_HARVEST)
  {}[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVEST] = {colors = MapOverlayGenerator.FRUIT_COLORS_HARVEST, description = v4}
  {}[true] = {MapOverlayGenerator.FRUIT_COLOR_CUT}
  {}[false] = {MapOverlayGenerator.FRUIT_COLOR_CUT}
  v4 = v4:getText(MapOverlayGenerator.L10N_SYMBOL.GROWTH_MAP_HARVESTED)
  {}[MapOverlayGenerator.GROWTH_STATE_INDEX.HARVESTED] = {colors = {}, description = v4}
  {}[true] = {MapOverlayGenerator.FRUIT_COLOR_REMOVE_TOPS[true]}
  {}[false] = {MapOverlayGenerator.FRUIT_COLOR_REMOVE_TOPS[false]}
  v4 = v4:getText(MapOverlayGenerator.L10N_SYMBOL.GROWTH_MAP_TOPPING)
  {}[MapOverlayGenerator.GROWTH_STATE_INDEX.TOPPING] = {colors = {}, description = v4}
  {}[true] = {MapOverlayGenerator.FRUIT_COLOR_PLOWED[true]}
  {}[false] = {MapOverlayGenerator.FRUIT_COLOR_PLOWED[false]}
  v4 = v4:getText(MapOverlayGenerator.L10N_SYMBOL.GROWTH_MAP_PLOWED)
  {}[MapOverlayGenerator.GROWTH_STATE_INDEX.PLOWED] = {colors = {}, description = v4}
  if Platform.gameplay.supportsWithering then
    {}[true] = {MapOverlayGenerator.FRUIT_COLOR_WITHERED[true]}
    {}[false] = {MapOverlayGenerator.FRUIT_COLOR_WITHERED[false]}
    v4 = v4:getText(MapOverlayGenerator.L10N_SYMBOL.GROWTH_MAP_WITHERED)
    {}[MapOverlayGenerator.GROWTH_STATE_INDEX.WITHERED] = {colors = {}, description = v4}
  end
  return v1
end
function MapOverlayGenerator:getDisplaySoilStates()
  {}[true] = {}
  {}[false] = {}
  local v3 = v3:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
  for v7, v8 in pairs(MapOverlayGenerator.FRUIT_COLORS_FERTILIZED) do
    -- TODO: structure LOP_FORNPREP (pc 30, target 44)
    table.insert(v1[v7], 1, v8[#v8])
    if not (#v1[v7] ~= v3) then
      continue
    end
    -- TODO: structure LOP_FORNLOOP (pc 43, target 31)
  end
  v7 = v7:getText(MapOverlayGenerator.L10N_SYMBOL.SOIL_MAP_FERTILIZED)
  {}[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED] = {colors = v1, description = v7, isActive = true}
  if Platform.gameplay.usePlowCounter then
    {}[true] = {MapOverlayGenerator.FRUIT_COLOR_NEEDS_PLOWING[true]}
    {}[false] = {MapOverlayGenerator.FRUIT_COLOR_NEEDS_PLOWING[false]}
    v7 = v7:getText(MapOverlayGenerator.L10N_SYMBOL.SOIL_MAP_NEED_PLOWING)
    {}[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_PLOWING] = {colors = {}, description = v7, isActive = v2.missionInfo.plowingRequiredEnabled}
  end
  if Platform.gameplay.useLimeCounter then
    {}[true] = {MapOverlayGenerator.FRUIT_COLOR_NEEDS_LIME[true]}
    {}[false] = {MapOverlayGenerator.FRUIT_COLOR_NEEDS_LIME[false]}
    v7 = v7:getText(MapOverlayGenerator.L10N_SYMBOL.SOIL_MAP_NEED_LIME)
    v4[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_LIME] = {colors = {}, description = v7, isActive = v2.missionInfo.limeRequired}
  end
  if Platform.gameplay.useRolling then
    {}[true] = {MapOverlayGenerator.FRUIT_COLOR_NEEDS_ROLLING[true]}
    {}[false] = {MapOverlayGenerator.FRUIT_COLOR_NEEDS_ROLLING[false]}
    v7 = v7:getText(MapOverlayGenerator.L10N_SYMBOL.SOIL_MAP_NEED_ROLLING)
    v4[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_ROLLING] = {colors = {}, description = v7, isActive = true}
  end
  if Platform.gameplay.useStubbleShred then
    {}[true] = {MapOverlayGenerator.FRUIT_COLOR_MULCHED[true]}
    {}[false] = {MapOverlayGenerator.FRUIT_COLOR_MULCHED[false]}
    v7 = v7:getText(MapOverlayGenerator.L10N_SYMBOL.SOIL_MAP_MULCHED)
    v4[MapOverlayGenerator.SOIL_STATE_INDEX.MULCHED] = {colors = {}, description = v7, isActive = true}
  end
  if v2.weedSystem ~= nil then
    v6 = v2.weedSystem:getMapHasWeed()
    if v6 then
      v6, v7 = v2.weedSystem:getColors()
      local v9 = v2.weedSystem:getTitle()
      {}[true] = {}
      {}[false] = {}
      for v13, v14 in ipairs(v6) do
        table.insert(v9[true], v7[v13].color)
        table.insert(v9[false], v14.color)
      end
      v4[MapOverlayGenerator.SOIL_STATE_INDEX.WEEDS] = {colors = v9, description = v8, isActive = v2.missionInfo.weedsEnabled}
    end
  end
  if v2.stoneSystem ~= nil then
    v7 = v2.stoneSystem:getMapHasStones()
    if v7 then
      v7, v8 = v2.stoneSystem:getColors()
      v10 = v2.stoneSystem:getTitle()
      {}[true] = {}
      {}[false] = {}
      for v14, v15 in ipairs(v7) do
        table.insert(v10[true], v8[v14].color)
        table.insert(v10[false], v15.color)
      end
      v4[MapOverlayGenerator.SOIL_STATE_INDEX.STONES] = {colors = v10, description = v9, isActive = v2.missionInfo.stonesEnabled}
    end
  end
  return v4
end
MapOverlayGenerator.GROWTH_STATE_INDEX = {STUBBLE_TILLAGE = 1, CULTIVATED = 2, PLOWED = 3, SEEDBED = 4, GROWING = 5, HARVEST = 6, HARVESTED = 7, TOPPING = 8, WITHERED = 9}
MapOverlayGenerator.SOIL_STATE_INDEX = {WEEDS = 1, FERTILIZED = 2, NEEDS_PLOWING = 3, NEEDS_LIME = 4, NEEDS_ROLLING = 5, MULCHED = 6, STONES = 7}
MapOverlayGenerator.FRUIT_COLORS_GROWING = {}
if not Platform.isMobile then
  MapOverlayGenerator.FRUIT_COLORS_GROWING[false] = {{0.227, 0.5711, 0.0176, 1}, {0.1683, 0.4678, 0.0152, 1}, {0.1221, 0.3813, 0.013, 1}, {0.0823, 0.3006, 0.011, 1}, {0.0529, 0.2346, 0.0091, 1}, {0.0296, 0.1746, 0.0075, 1}, {0.0144, 0.1248, 0.006, 1}, {0.0048, 0.0844, 0.0048, 1}}
  MapOverlayGenerator.FRUIT_COLORS_GROWING[true] = {{1, 0.9473, 0.227, 1}, {1, 0.9046, 0.013, 1}, {0.5583, 0.4735, 0.007, 1}, {0.2122, 0.1779, 0.0027, 1}}
else
  MapOverlayGenerator.FRUIT_COLORS_GROWING[false] = {{0.227, 0.5711, 0.0176, 1}, {0.0823, 0.3006, 0.011, 1}, {0.0048, 0.0844, 0.0048, 1}}
  MapOverlayGenerator.FRUIT_COLORS_GROWING[true] = {{1, 0.9473, 0.227, 1}, {0.5583, 0.4735, 0.007, 1}, {0.2122, 0.1779, 0.0027, 1}}
end
MapOverlayGenerator.FRUIT_COLORS_HARVEST = {[false] = {{0.7758, 0.3095, 0.013, 1}}, [true] = {{0.0561, 0.1384, 0.5841, 1}}}
MapOverlayGenerator.FRUIT_COLORS_FERTILIZED = {}
if not Platform.isMobile then
  MapOverlayGenerator.FRUIT_COLORS_FERTILIZED[false] = {{0.0595, 0.2086, 0.8227, 1}, {0.0091, 0.0931, 0.5841, 1}, {0.0018, 0.0382, 0.2961, 1}}
  MapOverlayGenerator.FRUIT_COLORS_FERTILIZED[true] = {{0.0976, 0.2086, 0.8148, 1}, {0.0086, 0.0976, 0.5776, 1}, {0, 0.0409, 0.2918, 1}}
else
  MapOverlayGenerator.FRUIT_COLORS_FERTILIZED[false] = {{0.0091, 0.0931, 0.5841, 1}, {0.0018, 0.0382, 0.2961, 1}}
  MapOverlayGenerator.FRUIT_COLORS_FERTILIZED[true] = {{0.0086, 0.0976, 0.5776, 1}, {0, 0.0409, 0.2918, 1}}
end
MapOverlayGenerator.FRUIT_COLORS_DISABLED = {{0.4, 0.4, 0.4, 1}, {0.3, 0.3, 0.3, 1}, {0.2, 0.2, 0.2, 1}, {0.1, 0.1, 0.1, 1}}
MapOverlayGenerator.FRUIT_COLOR_NEEDS_PLOWING = {[false] = {0.6172, 0.051, 0.051, 1}, [true] = {1, 0.8632, 0.0232, 1}}
MapOverlayGenerator.FRUIT_COLOR_NEEDS_LIME = {[false] = {0.0815, 0.6584, 0.4198, 1}, [true] = {0.6795, 0.6867, 0.7231, 1}}
MapOverlayGenerator.FRUIT_COLOR_NEEDS_ROLLING = {[false] = {0.0967, 0.3758, 0.7084, 1}, [true] = {0.2918, 0.3564, 0.7011, 1}}
MapOverlayGenerator.FRUIT_COLOR_MULCHED = {[false] = {0.0908, 0.0467, 0.0865, 1}, [true] = {0.0469, 0.0484, 0.0597, 1}}
MapOverlayGenerator.FRUIT_COLOR_REMOVE_TOPS = {[false] = {0.7011, 0.0452, 0.0123, 1}, [true] = {0.3231, 0.3467, 0.4621, 1}}
MapOverlayGenerator.FRUIT_COLOR_WITHERED = {[false] = {0.1441, 0.0452, 0.0123, 1}, [true] = {0.1195, 0.1144, 0.0908, 1}}
MapOverlayGenerator.FRUIT_COLOR_CULTIVATED = {[false] = {0.0967, 0.3758, 0.7084, 1}, [true] = {0.2918, 0.3564, 0.7011, 1}}
MapOverlayGenerator.FRUIT_COLOR_STUBBLE_TILLAGE = {[false] = {0.1967, 0.4758, 0.3084, 1}, [true] = {0.3918, 0.4564, 0.3011, 1}}
MapOverlayGenerator.FRUIT_COLOR_SEEDBED = {[false] = {0.0815, 0.6584, 0.4198, 1}, [true] = {0.6795, 0.6867, 0.7231, 1}}
MapOverlayGenerator.FRUIT_COLOR_PLOWED = {[false] = {0.0908, 0.0467, 0.0865, 1}, [true] = {0.0469, 0.0484, 0.0597, 1}}
MapOverlayGenerator.FRUIT_COLOR_SOWN = {[false] = {0.9301, 0.6404, 0.0439, 1}, [true] = {0.7681, 0.6514, 0.0529, 1}}
MapOverlayGenerator.FRUIT_COLOR_CUT = {0.2647, 0.1038, 0.358, 1}
MapOverlayGenerator.FRUIT_COLOR_DISABLED = {0.2, 0.2, 0.2, 1}
MapOverlayGenerator.FIELD_COLOR = {0.15, 0.1195, 0.0953}
MapOverlayGenerator.FIELD_GRASS_COLOR = {0.147, 0.1441, 0.0823}
MapOverlayGenerator.COLOR = {FIELD_UNOWNED = {0, 0, 0}, FIELD_SELECTED = {0.2079, 0.7808, 0.9965}, FIELD_BORDER = {0.2, 0.2, 0.2}}
MapOverlayGenerator.FARMLANDS_ALPHA = 0.5
MapOverlayGenerator.FARMLANDS_BORDER_THICKNESS = 3
MapOverlayGenerator.L10N_SYMBOL = {GROWTH_MAP_CULTIVATED = "ui_growthMapCultivated", GROWTH_MAP_GROWING = "ui_growthMapGrowing", GROWTH_MAP_HARVEST = "ui_growthMapReadyToHarvest", GROWTH_MAP_HARVESTED = "ui_growthMapCut", GROWTH_MAP_PLOWED = "ui_growthMapPlowed", GROWTH_MAP_TOPPING = "ui_growthMapReadyToPrepareForHarvest", GROWTH_MAP_WITHERED = "ui_growthMapWithered", GROWTH_MAP_STUBBLE_TILLAGE = "ui_growthMapStubbleTillage", GROWTH_MAP_SEEDBED = "ui_growthMapSeedbed", SOIL_MAP_FERTILIZED = "ui_growthMapFertilized", SOIL_MAP_NEED_PLOWING = "ui_growthMapNeedsPlowing", SOIL_MAP_NEED_LIME = "ui_growthMapNeedsLime", SOIL_MAP_NEED_ROLLING = "ui_growthMapNeedsRolling", SOIL_MAP_MULCHED = "ui_growthMapMulched"}
