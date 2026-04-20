-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PHMap = {MOD_NAME = g_currentModName, NUM_BITS = 5}
local PHMap_mt = Class(PHMap, ValueMap)
function PHMap.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.name = "pHMap"
  v2.id = "PH_MAP"
  v2.label = "ui_mapOverviewPH"
  v2.densityMapModifiersInitialize = {}
  v2.densityMapModifiersHarvest = {}
  v2.densityMapModifiersSpray = {}
  v2.densityMapModifiersResetLock = {}
  v2.densityMapModifiersFieldInfo = {}
  v2.lastActualValue = -1
  v2.lastTargetValue = -1
  v2.lastRegularValue = -1
  local v4 = GuiUtils.getUVs({194, 11, 252, 12})
  v2.minimapGradientUVs = {}
  v4 = GuiUtils.getUVs({194, 43, 252, 12})
  v2.minimapGradientColorBlindUVs = {}
  local v3 = v3:getText("ui_mapOverviewPH", PHMap.MOD_NAME)
  v2.minimapLabelName = v3
  return v2
end
function PHMap:initialize()
  local v2 = v2:superClass()
  v2.initialize(self)
  self.densityMapModifiersInitialize = {}
  self.densityMapModifiersHarvest = {}
  self.densityMapModifiersSpray = {}
  self.densityMapModifiersResetLock = {}
  self.densityMapModifiersFieldInfo = {}
  self.lastActualValue = -1
  self.lastTargetValue = -1
  self.lastRegularValue = -1
