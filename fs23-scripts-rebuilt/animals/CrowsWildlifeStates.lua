-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CrowStateDefault = {}
local CrowStateDefault_mt = Class(CrowStateDefault, SimpleState)
function CrowStateDefault.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  return v4(v5, v6, v7, v8)
end
function CrowStateDefault:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  local v2 = v2:chooseRandomTargetNotInWater(2, 2.5, 0, 0)
  if v2 then
    v3:changeState("idle_walk")
    return
  end
  v3:chooseRandomTargetNotInWater(40, 50, 5, 10, self.owner.steering.targetX, self.owner.steering.targetZ)
  v3:changeState("takeOff")
end
CrowStateFlyGlide = {}
local CrowStateFlyGlide_mt = Class(CrowStateFlyGlide, SimpleState)
function CrowStateFlyGlide.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  local v4 = v4(v5, v6, v7, v8)
  v4.glideTimer = 10000
  v4.timer = 0
  return v4
end
function CrowStateFlyGlide:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  self.timer = self.glideTimer
  self.owner.steering.seekPercent = 0.6
  self.owner.steering.wanderPercent = 0.3
  self.owner.steering.separationPercent = 0.1
  self.owner.steering.maxForce = 0.1
end
function CrowStateFlyGlide:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  self.owner.steering.maxForce = 0.5
end
function CrowStateFlyGlide:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = math.max(self.timer - dt, 0)
  self.timer = v2
  if self.timer ~= 0 then
    v2 = v2:isNearTarget(0.5)
    -- if not v2 then goto L71 end
  end
  local v2, v3, v4 = getWorldTranslation(self.owner.i3dNodeId)
  local v5 = v5:getTerrainHeightWithProps(v2, v4)
  local v6 = math.max(v3 - v5, 5)
  v6:chooseRandomTargetNotInWater(5, 10, v6 - 5, v6 + 5)
  v6:changeState("fly")
end
CrowStateFly = {}
local CrowStateFly_mt = Class(CrowStateFly, SimpleState)
function CrowStateFly.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  return v4(v5, v6, v7, v8)
end
function CrowStateFly:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  self.owner.steering.seekPercent = 0.8
  self.owner.steering.wanderPercent = 0.1
  self.owner.steering.separationPercent = 0.1
  local v6 = math.random()
  self.owner.steering.maxVelocity = 8.2 + v6 * 2
  self.owner.steering.maxForce = 1
end
function CrowStateFly:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  self.owner.steering.maxForce = 0.5
end
function CrowStateFly:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:isNearTarget(0.5)
  if v2 then
    v2 = math.random()
    if v2 < 0.5 then
      local v3, v4, v5 = getWorldTranslation(self.owner.i3dNodeId)
      local v6 = v6:getTerrainHeightWithProps(v3, v5)
      local v7 = math.max(v4 - v6, 5)
      v7:chooseRandomTargetNotInWater(10, 5, v7 - 5, v7)
      v7:changeState("fly_glide")
      return
    end
    if v2 < 0.85 then
      v3, v4, v5 = getWorldTranslation(self.owner.i3dNodeId)
      v6 = v6:getTerrainHeightWithProps(v3, v5)
      v7 = math.max(v4 - v6, 5)
      v7:chooseRandomTargetNotInWater(5, 15, v7, v7 + 5)
      return
    end
    v3:chooseRandomTargetNotInWater(35, 50, 0, 0)
    v3:changeState("flyDown")
  end
end
CrowStateFlyUp = {}
local CrowStateFlyUp_mt = Class(CrowStateFlyUp, SimpleState)
function CrowStateFlyUp.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  return v4(v5, v6, v7, v8)
end
function CrowStateFlyUp:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  self.owner.steering.seekPercent = 0.8
  self.owner.steering.wanderPercent = 0.1
  self.owner.steering.separationPercent = 0.1
  local v6 = math.random()
  self.owner.steering.maxVelocity = 8.2 + v6 * 2
  self.owner.steering.maxForce = 1
  v2:initGuided(self.owner.steering.targetX, self.owner.steering.targetY, self.owner.steering.targetZ, 5000)
