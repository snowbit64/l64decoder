-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TransportMissionTrigger = {}
local TransportMissionTrigger_mt = Class(TransportMissionTrigger)
function TransportMissionTrigger.onCreate(v0, v1)
  local v4 = TransportMissionTrigger.new(v1)
  v2:addNonUpdateable(...)
end
function TransportMissionTrigger.new(id)
  setmetatable({}, u0)
  local v2 = getUserAttribute({triggerId = id}.triggerId, "index")
  addTrigger(id, "triggerCallback", {triggerId = id, index = v2})
  v2:addTransportMissionTrigger({triggerId = id, index = v2, isEnabled = true})
  {triggerId = id, index = v2, isEnabled = true}:setMission(nil)
  return {triggerId = id, index = v2, isEnabled = true}
end
function TransportMissionTrigger:delete()
  removeTrigger(self.triggerId)
  v1:removeTransportMissionTrigger(self)
end
function TransportMissionTrigger:setMission(mission)
  self.mission = mission
  self:onMissionUpdated()
end
function TransportMissionTrigger:onMissionUpdated()
  if self.mission ~= nil and self.mission.status ~= AbstractMission.STATUS_RUNNING then
  end
  v1(v2, v3)
end
function TransportMissionTrigger:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if self.isEnabled and self.mission ~= nil then
    if onEnter then
      v6:objectEnteredTrigger(self, otherId)
      return
    end
    if onLeave then
      v6:objectLeftTrigger(self, otherId)
    end
  end
end
