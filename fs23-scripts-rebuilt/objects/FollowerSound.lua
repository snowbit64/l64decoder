-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FollowerSound = {}
local FollowerSound_mt = Class(FollowerSound)
function FollowerSound.onCreate(v0, v1)
  local v4 = FollowerSound.new(v1)
  v2:addUpdateable(...)
end
function FollowerSound.new(id)
  setmetatable({}, u0)
  local v2 = getChildAt(id, 0)
  v2 = getChildAt(id, 1)
  local v3 = getUserAttribute(id, "followAxis")
  v2 = Utils.getNoNil(v3, 1)
  v2 = getSplineNumOfCV({splineId = v2, soundId = v2, currentDelay = 200, splineCVs = {}, followAxis = v2}.splineId)
  -- TODO: structure LOP_FORNPREP (pc 53, target 74)
  local v6, v7, v8 = getSplineCV({splineId = v2, soundId = v2, currentDelay = 200, splineCVs = {}, followAxis = v2, splineCVCount = v2, backwards = false}.splineId, 1 - 1)
  table.insert({splineId = v2, soundId = v2, currentDelay = 200, splineCVs = {}, followAxis = v2, splineCVCount = v2, backwards = false}.splineCVs, {v6, v7, v8})
  -- TODO: structure LOP_FORNLOOP (pc 73, target 54)
  if {splineId = v2, soundId = v2, currentDelay = 200, splineCVs = {}, followAxis = v2, splineCVCount = v2, backwards = false}.splineCVs[2][{splineId = v2, soundId = v2, currentDelay = 200, splineCVs = {}, followAxis = v2, splineCVCount = v2, backwards = false}.followAxis] < {splineId = v2, soundId = v2, currentDelay = 200, splineCVs = {}, followAxis = v2, splineCVCount = v2, backwards = false}.splineCVs[1][{splineId = v2, soundId = v2, currentDelay = 200, splineCVs = {}, followAxis = v2, splineCVCount = v2, backwards = false}.followAxis] then
  end
  return v1
end
function FollowerSound.delete(v0)
end
function FollowerSound:update(dt)
  if 0 < self.currentDelay then
    self.currentDelay = self.currentDelay - dt
    return
  end
  self.currentDelay = 200
  if g_currentMission.controlPlayer then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L49
    local v3, v4, v5 = getWorldTranslation(g_currentMission.player.rootNode)
    {0, 0, 0}[1] = v3
    {0, 0, 0}[2] = v4
    {0, 0, 0}[3] = v5
  elseif g_currentMission.controlledVehicle ~= nil then
    v3, v4, v5 = getWorldTranslation(g_currentMission.controlledVehicle.rootNode)
    {0, 0, 0}[1] = v3
    {0, 0, 0}[2] = v4
    {0, 0, 0}[3] = v5
  end
  -- TODO: structure LOP_FORNPREP (pc 54, target 214)
  if self.splineCVs[1][self.followAxis] <= v2[self.followAxis] then
    -- if v2[v0.followAxis] > v0.splineCVs[1 + 1][v0.followAxis] then goto L134 end
    -- TODO: structure LOP_FORNPREP (pc 108, target 125)
    {}[1] = (1 - (v2[self.followAxis] - self.splineCVs[1][self.followAxis]) / (self.splineCVs[1 + 1][self.followAxis] - self.splineCVs[1][self.followAxis])) * self.splineCVs[1][1] + (v2[self.followAxis] - self.splineCVs[1][self.followAxis]) / (self.splineCVs[1 + 1][self.followAxis] - self.splineCVs[1][self.followAxis]) * self.splineCVs[1 + 1][1]
    -- TODO: structure LOP_FORNLOOP (pc 124, target 109)
    setTranslation(self.soundId, {}[1], {}[2], {}[3])
  elseif v2[self.followAxis] <= self.splineCVs[1][self.followAxis] and self.splineCVs[1 + 1][self.followAxis] <= v2[self.followAxis] then
    -- TODO: structure LOP_FORNPREP (pc 188, target 205)
    {}[1] = (1 - (v2[self.followAxis] - self.splineCVs[1 + 1][self.followAxis]) / (self.splineCVs[1][self.followAxis] - self.splineCVs[1 + 1][self.followAxis])) * self.splineCVs[1 + 1][1] + (v2[self.followAxis] - self.splineCVs[1 + 1][self.followAxis]) / (self.splineCVs[1][self.followAxis] - self.splineCVs[1 + 1][self.followAxis]) * self.splineCVs[1][1]
    -- TODO: structure LOP_FORNLOOP (pc 204, target 189)
    setTranslation(self.soundId, {}[1], {}[2], {}[3])
  end
  -- TODO: structure LOP_FORNLOOP (pc 213, target 55)
  if self.backwards then
    if v2[self.followAxis] < self.splineCVs[self.splineCVCount][self.followAxis] then
      setTranslation(self.soundId, self.splineCVs[self.splineCVCount][1], self.splineCVs[self.splineCVCount][2], self.splineCVs[self.splineCVCount][3])
      return
    end
    -- if v0.splineCVs[1][v0.followAxis] >= v2[v0.followAxis] then goto L348 end
    setTranslation(self.soundId, self.splineCVs[1][1], self.splineCVs[1][2], self.splineCVs[1][3])
    return
  end
  if v2[self.followAxis] < self.splineCVs[1][self.followAxis] then
    setTranslation(self.soundId, self.splineCVs[1][1], self.splineCVs[1][2], self.splineCVs[1][3])
    return
  end
  if self.splineCVs[self.splineCVCount][self.followAxis] < v2[self.followAxis] then
    setTranslation(self.soundId, self.splineCVs[self.splineCVCount][1], self.splineCVs[self.splineCVCount][2], self.splineCVs[self.splineCVCount][3])
  end
end