end
function CrowStateFlyUp:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  self.owner.steering.maxForce = 0.5
end
function CrowStateFlyUp:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:isNearTarget(0.5)
  if v2 then
    v2 = math.random()
    if v2 < 0.5 then
      local v3, v4, v5 = getWorldTranslation(self.owner.i3dNodeId)
      local v6 = v6:getTerrainHeightWithProps(v3, v5)
      local v7 = math.max(v4 - v6, 5)
      v7:chooseRandomTargetNotInWater(10, 5, v7 - 5, v7)
      v7:changeState("fly_glide")
      return
    end
    v3, v4, v5 = getWorldTranslation(self.owner.i3dNodeId)
    v6 = v6:getTerrainHeightWithProps(v3, v5)
    v7 = math.max(v4 - v6, 5)
    v7:chooseRandomTargetNotInWater(5, 15, v7, v7 + 5)
  end
end
CrowStateFlyDown = {}
local CrowStateFlyDown_mt = Class(CrowStateFlyDown, SimpleState)
function CrowStateFlyDown.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  return v4(v5, v6, v7, v8)
end
function CrowStateFlyDown:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  self.owner.steering.seekPercent = 0.8
  self.owner.steering.wanderPercent = 0.1
  self.owner.steering.separationPercent = 0.1
  local v6 = math.random()
  self.owner.steering.maxVelocity = 8.2 + v6 * 2
  self.owner.steering.maxForce = 1
  v2:initGuided(self.owner.steering.targetX, self.owner.steering.targetY + 0.1, self.owner.steering.targetZ, 5000)
end
function CrowStateFlyDown:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  self.owner.steering.maxForce = 0.5
end
function CrowStateFlyDown:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:isNearGround(8)
  if v2 then
    v2:changeState("flyDownFlapping")
  end
end
CrowStateFlyDownFlapping = {}
local CrowStateFlyDownFlapping_mt = Class(CrowStateFlyDownFlapping, SimpleState)
function CrowStateFlyDownFlapping.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  return v4(v5, v6, v7, v8)
end
function CrowStateFlyDownFlapping:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  self.owner.guide.tiltingActive = true
  self.owner.guide.tiltingAngle = -45
end
function CrowStateFlyDownFlapping:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  self.owner.steering.maxForce = 0.5
end
function CrowStateFlyDownFlapping:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:isNearGround(0.5)
  if v2 then
    v2:changeState("land")
  end
end
CrowStateLand = {}
local CrowStateLand_mt = Class(CrowStateLand, SimpleState)
function CrowStateLand.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  return v4(v5, v6, v7, v8)
end
function CrowStateLand:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  self.owner.steering.seekPercent = 1
  self.owner.steering.wanderPercent = 0
  self.owner.steering.separationPercent = 0
  local v6 = math.random()
  self.owner.steering.maxVelocity = 3.2 + v6 * 2
end
function CrowStateLand:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:isNearGround(0)
  if v2 then
    v2:changeState("idle_walk")
  end
end
CrowStateTakeOff = {}
local CrowStateTakeOff_mt = Class(CrowStateTakeOff, SimpleState)
function CrowStateTakeOff.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  return v4(v5, v6, v7, v8)
end
function CrowStateTakeOff:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  self.owner.steering.seekPercent = 0.6
  self.owner.steering.wanderPercent = 0.4
  self.owner.steering.separationPercent = 0
  local v6 = math.random()
  self.owner.steering.maxVelocity = 24.2 + v6 * 2
  self.owner.steering.maxForce = 10.5
  if self.owner.spawner.soundFSM.currentState.id == CrowsWildlife.CROW_SOUND_STATES.CALM_GROUND then
    v2:changeState(CrowsWildlife.CROW_SOUND_STATES.TAKEOFF)
  end
