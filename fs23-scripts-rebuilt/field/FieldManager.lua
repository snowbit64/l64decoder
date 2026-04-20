-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FieldManager = {FIELDSTATE_PLOWED = 0, FIELDSTATE_CULTIVATED = 1, FIELDSTATE_GROWING = 2, FIELDSTATE_HARVESTED = 3, FIELDEVENT_PLOWED = 1, FIELDEVENT_CULTIVATED = 2, FIELDEVENT_HARVESTED = 3, FIELDEVENT_GROWN = 4, FIELDEVENT_WEEDED = 5, FIELDEVENT_SPRAYED = 6, FIELDEVENT_SOWN = 7, FIELDEVENT_WITHERED = 8, FIELDEVENT_GROWING = 9, FIELDEVENT_FERTILIZED = 10, FIELDEVENT_LIMED = 11, DEBUG_SHOW_FIELDSTATUS = false, DEBUG_SHOW_FIELDSTATUS_SIZE = 5, NPC_START_TIME = 21600000, NPC_END_TIME = 79200000}
local FieldManager_mt = Class(FieldManager, AbstractManager)
function FieldManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function FieldManager:initDataStructures()
  self.fields = {}
  self.farmlandIdFieldMapping = {}
  self.fieldStatusParametersToSet = nil
  self.currentFieldPartitionIndex = nil
  self.nextCheckTime = 0
  self.nextUpdateTime = 0
  self.nextFieldCheckIndex = 0
  self.updateTasks = {}
