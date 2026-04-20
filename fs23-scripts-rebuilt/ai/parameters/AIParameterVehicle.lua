-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIParameterVehicle = {}
local AIParameterVehicle_mt = Class(AIParameterVehicle, AIParameter)
function AIParameterVehicle.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1["type"] = AIParameterType.TEXT
  v1.vehicleId = nil
  return v1
end
function AIParameterVehicle:saveToXMLFile(xmlFile, key, usedModNames)
  local vehicle = self:getVehicle()
  if vehicle ~= nil and vehicle.currentSavegameId ~= nil then
    xmlFile:setInt(key .. "#vehicleId", vehicle.currentSavegameId)
  end
end
function AIParameterVehicle:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    v3 = NetworkUtil.readNodeObjectId(streamId)
    self.vehicleId = v3
  end
end
function AIParameterVehicle:writeStream(streamId, connection)
  if self.vehicleId == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    NetworkUtil.writeNodeObjectId(streamId, self.vehicleId)
  end
end
function AIParameterVehicle.getCanBeChanged(v0)
  return false
end
function AIParameterVehicle:getString()
  local vehicle = NetworkUtil.getObject(self.vehicleId)
  if vehicle ~= nil then
    return vehicle:getName()
  end
  return ""
end
function AIParameterVehicle:setVehicle(vehicle)
  local v2 = NetworkUtil.getObjectId(vehicle)
  self.vehicleId = v2
end
function AIParameterVehicle:getVehicle()
  local vehicle = NetworkUtil.getObject(self.vehicleId)
  if vehicle ~= nil then
    local v2 = vehicle:getIsSynchronized()
    if v2 then
      return vehicle
    end
  end
  return nil
end
function AIParameterVehicle:validate(needsAITarget)
  if self.vehicleId == nil then
    local v3 = v3:getText("ai_validationErrorNoVehicle")
    return false
  end
  local vehicle = self:getVehicle()
  if vehicle == nil then
    local v4 = v4:getText("ai_validationErrorVehicleDoesNotExistAnymore")
    return false
  end
  if vehicle.setAITarget == nil then
    if needsAITarget ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000001 -> L41
    end
    v4 = v4:getText("ai_validationErrorVehicleDoesNotSupportAI")
    return false
  end
  return true, nil
end
