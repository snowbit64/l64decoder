-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCupCheckPointEvent = {}
local SuperCupCheckPointEvent_mt = Class(SuperCupCheckPointEvent, Event)
InitEventClass(SuperCupCheckPointEvent, "SuperCupCheckPointEvent")
function SuperCupCheckPointEvent.emptyNew()
  return Event.new(u0)
end
function SuperCupCheckPointEvent.new(object, isActive)
  local v2 = SuperCupCheckPointEvent.emptyNew()
  v2.object = object
  v2.isActive = isActive
  return v2
end
function SuperCupCheckPointEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.isActive = v3
  self:run(connection)
end
function SuperCupCheckPointEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.isActive)
end
function SuperCupCheckPointEvent:run(connection)
  v2:setIsActive(self.isActive, true)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
end
