-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MapPerformanceTestUtil = {}
local MapPerformanceTestUtil_mt = Class(MapPerformanceTestUtil)
function MapPerformanceTestUtil.new()
  setmetatable({}, u0)
  v1:addUpdateable({isPrepared = false, isRunning = false})
  addConsoleCommand("gsBenchmarkMapPerformanceTest", "Runs a basic performance test for the current map", "runMapPerformanceTest", {isPrepared = false, isRunning = false})
  return {isPrepared = false, isRunning = false}
end
function MapPerformanceTestUtil:delete()
  if self.testCamera ~= nil then
    delete(self.testCamera)
  end
  removeConsoleCommand("gsBenchmarkMapPerformanceTest")
end
function MapPerformanceTestUtil:update(dt)
  if self.runTest and self.isPrepared then
    self.isRunning = true
    if self.testProps.xStepCurrent <= self.testProps.xStepCount and self.testProps.zStepCurrent <= self.testProps.zStepCount then
      local v4 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.testProps.xStart + self.testProps.xStepIncrement * (self.testProps.xStepCurrent - 1), 0, self.testProps.zStart + self.testProps.zStepIncrement * (self.testProps.zStepCurrent - 1))
      setTranslation(self.testCamera, self.testProps.xStart + self.testProps.xStepIncrement * (self.testProps.xStepCurrent - 1), v4 + 5, self.testProps.zStart + self.testProps.zStepIncrement * (self.testProps.zStepCurrent - 1))
      setRotation(self.testCamera, 0, 2 * math.pi * (self.testProps.angleCurrent - 1) / self.testProps.angleCount + math.pi, 0)
      setCamera(self.testCamera)
      self.testProps.measureTimeCurrent = self.testProps.measureTimeCurrent + dt
      if self.testProps.measureTimePerAngle < self.testProps.measureTimeCurrent then
        self.testProps.measureTimeCurrent = 0
        self.testData[self.testProps.xStepCurrent][self.testProps.zStepCurrent].meanFps[self.testProps.angleCurrent] = self.testData[self.testProps.xStepCurrent][self.testProps.zStepCurrent].totalFrames[self.testProps.angleCurrent] / self.testData[self.testProps.xStepCurrent][self.testProps.zStepCurrent].totalTime[self.testProps.angleCurrent]
        self.testProps.angleCurrent = self.testProps.angleCurrent + 1
        -- if v0.testProps.angleCount >= v0.testProps.angleCurrent then goto L349 end
        self.testProps.angleCurrent = 1
        self.testProps.zStepCurrent = self.testProps.zStepCurrent + 1
        -- if v0.testProps.zStepCount >= v0.testProps.zStepCurrent then goto L349 end
        self.testProps.zStepCurrent = 1
        self.testProps.xStepCurrent = self.testProps.xStepCurrent + 1
        -- if v0.testProps.xStepCount >= v0.testProps.xStepCurrent then goto L349 end
        self.runTest = false
        self.isRunning = false
        g_currentMission.player.walkingIsLocked = false
        self:writeTestDataToFile()
        return
      end
      self.testData[self.testProps.xStepCurrent][self.testProps.zStepCurrent].totalTime[self.testProps.angleCurrent] = self.testData[self.testProps.xStepCurrent][self.testProps.zStepCurrent].totalTime[self.testProps.angleCurrent] + 0.001 * dt
      self.testData[self.testProps.xStepCurrent][self.testProps.zStepCurrent].totalFrames[self.testProps.angleCurrent] = self.testData[self.testProps.xStepCurrent][self.testProps.zStepCurrent].totalFrames[self.testProps.angleCurrent] + 1
    end
  end
