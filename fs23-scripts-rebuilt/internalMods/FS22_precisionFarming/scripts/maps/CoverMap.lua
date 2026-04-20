-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CoverMap = {MOD_NAME = g_currentModName}
local CoverMap_mt = Class(CoverMap, ValueMap)
function CoverMap.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.name = "coverMap"
  addConsoleCommand("pfUncoverField", "Uncovers given field", "debugUncoverField", v2)
  addConsoleCommand("pfUncoverAll", "Uncovers all fields", "debugUncoverAll", v2)
  addConsoleCommand("pfReduceCoverState", "Reduces cover State for given field", "debugReduceCoverStateField", v2)
  addConsoleCommand("pfReduceCoverStateAll", "Reduces cover State for all fields", "debugReduceCoverStateAll", v2)
  addConsoleCommand("pfPrepareField", "Sets nitrogen and pH to the optimal levels", "debugPrepareField", v2)
  return v2
end
function CoverMap:initialize()
  local v2 = v2:superClass()
  v2.initialize(self)
  self.densityMapModifiersAnalyse = {}
  self.densityMapModifiersUncover = {}
  self.densityMapModifiersUncoverFarmland = {}
  self.densityMapModifiersFarmlandState = {}
  self.densityMapModifiersUpdate = {}
  self.densityMapModifiersResetLock = {}
end
function CoverMap.delete(v0)
  removeConsoleCommand("pfUncoverField")
  removeConsoleCommand("pfUncoverAll")
  removeConsoleCommand("pfReduceCoverState")
  removeConsoleCommand("pfReduceCoverStateAll")
  removeConsoleCommand("pfPrepareField")
  local v2 = v2:superClass()
  v2.delete(v0)
end
function CoverMap:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  local v7 = getXMLInt(xmlFile, key .. ".coverMap" .. "#sizeX")
  self.sizeX = v7 or 1024
  v7 = getXMLInt(xmlFile, key .. ".coverMap" .. "#sizeY")
  self.sizeY = v7 or 1024
  v7 = getXMLInt(xmlFile, key .. ".coverMap" .. "#lockChannel")
  self.lockChannel = v7 or 0
  v7 = getXMLInt(xmlFile, key .. ".coverMap" .. "#firstChannel")
  self.firstChannel = v7 or 1
  v7 = getXMLInt(xmlFile, key .. ".coverMap" .. "#numChannels")
  self.numChannels = v7 or 4
  self.maxValue = 2 ^ self.numChannels - 1
  local v6 = getXMLInt(xmlFile, key .. ".coverMap" .. "#maxValue")
  if not v6 then
  end
  self.maxValue = v6
  self.sampledValue = self.maxValue + 1
  v6 = self:loadSavedBitVectorMap("coverMap", "precisionFarming_coverMap.grle", self.firstChannel + self.numChannels, self.sizeX)
  self.bitVectorMap = v6
  self:addBitVectorMapToSync(self.bitVectorMap)
  self:addBitVectorMapToSave(self.bitVectorMap, "precisionFarming_coverMap.grle")
  self:addBitVectorMapToDelete(self.bitVectorMap)
  v6 = self:loadSavedBitVectorMap("soilSampleFarmIdMap", "precisionFarming_soilSampleFarmIdMap.grle", 4, self.sizeX)
  self.bitVectorMapSoilSampleFarmId = v6
  self:addBitVectorMapToSave(self.bitVectorMapSoilSampleFarmId, "precisionFarming_soilSampleFarmIdMap.grle")
  self:addBitVectorMapToDelete(self.bitVectorMapSoilSampleFarmId)
  v6 = self:loadSavedBitVectorMap("bitVectorMapTempHarvestLock", "bitVectorMapTempHarvestLock.grle", 1, self.sizeX)
  self.bitVectorMapTempHarvestLock = v6
  self:addBitVectorMapToDelete(self.bitVectorMapTempHarvestLock)
  self.soilMap = g_precisionFarming.soilMap
  return true
end
function CoverMap.overwriteGameFunctions(v0, v1)
  local v3 = v3:superClass()
  v3.overwriteGameFunctions(v0, v1)
end
function CoverMap.getShowInMenu(v0)
  return false