end
function CrowStateTakeOff:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  self.owner.steering.maxForce = 0.5
end
function CrowStateTakeOff:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  v2:changeState("flyUp")
end
CrowStateIdleWalk = {}
local CrowStateIdleWalk_mt = Class(CrowStateIdleWalk, SimpleState)
function CrowStateIdleWalk.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  return v4(v5, v6, v7, v8)
end
function CrowStateIdleWalk:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  self.owner.steering.seekPercent = 0.3
  self.owner.steering.wanderPercent = 0.7
  self.owner.steering.separationPercent = 0
  local v6 = math.random()
  self.owner.steering.maxVelocity = 0.7 + v6 * 0.1
end
function CrowStateIdleWalk:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:isNearestPlayerClose(15)
  if v2 then
    v2:changeState("idle_attention")
    return
  end
  v2 = v2:isNearTarget(0.5)
  if v2 then
    v2 = math.random(1, 2)
    if v2 == 1 then
      v3:changeState("idle_eat")
      return
    end
    if v2 == 2 then
      v3:chooseRandomTargetNotInWater(0, 5, 0, 0)
    end
  end
end
CrowStateIdleEat = {}
local CrowStateIdleEat_mt = Class(CrowStateIdleEat, SimpleState)
function CrowStateIdleEat.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  local v4 = v4(v5, v6, v7, v8)
  v4.eatTimer = 1000
  v4.timer = 0
  return v4
end
function CrowStateIdleEat:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  self.timer = self.eatTimer
  self.owner.steering.seekPercent = 0
  self.owner.steering.wanderPercent = 0
  self.owner.steering.separationPercent = 0
  self.owner.steering.maxVelocity = 0
end
function CrowStateIdleEat:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = math.max(self.timer - dt, 0)
  self.timer = v2
  if self.timer == 0 then
    v2 = v2:chooseRandomTargetNotInWater(2, 2.5, 0, 0)
    if v2 then
      v3:changeState("idle_walk")
      return
    end
    v3:chooseRandomTargetNotInWater(40, 50, 5, 10, self.owner.steering.targetX, self.owner.steering.targetZ)
    v3:changeState("takeOff")
  end
end
CrowStateIdleAttention = {}
local CrowStateIdleAttention_mt = Class(CrowStateIdleAttention, SimpleState)
function CrowStateIdleAttention.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  local v4 = v4(v5, v6, v7, v8)
  v4.attentionTimer = 2000
  v4.timer = 0
  return v4
end
function CrowStateIdleAttention:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  self.timer = self.attentionTimer
  self.owner.steering.seekPercent = 0
  self.owner.steering.wanderPercent = 0
  self.owner.steering.separationPercent = 0
  self.owner.steering.maxVelocity = 0
end
function CrowStateIdleAttention:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = math.max(self.timer - dt, 0)
  self.timer = v2
  local v2, v3, v4, v5 = v2:isNearestPlayerClose(10)
  if v2 then
    v6:chooseRandomTargetNotInWater(20, 25, 25, 30, v3, v5)
    v6:searchTree(self.owner.steering.targetX, self.owner.steering.targetY, self.owner.steering.targetZ, 20)
    if self.owner.spawner.tree ~= nil then
      local v6, v7, v8 = getWorldTranslation(self.owner.spawner.tree)
      self.owner.steering.targetX = v6
      self.owner.steering.targetZ = v8
    end
    v6:changeState("takeOff")
    return
  end
  if self.timer == 0 then
    v6 = math.random(1, 2)
    if v6 == 1 then
      v7:changeState("idle_eat")
      return
    end
    if v6 == 2 then
      v7 = v7:chooseRandomTargetNotInWater(2, 2.5, 0, 0)
      if v7 then
        v8:changeState("idle_walk")
        return
      end
      v8:chooseRandomTargetNotInWater(40, 50, 5, 10, self.owner.steering.targetX, self.owner.steering.targetZ)
      v8:changeState("takeOff")
    end
  end
end
