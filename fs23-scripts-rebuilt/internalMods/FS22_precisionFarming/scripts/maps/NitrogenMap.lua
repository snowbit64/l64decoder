-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

NitrogenMap = {MOD_NAME = g_currentModName, NUM_BITS = 4, DEBUG_N_OFFSET_MAP = false}
local NitrogenMap_mt = Class(NitrogenMap, ValueMap)
function NitrogenMap.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.name = "nitrogenMap"
  v2.id = "N_MAP"
  v2.label = "ui_mapOverviewNitrogen"
  v2.densityMapModifiersInitialize = {}
  v2.densityMapModifiersHarvest = {}
  v2.densityMapModifiersSpray = {}
  v2.densityMapModifiersDestroyFruit = {}
  v2.densityMapModifiersStrawChopper = {}
  v2.densityMapModifiersCropSensor = {}
  v2.densityMapModifiersResetLock = {}
  v2.densityMapModifiersFieldInfo = {}
  v2.densityMapModifiersFruitCheck = {}
  v2.lastActualValue = -1
  v2.lastTargetValue = -1
  v2.lastYieldPotential = -1
  local v4 = GuiUtils.getUVs({194, 27, 252, 12})
  v2.minimapGradientUVs = {}
  v4 = GuiUtils.getUVs({194, 43, 252, 12})
  v2.minimapGradientColorBlindUVs = {}
  local v3 = v3:getText("ui_mapOverviewNitrogen", NitrogenMap.MOD_NAME)
  v2.minimapLabelName = v3
  v3 = v3:getText("ui_growthMapFertilized")
  v2.minimapLabelNameMission = v3
  return v2
end
function NitrogenMap:initialize()
  local v2 = v2:superClass()
  v2.initialize(self)
  self.densityMapModifiersInitialize = {}
  self.densityMapModifiersHarvest = {}
  self.densityMapModifiersSpray = {}
  self.densityMapModifiersDestroyFruit = {}
  self.densityMapModifiersStrawChopper = {}
  self.densityMapModifiersCropSensor = {}
  self.densityMapModifiersResetLock = {}
  self.densityMapModifiersFieldInfo = {}
  self.densityMapModifiersFruitCheck = {}
  self.lastActualValue = -1
  self.lastTargetValue = -1
  self.lastYieldPotential = -1
end
function NitrogenMap:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  local v7 = getXMLInt(xmlFile, key .. ".nitrogenMap" .. ".bitVectorMap#firstChannel")
  self.firstChannel = v7 or 1
  v7 = getXMLInt(xmlFile, key .. ".nitrogenMap" .. ".bitVectorMap#numChannels")
  self.numChannels = v7 or 4
  local v6 = getXMLInt(xmlFile, key .. ".nitrogenMap" .. ".bitVectorMap#maxValue")
  if not v6 then
  end
  self.maxValue = v6
  self.sizeX = 1024
  self.sizeY = 1024
  v6, v7 = self:loadSavedBitVectorMap("nitrogenMap", "precisionFarming_nitrogenMap.grle", self.numChannels, self.sizeX)
  self.bitVectorMap = v6
  self.newBitVectorMap = v7
  self:addBitVectorMapToSync(self.bitVectorMap)
  self:addBitVectorMapToSave(self.bitVectorMap, "precisionFarming_nitrogenMap.grle")
  self:addBitVectorMapToDelete(self.bitVectorMap)
  v6 = getXMLString(xmlFile, key .. ".noiseMap#filename")
  self.noiseFilename = v6
  v7 = getXMLInt(xmlFile, key .. ".noiseMap#numChannels")
  self.noiseNumChannels = v7 or 2
  v7 = getXMLInt(xmlFile, key .. ".noiseMap#resolution")
  self.noiseResolution = v7 or 1024
  self.noiseMaxValue = 2 ^ self.noiseNumChannels - 1
  v6 = createBitVectorMap("nitrogenNoiseMap")
  self.bitVectorMapNoise = v6
  if self.noiseFilename ~= nil then
    v6 = Utils.getFilename(self.noiseFilename, baseDirectory)
    self.noiseFilename = v6
    v6 = loadBitVectorMapFromFile(self.bitVectorMapNoise, self.noiseFilename, self.noiseNumChannels)
    if not v6 then
      Logging.xmlWarning(xmlFile, "Error while loading pH noise map '%s'", self.noiseFilename)
      self.noiseFilename = nil
    end
  end
  if self.noiseFilename == nil then
    loadBitVectorMapNew(self.bitVectorMapNoise, self.noiseResolution, self.noiseResolution, self.noiseNumChannels, false)
  end
  self:addBitVectorMapToDelete(self.bitVectorMapNoise)
  v6, v7 = self:loadSavedBitVectorMap("nOffsetMap", "precisionFarming_nOffsetMap.grle", 4, self.noiseResolution)
  self.bitVectorMapNOffset = v6
  self.bitVectorMapNOffsetIsNew = v7
  self:addBitVectorMapToSave(self.bitVectorMapNOffset, "precisionFarming_nOffsetMap.grle")
  self:addBitVectorMapToDelete(self.bitVectorMapNOffset)
  self.nOffsetIndexToOffset = {[1] = -5, [2] = -4, [3] = -3, [4] = -2, [5] = -1, [6] = 0, [7] = 1, [8] = 2}
  v6 = self:loadSavedBitVectorMap("nLockStateMap", "precisionFarming_nLockStateMap.grle", 2, self.noiseResolution)
  self.bitVectorMapNStateChange = v6
  self:addBitVectorMapToSave(self.bitVectorMapNStateChange, "precisionFarming_nLockStateMap.grle")
  self:addBitVectorMapToDelete(self.bitVectorMapNStateChange)
  v6 = self:loadSavedBitVectorMap("nInitMaskMap", "nInitMaskMap.grle", 1, self.noiseResolution)
  self.bitVectorMapNInitMask = v6
  self:addBitVectorMapToDelete(self.bitVectorMapNInitMask)
  v6 = self:loadSavedBitVectorMap("nFruitFilterMask", "nFruitFilterMask.grle", 1, self.noiseResolution)
  self.bitVectorMapNFruitFilterMask = v6
  self:addBitVectorMapToDelete(self.bitVectorMapNFruitFilterMask)
  v6 = self:loadSavedBitVectorMap("nFruitDestroyMask", "nFruitDestroyMask.grle", 2, self.noiseResolution)
  self.bitVectorMapNFruitDestroyMask = v6
  self:addBitVectorMapToDelete(self.bitVectorMapNFruitDestroyMask)
  v6 = self:loadSavedBitVectorMap("choppedStrawMask", "choppedStrawMask.grle", 2, self.noiseResolution)
  self.bitVectorMapChoppedStrawMask = v6
  self:addBitVectorMapToDelete(self.bitVectorMapChoppedStrawMask)
  v7 = getXMLFloat(xmlFile, key .. ".nitrogenValues#amountPerState")
  self.amountPerState = v7 or 5
  self.nitrogenValues = {}
  self.numVisualValues = 0
  while true do
    v7 = string.format("%s.nitrogenValues.nitrogenValue(%d)", key, v6)
    v8 = hasXMLProperty(xmlFile, v7)
    if not v8 then
      break
    end
    v10 = getXMLInt(xmlFile, v7 .. "#value")
    v10 = getXMLFloat(xmlFile, v7 .. "#realValue")
    v10 = getXMLBool(xmlFile, v7 .. "#showOnHud")
    v9 = Utils.getNoNil(v10, true)
    v10 = getXMLString(xmlFile, v7 .. "#color")
    v9 = string.getVectorN(v10, 3)
    v10 = getXMLString(xmlFile, v7 .. "#colorBlind")
    v9 = string.getVectorN(v10, 3)
    table.insert(self.nitrogenValues, {value = v10 or 0, realValue = v10 or 0, showOnHud = v9, color = v9, colorBlind = v9})
    if {value = v10 or 0, realValue = v10 or 0, showOnHud = v9, color = v9, colorBlind = v9, index = #self.nitrogenValues, filterIndex = self.numVisualValues + 1}.showOnHud then
      self.numVisualValues = self.numVisualValues + 1
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 433, target 586)
  if not self.nitrogenValues[1].showOnHud then
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L585
    self.nitrogenValues[1].filterIndex = nil.filterIndex
    -- TODO: structure LOP_FORNPREP (pc 452, target 462)
    if self.nitrogenValues[1 + 1].showOnHud then
    else
      -- TODO: structure LOP_FORNLOOP (pc 461, target 453)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L585
    v11.color = {v7.color[1] + (v12.color[1] - v7.color[1]) / (v12.index - v7.index) * (v10 - v7.index), v7.color[2] + (v12.color[2] - v7.color[2]) / (v12.index - v7.index) * (v10 - v7.index), v7.color[3] + (v12.color[3] - v7.color[3]) / (v12.index - v7.index) * (v10 - v7.index)}
    v11.colorBlind = {v7.colorBlind[1] + (v12.colorBlind[1] - v7.colorBlind[1]) / (v12.index - v7.index) * (v10 - v7.index), v7.colorBlind[2] + (v12.colorBlind[2] - v7.colorBlind[2]) / (v12.index - v7.index) * (v10 - v7.index), v7.colorBlind[3] + (v12.colorBlind[3] - v7.colorBlind[3]) / (v12.index - v7.index) * (v10 - v7.index)}
  else
  end
  -- TODO: structure LOP_FORNLOOP (pc 585, target 434)
  self.initialValues = {}
  while true do
    v8 = string.format("%s.initialValues.initialValue(%d)", key, v6)
    v9 = hasXMLProperty(xmlFile, v8)
    if not v9 then
      break
    end
    v11 = getXMLInt(xmlFile, v8 .. "#soilTypeIndex")
    v11 = getXMLString(xmlFile, v8 .. "#baseValueRange")
    v10 = string.getVectorN(v11, self.noiseMaxValue + 1)
    -- TODO: structure LOP_FORNPREP (pc 635, target 649)
    v14 = MathUtil.round({soilTypeIndex = v11 or 1, baseRange = v10}.baseRange[1] / self.amountPerState)
    {soilTypeIndex = v11 or 1, baseRange = v10}.baseRange[1] = v14
    -- TODO: structure LOP_FORNLOOP (pc 648, target 636)
    table.insert(self.initialValues, {soilTypeIndex = v11 or 1, baseRange = v10})
  end
  v11 = getXMLString(xmlFile, key .. ".initialValues#sprayLevelBonus")
  v9 = string.getVector(v11 or "0 0")
  self.initialSprayLevelBonus = {}
  -- TODO: structure LOP_FORNPREP (pc 681, target 695)
  local v12 = MathUtil.round(self.initialSprayLevelBonus[1] / self.amountPerState)
  self.initialSprayLevelBonus[1] = v12
  -- TODO: structure LOP_FORNLOOP (pc 694, target 682)
  self.fertilizerUsage = {nAmounts = {}}
  while true do
    v8 = string.format("%s.fertilizerUsage.nAmount(%d)", key, v6)
    v9 = hasXMLProperty(xmlFile, v8)
    if not v9 then
      break
    end
    v9 = getXMLString(xmlFile, v8 .. "#fillType")
    if v9 ~= nil then
      v10 = v10:getFillTypeIndexByName(v9)
      if v10 ~= nil and v10 ~= FillType.UNKNOWN then
        v13 = getXMLFloat(xmlFile, v8 .. "#amount")
        table.insert(self.fertilizerUsage.nAmounts, {fillTypeIndex = v10, amount = v13 or 1})
        -- goto L777  (LOP_JUMP +13)
      end
      Logging.xmlWarning(xmlFile, "Invalid fill type for nitrogen fertilizer amount '%s'", v8)
    else
      Logging.xmlWarning(xmlFile, "Invalid fill type for nitrogen fertilizer amount '%s'", v8)
    end
  end
  self.fruitRequirements = {}
  self.registeredFruitRequirements = {}
  self:loadFruitRequirementsFromXML(configFileName, xmlFile, key)
  self.cropSensorFruitTypes = {}
  self:loadCropSensorFruitTypesFromXML(configFileName, xmlFile, key)
  v9 = Utils.getFilename(g_currentMission.missionInfo.mapXMLFilename, g_currentMission.baseDirectory)
  v10 = loadXMLFile("MapXML", v9)
  if v10 ~= nil then
    self:loadFruitRequirementsFromXML(g_currentMission.missionInfo.mapXMLFilename, v10, "map.precisionFarming")
    self:loadCropSensorFruitTypesFromXML(g_currentMission.missionInfo.mapXMLFilename, v10, "map.precisionFarming")
    delete(v10)
  end
  v12 = v12:getFruitTypes()
  for v14, v15 in ipairs(...) do
    if not (self.registeredFruitRequirements[v15.index] == nil) then
      continue
    end
    table.insert(self.fruitRequirements, {fruitTypeName = v15.name, fruitType = v15, bySoilType = self.fruitRequirements[1].bySoilType, averageTargetLevel = self.fruitRequirements[1].averageTargetLevel or 0})
    Logging.devInfo("Use default Nitrogen requirements for fruitType '%s'", v15.name)
  end
  v11 = AnimCurve.new(linearInterpolator1)
  self.yieldCurve = v11
  while true do
    v11 = string.format("%s.yieldMappings.yieldMapping(%d)", key, v6)
    v12 = hasXMLProperty(xmlFile, v11)
    if not v12 then
      break
    end
    v14 = getXMLInt(xmlFile, v11 .. "#difference")
    v14 = getXMLFloat(xmlFile, v11 .. "#yieldFactor")
    v14:addKeyframe({v14 or 1, time = (v14 or 0) / self.amountPerState})
  end
  self.applicationRates = {}
  while true do
    v11 = string.format("%s.applicationRates.applicationRate(%d)", key, v6)
    v12 = hasXMLProperty(xmlFile, v11)
    if not v12 then
      break
    end
    v12 = getXMLString(xmlFile, v11 .. "#fillType")
    if v12 ~= nil then
      v13 = v13:getFillTypeIndexByName(v12)
      if v13 ~= nil and v13 ~= FillType.UNKNOWN then
        v16 = getXMLBool(xmlFile, v11 .. "#autoAdjustToFruit")
        v15 = Utils.getNoNil(v16, false)
        v15 = getXMLFloat(xmlFile, v11 .. "#regularRate")
        while true do
          v16 = string.format("%s.soil(%d)", v11, v15)
          v17 = hasXMLProperty(xmlFile, v16)
          if not v17 then
            break
          end
          v19 = getXMLInt(xmlFile, v16 .. "#soilTypeIndex")
          v20 = getXMLInt(xmlFile, v16 .. "#rate")
          table.insert(v14.ratesBySoilType, {soilTypeIndex = v19 or 1, rate = (v20 or 5) / self.amountPerState})
        end
        table.insert(self.applicationRates, v14)
        -- goto L1083  (LOP_JUMP +13)
      end
      Logging.xmlWarning(xmlFile, "Invalid fill type for nitrogen application rate '%s'", v11)
    else
      Logging.xmlWarning(xmlFile, "Invalid fill type for nitrogen application rate '%s'", v11)
    end
  end
  self.levelDifferenceColors = {}
  while true do
    v11 = string.format("%s.levelDifferenceColors.levelDifferenceColor(%d)", key, v6)
    v12 = hasXMLProperty(xmlFile, v11)
    if not v12 then
      break
    end
    v15 = getXMLInt(xmlFile, v11 .. "#levelDifference")
    v14 = getXMLString(xmlFile, v11 .. "#color")
    v13 = string.getVectorN(v14, 3)
    if not v13 then
    end
    v12.color = v13
    v14 = getXMLString(xmlFile, v11 .. "#colorBlind")
    v13 = string.getVectorN(v14, 3)
    if not v13 then
    end
    v12.colorBlind = v13
    v12.color[4] = 1
    v12.colorBlind[4] = 1
    v15 = getXMLString(xmlFile, v11 .. "#text")
    v13 = v13:convertText(v15, NitrogenMap.MOD_NAME)
    v12.additionalText = v13
    table.insert(self.levelDifferenceColors, v12)
  end
  v13 = getXMLInt(xmlFile, key .. ".choppedStraw#increase")
  self.choppedStrawStateChange = (v13 or 25) / self.amountPerState
  v13 = getXMLInt(xmlFile, key .. ".catchCrops#increase")
  self.catchCropsStateChange = (v13 or 25) / self.amountPerState
  v14 = getXMLString(xmlFile, key .. ".texts#outdatedLabel")
  v11 = v11:convertText(v14 or "$l10n_ui_precisionFarming_outdatedData", NitrogenMap.MOD_NAME)
  self.outdatedLabel = v11
  v13 = self:getMinMaxValue()
  v11 = string.format(...)
  self.minimapGradientLabelName = v11
  self.coverMap = g_precisionFarming.coverMap
  self.soilMap = g_precisionFarming.soilMap
  return true
