-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Storage = {}
local Storage_mt = Class(Storage, Object)
InitStaticObjectClass(Storage, "Storage", ObjectIds.OBJECT_STORAGE)
function Storage:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Storage node")
  self:register(XMLValueType.FLOAT, v1 .. "#capacity", "Total capacity", 100000)
  self:register(XMLValueType.FLOAT, v1 .. "#fillLevelSyncThreshold", "Fill level difference needed for synchronization in Multiplayer", 1)
  self:register(XMLValueType.BOOL, v1 .. "#supportsMultipleFillTypes", "If true capacity can be used by multiple fill types at the same time. If false only one filltype is allowed", true)
  self:register(XMLValueType.FLOAT, v1 .. "#costsPerFillLevelAndDay", "Costs per fill level and day", 0)
  self:register(XMLValueType.STRING, v1 .. "#fillTypeCategories", "Supported fill type categories")
  self:register(XMLValueType.STRING, v1 .. "#fillTypes", "Supported fill types")
  self:register(XMLValueType.BOOL, v1 .. "#isExtension", "If storage is an extension")
  self:register(XMLValueType.STRING, v1 .. ".capacity(?)#fillType", "Custom filltype capacity")
  self:register(XMLValueType.FLOAT, v1 .. ".capacity(?)#capacity", "Custom filltype capacity")
  self:register(XMLValueType.STRING, v1 .. ".startFillLevel(?)#fillType", "Start filllevel fill type")
  self:register(XMLValueType.FLOAT, v1 .. ".startFillLevel(?)#fillLevel", "Start filllevel")
  FillPlane.registerXMLPaths(self, v1 .. ".fillPlane(?)")
  self:register(XMLValueType.STRING, v1 .. ".fillPlane(?)#fillType", "Fillplane till type")
  FillPlaneUtil.registerFillPlaneXMLPaths(self, v1 .. ".dynamicFillPlane")
  self:register(XMLValueType.STRING, v1 .. ".dynamicFillPlane#defaultFillType", "Fillplane default filltype")
end
function Storage:registerSavegameXMLPaths(v1)
  self:register(XMLValueType.INT, v1 .. "#farmId", "Owner farm land id", 0)
  self:register(XMLValueType.STRING, v1 .. ".node(?)#fillType", "Fill type name")
  self:register(XMLValueType.FLOAT, v1 .. ".node(?)#fillLevel", "Fill level", 0)
end
function Storage.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.unloadingStations = {}
  v3.loadingStations = {}
  v3.fillLevelChangedListeners = {}
  v3.rootNode = 0
  v3.foreignSilo = false
  return v3
