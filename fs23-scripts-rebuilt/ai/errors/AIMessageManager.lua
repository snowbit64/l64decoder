-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIMessageManager = {}
AIMessageType = {OK = 1, INFO = 2, ERROR = 3}
local AIMessageManager_mt = Class(AIMessageManager)
function AIMessageManager.new(customMt)
  if not customMt then
  end
  return v1(v2, v3)
end
function AIMessageManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  self.messages = {}
  self.nameToIndex = {}
  self.classObjectToIndex = {}
  self:registerMessage("ERROR_BLOCKED_BY_OBJECT", AIMessageErrorBlockedByObject)
  self:registerMessage("ERROR_COULD_NOT_PREPARE", AIMessageErrorCouldNotPrepare)
  self:registerMessage("ERROR_FIELD_NOT_OWNED", AIMessageErrorFieldNotOwned)
  self:registerMessage("ERROR_GRAINTANK_IS_FULL", AIMessageErrorGraintankIsFull)
  self:registerMessage("ERROR_IMPLEMENT_WRONG_WAY", AIMessageErrorImplementWrongWay)
  self:registerMessage("ERROR_LOADING_STATION_DELETED", AIMessageErrorLoadingStationDeleted)
  self:registerMessage("ERROR_UNLOADING_STATION_DELETED", AIMessageErrorUnloadingStationDeleted)
  self:registerMessage("ERROR_NO_FIELD_FOUND", AIMessageErrorNoFieldFound)
  self:registerMessage("ERROR_NO_VALID_FILLTYPE_LOADED", AIMessageErrorNoValidFillTypeLoaded)
  self:registerMessage("ERROR_NOT_REACHABLE", AIMessageErrorNotReachable)
  self:registerMessage("ERROR_OUT_OF_FILL", AIMessageErrorOutOfFill)
  self:registerMessage("ERROR_OUT_OF_FUEL", AIMessageErrorOutOfFuel)
  self:registerMessage("ERROR_OUT_OF_MONEY", AIMessageErrorOutOfMoney)
  self:registerMessage("ERROR_THRESHING_NOT_ALLOWED", AIMessageErrorThreshingNotAllowed)
  self:registerMessage("ERROR_UNKNOWN", AIMessageErrorUnknown)
  self:registerMessage("ERROR_UNLOADINGSTATION_FULL", AIMessageErrorUnloadingStationFull)
  self:registerMessage("ERROR_VEHICLE_BROKEN", AIMessageErrorVehicleBroken)
  self:registerMessage("ERROR_VEHICLE_DELETED", AIMessageErrorVehicleDeleted)
  self:registerMessage("ERROR_WRONG_SEASON", AIMessageErrorWrongSeason)
  self:registerMessage("SUCCESS_FINISHED_JOB", AIMessageSuccessFinishedJob)
  self:registerMessage("SUCCESS_SILO_EMPTY", AIMessageSuccessSiloEmpty)
  self:registerMessage("SUCCESS_STOPPED_BY_USER", AIMessageSuccessStoppedByUser)
end
function AIMessageManager:delete()
  self.messages = {}
  self.nameToIndex = {}
  self.classObjectToIndex = {}
end
function AIMessageManager:registerMessage(name, classObject)
  local v3 = ClassUtil.getIsValidIndexName(name)
  if not v3 then
    local v5 = tostring(name)
    Logging.warning(...)
    return nil
  end
  v3 = name:upper()
  if self.nameToIndex[v3] ~= nil then
    v5 = tostring(v3)
    Logging.warning(...)
    return nil
  end
  if classObject == nil then
    v5 = tostring(name)
    Logging.warning(...)
    return nil
  end
  table.insert(self.messages, {name = name, classObject = classObject})
  self.nameToIndex[name] = #self.messages
  self.classObjectToIndex[classObject] = #self.messages
  return {name = name, classObject = classObject}
end
function AIMessageManager:getMessageIndex(messageObject)
  local classObject = ClassUtil.getClassObjectByObject(messageObject)
  if classObject == nil then
    return nil
  end
  return self.classObjectToIndex[classObject]
end
function AIMessageManager:createMessage(messageIndex)
  if messageIndex == nil then
    return nil
  end
  if self.messages[messageIndex] == nil then
    return nil
  end
  return v2.classObject.new()
end
