-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PalletUnloadTriggerEvent = {}
local v0 = Class(PalletUnloadTriggerEvent, Event)
InitStaticEventClass(PalletUnloadTriggerEvent, "PalletUnloadTriggerEvent", EventIds.EVENT_PALLET_UNLOAD_TRIGGER)
function PalletUnloadTriggerEvent.emptyNew()
  return Event.new(u0)
end
function PalletUnloadTriggerEvent.new(v0)
  local v1 = PalletUnloadTriggerEvent.emptyNew()
  v1.object = v0
  return v1
end
function PalletUnloadTriggerEvent:readStream(v1, v2)
  local v3 = NetworkUtil.readNodeObject(v1)
  self.object = v3
  self:run(v2)
end
function PalletUnloadTriggerEvent:writeStream(v1, v2)
  NetworkUtil.writeNodeObject(v1, self.object)
end
function PalletUnloadTriggerEvent:run(v1)
  if self.object ~= nil then
    local v2 = v2:getUserIdByConnection(v1)
    if v2 ~= nil then
      local v3 = v3:getFarmByUserId(v2)
      if v3 ~= nil then
        v4:unloadPallets(v3.farmId)
      end
    end
  end
end
