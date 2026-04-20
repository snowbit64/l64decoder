-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CropSensorStateEvent = {}
local CropSensorStateEvent_mt = Class(CropSensorStateEvent, Event)
InitEventClass(CropSensorStateEvent, "CropSensorStateEvent")
function CropSensorStateEvent.emptyNew(v0)
  return Event.new(u0)
end
function CropSensorStateEvent.new(object, state)
  local v2 = v2:emptyNew()
  v2.object = object
  v2.state = state
  return v2
end
function CropSensorStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.state = v3
  self:run(connection)
end
function CropSensorStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.state)
end
function CropSensorStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setCropSensorActive(self.state, true)
    end
  end
end
function CropSensorStateEvent.sendEvent(object, state, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = CropSensorStateEvent.new(object, state)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = CropSensorStateEvent.new(object, state)
  v3:sendEvent(...)
end
