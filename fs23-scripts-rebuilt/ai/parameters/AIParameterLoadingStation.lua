-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIParameterLoadingStation = {}
local AIParameterLoadingStation_mt = Class(AIParameterLoadingStation, AIParameter)
function AIParameterLoadingStation.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1["type"] = AIParameterType.LOADING_STATION
  v1.loadingStationId = nil
  v1.loadingStationIds = {}
  return v1
end
function AIParameterLoadingStation:saveToXMLFile(xmlFile, key, usedModNames)
  local loadingStation = self:getLoadingStation()
  if loadingStation ~= nil and loadingStation.owningPlaceable ~= nil and loadingStation.owningPlaceable.currentSavegameId ~= nil then
    local v6 = v6:getPlaceableLoadingStationIndex(loadingStation.owningPlaceable, loadingStation)
    if v6 ~= nil then
      xmlFile:setInt(key .. "#stationId", loadingStation.owningPlaceable.currentSavegameId)
      xmlFile:setInt(key .. "#stationIndex", v6)
    end
  end
end
function AIParameterLoadingStation:loadFromXMLFile(xmlFile, key)
  local loadingStationSavegameId = xmlFile:getInt(key .. "#stationId")
  local v4 = xmlFile:getInt(key .. "#stationIndex")
  if loadingStationSavegameId ~= nil and v4 ~= nil then
    local v5 = self:setLoadingStationFromSavegameId(loadingStationSavegameId, v4)
    if not v5 then
      v5:subscribeOneshot(MessageType.LOADED_ALL_SAVEGAME_PLACEABLES, self.onPlaceableLoaded, self, {loadingStationSavegameId, v4})
    end
  end
end
function AIParameterLoadingStation:onPlaceableLoaded(args)
  self:setLoadingStationFromSavegameId(args[1], args[2])
end
function AIParameterLoadingStation:setLoadingStationFromSavegameId(savegameId, index)
  local v3 = v3:getPlaceableBySavegameId(savegameId)
  if v3 ~= nil then
    local v4 = v4:getPlaceableLoadingStation(v3, index)
    self:setLoadingStation(v4)
    return true
  end
  return false
end
function AIParameterLoadingStation:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    v3 = NetworkUtil.readNodeObjectId(streamId)
    self.loadingStationId = v3
  end
end
function AIParameterLoadingStation:writeStream(streamId, connection)
  if self.loadingStationId == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    NetworkUtil.writeNodeObjectId(streamId, self.loadingStationId)
  end
end
function AIParameterLoadingStation:setLoadingStation(loadingStation)
  local v2 = NetworkUtil.getObjectId(loadingStation)
  self.loadingStationId = v2
end
function AIParameterLoadingStation:getLoadingStation()
  local loadingStation = NetworkUtil.getObject(self.loadingStationId)
  if loadingStation ~= nil and loadingStation.owningPlaceable ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      return loadingStation
    end
  end
  return nil
end
function AIParameterLoadingStation:getString()
  local loadingStation = NetworkUtil.getObject(self.loadingStationId)
  if loadingStation ~= nil then
    return loadingStation:getName()
  end
  return ""
end
function AIParameterLoadingStation:setValidLoadingStations(loadingStationIds)
  self.loadingStationIds = {}
  for v6, v7 in ipairs(loadingStationIds) do
    local v8 = NetworkUtil.getObjectId(v7)
    if not (v8 ~= nil) then
      continue
    end
    if v8 == self.loadingStationId then
    end
    table.insert(self.loadingStationIds, v8)
  end
  if not v2 then
  end
  self.loadingStationId = v3
end
function AIParameterLoadingStation:setNextItem()
  for v5, v6 in ipairs(self.loadingStationIds) do
    if not (v6 == self.loadingStationId) then
      continue
    end
  end
  if #self.loadingStationIds < v1 then
  end
  self.loadingStationId = self.loadingStationIds[v1]
end
function AIParameterLoadingStation:setPreviousItem()
  for v5, v6 in ipairs(self.loadingStationIds) do
    if not (v6 == self.loadingStationId) then
      continue
    end
  end
  if v1 < 1 then
  end
  self.loadingStationId = self.loadingStationIds[v1]
end
function AIParameterLoadingStation:validate(fillTypeIndex, farmId)
  if self.loadingStationId == nil then
    local v4 = v4:getText("ai_validationErrorNoLoadingStation")
    return false
  end
  local loadingStation = self:getLoadingStation()
  if loadingStation == nil then
    local v5 = v5:getText("ai_validationErrorLoadingStationDoesNotExistAnymore")
    return false
  end
  if fillTypeIndex ~= nil then
    v4 = loadingStation:getIsFillTypeAISupported(fillTypeIndex)
    if not v4 then
      v5 = v5:getText("ai_validationErrorFillTypeNotSupportedByLoadingStation")
      return false
    end
    v4 = loadingStation:getFillLevel(fillTypeIndex, farmId)
    if v4 <= 0 then
      v5 = v5:getText("ai_validationErrorLoadingStationIsEmpty")
      return false
    end
  end
  return true, nil
end
