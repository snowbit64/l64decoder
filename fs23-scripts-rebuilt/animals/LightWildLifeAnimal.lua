-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LightWildlifeAnimal = {}
local LightWildlifeAnimal_mt = Class(LightWildlifeAnimal)
function LightWildlifeAnimal.new(spawner, id, nodeId, shaderNode, customMt)
  if not customMt then
  end
  local v5 = v5(v6, v7)
  local v6 = FSMUtil.create()
  v5.stateMachine = v6
  v5.spawner = spawner
  v5.id = id
  v5.i3dNodeId = nodeId
  v5.shaderNode = shaderNode
  v5.animation = {currentOpcode = 0, currentSpeed = 0, transitionTimer = 0, transitionCurrentTimer = 0, transitionOpcode = 0, transitionSpeed = 0}
  v5.steering = {targetX = 0, targetY = 0, targetZ = 0, speed = 0, velocityX = 0, velocityY = 0, velocityZ = 0, wanderAngle = 0, maxVelocity = 0, seekPercent = 0, wanderPercent = 0, separationPercent = 0, wanderX = 0, wanderY = 0, wanderZ = 0, wanderTimer = 0, maxForce = 0.5, mass = 1, radius = 1, radiusSq = v5.steering.radius * v5.steering.radius}
  v5.guide = {enabled = false, totalDuration = 0, time = 0, fromPositionX = 0, fromPositionY = 0, fromPositionZ = 0, toPositionX = 0, toPositionY = 0, toPositionZ = 0, lastPositionX = 0, lastPositionY = 0, lastPositionZ = 0, tiltingActive = false, tiltingAngle = 0}
  return v5
end
function LightWildlifeAnimal:delete()
  v1:changeState("default")
end
function LightWildlifeAnimal:init(spawnPosX, spawnPosZ, radius, states)
  local v6 = math.random()
  local v7 = math.random()
  local v9 = v9:getTerrainHeightWithProps(spawnPosX + v6 * radius, spawnPosZ + v7 * radius)
  setTranslation(self.i3dNodeId, spawnPosX + v6 * radius, v9, spawnPosZ + v7 * radius)
  local v14 = math.random(1, 360)
  local v13 = math.rad(...)
  setRotation(self.i3dNodeId, 0, v13, 0)
  setShaderParameter(self.shaderNode, self.spawner.shaderParmId, self.id, 0, 0, 0, false)
  for v13, v14 in pairs(states) do
    local v18 = v14.classObject.new(v14.id, self, self.stateMachine)
    v15:addState(...)
  end
  v10:changeState("default")
end
function LightWildlifeAnimal:update(dt)
  if self.guide.enabled then
    self:updateGuided(dt)
  else
    self:updateKinematic(dt)
  end
  v2:update(dt)
end
function LightWildlifeAnimal:initGuided(targetX, targetY, targetZ, duration)
  local v8, v9, v10 = getWorldTranslation(self.i3dNodeId)
  self.guide.fromPositionX = v8
  self.guide.fromPositionY = v9
  self.guide.fromPositionZ = v10
  self.guide.toPositionX = targetX
  self.guide.toPositionY = targetY
  self.guide.toPositionZ = targetZ
  self.guide.lastPositionX = self.guide.fromPositionX
  self.guide.lastPositionY = self.guide.fromPositionY
  self.guide.lastPositionZ = self.guide.fromPositionZ
  self.guide.enabled = true
  self.guide.time = 0
  self.guide.totalDuration = duration
