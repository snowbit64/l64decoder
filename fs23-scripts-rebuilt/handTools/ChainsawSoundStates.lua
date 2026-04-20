-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChainsawSoundStateStart = {}
local ChainsawSoundStateStart_mt = Class(ChainsawSoundStateStart, SimpleState)
function ChainsawSoundStateStart.new(id, owner, stateMachine, custom_mt)
  return SimpleState.new(id, owner, stateMachine, u0)
end
function ChainsawSoundStateStart:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  v2:playSample(self.owner.samples.start)
  v2:playSample(self.owner.samples.idle, 0, self.owner.samples.start)
  v2:changeState(Chainsaw.SOUND_STATES.IDLE)
end
ChainsawSoundStateStop = {}
local ChainsawSoundStateStop_mt = Class(ChainsawSoundStateStop, SimpleState)
function ChainsawSoundStateStop.new(id, owner, stateMachine, custom_mt)
  return SimpleState.new(id, owner, stateMachine, u0)
end
function ChainsawSoundStateStop:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  v2:stopSample(self.owner.samples.stop)
end
ChainsawSoundStateIdle = {}
local ChainsawSoundStateIdle_mt = Class(ChainsawSoundStateIdle, SimpleState)
function ChainsawSoundStateIdle.new(id, owner, stateMachine, custom_mt)
  return SimpleState.new(id, owner, stateMachine, u0)
end
function ChainsawSoundStateIdle:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  v1:stopSample(self.owner.samples.idle)
end
function ChainsawSoundStateIdle:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:getIsSamplePlaying(self.owner.samples.idle)
  if not v2 then
    v2:playSample(self.owner.samples.idle)
  end
  if self.owner.isCutting then
    v2:changeState(Chainsaw.SOUND_STATES.CUT)
    return
  end
  if self.owner.activatePressed then
    v2:changeState(Chainsaw.SOUND_STATES.ACTIVE)
  end
end
ChainsawSoundStateActive = {}
local ChainsawSoundStateActive_mt = Class(ChainsawSoundStateActive, SimpleState)
function ChainsawSoundStateActive.new(id, owner, stateMachine, custom_mt)
  local v4 = SimpleState.new(id, owner, stateMachine, u0)
  v4.activeTimer = 0
  return v4
end
function ChainsawSoundStateActive:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  if parms ~= nil then
  end
  if not v3 then
    v3:stopSample(self.owner.samples.activeStart)
    v3:stopSample(self.owner.samples.activeLoop)
    v3:playSample(self.owner.samples.activeStart)
    v3:playSample(self.owner.samples.activeLoop, 0, self.owner.samples.activeStart)
  end
  self.activeTimer = 0
end
function ChainsawSoundStateActive:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  local v1 = getSamplePlayTimeLeft(self.owner.samples.activeStart.soundSample)
  if v1 == 0 then
    v1:playSample(self.owner.samples.activeStop)
  end
  v1:stopSample(self.owner.samples.activeStart)
  v1:stopSample(self.owner.samples.activeLoop)
  self.activeTimer = 0
end
function ChainsawSoundStateActive:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.owner.isCutting then
    v2:changeState(Chainsaw.SOUND_STATES.CUT)
    return
  end
  if self.owner.activatePressed then
    self.activeTimer = self.activeTimer + dt
    return
  end
  if not self.owner.activatePressed then
    for v6, v7 in pairs(self.owner.samplesQuicktap) do
      local v8 = v8:getIsSamplePlaying(v7)
      if not v8 then
        continue
      end
      break
    end
    if self.activeTimer < self.owner.quicktapThreshold and not v2 then
      v3:changeState(Chainsaw.SOUND_STATES.QUICKTAP)
      return
    end
    v3:changeState(Chainsaw.SOUND_STATES.IDLE)
  end
end
ChainsawSoundStateCut = {}
local ChainsawSoundStateCut_mt = Class(ChainsawSoundStateCut, SimpleState)
function ChainsawSoundStateCut.new(id, owner, stateMachine, custom_mt)
  return SimpleState.new(id, owner, stateMachine, u0)
end
function ChainsawSoundStateCut:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  v2:stopSample(self.owner.samples.cutStart)
  v2:stopSample(self.owner.samples.cutLoop)
  v2:playSample(self.owner.samples.cutStart)
  v2:playSample(self.owner.samples.cutLoop, 0, self.owner.samples.cutStart)
end
function ChainsawSoundStateCut:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  v1:stopSample(self.owner.samples.cutStart)
  v1:stopSample(self.owner.samples.cutLoop)
end
function ChainsawSoundStateCut:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if not self.owner.isCutting then
    if self.owner.activatePressed then
      v2:changeState(Chainsaw.SOUND_STATES.ACTIVE)
      v2:playSample(self.owner.samples.cutStop)
      return
    end
    v2:changeState(Chainsaw.SOUND_STATES.IDLE)
    v2:playSample(self.owner.samples.cutStop)
  end
end
ChainsawSoundStateQuicktap = {}
local ChainsawSoundStateQuicktap_mt = Class(ChainsawSoundStateQuicktap, SimpleState)
function ChainsawSoundStateQuicktap.new(id, owner, stateMachine, custom_mt)
  return SimpleState.new(id, owner, stateMachine, u0)
end
function ChainsawSoundStateQuicktap:activate(parms)
  local v3 = v3:superClass()
  v3.activate(self, parms)
  if 0 < self.owner.samplesQuicktapCount then
    v3 = math.random(1, self.owner.samplesQuicktapCount)
    local v2 = math.floor(...)
    v4:playSample(self.owner.samplesQuicktap[v2])
  end
  v2:changeState(Chainsaw.SOUND_STATES.IDLE)
end
