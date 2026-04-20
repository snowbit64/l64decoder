-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITaskWaitForFilling = {}
local AITaskWaitForFilling_mt = Class(AITaskWaitForFilling, AITask)
function AITaskWaitForFilling.new(isServer, job, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.fillTypes = {}
  v3.vehicle = nil
  v3.fillUnitInfo = {}
  v3.waitTime = 0
  v3.waitDuration = 3000
  v3.isFullyLoaded = false
  return v3
end
function AITaskWaitForFilling:reset()
  self.vehicle = nil
  self.fillTypes = {}
  self.fillUnitInfo = {}
  self.waitTime = 0
  self.isFullyLoaded = false
  local v2 = v2:superClass()
  v2.reset(self)
end
function AITaskWaitForFilling:addAllowedFillType(fillType)
  self.fillTypes[fillType] = true
end
function AITaskWaitForFilling:update(dt)
  if self.isServer then
    if not self.isFullyLoaded then
      for v7, v8 in ipairs(self.fillUnitInfo) do
        local v11 = v8.vehicle:getFillUnitFillType(v8.fillUnitIndex)
        local v12 = v8.vehicle:getFillUnitFillLevel(v8.fillUnitIndex)
        local v13 = v8.vehicle:getFillUnitFreeCapacity(v8.fillUnitIndex)
        if 0 < v13 then
        end
        if 0 < v12 then
          -- if v0.fillTypes[v11] then goto L43 end
        end
        if not (v12 == 0) then
          continue
        end
      end
      if not v2 then
        v7 = AIMessageErrorNoValidFillTypeLoaded.new()
        v4:stopJob(...)
        return
      end
      -- if not v3 then goto L79 end
      self.isFullyLoaded = true
      self.waitTime = g_time + self.waitDuration
      return
    end
    if self.waitTime < g_time then
      self.isFinished = true
    end
  end
end
function AITaskWaitForFilling:start()
  local v2 = v2:superClass()
  v2.start(self)
  if self.isServer then
    self.isFullyLoaded = false
    for v4, v5 in ipairs(self.fillUnitInfo) do
      v6:aiPrepareLoading(v5.fillUnitIndex, self)
    end
  end
end
function AITaskWaitForFilling:stop(wasJobStopped)
  local v3 = v3:superClass()
  v3.stop(self, wasJobStopped)
  if self.isServer then
    for v5, v6 in ipairs(self.fillUnitInfo) do
      v7:aiFinishLoading(v6.fillUnitIndex, self)
    end
  end
end
function AITaskWaitForFilling:setVehicle(vehicle)
  self.vehicle = vehicle
end
function AITaskWaitForFilling:addFillUnits(vehicle, fillUnitIndex)
  table.insert(self.fillUnitInfo, {vehicle = vehicle, fillUnitIndex = fillUnitIndex})
end
