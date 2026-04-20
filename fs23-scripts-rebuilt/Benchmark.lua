-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Benchmark = {}
local Benchmark_mt = Class(Benchmark)
function Benchmark.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.isRunning = false
  v1.currentCamPath = nil
  v1.hasFinished = false
  if g_isDevelopmentVersion then
    addConsoleCommand("gsBenchmark", "Starts a benchmark sequence with camera flight and working vehicles", "consoleCommandBenchmark", v1)
  end
  return v1
end
function Benchmark.delete(v0)
  removeConsoleCommand("gsBenchmark")
end
function Benchmark:load()
  local v1 = Utils.getFilename(g_currentMission.missionInfo.mapXMLFilename, g_currentMission.baseDirectory)
  local v2 = loadXMLFile("MapXML", v1)
  self.vehicles = {}
  self.idToVehicle = {}
  self.delayToAiVehicle = {}
  self.fields = {}
  self.camPaths = {}
  local v3 = getXMLString(v2, "map.benchmark#filename")
  if v3 ~= nil then
    local v4 = Utils.getFilename(v3, g_currentMission.baseDirectory)
    v4 = XMLFile.load("benchmarkXml", v4)
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L142
    log("Loading benchmark config")
    local v6 = v4:getFloat("benchmark.camera#fieldOfView")
    log("camera field of view", v6 or 70)
    local v8 = math.rad(v6 or 70)
    v6 = createCamera("benchmarkCam", v8, 1, 10000)
    self.benchmarkCam = v6
    local v7 = getRootNode()
    link(v7, self.benchmarkCam)
    v7 = v4:getString("benchmark.vehicles#xmlFilename")
    v6 = Utils.getFilename(v7, g_currentMission.baseDirectory)
    self.benmarkVehiclesXmlFilepath = v6
    v4:iterate("benchmark.aiStarts.aiStart", function(self, v1)
      local v2 = v2:getInt(v1 .. "#vehicleId")
      local v4 = v4:getFloat(v1 .. "#startDelay")
      if u1.delayToAiVehicle[v4 * 1000] == nil then
        u1.delayToAiVehicle[v4 * 1000] = {}
      end
      table.insert(u1.delayToAiVehicle[v3], v2)
    end)
    v4:iterate("benchmark.fields.field", function(self, v1)
      local v2 = v2:getInt(v1 .. "#number")
      local v3 = v3:getString(v1 .. "#fruitType")
      local v4 = v4:getInt(v1 .. "#growthState")
      table.insert(u1.fields, {v2, v3, v4})
    end)
    v4:iterate("benchmark.cameraPaths.cameraPath", function(self, v1)
      local v3 = v3:getString(v1 .. "#i3dFilename")
      local v2 = Utils.getFilename(v3, g_currentMission.baseDirectory)
      v3 = v3:getString(v1 .. "#speedScale", 1)
      local v4 = CameraPath.createFromI3D(v2, v3, u1.benchmarkCam)
      table.insert(u1.camPaths, v4)
    end)
    if #self.camPaths == 0 then
      Logging.error("At least one camera path has to be defined in %s", v4)
    end
    v4:delete()
  else
    Logging.error("No benchmark xml defined (map.benchmark#filename) in %s", g_currentMission.missionInfo.mapXMLFilename)
    return false
  end
  return true
end
function Benchmark:startBenchmark()
  g_currentMission.player.walkingIsLocked = true
  v1:setIsVisible(false)
  self:setupFields()
  self:setupVehicles()
end
function Benchmark:setupFields()
  log("Setting up fields with fruits")
  v1:consoleCommandBuyAllFarmlands()
  -- TODO: structure LOP_FORNPREP (pc 14, target 39)
  local v4, v5, v6, v7, v8, v9, v10, v11, v12, v13 = unpack(self.fields[1])
  v14:consoleCommandSetFieldFruit(v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, true)
  -- TODO: structure LOP_FORNLOOP (pc 38, target 15)