end
function NitrogenMap:loadFruitRequirementsFromXML(configFileName, xmlFile, key)
  while true do
    v5 = string.format("%s.fruitRequirements.fruitRequirement(%d)", key, v4)
    v6 = hasXMLProperty(xmlFile, v5)
    if not v6 then
      break
    end
    v8 = getXMLString(xmlFile, v5 .. "#fruitTypeName")
    if {fruitTypeName = v8}.fruitTypeName ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 34, target 53)
      v12 = v12:lower()
      v13 = v13:lower()
      if v12 == v13 then
      end
      -- TODO: structure LOP_FORNLOOP (pc 52, target 35)
      v9 = getXMLBool(xmlFile, v5 .. "#alwaysAllowFertilization")
      v10 = Utils.getNoNil(v7.alwaysAllowFertilization, false)
      v8 = Utils.getNoNil(...)
      v7.alwaysAllowFertilization = v8
      v9 = getXMLBool(xmlFile, v5 .. "#ignoreOverfertilization")
      v8 = Utils.getNoNil(v9, false)
      v7.ignoreOverfertilization = v8
      v9 = getXMLBool(xmlFile, v5 .. "#availableAsDefaultRate")
      v8 = Utils.getNoNil(v9, true)
      v7.availableAsDefaultRate = v8
      v9 = getXMLBool(xmlFile, v5 .. "#requiresDefaultMode")
      v8 = Utils.getNoNil(v9, false)
      v7.requiresDefaultMode = v8
      v8 = v8:getFruitTypeByName(v7.fruitTypeName)
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L290
      v7.fruitType = v8
      if not v7.bySoilType then
      end
      v7.bySoilType = v9
      while true do
        v10 = string.format("%s.soil(%d)", v5, v9)
        v11 = hasXMLProperty(xmlFile, v10)
        if not v11 then
          break
        end
        v13 = getXMLInt(xmlFile, v10 .. "#soilTypeIndex")
        -- TODO: structure LOP_FORNPREP (pc 159, target 172)
        if v7.bySoilType[1].soilTypeIndex == {soilTypeIndex = v13 or 1}.soilTypeIndex then
        end
        -- TODO: structure LOP_FORNLOOP (pc 171, target 160)
        v13 = getXMLInt(xmlFile, v10 .. "#targetLevel")
        if v13 ~= nil then
          v14, v15 = self:getNearestNitrogenValueFromValue(v13)
        end
        if not v13 and not v11.targetLevel then
        end
        v11.targetLevel = v14
        v14 = getXMLInt(xmlFile, v10 .. "#reduction")
        if v14 ~= nil then
          v15 = math.floor(v14 / self.amountPerState)
        end
        if not v14 and not v11.reduction then
        end
        v11.reduction = v15
        v15 = getXMLFloat(xmlFile, v10 .. "#yieldPotential")
        if not v15 and not v11.yieldPotential then
        end
        v11.yieldPotential = v15
        if not v12 then
          table.insert(v7.bySoilType, v11)
        end
      end
      v7.averageTargetLevel = 0
      if 0 < #v7.bySoilType then
        -- TODO: structure LOP_FORNPREP (pc 257, target 265)
        -- TODO: structure LOP_FORNLOOP (pc 264, target 258)
        v7.averageTargetLevel = (0 + v7.bySoilType[1].targetLevel) / #v7.bySoilType
      end
      -- if v6 then goto L290 end
      table.insert(self.fruitRequirements, v7)
      self.registeredFruitRequirements[v8.index] = true
    else
      Logging.xmlWarning(configFileName, "Invalid fruit type for nitrogen fruitRequirement '%s'", v5)
    end
  end
