-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TrafficSystem = {}
local TrafficSystem_mt = Class(TrafficSystem, Object)
InitStaticObjectClass(TrafficSystem, "TrafficSystem", ObjectIds.TRAFFIC_SYSTEM)
function TrafficSystem.onCreate(v0, v1)
  local v2 = getUserAttribute(v1, "xmlFile")
  if v2 ~= nil then
    local v3 = Utils.getFilename(v2, g_currentMission.loadingMapBaseDirectory)
    if not Platform.gameplay.lightsProfile then
      v3 = v3:getValue("lightsProfile")
    end
    if v3 ~= GS_PROFILE_HIGH and v3 ~= GS_PROFILE_VERY_HIGH then
    end
    if g_server == nil then
    end
    if g_client == nil then
    end
    local v5 = v5(v6, true)
    if g_server == nil then
    end
    if g_client == nil then
    end
    local v6 = v5:load(v8, v9, v10, v11, true)
    if v6 then
      v5:register(true)
      v6:add(v5)
      v5:setEnabled(g_currentMission.missionInfo.trafficEnabled)
    else
      v5:delete()
    end
    g_currentMission.trafficSystem = v5
    return
  end
  v6 = getName(v1)
  print("Error: Missing xmlFile attribute for traffic system in " .. v6)
end
function TrafficSystem.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.trafficSystemId = nil
  v3.isEnabled = false
  v3.debugIsEnabled = false
  local v4 = v3:getNextDirtyFlag()
  v3.trafficSystemDirtyFlag = v4
  addConsoleCommand("gsTrafficSystemToggleDebug", "Enables debug rendering for the collision geometry", "consoleCommandToggleDebugRendering", v3)
  return v3
end
function TrafficSystem:load(xmlFilename, transformId, useHighProfile, isServer, isClient)
  local v6 = createTrafficSystem(xmlFilename, transformId, useHighProfile, isServer, isClient, AudioGroup.ENVIRONMENT)
  if v6 == 0 then
    local v10 = I3DUtil.getNodePath(transformId)
    Logging.error(...)
    return false
  end
  self.trafficSystemId = v6
  self.rootNodeId = transformId
  setTrafficSystemCollisionMasks(self.trafficSystemId, CollisionFlag.TERRAIN + CollisionFlag.STATIC_WORLD, CollisionFlag.DYNAMIC_OBJECT + CollisionFlag.VEHICLE + CollisionFlag.PLAYER + CollisionFlag.TRIGGER_VEHICLE, CollisionFlag.TRIGGER_VEHICLE, CollisionFlag.TRIGGER_TRAFFIC_VEHICLE_BLOCKING)
  self.isEnabled = true
  v11:addIndoorStateChangedListener(self)
  local v14 = v14:getIsIndoor()
  setTrafficSystemUseOutdoorAudioSetup(self.trafficSystemId, not v14)
  self:updateNightTimeRange()
  v11:subscribe(MessageType.DAYLIGHT_CHANGED, self.onDaylightChanged, self)
  return true
end
function TrafficSystem:delete()
  if self.trafficSystemId ~= nil then
    delete(self.trafficSystemId)
    g_currentMission.trafficSystem = nil
  end
  removeConsoleCommand("gsTrafficSystemToggleDebug")
  v1:unsubscribeAll(self)
  v1:removeIndoorStateChangedListener(self)
end
function TrafficSystem:writeUpdateStream(streamId, connection, dirtyMask)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    writeTrafficSystemToStream(self.trafficSystemId, streamId)
  end
end
function TrafficSystem:readUpdateStream(streamId, timestamp, connection)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    readTrafficSystemFromStream(self.trafficSystemId, streamId, g_clientInterpDelay, g_packetPhysicsNetworkTime, g_client.tickDuration)
  end
end
function TrafficSystem:update(dt)
  setTrafficSystemDaytime(self.trafficSystemId, g_currentMission.environment.dayTime)
  if self.isEnabled then
    self:raiseActive()
  end
end
function TrafficSystem:updateTick(dt)
  self:raiseDirtyFlags(self.trafficSystemDirtyFlag)
end
function TrafficSystem:setNightTimeRange(nightStart, nightEnd)
  setTrafficSystemNightTimeRange(self.trafficSystemId, nightStart, nightEnd)
end
function TrafficSystem:setEnabled(state)
  setTrafficSystemEnabled(self.trafficSystemId, state)
  self.isEnabled = state
  if state then
    self:raiseActive()
  end
end
function TrafficSystem:reset()
  resetTrafficSystem(self.trafficSystemId)
end
function TrafficSystem:onIndoorStateChanged(isIndoor)
  setTrafficSystemUseOutdoorAudioSetup(self.trafficSystemId, not isIndoor)
end
function TrafficSystem:updateNightTimeRange()
  self:setNightTimeRange(g_currentMission.environment.daylight.logicalNightStart, g_currentMission.environment.daylight.logicalNightEnd)
end
function TrafficSystem:onDaylightChanged()
  self:updateNightTimeRange()
end
function TrafficSystem:getSplineByIndex(splineIndex)
  I3DUtil.interateRecursively(self.rootNodeId, function(self)
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
function TrafficSystem:consoleCommandToggleDebugRendering()
  self.debugIsEnabled = not self.debugIsEnabled
  if self.trafficSystemId ~= nil then
    setTrafficSystemRenderCollisionGeometry(self.trafficSystemId, self.debugIsEnabled)
  end
  local v3 = tostring(self.debugIsEnabled)
  return "TrafficSystem Debug: " .. v3
end
