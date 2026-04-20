-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PickupAction = {}
local PickupAction_mt = Class(PickupAction, CheckpointAction)
function PickupAction.new(v0, v1)
  local v2 = v2:new(v1, u0)
  v1.actionOnlyFulfillment = true
  v2.vehicleToPickup = nil
  return v2
end
function PickupAction:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  self.vehicleToPickup = nil
end
function PickupAction:loadFromXML(xmlFile, baseKey, components, i3dMappings)
  local v5 = xmlFile:getValue(baseKey .. "#vehicleDistance", 2)
  self.distanceThreshold = v5
  return true
end
function PickupAction:validate(params)
  local object = unpack(params)
  if object == nil then
    local v4 = calcDistanceFrom(self.checkpoint.triggerNode, self.vehicleToPickup.rootNode)
    if self.distanceThreshold < v4 and self.vehicleToPickup.getAttacherVehicle ~= nil then
      v4 = v4:getAttacherVehicle()
      if v4 ~= nil then
        self.fulfilled = true
      end
    end
  end
end
function PickupAction:checkpointTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if onEnter and self.vehicleToPickup == nil then
    local v7 = v7:getNodeObject(otherId)
    if v7 ~= nil then
      self.vehicleToPickup = v7
    end
  end
end