end
function FieldManager:loadMapData(xmlFile)
  local v3 = v3:superClass()
  v3.loadMapData(self)
  self.mission = g_currentMission
  g_currentMission:addUpdateable(self)
  local v5, v6, v7 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
  local v8 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
  self.limeLevelMaxValue = 0
  self.plowLevelMaxValue = 0
  self.sprayLevelMaxValue = v8
  self.fruitModifiers = {}
  local v9 = DensityMapModifier.new(v5, v6, v7, g_currentMission.terrainRootNode)
  self.sprayLevelModifier = v9
  if Platform.gameplay.usePlowCounter then
    local v9, v10, v11 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
    local v12 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.PLOW_LEVEL)
    self.plowLevelMaxValue = v12
    local v13 = DensityMapModifier.new(v9, v10, v11, g_currentMission.terrainRootNode)
    self.plowLevelModifier = v13
  end
  if Platform.gameplay.useLimeCounter then
    v9, v10, v11 = v4:getDensityMapData(FieldDensityMap.LIME_LEVEL)
    v12 = v4:getMaxValue(FieldDensityMap.LIME_LEVEL)
    self.limeLevelMaxValue = v12
    v12 = DensityMapModifier.new(v9, v10, v11, v3)
    self.limeLevelModifier = v12
  end
  if Platform.gameplay.useStubbleShred then
    v9, v10, v11 = v4:getDensityMapData(FieldDensityMap.STUBBLE_SHRED)
    v12 = DensityMapModifier.new(v9, v10, v11, v3)
    self.stubbleShredModifier = v12
  end
  v9, v10, v11 = v4:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  v12 = DensityMapModifier.new(v9, v10, v11, v3)
  self.groundTypeModifier = v12
  local v12, v13, v14 = v4:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
  local v15 = DensityMapModifier.new(v12, v13, v14, v3)
  self.angleModifier = v15
  local v15, v16, v17 = v4:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
  local v18 = DensityMapModifier.new(v15, v16, v17, v3)
  self.sprayTypeModifier = v18
  v18 = DensityMapFilter.new(v9, v10, v11)
  self.fieldFilter = v18
  v18:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  v18 = v18:getMapHasWeed()
  if v18 then
    local v18, v19, v20 = v18:getDensityMapData()
    local v21 = DensityMapModifier.new(v18, v19, v20, v3)
    self.weedModifier = v21
  end
  self.fieldGroundSystem = v4
  v19 = DensityMapModifier.new(v2.terrainDetailHeightId, g_densityMapHeightManager.heightTypeFirstChannel, g_densityMapHeightManager.heightTypeNumChannels)
  self.terrainHeightTypeModifier = v19
  v21 = getDensityMapHeightFirstChannel(v2.terrainDetailHeightId)
  local v22 = getDensityMapHeightNumChannels(v2.terrainDetailHeightId)
  v19 = DensityMapModifier.new(...)
  self.terrainHeightModifier = v19
  v19 = v4:getFieldGroundValue(FieldGroundType.SOWN)
  self.groundTypeSown = v19
  v19 = v4:getFieldSprayValue(FieldSprayType.FERTILIZER)
  self.sprayTypeFertilizer = v19
  v19 = v4:getFieldSprayValue(FieldSprayType.LIME)
  self.sprayTypeLime = v19
  self.availableFruitTypeIndices = {}
  v20 = v20:getFruitTypes()
  for v22, v23 in ipairs(...) do
    if not v23.useForFieldJob then
      continue
    end
    if not v23.allowsSeeding then
      continue
    end
    if not v23.needsSeeding then
      continue
    end
    table.insert(self.availableFruitTypeIndices, v23.index)
  end
  self.fruitTypesCount = #self.availableFruitTypeIndices
  self.fieldIndexToCheck = 1
  v19:addSubtask(function()
    for v3, v4 in ipairs(u0.fields) do
      local v5, v6 = v4:getCenterOfFieldWorldPosition()
      local v7 = v7:getFarmlandAtWorldPosition(v5, v6)
      if v7 ~= nil then
        v4:setFarmland(v7)
        if u0.farmlandIdFieldMapping[v7.id] == nil then
          u0.farmlandIdFieldMapping[v7.id] = {}
        end
        table.insert(u0.farmlandIdFieldMapping[v7.id], v4)
      else
        Logging.error("Failed to find farmland in center of field '%s' at %d %d", v3, v5, v6)
      end
    end
  end)
  if not v2.missionInfo.isValid then
    -- cmp-jump LOP_JUMPXEQKNIL R19 aux=0x0 -> L310
    v19:addSubtask(function()
      for v4, v5 in pairs(u0.fields) do
        local v6 = v5:getIsAIActive()
        if not v6 then
          continue
        end
        if not v5.fieldMissionAllowed then
          continue
        end
        if not (v5.farmland ~= nil) then
          continue
        end
        if not not v5.farmland.isOwned then
          continue
        end
        local v8 = math.random(1, #u0.availableFruitTypeIndices)
        if v5.fieldGrassMission then
        end
        v5.plannedFruit = v6
        local v7 = v7:getFruitTypeByIndex(v6)
        if not u1.missionInfo.plowingRequiredEnabled then
        else
          local v10 = math.random(0, u0.plowLevelMaxValue)
        end
        v10 = math.random(0, u0.sprayLevelMaxValue)
        local v11 = math.random(0, u0.limeLevelMaxValue)
        local v13 = v13:getRandomInitialState(v6)
        if v13 == nil and v6 == FruitType.GRASS then
        end
        if v13 ~= nil then
          if v7.plantsWeed then
            if 4 < v13 then
              local v14 = math.random(3, 9)
            else
              v14 = math.random(1, 7)
            end
          end
          -- if v13 ~= v7.cutState then goto L156 end
        else
          local v15 = math.random()
          if v15 < 0.5 then
            -- if FieldManager.FIELDSTATE_CULTIVATED then goto L145 end
          end
          if FieldManager.FIELDSTATE_PLOWED == FieldManager.FIELDSTATE_PLOWED then
          end
        end
        local v17 = table.getn(v5.maxFieldStatusPartitions)
        -- TODO: structure LOP_FORNPREP (pc 164, target 182)
        v17:setFieldPartitionStatus(v5, v5.maxFieldStatusPartitions, 1, v6, v8, v13, v10, false, v9, v12, v11)
        -- TODO: structure LOP_FORNLOOP (pc 181, target 165)
      end
    end)
  elseif g_server ~= nil then
    for v22, v23 in pairs(self.fields) do
      v24:addSubtask(function()
        self:findFieldFruit(u1)
      end)
    end
  end
  v19:addSubtask(function()
    self:findFieldSizes()
  end)
  v19:addSubtask(function()
    self:addStateChangeListener(u0)
    local self = self:getIsServer()
    if self and g_addCheatCommands then
      addConsoleCommand("gsFieldSetFruit", "Sets a given fruit to field", "consoleCommandSetFieldFruit", u0)
      addConsoleCommand("gsFieldSetFruitAll", "Sets a given fruit to all fields", "consoleCommandSetFieldFruitAll", u0)
      addConsoleCommand("gsFieldSetGround", "Sets a given fruit to field", "consoleCommandSetFieldGround", u0)
      addConsoleCommand("gsFieldSetGroundAll", "Sets a given fruit to allfield", "consoleCommandSetFieldGroundAll", u0)
    end
    if g_addCheatCommands then
      addConsoleCommand("gsFieldToggleStatus", "Shows field status", "consoleCommandToggleDebugFieldStatus", u0)
    end
  end)
  v19:addSubtask(function()
    local self = self:getIsServer()
    if not self then
      for v3, v4 in pairs(u1.fields) do
        v5:setFieldGround(v4, FieldGroundType.CULTIVATED, v4.fieldAngle, 0, 0, 0, 0, 0, 0, false, false)
      end
    end
  end)
  v19:subscribe(MessageType.FARM_PROPERTY_CHANGED, self.onFarmPropertyChanged, self)
  v19:subscribe(MessageType.YEAR_CHANGED, self.onYearChanged, self)
  v19:subscribe(MessageType.PERIOD_CHANGED, self.onPeriodChanged, self)
end
function FieldManager:unloadMapData()
  if self.mission ~= nil then
    xmlFile:removeUpdateable(self)
  end
  xmlFile:removeStateChangeListener(self)
  for v4, v5 in pairs(self.fields) do
    v5:delete()
  end
  self.fields = {}
  self.fieldsToCheck = nil
  self.fieldsToUpdate = nil
  self.fieldGroundSystem = nil
  self.sprayLevelModifier = nil
  self.plowLevelModifier = nil
  self.limeLevelModifier = nil
  self.stubbleShredModifier = nil
  self.fruitModifiers = nil
  self.sprayTypeModifier = nil
  self.angleModifier = nil
  self.groundTypeModifier = nil
  self.fieldFilter = nil
  self.weedModifier = nil
  self.terrainHeightTypeModifier = nil
  self.terrainHeightModifier = nil
  self.mission = nil
  xmlFile:unsubscribeAll(self)
  removeConsoleCommand("gsFieldSetFruit")
  removeConsoleCommand("gsFieldSetFruitAll")
  removeConsoleCommand("gsFieldSetGround")
  removeConsoleCommand("gsFieldSetGroundAll")
  removeConsoleCommand("gsFieldToggleStatus")
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function FieldManager.delete(v0)
end
function FieldManager.loadFromXMLFile(v0, xmlFile)
  local v2 = XMLFile.load("fields", xmlFile)
  if v2 == nil then
    return
  end
  v2:iterate("fields.field", function(v0, xmlFile)
    local v2 = v2:getInt(xmlFile .. "#id")
    local v3 = v3:getString(xmlFile .. "#plannedFruit")
    local v4 = v4:getFruitTypeByName(v3)
    if v2 ~= nil then
      local v5 = v5:getFieldByIndex(v2)
      if v5 ~= nil then
        if v3 == "FALLOW" then
          v5.plannedFruit = 0
          return
        end
        if v4 ~= nil then
          v5.plannedFruit = v4.index
        end
      end
    end
  end)
  v2:iterate("fields.tasks", function(v0, xmlFile)
    local v2 = v2:getInt(xmlFile .. "#id")
    local v3 = v3:getInt(xmlFile .. "#partitionIndex")
    local v4 = v4:getInt(xmlFile .. "#growthState")
    local v5 = v5:getInt(xmlFile .. "#fieldState")
    local v6 = v6:getString(xmlFile .. "#fruit")
    local v7 = v7:getFruitTypeByName(v6)
    if v7 ~= nil then
    end
    table.insert(u1.updateTasks, {fieldId = v2, partitionIndex = v3, fruitIndex = v8, growthState = v4, fieldState = v5})
  end)
  v2:delete()
end
function FieldManager:saveToXMLFile(xmlFilename)
  local xmlFile = XMLFile.create("fields", xmlFilename, "fields")
  -- TODO: structure LOP_FORNPREP (pc 11, target 56)
  local v7 = string.format("fields.field(%d)", 1 - 1)
  xmlFile:setInt(v7 .. "#id", self.fields[1].fieldId)
  if self.fields[1].plannedFruit == 0 then
    xmlFile:setString(v7 .. "#plannedFruit", "FALLOW")
  else
    local v12 = v12:getFruitTypeByIndex(self.fields[1].plannedFruit)
    xmlFile:setString(v7 .. "#plannedFruit", v12.name)
  end
  -- TODO: structure LOP_FORNLOOP (pc 55, target 12)
  -- TODO: structure LOP_FORNPREP (pc 61, target 130)
  v7 = string.format("fields.tasks(%d)", 1 - 1)
  xmlFile:setInt(v7 .. "#id", self.updateTasks[1].fieldId)
  xmlFile:setInt(v7 .. "#partitionIndex", self.updateTasks[1].partitionIndex)
  if self.updateTasks[1].fruitIndex ~= nil then
    v12 = v12:getFruitTypeByIndex(self.updateTasks[1].fruitIndex)
    xmlFile:setString(v7 .. "#fruit", v12.name)
  end
  if v6.growthState ~= nil then
    xmlFile:setInt(v7 .. "#growthState", v6.growthState)
  end
  if v6.fieldState ~= nil then
    xmlFile:setInt(v7 .. "#fieldState", v6.fieldState)
  end
  -- TODO: structure LOP_FORNLOOP (pc 129, target 62)
  xmlFile:save()
  xmlFile:delete()
end
function FieldManager:update(dt)
  if g_server == nil then
    return
  end
  local v2 = table.remove(self.updateTasks, 1)
  if v2 ~= nil then
    local v3 = self:getFieldByIndex(v2.fieldId)
    self:setFieldPartitionStatus(v3, v3.setFieldStatusPartitions, v2.partitionIndex, v2.fruitIndex, v2.fieldState, v2.growthState, nil, nil, nil, nil, nil)
  end
  if self.fieldsToCheck == nil then
    self:setupAIFieldChecks()
  end
  if self.fieldStatusParametersToSet ~= nil then
    if self.currentFieldPartitionIndex == nil then
      self.currentFieldPartitionIndex = 1
    else
      self.currentFieldPartitionIndex = self.currentFieldPartitionIndex + 1
    end
    local v4 = table.getn(self.fieldStatusParametersToSet[2])
    if v4 < self.currentFieldPartitionIndex then
      self.currentFieldPartitionIndex = nil
      self.fieldStatusParametersToSet = nil
    end
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L207
    self.fieldStatusParametersToSet[3] = self.currentFieldPartitionIndex
    self:setFieldPartitionStatus(self.fieldStatusParametersToSet[1], self.fieldStatusParametersToSet[2], self.fieldStatusParametersToSet[3], self.fieldStatusParametersToSet[4], self.fieldStatusParametersToSet[5], self.fieldStatusParametersToSet[6], self.fieldStatusParametersToSet[7], self.fieldStatusParametersToSet[8], self.fieldStatusParametersToSet[9], self.fieldStatusParametersToSet[10], self.fieldStatusParametersToSet[11])
    return
  end
  if 0 < #self.fields then
    if 0 < #self.fieldsToCheck and self.nextCheckTime <= g_time then
      self.nextFieldCheckIndex = self.nextFieldCheckIndex + 1
      if #self.fieldsToCheck < self.nextFieldCheckIndex then
        self.nextFieldCheckIndex = 1
      end
      v4 = self.fieldsToCheck[self.nextFieldCheckIndex]:getIsAIActive()
      if v4 and self.fieldsToCheck[self.nextFieldCheckIndex].fieldMissionAllowed and self.fieldsToCheck[self.nextFieldCheckIndex].currentMission == nil and self.fieldsToCheck[self.nextFieldCheckIndex].fruitType ~= FruitType.GRASS then
        self:updateNPCField(self.fieldsToCheck[self.nextFieldCheckIndex], false)
      end
      self.nextCheckTime = g_time + 200
    end
    if self.nextUpdateTime <= g_time then
      v3 = table.remove(self.fieldsToUpdate, 1)
      if v3 ~= nil then
        v4 = v3:getIsAIActive()
        if v4 and v3.fieldMissionAllowed and v3.currentMission == nil and v3.fruitType ~= FruitType.GRASS then
          self:updateNPCField(v3, true)
        end
        self.nextUpdateTime = g_time + 500
      end
    end
  end
end
function FieldManager.draw(v0)
  if FieldManager.DEBUG_SHOW_FIELDSTATUS then
    local v2 = getCamera()
    local xmlFile, v2, v3 = getWorldTranslation(...)
    DebugUtil.drawDebugAreaRectangle(xmlFile - FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, 0, v3 + FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, xmlFile + FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, 0, v3 + FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, xmlFile - FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, 0, v3 - FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, true, 1, 0, 0)
    local v11 = FSDensityMapUtil.getStatus(xmlFile - FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, v3 + FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, xmlFile + FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, v3 + FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, xmlFile - FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5, v3 - FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE * 0.5)
    DebugUtil.renderTable(0.1, 0.98, 0.012, v11, 0.1)
  end
end
function FieldManager:addField(field)
  table.insert(self.fields, field)
  field:setFieldId(#self.fields)
  field:addMapHotspot()
end
function FieldManager:getFieldByIndex(index)
  if index ~= nil then
    return self.fields[index]
  end
  return nil
end
function FieldManager:getFields()
  return self.fields
end
function FieldManager:getFruitModifier(fruitType)
  if self.fruitModifiers[fruitType] == nil then
    local fruitModifier = DensityMapModifier.new(fruitType.terrainDataPlaneId, fruitType.startStateChannel, fruitType.numStateChannels, self.mission.terrainRootNode)
    if fruitType.terrainDataPlaneIdPreparing ~= nil then
      local v5 = DensityMapModifier.new(fruitType.terrainDataPlaneIdPreparing, 0, 1, self.mission.terrainRootNode)
    end
    self.fruitModifiers = v2
  end
  return v2.default, v2.preparing
end
function FieldManager:findFieldFruit(field)
  if field.fieldMissionAllowed then
    local v2, v3 = FieldUtil.getMeasurementPositionOfField(field)
    for v8, v9 in ipairs(self.availableFruitTypeIndices) do
      local v11, v12 = FieldUtil.getFruitArea(v2 - 1, v3 - 1, v2 + 1, v3 - 1, v2 - 1, v3 + 1, FieldUtil.FILTER_EMPTY, FieldUtil.FILTER_EMPTY, v9, 0, 15, 0, 0, 0, false)
      if 0.5 * v12 >= v11 then
      end
      if not true then
        continue
      end
      field.fruitType = v9
      break
    end
    v7, v8 = FieldUtil.getFruitArea(v2 - 1, v3 - 1, v2 + 1, v3 - 1, v2 - 1, v3 + 1, FieldUtil.FILTER_EMPTY, FieldUtil.FILTER_EMPTY, FruitType.GRASS, 0, 15, 0, 0, 0, false)
    if 0.5 * v8 >= v7 then
    end
    if true then
      field.fruitType = FruitType.GRASS
    end
  end
end
function FieldManager:findFieldSizes()
  local terrainSize = getTerrainSize(self.mission.terrainRootNode)
  for v7, v8 in pairs(self.fields) do
    local bitVector = createBitVectorMap("field")
    loadBitVectorMapNew(bitVector, 4096, 4096, 1, true)
    local v14 = getNumOfChildren(v8.fieldDimensions)
    -- TODO: structure LOP_FORNPREP (pc 38, target 149)
    v14 = getChildAt(v8.fieldDimensions, 0)
    local v15 = getChildAt(v14, 0)
    local v16 = getChildAt(v14, 1)
    local v17, v18, v19 = getWorldTranslation(v15)
    local v20, v21, v22 = getWorldTranslation(v14)
    local v23, v24, v25 = getWorldTranslation(v16)
    local v28 = math.floor(4096 * (v17 + terrainSize * 0.5) / terrainSize)
    local v27 = math.floor(4096 * (v19 + terrainSize * 0.5) / terrainSize)
    local v32 = math.floor(4096 * (v20 + terrainSize * 0.5) / terrainSize)
    v32 = math.floor(4096 * (v22 + terrainSize * 0.5) / terrainSize)
    v32 = math.floor(4096 * (v23 + terrainSize * 0.5) / terrainSize)
    v32 = math.floor(4096 * (v25 + terrainSize * 0.5) / terrainSize)
    v28 = setBitVectorMapParallelogram(bitVector, v28, v27, v32 - v28, v32 - v27, v32 - v28, v32 - v27, 0, 1, 0)
    -- TODO: structure LOP_FORNLOOP (pc 148, target 39)
    v8.fieldArea = (0 + v28) * terrainSize / 4096 * terrainSize / 4096 / 10000
    delete(bitVector)
  end
end
function FieldManager:updateFieldOwnership()
  for v4, v5 in ipairs(self.fields) do
    v5:updateOwnership()
  end
end
function FieldManager:updateNPCField(field, allowUpdates)
  local v3, v4 = FieldUtil.getMeasurementPositionOfField(field)
  if field.fruitType ~= nil then
    local v5 = v5:getFruitTypeByIndex(field.fruitType)
    if v5 == nil then
      field.fruitType = nil
      return
    end
    if v5.minHarvestingGrowthState == 0 and v5.maxHarvestingGrowthState == 0 and v5.cutState ~= 0 then
    end
    local maxGrowthState = FieldUtil.getMaxGrowthState(field, field.fruitType)
    if field.maxKnownGrowthState == nil then
      field.maxKnownGrowthState = maxGrowthState
    elseif field.maxKnownGrowthState ~= maxGrowthState then
      field.maxKnownGrowthState = maxGrowthState
      v8:validateMissionOnField(field, FieldManager.FIELDEVENT_GROWING, true)
    end
    if v5.minHarvestingGrowthState > maxGrowthState then
      -- cmp-jump LOP_JUMPXEQKN R8 aux=0x14 -> L94
      -- if v5.minPreparingGrowthState + 1 > v7 then goto L94 end
      -- if v7 > v5.maxPreparingGrowthState then goto L94 end
    end
    v8:validateMissionOnField(field, FieldManager.FIELDEVENT_GROWN)
    if v6 then
      if maxGrowthState == 2 and allowUpdates then
        self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, nil, FieldManager.FIELDSTATE_CULTIVATED, 0, self.sprayLevelMaxValue, true}
        v8:validateMissionOnField(field, FieldManager.FIELDEVENT_CULTIVATED)
      end
      return
    end
    if v5.witheredState ~= nil then
      local v9, v10 = FieldUtil.getFruitArea(v3 - 1, v4 - 1, v3 + 1, v4 - 1, v3 - 1, v4 + 1, FieldUtil.FILTER_EMPTY, FieldUtil.FILTER_EMPTY, field.fruitType, v5.witheredState, v5.witheredState, 0, 0, 0, false)
      if 0.5 * v10 < v9 then
        v11:validateMissionOnField(field, FieldManager.FIELDEVENT_WITHERED)
        if allowUpdates then
          local v11 = math.random()
          if 0.2 < v11 then
            if v5.increasesSoilDensity then
            else
              local v12 = FieldUtil.getPlowFactor(field, true)
            end
            if v5.consumesLime then
            else
              local v13 = FieldUtil.getLimeFactor(field)
            end
            self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, field.fruitType, FieldManager.FIELDSTATE_HARVESTED, v5.cutState, 0, false, v11, 0, v12}
            v13:validateMissionOnField(field, FieldManager.FIELDEVENT_HARVESTED)
            return
          end
          v11 = FieldUtil.getPlowFactor(field, true)
          if v11 == 0 then
            self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, nil, FieldManager.FIELDSTATE_PLOWED, 0, nil, false}
            v12:validateMissionOnField(field, FieldManager.FIELDEVENT_PLOWED)
            return
          end
          self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, nil, FieldManager.FIELDSTATE_CULTIVATED, 0, nil, false}
          v12:validateMissionOnField(field, FieldManager.FIELDEVENT_CULTIVATED)
        end
        return
      end
    end
    if -1 < v5.maxPreparingGrowthState then
    end
    v10 = FieldUtil.getMaxHarvestState(field, field.fruitType)
    if v10 == v9 then
      if allowUpdates then
        v11 = math.random()
        if v11 < 0.1 then
          if v5.increasesSoilDensity then
          else
            v12 = FieldUtil.getPlowFactor(field, true)
          end
          if v5.consumesLime then
          else
            v13 = FieldUtil.getLimeFactor(field)
          end
          self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, field.fruitType, FieldManager.FIELDSTATE_HARVESTED, v5.cutState, 0, false, v11, 0, v12}
          v13:validateMissionOnField(field, FieldManager.FIELDEVENT_HARVESTED)
        end
      end
      return
    end
    if not allowUpdates then
      return
    end
    v11 = FieldUtil.getMaxWeedState(field)
    if v11 == 3 then
      v12 = math.random()
      if v12 < 0.75 then
        local v14 = v14:getWeederReplacements(false)
        self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, field.fruitType, nil, nil, nil, true, nil, v14.weed.replacements[v11] or 0, nil}
        v13:validateMissionOnField(field, FieldManager.FIELDEVENT_WEEDED)
        return
      end
    end
    if 3 < v11 then
      v12 = math.random()
      if v12 < 0.9 then
        v14 = v14:getHerbicideReplacements()
        self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, field.fruitType, nil, nil, nil, true, nil, v14.weed.replacements[v11] or 0, nil}
        v13:validateMissionOnField(field, FieldManager.FIELDEVENT_SPRAYED)
        return
      end
    end
    v12, v13 = FieldUtil.getFruitArea(v3 - 1, v4 - 1, v3 + 1, v4 - 1, v3 - 1, v4 + 1, FieldUtil.FILTER_EMPTY, FieldUtil.FILTER_EMPTY, field.fruitType, v5.cutState, v5.cutState, 0, 0, 0, false)
    if 0.5 * v13 < v12 and g_currentMission.snowSystem.height < SnowSystem.MIN_LAYER_HEIGHT then
      v14 = FieldUtil.getLimeFactor(field)
      if v14 == 0 then
        local v15 = math.random()
        if v15 < 0.4 then
          self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, field.fruitType, nil, nil, nil, true, nil, nil, self.limeLevelMaxValue}
          v15:validateMissionOnField(field, FieldManager.FIELDEVENT_LIMED)
          return
        end
      end
      v15 = math.random()
      if v15 < 0.6 then
        field.stateIsKnown = false
        v15 = FieldUtil.getPlowFactor(field, true)
        if v15 == 0 then
          self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, nil, FieldManager.FIELDSTATE_PLOWED, 0, nil, false}
          v16:validateMissionOnField(field, FieldManager.FIELDEVENT_PLOWED)
          return
        end
        self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, nil, FieldManager.FIELDSTATE_CULTIVATED, 0, nil, false}
        v16:validateMissionOnField(field, FieldManager.FIELDEVENT_CULTIVATED)
        return
      end
    end
    v14 = FieldUtil.getSprayFactor(field)
    -- if v14 >= 1 then goto L774 end
    v15 = math.random()
    -- if v15 >= 0.6 then goto L774 end
    self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, field.fruitType, nil, nil, v14 * self.sprayLevelMaxValue + 1, true, nil, nil, nil}
    v16:validateMissionOnField(field, FieldManager.FIELDEVENT_FERTILIZED)
    return
    return
  end
  if allowUpdates then
    v5 = FieldUtil.getLimeFactor(field)
    if v5 == 0 then
      local v6 = math.random()
      if v6 < 0.75 then
        self.fieldStatusParametersToSet = {field, field.setFieldStatusPartitions, 1, field.fruitType, nil, nil, nil, true, nil, nil, self.limeLevelMaxValue}
        v6:validateMissionOnField(field, FieldManager.FIELDEVENT_LIMED)
        return
      end
    end
    v6 = self:getFruitIndexForField(field)
    if v6 ~= nil then
      maxGrowthState = maxGrowthState:getFruitTypeByIndex(v6)
      if maxGrowthState.plantsWeed then
      else
      end
      self.fieldStatusParametersToSet = {v9, v10, v11, v12, v13, v14, v15, v16, v17, v18}
      v8:validateMissionOnField(field, FieldManager.FIELDEVENT_SOWN)
    end
  end