end
function PHMap:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  local v7 = getXMLInt(xmlFile, key .. ".pHMap" .. ".bitVectorMap#firstChannel")
  self.firstChannel = v7 or 1
  v7 = getXMLInt(xmlFile, key .. ".pHMap" .. ".bitVectorMap#numChannels")
  self.numChannels = v7 or 4
  local v6 = getXMLInt(xmlFile, key .. ".pHMap" .. ".bitVectorMap#maxValue")
  if not v6 then
  end
  self.maxValue = v6
  self.sizeX = 1024
  self.sizeY = 1024
  v6, v7 = self:loadSavedBitVectorMap("phMap", "precisionFarming_phMap.grle", self.numChannels, self.sizeX)
  self.bitVectorMap = v6
  self.newBitVectorMap = v7
  self:addBitVectorMapToSync(self.bitVectorMap)
  self:addBitVectorMapToSave(self.bitVectorMap, "precisionFarming_phMap.grle")
  self:addBitVectorMapToDelete(self.bitVectorMap)
  v6 = getXMLString(xmlFile, key .. ".noiseMap#filename")
  self.noiseFilename = v6
  v7 = getXMLInt(xmlFile, key .. ".noiseMap#numChannels")
  self.noiseNumChannels = v7 or 2
  v7 = getXMLInt(xmlFile, key .. ".noiseMap#resolution")
  self.noiseResolution = v7 or 1024
  self.noiseMaxValue = 2 ^ self.noiseNumChannels - 1
  v6 = createBitVectorMap("pHNoiseMap")
  self.bitVectorMapNoise = v6
  if self.noiseFilename ~= nil then
    v6 = Utils.getFilename(self.noiseFilename, baseDirectory)
    self.noiseFilename = v6
    v6 = loadBitVectorMapFromFile(self.bitVectorMapNoise, self.noiseFilename, self.noiseNumChannels)
    if not v6 then
      Logging.xmlWarning(configFileName, "Error while loading pH noise map '%s'", self.noiseFilename)
      self.noiseFilename = nil
    end
  end
  if self.noiseFilename == nil then
    loadBitVectorMapNew(self.bitVectorMapNoise, self.noiseResolution, self.noiseResolution, self.noiseNumChannels, false)
  end
  self:addBitVectorMapToDelete(self.bitVectorMapNoise)
  v6 = self:loadSavedBitVectorMap("pHLockStateMap", "precisionFarming_pHLockStateMap.grle", 2, self.noiseResolution)
  self.bitVectorMapPHStateChange = v6
  self:addBitVectorMapToSave(self.bitVectorMapPHStateChange, "precisionFarming_pHLockStateMap.grle")
  self:addBitVectorMapToDelete(self.bitVectorMapPHStateChange)
  v6 = self:loadSavedBitVectorMap("pHInitMaskMap", "pHInitMaskMap.grle", 1, self.noiseResolution)
  self.bitVectorMapPHInitMask = v6
  self:addBitVectorMapToDelete(self.bitVectorMapPHInitMask)
  local v9 = getXMLString(xmlFile, key .. ".texts#outdatedLabel")
  v6 = v6:convertText(v9 or "$l10n_ui_precisionFarming_outdatedData", PHMap.MOD_NAME)
  self.outdatedLabel = v6
  self.pHValues = {}
  self.pHValuesToDisplay = {}
  while true do
    v7 = string.format("%s.pHValues.pHValue(%d)", key, v6)
    v8 = hasXMLProperty(xmlFile, v7)
    if not v8 then
      break
    end
    v10 = getXMLInt(xmlFile, v7 .. "#value")
    v10 = getXMLFloat(xmlFile, v7 .. "#realValue")
    v10 = getXMLString(xmlFile, v7 .. "#color")
    v9 = string.getVectorN(v10, 3)
    if not v9 then
    end
    v8.color = v9
    v10 = getXMLString(xmlFile, v7 .. "#colorBlind")
    v9 = string.getVectorN(v10, 3)
    if not v9 then
    end
    v8.colorBlind = v9
    v10 = getXMLBool(xmlFile, v7 .. "#showOnHud")
    v9 = Utils.getNoNil(v10, true)
    v8.showOnHud = v9
    table.insert(self.pHValues, v8)
    if v8.showOnHud then
      if 0 < #self.pHValuesToDisplay then
        self.pHValuesToDisplay[#self.pHValuesToDisplay].maxDisplayValue = v8.value - 1
      end
      table.insert(self.pHValuesToDisplay, v8)
    end
  end
  v8 = getXMLFloat(xmlFile, key .. ".pHValues#pHValuePerState")
  self.pHValuePerState = v8 or 0.125
  self.valueTransformations = {}
  while true do
    v7 = string.format("%s.valueTransformations.valueTransformation(%d)", key, v6)
    v8 = hasXMLProperty(xmlFile, v7)
    if not v8 then
      break
    end
    v10 = getXMLInt(xmlFile, v7 .. "#soilTypeIndex")
    v10 = getXMLString(xmlFile, v7 .. ".baseValue#range")
    v9 = string.getVectorN(v10, self.noiseMaxValue + 1)
    if {soilTypeIndex = v10 or 1, baseRange = v9}.baseRange ~= nil then
      v10 = getXMLInt(xmlFile, v7 .. ".optimalValue#value")
      v10 = getXMLInt(xmlFile, v7 .. ".decreasePerHarvest#value")
      v10 = getXMLFloat(xmlFile, v7 .. ".regularOffset#value")
      table.insert(self.valueTransformations, {soilTypeIndex = v10 or 1, baseRange = v9, optimalValue = v10 or 1, decreasePerHarvest = v10 or 1, regularOffset = v10 or 1})
    else
      Logging.xmlWarning(configFileName, "Invalid base pH range for '%s'", v7)
    end
  end
  v8 = getXMLFloat(xmlFile, key .. ".valueTransformations#regularUsage")
  self.regularLimeUsage = v8 or 3000
  v7 = AnimCurve.new(linearInterpolator1)
  self.yieldCurve = v7
  while true do
    v7 = string.format("%s.yieldMappings.yieldMapping(%d)", key, v6)
    v8 = hasXMLProperty(xmlFile, v7)
    if not v8 then
      break
    end
    v9 = getXMLInt(xmlFile, v7 .. "#levelDifference")
    v10 = getXMLFloat(xmlFile, v7 .. "#yieldFactor")
    v10:addKeyframe({v10 or 1, time = v9 or 0})
  end
  self.levelDifferenceColors = {}
  while true do
    v7 = string.format("%s.levelDifferenceColors.levelDifferenceColor(%d)", key, v6)
    v8 = hasXMLProperty(xmlFile, v7)
    if not v8 then
      break
    end
    v10 = getXMLInt(xmlFile, v7 .. "#levelDifference")
    v10 = getXMLString(xmlFile, v7 .. "#color")
    v9 = string.getVectorN(v10, 3)
    if not v9 then
    end
    v8.color = v9
    v10 = getXMLString(xmlFile, v7 .. "#colorBlind")
    v9 = string.getVectorN(v10, 3)
    if not v9 then
    end
    v8.colorBlind = v9
    v8.color[4] = 1
    v8.colorBlind[4] = 1
    v11 = getXMLString(xmlFile, v7 .. "#text")
    v9 = v9:convertText(v11, PHMap.MOD_NAME)
    v8.additionalText = v9
    table.insert(self.levelDifferenceColors, v8)
  end
  self.limeUsage = {}
  v9 = getXMLFloat(xmlFile, key .. ".limeUsage#usagePerState")
  self.limeUsage.usagePerState = v9 or 730
  v9 = self:getMinMaxValue()
  v7 = string.format(...)
  self.minimapGradientLabelName = v7
  self.coverMap = g_precisionFarming.coverMap
  self.soilMap = g_precisionFarming.soilMap
  return true
end
function PHMap:setInitialState(soilBitVector, soilTypeFirstChannel, soilTypeNumChannels, coverChannel, farmlandMask)
  if self.densityMapModifiersInitialize.modifier ~= nil and self.densityMapModifiersInitialize.soilFilter ~= nil and self.densityMapModifiersInitialize.noiseFilter ~= nil and self.densityMapModifiersInitialize.pHInitModifier ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x80000000 -> L113
  end
  local v12 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersInitialize.modifier = v12
  v12 = DensityMapFilter.new(soilBitVector, soilTypeFirstChannel, soilTypeNumChannels)
  self.densityMapModifiersInitialize.soilFilter = v12
  v12 = DensityMapFilter.new(self.bitVectorMapNoise, 0, self.noiseNumChannels)
  self.densityMapModifiersInitialize.noiseFilter = v12
  v12 = DensityMapModifier.new(self.bitVectorMapPHInitMask, 0, 1)
  self.densityMapModifiersInitialize.pHInitModifier = v12
  v12 = DensityMapFilter.new(self.bitVectorMapPHInitMask, 0, 1)
  self.densityMapModifiersInitialize.pHInitMaskFilter = v12
  self.densityMapModifiersInitialize.pHInitMaskFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
  -- TODO: structure LOP_FORNPREP (pc 118, target 175)
  self.densityMapModifiersInitialize.soilFilter:setValueCompareParams(DensityValueCompareType.EQUAL, self.valueTransformations[1].soilTypeIndex - 1)
  if farmlandMask ~= nil then
    self.densityMapModifiersInitialize.pHInitModifier:executeSet(0)
    self.densityMapModifiersInitialize.pHInitModifier:executeSet(1, self.densityMapModifiersInitialize.soilFilter, farmlandMask)
  end
  for v17 = 1, self.noiseMaxValue + 1 do
    v8:setValueCompareParams(DensityValueCompareType.EQUAL, v17 - 1)
    if farmlandMask ~= nil then
      v6:executeSet(v14.baseRange[v17], v10, v8)
    else
      v6:executeSet(v14.baseRange[v17], v7, v8)
    end
    -- TODO: structure LOP_FORNLOOP (pc 173, target 148)
  end
  self:setMinimapRequiresUpdate(true)
end
function PHMap:onHarvestCoverUpdate(fruitFilter, harvestLockFilter, fruitIndex, fruitUsed, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, useMinForageState)
  if fruitUsed and self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    if self.densityMapModifiersHarvest.modifier ~= nil and self.densityMapModifiersHarvest.modifierTempLock ~= nil and self.densityMapModifiersHarvest.tempLockFilter ~= nil and self.densityMapModifiersHarvest.soilFilter ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R16 aux=0x80000000 -> L144
    end
    local v19 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
    self.densityMapModifiersHarvest.modifier = v19
    self.densityMapModifiersHarvest.modifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
    v19 = DensityMapFilter.new(v12.bitVectorMap, v12.typeFirstChannel, v12.typeNumChannels)
    self.densityMapModifiersHarvest.soilFilter = v19
    v19 = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
    self.densityMapModifiersHarvest.phFilter = v19
    self.densityMapModifiersHarvest.phFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 2, self.maxValue)
    v19 = DensityMapModifier.new(self.bitVectorMapPHStateChange, 0, 1)
    self.densityMapModifiersHarvest.modifierTempLock = v19
    self.densityMapModifiersHarvest.modifierTempLock:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
    v19 = DensityMapFilter.new(self.bitVectorMapPHStateChange, 0, 1)
    self.densityMapModifiersHarvest.tempLockFilter = v19
    self.densityMapModifiersHarvest.tempLockFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
    self.densityMapModifiersHarvest.modifier:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    self.densityMapModifiersHarvest.modifierTempLock:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    -- TODO: structure LOP_FORNPREP (pc 172, target 226)
    self.densityMapModifiersHarvest.soilFilter:setValueCompareParams(DensityValueCompareType.EQUAL, self.valueTransformations[1].soilTypeIndex - 1)
    self.densityMapModifiersHarvest.modifierTempLock:executeSet(1, fruitFilter, harvestLockFilter)
    local v23, v24, v25 = self.densityMapModifiersHarvest.modifier:executeAdd(-self.valueTransformations[1].decreasePerHarvest, self.densityMapModifiersHarvest.tempLockFilter, self.densityMapModifiersHarvest.soilFilter, self.densityMapModifiersHarvest.phFilter)
    if 0 < v24 then
      self.lastActualValue = v23 / v24
      self.lastTargetValue = self.valueTransformations[1].optimalValue
      self.lastRegularValue = self.valueTransformations[1].optimalValue - self.valueTransformations[1].decreasePerHarvest * 1.5 * self.valueTransformations[1].regularOffset
    end
    v14:executeSet(0)
    -- TODO: structure LOP_FORNLOOP (pc 225, target 173)
    if v18 then
      self:setMinimapRequiresUpdate(true)
    end
    return v18
  end
  return false
