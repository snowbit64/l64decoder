-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LoadingStation = {}
local LoadingStation_mt = Class(LoadingStation, Object)
InitStaticObjectClass(LoadingStation, "LoadingStation", ObjectIds.OBJECT_LOADING_STATION)
function LoadingStation.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.sourceStorages = {}
  v3.loadTriggers = {}
  return v3
end
function LoadingStation:load(components, xmlFile, key, customEnv, i3dMappings, rootNode)
  if not rootNode then
    local v7 = xmlFile:getValue(key .. "#node", rootNode, components, i3dMappings)
  end
  self.rootNode = v7
  if self.rootNode == nil then
    Logging.xmlError(xmlFile, "Missing node defined in '%s'", key)
    return false
  end
  self.supportedFillTypes = {}
  self.aiSupportedFillTypes = {}
  v7 = getName(self.rootNode)
  self.rootNodeName = v7
  v7 = xmlFile:getValue(key .. "#stationName", nil)
  if v7 then
    local v8 = v8:convertText(v7)
  end
  self.stationName = v8
  v8 = xmlFile:getValue(key .. "#storageRadius", 50)
  self.storageRadius = v8
  v8 = xmlFile:getValue(key .. "#supportsExtension", false)
  self.supportsExtension = v8
  self.owningPlaceable = nil
  self.hasStoragePerFarm = false
  xmlFile:iterate(key .. ".loadTrigger", function(self, components)
    local xmlFile = xmlFile:getValue(components .. "#class", "LoadTrigger")
    local key = ClassUtil.getClassObject(xmlFile)
    if key == nil then
      Logging.xmlError(u0, "LoadTrigger class '%s' not defined", xmlFile, components)
      return
    end
    local customEnv = key.new(u1.isServer, u1.isClient)
    local i3dMappings = customEnv:load(u2, u0, components, u3, u1.rootNode)
    if i3dMappings then
      customEnv:setSource(u1)
      customEnv:register(true)
      table.insert(u1.loadTriggers, customEnv)
      return
    end
    customEnv:delete()
  end)
  self.basicFillTypes = {}
  v8 = XMLUtil.getValueFromXMLFileOrUserAttribute(xmlFile, key, "fillTypeCategories", self.rootNode)
  if v8 ~= nil then
    local v9 = v9:getFillTypesByCategoryNames(v8, "Warning: LoadingStation has invalid fillTypeCategory '%s'.")
    for v13, v14 in pairs(v9) do
      self.basicFillTypes[v14] = true
    end
  end
  v9 = XMLUtil.getValueFromXMLFileOrUserAttribute(xmlFile, key, "fillTypes", self.rootNode)
  if v9 ~= nil then
    v10 = v10:getFillTypesByNames(v9, "Warning: LoadingStation has invalid fillType '%s'.")
    for v14, v15 in pairs(v10) do
      self.basicFillTypes[v15] = true
    end
  end
  self:updateSupportedFillTypes()
  return true
end
function LoadingStation:delete()
  if self.loadTriggers ~= nil then
    for v4, v5 in ipairs(self.loadTriggers) do
      v5:delete()
    end
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function LoadingStation:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    for v6, v7 in ipairs(self.loadTriggers) do
      local loadTriggerId = NetworkUtil.readNodeObjectId(streamId)
      v7:readStream(streamId, connection)
      v9:finishRegisterObject(v7, loadTriggerId)
    end
  end
end
function LoadingStation:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    for v6, v7 in ipairs(self.loadTriggers) do
      local v10 = NetworkUtil.getObjectId(v7)
      NetworkUtil.writeNodeObjectId(...)
      v7:writeStream(streamId, connection)
      v8:registerObjectInStream(connection, v7)
    end
  end
end
function LoadingStation.loadFromXMLFile(v0, v1, v2)
  return true
