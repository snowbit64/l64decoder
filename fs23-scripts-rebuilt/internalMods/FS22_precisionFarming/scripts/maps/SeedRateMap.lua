-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SeedRateMap = {MOD_NAME = g_currentModName}
local SeedRateMap_mt = Class(SeedRateMap, ValueMap)
function SeedRateMap.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.filename = "precisionFarming_seedRateMap.grle"
  v2.name = "seedRateMap"
  v2.id = "SEED_RATE_MAP"
  v2.label = "ui_mapOverviewSeedRate"
  v2.texts = {}
  local v4 = v4:getText("ui_cropName", SeedRateMap.MOD_NAME)
  v2.texts.cropNameHeader = v4
  v4 = v4:getText("ui_soilType_1", SeedRateMap.MOD_NAME)
  v2.texts.cropType1 = v4
  v4 = v4:getText("ui_soilType_2", SeedRateMap.MOD_NAME)
  v2.texts.cropType2 = v4
  v4 = v4:getText("ui_soilType_3", SeedRateMap.MOD_NAME)
  v2.texts.cropType3 = v4
  v4 = v4:getText("ui_soilType_4", SeedRateMap.MOD_NAME)
  v2.texts.cropType4 = v4
  v2.densityMapModifiersSeedUpdate = {}
  v2.densityMapModifiersHarvest = {}
  return v2
end
function SeedRateMap:initialize()
  local v2 = v2:superClass()
  v2.initialize(self)
  self.densityMapModifiersSeedUpdate = {}
  self.densityMapModifiersHarvest = {}