end
function LightWildlifeAnimal:updateGuided(dt)
  self.guide.time = self.guide.time + dt
  if 1 < self.guide.time / self.guide.totalDuration then
    self.guide.enabled = false
    self.guide.tiltingActive = false
  end
  if v2 < 0.5 then
  else
    local v5 = math.pow(-2 * v2 + 2, 2)
  end
  local v4 = MathUtil.lerp(self.guide.fromPositionY, self.guide.toPositionY, v2)
  local v9, v10, v11 = MathUtil.vector3Normalize(self.guide.fromPositionX + (self.guide.toPositionX - self.guide.fromPositionX) * v2 - self.guide.lastPositionX, v4 - self.guide.lastPositionY, self.guide.fromPositionZ + (self.guide.toPositionZ - self.guide.fromPositionZ) * v2 - self.guide.lastPositionZ)
  self.guide.lastPositionX = self.guide.fromPositionX + (self.guide.toPositionX - self.guide.fromPositionX) * v2
  self.guide.lastPositionY = v4
  self.guide.lastPositionZ = self.guide.fromPositionZ + (self.guide.toPositionZ - self.guide.fromPositionZ) * v2
  setDirection(self.i3dNodeId, v9, v10, v11, 0, 1, 0)
  setWorldTranslation(self.i3dNodeId, self.guide.fromPositionX + (self.guide.toPositionX - self.guide.fromPositionX) * v2, v4, self.guide.fromPositionZ + (self.guide.toPositionZ - self.guide.fromPositionZ) * v2)
  if self.guide.tiltingActive then
    v11 = MathUtil.degToRad(self.guide.tiltingAngle)
    rotateAboutLocalAxis(self.i3dNodeId, v11, 1, 0, 0)
  end
end
function LightWildlifeAnimal:updateKinematic(dt)
  if 0 < self.steering.seekPercent then
    local v6, v7, v8 = self:calculateSeekForce()
    v6, v7, v8 = MathUtil.vector3Clamp(v6, v7, v8, 0, self.steering.maxForce)
  end
  if 0 < self.steering.wanderPercent then
    local v9, v10, v11 = self:calculateWanderForce()
    v9, v10, v11 = MathUtil.vector3Clamp(v9, v10, v11, 0, self.steering.maxForce)
  end
  if 0 < self.steering.separationPercent then
    local v12, v13, v14 = self:calculateSeparateForce()
    v12, v13, v14 = MathUtil.vector3Clamp(v12, v13, v14, 0, self.steering.maxForce)
  end
  self.steering.velocityX = self.steering.velocityX + (self.steering.seekPercent * v3 + self.steering.wanderPercent * v6 + self.steering.separationPercent * v9) / self.steering.mass
  self.steering.velocityY = self.steering.velocityY + (self.steering.seekPercent * v4 + self.steering.wanderPercent * v7 + self.steering.separationPercent * v10) / self.steering.mass
  self.steering.velocityZ = self.steering.velocityZ + (self.steering.seekPercent * v5 + self.steering.wanderPercent * v8 + self.steering.separationPercent * v11) / self.steering.mass
  local v18, v19, v20 = MathUtil.vector3Clamp(self.steering.velocityX, self.steering.velocityY, self.steering.velocityZ, 0, self.steering.maxVelocity)
  self.steering.velocityX = v18
  self.steering.velocityY = v19
  self.steering.velocityZ = v20
  local v15, v16, v17 = getWorldTranslation(self.i3dNodeId)
  v18 = v18:getTerrainHeightWithProps(v15, v17)
  v19 = math.max(v16 + self.steering.velocityY * v2, v18)
  if 0 >= self.steering.velocityX and 0 >= self.steering.velocityY then
    -- if 0 >= v0.steering.velocityZ then goto L300 end
  end
  local v19, v20, v21 = MathUtil.vector3Normalize(self.steering.velocityX, self.steering.velocityY, self.steering.velocityZ)
  setDirection(self.i3dNodeId, v19, v20, v21, 0, 1, 0)
  setWorldTranslation(self.i3dNodeId, v15, v16, v17)
end
function LightWildlifeAnimal:calculateSeparateForce()
  local v1, v2, v3 = getWorldTranslation(self.i3dNodeId)
  for v11, v12 in pairs(self.spawner.animals) do
    local v13, v14, v15 = getWorldTranslation(v12.i3dNodeId)
    if not (0 < (v1 - v13) * (v1 - v13) + (v2 - v14) * (v2 - v14) + (v3 - v15) * (v3 - v15)) then
      continue
    end
    if not ((v1 - v13) * (v1 - v13) + (v2 - v14) * (v2 - v14) + (v3 - v15) * (v3 - v15) < self.steering.radiusSq) then
      continue
    end
    local v23 = math.sqrt((v1 - v13) * (v1 - v13) + (v2 - v14) * (v2 - v14) + (v3 - v15) * (v3 - v15))
    local v24, v25, v26 = MathUtil.vector3Normalize(v1 - v13, v2 - v14, v3 - v15)
  end
  if 0 < v4 then
    v8, v9, v10 = MathUtil.vector3SetLength(v5 / v4, v6 / v4, v7 / v4, self.steering.maxVelocity)
    return v8 - self.steering.velocityX, v9 - self.steering.velocityY, v10 - self.steering.velocityZ
  end
  return 0, 0, 0