end
function FieldManager:getFruitIndexForField(field)
  if field.plannedFruit == 0 then
    return nil
  end
  local allowUpdates = self:canPlantNow(field)
  if not allowUpdates then
    return nil
  end
  return field.plannedFruit
end
function FieldManager:canPlantNow(field)
  if field.plannedFruit ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000001 -> L8
  end
  return false
  return v4:canFruitBePlanted(allowUpdates, self.mission.environment.currentPeriod)
end
function FieldManager:generateFieldContents()
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  local v5 = self:generatePlannedFruitForField(self.fields[1])
  self.fields[1].plannedFruit = v5
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
end
function FieldManager:generatePlannedFruitForField(field)
  if field.fieldGrassMission then
    return FruitType.GRASS
  end
  local v4 = math.random(1, self.fruitTypesCount)
  return self.availableFruitTypeIndices[v4]
end
function FieldManager:onFarmPropertyChanged(farmId)
  for v5, v6 in ipairs(self.fields) do
    if not v6.farmland then
      continue
    end
    local maxGrowthState = maxGrowthState:getFarmlandOwner(v6.farmland.id)
    if not (maxGrowthState == farmId) then
      continue
    end
    v6:setFieldOwned(farmId)
  end
end
function FieldManager:onYearChanged()
  self:generateFieldContents()