end
function CoverMap:analyseArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, state, farmId, farmlandId)
  if self.densityMapModifiersAnalyse.modifier ~= nil and self.densityMapModifiersAnalyse.maskFilter ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x80000000 -> L77
  end
  local v14 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersAnalyse.modifier = v14
  local v14, v15, v16 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v18 = DensityMapFilter.new(v14, v15, v16)
  self.densityMapModifiersAnalyse.maskFilter = v18
  self.densityMapModifiersAnalyse.maskFilter:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  v18 = DensityMapModifier.new(self.bitVectorMapSoilSampleFarmId, 0, 4)
  self.densityMapModifiersAnalyse.modifierFarmIdMap = v18
  self.densityMapModifiersAnalyse.modifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
  self.densityMapModifiersAnalyse.modifierFarmIdMap:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
  if not state then
  end
  local v13, v14, v15 = v10:executeSet(v15, v11)
  v12:executeSet(farmId, v11)
  v16:onAnalyseArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, state, farmId)
  return v14, v15
end
function CoverMap:uncoverAnalysedArea(farmId)
  if self.densityMapModifiersUncover.modifier ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L85
  end
  local v6 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersUncover.modifier = v6
  self.densityMapModifiersUncover.modifier:setParallelogramDensityMapCoords(0, 0, 0, self.sizeY, self.sizeX, 0, DensityCoordType.POINT_POINT_POINT)
  v6 = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersUncover.maskFilter = v6
  self.densityMapModifiersUncover.maskFilter:setValueCompareParams(DensityValueCompareType.EQUAL, self.sampledValue)
  v6 = DensityMapFilter.new(self.bitVectorMapSoilSampleFarmId, 0, 4)
  self.densityMapModifiersUncover.farmIdFilter = v6
  if farmId ~= nil then
    self.densityMapModifiersUncover.farmIdFilter:setValueCompareParams(DensityValueCompareType.EQUAL, farmId)
  else
    self.densityMapModifiersUncover.farmIdFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, 15)
  end
  v5:onUncoverArea(v3, v4, farmId)
  v2:executeSet(self.maxValue, v3, v4)
end
function CoverMap:uncoverFarmlandArea(farmlandId)
  if self.densityMapModifiersUncoverFarmland.modifier ~= nil and self.densityMapModifiersUncoverFarmland.maskFilter ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L99
  end
  local v6 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersUncoverFarmland.modifier = v6
  self.densityMapModifiersUncoverFarmland.modifier:setParallelogramDensityMapCoords(0, 0, 0, self.sizeY, self.sizeX, 0, DensityCoordType.POINT_POINT_POINT)
  local v7 = DensityMapFilter.new(g_farmlandManager.localMap, 0, g_farmlandManager.numberOfBits)
  self.densityMapModifiersUncoverFarmland.maskFilter = v7
  self.densityMapModifiersUncoverFarmland.maskFilter:setValueCompareParams(DensityValueCompareType.EQUAL, farmlandId)
  local v7, v8, v9 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v11 = DensityMapFilter.new(v7, v8, v9)
  self.densityMapModifiersAnalyse.fieldFilter = v11
  self.densityMapModifiersAnalyse.fieldFilter:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  self.densityMapModifiersUncoverFarmland.maskFilter:setValueCompareParams(DensityValueCompareType.EQUAL, farmlandId)
  v5:onUncoverArea(self.densityMapModifiersUncoverFarmland.maskFilter, self.densityMapModifiersAnalyse.fieldFilter, nil)
  self.densityMapModifiersUncoverFarmland.modifier:executeSet(self.maxValue, self.densityMapModifiersUncoverFarmland.maskFilter, self.densityMapModifiersAnalyse.fieldFilter)