end
function LightWildlifeAnimal:calculateWanderForce()
  if self.steering.velocityX ~= 0 and self.steering.velocityY ~= 0 and self.steering.velocityZ ~= 0 then
    local angleChange = MathUtil.degToRad(35)
    local v10 = math.random()
    self.steering.wanderAngle = self.steering.wanderAngle + v10 * angleChange - angleChange * 0.5
    local v5, v6, v7 = MathUtil.vector3Normalize(self.steering.velocityX, self.steering.velocityY, self.steering.velocityZ)
    local v8 = math.cos(self.steering.wanderAngle)
    v8 = math.sin(self.steering.wanderAngle)
    return v5 * 5 + v8 * 1, v6 * 5 + 0, v7 * 5 + v8 * 1
  end
  return 0, 0, 0, 0
end
function LightWildlifeAnimal:calculateSeekForce()
  local v1, v2, v3 = getWorldTranslation(self.i3dNodeId)
  if self.steering.targetX - v1 == 0 and self.steering.targetY - v2 == 0 then
    -- cmp-jump LOP_JUMPXEQKN R6 aux=0x7 -> L66
  end
  local v7, v8, v9 = MathUtil.vector3Normalize(v4, v5, v6)
  return v7 * self.steering.maxVelocity - self.steering.velocityX, v8 * self.steering.maxVelocity - self.steering.velocityY, v9 * self.steering.maxVelocity - self.steering.velocityZ
  return 0, 0, 0
end
function LightWildlifeAnimal:setTarget(x, y, z)
  self.steering.targetX = x
  self.steering.targetY = y
  self.steering.targetZ = z
end
function LightWildlifeAnimal:isNearTarget(distance)
  local v2, v3, v4 = getWorldTranslation(self.i3dNodeId)
  if (self.steering.targetX - v2) * (self.steering.targetX - v2) + (self.steering.targetY - v3) * (self.steering.targetY - v3) + (self.steering.targetZ - v4) * (self.steering.targetZ - v4) >= distance * distance then
  end
  return true
end
function LightWildlifeAnimal:isNearGround(distanceToGround)
  local v2, v3, v4 = getWorldTranslation(self.i3dNodeId)
  local v5 = v5:getTerrainHeightWithProps(v2, v4)
  if v3 - v5 > distanceToGround then
  end
  return true
end
function LightWildlifeAnimal:isNearestPlayerClose(distance)
  local v3, v4, v5 = getWorldTranslation(self.i3dNodeId)
  for v13, v14 in pairs(g_currentMission.players) do
    if not v14.isControlled then
      continue
    end
    local v15, v16, v17 = getWorldTranslation(v14.rootNode)
    if v6 ~= nil then
      if not (v6 ~= nil) then
        continue
      end
      if not ((v15 - v3) * (v15 - v3) + (v16 - v4) * (v16 - v4) + (v17 - v5) * (v17 - v5) < v6) then
        continue
      end
    end
  end
  for v13, v14 in pairs(g_currentMission.enterables) do
    v15 = v14:getIsEntered()
    if not v15 then
      continue
    end
    v15, v16, v17 = getWorldTranslation(v14.rootNode)
    if v6 ~= nil then
      if not (v6 ~= nil) then
        continue
      end
      if not ((v15 - v3) * (v15 - v3) + (v16 - v4) * (v16 - v4) + (v17 - v5) * (v17 - v5) < v6) then
        continue
      end
    end
  end
  if v6 == nil then
    return false
  end
  if v6 >= v2 then
  end
  return true, v7, v8, v9
