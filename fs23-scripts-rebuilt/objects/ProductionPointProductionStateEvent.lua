-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ProductionPointProductionStateEvent = {}
local ProductionPointProductionStateEvent_mt = Class(ProductionPointProductionStateEvent, Event)
InitStaticEventClass(ProductionPointProductionStateEvent, "ProductionPointProductionStateEvent", EventIds.EVENT_PRODUCTION_CHANGED_STATE)
function ProductionPointProductionStateEvent.emptyNew()
  return Event.new(u0)
end
function ProductionPointProductionStateEvent.new(productionPoint, productionId, isEnabled)
  local v3 = ProductionPointProductionStateEvent.emptyNew()
  v3.productionPoint = productionPoint
  v3.productionId = productionId
  v3.isEnabled = isEnabled
  return v3
end
function ProductionPointProductionStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.productionPoint = v3
  v3 = streamReadString(streamId)
  self.productionId = v3
  v3 = streamReadBool(streamId)
  self.isEnabled = v3
  self:run(connection)
end
function ProductionPointProductionStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.productionPoint)
  streamWriteString(streamId, self.productionId)
  streamWriteBool(streamId, self.isEnabled)
end
function ProductionPointProductionStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection)
  end
  if self.productionPoint ~= nil then
    v2:setProductionState(self.productionId, self.isEnabled, true)
  end
end
function ProductionPointProductionStateEvent.sendEvent(productionPoint, productionId, isEnabled, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L38
  end
  if g_server ~= nil then
    local v6 = ProductionPointProductionStateEvent.new(productionPoint, productionId, isEnabled)
    v4:broadcastEvent(...)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = ProductionPointProductionStateEvent.new(productionPoint, productionId, isEnabled)
  v4:sendEvent(...)
end
