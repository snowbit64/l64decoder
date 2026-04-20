-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlantLimitToFieldEvent = {}
local PlantLimitToFieldEvent_mt = Class(PlantLimitToFieldEvent, Event)
InitStaticEventClass(PlantLimitToFieldEvent, "PlantLimitToFieldEvent", EventIds.EVENT_PLANT_LIMIT_TO_FIELD)
function PlantLimitToFieldEvent.emptyNew()
  return Event.new(u0)
end
function PlantLimitToFieldEvent.new(object, plantLimitToField)
  local v2 = PlantLimitToFieldEvent.emptyNew()
  v2.object = object
  v2.plantLimitToField = plantLimitToField
  return v2
end
function PlantLimitToFieldEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.plantLimitToField = v3
  self:run(connection)
end
function PlantLimitToFieldEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.plantLimitToField)
end
function PlantLimitToFieldEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setPlantLimitToField(self.plantLimitToField, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = PlantLimitToFieldEvent.new(self.object, self.plantLimitToField)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
function PlantLimitToFieldEvent.sendEvent(vehicle, plantLimitToField, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = PlantLimitToFieldEvent.new(vehicle, plantLimitToField)
    v3:broadcastEvent(v5, nil, nil, vehicle)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = PlantLimitToFieldEvent.new(vehicle, plantLimitToField)
  v3:sendEvent(...)
end