end
function PHMap:updateSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, sprayTypeIndex, automaticallyAdjusted, manualSprayRate)
  if self.coverMap ~= nil and self.coverMap.bitVectorMap ~= nil and self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    local v12 = v12:getSprayTypeByIndex(sprayTypeIndex)
    if v12 ~= nil and v12.isLime then
      if self.densityMapModifiersSpray.modifier ~= nil and self.densityMapModifiersSpray.soilFilter ~= nil and self.densityMapModifiersSpray.phFilter ~= nil and self.densityMapModifiersSpray.maskFilter ~= nil and self.densityMapModifiersSpray.modifierLock ~= nil and self.densityMapModifiersSpray.lockFilter ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R19 aux=0x80000000 -> L218
      end
      local v21 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
      self.densityMapModifiersSpray.modifier = v21
      self.densityMapModifiersSpray.modifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
      v21 = DensityMapFilter.new(v11.bitVectorMap, v11.typeFirstChannel, v11.typeNumChannels)
      self.densityMapModifiersSpray.soilFilter = v21
      v21 = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
      self.densityMapModifiersSpray.phFilter = v21
      v21 = DensityMapFilter.new(v10.bitVectorMap, v10.firstChannel, v10.numChannels)
      self.densityMapModifiersSpray.maskFilter = v21
      self.densityMapModifiersSpray.maskFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, v10.maxValue)
      v21 = DensityMapModifier.new(self.bitVectorMapPHStateChange, 1, 1)
      self.densityMapModifiersSpray.modifierLock = v21
      self.densityMapModifiersSpray.modifierLock:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
      v21 = DensityMapFilter.new(self.bitVectorMapPHStateChange, 1, 1)
      self.densityMapModifiersSpray.lockFilter = v21
      self.densityMapModifiersSpray.lockFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
      local v21, v22, v23 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
      local v25 = DensityMapFilter.new(v21, v22, v23)
      self.densityMapModifiersSpray.sprayTypeFilter = v25
      self.densityMapModifiersSpray.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      self.densityMapModifiersSpray.modifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
      self.densityMapModifiersSpray.maskFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, v10.maxValue)
      local v20, v21, v22 = self.densityMapModifiersSpray.modifier:executeGet(self.densityMapModifiersSpray.maskFilter)
      if v21 == 0 and automaticallyAdjusted then
      end
      if automaticallyAdjusted then
        -- TODO: structure LOP_FORNPREP (pc 298, target 457)
        v14:setValueCompareParams(DensityValueCompareType.EQUAL, self.valueTransformations[1].soilTypeIndex - 1)
        v15:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, self.valueTransformations[1].optimalValue - 1)
        local v33, v34, v35 = v13:executeSet(self.valueTransformations[1].optimalValue, v14, v15, v16)
        if 0 < v34 then
        end
        -- TODO: structure LOP_FORNLOOP (pc 344, target 299)
      else
        v17:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
        v19:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, v12.sprayGroundType - 1)
        v17:executeSet(0, v19)
        v19:setValueCompareParams(DensityValueCompareType.GREATER, v12.sprayGroundType)
        v17:executeSet(0, v19)
        v19:setValueCompareParams(DensityValueCompareType.EQUAL, v12.sprayGroundType)
        v17:executeSet(1, v19)
        if 0 < v21 then
          v16:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, 1)
          v17:executeSet(1, v16)
        end
        local v29, v30 = v13:executeGet(v18)
        if 0 < v30 then
          local v32 = math.min(manualSprayRate, self.maxValue - v29 / v30)
          if 0 < v32 then
            v15:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, self.maxValue - v32)
            v13:executeAdd(v32, v18, v15)
            if v21 == 0 then
            end
          end
        end
      end
      if 0 < v25 then
        v29 = math.floor(v26 / v25)
        v29 = math.floor(v27 / v25)
        self:setMinimapRequiresUpdate(true)
      end
      return v23, v24, v26, v27, v28, automaticallyAdjusted
    end
  end
  return 0
