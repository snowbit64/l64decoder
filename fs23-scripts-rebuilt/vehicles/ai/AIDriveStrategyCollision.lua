-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDriveStrategyCollision = {}
local AIDriveStrategyCollision_mt = Class(AIDriveStrategyCollision, AIDriveStrategy)
AIDriveStrategyCollision.UPDATE_INTERVAL = 5
AIDriveStrategyCollision.TRIGGER_SUBDIVISIONS = 5
function AIDriveStrategyCollision.new(driveStrategyStraight, customMt)
  if customMt == nil then
  end
  local v2 = AIDriveStrategy.new(customMt)
  v2.numCollidingVehicles = {}
  v2.vehicleIgnoreList = {}
  v2.collisionTriggerByVehicle = {}
  v2.maxUpdateIndex = 1
  v2.lastHasCollision = false
  return v2
end
function AIDriveStrategyCollision:setAIVehicle(vehicle)
  local v3 = v3:superClass()
  v3.setAIVehicle(self, vehicle)
  if self.vehicle.isServer then
    self.collisionTriggerByVehicle = {}
    -- TODO: structure LOP_FORNPREP (pc 28, target 49)
    if self.vehicle.rootVehicle.childVehicles[1].getAICollisionTriggers ~= nil then
      self.vehicle.rootVehicle.childVehicles[1]:getAICollisionTriggers(self.collisionTriggerByVehicle)
    end
    if v6.getAIImplementCollisionTriggers ~= nil then
      v6:getAIImplementCollisionTriggers(self.collisionTriggerByVehicle)
    end
    -- TODO: structure LOP_FORNLOOP (pc 48, target 29)
    v3 = vehicle:getRootVehicle()
    self.rootVehicle = v3
    for v7, v8 in pairs(self.collisionTriggerByVehicle) do
      v8.updateIndex = v3
      v8.hasCollision = false
      v8.isValid = true
      v8.hitCounter = 0
      v8.curTriggerLength = 5
      v8.positions = {}
      -- TODO: structure LOP_FORNPREP (pc 86, target 96)
      table.insert(v8.positions, 0)
      -- TODO: structure LOP_FORNLOOP (pc 95, target 87)
    end
    self.maxUpdateIndex = v3
  end
end
function AIDriveStrategyCollision:update(dt)
  for v6, v7 in pairs(self.collisionTriggerByVehicle) do
    if not (v7.updateIndex == v2) then
      continue
    end
    self:generateTriggerPath(v6, v7)
    if not v7.isValid then
      continue
    end
    v7.hitCounter = 0
    local v8, v9, v10 = localDirectionToWorld(v7.node, 0, 0, 1)
    getVehicleCollisionDistance(v7.positions, v8, v9, v10, v7.width, v7.height, "onVehicleCollisionDistanceCallback", self, v7, CollisionMask.TRIGGER_AI_COLLISION, true, false, true)
  end
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    for v6, v7 in pairs(self.collisionTriggerByVehicle) do
      self:generateTriggerPath(v6, v7)
      if not v7.isValid then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 82, target 120)
      drawDebugLine(v7.positions[1 + 0], v7.positions[1 + 1] + 2, v7.positions[1 + 2], 1, 0, 0, v7.positions[1 + 3], v7.positions[1 + 4] + 2, v7.positions[1 + 5], 0, 1, 0, true)
      -- TODO: structure LOP_FORNLOOP (pc 119, target 83)
      v8, v9, v10 = localDirectionToWorld(v7.node, 0, 0, 1)
      debugDrawVehicleCollision(v7.positions, v8, v9, v10, v7.width, v7.height)
    end
  end
