-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StorageSystem = {}
local StorageSystem_mt = Class(StorageSystem)
function StorageSystem.new(accessHandler, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.accessHandler = accessHandler
  v2.loadingStations = {}
  v2.placeableLoadingStations = {}
  v2.extendableLoadingStations = {}
  v2.unloadingStations = {}
  v2.placeableUnloadingStations = {}
  v2.extendableUnloadingStations = {}
  v2.storages = {}
  v2.storageExtensions = {}
  return v2
end
function StorageSystem.delete(v0)
end
function StorageSystem:consoleCommandToggleDebug()
  self.debugEnabled = not self.debugEnabled
  for v4 in pairs(self.storages) do
    if self.debugEnabled then
      v6:addDrawable(v4)
    else
      v6:removeDrawable(v4)
    end
  end
  v3 = tostring(self.debugEnabled)
  return "StorageSystem.debugEnabled=" .. v3
end
function StorageSystem:addStorage(storage)
  if storage ~= nil then
    self.storages[storage] = storage
    if storage.isExtension then
      self.storageExtensions[storage] = storage
    end
    return true
  end
  return false
end
function StorageSystem:removeStorage(storage)
  if storage ~= nil then
    self.storages[storage] = nil
    self.storageExtensions[storage] = nil
    return true
  end
  return false
end
function StorageSystem:hasStorage(storage)
  if storage ~= nil then
    if self.storages[storage] == nil then
    end
    return true
  end
  return false
end
function StorageSystem:getStorages()
  return self.storages
end
function StorageSystem:getStorageExtensionsInRange(station, farmId)
  for v7, v8 in pairs(self.storageExtensions) do
    local v9 = self:getIsStationCompatible(station, v7, farmId)
    if not v9 then
      continue
    end
    table.insert(v3, v7)
  end
  return v3
end
function StorageSystem:addLoadingStation(station, placeable)
  if station ~= nil then
    self.loadingStations[station] = station
    v3:publish(MessageType.LOADING_STATIONS_CHANGED)
    if placeable ~= nil then
      if self.placeableLoadingStations[placeable] == nil then
        self.placeableLoadingStations[placeable] = {}
      end
      table.insert(self.placeableLoadingStations[placeable], station)
    end
    if station.supportsExtension then
      self.extendableLoadingStations[station] = station
    end
    return true
  end
  return false
end
function StorageSystem:removeLoadingStation(station, placeable)
  if station ~= nil then
    self.loadingStations[station] = nil
    self.extendableLoadingStations[station] = nil
    if placeable ~= nil and self.placeableLoadingStations[placeable] ~= nil then
      for v6, v7 in ipairs(self.placeableLoadingStations[placeable]) do
        if not (station == v7) then
          continue
        end
        table.remove(self.placeableLoadingStations[placeable], v6)
      end
      if #self.placeableLoadingStations[placeable] == 0 then
        self.placeableLoadingStations[placeable] = nil
      end
    end
    v3:publish(MessageType.LOADING_STATIONS_CHANGED)
    return true
  end
  return false
end
function StorageSystem:getPlaceableLoadingStationIndex(placeable, station)
  if self.placeableLoadingStations[placeable] ~= nil then
    for v6, v7 in ipairs(self.placeableLoadingStations[placeable]) do
      if not (station == v7) then
        continue
      end
      return v6
    end
  end
  return nil
end
function StorageSystem:getPlaceableLoadingStation(placeable, index)
  if self.placeableLoadingStations[placeable] ~= nil then
    return self.placeableLoadingStations[placeable][index]
  end
  return nil
end
function StorageSystem:getLoadingStations()
  return self.loadingStations
end
function StorageSystem:getIsLoadingStationAvailable(loadingStation)
  if self.loadingStations[loadingStation] == nil then
  end
  return true
end
function StorageSystem.addStorageToLoadingStation(v0, v1, v2)
  local v3 = v2:addSourceStorage(v1)
  if v3 then
    v3:publish(MessageType.STORAGE_ADDED_TO_LOADING_STATION, v1, v2)
    return true
  end
end
function StorageSystem:addStorageToLoadingStations(storage, loadingStations, farmId)
  for v8, v9 in pairs(loadingStations) do
    local v10 = self:addStorageToLoadingStation(storage, v9)
    if not v10 then
      continue
    end
  end
  return v4
end
function StorageSystem.removeStorageFromLoadingStations(v0, v1, v2)
  for v7, v8 in pairs(v2) do
    local v9 = v8:removeSourceStorage(v1)
    if not v9 then
      continue
    end
    v9:publish(MessageType.STORAGE_REMOVED_FROM_LOADING_STATION, v1, v8)
  end
  return v3
end
function StorageSystem:getExtendableLoadingStationsInRange(storage, farmId, posX, posY, posZ)
  for v10, v11 in pairs(self.extendableLoadingStations) do
    local v12 = self:getIsStationCompatible(v10, storage, farmId, posX, posY, posZ)
    if not v12 then
      continue
    end
    table.insert(v6, v10)
  end
  return v6
end
function StorageSystem:addUnloadingStation(station, placeable)
  if station ~= nil then
    self.unloadingStations[station] = station
    v3:publish(MessageType.UNLOADING_STATIONS_CHANGED)
    if placeable == nil then
      Logging.error("StorageSystem:addUnloadingStation(): no placeable given")
      printCallstack()
      return false
    end
    if self.placeableUnloadingStations[placeable] == nil then
      self.placeableUnloadingStations[placeable] = {}
    end
    table.insert(self.placeableUnloadingStations[placeable], station)
    if station.supportsExtension then
      self.extendableUnloadingStations[station] = station
    end
    return true
  end
  return false
end
function StorageSystem:removeUnloadingStation(station, placeable)
  if station ~= nil then
    self.unloadingStations[station] = nil
    self.extendableUnloadingStations[station] = nil
    if placeable ~= nil and self.placeableUnloadingStations[placeable] ~= nil then
      for v6, v7 in ipairs(self.placeableUnloadingStations[placeable]) do
        if not (station == v7) then
          continue
        end
        table.remove(self.placeableUnloadingStations[placeable], v6)
      end
      if #self.placeableUnloadingStations[placeable] == 0 then
        self.placeableUnloadingStations[placeable] = nil
      end
    end
    v3:publish(MessageType.UNLOADING_STATIONS_CHANGED)
    return true
  end
  return false
end
function StorageSystem:getPlaceableUnloadingStationIndex(placeable, station)
  if self.placeableUnloadingStations[placeable] ~= nil then
    for v6, v7 in ipairs(self.placeableUnloadingStations[placeable]) do
      if not (station == v7) then
        continue
      end
      return v6
    end
  end
  return nil
end
function StorageSystem:getPlaceableUnloadingStation(placeable, index)
  if self.placeableUnloadingStations[placeable] ~= nil then
    return self.placeableUnloadingStations[placeable][index]
  end
  return nil
end
function StorageSystem:getUnloadingStations()
  return self.unloadingStations
end
function StorageSystem:getIsUnloadingStationAvailable(unloadingStation)
  if self.unloadingStations[unloadingStation] == nil then
  end
  return true
end
function StorageSystem.addStorageToUnloadingStation(v0, v1, v2)
  local v3 = v2:addTargetStorage(v1)
  if v3 then
    v3:publish(MessageType.STORAGE_ADDED_TO_UNLOADING_STATION, v1, v2)
    return true
  end
end
function StorageSystem:addStorageToUnloadingStations(storage, unloadingStations)
  for v7, v8 in pairs(unloadingStations) do
    local v9 = self:addStorageToUnloadingStation(storage, v8)
    if not v9 then
      continue
    end
  end
  return v3
end
function StorageSystem.removeStorageFromUnloadingStations(v0, v1, v2)
  for v7, v8 in pairs(v2) do
    local v9 = v8:removeTargetStorage(v1)
    if not v9 then
      continue
    end
    v9:publish(MessageType.STORAGE_REMOVED_FROM_UNLOADING_STATION, v1, v8)
  end
  return v3
end
function StorageSystem:getExtendableUnloadingStationsInRange(storage, farmId, posX, posY, posZ)
  for v10, v11 in pairs(self.extendableUnloadingStations) do
    local v12 = self:getIsStationCompatible(v10, storage, farmId, posX, posY, posZ)
    if not v12 then
      continue
    end
    table.insert(v6, v10)
  end
  return v6
end
function StorageSystem:getIsStationCompatible(station, storage, farmId, posX, posY, posZ)
  if station.storageRadius == nil then
  end
  local v8 = v8:canFarmAccess(farmId, station)
  if true and v8 then
    if posX ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L35
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L35
      local v10, v11, v12 = getWorldTranslation(station.rootNode)
      local v13 = MathUtil.vector3Length(v10 - posX, v11 - posY, v12 - posZ)
    else
      v10 = calcDistanceFrom(storage.rootNode, station.rootNode)
    end
    if v9 >= station.storageRadius then
    end
    if not true then
      return false
    end
    for v15, v16 in pairs(storage.fillTypes) do
      if not (station.supportedFillTypes[v15] ~= nil) then
        continue
      end
    end
    if not v11 then
      return false
    end
    return true
  end
  return false
end