end
function LightWildlifeAnimal:chooseRandomTarget(minDistance, maxDistance, minHeight, maxHeight, fleePosX, fleePosZ)
  if fleePosX ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L23
    local v9, v10, v11 = getWorldTranslation(self.i3dNodeId)
    local v14, v15 = MathUtil.vector2Normalize(v9 - fleePosX, v11 - fleePosZ)
  else
    v10 = math.random()
    v10 = MathUtil.degToRad(v10 * 30)
    local v13 = math.sin(v10)
    local v12 = math.cos(v10)
    v13, v14, v15 = localDirectionToWorld(self.i3dNodeId, -v13, 0, v12)
  end
  v12 = math.random()
  v11, v12, v13 = getWorldTranslation(self.i3dNodeId)
  local v17 = math.random()
  local v16 = v16:getTerrainHeightWithProps(v11 + v7 * (minDistance + v12 * (maxDistance - minDistance)), v13 + v8 * (minDistance + v12 * (maxDistance - minDistance)))
  self:setTarget(v11 + v7 * (minDistance + v12 * (maxDistance - minDistance)), minHeight + v17 * (maxHeight - minHeight) + v16, v13 + v8 * (minDistance + v12 * (maxDistance - minDistance)))
end
function LightWildlifeAnimal:chooseRandomTargetNotInWater(minDistance, maxDistance, minHeight, maxHeight, fleePosX, fleePosZ)
  while not false do
    if not (0 < v8) then
      break
    end
    self:chooseRandomTarget(minDistance, maxDistance, minHeight, maxHeight, fleePosX, fleePosZ)
    local v9 = v9:getIsInWater(self.steering.targetX, self.steering.targetY, self.steering.targetZ)
  end
  return v7
end
function LightWildlifeAnimal:updateAnimation(dt)
  if 0 < self.animation.transitionCurrentTimer then
    local v3 = math.max(self.animation.transitionCurrentTimer - dt, 0)
    self.animation.transitionCurrentTimer = v3
    if self.animation.transitionCurrentTimer == 0 then
      setShaderParameter(self.shaderNode, self.spawner.shaderParmOpcode, self.animation.transitionOpcode, 0, 0, 0, false)
      setShaderParameter(self.shaderNode, self.spawner.shaderParmSpeed, self.animation.transitionSpeed, 0, 0, 0, false)
      self.animation.currentOpcode = self.animation.transitionOpcode
      self.animation.currentSpeed = self.animation.transitionSpeed
      self.animation.transitionOpcode = 0
      self.animation.transitionSpeed = 0
    else
      setShaderParameter(self.shaderNode, self.spawner.shaderParmOpcode, self.animation.currentOpcode, self.animation.transitionOpcode, 1 - self.animation.transitionCurrentTimer / self.animation.transitionTimer, 0, false)
    end
  end
  local v2 = self:checkAnimationState()
  if not v2 then
    self:synchronizeAnimation()
  end
end
function LightWildlifeAnimal:synchronizeAnimation()
  if 0 < self.spawner.animations[self.stateMachine.currentState.id].transitionTimer then
    self.animation.transitionCurrentTimer = self.spawner.animations[self.stateMachine.currentState.id].transitionTimer
    self.animation.transitionTimer = self.spawner.animations[self.stateMachine.currentState.id].transitionTimer
    self.animation.transitionOpcode = self.spawner.animations[self.stateMachine.currentState.id].opcode
    self.animation.transitionSpeed = self.spawner.animations[self.stateMachine.currentState.id].speed
    setShaderParameter(self.shaderNode, self.spawner.shaderParmOpcode, self.animation.currentOpcode, self.animation.transitionOpcode, 0, 0, false)
    setShaderParameter(self.shaderNode, self.spawner.shaderParmSpeed, self.animation.currentSpeed, self.animation.transitionSpeed, 0, 0, false)
  end
end
function LightWildlifeAnimal:checkAnimationState()
  if 0 < self.animation.transitionCurrentTimer and self.animation.transitionOpcode == self.spawner.animations[self.stateMachine.currentState.id].opcode then
    return true
  end
  if self.animation.transitionCurrentTimer == 0 and self.animation.currentOpcode == v2.opcode then
    return true
  end
  return false
end