end
function NitrogenMap:loadCropSensorFruitTypesFromXML(configFileName, xmlFile, key)
  local fruitTypesStr = getXMLString(xmlFile, key .. ".cropSensor#fruitTypes")
  if fruitTypesStr ~= nil then
    local v5 = fruitTypesStr:split(" ")
    -- TODO: structure LOP_FORNPREP (pc 16, target 42)
    local v9 = v9:getFruitTypeByName(v5[1])
    if v9 ~= nil then
      table.insert(self.cropSensorFruitTypes, v9)
    else
      Logging.xmlWarning(xmlFile, "Invalid fruit type '%s' for crop sensor '%s'", v5[1], key)
    end
    -- TODO: structure LOP_FORNLOOP (pc 41, target 17)
  end
end
function NitrogenMap:postLoad(xmlFile, key, baseDirectory, configFileName, mapFilename)
  if self.bitVectorMapNOffsetIsNew then
    local startTime = getTimeSec()
    local modifier = DensityMapModifier.new(self.bitVectorMapNOffset, 0, 3)
    local v13 = math.random(0, 1000)
    local v8 = PerlinNoiseFilter.new(...)
    -- TODO: structure LOP_FORNPREP (pc 29, target 48)
    v8:setValueCompareParams(DensityValueCompareType.BETWEEN, (1 - 1) / 8 * 10000, 1 / 8 * 10000)
    modifier:executeSet(1 - 1, v8)
    -- TODO: structure LOP_FORNLOOP (pc 47, target 30)
    v13 = getTimeSec()
    Logging.devInfo("Initialized Nitrogen Offset Map in %dms", (v13 - startTime) * 1000)
  else
    startTime = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
    modifier = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
    modifier:setValueCompareParams(DensityValueCompareType.GREATER, self.maxValue)
    local v10 = math.floor(self.maxValue * 0.75)
    startTime:executeSet(v10, modifier)
  end
  return true
end
function NitrogenMap:setInitialState(soilBitVector, soilTypeFirstChannel, soilTypeNumChannels, coverChannel, farmlandMask)
  if self.densityMapModifiersInitialize.modifier ~= nil and self.densityMapModifiersInitialize.soilFilter ~= nil and self.densityMapModifiersInitialize.noiseFilter ~= nil and self.densityMapModifiersInitialize.nInitModifier ~= nil and self.densityMapModifiersInitialize.nInitMaskFilter ~= nil and self.densityMapModifiersInitialize.sprayLevelFilter ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x80000000 -> L161
  end
  local v14 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersInitialize.modifier = v14
  v14 = DensityMapFilter.new(soilBitVector, soilTypeFirstChannel, soilTypeNumChannels)
  self.densityMapModifiersInitialize.soilFilter = v14
  v14 = DensityMapFilter.new(self.bitVectorMapNoise, 0, self.noiseNumChannels)
  self.densityMapModifiersInitialize.noiseFilter = v14
  v14 = DensityMapModifier.new(self.bitVectorMapNInitMask, 0, 1)
  self.densityMapModifiersInitialize.nInitModifier = v14
  v14 = DensityMapFilter.new(self.bitVectorMapNInitMask, 0, 1)
  self.densityMapModifiersInitialize.nInitMaskFilter = v14
  self.densityMapModifiersInitialize.nInitMaskFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
  local v13, v14, v15 = v13:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
  local v17 = DensityMapFilter.new(v13, v14, v15)
  self.densityMapModifiersInitialize.sprayLevelFilter = v17
  v17 = v17:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
  self.densityMapModifiersInitialize.maxSprayLevel = v17
  -- TODO: structure LOP_FORNPREP (pc 166, target 214)
  self.densityMapModifiersInitialize.soilFilter:setValueCompareParams(DensityValueCompareType.NOTEQUAL, self.initialValues[1].soilTypeIndex - 1)
  if farmlandMask ~= nil then
    self.densityMapModifiersInitialize.nInitModifier:executeSet(0)
    self.densityMapModifiersInitialize.nInitModifier:executeSet(1, farmlandMask, self.densityMapModifiersInitialize.soilFilter)
  end
  for v20 = 1, self.noiseMaxValue + 1 do
    v8:setValueCompareParams(DensityValueCompareType.EQUAL, v20 - 1)
    v6:executeSet(v16.baseRange[v20], v17, v8)
    -- TODO: structure LOP_FORNLOOP (pc 212, target 198)
  end
  -- TODO: structure LOP_FORNPREP (pc 217, target 234)
  v11:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
  v6:executeAdd(self.initialSprayLevelBonus[1] or 0, v11, farmlandMask)
  -- TODO: structure LOP_FORNLOOP (pc 233, target 218)
  self:setMinimapRequiresUpdate(true)
end
function NitrogenMap:onHarvestCoverUpdate(fruitFilter, sprayTypeFilter, fruitIndex, fruitUsed, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, useMinForageState)
  if fruitUsed and self.coverMap ~= nil and self.coverMap.bitVectorMap ~= nil and self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    if self.densityMapModifiersHarvest.modifier ~= nil and self.densityMapModifiersHarvest.modifierLock ~= nil and self.densityMapModifiersHarvest.lockFilter ~= nil and self.densityMapModifiersHarvest.soilFilter ~= nil and self.densityMapModifiersHarvest.nFilter ~= nil and self.densityMapModifiersHarvest.coverFilter ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R20 aux=0x80000000 -> L202
    end
    local v22 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
    self.densityMapModifiersHarvest.modifier = v22
    self.densityMapModifiersHarvest.modifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
    v22 = DensityMapFilter.new(v13.bitVectorMap, v13.typeFirstChannel, v13.typeNumChannels)
    self.densityMapModifiersHarvest.soilFilter = v22
    v22 = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
    self.densityMapModifiersHarvest.nFilter = v22
    self.densityMapModifiersHarvest.nFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, self.maxValue)
    v22 = DensityMapModifier.new(self.bitVectorMapNStateChange, 0, 1)
    self.densityMapModifiersHarvest.modifierLock = v22
    self.densityMapModifiersHarvest.modifierLock:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
    v22 = DensityMapFilter.new(self.bitVectorMapNStateChange, 0, 1)
    self.densityMapModifiersHarvest.lockFilter = v22
    self.densityMapModifiersHarvest.lockFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
    v22 = DensityMapFilter.new(v12.bitVectorMap, v12.firstChannel, v12.numChannels)
    self.densityMapModifiersHarvest.coverFilter = v22
    self.densityMapModifiersHarvest.coverFilter:setValueCompareParams(DensityValueCompareType.GREATER, 1)
    v22 = DensityMapModifier.new(self.bitVectorMapNOffset, 3, 1)
    self.densityMapModifiersHarvest.modifierOffsetMeasured = v22
    self.densityMapModifiersHarvest.modifier:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    self.densityMapModifiersHarvest.modifierLock:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    self.densityMapModifiersHarvest.modifierOffsetMeasured:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    self:updateCropSensorArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, true, true, sprayTypeFilter, fruitFilter)
    self.densityMapModifiersHarvest.modifierOffsetMeasured:executeSet(0, fruitFilter, sprayTypeFilter)
    -- TODO: structure LOP_FORNPREP (pc 260, target 379)
    if self.fruitRequirements[1].fruitType.index == fruitIndex then
      -- TODO: structure LOP_FORNPREP (pc 275, target 378)
      self.densityMapModifiersHarvest.soilFilter:setValueCompareParams(DensityValueCompareType.EQUAL, self.fruitRequirements[1].bySoilType[1].soilTypeIndex - 1)
      self.densityMapModifiersHarvest.modifierLock:executeSet(1, fruitFilter, sprayTypeFilter)
      self.densityMapModifiersHarvest.coverFilter:setValueCompareParams(DensityValueCompareType.GREATER, 1)
      local v30, v31 = self.densityMapModifiersHarvest.modifierLock:executeGet(self.densityMapModifiersHarvest.coverFilter)
      if 0 < v31 then
        self.densityMapModifiersHarvest.coverFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, 1)
        self.densityMapModifiersHarvest.modifierLock:executeSet(0, self.densityMapModifiersHarvest.coverFilter)
      end
      local v32, v33, v34 = v14:executeGet(v18, v16, v17)
      if 0 < v33 then
        if 1 < v29.reduction then
          v15:executeSet(1, fruitFilter, sprayTypeFilter)
          local v38 = math.max(v32 / v33 - v29.reduction, 1)
          v14:executeSet(v38, v18, v16, v17)
        end
        self.lastActualValue = v35
        self.lastTargetValue = v29.targetLevel
        self.lastYieldPotential = v29.yieldPotential
        self.lastIgnoreOverfertilization = v25.ignoreOverfertilization
        self.lastRegularNValue = v25.averageTargetLevel
      end
      v15:executeSet(0)
      -- TODO: structure LOP_FORNLOOP (pc 377, target 276)
    end
    -- TODO: structure LOP_FORNLOOP (pc 378, target 261)
    if v21 then
      self:setMinimapRequiresUpdate(true)
    end
    return v21
  end
  return false