end
function FieldManager:onPeriodChanged()
  self:setupAIFieldChecks()
end
function FieldManager:setupAIFieldChecks()
  self.fieldsToCheck = {}
  self.fieldsToUpdate = {}
  for v4, v5 in ipairs(self.fields) do
    local v6 = v5:getIsAIActive()
    if not v6 then
      continue
    end
    if not v5.fieldMissionAllowed then
      continue
    end
    if not (v5.currentMission == nil) then
      continue
    end
    if not (v5.fruitType ~= FruitType.GRASS) then
      continue
    end
    table.insert(self.fieldsToCheck, v5)
    table.insert(self.fieldsToUpdate, v5)
  end
  Utils.shuffle(self.fieldsToUpdate)
end
function FieldManager:onFarmlandStateChanged(farmlandId, farmId)
  if self.farmlandIdFieldMapping[farmlandId] ~= nil then
    for maxGrowthState, v8 in ipairs(self.farmlandIdFieldMapping[farmlandId]) do
      if farmId == FarmlandManager.NO_OWNER_FARM_ID then
        v8:activate()
        self:findFieldFruit(v8)
      else
        v8:deactivate()
      end
    end
  end
end
function FieldManager:setFieldPartitionStatus(field, fieldPartitions, fieldPartitionIndex, fruitIndex, fieldState, growthState, sprayState, setSpray, plowState, weedState, limeState)
  field.lastCheckedTime = nil
  field.fruitType = fruitIndex
  field.stateIsKnown = false
  local v12 = v12:getFruitTypeByIndex(fruitIndex)
  if growthState == nil and v12 ~= nil then
    local v14 = math.random(1, v12.maxHarvestingGrowthState)
    if v12.minPreparingGrowthState ~= -1 then
      v14 = math.random(1, v12.maxPreparingGrowthState)
    end
  end
  if fieldPartitions[fieldPartitionIndex] ~= nil then
    v28:setParallelogramWorldCoords(fieldPartitions[fieldPartitionIndex].x0, fieldPartitions[fieldPartitionIndex].z0, fieldPartitions[fieldPartitionIndex].widthX, fieldPartitions[fieldPartitionIndex].widthZ, fieldPartitions[fieldPartitionIndex].heightX, fieldPartitions[fieldPartitionIndex].heightZ, DensityCoordType.POINT_VECTOR_VECTOR)
    v28:executeSet(0)
    v28:setParallelogramWorldCoords(fieldPartitions[fieldPartitionIndex].x0, fieldPartitions[fieldPartitionIndex].z0, fieldPartitions[fieldPartitionIndex].widthX, fieldPartitions[fieldPartitionIndex].widthZ, fieldPartitions[fieldPartitionIndex].heightX, fieldPartitions[fieldPartitionIndex].heightZ, DensityCoordType.POINT_VECTOR_VECTOR)
    v28:executeSet(0)
    if fieldState == FieldManager.FIELDSTATE_CULTIVATED then
      FSDensityMapUtil.updateCultivatorArea(fieldPartitions[fieldPartitionIndex].x0, fieldPartitions[fieldPartitionIndex].z0, fieldPartitions[fieldPartitionIndex].x0 + fieldPartitions[fieldPartitionIndex].widthX, fieldPartitions[fieldPartitionIndex].z0 + fieldPartitions[fieldPartitionIndex].widthZ, fieldPartitions[fieldPartitionIndex].x0 + fieldPartitions[fieldPartitionIndex].heightX, fieldPartitions[fieldPartitionIndex].z0 + fieldPartitions[fieldPartitionIndex].heightZ, true, false, field.fieldAngle, nil)
      FSDensityMapUtil.eraseTireTrack(fieldPartitions[fieldPartitionIndex].x0, fieldPartitions[fieldPartitionIndex].z0, fieldPartitions[fieldPartitionIndex].x0 + fieldPartitions[fieldPartitionIndex].widthX, fieldPartitions[fieldPartitionIndex].z0 + fieldPartitions[fieldPartitionIndex].widthZ, fieldPartitions[fieldPartitionIndex].x0 + fieldPartitions[fieldPartitionIndex].heightX, fieldPartitions[fieldPartitionIndex].z0 + fieldPartitions[fieldPartitionIndex].heightZ)
      field.fruitType = nil
    elseif fieldState == FieldManager.FIELDSTATE_PLOWED then
      FSDensityMapUtil.updatePlowArea(fieldPartitions[fieldPartitionIndex].x0, fieldPartitions[fieldPartitionIndex].z0, fieldPartitions[fieldPartitionIndex].x0 + fieldPartitions[fieldPartitionIndex].widthX, fieldPartitions[fieldPartitionIndex].z0 + fieldPartitions[fieldPartitionIndex].widthZ, fieldPartitions[fieldPartitionIndex].x0 + fieldPartitions[fieldPartitionIndex].heightX, fieldPartitions[fieldPartitionIndex].z0 + fieldPartitions[fieldPartitionIndex].heightZ, true, false, field.fieldAngle)
      FSDensityMapUtil.eraseTireTrack(fieldPartitions[fieldPartitionIndex].x0, fieldPartitions[fieldPartitionIndex].z0, fieldPartitions[fieldPartitionIndex].x0 + fieldPartitions[fieldPartitionIndex].widthX, fieldPartitions[fieldPartitionIndex].z0 + fieldPartitions[fieldPartitionIndex].widthZ, fieldPartitions[fieldPartitionIndex].x0 + fieldPartitions[fieldPartitionIndex].heightX, fieldPartitions[fieldPartitionIndex].z0 + fieldPartitions[fieldPartitionIndex].heightZ)
      field.fruitType = nil
    else
      if fieldState == FieldManager.FIELDSTATE_GROWING then
        if 0 <= v12.groundTypeChangeGrowthState and v12.groundTypeChangeGrowthState <= v13 then
          local v29 = v29:getFieldGroundValue(v12.groundTypeChangeType)
        end
        v29:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
        v29:executeSet(field.fieldAngle)
        v29:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
        v29:executeSet(v28)
        local v29, v30 = self:getFruitModifier(v12)
        v29:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
        v29:executeSet(v13)
        -- cmp-jump LOP_JUMPXEQKNIL R30 aux=0x0 -> L366
        v30:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
        v30:executeSet(0)
      elseif fieldState == FieldManager.FIELDSTATE_HARVESTED then
        if 0 <= v12.groundTypeChangeGrowthState and v12.groundTypeChangeGrowthState <= v12.cutState then
          v29 = v29:getFieldGroundValue(v12.groundTypeChangeType)
        end
        v29:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
        v29:executeSet(field.fieldAngle)
        v29:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
        v29:executeSet(v28)
        v29, v30 = self:getFruitModifier(v12)
        v29:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
        v29:executeSet(v13)
        if v30 ~= nil then
          v30:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
          v30:executeSet(1)
        end
      end
    end
    if sprayState ~= nil then
      if self.sprayLevelMaxValue < sprayState then
      end
      v28:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
      v28:executeSet(sprayState)
    end
    if plowState ~= nil and self.plowLevelModifier ~= nil then
      v28:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
      v28:executeSet(plowState)
    end
    if weedState ~= nil and self.weedModifier ~= nil then
      v28:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
      v28:executeSet(weedState)
    end
    if limeState ~= nil and self.limeLevelModifier ~= nil then
      v28:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
      v28:executeSet(limeState)
    end
    v28:setParallelogramWorldCoords(v16, v17, v18, v19, v20, v21, DensityCoordType.POINT_VECTOR_VECTOR)
    if setSpray == true and sprayState ~= nil and 0 < sprayState then
      v28:executeSet(self.sprayTypeFertilizer)
      return
    end
    if setSpray == true and limeState ~= nil then
      v28:executeSet(self.sprayTypeLime)
      return
    end
    v28:executeSet(0, self.fieldFilter)
  end
