-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHusbandryFood = {}
function PlaceableHusbandryFood.prerequisitesPresent(v0)
  return true
end
function PlaceableHusbandryFood.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "updateFillPlanes", PlaceableHusbandryFood.updateFillPlanes)
  SpecializationUtil.registerFunction(placeableType, "updateFoodPlaces", PlaceableHusbandryFood.updateFoodPlaces)
  SpecializationUtil.registerFunction(placeableType, "addFood", PlaceableHusbandryFood.addFood)
  SpecializationUtil.registerFunction(placeableType, "removeFood", PlaceableHusbandryFood.removeFood)
  SpecializationUtil.registerFunction(placeableType, "getTotalFood", PlaceableHusbandryFood.getTotalFood)
  SpecializationUtil.registerFunction(placeableType, "getFoodCapacity", PlaceableHusbandryFood.getFoodCapacity)
  SpecializationUtil.registerFunction(placeableType, "getFreeFoodCapacity", PlaceableHusbandryFood.getFreeFoodCapacity)
end
function PlaceableHusbandryFood.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableHusbandryFood.updateInfo)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateFeeding", PlaceableHusbandryFood.updateFeeding)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getFoodInfos", PlaceableHusbandryFood.getFoodInfos)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "collectPickObjects", PlaceableHusbandryFood.collectPickObjects)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getAnimalDescription", PlaceableHusbandryFood.getAnimalDescription)
end
function PlaceableHusbandryFood.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHusbandryFood)
  SpecializationUtil.registerEventListener(placeableType, "onPostLoad", PlaceableHusbandryFood)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHusbandryFood)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableHusbandryFood)
  SpecializationUtil.registerEventListener(placeableType, "onPostFinalizePlacement", PlaceableHusbandryFood)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableHusbandryFood)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableHusbandryFood)
  SpecializationUtil.registerEventListener(placeableType, "onReadUpdateStream", PlaceableHusbandryFood)
  SpecializationUtil.registerEventListener(placeableType, "onWriteUpdateStream", PlaceableHusbandryFood)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryAnimalsUpdate", PlaceableHusbandryFood)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryAnimalsCreated", PlaceableHusbandryFood)
end
function PlaceableHusbandryFood:registerXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.INT, v1 .. ".husbandry.food" .. "#capacity", "Trough capacity", 5000)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.food" .. ".foodPlaces.foodPlace(?)#node", "Foodplace")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.food" .. ".dynamicFoodPlane#node", "Node")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.food" .. ".dynamicFoodPlane#defaultFillType", "Fillplane default filltype")
  FillPlaneUtil.registerFillPlaneXMLPaths(self, v1 .. ".husbandry.food" .. ".dynamicFoodPlane")
  FillPlane.registerXMLPaths(self, v1 .. ".husbandry.food" .. ".foodPlane", "Fillplane")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.food" .. ".foodPlane#defaultFillType", "Fillplane default filltype")
  UnloadTrigger.registerXMLPaths(self, v1 .. ".husbandry.food" .. ".feedingTrough")
  self:setXMLSpecializationType()
end
function PlaceableHusbandryFood:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.STRING, v1 .. ".fillLevel(?)#fillType", "Fill type")
  self:register(XMLValueType.FLOAT, v1 .. ".fillLevel(?)#fillLevel", "Fill level")
  self:setXMLSpecializationType()
end
function PlaceableHusbandryFood.initSpecialization()
  v0:addSpecType("animalFoodFillTypes", "shopListAttributeIconFillTypes", PlaceableHusbandryFood.loadSpecValueAnimalFoodFillTypes, PlaceableHusbandryFood.getSpecValueAnimalFoodFillTypes, "placeable")