end
function CoverMap:getFarmlandSampleState(farmlandId)
  if self.densityMapModifiersFarmlandState.modifier ~= nil and self.densityMapModifiersFarmlandState.coverFilter ~= nil and self.densityMapModifiersFarmlandState.maskFilter ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L131
  end
  local v7 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersFarmlandState.modifier = v7
  self.densityMapModifiersFarmlandState.modifier:setParallelogramDensityMapCoords(0, 0, 0, self.sizeY, self.sizeX, 0, DensityCoordType.POINT_POINT_POINT)
  v7 = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersFarmlandState.coverFilter = v7
  self.densityMapModifiersFarmlandState.coverFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 2, self.maxValue + 1)
  local v8 = DensityMapFilter.new(g_farmlandManager.localMap, 0, g_farmlandManager.numberOfBits)
  self.densityMapModifiersFarmlandState.maskFilter = v8
  self.densityMapModifiersFarmlandState.maskFilter:setValueCompareParams(DensityValueCompareType.EQUAL, farmlandId)
  local v8, v9, v10 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v12 = DensityMapFilter.new(v8, v9, v10)
  self.densityMapModifiersAnalyse.fieldFilter = v12
  self.densityMapModifiersAnalyse.fieldFilter:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  self.densityMapModifiersFarmlandState.maskFilter:setValueCompareParams(DensityValueCompareType.EQUAL, farmlandId)
  local v6, v7, v8 = self.densityMapModifiersFarmlandState.modifier:executeGet(self.densityMapModifiersFarmlandState.maskFilter, self.densityMapModifiersAnalyse.fieldFilter)
  local v9, v10, v11 = self.densityMapModifiersFarmlandState.modifier:executeGet(self.densityMapModifiersFarmlandState.coverFilter, self.densityMapModifiersFarmlandState.maskFilter, self.densityMapModifiersAnalyse.fieldFilter)
  if 0 < v7 then
    return v10 / v7
  end
  return 0
end
function CoverMap:updateCoverArea(fruitTypes, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, useMinForageState)
  if self.densityMapModifiersUpdate.modifier ~= nil and self.densityMapModifiersUpdate.lockModifier ~= nil and self.densityMapModifiersUpdate.lockFilter ~= nil and self.densityMapModifiersUpdate.fruitFilter ~= nil and self.densityMapModifiersUpdate.lockChannelFilter ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x80000000 -> L152
  end
  local v16 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersUpdate.modifier = v16
  self.densityMapModifiersUpdate.modifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
  v16 = DensityMapModifier.new(self.bitVectorMapTempHarvestLock, 0, 1)
  self.densityMapModifiersUpdate.lockModifier = v16
  self.densityMapModifiersUpdate.lockModifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
  v16 = DensityMapFilter.new(self.bitVectorMapTempHarvestLock, 0, 1)
  self.densityMapModifiersUpdate.lockFilter = v16
  v16 = DensityMapFilter.new(self.densityMapModifiersUpdate.modifier)
  self.densityMapModifiersUpdate.fruitFilter = v16
  v16 = DensityMapFilter.new(self.bitVectorMap, self.lockChannel, 1)
  self.densityMapModifiersUpdate.lockChannelFilter = v16
  self.densityMapModifiersUpdate.lockChannelFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
  v16 = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersUpdate.coverStateFilter = v16
  self.densityMapModifiersUpdate.coverStateFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 2, self.maxValue)
  local v15, v16 = MathUtil.vector2Normalize(startWorldX - widthWorldX, startWorldZ - widthWorldZ)
  local v17, v18 = MathUtil.vector2Normalize(startWorldX - heightWorldX, startWorldZ - heightWorldZ)
  self.densityMapModifiersUpdate.modifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
  self.densityMapModifiersUpdate.lockModifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + v15 * g_currentMission.terrainSize / self.sizeX * 2 + v17 * g_currentMission.terrainSize / self.sizeX * 2 + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + v16 * g_currentMission.terrainSize / self.sizeX * 2 + v18 * g_currentMission.terrainSize / self.sizeX * 2 + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX - v15 * g_currentMission.terrainSize / self.sizeX * 2 + v17 * g_currentMission.terrainSize / self.sizeX * 2 + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ - v16 * g_currentMission.terrainSize / self.sizeX * 2 + v18 * g_currentMission.terrainSize / self.sizeX * 2 + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX - v17 * g_currentMission.terrainSize / self.sizeX * 2 + v15 * g_currentMission.terrainSize / self.sizeX * 2 + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ - v18 * g_currentMission.terrainSize / self.sizeX * 2 + v16 * g_currentMission.terrainSize / self.sizeX * 2 + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
  self.densityMapModifiersUpdate.lockModifier:executeSet(1)
  for v31, v32 in pairs(fruitTypes) do
    local v33 = v33:getFruitTypeByIndex(v32)
    if v33 ~= nil and v33.terrainDataPlaneId ~= nil then
      v12:resetDensityMapAndChannels(v33.terrainDataPlaneId, v33.startStateChannel, v33.numStateChannels)
      v12:setValueCompareParams(DensityValueCompareType.EQUAL, v33.cutState)
      local v34, v35 = v10:executeSet(0, v12)
      if 0 < v35 then
      end
    end
  end
  if v27 == 0 then
    v10:executeSet(0)
  end
  v9:setParallelogramDensityMapCoords(v20, v21, v22, v23, v24, v25, DensityCoordType.POINT_POINT_POINT)
  v9:setDensityMapChannels(self.lockChannel, 1)
  v11:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
  v9:executeSet(0, v11)
  v9:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v9:setDensityMapChannels(self.firstChannel, self.numChannels)
  v11:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
  v9:executeAdd(-1, v11, v13, v14)
  v28, v29 = v9:executeGet(v11, v13)
  if v26 ~= nil then
    if self.pfModule.pHMap ~= nil then
      if 0 >= v29 then
      end
      v32 = v32:onHarvestCoverUpdate(v34, v35, v36, true, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, useMinForageState)
    end
    if self.pfModule.nitrogenMap ~= nil then
      if 0 >= v29 then
      end
      v32 = v32:onHarvestCoverUpdate(v34, v35, v36, true, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, useMinForageState)
    end
    if self.pfModule.seedRateMap ~= nil then
      if 0 >= v29 then
      end
      v32:onHarvestCoverUpdate(v34, v35, v36, true, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, useMinForageState)
    end
  end
  v9:setDensityMapChannels(self.lockChannel, 1)
  v9:executeSet(1, v11, v13)
  return v30, v31