end
function FieldManager:setFieldGround(field, groundTypeState, angle, sprayTypeState, fertilizerState, plowingState, weedState, limeState, stubbleState, buyField, removeFoliage)
  if field ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x80000000 -> L8
  end
  return false
  if buyField and field.isActive then
    local v12 = v12:getServerConnection()
    local v14 = FarmlandStateEvent.new(field.farmland.id, 1, 0)
    v12:sendEvent(...)
  end
  field.fruitType = nil
  v12 = tonumber(angle)
  v12 = tonumber(sprayTypeState)
  local v13 = v13:getFieldGroundValue(groundTypeState)
  v14 = getNumOfChildren(field.fieldDimensions)
  -- TODO: structure LOP_FORNPREP (pc 58, target 268)
  local v18 = getChildAt(field.fieldDimensions, 1 - 1)
  local v19 = getChildAt(v18, 0)
  local v20 = getChildAt(v18, 1)
  local v21, v22, v23 = getWorldTranslation(v19)
  local v24, v25, v26 = getWorldTranslation(v18)
  local v27, v28, v29 = getWorldTranslation(v20)
  if removeFoliage then
    FSDensityMapUtil.updateDestroyCommonArea(v21, v23, v24, v26, v27, v29, true, false)
  end
  v30:setParallelogramWorldCoords(v21, v23, v24, v26, v27, v29, DensityCoordType.POINT_POINT_POINT)
  v30:executeSet(v13)
  v30:setParallelogramWorldCoords(v21, v23, v24, v26, v27, v29, DensityCoordType.POINT_POINT_POINT)
  v30:executeSet(sprayTypeState)
  v30:setParallelogramWorldCoords(v21, v23, v24, v26, v27, v29, DensityCoordType.POINT_POINT_POINT)
  v30:executeSet(angle)
  v30:setParallelogramWorldCoords(v21, v23, v24, v26, v27, v29, DensityCoordType.POINT_POINT_POINT)
  v30:executeSet(fertilizerState)
  if self.plowLevelModifier ~= nil then
    v30:setParallelogramWorldCoords(v21, v23, v24, v26, v27, v29, DensityCoordType.POINT_POINT_POINT)
    v30:executeSet(plowingState)
  end
  if self.limeLevelModifier ~= nil then
    v30:setParallelogramWorldCoords(v21, v23, v24, v26, v27, v29, DensityCoordType.POINT_POINT_POINT)
    v30:executeSet(limeState)
  end
  if self.stubbleShredModifier ~= nil then
    v30:setParallelogramWorldCoords(v21, v23, v24, v26, v27, v29, DensityCoordType.POINT_POINT_POINT)
    v30:executeSet(stubbleState)
  end
  if self.weedModifier ~= nil then
    v30:setParallelogramWorldCoords(v21, v23, v24, v26, v27, v29, DensityCoordType.POINT_POINT_POINT)
    v30:executeSet(weedState)
  end
  -- TODO: structure LOP_FORNLOOP (pc 267, target 59)
  return true
