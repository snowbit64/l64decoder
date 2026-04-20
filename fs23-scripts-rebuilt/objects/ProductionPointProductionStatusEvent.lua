-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ProductionPointProductionStatusEvent = {}
local ProductionPointProductionStatusEvent_mt = Class(ProductionPointProductionStatusEvent, Event)
InitStaticEventClass(ProductionPointProductionStatusEvent, "ProductionPointProductionStatusEvent", EventIds.EVENT_PRODUCTION_CHANGED_STATUS)
function ProductionPointProductionStatusEvent.emptyNew()
  return Event.new(u0)
end
function ProductionPointProductionStatusEvent.new(productionPoint, productionId, status)
  local v3 = ProductionPointProductionStatusEvent.emptyNew()
  v3.productionPoint = productionPoint
  v3.productionId = productionId
  v3.status = status
  return v3
end
function ProductionPointProductionStatusEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.productionPoint = v3
  v3 = streamReadString(streamId)
  self.productionId = v3
  v3 = streamReadUIntN(streamId, ProductionPoint.PROD_STATUS_NUM_BITS)
  self.status = v3
  self:run(connection)
end
function ProductionPointProductionStatusEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.productionPoint)
  streamWriteString(streamId, self.productionId)
  streamWriteUIntN(streamId, self.status, ProductionPoint.PROD_STATUS_NUM_BITS)
end
function ProductionPointProductionStatusEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection)
  end
  if self.productionPoint ~= nil then
    v2:setProductionStatus(self.productionId, self.status, true)
  end
end
function ProductionPointProductionStatusEvent.sendEvent(productionPoint, productionId, status, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L38
  end
  if g_server ~= nil then
    local v6 = ProductionPointProductionStatusEvent.new(productionPoint, productionId, status)
    v4:broadcastEvent(...)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = ProductionPointProductionStatusEvent.new(productionPoint, productionId, status)
  v4:sendEvent(...)
end
