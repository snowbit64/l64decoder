-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Butterfly = {}
local Butterfly_mt = Class(Butterfly)
function Butterfly.onCreate(v0, v1)
  local v4 = Butterfly.new(v1)
  v2:addUpdateable(...)
end
function Butterfly.new(id)
  setmetatable({}, u0)
  local v5 = getNumOfChildren(id)
  -- TODO: structure LOP_FORNPREP (pc 20, target 66)
  v5 = getChildAt(id, 1 - 1)
  local v6 = getChildAt(v5, 0)
  local v7 = getChildAt(v5, 1)
  local v9 = getUserAttribute(v5, "speed")
  local v8 = Utils.getNoNil(v9, 0.005)
  table.insert({id = id, butterflies = {}}.butterflies, {butterflyId = v5, splineId = v6, meshId = v7, speed = v8, splinePos = 0})
  -- TODO: structure LOP_FORNLOOP (pc 65, target 21)
  return {id = id, butterflies = {}, time = 0, animTimer = 0, animDelay = 100, flip = true, checkClosestButterflyTimer = 0, checkClosestButterflyInterval = 2000, activeButterfly = nil, isSunOn = true}
end
function Butterfly.delete(v0)
end
function Butterfly:update(dt)
  if g_currentMission.environment.isSunOn ~= self.isSunOn then
    self.isSunOn = g_currentMission.environment.isSunOn
    if self.isSunOn then
      setVisibility(self.id, true)
    else
      setVisibility(self.id, false)
    end
  end
  if self.isSunOn then
    self.checkClosestButterflyTimer = self.checkClosestButterflyTimer - dt
    if self.checkClosestButterflyTimer <= 0 then
      if g_currentMission.controlPlayer then
        -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L76
        local v5, v6, v7 = getWorldTranslation(g_currentMission.player.rootNode)
        {0, 0, 0}[1] = v5
        {0, 0, 0}[2] = v6
        {0, 0, 0}[3] = v7
      elseif g_currentMission.controlledVehicle ~= nil then
        v5, v6, v7 = getWorldTranslation(g_currentMission.controlledVehicle.rootNode)
        {0, 0, 0}[1] = v5
        {0, 0, 0}[2] = v6
        {0, 0, 0}[3] = v7
      end
      for v9, v10 in pairs(self.butterflies) do
        local v11, v12, v13 = getWorldTranslation(v10.splineId)
        v5[1] = v11
        v5[2] = v12
        v5[3] = v13
        v11 = math.sqrt((v4[1] - v5[1]) * (v4[1] - v5[1]) + (v4[2] - v5[2]) * (v4[2] - v5[2]) + (v4[3] - v5[3]) * (v4[3] - v5[3]))
        if not (v11 < v2) then
          continue
        end
      end
      if v2 < 150 then
        for v9, v10 in pairs(self.butterflies) do
          if v10.butterflyId == v3.butterflyId then
            setVisibility(v10.butterflyId, true)
          else
            setVisibility(v10.butterflyId, false)
          end
        end
        self.activeButterfly = v3
      else
        for v9, v10 in pairs(self.butterflies) do
          setVisibility(v10.butterflyId, false)
        end
        self.activeButterfly = nil
      end
      self.checkClosestButterflyTimer = self.checkClosestButterflyInterval
    end
    if self.activeButterfly ~= nil then
      self.animTimer = self.animTimer - dt
      if self.animTimer <= 0 then
        self.flip = not self.flip
        local v3 = getChildAt(self.activeButterfly.meshId, 0)
        setVisibility(v3, self.flip)
        v3 = getChildAt(self.activeButterfly.meshId, 1)
        setVisibility(v3, not self.flip)
        self.animTimer = self.animDelay
      end
      v6 = math.random()
      self.time = self.time + dt * v6 * 1
      v9 = math.random()
      self.activeButterfly.splinePos = self.activeButterfly.splinePos + dt * v9 * 1 * self.activeButterfly.speed * 0.01
      local v4 = math.sin(self.time * 0.005)
      v5 = math.cos(self.time * 0.025)
      v5 = math.sin(self.time * 0.0175)
      v6 = math.cos(self.time * 0.0125)
      if 1 < self.activeButterfly.splinePos then
        self.activeButterfly.splinePos = self.activeButterfly.splinePos - 1
      end
      v4, v5, v6 = getSplinePosition(self.activeButterfly.splineId, self.activeButterfly.splinePos)
      v7, v8, v9 = getSplineOrientation(self.activeButterfly.splineId, self.activeButterfly.splinePos, 0, -1, 0)
      setTranslation(self.activeButterfly.meshId, v4 + v2, v5 + v3, v6 + v2)
      setRotation(self.activeButterfly.meshId, v7, v8, v9)
    end
  end
end