end
function FieldManager:setFieldFruit(field, fruitType, state, sprayTypeState, fertilizerState, plowingState, weedState, limeState, stubbleState)
  if field ~= nil and field.fieldDimensions ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L10
  end
  return false
  field.fruitType = fruitType.index
  if g_missionManager.fieldToMission[field.fieldId] ~= nil then
    weedState:deleteMission(g_missionManager.fieldToMission[field.fieldId])
  end
  local weedState = MathUtil.clamp(state, 0, 2 ^ fruitType.numStateChannels - 1)
  weedState = weedState:getFieldGroundValue(FieldGroundType.SOWN)
  if fruitType ~= nil and 0 <= fruitType.groundTypeChangeGrowthState and fruitType.groundTypeChangeGrowthState <= weedState then
    local limeState = limeState:getFieldGroundValue(fruitType.groundTypeChangeType)
  end
  local limeState, v12 = self:getFruitModifier(fruitType)
  if state == fruitType.preparedGrowthState then
  end
  local numDimensions = getNumOfChildren(field.fieldDimensions)
  -- TODO: structure LOP_FORNPREP (pc 86, target 153)
  local v17 = getChildAt(field.fieldDimensions, 1 - 1)
  local v18 = getChildAt(v17, 0)
  local v19 = getChildAt(v17, 1)
  local v20, v21, v22 = getWorldTranslation(v18)
  local v23, v24, v25 = getWorldTranslation(v17)
  local v26, v27, v28 = getWorldTranslation(v19)
  local v29 = v29:getFillTypeToDensityMapHeightTypes()
  for v33, v34 in pairs(v29) do
    DensityMapHeightUtil.removeFromGroundByArea(v20, v22, v23, v25, v26, v28, v33)
  end
  limeState:setParallelogramWorldCoords(v20, v22, v23, v25, v26, v28, DensityCoordType.POINT_POINT_POINT)
  limeState:executeSet(state)
  -- TODO: structure LOP_FORNLOOP (pc 152, target 87)
  return self:setFieldGround(field, weedState, 0, sprayTypeState, fertilizerState, plowingState, weedState, limeState, stubbleState, false, false)
