-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PedestrianSystem = {}
local PedestrianSystem_mt = Class(PedestrianSystem)
function PedestrianSystem.onCreate(v0, v1)
  local v2 = getUserAttribute(v1, "xmlFile")
  if v2 ~= nil then
    local v3 = Utils.getFilename(v2, g_currentMission.loadingMapBaseDirectory)
    PedestrianSystem.createFromXmlAndNode(v3, v1)
    return
  end
  local v6 = getName(v1)
  Logging.error("Missing 'xmlFile'-attribute for pedestrian system in " .. v6)
end
function PedestrianSystem.createFromXmlAndNode(xmlFilename, transformId)
  local v2 = v2:getPedestrianSystem()
  if v2 ~= nil and v2.pedestrianSystemId ~= nil then
    Logging.error("Pedestrian system already present")
    return false
  end
  local pedestrianSystem = PedestrianSystem.new()
  local v4 = v4:getNode(AnimationCache.CHARACTER)
  local v5 = v5:getNode(AnimationCache.PEDESTRIAN)
  if v4 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L46
  end
  Logging.error("Unable to find Pedestrian Animation.")
  return false
  local v6 = pedestrianSystem:load(xmlFilename, transformId, v4, v5)
  if not v6 then
    pedestrianSystem:delete()
    return false
  end
  v6 = v6:setPedestrianSystem(pedestrianSystem)
  if v6 then
    v6:addUpdateable(pedestrianSystem)
  else
    pedestrianSystem:delete()
    return false
  end
  return true
end
function PedestrianSystem.new()
  local v0 = setmetatable({}, u0)
  v0.pedestrianSystemId = nil
  v0.isEnabled = false
  v0.xmlFilename = nil
  v0.transformId = nil
  return v0
end
function PedestrianSystem:load(xmlFilename, transformId, referenceNodeIdCharacter, referenceNodeIdPedestrian)
  local v6 = createPedestrianSystem(xmlFilename, transformId, referenceNodeIdCharacter, referenceNodeIdPedestrian, CollisionMask.TERRAIN, CollisionFlag.VEHICLE, AudioGroup.ENVIRONMENT)
  if v6 == 0 then
    local v10 = I3DUtil.getNodePath(transformId)
    Logging.error(...)
    return false
  end
  self.pedestrianSystemId = v6
  self.xmlFilename = xmlFilename
  self.transformId = transformId
  self:updateNightTimeRange()
  v7:subscribe(MessageType.DAYLIGHT_CHANGED, self.onDaylightChanged, self)
  addConsoleCommand("gsPedestrianSystemToggle", "Toggle pedestrian system", "consoleCommandPedestrianSystemToggle", self)
  addConsoleCommand("gsPedestrianSystemReload", "Reload pedestrian system xml", "consoleCommandPedestrianSystemReload", self)
  v7:addIndoorStateChangedListener(self)
  v10 = v10:getIsIndoor()
  setPedestrianSystemUseOutdoorAudioSetup(self.pedestrianSystemId, not v10)
  return true
end
function PedestrianSystem:delete()
  if self.pedestrianSystemId ~= nil then
    setPedestrianSystemEnabled(self.pedestrianSystemId, false)
    local v1 = v1:getHasUpdateable(self)
    if v1 then
      v1:removeUpdateable(self)
    end
    v1:setPedestrianSystem(nil)
    delete(self.pedestrianSystemId)
    self.pedestrianSystemId = nil
  end
  v1:unsubscribeAll(self)
  v1:removeIndoorStateChangedListener(self)
  removeConsoleCommand("gsPedestrianSystemToggle")
  removeConsoleCommand("gsPedestrianSystemReload")
end
function PedestrianSystem:update(dt)
  if self.pedestrianSystemId ~= nil then
    setPedestrianSystemDaytime(self.pedestrianSystemId, g_currentMission.environment.dayTime)
  end
end
function PedestrianSystem:setEnabled(state)
  if self.pedestrianSystemId ~= nil then
    setPedestrianSystemEnabled(self.pedestrianSystemId, state)
    self.isEnabled = state
  end
end
function PedestrianSystem:setNightTimeRange(nightStart, nightEnd)
  if self.pedestrianSystemId ~= nil then
    setPedestrianSystemNightTimeRange(self.pedestrianSystemId, nightStart, nightEnd)
  end
end
function PedestrianSystem:updateNightTimeRange()
  self:setNightTimeRange(g_currentMission.environment.daylight.logicalNightStart, g_currentMission.environment.daylight.logicalNightEnd)
end
function PedestrianSystem:onDaylightChanged()
  self:updateNightTimeRange()
end
function PedestrianSystem.consoleCommandPedestrianSystemToggle(v0, v1)
  local v2 = v2:getPedestrianSystem()
  if v2 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L13
  end
  return "Error: No pedestrian system available"
  local v3 = Utils.stringToBoolean(v1)
  if not v3 then
  end
  v2:setEnabled(v3)
  local v5 = tostring(v3)
  return "setPedestrianSystemEnabled=" .. v5
end
function PedestrianSystem.consoleCommandPedestrianSystemReload(v0)
  local v1 = v1:getPedestrianSystem()
  if v1 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L13
  end
  return "Error: No pedestrian system to reload"
  v1:delete()
  local v5 = PedestrianSystem.createFromXmlAndNode(v1.xmlFilename, v1.transformId)
  if v5 then
    v5 = v5:getPedestrianSystem()
    v5:setEnabled(v1.isEnabled)
    v5 = string.format("Reloaded pedestrian system from '%s'", v1.xmlFilename)
    return v5
  end
  return "Error while reloading pedestrian system"
end
function PedestrianSystem:onIndoorStateChanged(isIndoor)
  local v5 = v5:getIsIndoor()
  setPedestrianSystemUseOutdoorAudioSetup(self.pedestrianSystemId, not v5)
end
function PedestrianSystem:getSplineByIndex(splineIndex)
  I3DUtil.interateRecursively(self.transformId, function(self)
    local splineIndex = I3DUtil.getIsSpline(self)
    if splineIndex then
      if u0 == u1 then
        u2 = self
        return false
      end
      u0 = u0 + 1
    end
  end)
  return nil
end