end
function NitrogenMap:updateSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, sprayTypeIndex, lockSprayTypeIndex, automaticallyAdjusted, manualSprayRate, forcedFruitType, nitrogenLevelOffset, defaultNitrogenRequirementIndex)
  if self.coverMap ~= nil and self.coverMap.bitVectorMap ~= nil and self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    local v17 = v17:getSprayTypeByIndex(lockSprayTypeIndex)
    if v17 ~= nil then
    end
    local v18 = v18:getSprayTypeByIndex(sprayTypeIndex)
    if v18 ~= nil and v18.isFertilizer then
      if self.densityMapModifiersSpray.modifier ~= nil and self.densityMapModifiersSpray.soilFilter ~= nil and self.densityMapModifiersSpray.nFilter ~= nil and self.densityMapModifiersSpray.maskFilter ~= nil and self.densityMapModifiersSpray.fruitFilter ~= nil and self.densityMapModifiersSpray.modifierLock ~= nil and self.densityMapModifiersSpray.lockFilter ~= nil and self.densityMapModifiersSpray.sprayTypeFilter ~= nil and self.densityMapModifiersSpray.offFieldFilter ~= nil and self.densityMapModifiersSpray.tempFruitModifier ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R29 aux=0x80000000 -> L329
      end
      local v31 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
      self.densityMapModifiersSpray.modifier = v31
      self.densityMapModifiersSpray.modifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
      v31 = DensityMapFilter.new(v15.bitVectorMap, v15.typeFirstChannel, v15.typeNumChannels)
      self.densityMapModifiersSpray.soilFilter = v31
      v31 = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
      self.densityMapModifiersSpray.nFilter = v31
      v31 = DensityMapFilter.new(v14.bitVectorMap, v14.firstChannel, v14.numChannels)
      self.densityMapModifiersSpray.maskFilter = v31
      self.densityMapModifiersSpray.maskFilter:setValueCompareParams(DensityValueCompareType.GREATER, 1)
      v31 = DensityMapFilter.new(self.densityMapModifiersSpray.modifier)
      self.densityMapModifiersSpray.fruitFilter = v31
      v31 = DensityMapModifier.new(self.bitVectorMapNStateChange, 1, 1)
      self.densityMapModifiersSpray.modifierLock = v31
      self.densityMapModifiersSpray.modifierLock:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
      v31 = DensityMapFilter.new(self.bitVectorMapNStateChange, 1, 1)
      self.densityMapModifiersSpray.lockFilter = v31
      self.densityMapModifiersSpray.lockFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
      local v31, v32, v33 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
      local v34, v35, v36 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
      local v38 = DensityMapFilter.new(v31, v32, v33)
      self.densityMapModifiersSpray.sprayTypeFilter = v38
      self.densityMapModifiersSpray.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      v38 = DensityMapFilter.new(v34, v35, v36)
      self.densityMapModifiersSpray.offFieldFilter = v38
      self.densityMapModifiersSpray.offFieldFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
      v38 = DensityMapModifier.new(self.bitVectorMapNFruitFilterMask, 0, 1)
      self.densityMapModifiersSpray.tempFruitModifier = v38
      self.densityMapModifiersSpray.tempFruitModifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
      v38 = DensityMapFilter.new(self.bitVectorMapNFruitFilterMask, 0, 1)
      self.densityMapModifiersSpray.tempFruitFilter = v38
      self.densityMapModifiersSpray.tempFruitFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
      self.densityMapModifiersSpray.modifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
      self.densityMapModifiersSpray.modifierLock:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
      self.densityMapModifiersSpray.tempFruitModifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
      self.densityMapModifiersSpray.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.NOTEQUAL, v16)
      self.densityMapModifiersSpray.modifierLock:executeSet(0, self.densityMapModifiersSpray.sprayTypeFilter)
      self.densityMapModifiersSpray.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.EQUAL, v16)
      self.densityMapModifiersSpray.modifierLock:executeSet(1, self.densityMapModifiersSpray.sprayTypeFilter)
      self.densityMapModifiersSpray.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
      self.densityMapModifiersSpray.maskFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, v14.maxValue)
      local v36, v37, v38 = self.densityMapModifiersSpray.modifier:executeGet(self.densityMapModifiersSpray.maskFilter)
      if v37 == 0 then
        -- if not v9 then goto L477 end
        -- TODO: structure LOP_FORNPREP (pc 458, target 505)
        if self.applicationRates[1].fillTypeIndex == v18.fillType.index then
        end
        -- TODO: structure LOP_FORNLOOP (pc 475, target 459)
      elseif 0 < v37 then
        self.densityMapModifiersSpray.maskFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, 1)
        self.densityMapModifiersSpray.modifierLock:executeSet(1, self.densityMapModifiersSpray.maskFilter)
        self.densityMapModifiersSpray.maskFilter:setValueCompareParams(DensityValueCompareType.EQUAL, v14.maxValue + 1)
        self.densityMapModifiersSpray.modifierLock:executeSet(1, self.densityMapModifiersSpray.maskFilter)
      end
      -- TODO: structure LOP_FORNPREP (pc 510, target 777)
      if self.applicationRates[1].fillTypeIndex == v18.fillType.index then
        if self.applicationRates[1].autoAdjustToFruit and automaticallyAdjusted and forcedFruitType == nil then
          -- TODO: structure LOP_FORNPREP (pc 534, target 565)
          local v48, v49, v50, v51, v52, v53, v54 = u0(self.fruitRequirements[1], v19, v23, v20, v21, v28, v29, v22, v27, false)
          if v53 ~= FruitType.UNKNOWN then
          end
          if 0 < v54 then
          end
          -- TODO: structure LOP_FORNLOOP (pc 564, target 535)
        end
        if v42.autoAdjustToFruit and not v43 and automaticallyAdjusted then
          if not self.fruitRequirements[defaultNitrogenRequirementIndex or 1] then
          end
          if forcedFruitType ~= nil then
            -- TODO: structure LOP_FORNPREP (pc 585, target 599)
            if self.fruitRequirements[1].fruitType.index == forcedFruitType then
            end
            -- TODO: structure LOP_FORNLOOP (pc 598, target 586)
          end
          local v45, v46, v47, v48, v49, v50, v51 = u0(v44, v19, v23, v20, v21, v28, v29, v22, v27, true)
          if 0 < v51 then
          end
        end
        if not v42.autoAdjustToFruit and automaticallyAdjusted then
          -- TODO: structure LOP_FORNPREP (pc 629, target 777)
          v20:setValueCompareParams(DensityValueCompareType.EQUAL, v42.ratesBySoilType[1].soilTypeIndex - 1)
          v21:setValueCompareParams(DensityValueCompareType.BETWEEN, self.maxValue - v42.ratesBySoilType[1].rate + nitrogenLevelOffset + 1, self.maxValue)
          v49, v50, v51 = v19:executeSet(self.maxValue, v25, v20, v21)
          if 0 < v50 then
          end
          v21:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, self.maxValue - v48)
          v52, v53, v54 = v19:executeGet(v25, v20, v21)
          if 0 < v53 then
            v19:executeAdd(v48, v25, v20, v21)
          end
          -- TODO: structure LOP_FORNLOOP (pc 713, target 630)
          -- goto L777  (LOP_JUMP +62)
        end
        -- if v9 then goto L777 end
        local v44, v45, v46 = v19:executeGet(v25)
        -- if 0 >= v45 then goto L777 end
        v21:setValueCompareParams(DensityValueCompareType.BETWEEN, self.maxValue - manualSprayRate + nitrogenLevelOffset + 1, self.maxValue)
        v19:executeSet(self.maxValue, v25, v21)
        v21:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, self.maxValue - manualSprayRate + nitrogenLevelOffset)
        v19:executeAdd(manualSprayRate + nitrogenLevelOffset, v25, v21)
        v49 = math.min(v44 / v45 + manualSprayRate, self.maxValue)
        -- cmp-jump LOP_JUMPXEQKN R37 aux=0x80000044 -> L777
      else
        -- TODO: structure LOP_FORNLOOP (pc 776, target 511)
      end
      local v39 = math.floor(v33 / v35)
      v39 = math.floor(v34 / v35)
      if 0 < v30 then
        self:setMinimapRequiresUpdate(true)
      end
      return v30, v31, v32, v33, v34, v39, automaticallyAdjusted
    end
  end
  return 0
end
function NitrogenMap:postUpdateSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, sprayTypeIndex, lockSprayTypeIndex, automaticallyAdjusted, manualSprayRate)
  if self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    local defaultNitrogenRequirementIndex = defaultNitrogenRequirementIndex:getSprayTypeByIndex(lockSprayTypeIndex)
    if defaultNitrogenRequirementIndex ~= nil then
    end
    local v14 = v14:getSprayTypeByIndex(sprayTypeIndex)
    if v14 ~= nil and v14.isFertilizer and self.densityMapModifiersSpray.modifierLock ~= nil and self.densityMapModifiersSpray.sprayTypeFilter ~= nil then
      self.densityMapModifiersSpray.modifierLock:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
      self.densityMapModifiersSpray.modifierLock:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
      self.densityMapModifiersSpray.modifierLock:executeSet(0)
      self.densityMapModifiersSpray.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.EQUAL, nitrogenLevelOffset)
      self.densityMapModifiersSpray.modifierLock:executeSet(1, self.densityMapModifiersSpray.sprayTypeFilter)
    end
  end
  return 0
