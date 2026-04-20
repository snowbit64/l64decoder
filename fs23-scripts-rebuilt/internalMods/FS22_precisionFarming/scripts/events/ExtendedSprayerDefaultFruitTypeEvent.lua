-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedSprayerDefaultFruitTypeEvent = {}
local ExtendedSprayerDefaultFruitTypeEvent_mt = Class(ExtendedSprayerDefaultFruitTypeEvent, Event)
InitEventClass(ExtendedSprayerDefaultFruitTypeEvent, "ExtendedSprayerDefaultFruitTypeEvent")
function ExtendedSprayerDefaultFruitTypeEvent.emptyNew(v0)
  return Event.new(u0)
end
function ExtendedSprayerDefaultFruitTypeEvent.new(object, fruitRequirementIndex)
  local v2 = v2:emptyNew()
  v2.object = object
  v2.fruitRequirementIndex = fruitRequirementIndex
  return v2
end
function ExtendedSprayerDefaultFruitTypeEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUIntN(streamId, FruitTypeManager.SEND_NUM_BITS)
  self.fruitRequirementIndex = v3
  self:run(connection)
end
function ExtendedSprayerDefaultFruitTypeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self.fruitRequirementIndex, FruitTypeManager.SEND_NUM_BITS)
end
function ExtendedSprayerDefaultFruitTypeEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setSprayAmountDefaultFruitRequirementIndex(self.fruitRequirementIndex, true)
    end
  end
end
function ExtendedSprayerDefaultFruitTypeEvent.sendEvent(object, fruitRequirementIndex, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = ExtendedSprayerDefaultFruitTypeEvent.new(object, fruitRequirementIndex)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = ExtendedSprayerDefaultFruitTypeEvent.new(object, fruitRequirementIndex)
  v3:sendEvent(...)
end
