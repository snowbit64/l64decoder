-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SlotSystemUpdateEvent = {}
local SlotSystemUpdateEvent_mt = Class(SlotSystemUpdateEvent, Event)
InitStaticEventClass(SlotSystemUpdateEvent, "SlotSystemUpdateEvent", EventIds.EVENT_SLOT_SYSTEM_UPDATE)
function SlotSystemUpdateEvent.emptyNew()
  return Event.new(u0)
end
function SlotSystemUpdateEvent.new(slotLimit)
  local v1 = SlotSystemUpdateEvent.emptyNew()
  v1.slotLimit = slotLimit
  if g_server == nil then
  end
  assert(true, "Server->client event")
  return v1
end
function SlotSystemUpdateEvent:readStream(streamId, connection)
  local v3 = streamReadUInt16(streamId)
  if v3 == 0 then
  end
  self.slotLimit = v3
  self:run(connection)
end
function SlotSystemUpdateEvent:writeStream(streamId, connection)
  if self.slotLimit == math.huge then
  end
  streamWriteUInt16(streamId, v3)
end
function SlotSystemUpdateEvent:run(connection)
  v2:setSlotLimit(self.slotLimit)
end
