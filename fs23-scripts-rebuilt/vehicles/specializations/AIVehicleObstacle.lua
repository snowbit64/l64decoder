-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIVehicleObstacle = {}
function AIVehicleObstacle.prerequisitesPresent(v0)
  return true
end
function AIVehicleObstacle.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "createAIVehicleObstacle", AIVehicleObstacle.createAIVehicleObstacle)
  SpecializationUtil.registerFunction(vehicleType, "removeAIVehicleObstacle", AIVehicleObstacle.removeAIVehicleObstacle)
  SpecializationUtil.registerFunction(vehicleType, "updateAIVehicleObstacleState", AIVehicleObstacle.updateAIVehicleObstacleState)
  SpecializationUtil.registerFunction(vehicleType, "getCanHaveAIVehicleObstacle", AIVehicleObstacle.getCanHaveAIVehicleObstacle)
  SpecializationUtil.registerFunction(vehicleType, "getNeedAIVehicleObstacle", AIVehicleObstacle.getNeedAIVehicleObstacle)
  SpecializationUtil.registerFunction(vehicleType, "getAIVehicleObstacleMaxBrakeAcceleration", AIVehicleObstacle.getAIVehicleObstacleMaxBrakeAcceleration)
  SpecializationUtil.registerFunction(vehicleType, "setAIVehicleObstacleStateDirty", AIVehicleObstacle.setAIVehicleObstacleStateDirty)
  SpecializationUtil.registerFunction(vehicleType, "getAIVehicleObstacleIsPassable", AIVehicleObstacle.getAIVehicleObstacleIsPassable)
end
function AIVehicleObstacle.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addToPhysics", AIVehicleObstacle.addToPhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeFromPhysics", AIVehicleObstacle.removeFromPhysics)
end
function AIVehicleObstacle.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AIVehicleObstacle)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", AIVehicleObstacle)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AIVehicleObstacle)
  SpecializationUtil.registerEventListener(vehicleType, "onEnterVehicle", AIVehicleObstacle)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", AIVehicleObstacle)
end
function AIVehicleObstacle:onLoad(savegame)
  self.spec_aiVehicleObstacle.needsUpdate = false
end
function AIVehicleObstacle:onDelete()
  self:removeAIVehicleObstacle()
end
function AIVehicleObstacle:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer and self.spec_aiVehicleObstacle.needsUpdate then
    self:updateAIVehicleObstacleState()
    self.spec_aiVehicleObstacle.needsUpdate = false
  end
end
function AIVehicleObstacle:createAIVehicleObstacle()
  if self.isAddedToPhysics then
    local maxBrakeAcceleration = self:getAIVehicleObstacleMaxBrakeAcceleration()
    for v5, v6 in ipairs(self.components) do
      if v6.obstacleId == nil then
        v7:addObstacle(v6.node, 0, 0, 0, 0, 0, 0, maxBrakeAcceleration)
        v6.obstacleId = v6.node
      end
      local v10 = self:getAIVehicleObstacleIsPassable()
      v7:setObstacleIsPassable(...)
    end
  end
end
function AIVehicleObstacle:removeAIVehicleObstacle()
  if self.components ~= nil then
    for v4, v5 in ipairs(self.components) do
      if not (v5.obstacleId ~= nil) then
        continue
      end
      v6:removeObstacle(v5.node)
      v5.obstacleId = nil
    end
  end
end
function AIVehicleObstacle:updateAIVehicleObstacleState()
  if self.isServer then
    local v1 = self:getCanHaveAIVehicleObstacle()
    if v1 then
      v1 = self:getNeedAIVehicleObstacle()
      -- if not v1 then goto L18 end
      self:createAIVehicleObstacle()
      return
    end
    self:removeAIVehicleObstacle()
  end
end
function AIVehicleObstacle:setAIVehicleObstacleStateDirty()
  self.spec_aiVehicleObstacle.needsUpdate = true
  self:raiseActive()
end
function AIVehicleObstacle:getCanHaveAIVehicleObstacle()
  if not self.isAddedToPhysics then
    return false
  end
  if self.propertyState == Vehicle.PROPERTY_STATE_SHOP_CONFIG then
    return false
  end
  if self.rootVehicle ~= self and self.rootVehicle.getCanHaveAIVehicleObstacle ~= nil then
    local v1 = v1:getCanHaveAIVehicleObstacle()
    if not v1 then
      return false
    end
  end
  return true
end
function AIVehicleObstacle.getNeedAIVehicleObstacle(v0)
  return true
end
function AIVehicleObstacle:getAIVehicleObstacleIsPassable()
  if self.getIsControlled ~= nil then
    local v2 = self:getIsControlled()
  end
  return v1
end
function AIVehicleObstacle.getAIVehicleObstacleMaxBrakeAcceleration(v0)
  return 5
end
function AIVehicleObstacle:onEnterVehicle(isControlling)
  self:setAIVehicleObstacleStateDirty()
end
function AIVehicleObstacle:onLeaveVehicle()
  self:setAIVehicleObstacleStateDirty()
end
function AIVehicleObstacle:addToPhysics(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  self:setAIVehicleObstacleStateDirty()
  return true
end
function AIVehicleObstacle:removeFromPhysics(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  self:setAIVehicleObstacleStateDirty()
  return true
end