end
function CoverMap:resetCoverLock(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if self.densityMapModifiersResetLock.modifier == nil then
    local v9 = DensityMapModifier.new(self.bitVectorMap, self.lockChannel, 1)
    self.densityMapModifiersResetLock.modifier = v9
  end
  v7:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
  v7:executeSet(0)
end
function CoverMap:getNumCoverOverlays()
  return self.maxValue - 1
end
function CoverMap:buildCoverStateOverlay(overlay, index)
  local numOverlays = self:getNumCoverOverlays()
  resetDensityMapVisualizationOverlay(overlay)
  setOverlayColor(overlay, 1, 1, 1, (numOverlays - index - 1) / numOverlays)
  setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMap, 0, 0, self.firstChannel, self.numChannels, index, 0, 0, 0)
end
function CoverMap:getIsUncoveredAtBitVectorPos(x, z, isWorldPos)
  if isWorldPos == true then
  end
  local coverValue = getBitVectorMapPoint(self.bitVectorMap, x, z, self.firstChannel, self.numChannels)
  if 1 < coverValue and coverValue <= self.maxValue then
    return true
  end
  return false
end
function CoverMap:debugReduceCoverStateField(fieldIndex)
  local v4 = tonumber(fieldIndex)
  local v2 = v2:getFieldByIndex(...)
  if v2 ~= nil and v2.fieldDimensions ~= nil then
    local v3 = getNumOfChildren(v2.fieldDimensions)
    -- TODO: structure LOP_FORNPREP (pc 23, target 43)
    local v7, v8, v9, v10, v11, v12 = self:getCoordsFromFieldDimensions(v2.fieldDimensions, 1 - 1)
    self:updateCoverArea({}, v7, v8, v9, v10, v11, v12, true)
    -- TODO: structure LOP_FORNLOOP (pc 42, target 24)
    -- TODO: structure LOP_FORNPREP (pc 46, target 63)
    v7, v8, v9, v10, v11, v12 = self:getCoordsFromFieldDimensions(v2.fieldDimensions, 1 - 1)
    self:resetCoverLock(v7, v8, v9, v10, v11, v12)
    -- TODO: structure LOP_FORNLOOP (pc 62, target 47)
  end
  v3:updatePrecisionFarmingOverlays()
