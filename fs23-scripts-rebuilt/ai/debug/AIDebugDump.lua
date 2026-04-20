-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDebugDump = {}
local AIDebugDump_mt = Class(AIDebugDump)
function AIDebugDump.new(vehicle, agentId, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.vehicle = vehicle
  v3.agentId = agentId
  v3.dumpedAgent = false
  return v3
end
function AIDebugDump:delete()
  self:stopRecording()
end
function AIDebugDump:setTarget(x, y, z, dirX, dirY, dirZ, cx, cy, cz, cDirX, cDirY, cDirZ)
  if self.dump ~= nil then
    table.insert(self.dump.targets, {frames = {}, target = {x, y, z, dirX, dirY, dirZ}, start = {cx, cy, cz, cDirX, cDirY, cDirZ}})
  end
end
function AIDebugDump:addData(dt, x, y, z, dirX, dirY, dirZ, lastSpeed, curvature, maxSpeed, status)
  if self.dump ~= nil then
    table.insert(self.dump.targets[#self.dump.targets].frames, {dt = dt, pos = {x, y, z}, dir = {dirX, dirY, dirZ}, lastSpeed = lastSpeed, curvature = curvature, speed = maxSpeed, status = status})
    if not self.dumpedAgent then
      self.dumpedAgent = true
      dumpVehicleNavigationAgent(self.agentId, self.folder .. self.filename .. ".dat")
    end
  end
end
function AIDebugDump:startRecording(minTurningRadius, allowBackwards, width, length, lengthOffset, frontOffset, maxBrakeAcceleration, maxCentripedalAcceleration)
  if self.dump == nil then
    self.dumpedAgent = false
    local v12 = getUserProfileAppPath()
    self.folder = v12 .. "aiSystem/"
    createFolder(self.folder)
    v12 = getDate("%Y_%m_%d_%H_%M_%S")
    self.filename = v12 .. "_dump"
    beginVehicleNavigationDebugLogging(self.agentId)
    self.dump = {minTurningRadius = minTurningRadius, allowBackwards = allowBackwards, width = width, length = length, lengthOffset = lengthOffset, frontOffset = frontOffset, maxBrakeAcceleration = maxBrakeAcceleration, maxCentripedalAcceleration = maxCentripedalAcceleration, targets = {}}
  end
end
function AIDebugDump:stopRecording()
  if self.dump ~= nil then
    Logging.info("Writing debug dump...")
    endVehicleNavigationDebugLogging(self.agentId, self.folder .. self.filename .. ".log")
    local v5 = createXMLFile("dumpData", self.folder .. self.filename .. ".xml", "dumpData")
    setXMLString(v5, "dumpData.vehicle", self.vehicle.configFileName)
    setXMLFloat(v5, "dumpData.settings#minTurningRadius", self.dump.minTurningRadius)
    setXMLBool(v5, "dumpData.settings#allowBackwards", self.dump.allowBackwards)
    setXMLFloat(v5, "dumpData.settings#width", self.dump.width)
    setXMLFloat(v5, "dumpData.settings#length", self.dump.length)
    setXMLFloat(v5, "dumpData.settings#lengthOffset", self.dump.lengthOffset)
    setXMLFloat(v5, "dumpData.settings#frontOffset", self.dump.frontOffset)
    setXMLFloat(v5, "dumpData.settings#maxBrakeAcceleration", self.dump.maxBrakeAcceleration)
    setXMLFloat(v5, "dumpData.settings#maxCentripedalAcceleration", self.dump.maxCentripedalAcceleration)
    for v10, v11 in ipairs(self.dump.targets) do
      local v12 = string.format("dumpData.targets.target(%d)", v10 - 1)
      setXMLFloat(v5, v12 .. ".start#x", v11.start[1])
      setXMLFloat(v5, v12 .. ".start#y", v11.start[2])
      setXMLFloat(v5, v12 .. ".start#z", v11.start[3])
      setXMLFloat(v5, v12 .. ".start#xDir", v11.start[4])
      setXMLFloat(v5, v12 .. ".start#yDir", v11.start[5])
      setXMLFloat(v5, v12 .. ".start#zDir", v11.start[6])
      setXMLFloat(v5, v12 .. ".target#x", v11.target[1])
      setXMLFloat(v5, v12 .. ".target#y", v11.target[2])
      setXMLFloat(v5, v12 .. ".target#z", v11.target[3])
      setXMLFloat(v5, v12 .. ".target#xDir", v11.target[4])
      setXMLFloat(v5, v12 .. ".target#yDir", v11.target[5])
      setXMLFloat(v5, v12 .. ".target#zDir", v11.target[6])
      for v16, v17 in ipairs(v11.frames) do
        local v18 = string.format("%s.frames.frame(%d)", v12, v16 - 1)
        if v6[v17.status] == nil then
          local v20 = AISystem.getAgentStateName(v17.status)
          v6[v17.status] = v20
        end
        setXMLString(v5, v18 .. "#status", v19)
        setXMLFloat(v5, v18 .. "#speed", v17.speed)
        setXMLFloat(v5, v18 .. "#curvature", v17.curvature)
        setXMLFloat(v5, v18 .. "#dt", v17.dt)
        setXMLFloat(v5, v18 .. "#x", v17.pos[1])
        setXMLFloat(v5, v18 .. "#y", v17.pos[2])
        setXMLFloat(v5, v18 .. "#z", v17.pos[3])
        setXMLFloat(v5, v18 .. "#dirX", v17.dir[1])
        setXMLFloat(v5, v18 .. "#dirY", v17.dir[2])
        setXMLFloat(v5, v18 .. "#dirZ", v17.dir[3])
        setXMLFloat(v5, v18 .. "#lastSpeed", v17.lastSpeed)
      end
    end
    saveXMLFile(v5)
    delete(v5)
  end
end