end
function FieldManager:addFieldUpdateTask(field, fieldPartitions, fieldPartitionIndex, fruitIndex)
  local fieldState = self:getFieldByIndex(field)
  if fieldState == nil then
    local setSpray = tostring(field)
    Logging.devInfo(...)
    return
  end
  for plowState, weedState in ipairs(fieldState.setFieldStatusPartitions) do
    table.insert(self.updateTasks, {fieldId = field, partitionIndex = plowState, fruitIndex = fieldPartitions, growthState = fruitIndex, fieldState = fieldPartitionIndex})
  end
end
function FieldManager:consoleCommandSetFieldFruit(fieldIndex, fruitName, state, groundTypeName, sprayTypeState, fertilizerState, plowingState, weedState, limeState, stubbleState, setSpray, buyField)
  local v14 = self.mission:getIsServer()
  if not v14 then
    -- if not v0.mission.isMasterUser then goto L204 end
  end
  v14 = v13:getIsClient()
  if v14 then
    v14 = tonumber(fieldIndex)
    v14 = tonumber(state)
    local v15 = tonumber(sprayTypeState)
    v14 = Utils.getNoNil(v15, 0)
    local v16 = tonumber(fertilizerState)
    v15 = Utils.getNoNil(v16, 0)
    v14 = math.min(v15, self.sprayLevelMaxValue)
    v15 = tonumber(plowingState)
    v14 = Utils.getNoNil(v15, 0)
    v15 = tonumber(weedState)
    v14 = Utils.getNoNil(v15, 0)
    v15 = tonumber(limeState)
    v14 = Utils.getNoNil(v15, 0)
    v15 = tonumber(stubbleState)
    v14 = Utils.getNoNil(v15, 0)
    v14 = tostring(buyField)
    v14 = v14:lower()
    if v14 ~= "true" then
    end
    if fieldIndex == nil then
      return "Use gsFieldSetFruit fieldId fruitName [growthState] [groundTypeName] [sprayTypeState] [fertilizerState] [plowingState] [weedState] [limeState] [stubbleState] [setSpray] [buyField]"
    end
    v14 = self:getFieldByIndex(fieldIndex)
    if v14 == nil then
      return "Error: Invalid Field-Index. " .. "Use gsFieldSetFruit fieldId fruitName [growthState] [groundTypeName] [sprayTypeState] [fertilizerState] [plowingState] [weedState] [limeState] [stubbleState] [setSpray] [buyField]"
    end
    if groundTypeName ~= nil then
      v15 = FieldGroundType.getByName(groundTypeName)
    end
    if v15 == nil then
      local v17 = FieldGroundType.getAll()
      v16 = table.concatKeys(v17, ", ")
      return "Error: Invalid groundType.\nAvaiable types: " .. v16 .. "\n" .. "Use gsFieldSetFruit fieldId fruitName [growthState] [groundTypeName] [sprayTypeState] [fertilizerState] [plowingState] [weedState] [limeState] [stubbleState] [setSpray] [buyField]"
    end
    v16 = v16:getFruitTypeByName(fruitName)
    if v16 == nil then
      v17 = table.concatKeys(g_fruitTypeManager.nameToFruitType, " ")
      return "Error: Invalid fruitType.\nAvailable fruit types: " .. v17 .. "\n" .. "Use gsFieldSetFruit fieldId fruitName [growthState] [groundTypeName] [sprayTypeState] [fertilizerState] [plowingState] [weedState] [limeState] [stubbleState] [setSpray] [buyField]"
    end
    if not state and not v16.maxHarvestingGrowthState then
    end
    if v14.fieldDimensions ~= nil then
      if buyField and v14.isActive then
        v17 = v17:getServerConnection()
        local v19 = FarmlandStateEvent.new(v14.farmland.id, 1, 0)
        v17:sendEvent(...)
        print("Info: Bought field farmland")
      end
      self:setFieldFruit(v14, v16, state, sprayTypeState, fertilizerState, plowingState, weedState, limeState, stubbleState, setSpray)
      return "Updated field"
    end
    return "Error: Field not found"
  end
  return "Error: Command not allowed"
