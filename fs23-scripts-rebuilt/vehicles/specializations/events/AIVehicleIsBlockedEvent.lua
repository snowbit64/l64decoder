-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIVehicleIsBlockedEvent = {}
local AIVehicleIsBlockedEvent_mt = Class(AIVehicleIsBlockedEvent, Event)
InitStaticEventClass(AIVehicleIsBlockedEvent, "AIVehicleIsBlockedEvent", EventIds.EVENT_AIVEHICLE_IS_BLOCKED)
function AIVehicleIsBlockedEvent.emptyNew()
  return Event.new(u0)
end
function AIVehicleIsBlockedEvent.new(object, isBlocked)
  local v2 = AIVehicleIsBlockedEvent.emptyNew()
  v2.object = object
  v2.isBlocked = isBlocked
  return v2
end
function AIVehicleIsBlockedEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.isBlocked = v3
  self:run(connection)
end
function AIVehicleIsBlockedEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.isBlocked)
end
function AIVehicleIsBlockedEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      if self.isBlocked then
        v2:aiBlock()
        return
      end
      v2:aiContinue()
    end
  end
end
