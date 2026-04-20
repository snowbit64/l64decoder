-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCupDriverEvent = {}
local SuperCupDriverEvent_mt = Class(SuperCupDriverEvent, Event)
InitEventClass(SuperCupDriverEvent, "SuperCupDriverEvent")
function SuperCupDriverEvent.emptyNew()
  return Event.new(u0)
end
function SuperCupDriverEvent.new(object, allowDriving, networkObject)
  local v3 = SuperCupDriverEvent.emptyNew()
  v3.object = object
  v3.allowDriving = allowDriving
  v3.networkObject = networkObject
  return v3
end
function SuperCupDriverEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = NetworkUtil.readNodeObject(streamId)
  self.networkObject = v3
  v3 = streamReadBool(streamId)
  self.allowDriving = v3
  self:run(connection)
end
function SuperCupDriverEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  NetworkUtil.writeNodeObject(streamId, self.networkObject)
  streamWriteBool(streamId, self.allowDriving)
end
function SuperCupDriverEvent:run(connection)
  v2:setAllowDriveSuperCup(self.allowDriving, self.networkObject, true)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
end
function SuperCupDriverEvent.sendEvent(vehicle, allowDriving, networkObject, noEventSend)
  if not noEventSend then
    if g_server ~= nil then
      local v6 = SuperCupDriverEvent.new(vehicle, allowDriving, networkObject)
      v4:broadcastEvent(v6, nil, nil, vehicle)
      return
    end
    local v4 = v4:getServerConnection()
    v6 = SuperCupDriverEvent.new(vehicle, allowDriving, networkObject)
    v4:sendEvent(...)
  end
end
