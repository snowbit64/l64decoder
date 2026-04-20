-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PickupSetStateEvent = {}
local PickupSetStateEvent_mt = Class(PickupSetStateEvent, Event)
InitStaticEventClass(PickupSetStateEvent, "PickupSetStateEvent", EventIds.EVENT_SET_PICKUP_STATE)
function PickupSetStateEvent.emptyNew()
  return Event.new(u0)
end
function PickupSetStateEvent.new(object, isPickupLowered)
  local v2 = PickupSetStateEvent.emptyNew()
  v2.object = object
  v2.isPickupLowered = isPickupLowered
  return v2
end
function PickupSetStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.isPickupLowered = v3
  self:run(connection)
end
function PickupSetStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.isPickupLowered)
end
function PickupSetStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setPickupState(self.isPickupLowered, true)
    end
  end
end
function PickupSetStateEvent:sendEvent(v1, v2)
  if v1 ~= self.spec_pickup.isLowered then
    if v2 ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L45
    end
    if g_server ~= nil then
      local v5 = PickupSetStateEvent.new(self, v1)
      v3:broadcastEvent(v5, nil, nil, self)
      return
    end
    local v3 = v3:getServerConnection()
    v5 = PickupSetStateEvent.new(self, v1)
    v3:sendEvent(...)
  end
end