end
function Storage:load(components, xmlFile, key, i3dMappings)
  local v5 = xmlFile:getValue(key .. "#node", components[1].node, components, i3dMappings)
  self.rootNode = v5
  local v6 = xmlFile:getValue(key .. "#costsPerFillLevelAndDay")
  self.costsPerFillLevelAndDay = v6 or 0
  v5 = xmlFile:getValue(key .. "#capacity", 100000)
  self.capacity = v5
  v5 = xmlFile:getValue(key .. "#fillLevelSyncThreshold", 1)
  self.fillLevelSyncThreshold = v5
  v5 = xmlFile:getValue(key .. "#supportsMultipleFillTypes", true)
  self.supportsMultipleFillTypes = v5
  self.capacities = {}
  self.fillTypes = {}
  self.fillLevels = {}
  self.fillLevelsLastSynced = {}
  self.fillLevelsLastPublished = {}
  self.sortedFillTypes = {}
  v5 = xmlFile:getValue(key .. "#fillTypeCategories")
  v6 = xmlFile:getValue(key .. "#fillTypes")
  if v5 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L106
    local v15 = tostring(key)
    local v8 = v8:getFillTypesByCategoryNames(v5, "Warning: '" .. v15 .. "' has invalid fillTypeCategory '%s'.")
  elseif v5 == nil and v6 ~= nil then
    v15 = tostring(key)
    v8 = v8:getFillTypesByNames(v6, "Warning: '" .. v15 .. "' has invalid fillType '%s'.")
  end
  if v7 ~= nil then
    for v11, v12 in pairs(v7) do
      self.fillTypes[v12] = true
    end
  end
  xmlFile:iterate(key .. ".capacity", function(self, components)
    local xmlFile = xmlFile:getValue(components .. "#fillType")
    local key = key:getFillTypeIndexByName(xmlFile)
    if key ~= nil then
      u1.fillTypes[key] = true
      local i3dMappings = i3dMappings:getValue(components .. "#capacity", 100000)
      u1.capacities[key] = i3dMappings
      return
    end
    Logging.xmlWarning(u0, "FillType '%s' not defined for '%s'", xmlFile, components)
  end)
  v8 = table.size(self.fillTypes)
  if v8 == 0 then
    Logging.xmlError(xmlFile, "'Storage' entry %s needs either the 'fillTypeCategories', 'fillTypes' attribute or fillType specific capacities.", key)
    return false
  end
  for v11, v12 in pairs(self.fillTypes) do
    table.insert(self.sortedFillTypes, v11)
    self.fillLevels[v11] = 0
    self.fillLevelsLastSynced[v11] = 0
    self.fillLevelsLastPublished[v11] = 0
  end
  table.sort(self.sortedFillTypes)
  xmlFile:iterate(key .. ".startFillLevel", function(self, components)
    local xmlFile = xmlFile:getValue(components .. "#fillType")
    local key = key:getFillTypeIndexByName(xmlFile)
    if key ~= nil then
      if u1.fillLevels[key] ~= nil then
        local i3dMappings = i3dMappings:getValue(components .. "#fillLevel")
        if u1.supportsMultipleFillTypes then
          if u1.capacities[key] ~= nil then
            local v5 = MathUtil.clamp(i3dMappings, 0, u1.capacities[key])
            u1.fillLevels[key] = v5
            return
          end
          v5 = MathUtil.clamp(i3dMappings, 0, u1.capacity - u2)
          u2 = u2 + v5
          u1.fillLevels[key] = v5
          return
        end
        if u2 == 0 then
          if not u1.capacities[key] then
          end
          v5 = v5(v6, v7, v8)
          u2 = v5
          u1.fillLevels[key] = v5
          return
        end
        Logging.xmlWarning(u0, "Failed to set start fill level for '%s' because only one filltype allowed at the same time for '%s'", xmlFile, components)
        return
      end
      Logging.xmlWarning(u0, "FillType '%s' not supported for '%s'", xmlFile, components)
      return
    end
    Logging.xmlWarning(u0, "FillType '%s' not defined for '%s'", xmlFile, components)
  end)
  self.fillPlanes = {}
  xmlFile:iterate(key .. ".fillPlane", function(self, components)
    local xmlFile = xmlFile:getValue(components .. "#fillType")
    local key = key:getFillTypeIndexByName(xmlFile)
    if key ~= nil then
      local i3dMappings = FillPlane.new()
      i3dMappings:load(u1, u0, components, u2)
      u3.fillPlanes[key] = i3dMappings
    end
  end)
  v9 = xmlFile:getValue(key .. ".dynamicFillPlane#node", nil, components, i3dMappings)
  self.dynamicFillPlaneBaseNode = v9
  if self.dynamicFillPlaneBaseNode ~= nil then
    v9 = xmlFile:getValue(key .. ".dynamicFillPlane#defaultFillType")
    v10 = v10:getFillTypeIndexByName(v9)
    if not v10 then
    end
    if not self.capacities[v10] then
    end
    v11 = v11(v12, v13, v14, v15)
    if v11 ~= nil then
      FillPlaneUtil.assignDefaultMaterials(v11)
      FillPlaneUtil.setFillType(v11, v10)
      self.dynamicFillPlane = v11
    end
  end
  v9 = xmlFile:getValue(key .. "#isExtension", false)
  self.isExtension = v9
  v9 = self:getNextDirtyFlag()
  self.storageDirtyFlag = v9
  v9:subscribe(MessageType.FARM_DELETED, self.farmDestroyed, self)
  return true
end
function Storage:delete()
  components:unsubscribeAll(self)
  if self.fillPlanes ~= nil then
    for i3dMappings, v5 in pairs(self.fillPlanes) do
      v5:delete()
    end
    self.fillPlanes = nil
  end
  xmlFile = xmlFile:superClass()
  xmlFile.delete(self)
end
function Storage:readStream(streamId, connection)
  local i3dMappings = i3dMappings:superClass()
  i3dMappings.readStream(self, streamId, connection)
  for v6, v7 in ipairs(self.sortedFillTypes) do
    local v9 = streamReadBool(streamId)
    if v9 then
      v9 = streamReadFloat32(streamId)
    end
    self:setFillLevel(v8, v7)
  end
