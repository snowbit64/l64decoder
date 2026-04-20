-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UnloadingStation = {FX_DURATION = 5000}
local UnloadingStation_mt = Class(UnloadingStation, Object)
InitStaticObjectClass(UnloadingStation, "UnloadingStation", ObjectIds.OBJECT_UNLOADING_STATION)
function UnloadingStation.new(isServer, isClient, customMt)
  if not customMt then
  end
  return v3(v4, v5, v6)
end
function UnloadingStation:load(components, xmlFile, key, customEnv, i3dMappings, rootNode)
  if not rootNode then
    local v7 = xmlFile:getValue(key .. "#node", rootNode, components, i3dMappings)
  end
  self.rootNode = v7
  if self.rootNode == nil then
    Logging.xmlError(xmlFile, "Missing node defined in '%s'", key)
    return false
  end
  v7 = getName(self.rootNode)
  self.rootNodeName = v7
  v7 = xmlFile:getValue(key .. "#stationName", nil)
  if v7 then
    local v8 = v8:convertText(v7)
  end
  self.stationName = v8
  v8 = xmlFile:getValue(key .. "#storageRadius", 50)
  self.storageRadius = v8
  v8 = xmlFile:getValue(key .. "#hideFromPricesMenu", false)
  self.hideFromPricesMenu = v8
  v8 = xmlFile:getValue(key .. "#supportsExtension", false)
  self.supportsExtension = v8
  self.owningPlaceable = nil
  self.hasStoragePerFarm = false
  self.targetStorages = {}
  self.unloadTriggers = {}
  self.supportedFillTypes = {}
  self.aiSupportedFillTypes = {}
  xmlFile:iterate(key .. ".unloadTrigger", function(self, components)
    local xmlFile = xmlFile:getValue(components .. "#class", "UnloadTrigger")
    local key = ClassUtil.getClassObject(xmlFile)
    if key == nil then
      Logging.xmlError(u0, "UnloadTrigger class '%s' not defined", xmlFile, components)
      return
    end
    local customEnv = key.new(u1.isServer, u1.isClient)
    local i3dMappings = customEnv:load(u2, u0, components, u1, nil, u3)
    if i3dMappings then
      customEnv:setTarget(u1)
      customEnv:register(true)
      table.insert(u1.unloadTriggers, customEnv)
      return
    end
    customEnv:delete()
  end)
  if self.isClient then
    local v9 = xmlFile:getFilename()
    v8, v9 = Utils.getModNameAndBaseDirectory(...)
    local v11 = v11:loadSampleFromXML(xmlFile, key .. ".sounds", "idle", v9, components, 1, AudioGroup.ENVIRONMENT, i3dMappings, nil)
    v11 = v11:loadSampleFromXML(xmlFile, key .. ".sounds", "active", v9, components, 1, AudioGroup.ENVIRONMENT, i3dMappings, nil)
    self.samples = {idle = v11, active = v11}
    local v10 = v10:loadAnimations(xmlFile, key .. ".animationNodes", components, self, i3dMappings)
    self.animations = v10
    v10 = v10:loadEffect(xmlFile, key .. ".effectNodes", components, self, i3dMappings)
    self.effects = v10
    if self.samples.active == nil and 0 >= #self.animations and 0 >= #self.effects then
    end
    self.hasFx = v10
    self.fxTimer = nil
    self.fxActive = false
    v10:playSample(self.samples.idle)
  end
  self:updateSupportedFillTypes()
  return true
end
function UnloadingStation:delete()
  if self.unloadTriggers ~= nil then
    for v4, v5 in pairs(self.unloadTriggers) do
      v5:delete()
    end
  end
  if self.isClient then
    v1:stopSamples(self.samples)
    v1:deleteSamples(self.samples)
    v1:deleteAnimations(self.animations)
    v1:deleteEffects(self.effects)
  end
  if self.fxTimer ~= nil then
    v1:delete()
    self.fxTimer = nil
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function UnloadingStation:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    for v6, v7 in ipairs(self.unloadTriggers) do
      local unloadTriggerId = NetworkUtil.readNodeObjectId(streamId)
      v7:readStream(streamId, connection)
      v9:finishRegisterObject(v7, unloadTriggerId)
    end
  end