end
function LoadingStation.saveToXMLFile(v0, v1, v2, v3)
end
function LoadingStation:getName()
  if not self.stationName and self.owningPlaceable then
    local v1 = v1:getName()
    -- if v1 then goto L13 end
  end
  return v1
end
function LoadingStation:raiseActive()
  local v2 = v2:superClass()
  v2.raiseActive(self)
  if self.owningPlaceable ~= nil then
    v1:raiseActive()
  end
end
function LoadingStation:addSourceStorage(storage)
  if storage ~= nil then
    if storage.getIsFillTypeSupported == nil then
    end
    assert(true, "LoadingStation:addSourceStorage: invalid storage given, missing function getIsFillTypeSupported")
    if storage.setFillLevel == nil then
    end
    assert(true)
    if storage.getFillLevel == nil then
    end
    assert(true)
    if storage.getFillLevels == nil then
    end
    assert(true)
    if storage.getSupportedFillTypes == nil then
    end
    assert(true)
    for v6, v7 in pairs(storage.fillTypes) do
      if not (self.supportedFillTypes[v6] ~= nil) then
        continue
      end
    end
    if not v2 then
      return false
    end
    self.sourceStorages[storage] = storage
    storage:addLoadingStation(self)
    return true
  end
  return false
end
function LoadingStation:removeSourceStorage(storage)
  if storage ~= nil then
    storage:removeLoadingStation(self)
    self.sourceStorages[storage] = nil
  end
end
function LoadingStation:updateSupportedFillTypes()
  self.supportedFillTypes = {}
  self.aiSupportedFillTypes = {}
  for v4, v5 in pairs(self.loadTriggers) do
    local v6 = v5:getSupportAILoading()
    for v10, v11 in pairs(v5.fillTypes) do
      self.supportedFillTypes[v10] = true
      if not v6 then
        continue
      end
      self.aiSupportedFillTypes[v10] = true
    end
  end
  for v4, v5 in pairs(self.basicFillTypes) do
    self.supportedFillTypes[v4] = true
  end
end
function LoadingStation:getSupportedFillTypes()
  return self.supportedFillTypes
end
function LoadingStation:getIsFillTypeSupported(fillTypeIndex)
  if self.supportedFillTypes[fillTypeIndex] == nil then
  end
  return true
end
function LoadingStation:getIsFillTypeAISupported(fillTypeIndex)
  if self.aiSupportedFillTypes[fillTypeIndex] == nil then
  end
  return true
end
function LoadingStation:getAISupportedFillTypes()
  return self.aiSupportedFillTypes
end
function LoadingStation:getFillLevel(fillType, farmId)
  for v7, v8 in pairs(self.sourceStorages) do
    local v9 = self:hasFarmAccessToStorage(farmId, v8)
    if not v9 then
      continue
    end
    v9 = v8:getFillLevel(fillType)
  end
  return v3
end
function LoadingStation:getAllFillLevels(farmId)
  for v6, v7 in pairs(self.sourceStorages) do
    local v8 = self:hasFarmAccessToStorage(farmId, v7)
    if not v8 then
      continue
    end
    local v9 = v7:getFillLevels()
    for v11, v12 in pairs(...) do
      local v14 = Utils.getNoNil(v2[v11], 0)
      v2[v11] = v14 + v12
    end
  end
  return v2