end
function PlaceableHusbandryFood:onLoad(savegame)
  self.spec_husbandryFood.animalTypeIndex = nil
  self.spec_husbandryFood.litersPerHour = 0
  self.spec_husbandryFood.fillLevels = {}
  self.spec_husbandryFood.supportedFillTypes = {}
  self.spec_husbandryFood.fillTypes = {}
  self.spec_husbandryFood.lastPositionInfoSent = {0, 0}
  self.spec_husbandryFood.lastPositionInfo = {0, 0}
  self.spec_husbandryFood.foodPlaces = {}
  local v4 = v4:getText("ui_animalFood")
  self.spec_husbandryFood.info = {title = v4, text = ""}
  local v3 = self:getNextDirtyFlag()
  self.spec_husbandryFood.dirtyFlagPosition = v3
  v3 = self:getNextDirtyFlag()
  self.spec_husbandryFood.dirtyFlagFillLevel = v3
  v3 = v3:getValue("placeable.husbandry.food#capacity", 5000)
  self.spec_husbandryFood.capacity = v3
  v3 = MathUtil.getNumRequiredBits(self.spec_husbandryFood.capacity)
  self.spec_husbandryFood.FILLLEVEL_NUM_BITS = v3
  v3 = UnloadTrigger.new(self.isServer, self.isClient)
  local v5 = v3:load(self.components, self.xmlFile, "placeable.husbandry.food.feedingTrough", {getIsFillTypeAllowed = function(self, savegame)
    return u0.supportedFillTypes[savegame]
  end, getIsToolTypeAllowed = function(self, savegame)
    return true
  end, addFillLevelFromTool = function(self, ...)
    return savegame:addFood(...)
  end, getFreeCapacity = function(self, savegame)
    return v2:getFreeFoodCapacity(savegame)
  end}, nil, self.i3dMappings)
  if not v5 then
    v3:delete()
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  v2.feedingTrough = v3
  v5 = v5:getValue("placeable.husbandry.food.dynamicFoodPlane#node", nil, self.components, self.i3dMappings)
  v2.baseNode = v5
  if v2.baseNode ~= nil then
    v5 = FillPlaneUtil.createFromXML(self.xmlFile, "placeable.husbandry.food.dynamicFoodPlane", v2.baseNode, v2.capacity)
    local v6 = v6:getValue("placeable.husbandry.food.dynamicFoodPlane#defaultFillType")
    local v7 = v7:getFillTypeIndexByName(v6)
    if not v7 then
    end
    if v5 ~= nil then
      FillPlaneUtil.assignDefaultMaterials(v5)
      FillPlaneUtil.setFillType(v5, v7)
      v2.dynamicFoodPlane = v5
    end
  end
  v5 = FillPlane.new()
  v2.foodPlane = v5
  v5 = v5:load(self.components, self.xmlFile, "placeable.husbandry.food.foodPlane", self.i3dMappings)
  if v5 then
    v5 = v5:getValue("placeable.husbandry.food.foodPlane#defaultFillType")
    v6 = v6:getFillTypeIndexByName(v5)
    if not v6 then
    end
    FillPlaneUtil.assignDefaultMaterials(v2.foodPlane.node)
    FillPlaneUtil.setFillType(v2.foodPlane.node, v6)
    setShaderParameter(v2.foodPlane.node, "isCustomShape", 1, 0, 0, 0, false)
    v7:setState(0)
  else
    v5:delete()
    v2.foodPlane = nil
  end
  v5:iterate("placeable.husbandry.food.foodPlaces.foodPlace", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    table.insert(u1.foodPlaces, {node = v2, place = nil})
  end)
end
function PlaceableHusbandryFood:onPostLoad()
  local v2 = self:getAnimalTypeIndex()
  self.spec_husbandryFood.animalTypeIndex = v2
  v2 = v2:getAnimalFood(self.spec_husbandryFood.animalTypeIndex)
  local v3 = v3:getMixturesByAnimalTypeIndex(self.spec_husbandryFood.animalTypeIndex)
  if v2 ~= nil then
    for v7, v8 in pairs(v2.groups) do
      for v12, v13 in pairs(v8.fillTypes) do
        if not (v1.fillLevels[v13] == nil) then
          continue
        end
        v1.fillLevels[v13] = 0
        v1.supportedFillTypes[v13] = true
        table.insert(v1.fillTypes, v13)
      end
    end
  end
  if v3 ~= nil then
    for v7, v8 in ipairs(v3) do
      v1.supportedFillTypes[v8] = true
      table.insert(v1.fillTypes, v8)
    end
  end
end
function PlaceableHusbandryFood:onDelete()
  if self.spec_husbandryFood.feedingTrough ~= nil then
    v2:delete()
    self.spec_husbandryFood.feedingTrough = nil
  end
  if v1.dynamicFoodPlane ~= nil then
    delete(v1.dynamicFoodPlane)
    v1.dynamicFoodPlane = nil
  end
  if v1.foodPlane ~= nil then
    v2:delete()
    v1.foodPlane = nil
  end