end
function Storage:writeStream(streamId, connection)
  local i3dMappings = i3dMappings:superClass()
  i3dMappings.writeStream(self, streamId, connection)
  for v6, v7 in ipairs(self.sortedFillTypes) do
    if 0 >= self.fillLevels[v7] then
    end
    local v9 = v9(v10, true)
    if not v9 then
      continue
    end
    streamWriteFloat32(streamId, v8)
    self.fillLevelsLastSynced[v7] = v8
  end
end
function Storage:readUpdateStream(streamId, timestamp, connection)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
  local i3dMappings = connection:getIsServer()
  if i3dMappings then
    i3dMappings = streamReadBool(streamId)
    if i3dMappings then
      for v7, v8 in ipairs(self.sortedFillTypes) do
        local v10 = streamReadBool(streamId)
        if v10 then
          v10 = streamReadFloat32(streamId)
        end
        self:setFillLevel(v9, v8)
      end
    end
  end
end
function Storage:writeUpdateStream(streamId, connection, dirtyMask)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
  local i3dMappings = connection:getIsServer()
  if not i3dMappings then
    local v7 = bitAND(dirtyMask, self.storageDirtyFlag)
    if v7 == 0 then
    end
    i3dMappings = i3dMappings(v5, true)
    if i3dMappings then
      for v7, v8 in ipairs(self.sortedFillTypes) do
        if 0 >= self.fillLevels[v8] then
        end
        local v10 = v10(v11, true)
        if not v10 then
          continue
        end
        streamWriteFloat32(streamId, v9)
        self.fillLevelsLastSynced[v8] = v9
      end
    end
  end
end
function Storage:loadFromXMLFile(xmlFile, key)
  local v5 = xmlFile:getValue(key .. "#farmId", AccessHandler.EVERYONE)
  self:setOwnerFarmId(v5, true)
  for v6, v7 in pairs(self.fillLevels) do
    self.fillLevels[v6] = 0
  end
  while true do
    i3dMappings = string.format(key .. ".node(%d)", key)
    v5 = xmlFile:hasProperty(i3dMappings)
    if not v5 then
      break
    end
    v5 = xmlFile:getValue(i3dMappings .. "#fillType")
    v7 = xmlFile:getValue(i3dMappings .. "#fillLevel", 0)
    v6 = math.max(v7, 0)
    v7 = v7:getFillTypeIndexByName(v5)
    if v7 ~= nil then
      if self.fillLevels[v7] ~= nil then
        self:setFillLevel(v6, v7, nil)
        -- goto L89  (LOP_JUMP +13)
      end
      Logging.xmlWarning(xmlFile, "FillType '%s' is not supported by storage", v5)
    else
      Logging.xmlWarning(xmlFile, "FillType Invalid filltype '%s'", v5)
    end
  end
  return true
end
function Storage:saveToXMLFile(xmlFile, key, usedModNames)
  local v7 = self:getOwnerFarmId()
  xmlFile:setValue(...)
  for v8, v9 in pairs(self.fillLevels) do
    if not (0 < v9) then
      continue
    end
    local v10 = string.format("%s.node(%d)", key, i3dMappings)
    local v11 = v11:getFillTypeNameByIndex(v8)
    xmlFile:setValue(v10 .. "#fillType", v11)
    xmlFile:setValue(v10 .. "#fillLevel", v9)
  end
end
function Storage:empty()
  for i3dMappings, v5 in pairs(self.fillLevels) do
    self.fillLevels[i3dMappings] = 0
    if not self.isServer then
      continue
    end
    self:raiseDirtyFlags(self.storageDirtyFlag)
  end
end
function Storage:updateFillPlanes()
  if self.fillPlanes ~= nil then
    for i3dMappings, v5 in pairs(self.fillPlanes) do
      local v7 = self:getCapacity(i3dMappings)
      if 0 < v7 then
      end
      v5:setState(v8)
    end
  end
end
function Storage:getIsFillTypeSupported(fillType)
  if self.fillTypes[fillType] ~= true then
  end
  return true
end
function Storage:getFillLevel(fillType)
  return self.fillLevels[fillType] or 0
end
function Storage:getFillLevels()
  return self.fillLevels
end
function Storage:getCapacity(fillType)
  if not self.capacities[fillType] then
  end
  return xmlFile
