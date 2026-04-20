-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SlideDoorTrigger = {}
local SlideDoorTrigger_mt = Class(SlideDoorTrigger)
function SlideDoorTrigger.onCreate(v0, v1)
  local v4 = SlideDoorTrigger.new(v1)
  v2:addUpdateable(...)
end
function SlideDoorTrigger.new(triggerId)
  setmetatable({}, u0)
  addTrigger(triggerId, "triggerCallback", {triggerId = triggerId})
  local num = getNumOfChildren(triggerId)
  -- TODO: structure LOP_FORNPREP (pc 26, target 110)
  local v7 = getChildAt(triggerId, 1 - 1)
  local v7, v8, v9 = getTranslation({node = v7}.node)
  local v11 = getUserAttribute({node = v7, startX = v7, startY = v8, startZ = v9}.node, "translateX")
  local v10 = Utils.getNoNil(v11, "0")
  v9 = tonumber(...)
  v11 = getUserAttribute({node = v7, startX = v7, startY = v8, startZ = v9, endX = {node = v7, startX = v7, startY = v8, startZ = v9}.startX + v9}.node, "translateY")
  v10 = Utils.getNoNil(v11, "0")
  v9 = tonumber(...)
  v11 = getUserAttribute({node = v7, startX = v7, startY = v8, startZ = v9, endX = {node = v7, startX = v7, startY = v8, startZ = v9}.startX + v9, endY = {node = v7, startX = v7, startY = v8, startZ = v9, endX = {node = v7, startX = v7, startY = v8, startZ = v9}.startX + v9}.startY + v9}.node, "translateZ")
  v10 = Utils.getNoNil(v11, "0")
  v9 = tonumber(...)
  table.insert({triggerId = triggerId, slideDoors = {}}.slideDoors, {node = v7, startX = v7, startY = v8, startZ = v9, endX = {node = v7, startX = v7, startY = v8, startZ = v9}.startX + v9, endY = {node = v7, startX = v7, startY = v8, startZ = v9, endX = {node = v7, startX = v7, startY = v8, startZ = v9}.startX + v9}.startY + v9, endZ = {node = v7, startX = v7, startY = v8, startZ = v9, endX = {node = v7, startX = v7, startY = v8, startZ = v9}.startX + v9, endY = {node = v7, startX = v7, startY = v8, startZ = v9, endX = {node = v7, startX = v7, startY = v8, startZ = v9}.startX + v9}.startY + v9}.startZ + v9})
  -- TODO: structure LOP_FORNLOOP (pc 109, target 27)
  local v5 = getUserAttribute(triggerId, "speed")
  local v4 = Utils.getNoNil(v5, "0.001")
  local v3 = tonumber(...)
  v5 = getUserAttribute(triggerId, "pauseDuration")
  v4 = Utils.getNoNil(v5, "2000")
  v3 = tonumber(...)
  return {triggerId = triggerId, slideDoors = {}, opening = false, closing = false, pausing = false, playerLeft = false, speed = v3, pauseDuration = v3, pauseTime = {triggerId = triggerId, slideDoors = {}, opening = false, closing = false, pausing = false, playerLeft = false, speed = v3, pauseDuration = v3}.pauseDuration, doorPos = 0, isEnabled = true}
end
function SlideDoorTrigger:delete()
  if self.triggerId ~= nil then
    removeTrigger(self.triggerId)
    self.triggerId = nil
  end
end
function SlideDoorTrigger:update(dt)
  if self.isEnabled then
    if self.pausing then
      self.pauseTime = self.pauseTime - dt
      if self.pauseTime <= 0 then
        self.pausing = false
        self.closing = true
      end
    end
    if self.opening then
      self.doorPos = self.doorPos + self.speed * dt
      if 1 < self.doorPos then
        self.doorPos = 1
        self.opening = false
        if self.playerLeft then
          self.pausing = true
          self.pauseTime = self.pauseDuration
        end
      end
    end
    if self.closing then
      self.doorPos = self.doorPos - self.speed * dt
      if self.doorPos < 0 then
        self.doorPos = 0
        self.closing = false
      end
    end
    if v2 then
      for v6, v7 in pairs(self.slideDoors) do
        setTranslation(v7.node, (1 - self.doorPos) * v7.startX + self.doorPos * v7.endX, (1 - self.doorPos) * v7.startY + self.doorPos * v7.endY, (1 - self.doorPos) * v7.startZ + self.doorPos * v7.endZ)
      end
    end
  end
end
function SlideDoorTrigger:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if self.isEnabled then
    if not onEnter then
      -- if not v4 then goto L40 end
    end
    if g_currentMission.players[otherId] ~= nil then
      if onEnter then
        self.playerLeft = false
        if self.pausing then
          self.pausing = false
        end
        self.opening = true
        self.closing = false
        return
      end
      self.playerLeft = true
      if not self.opening then
        self.pausing = true
        self.pauseTime = self.pauseDuration
      end
    end
  end
end