end
function AIDriveStrategyCollision:generateTriggerPath(vehicle, trigger)
  local v6, v7, v8 = getWorldTranslation(trigger.node)
  trigger.positions[1] = v6
  trigger.positions[2] = v7
  trigger.positions[3] = v8
  local v5 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, trigger.positions[1], trigger.positions[2], trigger.positions[3])
  trigger.positions[2] = v5 + trigger.height * 0.5
  local v3 = self:getCollisionCheckActive()
  if not v3 then
  end
  trigger.isValid = v3
  if trigger.isValid then
    if not trigger.hasCollision then
      v5 = v5:getLastSpeed()
      v5 = math.min(3, trigger.length)
      v3 = MathUtil.clamp(v5 * 0.75, v5, trigger.length)
      trigger.curTriggerLength = v3
    end
    local v7, v8, v9 = localToWorld(trigger.node, 0, 0, trigger.curTriggerLength / AIDriveStrategyCollision.TRIGGER_SUBDIVISIONS)
    trigger.positions[3 + 1] = v7
    trigger.positions[3 + 2] = trigger.positions[2]
    trigger.positions[3 + 3] = v9
    local v11 = v11:getAIDirectionNode()
    local v10, v11, v12 = worldToLocal(v11, trigger.positions[1], trigger.positions[2], trigger.positions[3])
    if 0 > v12 then
      -- if v1 ~= v0.vehicle then goto L222 end
    end
    if self.turnStrategy ~= nil then
      local v13 = v13:calculatePathPrediction(trigger.positions, trigger.node, v7, trigger.positions[2], v9, v3, v4, v5, v6)
      -- if v13 then goto L292 end
      trigger.isValid = false
      return
    end
    local v13, v14 = MathUtil.projectOnLine(v7, v9, self.vehicle.aiDriveTarget[1], self.vehicle.aiDriveTarget[2], self.vehicle.aiDriveDirection[1], self.vehicle.aiDriveDirection[2])
    -- TODO: structure LOP_FORNPREP (pc 189, target 292)
    trigger.positions[v3 + 1] = v13 + self.vehicle.aiDriveDirection[1] * v4
    trigger.positions[v3 + 2] = trigger.positions[2]
    trigger.positions[v3 + 3] = v14 + self.vehicle.aiDriveDirection[2] * v4
    -- TODO: structure LOP_FORNLOOP (pc 220, target 190)
    return
    v13 = v13:getAIDirectionNode()
    if self.collisionTriggerByVehicle[self.vehicle] ~= nil then
    end
    local v17, v18, v19 = getWorldTranslation(v13)
    local v20, v21, v22 = MathUtil.vector3Normalize(v17 - trigger.positions[1], v18 - trigger.positions[2], v19 - trigger.positions[3])
    -- TODO: structure LOP_FORNPREP (pc 263, target 292)
    trigger.positions[v3 + 1] = trigger.positions[v3 - 2] + v20 * v4
    trigger.positions[v3 + 2] = trigger.positions[2]
    trigger.positions[v3 + 3] = trigger.positions[v3] + v22 * v4
    -- TODO: structure LOP_FORNLOOP (pc 291, target 264)
  end
end
function AIDriveStrategyCollision:getCollisionCheckActive()
  local v1 = v1:getReverserDirection()
  if 0 < v1 then
    -- if v0.vehicle.movingDirection >= 0 then goto L45 end
    v1 = v1:getLastSpeed(true)
    -- if 2 >= v1 then goto L45 end
    return false
  elseif 0 < self.vehicle.movingDirection then
    v1 = v1:getLastSpeed(true)
    if 2 < v1 then
      return false
    end
  end
  return true
end
function AIDriveStrategyCollision:getDriveData(dt, vX, vY, vZ)
  local v5 = self:getCollisionCheckActive()
  if not v5 then
    return nil, nil, nil, nil, nil
  end
  for v8, v9 in pairs(self.collisionTriggerByVehicle) do
    if not v9.hasCollision then
      continue
    end
    local v11 = v11:getAIDirectionNode()
    local v10, v11, v12 = localToWorld(v11, 0, 0, 1)
    if VehicleDebug.state == VehicleDebug.DEBUG_AI then
      v13:addAIDebugText(" AIDriveStrategyCollision :: STOP due to collision")
    end
    self:setHasCollision(true)
    return v10, v12, true, 0, math.huge
  end
  self:setHasCollision(false)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    v5:addAIDebugText(" AIDriveStrategyCollision :: no collision")
  end
  return nil, nil, nil, nil, nil
end
function AIDriveStrategyCollision:setTurnData(isLeft, turnStrategy)
  self.turnStrategy = turnStrategy
end
function AIDriveStrategyCollision:setHasCollision(state)
  if state ~= self.lastHasCollision then
    self.lastHasCollision = state
    if g_server ~= nil then
      local v4 = AIVehicleIsBlockedEvent.new(self.vehicle, state)
      v2:broadcastEvent(v4, true, nil, self.vehicle)
    end
  end
end
function AIDriveStrategyCollision.updateDriving(v0, v1)
end
function AIDriveStrategyCollision.onVehicleCollisionDistanceCheckFinished(v0, v1)
  if 0 >= v1.hitCounter then
  end
  v1.hasCollision = true
end
function AIDriveStrategyCollision:onVehicleCollisionDistanceCallback(distance, objectId, subShapeIndex, isLast, trigger)
  if g_currentMission ~= nil and self.collisionTriggerByVehicle ~= nil then
    if objectId ~= 0 and self.collisionTriggerByVehicle[g_currentMission.nodeToObject[objectId]] == nil then
      local v7 = getHasTrigger(objectId)
      if not v7 then
        if g_currentMission.nodeToObject[objectId] ~= nil and g_currentMission.nodeToObject[objectId].getRootVehicle ~= nil then
          v7 = g_currentMission.nodeToObject[objectId]:getRootVehicle()
          -- if v7 == v0.rootVehicle then goto L41 end
        end
        trigger.hitCounter = trigger.hitCounter + 1
      end
    end
    if objectId ~= 0 then
      -- if not v4 then goto L50 end
    end
    self:onVehicleCollisionDistanceCheckFinished(trigger)
    return false
    return true
  end
end