end
function CoverMap:debugReduceCoverStateAll()
  -- TODO: structure LOP_FORNPREP (pc 5, target 11)
  self:debugReduceCoverStateField(1)
  -- TODO: structure LOP_FORNLOOP (pc 10, target 6)
end
function CoverMap:debugPrepareField(fieldIndex, resetState)
  local v5 = tonumber(fieldIndex)
  local v3 = v3:getFieldByIndex(...)
  if v3 ~= nil and v3.fieldDimensions ~= nil then
    local v4 = getNumOfChildren(v3.fieldDimensions)
    if resetState ~= nil then
      -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000008 -> L47
    end
    if v3.farmland.id ~= nil then
      v6:onFarmlandStateChanged(v3.farmland.id, FarmlandManager.NO_OWNER_FARM_ID)
      local v8 = tonumber(fieldIndex)
      self:debugUncoverField(...)
    end
    -- TODO: structure LOP_FORNPREP (pc 50, target 73)
    local v8, v9, v10, v11, v12, v13 = self:getCoordsFromFieldDimensions(v3.fieldDimensions, 1 - 1)
    v14:updateCropSensorArea(v8, v9, v10, v11, v12, v13, true, false)
    -- TODO: structure LOP_FORNLOOP (pc 72, target 51)
    -- TODO: structure LOP_FORNPREP (pc 76, target 123)
    v8, v9, v10, v11, v12, v13 = self:getCoordsFromFieldDimensions(v3.fieldDimensions, 1 - 1)
    v14:updateSprayArea(v8, v9, v10, v11, v12, v13, SprayType.LIME, true, 0)
    v14:updateSprayArea(v8, v9, v10, v11, v12, v13, SprayType.FERTILIZER, SprayType.FERTILIZER, true, 0, 0, 0, 1)
    -- TODO: structure LOP_FORNLOOP (pc 122, target 77)
    -- TODO: structure LOP_FORNPREP (pc 126, target 172)
    v8, v9, v10, v11, v12, v13 = self:getCoordsFromFieldDimensions(v3.fieldDimensions, 1 - 1)
    v14:postUpdateSprayArea(v8, v9, v10, v11, v12, v13, SprayType.LIME, SprayType.LIME, true, 0)
    v14:postUpdateSprayArea(v8, v9, v10, v11, v12, v13, SprayType.FERTILIZER, SprayType.FERTILIZER, true, 0)
    -- TODO: structure LOP_FORNLOOP (pc 171, target 127)
  end
  v4:updatePrecisionFarmingOverlays()
end
function CoverMap.getCoordsFromFieldDimensions(v0, v1, v2)
  local v3 = getChildAt(v1, v2)
  local v4 = getChildAt(v3, 0)
  local v5 = getChildAt(v3, 1)
  local v6, v7, v8 = getWorldTranslation(v4)
  local v9, v10, v11 = getWorldTranslation(v3)
  local v12, v13, v14 = getWorldTranslation(v5)
  return v6, v8, v9, v11, v12, v14
end
function CoverMap:debugUncoverField(fieldIndex)
  local v4 = tonumber(fieldIndex)
  local v2 = v2:getFieldByIndex(...)
  if v2 ~= nil and v2.fieldDimensions ~= nil then
    local v3 = getNumOfChildren(v2.fieldDimensions)
    -- TODO: structure LOP_FORNPREP (pc 23, target 54)
    local v7, v8, v9, v10, v11, v12 = self:getCoordsFromFieldDimensions(v2.fieldDimensions, 1 - 1)
    local v22 = v22:getFarmlandOwner(v2.farmland.id)
    self:analyseArea(v7, v8, v9, v10, v11, v12, nil, v22, v2.farmland.id)
    -- TODO: structure LOP_FORNLOOP (pc 53, target 24)
    self:uncoverAnalysedArea()
  end
end
function CoverMap:debugUncoverAll()
  -- TODO: structure LOP_FORNPREP (pc 5, target 11)
  self:debugUncoverField(1)
  -- TODO: structure LOP_FORNLOOP (pc 10, target 6)
end