end
function PlaceableHusbandryFood:onFinalizePlacement()
  if self.spec_husbandryFood.feedingTrough ~= nil then
    v2:register(true)
  end
end
function PlaceableHusbandryFood:onPostFinalizePlacement()
  self:updateFillPlanes()
end
function PlaceableHusbandryFood:onReadStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_husbandryFood.fillTypes) do
    if not (v3.fillLevels[v8] ~= nil) then
      continue
    end
    local v10 = streamReadUIntN(streamId, v3.FILLLEVEL_NUM_BITS)
    v3.fillLevels[v8] = v10
  end
  if v3.feedingTrough ~= nil then
    v4 = NetworkUtil.readNodeObjectId(streamId)
    v5:readStream(streamId, connection)
    v5:finishRegisterObject(v3.feedingTrough, v4)
  end
end
function PlaceableHusbandryFood:onWriteStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_husbandryFood.fillTypes) do
    if not (v3.fillLevels[v8] ~= nil) then
      continue
    end
    streamWriteUIntN(streamId, v3.fillLevels[v8], v3.FILLLEVEL_NUM_BITS)
  end
  if v3.feedingTrough ~= nil then
    v6 = NetworkUtil.getObjectId(v3.feedingTrough)
    NetworkUtil.writeNodeObjectId(...)
    v4:writeStream(streamId, connection)
    v4:registerObjectInStream(connection, v3.feedingTrough)
  end
end
function PlaceableHusbandryFood:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      local v8 = streamReadUIntN(streamId, FillVolume.SEND_NUM_BITS)
      local v10 = math.pow(2, FillVolume.SEND_NUM_BITS)
      local v9 = streamReadUIntN(streamId, FillVolume.SEND_NUM_BITS)
      local v11 = math.pow(2, FillVolume.SEND_NUM_BITS)
      self.spec_husbandryFood.lastPositionInfo[1] = v8 / (v10 - 1) * FillVolume.SEND_MAX_SIZE - FillVolume.SEND_MAX_SIZE * 0.5
      self.spec_husbandryFood.lastPositionInfo[2] = v9 / (v11 - 1) * FillVolume.SEND_MAX_SIZE - FillVolume.SEND_MAX_SIZE * 0.5
    end
    v5 = streamReadBool(streamId)
    if v5 then
      for v8, v9 in ipairs(v4.fillTypes) do
        if not (v4.fillLevels[v9] ~= nil) then
          continue
        end
        v10 = streamReadUIntN(streamId, v4.FILLLEVEL_NUM_BITS)
        if 0 < v10 - v4.fillLevels[v9] then
          local v14 = self:getOwnerFarmId()
          self:addFood(v14, v10 - v4.fillLevels[v9], v9, nil, nil, nil)
        else
          v14 = math.abs(v10 - v4.fillLevels[v9])
          self:removeFood(v14, v9)
        end
      end
    end
  end
end
function PlaceableHusbandryFood:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_husbandryFood.dirtyFlagPosition)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      v8 = math.pow(2, FillVolume.SEND_NUM_BITS)
      streamWriteUIntN(streamId, (v4.lastPositionInfoSent[1] + FillVolume.SEND_MAX_SIZE * 0.5) / FillVolume.SEND_MAX_SIZE * (v8 - 1), FillVolume.SEND_NUM_BITS)
      local v9 = math.pow(2, FillVolume.SEND_NUM_BITS)
      streamWriteUIntN(streamId, (v4.lastPositionInfoSent[2] + FillVolume.SEND_MAX_SIZE * 0.5) / FillVolume.SEND_MAX_SIZE * (v9 - 1), FillVolume.SEND_NUM_BITS)
    end
    v8 = bitAND(dirtyMask, v4.dirtyFlagFillLevel)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    if v5 then
      for v8, v9 in ipairs(v4.fillTypes) do
        if not (v4.fillLevels[v9] ~= nil) then
          continue
        end
        streamWriteUIntN(streamId, v4.fillLevels[v9], v4.FILLLEVEL_NUM_BITS)
      end
    end
  end
