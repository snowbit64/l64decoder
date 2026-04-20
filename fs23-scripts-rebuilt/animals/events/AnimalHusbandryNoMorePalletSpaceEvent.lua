-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalHusbandryNoMorePalletSpaceEvent = {}
local AnimalHusbandryNoMorePalletSpaceEvent_mt = Class(AnimalHusbandryNoMorePalletSpaceEvent, Event)
InitStaticEventClass(AnimalHusbandryNoMorePalletSpaceEvent, "AnimalHusbandryNoMorePalletSpaceEvent", EventIds.EVENT_ANIMAL_HUSBANDRY_NO_MORE_PALLET_SPACE)
function AnimalHusbandryNoMorePalletSpaceEvent.emptyNew()
  return Event.new(u0)
end
function AnimalHusbandryNoMorePalletSpaceEvent.new(animalHusbandry)
  local v1 = AnimalHusbandryNoMorePalletSpaceEvent.emptyNew()
  v1.animalHusbandry = animalHusbandry
  return v1
end
function AnimalHusbandryNoMorePalletSpaceEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.animalHusbandry = v3
  self:run(connection)
end
function AnimalHusbandryNoMorePalletSpaceEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.animalHusbandry)
end
function AnimalHusbandryNoMorePalletSpaceEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 and self.animalHusbandry ~= nil then
    v2:showPalletBlockedWarning()
  end
end
