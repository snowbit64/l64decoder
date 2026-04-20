-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ElkTrigger = {}
local ElkTrigger_mt = Class(ElkTrigger)
function ElkTrigger.onCreate(v0, v1)
  local v4 = ElkTrigger.new(v1)
  v2:addUpdateable(...)
end
function ElkTrigger.new(nodeId)
  setmetatable({}, u0)
  local v2 = getChildAt(nodeId, 0)
  addTrigger({nodeId = nodeId, triggerId = v2}.triggerId, "triggerCallback", {nodeId = nodeId, triggerId = v2})
  v2 = getChildAt(nodeId, 1)
  v2 = getChildAt(nodeId, 2)
  v2 = createSample("elkSound")
  loadSample({nodeId = nodeId, triggerId = v2, motherElkId = v2, splinesNode = v2, inProgress = false, time = 0, duration1 = 10000, duration2 = 14000, nextTriggerTime = 0, elkSound = v2}.elkSound, "data/maps/sounds/elk.wav", false)
  local v5 = getNumOfChildren({nodeId = nodeId, triggerId = v2, motherElkId = v2, splinesNode = v2, inProgress = false, time = 0, duration1 = 10000, duration2 = 14000, nextTriggerTime = 0, elkSound = v2, playerInRange = false, elks = {}}.splinesNode)
  -- TODO: structure LOP_FORNPREP (pc 80, target 115)
  v5 = getChildAt({nodeId = nodeId, triggerId = v2, motherElkId = v2, splinesNode = v2, inProgress = false, time = 0, duration1 = 10000, duration2 = 14000, nextTriggerTime = 0, elkSound = v2, playerInRange = false, elks = {}}.splinesNode, 1 - 1)
  local v6 = clone({nodeId = nodeId, triggerId = v2, motherElkId = v2, splinesNode = v2, inProgress = false, time = 0, duration1 = 10000, duration2 = 14000, nextTriggerTime = 0, elkSound = v2, playerInRange = false, elks = {}}.motherElkId, true)
  local v7 = clone({nodeId = nodeId, triggerId = v2, motherElkId = v2, splinesNode = v2, inProgress = false, time = 0, duration1 = 10000, duration2 = 14000, nextTriggerTime = 0, elkSound = v2, playerInRange = false, elks = {}}.motherElkId, true)
  table.insert({nodeId = nodeId, triggerId = v2, motherElkId = v2, splinesNode = v2, inProgress = false, time = 0, duration1 = 10000, duration2 = 14000, nextTriggerTime = 0, elkSound = v2, playerInRange = false, elks = {}}.elks, {elkId1 = v6, elkId2 = v7, splineId = v5})
  -- TODO: structure LOP_FORNLOOP (pc 114, target 81)
  return {nodeId = nodeId, triggerId = v2, motherElkId = v2, splinesNode = v2, inProgress = false, time = 0, duration1 = 10000, duration2 = 14000, nextTriggerTime = 0, elkSound = v2, playerInRange = false, elks = {}}
end
function ElkTrigger:delete()
  removeTrigger(self.triggerId)
  delete(self.elkSound)
end
function ElkTrigger:update(dt)
  if not self.inProgress then
    -- if not v0.playerInRange then goto L232 end
    -- if 43200000 >= g_currentMission.environment.dayTime then goto L232 end
    -- if g_currentMission.environment.dayTime >= 43260000 then goto L232 end
    -- if v0.nextTriggerTime >= g_currentMission.time then goto L232 end
    self.inProgress = true
    self.splinePos = 0
    self.time = 0
    for v5, v6 in pairs(self.elks) do
      setTranslation(v6.elkId1, 0, 0, 0)
      setTranslation(v6.elkId2, 0, 0, 0)
      setVisibility(v6.elkId1, true)
      setVisibility(v6.elkId2, true)
    end
    playSample(self.elkSound, 1, 1, 0, 0, 0)
    return
  end
  self.time = self.time + dt
  for v5, v6 in pairs(self.elks) do
    local v7 = math.min(self.time / self.duration1, 1)
    local v8, v9, v10 = getSplinePosition(v6.splineId, v7)
    local v11, v12, v13 = getSplineOrientation(v6.splineId, v7, 0, -1, 0)
    setTranslation(v6.elkId1, v8, v9, v10)
    setRotation(v6.elkId1, v11, v12, v13)
    local v14 = math.min(self.time / self.duration2, 1)
    local v14, v15, v16 = getSplinePosition(v6.splineId, v14)
    v14, v15, v16 = getSplineOrientation(v6.splineId, v14, 0, -1, 0)
    setTranslation(v6.elkId2, v14, v15, v16)
    setRotation(v6.elkId2, v14, v15, v16)
  end
  if self.duration2 < self.time then
    self.inProgress = false
    for v5, v6 in pairs(self.elks) do
      setTranslation(v6.elkId1, 0, 0, 0)
      setTranslation(v6.elkId2, 0, 0, 0)
      setVisibility(v6.elkId1, false)
      setVisibility(v6.elkId2, false)
      self.nextTriggerTime = g_currentMission.time + 10000
    end
  end
end
function ElkTrigger:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if onEnter then
    -- if not g_currentMission.controlPlayer then goto L31 end
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L31
    -- if v2 ~= g_currentMission.player.rootNode then goto L31 end
    self.playerInRange = true
    return
  end
  if onLeave and g_currentMission.controlPlayer and g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
    self.playerInRange = false
  end
end