end
function PlaceableHusbandryFood:loadFromXMLFile(xmlFile, key)
  xmlFile:iterate(key .. ".fillLevel", function(self, xmlFile)
    local key = key:getValue(xmlFile .. "#fillType")
    local v3 = v3:getValue(xmlFile .. "#fillLevel")
    if key ~= nil and v3 ~= nil then
      local v4 = v4:getFillTypeIndexByName(key)
      if v4 ~= nil and u1.supportedFillTypes[v4] ~= nil then
        local v7 = v7:getOwnerFarmId()
        v5:addFood(v7, v3, v4, nil, nil, nil)
      end
    end
  end)
end
function PlaceableHusbandryFood:saveToXMLFile(xmlFile, key, usedModNames)
  for v9, v10 in pairs(self.spec_husbandryFood.fillLevels) do
    if not (0 < v10) then
      continue
    end
    local v11 = v11:getFillTypeNameByIndex(v9)
    if not (v11 ~= nil) then
      continue
    end
    local v12 = string.format("%s.fillLevel(%d)", key, v5)
    xmlFile:setValue(v12 .. "#fillType", v11)
    xmlFile:setValue(v12 .. "#fillLevel", v10)
  end
end
function PlaceableHusbandryFood:updateFeeding(superFunc)
  local factor = superFunc(self)
  if self.isServer and self.spec_husbandryFood.animalTypeIndex ~= nil then
    local v5 = v5:consumeFood(self.spec_husbandryFood.animalTypeIndex, self.spec_husbandryFood.litersPerHour * g_currentMission.environment.timeAdjustment, self.spec_husbandryFood.fillLevels, {})
    for v8, v9 in pairs({}) do
      self:removeFood(v9, v8)
    end
  end
  return factor
end
function PlaceableHusbandryFood:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  local fillLevel = self:getTotalFood()
  local v6 = string.format("%d l", fillLevel)
  self.spec_husbandryFood.info.text = v6
  table.insert(infoTable, self.spec_husbandryFood.info)
end
function PlaceableHusbandryFood:getFoodInfos(superFunc)
  local foodInfos = superFunc(self)
  local v4 = v4:getAnimalFood(self.spec_husbandryFood.animalTypeIndex)
  if v4 ~= nil then
    for v8, v9 in pairs(v4.groups) do
      for v16, v17 in pairs(v9.fillTypes) do
        if not (v3.fillLevels[v17] ~= nil) then
          continue
        end
      end
      v17 = MathUtil.round(v9.productionWeight * 100)
      v14 = string.format(...)
      if 0 < v12 then
      end
      table.insert(foodInfos, v13)
    end
  end
  return foodInfos
end
function PlaceableHusbandryFood:updateFillPlanes(fillTypeIndex)
  if self.spec_husbandryFood.foodPlane ~= nil then
    local fillLevel = self:getTotalFood()
    local capacity = self:getFoodCapacity()
    if 0 < capacity then
    end
    v6:setState(v5)
    if 0 < v5 and fillTypeIndex ~= nil then
      FillPlaneUtil.assignDefaultMaterials(v2.foodPlane.node)
      FillPlaneUtil.setFillType(v2.foodPlane.node, fillTypeIndex)
      setShaderParameter(v2.foodPlane.node, "isCustomShape", 1, 0, 0, 0, false)
    end
  end
end
function PlaceableHusbandryFood:collectPickObjects(superFunc, node)
  if self.spec_husbandryFood.feedingTrough ~= nil and node == self.spec_husbandryFood.feedingTrough.exactFillRootNode then
    return
  end
  superFunc(self, node)
end
function PlaceableHusbandryFood:onHusbandryAnimalsCreated(husbandry)
  if husbandry ~= nil then
    self.spec_husbandryFood.husbandry = husbandry
    for v6, v7 in ipairs(self.spec_husbandryFood.foodPlaces) do
      local v8 = addFeedingPlace(husbandry, v7.node, 0, AnimalHusbandryFeedingType.FOOD)
      v7.place = v8
    end
  end
end
function PlaceableHusbandryFood:updateFoodPlaces()
  if self.spec_husbandryFood.husbandry ~= nil then
    local fillLevel = self:getTotalFood()
    for v6, v7 in pairs(self.spec_husbandryFood.foodPlaces) do
      if not (v7.place ~= nil) then
        continue
      end
      updateFeedingPlace(v1.husbandry, v7.place, fillLevel)
    end
  end
end
function PlaceableHusbandryFood:getTotalFood()
  for v6, v7 in pairs(self.spec_husbandryFood.fillLevels) do
  end
  return v2
