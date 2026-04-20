-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIParameterUnloadingStation = {}
local AIParameterUnloadingStation_mt = Class(AIParameterUnloadingStation, AIParameter)
function AIParameterUnloadingStation.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1["type"] = AIParameterType.UNLOADING_STATION
  v1.unloadingStationId = nil
  v1.unloadingStationIds = {}
  return v1
end
function AIParameterUnloadingStation:saveToXMLFile(xmlFile, key, usedModNames)
  local unloadingStation = self:getUnloadingStation()
  if unloadingStation ~= nil and unloadingStation.owningPlaceable ~= nil and unloadingStation.owningPlaceable.currentSavegameId ~= nil then
    local v6 = v6:getPlaceableUnloadingStationIndex(unloadingStation.owningPlaceable, unloadingStation)
    if v6 ~= nil then
      xmlFile:setInt(key .. "#stationId", unloadingStation.owningPlaceable.currentSavegameId)
      xmlFile:setInt(key .. "#stationIndex", v6)
    end
  end
end
function AIParameterUnloadingStation:loadFromXMLFile(xmlFile, key)
  local unloadingStationSavegameId = xmlFile:getInt(key .. "#stationId")
  local v4 = xmlFile:getInt(key .. "#stationIndex")
  if unloadingStationSavegameId ~= nil and v4 ~= nil then
    local v5 = self:setUnloadingStationFromSavegameId(unloadingStationSavegameId, v4)
    if not v5 then
      v5:subscribeOneshot(MessageType.LOADED_ALL_SAVEGAME_PLACEABLES, self.onPlaceableLoaded, self, {unloadingStationSavegameId, v4})
    end
  end
end
function AIParameterUnloadingStation:onPlaceableLoaded(args)
  self:setUnloadingStationFromSavegameId(args[1], args[2])
end
function AIParameterUnloadingStation:setUnloadingStationFromSavegameId(savegameId, index)
  local v3 = v3:getPlaceableBySavegameId(savegameId)
  if v3 ~= nil then
    local v4 = v4:getPlaceableUnloadingStation(v3, index)
    self:setUnloadingStation(v4)
    return true
  end
  return false
end
function AIParameterUnloadingStation:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    v3 = NetworkUtil.readNodeObjectId(streamId)
    self.unloadingStationId = v3
  end
end
function AIParameterUnloadingStation:writeStream(streamId, connection)
  if self.unloadingStationId == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    NetworkUtil.writeNodeObjectId(streamId, self.unloadingStationId)
  end
end
function AIParameterUnloadingStation:setUnloadingStation(unloadingStation)
  local v2 = NetworkUtil.getObjectId(unloadingStation)
  self.unloadingStationId = v2
end
function AIParameterUnloadingStation:getUnloadingStation()
  local unloadingStation = NetworkUtil.getObject(self.unloadingStationId)
  if unloadingStation ~= nil and unloadingStation.owningPlaceable ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      return unloadingStation
    end
  end
  return nil
end
function AIParameterUnloadingStation:getString()
  local unloadingStation = NetworkUtil.getObject(self.unloadingStationId)
  if unloadingStation ~= nil then
    return unloadingStation:getName()
  end
  return ""
end
function AIParameterUnloadingStation:setValidUnloadingStations(unloadingStations)
  self.unloadingStationIds = {}
  for v6, v7 in ipairs(unloadingStations) do
    local v8 = NetworkUtil.getObjectId(v7)
    if not (v8 ~= nil) then
      continue
    end
    if v8 == self.unloadingStationId then
    end
    table.insert(self.unloadingStationIds, v8)
  end
  if not v2 then
  end
  self.unloadingStationId = v3
end
function AIParameterUnloadingStation:setNextItem()
  for v5, v6 in ipairs(self.unloadingStationIds) do
    if not (v6 == self.unloadingStationId) then
      continue
    end
  end
  if #self.unloadingStationIds < v1 then
  end
  self.unloadingStationId = self.unloadingStationIds[v1]
end
function AIParameterUnloadingStation:setPreviousItem()
  for v5, v6 in ipairs(self.unloadingStationIds) do
    if not (v6 == self.unloadingStationId) then
      continue
    end
  end
  if v1 < 1 then
  end
  self.unloadingStationId = self.unloadingStationIds[v1]
end
function AIParameterUnloadingStation:validate(fillTypeIndex, farmId)
  if self.unloadingStationId == nil then
    local v4 = v4:getText("ai_validationErrorNoUnloadingStation")
    return false
  end
  local unloadingStation = self:getUnloadingStation()
  if unloadingStation == nil then
    local v5 = v5:getText("ai_validationErrorUnloadingStationDoesNotExistAnymore")
    return false
  end
  if fillTypeIndex ~= nil then
    v4 = unloadingStation:getIsFillTypeAISupported(fillTypeIndex)
    if not v4 then
      v5 = v5:getText("ai_validationErrorFillTypeNotSupportedByUnloadingStation")
      return false
    end
    v4 = unloadingStation:getFreeCapacity(fillTypeIndex, farmId)
    if v4 <= 0 then
      v5 = v5:getText("ai_validationErrorUnloadingStationIsFull")
      return false
    end
  end
  return true, nil
end