end
function LoadingStation:addFillLevelToFillableObject(fillableObject, fillUnitIndex, fillTypeIndex, fillDelta, fillInfo, toolType)
  if fillableObject ~= nil and fillTypeIndex ~= FillType.UNKNOWN and fillDelta ~= 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L12
  end
  return 0
  local farmId = fillableObject:getOwnerFarmId()
  local v8 = fillableObject:isa(Vehicle)
  if v8 then
    v8 = fillableObject:getActiveFarm()
  end
  for v12, v13 in pairs(self.sourceStorages) do
    local v14 = self:hasFarmAccessToStorage(farmId, v13)
    if not v14 then
      continue
    end
    local v15 = v13:getFillLevel(fillTypeIndex)
    v14 = Utils.getNoNil(v15, 0)
  end
  v9 = math.min(fillDelta, v8)
  if v9 == 0 then
    return 0
  end
  v9 = fillableObject:getFillUnitFreeCapacity(fillUnitIndex)
  if fillableObject.getConveyorBeltTargetObject ~= nil then
    v10, v11 = fillableObject:getConveyorBeltTargetObject()
    if v10 ~= nil then
      v12 = v10:getFillUnitFreeCapacity(v11)
    end
  end
  if fillableObject.getConveyorBeltFillLevel ~= nil then
    v12 = fillableObject:getConveyorBeltFillLevel()
    v10 = math.max(v9 - v12, 0)
  end
  v10 = math.min(v9, fillDelta)
  v10 = fillableObject:addFillUnitFillLevel(farmId, fillUnitIndex, v10, fillTypeIndex, toolType, fillInfo)
  v11 = self:removeFillLevel(fillTypeIndex, v10, farmId)
  return v10 - v11
end
function LoadingStation:removeFillLevel(fillTypeIndex, fillDelta, farmId)
  for v8, v9 in pairs(self.sourceStorages) do
    local v10 = self:hasFarmAccessToStorage(farmId, v9)
    if not v10 then
      continue
    end
    v10 = v9:getFillLevel(fillTypeIndex)
    if 0 < v10 then
      v9:setFillLevel(v10 - fillDelta, fillTypeIndex)
    end
    local v11 = v9:getFillLevel(fillTypeIndex)
    if not (v4 - v10 - v11 < 0.0001) then
      continue
    end
    return 0
  end
  return v4
end
function LoadingStation:getSourceStorages()
  return self.sourceStorages
end
function LoadingStation:getIsFillAllowedToFarm(farmId)
  for v5, v6 in pairs(self.sourceStorages) do
    local v7 = self:hasFarmAccessToStorage(farmId, v6)
    if not v7 then
      continue
    end
    return true
  end
  return false
end
function LoadingStation:hasFarmAccessToStorage(farmId, storage)
  if self.hasStoragePerFarm then
    local v4 = storage:getOwnerFarmId()
    if farmId ~= v4 then
    end
    return true
  end
  return v3:canFarmAccess(farmId, storage)
end
function LoadingStation:getAITargetPositionAndDirection(fillType)
  for v6, v7 in ipairs(self.loadTriggers) do
    local v8 = v7:getSupportAILoading()
    if not v8 then
      continue
    end
    if fillType ~= FillType.UNKNOWN then
      v8 = v7:getIsFillTypeSupported(fillType)
      if not v8 then
        continue
      end
    end
    break
  end
  if v2 ~= nil then
    v3, v4, v5, v6 = v2:getAITargetPositionAndDirection()
    return v3, v4, v5, v6, v2
  end
  return nil
end
function LoadingStation:setOwnerFarmId(farmId, noEventSend)
  local v4 = v4:superClass()
  v4.setOwnerFarmId(self, farmId, noEventSend)
  for v6, v7 in ipairs(self.loadTriggers) do
    v7:setOwnerFarmId(farmId, true)
  end
end
function LoadingStation:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Loading station node")
  self:register(XMLValueType.STRING, v1 .. "#stationName", "Station name", "LoadingStation")
  self:register(XMLValueType.FLOAT, v1 .. "#storageRadius", "Inside of this radius storages can be placed", 50)
  self:register(XMLValueType.BOOL, v1 .. "#supportsExtension", "Supports extensions", false)
  self:register(XMLValueType.STRING, v1 .. "#fillTypes", "Basic supported filltypes")
  self:register(XMLValueType.STRING, v1 .. "#fillTypeCategories", "Basic supported filltype categories")
  LoadTrigger.registerXMLPaths(self, v1 .. ".loadTrigger(?)")
  self:register(XMLValueType.STRING, v1 .. ".loadTrigger(?)#class", "Name of load trigger class")
end
