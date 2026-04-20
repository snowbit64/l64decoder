-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FillUnitUnloadEvent = {}
local FillUnitUnloadEvent_mt = Class(FillUnitUnloadEvent, Event)
InitStaticEventClass(FillUnitUnloadEvent, "FillUnitUnloadEvent", EventIds.EVENT_FILLUNIT_UNLOAD)
function FillUnitUnloadEvent.emptyNew()
  return Event.new(u0)
end
function FillUnitUnloadEvent.new(object)
  local v1 = FillUnitUnloadEvent.emptyNew()
  v1.object = object
  return v1
end
function FillUnitUnloadEvent.newServerToClient()
  return FillUnitUnloadEvent.emptyNew()
end
function FillUnitUnloadEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.object = v3
  end
  self:run(connection)
end
function FillUnitUnloadEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.object)
  end
end
function FillUnitUnloadEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L43
    v2 = v2:getIsSynchronized()
    -- if not v2 then goto L43 end
    v2 = v2:unloadFillUnits(true)
    -- if v2 then goto L43 end
    local v5 = FillUnitUnloadEvent.newServerToClient()
    connection:sendEvent(...)
    return
  end
  v5 = v5:getText("fillUnit_unload_nospace")
  v2:addIngameNotification(...)
end