end
function NitrogenMap:updateDestroyCommonArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    if self.densityMapModifiersDestroyFruit.modifier ~= nil and self.densityMapModifiersDestroyFruit.nFilter ~= nil and self.densityMapModifiersDestroyFruit.fruitFilter ~= nil and self.densityMapModifiersDestroyFruit.modifierLock ~= nil and self.densityMapModifiersDestroyFruit.lockFilter ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x80000000 -> L171
    end
    local v15 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
    self.densityMapModifiersDestroyFruit.modifier = v15
    self.densityMapModifiersDestroyFruit.modifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
    v15 = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
    self.densityMapModifiersDestroyFruit.nFilter = v15
    self.densityMapModifiersDestroyFruit.nFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, self.maxValue - 1)
    v15 = DensityMapFilter.new(self.densityMapModifiersDestroyFruit.modifier)
    self.densityMapModifiersDestroyFruit.fruitFilter = v15
    v15 = DensityMapModifier.new(self.bitVectorMapNFruitDestroyMask, 0, 2)
    self.densityMapModifiersDestroyFruit.modifierLock = v15
    self.densityMapModifiersDestroyFruit.modifierLock:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
    v15 = DensityMapFilter.new(self.bitVectorMapNFruitDestroyMask, 0, 2)
    self.densityMapModifiersDestroyFruit.lockFilter = v15
    self.densityMapModifiersDestroyFruit.lockFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
    self.densityMapModifiersDestroyFruit.fruitIndices = {}
    -- TODO: structure LOP_FORNPREP (pc 158, target 171)
    self.densityMapModifiersDestroyFruit.fruitIndices[1] = {index = 0, terrainDataPlaneId = 0, active = false}
    -- TODO: structure LOP_FORNLOOP (pc 170, target 159)
    self.densityMapModifiersDestroyFruit.modifierLock:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
    self.densityMapModifiersDestroyFruit.fruitIndices[1].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[2].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[3].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[4].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[5].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[6].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[7].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[8].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[9].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[10].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[11].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[12].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[13].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[14].active = false
    self.densityMapModifiersDestroyFruit.fruitIndices[15].active = false
    self.densityMapModifiersDestroyFruit.modifierLock:executeSet(0)
    v15 = v15:getFruitTypes()
    for v17, v18 in pairs(...) do
      if not (v18.weed == nil) then
        continue
      end
      if not (v18.terrainDataPlaneId ~= nil) then
        continue
      end
      manualSprayRate:resetDensityMapAndChannels(v18.terrainDataPlaneId, v18.startStateChannel, v18.numStateChannels)
      manualSprayRate:setValueCompareParams(DensityValueCompareType.BETWEEN, 2, v18.numGrowthStates)
      local v19, v20 = forcedFruitType:executeSet(1, manualSprayRate)
      if not (0 < v20) then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 331, target 350)
      if not defaultNitrogenRequirementIndex[1].active then
        defaultNitrogenRequirementIndex[1].index = v17
        defaultNitrogenRequirementIndex[1].terrainDataPlaneId = v18.terrainDataPlaneId
        defaultNitrogenRequirementIndex[1].active = true
      else
        -- TODO: structure LOP_FORNLOOP (pc 349, target 332)
      end
    end
  end
  return 0
end
function NitrogenMap:postUpdateDestroyCommonArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    self.densityMapModifiersDestroyFruit.modifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
    -- TODO: structure LOP_FORNPREP (pc 86, target 125)
    if self.densityMapModifiersDestroyFruit.fruitIndices[1].active then
      local v17 = v17:getFruitTypeByIndex(self.densityMapModifiersDestroyFruit.fruitIndices[1].index)
      self.densityMapModifiersDestroyFruit.fruitFilter:resetDensityMapAndChannels(self.densityMapModifiersDestroyFruit.fruitIndices[1].terrainDataPlaneId, v17.startStateChannel, v17.numStateChannels)
      self.densityMapModifiersDestroyFruit.fruitFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 2, v17.numGrowthStates)
      self.densityMapModifiersDestroyFruit.modifierLock:executeSet(2, self.densityMapModifiersDestroyFruit.fruitFilter)
      -- goto L124  (LOP_JUMP +1)
      -- goto L125  (LOP_JUMP +1)
      -- TODO: structure LOP_FORNLOOP (pc 124, target 87)
    end
    automaticallyAdjusted:setValueCompareParams(DensityValueCompareType.EQUAL, self.maxValue - self.catchCropsStateChange)
    lockSprayTypeIndex:executeSet(self.maxValue, nitrogenLevelOffset, automaticallyAdjusted)
    automaticallyAdjusted:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, self.maxValue - self.catchCropsStateChange)
    lockSprayTypeIndex:executeAdd(self.catchCropsStateChange, nitrogenLevelOffset, automaticallyAdjusted)
  end
  return 0
end
function NitrogenMap:preUpdateStrawChopperArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, strawGroundType)
  if self.densityMapModifiersStrawChopper.modifier ~= nil and self.densityMapModifiersStrawChopper.nFilter ~= nil and self.densityMapModifiersStrawChopper.maskModifier ~= nil and self.densityMapModifiersStrawChopper.maskFilter ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x80000000 -> L126
  end
  local v14 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersStrawChopper.modifier = v14
  v14 = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersStrawChopper.nFilter = v14
  v14 = DensityMapModifier.new(self.bitVectorMapChoppedStrawMask, 0, 1)
  self.densityMapModifiersStrawChopper.maskModifier = v14
  v14 = DensityMapFilter.new(self.bitVectorMapChoppedStrawMask, 0, 1)
  self.densityMapModifiersStrawChopper.maskFilter = v14
  self.densityMapModifiersStrawChopper.maskFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
  local v15, v16, v17 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
  local v19 = DensityMapFilter.new(v15, v16, v17, g_currentMission.terrainRootNode)
  self.densityMapModifiersStrawChopper.sprayTypeFilter = v19
  self.densityMapModifiersStrawChopper.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.NOTEQUAL, strawGroundType)
  self.densityMapModifiersStrawChopper.maskModifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
  self.densityMapModifiersStrawChopper.maskModifier:executeSet(1)
  self.densityMapModifiersStrawChopper.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.EQUAL, strawGroundType)
  self.densityMapModifiersStrawChopper.maskModifier:executeSet(0, self.densityMapModifiersStrawChopper.sprayTypeFilter)
  self.densityMapModifiersStrawChopper.nFilter:setValueCompareParams(DensityValueCompareType.GREATER, self.maxValue - self.choppedStrawStateChange)
  self.densityMapModifiersStrawChopper.maskModifier:executeSet(0, self.densityMapModifiersStrawChopper.nFilter)
end
function NitrogenMap:postUpdateStrawChopperArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, strawGroundType)
  self.densityMapModifiersStrawChopper.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.EQUAL, strawGroundType)
  self.densityMapModifiersStrawChopper.modifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
  self.densityMapModifiersStrawChopper.modifier:executeAdd(self.choppedStrawStateChange, self.densityMapModifiersStrawChopper.maskFilter, self.densityMapModifiersStrawChopper.sprayTypeFilter)
end
function NitrogenMap:updateCropSensorArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, ignoreFruitFilter, localSpace, changeFilter, changeFilter2)
  if self.densityMapModifiersCropSensor.modifierMeasured ~= nil and self.densityMapModifiersCropSensor.measuredFilter ~= nil and self.densityMapModifiersCropSensor.nModifier ~= nil and self.densityMapModifiersCropSensor.nFilter ~= nil and self.densityMapModifiersCropSensor.offsetFilter ~= nil and self.densityMapModifiersCropSensor.tempFruitModifier ~= nil and self.densityMapModifiersCropSensor.tempFruitFilter ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R18 aux=0x80000000 -> L202
  end
  local v20 = DensityMapModifier.new(self.bitVectorMapNOffset, 3, 1)
  self.densityMapModifiersCropSensor.modifierMeasured = v20
  v20 = DensityMapFilter.new(self.bitVectorMapNOffset, 3, 1)
  self.densityMapModifiersCropSensor.measuredFilter = v20
  self.densityMapModifiersCropSensor.measuredFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
  v20 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersCropSensor.nModifier = v20
  v20 = DensityMapFilter.new(self.bitVectorMap, self.firstChannel, self.numChannels)
  self.densityMapModifiersCropSensor.nFilter = v20
  self.densityMapModifiersCropSensor.nFilter:setValueCompareParams(DensityValueCompareType.GREATER, self.maxValue)
  v20 = DensityMapFilter.new(self.bitVectorMapNOffset, 0, 3)
  self.densityMapModifiersCropSensor.offsetFilter = v20
  v20 = DensityMapModifier.new(self.bitVectorMapNFruitFilterMask, 0, 1)
  self.densityMapModifiersCropSensor.tempFruitModifier = v20
  self.densityMapModifiersCropSensor.tempFruitModifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
  v20 = DensityMapFilter.new(self.bitVectorMapNFruitFilterMask, 0, 1)
  self.densityMapModifiersCropSensor.tempFruitFilter = v20
  self.densityMapModifiersCropSensor.tempFruitFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
  v20 = DensityMapFilter.new(self.bitVectorMapNFruitFilterMask, 0, 1)
  self.densityMapModifiersCropSensor.fruitFilter = v20
  self.densityMapModifiersCropSensor.fruitFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
  if localSpace ~= true then
  end
  forcedFruitType:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  defaultNitrogenRequirementIndex:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v16:setParallelogramDensityMapCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  if changeFilter == nil then
    if ignoreFruitFilter ~= true then
      v16:executeSet(0)
      -- TODO: structure LOP_FORNPREP (pc 290, target 326)
      if self.cropSensorFruitTypes[1].terrainDataPlaneId ~= nil then
        v18:resetDensityMapAndChannels(self.cropSensorFruitTypes[1].terrainDataPlaneId, self.cropSensorFruitTypes[1].startStateChannel, self.cropSensorFruitTypes[1].numStateChannels)
        v18:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, self.cropSensorFruitTypes[1].minHarvestingGrowthState)
        v16:executeSet(1, v18)
      end
      -- TODO: structure LOP_FORNLOOP (pc 320, target 291)
    else
      v16:executeSet(1)
    end
    nitrogenLevelOffset:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
    v16:executeSet(0, nitrogenLevelOffset)
  else
    v16:executeSet(0)
    v16:executeSet(1, changeFilter, changeFilter2)
    nitrogenLevelOffset:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
    v16:executeSet(0, nitrogenLevelOffset)
  end
  -- TODO: structure LOP_FORNPREP (pc 366, target 407)
  v15:setValueCompareParams(DensityValueCompareType.EQUAL, 1 - 1)
  local v26 = math.max(1 - self.nOffsetIndexToOffset[1], 1)
  v14:setValueCompareParams(DensityValueCompareType.BETWEEN, v26, self.maxValue - self.nOffsetIndexToOffset[1])
  local v23, v24, v25 = defaultNitrogenRequirementIndex:executeAdd(self.nOffsetIndexToOffset[1], v14, v15, changeFilter)
  if 0 < v24 then
    self:setMinimapRequiresUpdate(true)
  end
  -- TODO: structure LOP_FORNLOOP (pc 406, target 367)
  nitrogenLevelOffset:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
  forcedFruitType:executeSet(1, nitrogenLevelOffset, changeFilter)
