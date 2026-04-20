-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChargingPointOfInterest = {}
local v0 = Class(ChargingPointOfInterest, PointOfInterest)
function ChargingPointOfInterest.new(v0, v1, v2)
  if not v2 then
  end
  return v3(v4, v5, v6)
end
function ChargingPointOfInterest:finalize()
  local v2 = v2:superClass()
  v2.finalize(self)
  self.defaultInfoText = self.infoText
end
function ChargingPointOfInterest:draw()
  self.infoText = self.defaultInfoText
  if self.placeable ~= nil and self.placeable.getIsCharging ~= nil then
    local v1 = v1:getIsCharging()
    if v1 then
      self.infoText = self.placeable.spec_chargingStation.chargingInfoText
    end
  end
  local v2 = v2:superClass()
  v2.draw(self)
end
