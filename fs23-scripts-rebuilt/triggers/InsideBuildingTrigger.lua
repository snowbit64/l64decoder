-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InsideBuildingTrigger = {}
local InsideBuildingTrigger_mt = Class(InsideBuildingTrigger)
function InsideBuildingTrigger.onCreate(_, id)
  local trigger = InsideBuildingTrigger.new()
  local v3 = trigger:load(id)
  if v3 then
    v3:addNonUpdateable(trigger)
    return
  end
  trigger:delete()
end
function InsideBuildingTrigger.new(customMt)
  if not customMt then
  end
  v2(v3, v4)
  v1.triggerId = 0
  v1.nodeId = 0
  return v1
end
function InsideBuildingTrigger:load(nodeId)
  self.nodeId = nodeId
  local v4 = getUserAttribute(nodeId, "triggerIndex")
  local v2 = I3DUtil.indexToObject(...)
  self.triggerId = v2
  if self.triggerId == nil then
    self.triggerId = nodeId
  end
  addTrigger(self.triggerId, "insideBuildingTriggerCallback", self)
  self.isEnabled = true
  return true
end
function InsideBuildingTrigger:delete()
  removeTrigger(self.triggerId)
end
function InsideBuildingTrigger:insideBuildingTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if g_currentMission.player ~= nil and g_currentMission.player.rootNode == otherActorId and self.isEnabled then
    if onEnter then
      v7:setIsInsideBuilding(true)
      return
    end
    if onLeave then
      v7:setIsInsideBuilding(false)
    end
  end
end
