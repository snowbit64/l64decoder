-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MowerToggleWindrowDropEvent = {}
local MowerToggleWindrowDropEvent_mt = Class(MowerToggleWindrowDropEvent, Event)
InitStaticEventClass(MowerToggleWindrowDropEvent, "MowerToggleWindrowDropEvent", EventIds.EVENT_MOWER_TOGGLE_WINDROW_DROP)
function MowerToggleWindrowDropEvent.emptyNew()
  return Event.new(u0)
end
function MowerToggleWindrowDropEvent.new(object, useMowerWindrowDropAreas)
  local v2 = MowerToggleWindrowDropEvent.emptyNew()
  v2.object = object
  v2.useMowerWindrowDropAreas = useMowerWindrowDropAreas
  return v2
end
function MowerToggleWindrowDropEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.useMowerWindrowDropAreas = v3
  self:run(connection)
end
function MowerToggleWindrowDropEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.useMowerWindrowDropAreas)
end
function MowerToggleWindrowDropEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setUseMowerWindrowDropAreas(self.useMowerWindrowDropAreas, true)
    end
  end
end
function MowerToggleWindrowDropEvent:sendEvent(v1, v2)
  if v1 ~= self.useMowerWindrowDropAreas then
    if v2 ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L43
    end
    if g_server ~= nil then
      local v5 = MowerToggleWindrowDropEvent.new(self, v1)
      v3:broadcastEvent(v5, nil, nil, self)
      return
    end
    local v3 = v3:getServerConnection()
    v5 = MowerToggleWindrowDropEvent.new(self, v1)
    v3:sendEvent(...)
  end
end