end
function FieldManager:consoleCommandSetFieldFruitAll(fruitName, state, sprayTypeState, fertilizerState, plowingState, weedState, limeState, stubbleState, setSpray, buyField)
  local v12 = self.mission:getIsServer()
  if not v12 then
    -- if not v0.mission.isMasterUser then goto L162 end
  end
  v12 = limeState:getIsClient()
  if v12 then
    v12 = tonumber(state)
    local v13 = tonumber(sprayTypeState)
    v12 = Utils.getNoNil(v13, 0)
    local v14 = tonumber(fertilizerState)
    v13 = Utils.getNoNil(v14, 0)
    v12 = math.min(v13, self.sprayLevelMaxValue)
    v13 = tonumber(plowingState)
    v12 = Utils.getNoNil(v13, 0)
    v13 = tonumber(weedState)
    v12 = Utils.getNoNil(v13, 0)
    v13 = tonumber(limeState)
    v12 = Utils.getNoNil(v13, 0)
    v13 = tonumber(stubbleState)
    v12 = Utils.getNoNil(v13, 0)
    v12 = tostring(buyField)
    v12 = v12:lower()
    if v12 ~= "true" then
    end
    v12 = v12:getFruitTypeByName(fruitName)
    if v12 == nil then
      v13 = table.concatKeys(g_fruitTypeManager.nameToFruitType, " ")
      return "Error: Invalid fruitType.\nAvailable fruit types: " .. v13 .. "\n" .. "Use gsFieldSetFruitAll fruitName [growthState] [sprayTypeState] [fertilizerState] [plowingState] [weedState] [limeState] [stubbleState] [setSpray] [buyField]"
    end
    for v16, v17 in ipairs(self.fields) do
      if not (v17.fieldDimensions ~= nil) then
        continue
      end
      if buyField and v17.isActive then
        local v18 = v18:getServerConnection()
        local v20 = FarmlandStateEvent.new(v17.farmland.id, 1, 0)
        v18:sendEvent(...)
        print("Info: Bought field farmland")
      end
      self:setFieldFruit(v17, v12, state, sprayTypeState, fertilizerState, plowingState, weedState, limeState, stubbleState, setSpray)
    end
    return "Updated field"
  end
  return "Error: Command not allowed"
end
function FieldManager:consoleCommandSetFieldGround(fieldIndex, groundTypeName, angle, groundLayer, fertilizerState, plowingState, weedState, limeState, stubbleState, buyField, removeFoliage)
  local v13 = self.mission:getIsServer()
  if not v13 then
    -- if not v0.mission.isMasterUser then goto L149 end
  end
  v13 = v12:getIsClient()
  if v13 then
    v13 = FieldGroundType.getAll()
    for v19, v20 in pairs(v13) do
      if groundTypeName ~= nil then
        local v23 = groundTypeName:upper()
        local v21 = v19:startsWith(...)
        if v21 then
          break
        end
      end
      if v14 ~= "" then
      end
    end
    if groundTypeName ~= nil then
      v17 = FieldGroundType.getByName(groundTypeName)
      -- if v17 then goto L56 end
    end
    if v15 == nil then
      return "Invalid groundType. " .. v16
    end
    v18 = tostring(buyField)
    v18 = v18:lower()
    if v18 ~= "true" then
    end
    v18 = tonumber(fieldIndex)
    v18 = tonumber(fertilizerState)
    v18 = tonumber(plowingState)
    v18 = tonumber(angle)
    v18 = tonumber(weedState)
    v18 = tonumber(limeState)
    v18 = tonumber(stubbleState)
    v19 = tostring(removeFoliage)
    v19 = v19:lower()
    if v19 ~= "false" then
    end
    v18 = self:getFieldByIndex(fieldIndex)
    if v18 == nil then
      return "Invalid Field-Index. " .. v16
    end
    v19 = self:setFieldGround(v18, v17, angle, groundLayer, fertilizerState, plowingState, weedState, limeState, stubbleState, buyField, removeFoliage)
    if v19 then
      return "Updated field"
    end
    return "Could not update field"
  end
  return "Fields are not activated"
end
function FieldManager:consoleCommandSetFieldGroundAll(groundTypeName, angle, groundLayer, fertilizerState, plowingState, weedState, limeState, stubbleState, buyFields, removeFoliage)
  local v12 = self.mission:getIsServer()
  if not v12 then
    -- if not v0.mission.isMasterUser then goto L134 end
  end
  v12 = limeState:getIsClient()
  if v12 then
    v12 = FieldGroundType.getAll()
    for v18, v19 in pairs(v12) do
      local v22 = groundTypeName:upper()
      local v20 = v18:startsWith(...)
      if v20 then
        break
      end
      if v13 ~= "" then
      end
    end
    v17 = FieldGroundType.getByName(groundTypeName)
    if (v17 or v14) == nil then
      return "Invalid groundType. " .. "Use gsFieldSetGroundAll groundType[" .. v13 .. "] [angle] [groundLayer] [fertilizerState] [plowingState] [weedState] [limeState] [stubbleState] [buyFields] [removeFoliage]"
    end
    v17 = tostring(buyFields)
    v17 = v17:lower()
    if v17 ~= "true" then
    end
    v17 = tonumber(fertilizerState)
    v17 = tonumber(plowingState)
    v17 = tonumber(angle)
    v17 = tonumber(weedState)
    v17 = tonumber(limeState)
    v17 = tonumber(stubbleState)
    v18 = tostring(removeFoliage)
    v18 = v18:lower()
    if v18 ~= "false" then
    end
    for v20, v21 in ipairs(self.fields) do
      self:setFieldGround(v21, v16, angle, groundLayer, fertilizerState, plowingState, weedState, limeState, stubbleState, buyFields, removeFoliage)
    end
    return "Updated fields"
  end
  return "Fields are not activated"
end
function FieldManager.consoleCommandToggleDebugFieldStatus(v0, field)
  FieldManager.DEBUG_SHOW_FIELDSTATUS = not FieldManager.DEBUG_SHOW_FIELDSTATUS
  local fieldState = tonumber(field)
  local fruitIndex = Utils.getNoNil(fieldState, 10)
  local fieldPartitionIndex = math.abs(...)
  FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE = fieldPartitionIndex
  if FieldManager.DEBUG_SHOW_FIELDSTATUS then
    fieldPartitions:addDrawable(v0)
  else
    fieldPartitions:removeDrawable(v0)
  end
  local setSpray = tostring(FieldManager.DEBUG_SHOW_FIELDSTATUS)
  setSpray = tostring(FieldManager.DEBUG_SHOW_FIELDSTATUS_SIZE)
  return "ToggleFieldStatus: " .. setSpray .. " " .. setSpray .. "m"
end
local field = FieldManager.new()
g_fieldManager = v1