end
function SeedRateMap:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  local v7 = getXMLInt(xmlFile, key .. ".seedRateMap" .. ".bitVectorMap#numChannels")
  self.numChannels = v7 or 2
  self.maxValue = 2 ^ self.numChannels - 1
  v7 = getXMLInt(xmlFile, key .. ".seedRateMap" .. ".bitVectorMap#sizeX")
  self.sizeX = v7 or 1024
  v7 = getXMLInt(xmlFile, key .. ".seedRateMap" .. ".bitVectorMap#sizeY")
  self.sizeY = v7 or 1024
  local v6 = self:loadSavedBitVectorMap("SeedRateMap", self.filename, self.numChannels, self.sizeX)
  self.bitVectorMap = v6
  if 64 < g_maxModDescVersion then
    self:addBitVectorMapToSync(self.bitVectorMap)
  end
  self:addBitVectorMapToSave(self.bitVectorMap, self.filename)
  self:addBitVectorMapToDelete(self.bitVectorMap)
  self.rateValues = {}
  while true do
    v7 = string.format("%s.rateValues.rateValue(%d)", key, v6)
    v8 = hasXMLProperty(xmlFile, v7)
    if not v8 then
      break
    end
    v10 = getXMLInt(xmlFile, v7 .. "#value")
    v11 = getXMLString(xmlFile, v7 .. "#text")
    v9 = v9:convertText(v11, SeedRateMap.MOD_NAME)
    v10 = getXMLString(xmlFile, v7 .. "#color")
    v9 = string.getVectorN(v10, 3)
    if not v9 then
    end
    v8.color = v9
    v10 = getXMLString(xmlFile, v7 .. "#colorBlind")
    v9 = string.getVectorN(v10, 3)
    v8.colorBlind = v9
    table.insert(self.rateValues, v8)
  end
  v7 = MathUtil.round(#self.rateValues * 0.5)
  self.defaultSeedRate = v7
  self.fruitTypes = {}
  self:loadFruitTypeSeedRatesFromXML(xmlFile, key)
  v8 = Utils.getFilename(g_currentMission.missionInfo.mapXMLFilename, g_currentMission.baseDirectory)
  v9 = loadXMLFile("MapXML", v8)
  if v9 ~= nil then
    self:loadFruitTypeSeedRatesFromXML(v9, "map.precisionFarming.seedRateMap")
    delete(v9)
  end
  return true
end
function SeedRateMap:loadFruitTypeSeedRatesFromXML(xmlFile, key)
  while true do
    v4 = string.format("%s.fruitTypes.fruitType(%d)", key, v3)
    v5 = hasXMLProperty(xmlFile, v4)
    if not v5 then
      break
    end
    v5 = getXMLString(xmlFile, v4 .. "#name")
    if v5 ~= nil then
      v6 = v6:getFruitTypeByName(v5)
      if v6 ~= nil then
        v8 = self:getRateValues(xmlFile, v4 .. ".seedRates#rates", #self.rateValues)
        v8 = self:getRateValues(xmlFile, v4 .. ".seedRates#usages", #self.rateValues)
        if {index = v6.index, seedRates = v8, seedUsages = v8}.seedRates ~= nil then
          -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L153
          while true do
            v9 = string.format("%s.soilTypes.soilType(%d)", v4, v8)
            v10 = hasXMLProperty(xmlFile, v9)
            if not v10 then
              break
            end
            v12 = getXMLInt(xmlFile, v9 .. "#index")
            v11 = self:getRateValues(xmlFile, v9 .. "#yields", #self.rateValues)
            if {index = v12 or 1, yields = v11}.yields ~= nil then
              -- TODO: structure LOP_FORNPREP (pc 122, target 134)
              if 0 < {index = v12 or 1, yields = v11, bestYieldIndex = nil}.yields[1] then
              end
              -- TODO: structure LOP_FORNLOOP (pc 133, target 123)
              v7.soilTypes[v10.index] = v10
            else
              Logging.warning("Invalid yield definitions in '%s'", v9)
            end
          end
          self.fruitTypes[v6.index] = v7
        else
          Logging.warning("Invalid seed rates or usages in '%s'", v4)
        end
      end
    end
  end
end
function SeedRateMap.getRateValues(v0, v1, v2, v3)
  local v4 = getXMLString(v1, v2)
  local v5 = v4:split(" ")
  if #v5 == v3 then
    -- TODO: structure LOP_FORNPREP (pc 15, target 22)
    local v9 = tonumber(v5[1])
    v5[1] = v9
    -- TODO: structure LOP_FORNLOOP (pc 21, target 16)
    return v5
  end
  return nil
end
function SeedRateMap:getRateLabelByIndex(index)
  if self.rateValues[index] ~= nil then
    return self.rateValues[index].text
  end
  return "unknown"
end
function SeedRateMap.update(v0, v1)
end
function SeedRateMap:updateSeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, fruitTypeIndex, autoMode, manualSeedRate)
  if self.pfModule.soilMap ~= nil then
    if self.densityMapModifiersSeedUpdate.modifier ~= nil and self.densityMapModifiersSeedUpdate.maskFilter ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x80000000 -> L84
    end
    local v15 = DensityMapModifier.new(self.bitVectorMap, 0, self.numChannels)
    self.densityMapModifiersSeedUpdate.modifier = v15
    local v15, v16, v17 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v19 = DensityMapFilter.new(v15, v16, v17)
    self.densityMapModifiersSeedUpdate.maskFilter = v19
    self.densityMapModifiersSeedUpdate.maskFilter:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v19 = DensityMapFilter.new(v10.bitVectorMap, v10.typeFirstChannel, v10.typeNumChannels)
    self.densityMapModifiersSeedUpdate.soilFilter = v19
    local v14, v15, v16, v17, v18, v19 = u0(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, self.sizeX, g_currentMission.terrainSize)
    self.densityMapModifiersSeedUpdate.modifier:setParallelogramDensityMapCoords(v14, v15, v16, v17, v18, v19, DensityCoordType.POINT_POINT_POINT)
    if self.fruitTypes[fruitTypeIndex] ~= nil then
      if autoMode then
        for v22, v23 in pairs(self.fruitTypes[fruitTypeIndex].soilTypes) do
          if not (v23.bestYieldIndex ~= nil) then
            continue
          end
          v13:setValueCompareParams(DensityValueCompareType.EQUAL, v22 - 1)
          local v24, v25, v26 = v11:executeSet(v23.bestYieldIndex, v12, v13)
        end
        -- if 0 >= v15 then goto L198 end
        v21 = MathUtil.round(v18 / v15)
        return v16 / v15
        -- goto L198  (LOP_JUMP +20)
      end
      v11:executeSet(manualSeedRate, v12)
      return v14.seedUsages[manualSeedRate], v14.seedRates[manualSeedRate], manualSeedRate
    else
      self.densityMapModifiersSeedUpdate.modifier:executeSet(self.defaultSeedRate, self.densityMapModifiersSeedUpdate.maskFilter)
    end
  end
  return 0
end
function SeedRateMap:onHarvestCoverUpdate(fruitFilter, sprayTypeFilter, fruitIndex, fruitUsed, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, useMinForageState)
  if fruitUsed and self.pfModule.soilMap ~= nil and self.pfModule.soilMap.bitVectorMap ~= nil then
    if self.densityMapModifiersHarvest.modifier ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x80000000 -> L61
    end
    local v16 = DensityMapModifier.new(self.bitVectorMap, 0, self.numChannels)
    self.densityMapModifiersHarvest.modifier = v16
    self.densityMapModifiersHarvest.modifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
    v16 = DensityMapFilter.new(v12.bitVectorMap, v12.typeFirstChannel, v12.typeNumChannels)
    self.densityMapModifiersHarvest.soilFilter = v16
    if self.fruitTypes[fruitIndex] ~= nil then
      self.densityMapModifiersHarvest.modifier:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
      for v21, v22 in pairs(self.fruitTypes[fruitIndex].soilTypes) do
        if not (v22.bestYieldIndex ~= nil) then
          continue
        end
        v14:setValueCompareParams(DensityValueCompareType.EQUAL, v21 - 1)
        local v23, v24, v25 = v13:executeGet(v14)
        if not (0 < v24) then
          continue
        end
        local v26 = MathUtil.round(v23 / v24)
        if not (v22.yields[v26] ~= nil) then
          continue
        end
        self.lastSeedRateFound = v26
        self.lastSeedRateTarget = v22.bestYieldIndex
      end
    end
    if 0 < v16 then
    end
    self.lastSeedRateMultiplier = v18
  end
end
function SeedRateMap:updateLastYieldValues()
  self.lastSeedRateMultiplier = nil
  self.lastSeedRateFound = nil
  self.lastSeedRateTarget = nil
  return self.lastSeedRateMultiplier, self.lastSeedRateFound, self.lastSeedRateTarget
end
function SeedRateMap:buildOverlay(overlay, seedRateFilter, isColorBlindMode)
  resetDensityMapVisualizationOverlay(overlay)
  setOverlayColor(overlay, 1, 1, 1, 1)
  -- TODO: structure LOP_FORNPREP (pc 19, target 64)
  if seedRateFilter[1] then
    if isColorBlindMode then
    else
    end
    setDensityMapVisualizationOverlayStateColor(overlay, v4, 0, 0, 0, self.numChannels, v8.value, v9, v10, v11)
  end
  -- TODO: structure LOP_FORNLOOP (pc 63, target 20)
end
function SeedRateMap:getDisplayValues()
  if self.valuesToDisplay == nil then
    self.valuesToDisplay = {}
    -- TODO: structure LOP_FORNPREP (pc 13, target 59)
    if not self.rateValues[1].colorBlind then
    end
    v6[v7] = {v9}
    v5.colors[false] = {v4.color}
    v5.description = v4.text
    table.insert(self.valuesToDisplay, v5)
    -- TODO: structure LOP_FORNLOOP (pc 58, target 14)
  end
  return self.valuesToDisplay
end
function SeedRateMap:getValueFilter()
  if self.valueFilter == nil then
    self.valueFilter = {}
    -- TODO: structure LOP_FORNPREP (pc 13, target 23)
    table.insert(self.valueFilter, true)
    -- TODO: structure LOP_FORNLOOP (pc 22, target 14)
  end
  return self.valueFilter
end
function SeedRateMap.getHelpLinePage(v0)
  return 7
end
function SeedRateMap:getSeedRateByFruitTypeAndIndex(fruitTypeIndex, seedRateIndex)
  if fruitTypeIndex ~= nil and self.fruitTypes[fruitTypeIndex] ~= nil then
    return self.fruitTypes[fruitTypeIndex].seedRates[seedRateIndex]
  end
  return 0
end
function SeedRateMap:getIsFruitTypeSupported(fruitTypeIndex)
  if fruitTypeIndex ~= nil then
    if self.fruitTypes[fruitTypeIndex] == nil then
    end
    return true
  end
  return false
end
function SeedRateMap:getOptimalSeedRateByFruitTypeAndSoiltype(fruitTypeIndex, soilTypeIndex)
  if fruitTypeIndex ~= nil and self.fruitTypes[fruitTypeIndex] ~= nil and self.fruitTypes[fruitTypeIndex].soilTypes[soilTypeIndex] ~= nil then
    return self.fruitTypes[fruitTypeIndex].soilTypes[soilTypeIndex].bestYieldIndex
  end
  return nil
end
function SeedRateMap:createHelpMenuSeedRateTableRow(contentBox, template, isHeader, cropName, text1, text2, text3, text4)
  local row = template:clone(contentBox)
  if self.rowIndex % 2 == 0 then
    row:applyProfile("precisionFarmingSeedRateRowBackgroundAlternate")
  end
  if isHeader then
    local v10 = row:getDescendantByName("cropName")
    v10:applyProfile("precisionFarmingSeedRateRowVehicleCellHeader")
    v10 = row:getDescendantByName("soil1")
    v10:applyProfile("precisionFarmingSeedRateRowAttributeCellHeader")
    v10 = row:getDescendantByName("soil2")
    v10:applyProfile("precisionFarmingSeedRateRowAttributeCellHeader")
    v10 = row:getDescendantByName("soil3")
    v10:applyProfile("precisionFarmingSeedRateRowAttributeCellHeader")
    v10 = row:getDescendantByName("soil4")
    v10:applyProfile("precisionFarmingSeedRateRowAttributeCellHeader")
  end
  v10 = row:getDescendantByName("cropName")
  v10:setText(cropName)
  v10 = row:getDescendantByName("soil1")
  v10:setText(text1)
  v10 = row:getDescendantByName("soil2")
  v10:setText(text2)
  v10 = row:getDescendantByName("soil3")
  v10:setText(text3)
  v10 = row:getDescendantByName("soil4")
  v10:setText(text4)
  row:applyScreenAlignment()
  row:updateAbsolutePosition()
  self.rowIndex = self.rowIndex + 1
end
function SeedRateMap:createHelpMenuSeedRateTable(contentBox, template)
  self.rowIndex = 0
  self:createHelpMenuSeedRateTableRow(contentBox, template, true, self.texts.cropNameHeader, self.texts.cropType1, self.texts.cropType2, self.texts.cropType3, self.texts.cropType4)
  -- TODO: structure LOP_FORNPREP (pc 34, target 90)
  local v7 = v7:getFillTypeByFruitTypeIndex(self.fruitTypes[1].index)
  if v7 ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 62, target 77)
    if self.fruitTypes[1].soilTypes[1].bestYieldIndex ~= nil then
      local v14 = self:getRateLabelByIndex(self.fruitTypes[1].soilTypes[1].bestYieldIndex)
      {"", "", "", ""}[1] = v14
    end
    -- TODO: structure LOP_FORNLOOP (pc 76, target 63)
    local v16 = unpack(v9)
    self:createHelpMenuSeedRateTableRow(...)
  end
  -- TODO: structure LOP_FORNLOOP (pc 89, target 35)
end
