-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmCreateUpdateEvent = {}
local FarmCreateUpdateEvent_mt = Class(FarmCreateUpdateEvent, Event)
InitStaticEventClass(FarmCreateUpdateEvent, "FarmCreateUpdateEvent", EventIds.EVENT_FARM_CREATE_UPDATE)
function FarmCreateUpdateEvent.emptyNew()
  return Event.new(u0)
end
function FarmCreateUpdateEvent.new(name, color, password, isUpdate, farmId)
  local v5 = FarmCreateUpdateEvent.emptyNew()
  v5.name = name
  v5.color = color
  v5.password = password
  v5.isUpdate = isUpdate
  v5.farmId = farmId
  return v5
end
function FarmCreateUpdateEvent:writeStream(streamId, connection)
  local filteredName = filterText(self.name, false, false)
  streamWriteString(streamId, filteredName)
  streamWriteUIntN(streamId, self.color, Farm.COLOR_SEND_NUM_BITS)
  streamWriteBool(streamId, self.isUpdate)
  if self.password == nil then
  end
  local v4 = v4(v5, true)
  if v4 then
    streamWriteString(streamId, self.password)
  end
  if not self.isUpdate and self.farmId == nil then
  end
  v4 = v4(v5, v6)
  if v4 then
    streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  end
end
function FarmCreateUpdateEvent:readStream(streamId, connection)
  local v3 = streamReadString(streamId)
  self.name = v3
  v3 = streamReadUIntN(streamId, Farm.COLOR_SEND_NUM_BITS)
  self.color = v3
  v3 = streamReadBool(streamId)
  self.isUpdate = v3
  v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadString(streamId)
    self.password = v3
  else
    self.password = nil
  end
  v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.farmId = v3
  end
  self:run(connection)
end
function FarmCreateUpdateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    if self.isUpdate then
      v2 = v2:getHasPlayerPermission("updateFarm", connection, self.farmId)
      -- if not v2 then goto L114 end
      v2 = v2:getFarmById(self.farmId)
      v2.name = self.name
      v2.color = self.color
      v2.password = self.password
      local v5 = FarmCreateUpdateEvent.new(self.name, self.color, nil, true, self.farmId)
      v3:broadcastEvent(...)
      v3:publish(MessageType.FARM_PROPERTY_CHANGED, self.farmId)
      return
    end
    v2 = connection:getIsLocal()
    if not v2 then
      v2 = v2:getIsConnectionMasterUser(connection)
      -- if not v2 then goto L114 end
    end
    v2:createFarm(self.name, self.color, self.password)
    return
  end
  if self.isUpdate then
    v2 = v2:getFarmById(self.farmId)
    v2.name = self.name
    v2.color = self.color
    v3:publish(MessageType.FARM_PROPERTY_CHANGED, v2.farmId)
  end
end
