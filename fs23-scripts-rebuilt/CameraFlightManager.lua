-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CameraFlightManager = {}
local CameraFlightManager_mt = Class(CameraFlightManager)
function CameraFlightManager.new()
  setmetatable({}, u0)
  return {cameraFlightIsActive = false, abortCameraFlight = false}
end
function CameraFlightManager:load(xmlFile)
  self.cameraFlights = {}
  while true do
    v3 = string.format("map.cameraFlights.cameraFlight(%d)", v2)
    v4 = hasXMLProperty(xmlFile, v3)
    if not v4 then
      break
    end
    v4 = getXMLString(xmlFile, v3 .. "#type")
    v5 = getXMLFloat(xmlFile, v3 .. "#speedScale")
    v6 = getXMLString(xmlFile, v3 .. "#filename")
    v7 = Utils.getFilename(v6, self.baseDirectory)
    v8 = createCamera("cameraFlight_" .. v4, 1.0471975511965976, 1, 10000)
    v9 = CameraPath.createFromI3D(v7, v5, v8)
    if self.cameraFlights[v4] == nil then
      self.cameraFlights[v4] = v9
    end
  end
  v4:registerActionEvent(InputAction.MENU, self, function()
    u0.abortCameraFlight = true
    self:removeActionEventsByTarget(u0)
  end, false, true, false, true)
end
function CameraFlightManager:delete()
  for v4, v5 in pairs(self.cameraFlights) do
    v5:delete()
  end
end
function CameraFlightManager:update(dt)
  if g_server ~= nil and g_client ~= nil and self.cameraFlights.careerStart ~= nil and not self.careerStartFlightPlayed then
    if g_currentMission.controlledVehicle ~= nil then
      self.abortCameraFlight = true
    end
    if self.abortCameraFlight then
      v2:deactivate()
      self.careerStartFlightPlayed = true
      g_currentMission.player.walkingIsLocked = false
      return
    end
    local v4 = v4:getIsGuiVisible()
    if not v4 then
      if v2.time == 0 then
        v2:activate()
      end
      v2:update(dt)
      g_currentMission.player.walkingIsLocked = true
      if v2.maxTime <= v2.time then
        self.careerStartFlightPlayed = true
        v2:deactivate()
        g_currentMission.player.walkingIsLocked = false
      end
    end
  end
end
