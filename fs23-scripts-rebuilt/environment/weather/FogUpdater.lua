-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FogUpdater = {}
local FogUpdater_mt = Class(FogUpdater)
function FogUpdater.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.isDirty = false
  v1.alpha = 1
  v1.duration = 1
  v1.currentMieScale = 1
  v1.lastMieScale = 0
  v1.targetMieScale = 0
  v1.fogColor = {0.3, 0.3, 0.3}
  v1:setFogMieScale(v1.currentMieScale)
  return v1
end
function FogUpdater.delete(v0)
end
function FogUpdater:update(dt)
  if self.alpha ~= 1 then
    local v2 = math.min(self.alpha + dt / self.duration, 1)
    self.alpha = v2
    v2 = MathUtil.lerp(self.lastMieScale, self.targetMieScale, self.alpha)
    self.currentMieScale = v2
    self.isDirty = true
  end
  if self.isDirty then
    if not self.forcedTargetMieScale then
    end
    self:setFogMieScale(v4)
    self.isDirty = false
  end
end
function FogUpdater:getCurrentValues()
  return self.currentMieScale
end
function FogUpdater:saveToXMLFile(xmlFile, key)
  setXMLFloat(xmlFile, key .. "#currentMieScale", self.currentMieScale)
  setXMLFloat(xmlFile, key .. "#lastMieScale", self.lastMieScale)
  setXMLFloat(xmlFile, key .. "#targetMieScale", self.targetMieScale)
  setXMLFloat(xmlFile, key .. "#alpha", self.alpha)
  setXMLFloat(xmlFile, key .. "#duration", self.duration)
end
function FogUpdater:loadFromXMLFile(xmlFile, key)
  local v3 = getXMLFloat(xmlFile, key .. "#currentMieScale")
  if not v3 then
  end
  self.currentMieScale = v3
  v3 = getXMLFloat(xmlFile, key .. "#lastMieScale")
  if not v3 then
  end
  self.lastMieScale = v3
  v3 = getXMLFloat(xmlFile, key .. "#targetMieScale")
  if not v3 then
  end
  self.targetMieScale = v3
  v3 = getXMLFloat(xmlFile, key .. "#alpha")
  if not v3 then
  end
  self.alpha = v3
  v3 = getXMLFloat(xmlFile, key .. "#duration")
  if not v3 then
  end
  self.duration = v3
  self.isDirty = true
end
function FogUpdater:setTargetValues(targetMieScale, duration)
  self.alpha = 0
  local v3 = math.max(1, duration)
  self.duration = v3
  self.lastMieScale = self.currentMieScale
  v3 = math.max(1, targetMieScale)
  self.targetMieScale = v3
end
function FogUpdater:setForcedTargetValues(targetMieScale, duration)
  self.alpha = 0
  local v3 = math.max(1, duration)
  self.duration = v3
  self.lastMieScale = self.currentMieScale
  if targetMieScale then
    v3 = math.max(1, targetMieScale)
    -- if v3 then goto L26 end
  end
  self.forcedTargetMieScale = nil
end
function FogUpdater.setHeight(v0, v1)
  setFogPlaneHeight(v1)
end
function FogUpdater.getHeight(v0)
  return getFogPlaneHeight()
end
function FogUpdater.setFogMieScale(v0, v1)
  setFogPlaneMieScale(v1)
end