end
function PHMap:postUpdateSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, sprayTypeIndex, automaticallyAdjusted, manualSprayRate)
  if self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    local v11 = v11:getSprayTypeByIndex(sprayTypeIndex)
    if v11 ~= nil and v11.isLime and self.densityMapModifiersSpray.modifierLock ~= nil and self.densityMapModifiersSpray.sprayTypeFilter ~= nil and not automaticallyAdjusted then
      self.densityMapModifiersSpray.modifierLock:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
      self.densityMapModifiersSpray.modifierLock:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
      self.densityMapModifiersSpray.modifierLock:executeSet(0)
      self.densityMapModifiersSpray.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.EQUAL, v11.sprayGroundType)
      self.densityMapModifiersSpray.modifierLock:executeSet(1, self.densityMapModifiersSpray.sprayTypeFilter)
    end
  end
  return 0
end
function PHMap:getLevelAtWorldPos(x, z)
  local v3 = v3:getIsUncoveredAtBitVectorPos((x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeX, (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeY)
  if v3 then
    v3 = getBitVectorMapPoint(self.bitVectorMap, (x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeX, (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeY, self.firstChannel, self.numChannels)
    return v3
  end
  return 0
end
function PHMap:getLimeUsage(workingWidth, lastSpeed, statesChanged, dt)
  local literPerHectar = self:getLimeUsageByStateChange(statesChanged)
  return literPerHectar * lastSpeed / 3600 / 10000 / workingWidth * dt, literPerHectar, self.regularLimeUsage * lastSpeed / 3600 / 10000 / workingWidth * dt
end
function PHMap:getLimeUsageByStateChange(statesChanged)
  return self.limeUsage.usagePerState * statesChanged
end
function PHMap:getPhValueFromChangedStates(statesChanged)
  return statesChanged * self.pHValuePerState
end
function PHMap:getPhValueFromInternalValue(internal)
  -- TODO: structure LOP_FORNPREP (pc 5, target 22)
  local v7 = math.floor(internal)
  if self.pHValues[1].value == v7 then
    return self.pHValues[1].realValue
  end
  -- TODO: structure LOP_FORNLOOP (pc 21, target 6)
  return 0
end
function PHMap:getNearestPhValueFromValue(value)
  if 0 < value then
    -- TODO: structure LOP_FORNPREP (pc 10, target 26)
    local v8 = math.abs(value - self.pHValues[1].realValue)
    if v8 < 100 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 25, target 11)
  end
  return v3
end
function PHMap:getOptimalPHValueForSoilTypeIndex(soilTypeIndex)
  -- TODO: structure LOP_FORNPREP (pc 5, target 17)
  if self.valueTransformations[1].soilTypeIndex == soilTypeIndex then
    return self.valueTransformations[1].optimalValue
  end
  -- TODO: structure LOP_FORNLOOP (pc 16, target 6)
  return 0
end
function PHMap:getMinMaxValue()
  if 0 < #self.pHValues then
    return self.pHValues[1].realValue, self.pHValues[#self.pHValues].realValue, #self.pHValues
  end
  return 0, 1, 0
end
function PHMap:updateLastPhValues()
  self.lastActualValue = -1
  self.lastTargetValue = -1
  self.lastRegularValue = -1
  return self.lastActualValue, self.lastTargetValue, self.lastRegularValue
end
function PHMap:getYieldFactorByLevelDifference(difference)
  return v2:get(difference)
end
function PHMap:buildOverlay(overlay, filter, isColorBlindMode, isMinimap)
  resetDensityMapVisualizationOverlay(overlay)
  setOverlayColor(overlay, 1, 1, 1, 1)
  if self.coverMap ~= nil then
    local v6 = bitShiftLeft(2 ^ (self.coverMap.numChannels - 1) - 1, 1)
    -- TODO: structure LOP_FORNPREP (pc 31, target 92)
    if filter[1] then
      if isColorBlindMode then
      end
      if v10.value ~= v10.maxDisplayValue then
        -- TODO: structure LOP_FORNPREP (pc 53, target 91)
        setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMap, v5.bitVectorMap, v6, self.firstChannel, self.numChannels, v10.value, v11[1], v11[2], v11[3])
        -- TODO: structure LOP_FORNLOOP (pc 71, target 54)
      else
        setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMap, v5.bitVectorMap, v6, self.firstChannel, self.numChannels, v10.value, v11[1], v11[2], v11[3])
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 91, target 32)
  end
end
function PHMap:getDisplayValues()
  if self.valuesToDisplay == nil then
    self.valuesToDisplay = {}
    -- TODO: structure LOP_FORNPREP (pc 13, target 60)
    {colors = {}}.colors[true] = {self.pHValuesToDisplay[1].colorBlind}
    {colors = {}}.colors[false] = {self.pHValuesToDisplay[1].color}
    local v6 = string.format("%.2f", self.pHValuesToDisplay[1].realValue)
    table.insert(self.valuesToDisplay, {colors = {}, description = v6})
    -- TODO: structure LOP_FORNLOOP (pc 59, target 14)
    {colors = {}}.colors[true] = {{0, 0, 0}}
    {colors = {}}.colors[false] = {{0, 0, 0}}
    table.insert(self.valuesToDisplay, {colors = {}, description = self.outdatedLabel})
  end
  return self.valuesToDisplay
end
function PHMap:getValueFilter()
  if self.valueFilter ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L43
  end
  self.valueFilter = {}
  self.valueFilterEnabled = {}
  -- TODO: structure LOP_FORNPREP (pc 22, target 43)
  table.insert(self.valueFilter, true)
  if 1 > #self.pHValuesToDisplay then
  end
  table.insert(v6, true)
  -- TODO: structure LOP_FORNLOOP (pc 42, target 23)
  return self.valueFilter, self.valueFilterEnabled
end
function PHMap.getMinimapZoomFactor(v0)
  return 3
end
function PHMap:collectFieldInfos(fieldInfoDisplayExtension)
  local v2 = v2:getText("fieldInfo_phValue", PHMap.MOD_NAME)
  fieldInfoDisplayExtension:addFieldInfo(v2, self, self.updateFieldInfoDisplay, 2, self.getFieldInfoYieldChange)
end
function PHMap.getAllowCoverage(v0)
  return true
end
function PHMap.getHelpLinePage(v0)
  return 4
end
function PHMap:getRequiresAdditionalActionButton(farmlandId)
  if self.soilMap ~= nil then
    return v2:getRequiresAdditionalActionButton(farmlandId)
  end
  return false
end
function PHMap:getAdditionalActionButtonText()
  if self.soilMap ~= nil then
    return v1:getAdditionalActionButtonText()
  end
end
function PHMap:onAdditionalActionButtonPressed(farmlandId)
  if self.soilMap ~= nil then
    return v2:onAdditionalActionButtonPressed(farmlandId)
  end
end
function PHMap:updateFieldInfoDisplay(fieldInfo, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, isColorBlindMode)
  fieldInfo.pHFactor = 0
  if self.coverMap ~= nil and self.coverMap.bitVectorMap ~= nil and self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    if self.densityMapModifiersFieldInfo.modifier ~= nil and self.densityMapModifiersFieldInfo.soilModifier ~= nil and self.densityMapModifiersFieldInfo.coverFilter ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x80000000 -> L119
    end
    local v16 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
    self.densityMapModifiersFieldInfo.modifier = v16
    v16 = DensityMapModifier.new(v10.bitVectorMap, v10.typeFirstChannel, v10.typeNumChannels)
    self.densityMapModifiersFieldInfo.soilModifier = v16
    v16 = DensityMapFilter.new(v9.bitVectorMap, v9.firstChannel, v9.numChannels)
    self.densityMapModifiersFieldInfo.coverFilter = v16
    self.densityMapModifiersFieldInfo.coverFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, v9.maxValue)
    v16 = DensityMapFilter.new(v10.bitVectorMap, v10.typeFirstChannel, v10.typeNumChannels)
    self.densityMapModifiersFieldInfo.soilFilter = v16
    self.densityMapModifiersFieldInfo.modifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
    self.densityMapModifiersFieldInfo.soilModifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
    local v15, v16, v17 = self.densityMapModifiersFieldInfo.soilModifier:executeGet(self.densityMapModifiersFieldInfo.coverFilter)
    local v19 = math.floor(v15 / v16)
    -- TODO: structure LOP_FORNPREP (pc 196, target 282)
    if self.valueTransformations[1].soilTypeIndex == v19 + 1 then
      self.densityMapModifiersFieldInfo.soilFilter:setValueCompareParams(DensityValueCompareType.EQUAL, v19 + 1 - 1)
      local v23, v24, v25 = self.densityMapModifiersFieldInfo.modifier:executeGet(self.densityMapModifiersFieldInfo.coverFilter, self.densityMapModifiersFieldInfo.soilFilter)
      if 0 < v24 then
        v23 = math.floor(v23 / v24)
        local v26 = math.abs(self.valueTransformations[1].optimalValue - v23)
        -- TODO: structure LOP_FORNPREP (pc 240, target 257)
        if self.levelDifferenceColors[1].levelDifference <= v26 then
          if isColorBlindMode then
          else
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 256, target 241)
        local v27 = self:getYieldFactorByLevelDifference(v23 - v22.optimalValue)
        fieldInfo.pHFactor = v27
        local v29 = self:getPhValueFromInternalValue(v23)
        local v30 = self:getPhValueFromInternalValue(v22.optimalValue)
        v27 = string.format(...)
        return v27, v24, v25
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 281, target 197)
  end
  return nil
