-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TreePlanterLoadPalletEvent = {}
local TreePlanterLoadPalletEvent_mt = Class(TreePlanterLoadPalletEvent, Event)
InitStaticEventClass(TreePlanterLoadPalletEvent, "TreePlanterLoadPalletEvent", EventIds.EVENT_TREE_PLANTER_LOAD_PALLET)
function TreePlanterLoadPalletEvent.emptyNew()
  return Event.new(u0)
end
function TreePlanterLoadPalletEvent.new(object, palletObjectId)
  local v2 = TreePlanterLoadPalletEvent.emptyNew()
  v2.object = object
  v2.palletObjectId = palletObjectId
  return v2
end
function TreePlanterLoadPalletEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = NetworkUtil.readNodeObjectId(streamId)
  self.palletObjectId = v3
  self:run(connection)
end
function TreePlanterLoadPalletEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  NetworkUtil.writeNodeObjectId(streamId, self.palletObjectId)
end
function TreePlanterLoadPalletEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:loadPallet(self.palletObjectId, true)
    end
  end
end
function TreePlanterLoadPalletEvent.sendEvent(object, palletObjectId, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = TreePlanterLoadPalletEvent.new(object, palletObjectId)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = TreePlanterLoadPalletEvent.new(object, palletObjectId)
  v3:sendEvent(...)
end
