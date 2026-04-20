-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDriveStrategyConveyor = {}
local AIDriveStrategyConveyor_mt = Class(AIDriveStrategyConveyor, AIDriveStrategy)
function AIDriveStrategyConveyor.new(customMt)
  if customMt == nil then
  end
  return AIDriveStrategy.new(customMt)
end
function AIDriveStrategyConveyor:setAIVehicle(vehicle)
  local v3 = v3:superClass()
  v3.setAIVehicle(self, vehicle)
  local v2, v3, v4 = localToLocal(self.vehicle.wheels[self.vehicle.aiConveyorBelt.backWheelIndex].repr, self.vehicle.components[1].node, 0, 0, 0)
  local v5, v6, v7 = localToWorld(self.vehicle.components[1].node, 0, v3, v4)
  local v8, v9, v10 = getWorldTranslation(self.vehicle.wheels[self.vehicle.aiConveyorBelt.centerWheelIndex].repr)
  local v11 = MathUtil.vector3Length(v5 - v8, v6 - v9, v7 - v10)
  local v14 = math.rad(self.vehicle.aiConveyorBelt.currentAngle / 2)
  local v13 = math.sin(...)
  local v15 = math.pow(v11, 2)
  local v16 = math.pow(v11 * v13, 2)
  v13 = math.sqrt(v15 - v16)
  v16 = math.rad(self.vehicle.aiConveyorBelt.currentAngle)
  self.distanceToMove = v16 * v11 / 2
  self.currentTarget = 1
  self.worldTarget = {}
  v16 = localToWorld(self.vehicle.wheels[self.vehicle.aiConveyorBelt.centerWheelIndex].repr, v11 * v13, 0, -v13)
  self.worldTarget[1] = {}
  v16 = localToWorld(self.vehicle.wheels[self.vehicle.aiConveyorBelt.centerWheelIndex].repr, -(v11 * v13), 0, -v13)
  self.worldTarget[2] = {}
  self.lastPos = {v5, v6, v7}
  self.distanceMoved = 0
  self.fistTimeChange = true
end
function AIDriveStrategyConveyor.update(v0, v1)
end
function AIDriveStrategyConveyor:getDriveData(dt, vX, vY, vZ)
  local v5, v6, v7 = localToLocal(self.vehicle.wheels[self.vehicle.aiConveyorBelt.backWheelIndex].repr, self.vehicle.components[1].node, 0, 0, 0)
  local v8, v9, v10 = localToWorld(self.vehicle.components[1].node, 0, v6, v7)
  local v11 = MathUtil.vector2Length(v8 - self.lastPos[1], v10 - self.lastPos[3])
  self.distanceMoved = self.distanceMoved + v11
  self.lastPos = {v8, v9, v10}
  if self.distanceToMove <= self.distanceMoved then
    if self.fistTimeChange then
      self.distanceToMove = self.distanceToMove * 2
      self.fistTimeChange = false
    end
    self.distanceMoved = 0
    if self.currentTarget == 1 then
      self.currentTarget = 2
    else
      self.currentTarget = 1
    end
  end
  local v14 = math.sin(self.distanceMoved / self.distanceToMove * 3.14)
  local v13 = MathUtil.clamp(v14, 0.1, 0.5)
  if self.currentTarget == 2 then
  end
  return self.worldTarget[self.currentTarget][1], self.worldTarget[self.currentTarget][3], v13, self.vehicle.aiConveyorBelt.speed * v12, 100
end
