-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RainDropFactorTrigger = {}
local RainDropFactorTrigger_mt = Class(RainDropFactorTrigger)
function RainDropFactorTrigger.onCreate(v0, v1)
  local v2 = RainDropFactorTrigger.new()
  local v3 = v2:load(v1)
  if v3 then
    v3:addNonUpdateable(v2)
    return
  end
  v2:delete()
end
function RainDropFactorTrigger.new(mt)
  if mt == nil then
  end
  setmetatable(v1, mt)
  v1.triggerId = 0
  v1.nodeId = 0
  return v1
end
function RainDropFactorTrigger:load(nodeId)
  self.nodeId = nodeId
  local v4 = getUserAttribute(nodeId, "triggerIndex")
  local v2 = I3DUtil.indexToObject(...)
  self.triggerId = v2
  if self.triggerId == nil then
    self.triggerId = nodeId
  end
  addTrigger(self.triggerId, "triggerCallback", self)
  self.triggerObjects = {}
  self.isEnabled = true
  return true
end
function RainDropFactorTrigger:delete()
  removeTrigger(self.triggerId)
end
function RainDropFactorTrigger.triggerCallback(v0, v1, v2, v3, v4, v5, v6)
end
