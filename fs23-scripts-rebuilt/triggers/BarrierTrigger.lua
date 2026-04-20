-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Barrier = {}
local Barrier_mt = Class(Barrier)
function Barrier.onCreate(v0, v1)
  local v4 = Barrier.new(v1)
  v2:addUpdateable(...)
end
function Barrier.new(id, customMt)
  if not customMt then
  end
  v3(v4, v5)
  v2.triggerId = id
  addTrigger(id, "triggerCallback", v2)
  v2.barriers = {}
  local v3 = getNumOfChildren(id)
  -- TODO: structure LOP_FORNPREP (pc 28, target 59)
  local v7 = getChildAt(id, 0)
  if v7 ~= 0 then
    local v8 = getNumOfChildren(id)
    if 1 <= v8 then
      v8 = getChildAt(v7, 0)
      if v8 ~= 0 then
        table.insert(v2.barriers, v8)
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 58, target 29)
  v2.isEnabled = true
  v2.count = 0
  v2.angle = 90
  v2.maxAngle = 90
  v2.minAngle = 0
  return v2
end
function Barrier:delete()
  removeTrigger(self.triggerId)
end
function Barrier:update(dt)
  if 0 < self.count then
    if self.angle < self.maxAngle then
      self.angle = self.angle + dt * 0.001 * 60
    end
    -- if v0.maxAngle >= v0.angle then goto L54 end
    self.angle = self.maxAngle
  else
    if self.minAngle < self.angle then
      self.angle = self.angle - dt * 0.001 * 60
    end
    if self.angle < self.minAngle then
      self.angle = self.minAngle
    end
  end
  if v2 ~= self.angle then
    local v6 = table.getn(self.barriers)
    -- TODO: structure LOP_FORNPREP (pc 66, target 81)
    local v10 = MathUtil.degToRad(self.angle)
    setRotation(...)
    -- TODO: structure LOP_FORNLOOP (pc 80, target 67)
  end
end
function Barrier:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if onEnter and self.isEnabled then
    self.count = self.count + 1
    return
  end
  if onLeave then
    self.count = self.count - 1
  end
end