end
function Benchmark:setupVehicles()
  v1:consoleCommandVehicleRemoveAll()
  log("deleted all vehicles")
  log("loading vehicles from", self.benmarkVehiclesXmlFilepath)
  VehicleLoadingUtil.loadVehiclesFromSavegame(self.benmarkVehiclesXmlFilepath, false, g_currentMission.missionInfo, g_currentMission.missionDynamicInfo, self.loadingVehiclesFinished, self, {self.benmarkVehiclesXmlFilepath, false})
end
function Benchmark:loadingVehiclesFinished(asyncCallbackArguments, vehiclesById)
  log("vehicle loading finished")
  self.idToVehicle = vehiclesById
  for v6, v7 in pairs(vehiclesById) do
    local v9 = v7:getFullName()
    log(...)
    if v7.startMotor ~= nil then
      v7:startMotor()
    end
    if not (v7.setBeaconLightsVisibility ~= nil) then
      continue
    end
    v7:setBeaconLightsVisibility(true, true)
    v7:setTurnLightState(Lights.TURNLIGHT_HAZARD, true)
    v7:setLightsTypesMask(Lights.LIGHT_TYPE_HIGHBEAM + Lights.LIGHT_TYPE_WORK_FRONT + Lights.LIGHT_TYPE_WORK_BACK, true)
  end
  self.time = 0
  self.isRunning = true
end
function Benchmark:finishBenchmark()
  if self.currentCamPath then
    v1:deactivate()
    self.currentCamPath = nil
  end
  if self.benchmarkCam ~= nil then
    delete(self.benchmarkCam)
  end
  for v4, v5 in pairs(self.idToVehicle) do
    if not v5.stopCurrentAIJob then
      continue
    end
    local v8 = AIMessageSuccessStoppedByUser.new()
    v5:stopCurrentAIJob(...)
  end
  log("Finished benchmark")
  self.isRunning = false
  self.hasFinished = true
  self.time = 0
  g_currentMission.player.walkingIsLocked = false
  v1:setIsVisible(true)
end
function Benchmark:update(dt)
  if self.isRunning then
    self.time = self.time + dt
    for v5, v6 in pairs(self.delayToAiVehicle) do
      if not (v5 < self.time) then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 21, target 48)
      if self.idToVehicle[v6[1]] then
        local v13 = self.idToVehicle[v6[1]]:getFullName()
        log(...)
        self.idToVehicle[v6[1]]:startAIVehicle(nil, nil, self.idToVehicle[v6[1]].ownerFarmId)
      else
        log("unknown vehicle id", v6[1])
      end
      -- TODO: structure LOP_FORNLOOP (pc 47, target 22)
      self.delayToAiVehicle[v5] = nil
    end
    if self.currentCamPath == nil then
      v2 = table.remove(self.camPaths, 1)
      self.currentCamPath = v2
      if self.currentCamPath ~= nil then
        v4 = string.format("starting next cam path, duration %.3fs", self.currentCamPath.maxTime * 1 / self.currentCamPath.speedScale / 1000)
        log(...)
        v3:activate()
        return
      end
      log("no more camera paths")
      self:finishBenchmark()
      return
    end
    v2:update(dt)
    if self.currentCamPath.maxTime <= self.currentCamPath.time then
      log("finished camera path")
      v2:deactivate()
      self.currentCamPath = nil
    end
  end
end
function Benchmark:consoleCommandBenchmark()
  if g_currentMission == nil then
    return "Error: Cannot run benchmark, load a map first"
  end
  if g_currentMission.missionDynamicInfo.isMultiplayer then
    return "Error: No available in Multiplayer"
  end
  if self.isRunning then
    self:finishBenchmark()
  end
  local v1 = self:load()
  if v1 then
    self:startBenchmark()
    return "Started benchmark"
  end
  return "Error: Cannot run benchmark, errors in config"
end