end
function NitrogenMap:getLevelAtWorldPos(x, z)
  local widthWorldX = widthWorldX:getIsUncoveredAtBitVectorPos((x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeX, (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeY)
  if widthWorldX then
    widthWorldX = getBitVectorMapPoint(self.bitVectorMap, (x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeX, (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeY, self.firstChannel, self.numChannels)
    return widthWorldX
  end
  return 0
end
function NitrogenMap:getTargetLevelAtWorldPos(x, z, size, forcedFruitType, fillType, nLevel, defaultNitrogenRequirementIndex)
  if self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    if self.densityMapModifiersFruitCheck.modifierFruit == nil then
      local forcedFruitType, nitrogenLevelOffset, defaultNitrogenRequirementIndex = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
      local v15 = DensityMapModifier.new(forcedFruitType, nitrogenLevelOffset, defaultNitrogenRequirementIndex)
      self.densityMapModifiersFruitCheck.modifierFruit = v15
    end
    nitrogenLevelOffset = nitrogenLevelOffset:getIsUncoveredAtBitVectorPos((x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * lockSprayTypeIndex.sizeX, (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * lockSprayTypeIndex.sizeY)
    if nitrogenLevelOffset then
      defaultNitrogenRequirementIndex = getBitVectorMapPoint(lockSprayTypeIndex.bitVectorMap, (x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * lockSprayTypeIndex.sizeX, (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * lockSprayTypeIndex.sizeY, lockSprayTypeIndex.typeFirstChannel, lockSprayTypeIndex.typeNumChannels)
      if fillType ~= nil and fillType ~= FillType.UNKNOWN then
        -- TODO: structure LOP_FORNPREP (pc 87, target 121)
        if self.applicationRates[1].fillTypeIndex == fillType and not self.applicationRates[1].autoAdjustToFruit then
          -- TODO: structure LOP_FORNPREP (pc 103, target 120)
          if self.applicationRates[1].ratesBySoilType[1].soilTypeIndex == defaultNitrogenRequirementIndex + 1 then
            return (nLevel or 0) + self.applicationRates[1].ratesBySoilType[1].rate, defaultNitrogenRequirementIndex + 1, FruitType.UNKNOWN
          end
          -- TODO: structure LOP_FORNLOOP (pc 119, target 104)
        end
        -- TODO: structure LOP_FORNLOOP (pc 120, target 88)
      end
      automaticallyAdjusted:setParallelogramWorldCoords(x + size * 0.5, z + size * 0.5, x - size * 0.5, z + size * 0.5, x + size * 0.5, z - size * 0.5, DensityCoordType.POINT_POINT_POINT)
      if forcedFruitType == nil then
        local v22 = v22:getFruitTypes()
        for v24, v25 in pairs(...) do
          if not (v25.weed == nil) then
            continue
          end
          if not (v25.terrainDataPlaneId ~= nil) then
            continue
          end
          automaticallyAdjusted:resetDensityMapAndChannels(v25.terrainDataPlaneId, v25.startStateChannel, v25.numStateChannels)
          local v26, v27, v28 = automaticallyAdjusted:executeGet()
          if not (0 < v27) then
            continue
          end
          local v29 = math.floor(v26 / v27)
          -- TODO: structure LOP_FORNPREP (pc 185, target 201)
          if self.fruitRequirements[1].fruitType.index == v24 then
          end
          -- TODO: structure LOP_FORNLOOP (pc 200, target 186)
          if 0 <= v29 then
            -- if v29 ~= v25.cutState then goto L209 end
          end
          if not v30 then
            continue
          end
          break
        end
      end
      if v20 ~= nil then
        -- TODO: structure LOP_FORNPREP (pc 221, target 246)
        if self.fruitRequirements[1].fruitType.index == v20 then
          -- goto L246  (LOP_JUMP +11)
        end
        -- TODO: structure LOP_FORNLOOP (pc 235, target 222)
      elseif not self.fruitRequirements[defaultNitrogenRequirementIndex or 1] then
      end
      if v21 ~= nil then
        -- TODO: structure LOP_FORNPREP (pc 253, target 267)
        if v21.bySoilType[1].soilTypeIndex == nitrogenLevelOffset then
          return v21.bySoilType[1].targetLevel, nitrogenLevelOffset, v20
        end
        -- TODO: structure LOP_FORNLOOP (pc 266, target 254)
      end
      return 0, nitrogenLevelOffset, FruitType.UNKNOWN
    end
  end
  return 0, 0, FruitType.UNKNOWN
end
function NitrogenMap:getNOffsetDataAtWorldPos(x, z)
  local size = size:getIsUncoveredAtBitVectorPos((x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeX, (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeY)
  if size then
    local forcedFruitType = getBitVectorMapPoint(self.bitVectorMapNOffset, (x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeX, (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeY, 3, 1)
    if forcedFruitType ~= 1 then
    end
    forcedFruitType = getBitVectorMapPoint(self.bitVectorMapNOffset, x, z, 0, 3)
    return true, self.nOffsetIndexToOffset[forcedFruitType + 1] * self.amountPerState
  end
  return false, -1
end
function NitrogenMap:getFertilizerUsage(workingWidth, lastSpeed, statesChanged, fillTypeIndex, dt, sprayAmountAutoMode, nApplyAutoModeFruitType, actualNitrogen, nitrogenUsageLevelOffset)
  local manualSprayRate, forcedFruitType, nitrogenLevelOffset = self:getFertilizerUsageByStateChange(statesChanged, fillTypeIndex, nitrogenUsageLevelOffset or 0)
  if 0 < manualSprayRate then
    if nApplyAutoModeFruitType ~= nil then
      -- if v7 == FruitType.UNKNOWN then goto L62 end
      -- TODO: structure LOP_FORNPREP (pc 27, target 88)
      if self.fruitRequirements[1].fruitType.index == nApplyAutoModeFruitType then
        local v19, v20 = self:getNearestNitrogenValueFromValue(actualNitrogen)
        local v23 = math.max(self.fruitRequirements[1].averageTargetLevel - v20, 0)
        local v21, v22, v23 = self:getFertilizerUsageByStateChange(v23, fillTypeIndex)
      end
      -- TODO: structure LOP_FORNLOOP (pc 60, target 28)
    else
      -- TODO: structure LOP_FORNPREP (pc 67, target 88)
      if self.applicationRates[1].fillTypeIndex == fillTypeIndex then
        v19, v20, v21 = self:getFertilizerUsageByNitrogenAmount(self.applicationRates[1].regularRate, fillTypeIndex)
      end
      -- TODO: structure LOP_FORNLOOP (pc 87, target 68)
    end
  end
  return defaultNitrogenRequirementIndex, manualSprayRate, v14, nitrogenLevelOffset
end
function NitrogenMap:getFertilizerUsageByStateChange(statesChanged, fillTypeIndex, nitrogenUsageLevelOffset)
  return self:getFertilizerUsageByNitrogenAmount(statesChanged * self.amountPerState, fillTypeIndex, (nitrogenUsageLevelOffset or 0) * self.amountPerState)
end
function NitrogenMap:getFertilizerUsageByNitrogenAmount(nitrogenAmount, fillTypeIndex, nAmountOffset)
  -- TODO: structure LOP_FORNPREP (pc 10, target 63)
  if self.fertilizerUsage.nAmounts[1].fillTypeIndex == fillTypeIndex then
    local forcedFruitType = forcedFruitType:getFillTypeByIndex(fillTypeIndex)
    if fillTypeIndex ~= FillType.LIQUIDMANURE then
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L62
    elseif 0 < nitrogenAmount and nAmountOffset ~= nil then
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 62, target 11)
  return forcedFruitType, fillType, nLevel
end
function NitrogenMap:getNextFruitRequirementIndex(index)
  if #self.fruitRequirements < index + 1 then
  end
  if self.fruitRequirements[index] ~= nil and not self.fruitRequirements[index].availableAsDefaultRate then
    return self:getNextFruitRequirementIndex(index)
  end
  return index
end
function NitrogenMap:getFruitTypeIndexByFruitRequirementIndex(index)
  if self.fruitRequirements[index] ~= nil then
    return self.fruitRequirements[index].fruitType.index
  end
  return nil
end
function NitrogenMap:getFruitTypeRequirementRequiresDefaultMode(index)
  -- TODO: structure LOP_FORNPREP (pc 5, target 21)
  if self.fruitRequirements[1].fruitType.index == index and self.fruitRequirements[1].requiresDefaultMode then
    return true
  end
  -- TODO: structure LOP_FORNLOOP (pc 20, target 6)
  return false
end
function NitrogenMap:getNitrogenAmountFromFillType(fillTypeIndex)
  -- TODO: structure LOP_FORNPREP (pc 7, target 21)
  if self.fertilizerUsage.nAmounts[1].fillTypeIndex == fillTypeIndex then
    return self.fertilizerUsage.nAmounts[1].amount
  end
  -- TODO: structure LOP_FORNLOOP (pc 20, target 8)
  return 0
end
function NitrogenMap:getNitrogenFromChangedStates(statesChanged)
  return statesChanged * self.amountPerState
end
function NitrogenMap:getMinMaxValue()
  if self.nitrogenValues ~= nil and 0 < #self.nitrogenValues then
    return self.nitrogenValues[1].realValue, self.nitrogenValues[#self.nitrogenValues].realValue, #self.nitrogenValues
  end
  return 0, 1, 0
end
function NitrogenMap:getNitrogenValueFromInternalValue(internal)
  -- TODO: structure LOP_FORNPREP (pc 5, target 22)
  local defaultNitrogenRequirementIndex = math.floor(internal)
  if self.nitrogenValues[1].value == defaultNitrogenRequirementIndex then
    return self.nitrogenValues[1].realValue
  end
  -- TODO: structure LOP_FORNLOOP (pc 21, target 6)
  return 0
end
function NitrogenMap:getNearestNitrogenValueFromValue(value)
  -- TODO: structure LOP_FORNPREP (pc 8, target 29)
  local automaticallyAdjusted = math.abs(value - self.nitrogenValues[1].realValue)
  if automaticallyAdjusted < 1000 then
  end
  -- TODO: structure LOP_FORNLOOP (pc 28, target 9)
  return nAmountOffset, forcedFruitType
end
function NitrogenMap:updateLastNitrogenValues()
  self.lastActualValue = -1
  self.lastTargetValue = -1
  self.lastYieldPotential = -1
  self.lastIgnoreOverfertilization = nil
  self.lastRegularNValue = -1
  return self.lastActualValue, self.lastTargetValue, self.lastYieldPotential, self.lastRegularNValue, self.lastIgnoreOverfertilization
end
function NitrogenMap:getYieldFactorByLevelDifference(difference, ignoreOverfertilization)
  if 0 < difference and ignoreOverfertilization == true then
  end
  return nAmountOffset:get(difference)
end
function NitrogenMap:buildOverlay(overlay, filter, isColorBlindMode, isMinimap)
  resetDensityMapVisualizationOverlay(overlay)
  setOverlayColor(overlay, 1, 1, 1, 1)
  if isMinimap then
    -- if v0.minimapMissionState then goto L70 end
  end
  if self.coverMap ~= nil then
    local nLevel = bitShiftLeft(2 ^ (self.coverMap.numChannels - 1) - 1, 1)
    -- TODO: structure LOP_FORNPREP (pc 35, target 129)
    if filter[self.nitrogenValues[1].filterIndex] then
      if isColorBlindMode then
      end
      if forcedFruitType ~= nil then
        setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMap, fillType.bitVectorMap, nLevel, self.firstChannel, self.numChannels, manualSprayRate.value, forcedFruitType[1], forcedFruitType[2], forcedFruitType[3])
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 68, target 36)
    -- goto L129  (LOP_JUMP +59)
    if self.pfModule.inGameMenuMapFrameExtension.inGameMenuMapFrame ~= nil then
      local nLevel, defaultNitrogenRequirementIndex, lockSprayTypeIndex = nLevel:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
      if self.pfModule.inGameMenuMapFrameExtension.inGameMenuMapFrame.mapOverlayGenerator ~= nil then
        local nitrogenLevelOffset = bitShiftLeft(1, lockSprayTypeIndex)
        -- TODO: structure LOP_FORNPREP (pc 106, target 129)
        local v16 = math.min(1, #self.pfModule.inGameMenuMapFrameExtension.inGameMenuMapFrame.mapOverlayGenerator.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED].colors[isColorBlindMode])
        setDensityMapVisualizationOverlayStateColor(overlay, nLevel, 0, 0, defaultNitrogenRequirementIndex, lockSprayTypeIndex, 1, self.pfModule.inGameMenuMapFrameExtension.inGameMenuMapFrame.mapOverlayGenerator.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED].colors[isColorBlindMode][v16][1], self.pfModule.inGameMenuMapFrameExtension.inGameMenuMapFrame.mapOverlayGenerator.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED].colors[isColorBlindMode][v16][2], self.pfModule.inGameMenuMapFrameExtension.inGameMenuMapFrame.mapOverlayGenerator.displaySoilStates[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED].colors[isColorBlindMode][v16][3])
        -- TODO: structure LOP_FORNLOOP (pc 128, target 107)
      end
    end
  end
  if NitrogenMap.DEBUG_N_OFFSET_MAP then
    resetDensityMapVisualizationOverlay(overlay)
    setOverlayColor(overlay, 1, 1, 1, 1)
    setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMapNOffset, 0, 0, 0, 3, 0, 1, 0, 0)
    setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMapNOffset, 0, 0, 0, 3, 1, 0.8, 0.2, 0)
    setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMapNOffset, 0, 0, 0, 3, 2, 0.6, 0.4, 0)
    setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMapNOffset, 0, 0, 0, 3, 3, 0.4, 0.6, 0)
    setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMapNOffset, 0, 0, 0, 3, 4, 0.2, 0.8, 0)
    setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMapNOffset, 0, 0, 0, 3, 5, 0, 1, 0)
    setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMapNOffset, 0, 0, 0, 3, 6, 0, 0.5, 0.5)
    setDensityMapVisualizationOverlayStateColor(overlay, self.bitVectorMapNOffset, 0, 0, 0, 3, 7, 0, 0, 1)
  end
end
function NitrogenMap:getDisplayValues()
  if self.valuesToDisplay == nil then
    self.valuesToDisplay = {}
    -- TODO: structure LOP_FORNPREP (pc 13, target 63)
    if self.nitrogenValues[1].showOnHud then
      {colors = {}}.colors[true] = {self.nitrogenValues[1].colorBlind}
      {colors = {}}.colors[false] = {self.nitrogenValues[1].color}
      local nLevel = string.format("%d kg/ha", self.nitrogenValues[1].realValue)
      table.insert(self.valuesToDisplay, {colors = {}, description = nLevel})
    end
    -- TODO: structure LOP_FORNLOOP (pc 62, target 14)
    {colors = {}}.colors[true] = {{0, 0, 0}}
    {colors = {}}.colors[false] = {{0, 0, 0}}
    table.insert(self.valuesToDisplay, {colors = {}, description = self.outdatedLabel})
  end
  return self.valuesToDisplay
end
function NitrogenMap:getValueFilter()
  if self.valueFilter ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L44
  end
  self.valueFilter = {}
  self.valueFilterEnabled = {}
  -- TODO: structure LOP_FORNPREP (pc 21, target 44)
  table.insert(self.valueFilter, true)
  if 1 > self.numVisualValues then
  end
  table.insert(fillType, true)
  -- TODO: structure LOP_FORNLOOP (pc 43, target 22)
  return self.valueFilter, self.valueFilterEnabled
end
function NitrogenMap.getMinimapZoomFactor(v0)
  return 3
end
function NitrogenMap:collectFieldInfos(fieldInfoDisplayExtension)
  local fillTypeIndex = fillTypeIndex:getText("fieldInfo_nValue", NitrogenMap.MOD_NAME)
  fieldInfoDisplayExtension:addFieldInfo(fillTypeIndex, self, self.updateFieldInfoDisplay, 3, self.getFieldInfoYieldChange)
end
function NitrogenMap.getAllowCoverage(v0)
  return true
end
function NitrogenMap.getHelpLinePage(v0)
  return 5
end
function NitrogenMap:getRequiresAdditionalActionButton(farmlandId)
  if self.soilMap ~= nil then
    return fillTypeIndex:getRequiresAdditionalActionButton(farmlandId)
  end
  return false
end
function NitrogenMap:getAdditionalActionButtonText()
  if self.soilMap ~= nil then
    return nitrogenAmount:getAdditionalActionButtonText()
  end
end
function NitrogenMap:onAdditionalActionButtonPressed(farmlandId)
  if self.soilMap ~= nil then
    return fillTypeIndex:onAdditionalActionButtonPressed(farmlandId)
  end
end
function NitrogenMap:updateFieldInfoDisplay(fieldInfo, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, isColorBlindMode)
  fieldInfo.nFactor = 0
  fieldInfo.yieldPotential = 1
  fieldInfo.yieldPotentialToHa = 0
  if self.coverMap ~= nil and self.coverMap.bitVectorMap ~= nil and self.soilMap ~= nil and self.soilMap.bitVectorMap ~= nil then
    if self.densityMapModifiersFieldInfo.modifier ~= nil and self.densityMapModifiersFieldInfo.soilFilter ~= nil and self.densityMapModifiersFieldInfo.coverFilter ~= nil and self.densityMapModifiersFieldInfo.fruitFilter ~= nil and self.densityMapModifiersFieldInfo.tempFruitModifier ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R16 aux=0x80000000 -> L173
    end
    local v18 = DensityMapModifier.new(self.bitVectorMap, self.firstChannel, self.numChannels)
    self.densityMapModifiersFieldInfo.modifier = v18
    v18 = DensityMapFilter.new(manualSprayRate.bitVectorMap, manualSprayRate.typeFirstChannel, manualSprayRate.typeNumChannels)
    self.densityMapModifiersFieldInfo.soilFilter = v18
    v18 = DensityMapFilter.new(automaticallyAdjusted.bitVectorMap, automaticallyAdjusted.firstChannel, automaticallyAdjusted.numChannels)
    self.densityMapModifiersFieldInfo.coverFilter = v18
    self.densityMapModifiersFieldInfo.coverFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, automaticallyAdjusted.maxValue)
    v18 = DensityMapFilter.new(self.densityMapModifiersFieldInfo.modifier)
    self.densityMapModifiersFieldInfo.fruitFilter = v18
    v18 = DensityMapModifier.new(self.bitVectorMapNFruitFilterMask, 0, 1)
    self.densityMapModifiersFieldInfo.tempFruitModifier = v18
    self.densityMapModifiersFieldInfo.tempFruitModifier:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
    v18 = DensityMapFilter.new(self.bitVectorMapNFruitFilterMask, 0, 1)
    self.densityMapModifiersFieldInfo.tempFruitFilter = v18
    self.densityMapModifiersFieldInfo.tempFruitFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
    self.densityMapModifiersFieldInfo.modifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
    self.densityMapModifiersFieldInfo.tempFruitModifier:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
    -- TODO: structure LOP_FORNPREP (pc 240, target 428)
    if self.fruitRequirements[1].fruitType ~= nil and self.fruitRequirements[1].fruitType.terrainDataPlaneId ~= nil and self.fruitRequirements[1].fruitType.terrainDataPlaneId ~= 0 then
      self.densityMapModifiersFieldInfo.tempFruitModifier:executeSet(0)
      self.densityMapModifiersFieldInfo.fruitFilter:resetDensityMapAndChannels(self.fruitRequirements[1].fruitType.terrainDataPlaneId, self.fruitRequirements[1].fruitType.startStateChannel, self.fruitRequirements[1].fruitType.numStateChannels)
      if self.fruitRequirements[1].alwaysAllowFertilization then
        self.densityMapModifiersFieldInfo.fruitFilter:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      else
        self.densityMapModifiersFieldInfo.fruitFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, self.fruitRequirements[1].fruitType.maxHarvestingGrowthState)
      end
      v15:executeSet(1, v14, defaultNitrogenRequirementIndex)
      -- TODO: structure LOP_FORNPREP (pc 298, target 427)
      nitrogenLevelOffset:setValueCompareParams(DensityValueCompareType.EQUAL, v20.bySoilType[1].soilTypeIndex - 1)
      local v26, v27, v28 = forcedFruitType:executeGet(v16, nitrogenLevelOffset)
      if v28 * 0.3 < v27 then
        local v29 = math.floor(v26 / v27)
        local v30 = self:getNitrogenValueFromInternalValue(v29)
        local v31 = self:getNitrogenValueFromInternalValue(v20.bySoilType[1].targetLevel)
        if v20.ignoreOverfertilization then
          local v35 = math.max(v20.bySoilType[1].targetLevel - v29, 0)
        end
        if v31 == 0 then
        end
        v35 = math.abs(v34)
        -- TODO: structure LOP_FORNPREP (pc 362, target 379)
        if self.levelDifferenceColors[1].levelDifference <= v35 then
          if isColorBlindMode then
          else
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 378, target 363)
        fieldInfo.yieldPotential = v25.yieldPotential
        v35 = self:getYieldFactorByLevelDifference(v29 - v25.targetLevel, v20.ignoreOverfertilization)
        fieldInfo.nFactor = v35
        v35 = v35:getFillTypeByFruitTypeIndex(v21.index)
        if v35 ~= nil then
          fieldInfo.yieldPotentialToHa = v25.yieldPotential * v21.literPerSqm * 10000 * v35.massPerLiter / FillTypeManager.MASS_SCALE * 2
        end
        local v36 = string.format("%d / %d kg/ha", v30, v31)
        return v36, v32, v33
      end
      -- TODO: structure LOP_FORNLOOP (pc 426, target 299)
    end
    -- TODO: structure LOP_FORNLOOP (pc 427, target 241)
    local v17, v18, v19 = forcedFruitType:executeGet(defaultNitrogenRequirementIndex)
    if 0 < v18 then
      local v20 = math.floor(v17 / v18)
      local v23 = self:getNitrogenValueFromInternalValue(v20)
      return string.format(...)
    end
  end
  return nil
