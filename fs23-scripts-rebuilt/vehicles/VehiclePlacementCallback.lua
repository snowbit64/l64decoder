-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehiclePlacementCallback = {}
local VehiclePlacementCallback_mt = Class(VehiclePlacementCallback)
function VehiclePlacementCallback.new()
  setmetatable({}, u0)
  return {}
end
function VehiclePlacementCallback:callback(transformName, x, y, z, distance)
  self.raycastHitName = transformName
  self.x = x
  self.y = y
  self.z = z
  self.distance = distance
  return true
end
