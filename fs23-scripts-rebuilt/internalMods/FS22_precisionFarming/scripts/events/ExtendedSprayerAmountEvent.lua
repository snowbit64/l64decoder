-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedSprayerAmountEvent = {}
local ExtendedSprayerAmountEvent_mt = Class(ExtendedSprayerAmountEvent, Event)
InitEventClass(ExtendedSprayerAmountEvent, "ExtendedSprayerAmountEvent")
function ExtendedSprayerAmountEvent.emptyNew(v0)
  return Event.new(u0)
end
function ExtendedSprayerAmountEvent.new(object, automaticMode, manualValue)
  local v3 = v3:emptyNew()
  v3.object = object
  v3.automaticMode = automaticMode
  v3.manualValue = manualValue
  return v3
end
function ExtendedSprayerAmountEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.automaticMode = v3
  if not self.automaticMode then
    v3 = streamReadUIntN(streamId, 5)
    self.manualValue = v3
  end
  self:run(connection)
end
function ExtendedSprayerAmountEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  local v3 = streamWriteBool(streamId, self.automaticMode)
  if not v3 then
    streamWriteUIntN(streamId, self.manualValue, 5)
  end
end
function ExtendedSprayerAmountEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setSprayAmountAutoMode(self.automaticMode, true)
      if not self.automaticMode then
        v2:setSprayAmountManualValue(self.manualValue, true)
      end
    end
  end
end
function ExtendedSprayerAmountEvent.sendEvent(object, automaticMode, manualValue, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L41
  end
  if g_server ~= nil then
    local v6 = ExtendedSprayerAmountEvent.new(object, automaticMode, manualValue)
    v4:broadcastEvent(v6, nil, nil, object)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = ExtendedSprayerAmountEvent.new(object, automaticMode, manualValue)
  v4:sendEvent(...)
end
