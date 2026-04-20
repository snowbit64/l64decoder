-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WoodHarvesterHeaderTiltEvent = {}
local WoodHarvesterHeaderTiltEvent_mt = Class(WoodHarvesterHeaderTiltEvent, Event)
InitStaticEventClass(WoodHarvesterHeaderTiltEvent, "WoodHarvesterHeaderTiltEvent", EventIds.EVENT_WOODHARVESTER_HEADER_TILT)
function WoodHarvesterHeaderTiltEvent.emptyNew()
  return Event.new(u0)
end
function WoodHarvesterHeaderTiltEvent.new(object, state)
  local v2 = WoodHarvesterHeaderTiltEvent.emptyNew()
  v2.object = object
  v2.state = state
  return v2
end
function WoodHarvesterHeaderTiltEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.state = v3
  self:run(connection)
end
function WoodHarvesterHeaderTiltEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.state)
end
function WoodHarvesterHeaderTiltEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setWoodHarvesterTiltState(self.state, true)
    end
  end
end
function WoodHarvesterHeaderTiltEvent.sendEvent(object, state, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = WoodHarvesterHeaderTiltEvent.new(object, state)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = WoodHarvesterHeaderTiltEvent.new(object, state)
  v3:sendEvent(...)
end
