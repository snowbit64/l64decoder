-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CrowSoundStateDefault = {}
local CrowSoundStateDefault_mt = Class(CrowSoundStateDefault, SimpleState)
function CrowSoundStateDefault.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  return v4(v5, v6, v7, v8)
end
CrowSoundStateTakeOff = {}
local CrowSoundStateTakeOff_mt = Class(CrowSoundStateTakeOff, SimpleState)
function CrowSoundStateTakeOff.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  local v4 = v4(v5, v6, v7, v8)
  v4.currentIdx = 0
  return v4
end
function CrowSoundStateTakeOff:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  if 0 < self.owner.samples.flyAwayCount then
    v3 = math.random(1, self.owner.samples.flyAwayCount)
    local v2 = math.floor(...)
    self.currentIdx = v2
    v2:playSample(self.owner.samples.flyAway[self.currentIdx])
    return
  end
  v2:changeState(CrowsWildlife.CROW_SOUND_STATES.CALM_GROUND)
end
function CrowSoundStateTakeOff:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  if 0 < self.currentIdx then
    v2:stopSample(self.owner.samples.flyAway[self.currentIdx])
    self.currentIdx = 0
  end
end
function CrowSoundStateTakeOff:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if 0 < self.currentIdx then
    v3 = v3:getIsSamplePlaying(self.owner.samples.flyAway[self.currentIdx])
    if not v3 then
      self.currentIdx = 0
      v3:changeState(CrowsWildlife.CROW_SOUND_STATES.BUSY)
    end
  end
end
CrowSoundStateBusy = {}
local CrowSoundStateBusy_mt = Class(CrowSoundStateBusy, SimpleState)
function CrowSoundStateBusy.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  local v4 = v4(v5, v6, v7, v8)
  v4.minTimeUntilNextSamplePlay = 6000
  v4.maxTimeUntilNextSamplePlay = 8000
  v4.timer = 0
  return v4
end
function CrowSoundStateBusy:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  v2:playSample(self.owner.samples.busy)
  local v5 = math.random()
  self.timer = self.minTimeUntilNextSamplePlay + v5 * (self.maxTimeUntilNextSamplePlay - self.minTimeUntilNextSamplePlay)
end
function CrowSoundStateBusy:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  v1:stopSample(self.owner.samples.busy)
end
function CrowSoundStateBusy:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = math.max(self.timer - dt, 0)
  self.timer = v2
  if self.timer == 0 then
    v2:changeState(CrowsWildlife.CROW_SOUND_STATES.CALM_AIR)
  end
end
CrowSoundStateCalmGround = {}
local CrowSoundStateCalmGround_mt = Class(CrowSoundStateCalmGround, SimpleState)
function CrowSoundStateCalmGround.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  local v4 = v4(v5, v6, v7, v8)
  v4.minTimeUntilNextSamplePlay = 6000
  v4.maxTimeUntilNextSamplePlay = 8000
  v4.timer = 0
  v4.currentIdx = 0
  return v4
end
function CrowSoundStateCalmGround:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  if 0 < self.owner.samples.calmCount then
    local v2, v3, v4, v5 = v2:getAverageLocationOfIdleAnimals()
    local v9 = math.random()
    self.timer = self.minTimeUntilNextSamplePlay + v9 * (self.maxTimeUntilNextSamplePlay - self.minTimeUntilNextSamplePlay)
    if v2 then
      setWorldTranslation(self.owner.soundsNode, v3, v4, v5)
      local v7 = math.random(1, self.owner.samples.calmCount)
      local v6 = math.floor(...)
      self.currentIdx = v6
      v6:playSample(self.owner.samples.calmGround[self.currentIdx])
    end
  end
end
function CrowSoundStateCalmGround:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  if 0 < self.currentIdx then
    v2:stopSample(self.owner.samples.calmGround[self.currentIdx])
    self.currentIdx = 0
  end
end
function CrowSoundStateCalmGround:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if 0 < self.currentIdx then
    v3 = v3:getIsSamplePlaying(self.owner.samples.calmGround[self.currentIdx])
    if not v3 then
      self.currentIdx = 0
    end
  end
  local v2 = math.max(self.timer - dt, 0)
  self.timer = v2
  if self.timer == 0 and 0 < self.owner.samples.calmCount then
    local v5 = math.random()
    self.timer = self.minTimeUntilNextSamplePlay + v5 * (self.maxTimeUntilNextSamplePlay - self.minTimeUntilNextSamplePlay)
    local v2, v3, v4, v5 = v2:getAverageLocationOfIdleAnimals()
    if v2 then
      setWorldTranslation(self.owner.soundsNode, v3, v4, v5)
      local v7 = math.random(1, self.owner.samples.calmCount)
      local v6 = math.floor(...)
      self.currentIdx = v6
      v6:playSample(self.owner.samples.calmGround[self.currentIdx])
    end
  end
end
CrowSoundStateCalmAir = {}
local CrowSoundStateCalmAir_mt = Class(CrowSoundStateCalmAir, SimpleState)
function CrowSoundStateCalmAir.new(id, owner, stateMachine, custom_mt)
  if not custom_mt then
  end
  local v4 = v4(v5, v6, v7, v8)
  v4.minTimeUntilNextSamplePlay = 6000
  v4.maxTimeUntilNextSamplePlay = 8000
  v4.timer = 0
  return v4
end
function CrowSoundStateCalmAir:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  v2:playSample(self.owner.samples.calmAir)
  local v5 = math.random()
  self.timer = self.minTimeUntilNextSamplePlay + v5 * (self.maxTimeUntilNextSamplePlay - self.minTimeUntilNextSamplePlay)
end
function CrowSoundStateCalmAir:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  v1:stopSample(self.owner.samples.calmAir)
end
function CrowSoundStateCalmAir:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = math.max(self.timer - dt, 0)
  self.timer = v2
  if self.timer == 0 then
    v2:changeState(CrowsWildlife.CROW_SOUND_STATES.CALM_GROUND)
  end
end
