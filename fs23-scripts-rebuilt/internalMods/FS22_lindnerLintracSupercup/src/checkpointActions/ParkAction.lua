-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ParkAction = {}
local ParkAction_mt = Class(ParkAction, CheckpointAction)
function ParkAction.new(v0, v1)
  local v2 = v2:new(v1, u0)
  v1.actionOnlyFulfillment = true
  v2.vehicleToPark = nil
  return v2
end
function ParkAction:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  self.vehicleToPark = nil
end
function ParkAction:validate(params)
  local object = unpack(params)
  if object ~= nil and object == self.vehicleToPark and object.getAttacherVehicle ~= nil then
    local v3 = object:getAttacherVehicle()
    if v3 == nil then
      self.fulfilled = true
    end
  end
end
function ParkAction:checkpointTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if onEnter and self.vehicleToPark == nil then
    local v7 = v7:getNodeObject(otherId)
    if v7 ~= nil then
      self.vehicleToPark = v7
    end
  end
end
