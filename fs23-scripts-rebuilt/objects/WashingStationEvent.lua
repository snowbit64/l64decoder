-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WashingStationEvent = {}
local v0 = Class(WashingStationEvent, Event)
InitStaticEventClass(WashingStationEvent, "WashingStationEvent", EventIds.EVENT_WASHING_STATION)
function WashingStationEvent.emptyNew()
  return Event.new(u0)
end
function WashingStationEvent.new(v0)
  local v1 = WashingStationEvent.emptyNew()
  v1.washingStation = v0
  return v1
end
function WashingStationEvent:readStream(v1, v2)
  local v3 = v2:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(v1)
    self.washingStation = v3
  end
  self:run(v2)
end
function WashingStationEvent:writeStream(v1, v2)
  local v3 = v2:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(v1, self.washingStation)
  end
end
function WashingStationEvent:run(v1)
  local v2 = v1:getIsServer()
  if not v2 then
    v2 = v2:getUserIdByConnection(v1)
    if v2 ~= nil then
      local v3 = v3:getFarmByUserId(v2)
      if v3 ~= nil then
        v4:startWashing(v3.farmId)
      end
    end
  end
end