end
function UnloadingStation:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    for v6, v7 in ipairs(self.unloadTriggers) do
      local v10 = NetworkUtil.getObjectId(v7)
      NetworkUtil.writeNodeObjectId(...)
      v7:writeStream(streamId, connection)
      v8:registerObjectInStream(connection, v7)
    end
  end
end
function UnloadingStation.loadFromXMLFile(v0, v1, v2)
  return true
end
function UnloadingStation.saveToXMLFile(v0, v1, v2, v3)
end
function UnloadingStation:getName()
  if not self.stationName and self.owningPlaceable then
    local v1 = v1:getName()
    -- if v1 then goto L13 end
  end
  return v1
end
function UnloadingStation:updateSupportedFillTypes()
  self.supportedFillTypes = {}
  self.aiSupportedFillTypes = {}
  for v4, v5 in pairs(self.unloadTriggers) do
    local v6 = v5:getSupportAIUnloading()
    for v10, v11 in pairs(v5.fillTypes) do
      self.supportedFillTypes[v10] = true
      if not v6 then
        continue
      end
      self.aiSupportedFillTypes[v10] = true
    end
  end
end
function UnloadingStation:addTargetStorage(storage)
  if storage ~= nil then
    assert(storage.getFreeCapacity)
    if storage.getIsFillTypeSupported == nil then
    end
    assert(true)
    if storage.setFillLevel == nil then
    end
    assert(true)
    if storage.getFillLevel == nil then
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
    self.targetStorages[storage] = storage
    storage:addUnloadingStation(self)
    return true
  end
  return false
end
function UnloadingStation:removeTargetStorage(storage)
  if storage ~= nil then
    storage:removeUnloadingStation(self)
    self.targetStorages[storage] = nil
  end
end
function UnloadingStation:getIsFillTypeSupported(fillTypeIndex)
  if self.supportedFillTypes[fillTypeIndex] == nil then
  end
  return true
end
function UnloadingStation:getSupportedFillTypes()
  return self.supportedFillTypes
end
function UnloadingStation:getIsFillTypeAISupported(fillTypeIndex)
  if self.aiSupportedFillTypes[fillTypeIndex] == nil then
  end
  return true
end
function UnloadingStation:getAISupportedFillTypes()
  return self.aiSupportedFillTypes
end
function UnloadingStation.getIsFillTypeAllowed(v0, v1, v2)
  return true
end
function UnloadingStation:getFreeCapacity(fillTypeIndex, farmId)
  for v7, v8 in pairs(self.targetStorages) do
    if farmId ~= nil then
      local v9 = self:hasFarmAccessToStorage(farmId, v8)
      if not v9 then
        continue
      end
    end
    v9 = v8:getFreeCapacity(fillTypeIndex)
  end
  return v3
end
function UnloadingStation:getCapacity(fillTypeIndex, farmId)
  for v7, v8 in pairs(self.targetStorages) do
    local v9 = self:hasFarmAccessToStorage(farmId, v8)
    if not v9 then
      continue
    end
    v9 = v8:getIsFillTypeSupported(fillTypeIndex)
    if not v9 then
      continue
    end
    v9 = v8:getCapacity(fillTypeIndex)
    if not (v9 ~= nil) then
      continue
    end
  end
  return v3
end
function UnloadingStation:getFillLevel(fillTypeIndex, farmId)
  for v7, v8 in pairs(self.targetStorages) do
    local v9 = self:hasFarmAccessToStorage(farmId, v8)
    if not v9 then
      continue
    end
    v9 = v8:getFillLevel(fillTypeIndex)
  end
  return v3
end
function UnloadingStation.getIsToolTypeAllowed(v0, v1)
  return true