end
function PlaceableHusbandryFood:getFoodCapacity()
  return self.spec_husbandryFood.capacity
end
function PlaceableHusbandryFood:getFreeFoodCapacity(fillTypeIndex)
  if self.spec_husbandryFood.supportedFillTypes[fillTypeIndex] == nil then
    return 0
  end
  local v5 = self:getTotalFood()
  return v2.capacity - v5
end
function PlaceableHusbandryFood:addFood(farmId, deltaFillLevel, fillTypeIndex, fillPositionData, toolType, extraAttributes)
  if self.spec_husbandryFood.supportedFillTypes[fillTypeIndex] == nil then
    return 0
  end
  local v8 = v8:getMixtureByFillType(fillTypeIndex)
  if v8 ~= nil then
    local v12 = self:getFreeFoodCapacity(fillTypeIndex)
    local v10 = math.min(...)
    for v14, v15 in ipairs(v8.ingredients) do
      local v18 = self:addFood(farmId, v10 * v15.weight, v15.fillTypes[1], fillPositionData, toolType, extraAttributes)
    end
    if 0 < v9 then
      self:updateFillPlanes(fillTypeIndex)
    end
    return v9
  end
  local v9 = self:getFreeFoodCapacity(fillTypeIndex)
  if v9 == 0 then
    return 0
  end
  v10 = math.min(v9, deltaFillLevel)
  if v7.dynamicFoodPlane ~= nil then
    if fillPositionData ~= nil then
      v10, v11, v12 = getWorldTranslation(fillPositionData.node)
      v13, v14, v15 = localDirectionToWorld(fillPositionData.node, fillPositionData.width, 0, 0)
      local v16, v17, v18 = localDirectionToWorld(fillPositionData.node, 0, 0, fillPositionData.length)
      if VehicleDebug.state == VehicleDebug.DEBUG then
        drawDebugLine(v10, v11, v12, 1, 0, 0, v10 + v13, v11 + v14, v12 + v15, 1, 0, 0)
        drawDebugLine(v10, v11, v12, 0, 0, 1, v10 + v16, v11 + v17, v12 + v18, 0, 0, 1)
        drawDebugPoint(v10, v11, v12, 1, 1, 1, 1)
        drawDebugPoint(v10 + v13, v11 + v14, v12 + v15, 1, 0, 0, 1)
        drawDebugPoint(v10 + v16, v11 + v17, v12 + v18, 0, 0, 1, 1)
      end
      fillPlaneAdd(v7.dynamicFoodPlane, deltaFillLevel, v10 - (v13 + v16) / 2, v11 - (v14 + v17) / 2, v12 - (v15 + v18) / 2, v13, v14, v15, v16, v17, v18)
      if self.isServer then
        local v19 = math.abs(v10 - (v13 + v16) / 2 - v7.lastPositionInfoSent[1])
        -- if FillVolume.SEND_PRECISION < v19 then goto L221 end
      end
      v19 = math.abs(v12 - v7.lastPositionInfoSent[2])
      -- if FillVolume.SEND_PRECISION >= v19 then goto L315 end
      v7.lastPositionInfoSent[1] = v10
      v7.lastPositionInfoSent[2] = v12
      self:raiseDirtyFlags(v7.dirtyFlagPosition)
    else
      v10, v11, v12 = localToWorld(v7.dynamicFoodPlane, 0, 0, 0)
      v13, v14, v15 = localDirectionToWorld(v7.dynamicFoodPlane, 0.1, 0, 0)
      v16, v17, v18 = localDirectionToWorld(v7.dynamicFoodPlane, 0, 0, 0.1)
      if not self.isServer and v7.lastPositionInfo[1] ~= 0 and v7.lastPositionInfo[2] ~= 0 then
        local v19, v20, v21 = localToWorld(v7.dynamicFoodPlane, v7.lastPositionInfo[1], 0, v7.lastPositionInfo[2])
      end
      v20 = math.floor(deltaFillLevel / 400)
      v19 = MathUtil.clamp(v20, 1, 25)
      -- TODO: structure LOP_FORNPREP (pc 298, target 315)
      fillPlaneAdd(v7.dynamicFoodPlane, deltaFillLevel / v19, v10, v11, v12, v13, v14, v15, v16, v17, v18)
      -- TODO: structure LOP_FORNLOOP (pc 314, target 299)
    end
  end
  if self.isServer then
    self:raiseDirtyFlags(v7.dirtyFlagFillLevel)
  end
  v7.fillLevels[fillTypeIndex] = v7.fillLevels[fillTypeIndex] + deltaFillLevel
  self:updateFillPlanes(fillTypeIndex)
  self:updateFoodPlaces()
  return deltaFillLevel