end
function NitrogenMap.getFieldInfoYieldChange(v0, nitrogenAmount)
  return nitrogenAmount.nFactor or 0, 0.5, nitrogenAmount.yieldPotential or 1, nitrogenAmount.yieldPotentialToHa or 0
end
function NitrogenMap:drawYieldDebug(nActualValue, nTargetValue)
  if self.debugGraph == nil then
    local nAmountOffset = Graph.new(#self.yieldCurve.keyframes, 0.2, 0.05, 0.2, 0.15, 0, 100, false, "%", Graph.STYLE_LINES)
    self.debugGraph = nAmountOffset
    nAmountOffset:setHorizontalLine(10, true, 1, 1, 1, 1)
    nAmountOffset:setVerticalLine(0.1, false, 1, 1, 1, 1)
    nAmountOffset:setColor(0, 1, 0, 1)
  end
  -- TODO: structure LOP_FORNPREP (pc 67, target 106)
  local automaticallyAdjusted = automaticallyAdjusted:get(self.yieldCurve.keyframes[1].time)
  manualSprayRate:setValue(1, automaticallyAdjusted * 100)
  local manualSprayRate = math.min(self.yieldCurve.keyframes[1].time, math.huge)
  manualSprayRate = math.max(self.yieldCurve.keyframes[1].time, -math.huge)
  -- TODO: structure LOP_FORNLOOP (pc 105, target 68)
  fillType:draw()
  if manualSprayRate ~= math.huge then
    local lockSprayTypeIndex = MathUtil.inverseLerp(manualSprayRate, manualSprayRate, nActualValue - nTargetValue)
    setOverlayColor(self.debugGraph.overlayHLine, 1, 0, 0, 1)
    renderOverlay(self.debugGraph.overlayHLine, self.debugGraph.left + lockSprayTypeIndex * self.debugGraph.width, self.debugGraph.bottom, 1 / g_screenWidth, self.debugGraph.height)
    setOverlayColor(self.debugGraph.overlayHLine, 1, 1, 1, 1)
  end
end
function NitrogenMap.overwriteGameFunctions(v0, nitrogenAmount)
  local nAmountOffset = nAmountOffset:superClass()
  nAmountOffset.overwriteGameFunctions(v0, nitrogenAmount)
  nitrogenAmount:overwriteGameFunction(FertilizingSowingMachine, "processSowingMachineArea", function(v0, nitrogenAmount, fillTypeIndex, nAmountOffset, forcedFruitType)
    if not nitrogenAmount.spec_sowingMachine.workAreaParameters.isActive then
      return v0(nitrogenAmount, fillTypeIndex, nAmountOffset, forcedFruitType)
    end
    if not automaticallyAdjusted.canFruitBePlanted then
      manualSprayRate = v0(nitrogenAmount, fillTypeIndex, nAmountOffset, forcedFruitType)
      return manualSprayRate
    end
    if lockSprayTypeIndex.sprayFillLevel > 0 then
      -- if not v5.needsSetIsTurnedOn then goto L49 end
      manualSprayRate = nitrogenAmount:getIsTurnedOn()
      -- if v10 then goto L49 end
    end
    manualSprayRate = v0(nitrogenAmount, fillTypeIndex, nAmountOffset, forcedFruitType)
    return manualSprayRate
    if nitrogenAmount.preProcessExtUnderRootFertilizerArea ~= nil then
      nitrogenAmount:preProcessExtUnderRootFertilizerArea(nAmountOffset, forcedFruitType)
    end
    local manualSprayRate, forcedFruitType = v0(nitrogenAmount, fillTypeIndex, nAmountOffset, forcedFruitType)
    if nitrogenAmount.postProcessExtUnderRootFertilizerArea ~= nil then
      nitrogenAmount:postProcessExtUnderRootFertilizerArea(nAmountOffset, forcedFruitType, manualSprayRate, forcedFruitType)
    end
    return manualSprayRate, forcedFruitType
  end)
  nitrogenAmount:overwriteGameFunction(FertilizingCultivator, "processCultivatorArea", function(v0, nitrogenAmount, fillTypeIndex, nAmountOffset, forcedFruitType)
    if nitrogenAmount.spec_sprayer.workAreaParameters.sprayFillLevel > 0 then
      -- if not v1.spec_fertilizingCultivator.needsSetIsTurnedOn then goto L25 end
      local lockSprayTypeIndex = nitrogenAmount:getIsTurnedOn()
      -- if v8 then goto L25 end
    end
    lockSprayTypeIndex = v0(nitrogenAmount, fillTypeIndex, nAmountOffset, forcedFruitType)
    return lockSprayTypeIndex
    if nitrogenAmount.preProcessExtUnderRootFertilizerArea ~= nil then
      nitrogenAmount:preProcessExtUnderRootFertilizerArea(nAmountOffset, forcedFruitType)
    end
    local lockSprayTypeIndex, automaticallyAdjusted = v0(nitrogenAmount, fillTypeIndex, nAmountOffset, forcedFruitType)
    if nitrogenAmount.postProcessExtUnderRootFertilizerArea ~= nil then
      nitrogenAmount:postProcessExtUnderRootFertilizerArea(nAmountOffset, forcedFruitType, lockSprayTypeIndex, automaticallyAdjusted)
    end
    return lockSprayTypeIndex, automaticallyAdjusted
  end)
  nitrogenAmount:overwriteGameFunction(Combine, "processCombineChopperArea", function(v0, nitrogenAmount, fillTypeIndex)
    if not nitrogenAmount.spec_combine.isSwathActive and 0 < nitrogenAmount.spec_combine.workAreaParameters.litersToDrop and 0 < nitrogenAmount.spec_combine.workAreaParameters.strawRatio and 0.5 < nitrogenAmount.spec_combine.workAreaParameters.strawRatio and nitrogenAmount.spec_combine.workAreaParameters.strawGroundType ~= nil then
      local defaultNitrogenRequirementIndex, lockSprayTypeIndex, automaticallyAdjusted = getWorldTranslation(fillTypeIndex.start)
      local manualSprayRate, forcedFruitType, nitrogenLevelOffset = getWorldTranslation(fillTypeIndex.width)
      local defaultNitrogenRequirementIndex, v14, v15 = getWorldTranslation(fillTypeIndex.height)
      v16:preUpdateStrawChopperArea(defaultNitrogenRequirementIndex, automaticallyAdjusted, manualSprayRate, nitrogenLevelOffset, defaultNitrogenRequirementIndex, v15, nitrogenAmount.spec_combine.workAreaParameters.strawGroundType)
      local v16, v17 = v0(nitrogenAmount, fillTypeIndex)
      v18:postUpdateStrawChopperArea(defaultNitrogenRequirementIndex, automaticallyAdjusted, manualSprayRate, nitrogenLevelOffset, defaultNitrogenRequirementIndex, v15, nitrogenAmount.spec_combine.workAreaParameters.strawGroundType)
      return v16, v17
    end
    return v0(nitrogenAmount, fillTypeIndex)
  end)
end