end
function UnloadingStation:addFillLevelFromTool(farmId, deltaFillLevel, fillType, fillInfo, toolType, extraAttributes)
  if 0 > deltaFillLevel then
  end
  assert(true)
  local v8 = self:getIsFillTypeAllowed(fillType)
  if v8 then
    v8 = self:getIsToolTypeAllowed(toolType)
    if v8 then
      for v11, v12 in pairs(self.targetStorages) do
        local v13 = self:hasFarmAccessToStorage(farmId, v12)
        if not v13 then
          continue
        end
        v13 = v12:getFreeCapacity(fillType)
        if 0 < v13 then
          v13 = v12:getFillLevel(fillType)
          v12:setFillLevel(v13 + deltaFillLevel, fillType, fillInfo)
          local v14 = v12:getFillLevel(fillType)
        end
        if not (deltaFillLevel - 0.001 <= v7) then
          continue
        end
        self:startFx(fillType)
        return deltaFillLevel
      end
    end
  end
  return v7
end
function UnloadingStation:startFx(fillType)
  if self.isClient and self.hasFx then
    if self.fxTimer == nil then
      local v2 = Timer.new(UnloadingStation.FX_DURATION)
      v2 = v2:setFinishCallback(function()
        if u0.isClient then
          self:stopSample(u0.samples.active)
          self:stopAnimations(u0.animations)
          self:stopEffects(u0.effects)
          u0.fxActive = false
        end
      end)
      self.fxTimer = v2
    end
    v2:start()
    if not self.fxActive then
      v2:playSample(self.samples.active)
      v2:startAnimations(self.animations)
      v2:setFillType(self.effects, fillType)
      v2:startEffects(self.effects)
      self.fxActive = true
    end
  end
end
function UnloadingStation:getIsFillAllowedFromFarm(farmId)
  for v5, v6 in pairs(self.targetStorages) do
    local v7 = self:hasFarmAccessToStorage(farmId, v6)
    if not v7 then
      continue
    end
    return true
  end
  return false
end
function UnloadingStation:hasFarmAccessToStorage(farmId, storage)
  if self.hasStoragePerFarm then
    local v4 = storage:getOwnerFarmId()
    if farmId ~= v4 then
    end
    return true
  end
  return v3:canFarmAccess(farmId, storage, true)
end
function UnloadingStation:getAITargetPositionAndDirection(fillType)
  for v6, v7 in ipairs(self.unloadTriggers) do
    local v8 = v7:getSupportAIUnloading()
    if not v8 then
      continue
    end
    if fillType ~= FillType.UNKNOWN then
      v8 = v7:getIsFillTypeAllowed(fillType)
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
function UnloadingStation:setOwnerFarmId(farmId, noEventSend)
  local v4 = v4:superClass()
  v4.setOwnerFarmId(self, farmId, noEventSend)
  for v6, v7 in ipairs(self.unloadTriggers) do
    v7:setOwnerFarmId(farmId, true)
  end
end
function UnloadingStation:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Unloading station node")
  self:register(XMLValueType.STRING, v1 .. "#stationName", "Station name", "LoadingStation")
  self:register(XMLValueType.FLOAT, v1 .. "#storageRadius", "Inside of this radius storages can be placed", 50)
  self:register(XMLValueType.BOOL, v1 .. "#hideFromPricesMenu", "Hide station from prices menu", false)
  self:register(XMLValueType.BOOL, v1 .. "#supportsExtension", "Supports extensions", false)
  UnloadTrigger.registerXMLPaths(self, v1 .. ".unloadTrigger(?)")
  self:register(XMLValueType.STRING, v1 .. ".unloadTrigger(?)#class", "Name of unload trigger class")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "active")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "idle")
  AnimationManager.registerAnimationNodesXMLPaths(self, v1 .. ".animationNodes")
  EffectManager.registerEffectXMLPaths(self, v1 .. ".effectNodes")
end
