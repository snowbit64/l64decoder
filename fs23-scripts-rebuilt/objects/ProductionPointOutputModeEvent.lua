-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ProductionPointOutputModeEvent = {}
local ProductionPointOutputModeEvent_mt = Class(ProductionPointOutputModeEvent, Event)
InitStaticEventClass(ProductionPointOutputModeEvent, "ProductionPointOutputModeEvent", EventIds.EVENT_PRODUCTION_CHANGED_OUTPUT_MODE)
function ProductionPointOutputModeEvent.emptyNew()
  return Event.new(u0)
end
function ProductionPointOutputModeEvent.new(productionPoint, outputFillTypeId, outputMode)
  local v3 = ProductionPointOutputModeEvent.emptyNew()
  v3.productionPoint = productionPoint
  v3.outputFillTypeId = outputFillTypeId
  v3.outputMode = outputMode
  return v3
end
function ProductionPointOutputModeEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.productionPoint = v3
  v3 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  self.outputFillTypeId = v3
  v3 = streamReadUIntN(streamId, ProductionPoint.OUTPUT_MODE_NUM_BITS)
  self.outputMode = v3
  self:run(connection)
end
function ProductionPointOutputModeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.productionPoint)
  streamWriteUIntN(streamId, self.outputFillTypeId, FillTypeManager.SEND_NUM_BITS)
  streamWriteUIntN(streamId, self.outputMode, ProductionPoint.OUTPUT_MODE_NUM_BITS)
end
function ProductionPointOutputModeEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection)
  end
  if self.productionPoint ~= nil then
    v2:setOutputDistributionMode(self.outputFillTypeId, self.outputMode, true)
  end
end
function ProductionPointOutputModeEvent.sendEvent(productionPoint, outputFillTypeId, outputMode, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L38
  end
  if g_server ~= nil then
    local v6 = ProductionPointOutputModeEvent.new(productionPoint, outputFillTypeId, outputMode)
    v4:broadcastEvent(...)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = ProductionPointOutputModeEvent.new(productionPoint, outputFillTypeId, outputMode)
  v4:sendEvent(...)
end
