-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCupSeeSawEvent = {}
local SuperCupSeeSawEvent_mt = Class(SuperCupSeeSawEvent, Event)
InitEventClass(SuperCupSeeSawEvent, "SuperCupSeeSawEvent")
function SuperCupSeeSawEvent.emptyNew()
  return Event.new(u0)
end
function SuperCupSeeSawEvent.new(object, isActive, isForced)
  local v3 = SuperCupSeeSawEvent.emptyNew()
  v3.object = object
  v3.isActive = isActive
  v3.isForced = isForced or false
  return v3
end
function SuperCupSeeSawEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.isActive = v3
  v3 = streamReadBool(streamId)
  self.isForced = v3
  self:run(connection)
end
function SuperCupSeeSawEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.isActive)
  streamWriteBool(streamId, self.isForced)
end
function SuperCupSeeSawEvent:run(connection)
  v2:setBeaconLightVisibility(self.isActive, self.isForced, true)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
end