end
function PHMap.getFieldInfoYieldChange(v0, v1)
  return v1.pHFactor or 0, 0.2
end
function PHMap:drawYieldDebug(pHActualValue, pHTargetValue)
  if self.debugGraph == nil then
    local v3 = Graph.new(#self.yieldCurve.keyframes, 0.45, 0.05, 0.2, 0.15, 0, 100, false, "%", Graph.STYLE_LINES)
    self.debugGraph = v3
    v3:setHorizontalLine(10, true, 1, 1, 1, 1)
    v3:setVerticalLine(0.1, false, 1, 1, 1, 1)
    v3:setColor(0, 1, 0, 1)
  end
  -- TODO: structure LOP_FORNPREP (pc 67, target 106)
  local v9 = v9:get(self.yieldCurve.keyframes[1].time)
  v10:setValue(1, v9 * 100)
  local v10 = math.min(self.yieldCurve.keyframes[1].time, math.huge)
  v10 = math.max(self.yieldCurve.keyframes[1].time, -math.huge)
  -- TODO: structure LOP_FORNLOOP (pc 105, target 68)
  v5:draw()
  if v10 ~= math.huge then
    local v8 = MathUtil.inverseLerp(v10, v10, pHActualValue - pHTargetValue)
    setOverlayColor(self.debugGraph.overlayHLine, 1, 0, 0, 1)
    renderOverlay(self.debugGraph.overlayHLine, self.debugGraph.left + v8 * self.debugGraph.width, self.debugGraph.bottom, 1 / g_screenWidth, self.debugGraph.height)
    setOverlayColor(self.debugGraph.overlayHLine, 1, 1, 1, 1)
  end
end
function PHMap.overwriteGameFunctions(v0, v1)
  local v3 = v3:superClass()
  v3.overwriteGameFunctions(v0, v1)
end