end
function Storage:setFillLevel(fillLevel, fillType, fillInfo)
  if not self.capacities[fillType] then
  end
  local v5 = MathUtil.clamp(fillLevel, 0, i3dMappings)
  if self.fillLevels[fillType] ~= nil and v5 ~= self.fillLevels[fillType] then
    self.fillLevels[fillType] = v5
    local newFillLevelInt = MathUtil.round(self.fillLevels[fillType])
    local v8 = math.abs(self.fillLevels[fillType] - self.fillLevels[fillType])
    if 0.1 >= v8 then
      -- if v0.fillLevelsLastPublished[v2] == v7 then goto L67 end
    end
    for v11, v12 in ipairs(self.fillLevelChangedListeners) do
      v12(fillType, v6)
    end
    self.fillLevelsLastPublished[fillType] = newFillLevelInt
    if self.isServer then
      if fillLevel >= 0.1 then
        v8 = math.abs(self.fillLevelsLastSynced[fillType] - fillLevel)
        if self.fillLevelSyncThreshold > v8 then
          -- if v4 - v1 >= 0.1 then goto L94 end
        end
      end
      self:raiseDirtyFlags(self.storageDirtyFlag)
    end
    self:updateFillPlanes()
    if self.dynamicFillPlane ~= nil then
      if fillInfo ~= nil then
      end
      local v11, v12, v13 = localToWorld(v8, 0, 0, 0)
      local v14, v15, v16 = localDirectionToWorld(v8, v9, 0, 0)
      local v17, v18, v19 = localDirectionToWorld(v8, 0, 0, v10)
      local v21 = math.floor(v6 / 400)
      local v20 = MathUtil.clamp(v21, 1, 25)
      -- TODO: structure LOP_FORNPREP (pc 147, target 164)
      fillPlaneAdd(self.dynamicFillPlane, v6 / v20, v11, v12, v13, v14, v15, v16, v17, v18, v19)
      -- TODO: structure LOP_FORNLOOP (pc 163, target 148)
    end
  end
end
function Storage:getFreeCapacity(fillType)
  if self.fillLevels[fillType] == nil then
    return 0
  end
  if self.supportsMultipleFillTypes then
    if self.capacities[fillType] ~= nil then
      return math.max(self.capacities[fillType] - self.fillLevels[fillType], 0)
    end
    for v6, v7 in pairs(self.fillLevels) do
    end
    key = math.max(self.capacity - xmlFile, 0)
    return key
  end
  if not self.capacities[fillType] then
  end
  for v7, v8 in pairs(self.fillLevels) do
    if fillType == v7 then
    else
      if not (0 < v8) then
        continue
      end
      return 0
    end
  end
  i3dMappings = math.max(xmlFile - key, 0)
  return i3dMappings
end
function Storage:getSupportedFillTypes()
  return self.fillTypes
end
function Storage:hourChanged()
  if self.isServer then
    for v7, v8 in pairs(self.fillLevels) do
    end
    v7 = self:getOwnerFarmId()
    i3dMappings:addMoney(-key, v7, MoneyType.PROPERTY_MAINTENANCE, true)
  end
end
function Storage:addUnloadingStation(station)
  self.unloadingStations[station] = station
end
function Storage:removeUnloadingStation(station)
  self.unloadingStations[station] = nil
end
function Storage:addLoadingStation(loadingStation)
  self.loadingStations[loadingStation] = loadingStation
end
function Storage:removeLoadingStation(loadingStation)
  self.loadingStations[loadingStation] = nil
end
function Storage:farmDestroyed(farmId)
  local xmlFile = self:getOwnerFarmId()
  if xmlFile == farmId then
    for v5, v6 in pairs(self.fillTypes) do
      if not v6 then
        continue
      end
      self:setFillLevel(0, v5)
    end
  end
end
function Storage:addFillLevelChangedListeners(func)
  table.addElement(self.fillLevelChangedListeners, func)
end
function Storage:removeFillLevelChangedListeners(func)
  table.removeElement(self.fillLevelChangedListeners, func)
end
function Storage:draw()
  local debugTable = DebugInfoTable.new()
  for v6, v7 in pairs(self.fillTypes) do
    if not v7 then
      continue
    end
    local v11 = v11:getFillTypeNameByIndex(v6)
    if not self.capacities[v6] and not self.capacity then
    end
    v11 = v11(v12, v13, v14)
    v10.value = v11
    table.insert(xmlFile, v10)
  end
  debugTable:createWithNodeToCamera(self.rootNode, 1, {{title = "Storage (without extensions)", content = xmlFile}}, 0.05)
  key:addFrameElement(debugTable)
end
