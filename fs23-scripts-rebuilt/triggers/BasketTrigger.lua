-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BasketTrigger = {threePointDistanceThreshold = 6}
local BasketTrigger_mt = Class(BasketTrigger)
function BasketTrigger.onCreate(v0, v1)
  local v2 = BasketTrigger.new()
  local v3 = v2:load(v1)
  if v3 then
    v3:addNonUpdateable(v2)
    return
  end
  v2:delete()
end
function BasketTrigger.new(mt)
  if mt == nil then
  end
  setmetatable(v1, mt)
  v1.triggerId = 0
  v1.nodeId = 0
  return v1
end
function BasketTrigger:load(nodeId)
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
function BasketTrigger:delete()
  removeTrigger(self.triggerId)
end
function BasketTrigger:triggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if self.isEnabled then
    if onEnter then
      local v7 = v7:getNodeObject(otherActorId)
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L28
      self.triggerObjects[otherActorId] = true
      return
    end
    if onLeave and self.triggerObjects[otherActorId] then
      self.triggerObjects[otherActorId] = false
    end
  end
end