end
function PlaceableHusbandryFood:removeFood(absDeltaFillLevel, fillTypeIndex)
  if self.spec_husbandryFood.supportedFillTypes[fillTypeIndex] == nil then
    return 0
  end
  if absDeltaFillLevel <= 0 then
    return 0
  end
  local v5 = math.abs(absDeltaFillLevel)
  local v4 = math.min(v5, v3.fillLevels[fillTypeIndex])
  if v3.dynamicFoodPlane ~= nil then
    local v4, v5, v6 = localToWorld(v3.dynamicFoodPlane, 0, 0, 0)
    local v7, v8, v9 = localDirectionToWorld(v3.dynamicFoodPlane, 0.1, 0, 0)
    local v10, v11, v12 = localDirectionToWorld(v3.dynamicFoodPlane, 0, 0, 0.1)
    local v14 = math.floor(v4 / 400)
    local v13 = MathUtil.clamp(v14, 1, 25)
    -- TODO: structure LOP_FORNPREP (pc 70, target 87)
    fillPlaneAdd(v3.dynamicFoodPlane, -(v4 / v13), v4, v5, v6, v7, v8, v9, v10, v11, v12)
    -- TODO: structure LOP_FORNLOOP (pc 86, target 71)
  end
  v3.fillLevels[fillTypeIndex] = v3.fillLevels[fillTypeIndex] - absDeltaFillLevel
  if self.isServer then
    self:raiseDirtyFlags(v3.dirtyFlagFillLevel)
  end
  self:updateFillPlanes()
  self:updateFoodPlaces()
  return absDeltaFillLevel
end
function PlaceableHusbandryFood:onHusbandryAnimalsUpdate(clusters)
  self.spec_husbandryFood.litersPerHour = 0
  for v6, v7 in ipairs(clusters) do
    local v8 = v8:getSubTypeByIndex(v7.subTypeIndex)
    if not (v8 ~= nil) then
      continue
    end
    if not (v8.input.food ~= nil) then
      continue
    end
    local v10 = v7:getAge()
    local v11 = v8.input.food:get(v10)
    local v13 = v7:getNumAnimals()
    v2.litersPerHour = v2.litersPerHour + v11 * v13 / 24
  end
end
function PlaceableHusbandryFood.getAnimalDescription(v0, v1, v2)
  local v3 = v1(v0, v2)
  local v7 = v7:getText("animal_descriptionPercentage")
  return v3 .. " " .. v7
end
function PlaceableHusbandryFood:loadSpecValueAnimalFoodFillTypes(v1, v2)
  local v4 = self:hasProperty("placeable.husbandry.animals")
  if v4 then
    if not nil then
    end
    v4 = self:getString("placeable.husbandry.animals#type")
    v4.animalTypeName = v4
  end
  v4 = self:hasProperty("placeable.husbandry.water")
  if v4 then
    if not v3 then
    end
    local v5 = self:getValue("placeable.husbandry.water#automaticWaterSupply", false)
    v4.needsWater = not v5
  end
  return v3
end
function PlaceableHusbandryFood:getSpecValueAnimalFoodFillTypes(v1)
  if self.specs.animalFoodFillTypes == nil then
    return nil
  end
  local v4 = v4:getTypeByName(v2.animalTypeName)
  if v4 == nil then
    return nil
  end
  local v5 = v5:getAnimalFood(v4.typeIndex)
  local v6 = v6:getMixturesByAnimalTypeIndex(v4.typeIndex)
  if v5 ~= nil then
    for v10, v11 in pairs(v5.groups) do
      for v15, v16 in pairs(v11.fillTypes) do
        table.addElement(v3, v16)
      end
    end
  end
  if v6 ~= nil then
    for v10, v11 in ipairs(v6) do
      table.addElement(v3, v11)
    end
  end
  if v2.needsWater then
    table.addElement(v3, FillType.WATER)
  end
  return v3
end