end
function MapPerformanceTestUtil:runMapPerformanceTest(xStart, zStart, xSize, zSize, xSteps, zSteps)
  local v8 = tonumber(xStart)
  local v7 = Utils.getNoNil(v8, 0)
  v8 = tonumber(zStart)
  v7 = Utils.getNoNil(v8, 0)
  v8 = tonumber(xSize)
  v7 = Utils.getNoNil(v8, 100)
  v8 = tonumber(zSize)
  v7 = Utils.getNoNil(v8, 100)
  v8 = tonumber(xSteps)
  v7 = Utils.getNoNil(v8, 3)
  v8 = tonumber(zSteps)
  v7 = Utils.getNoNil(v8, 3)
  self.runTest = not self.runTest
  if self.runTest then
    -- if v0.isPrepared then goto L381 end
    if g_currentMission.missionInfo ~= nil then
      v8 = tostring(g_currentMission.missionInfo.name)
      v8 = v8:getMapById(g_currentMission.missionInfo.mapId)
      if v8 ~= nil then
        local v9 = v9:isa(FSCareerMissionInfo)
        if v9 then
        end
      end
    end
    v8 = string.gsub(v7, " ", "")
    local v11 = getUserProfileAppPath()
    createFolder(v11 .. "mapPerformaceTests/")
    local v14 = tostring(v8)
    v14 = getDate("_%Y_%m_%d")
    deleteFile(v11 .. "mapPerformaceTests/" .. v14 .. v14 .. ".ppm")
    local v10 = createFile(v11 .. "mapPerformaceTests/" .. v14 .. v14 .. ".ppm", FileAccess.WRITE)
    self.fileId = v10
    if self.fileId ~= nil and self.fileId ~= 0 then
      for v13, v14 in pairs(g_currentMission.vehicles) do
        if not (v14.stopCurrentAIJob ~= nil) then
          continue
        end
        local v17 = AIMessageSuccessStoppedByUser.new()
        v14:stopCurrentAIJob(...)
      end
      if g_currentMission.controlledVehicle ~= nil then
        v10:leaveVehicle()
        g_currentMission.player.walkingIsLocked = true
      end
      v10 = createCamera("MapPerformanceTestCamera", 1.0471975511965976, 0.15, 6000)
      self.testCamera = v10
      v11 = getRootNode()
      link(v11, self.testCamera)
      self.testProps = {angleCount = 8, angleCurrent = 1, measureTimePerAngle = 1000, measureTimeCurrent = 0, xStart = xStart + xSize, xEnd = xStart - xSize, zStart = zStart + zSize, zEnd = zStart - zSize, xStepCount = xSteps, zStepCount = zSteps, xStepIncrement = (self.testProps.xEnd - self.testProps.xStart) / (self.testProps.xStepCount - 1), zStepIncrement = (self.testProps.zEnd - self.testProps.zStart) / (self.testProps.zStepCount - 1), xStepCurrent = 1, zStepCurrent = 1}
      self.testData = {}
      -- TODO: structure LOP_FORNPREP (pc 304, target 362)
      self.testData[1] = {}
      for v15 = 1, self.testProps.zStepCount do
        -- TODO: structure LOP_FORNPREP (pc 337, target 351)
        {totalTime = {}, totalFrames = {}, meanFps = {}}.totalTime[1] = 0
        {totalTime = {}, totalFrames = {}, meanFps = {}}.totalFrames[1] = 0
        {totalTime = {}, totalFrames = {}, meanFps = {}}.meanFps[1] = 0
        -- TODO: structure LOP_FORNLOOP (pc 350, target 338)
        table.insert(self.testData[v12], {totalTime = {}, totalFrames = {}, meanFps = {}})
        -- TODO: structure LOP_FORNLOOP (pc 360, target 317)
      end
      self.isPrepared = true
      -- goto L381  (LOP_JUMP +15)
    end
    v15 = tostring(v9)
    print("Could not create file '" .. v15 .. "'. Aborting MapPerformanceTestUtil")
  else
    self.isPrepared = false
  end
  if self.runTest then
    return "PerformanceTest started"
  end
  return "PerformanceTest stopped"
end
function MapPerformanceTestUtil:writeTestDataToFile()
  if self.fileId ~= nil and self.fileId ~= 0 then
    local v5 = string.format("P3\n%d %d\n#comment, could contain PC specs\n255\n", 512, 512)
    fileWrite(...)
    -- TODO: structure LOP_FORNPREP (pc 27, target 46)
    {}[1] = {}
    for v9 = 1, 512 do
      v3[v6][v9] = {0, 0, 0}
      -- TODO: structure LOP_FORNLOOP (pc 44, target 35)
    end
    -- TODO: structure LOP_FORNPREP (pc 52, target 226)
    for v10 = 1, self.testProps.zStepCount do
      local v12 = math.floor(v7 / v2 * 256 + 256 + 0.5)
      local v13 = math.floor((self.testProps.zStart + self.testProps.zStepIncrement * (v10 - 1)) / v2 * 256 + 256 + 0.5)
      -- TODO: structure LOP_FORNPREP (pc 104, target 212)
      local v21 = math.sin(2 * math.pi * (1 - 1) / self.testProps.angleCount)
      local v18 = math.floor(v12 + v21 + 0.5)
      local v22 = math.cos(2 * math.pi * (1 - 1) / self.testProps.angleCount)
      local v19 = math.floor(v13 + v22 + 0.5)
      if 60 < self.testData[v6][v10].meanFps[1] then
        local v23 = math.min(60, self.testData[v6][v10].meanFps[1] - 60)
        v21 = math.max(...)
        v3[v19][v18][1] = 255 * (1 - v21 / 60)
        v3[v19][v18][2] = 255
        v3[v19][v18][3] = 0
      else
        v21 = math.max(0, self.testData[v6][v10].meanFps[1])
        v3[v19][v18][1] = 255
        v3[v19][v18][2] = 255 * v21 / 60
        v3[v19][v18][3] = 0
      end
      -- TODO: structure LOP_FORNLOOP (pc 211, target 105)
      v3[v13][v12][1] = 125
      v3[v13][v12][2] = 125
      v3[v13][v12][3] = 125
      -- TODO: structure LOP_FORNLOOP (pc 224, target 71)
    end
    -- TODO: structure LOP_FORNPREP (pc 229, target 260)
    -- TODO: structure LOP_FORNPREP (pc 234, target 251)
    v12 = string.format("%d %d %d ", v3[1][1][1], v3[1][1][2], v3[1][1][3])
    -- TODO: structure LOP_FORNLOOP (pc 250, target 235)
    fileWrite(self.fileId, "" .. v12 .. "\n")
    -- TODO: structure LOP_FORNLOOP (pc 259, target 230)
    self.testProps = {}
    return
  end
  print("Error: Could not write to file")
end
