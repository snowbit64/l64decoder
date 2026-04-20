-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TimedVisibility = {}
local TimedVisibility_mt = Class(TimedVisibility)
function TimedVisibility.onCreate(id)
  local v3 = TimedVisibility.new(id)
  v1:addNonUpdateable(...)
end
function TimedVisibility.new(id)
  setmetatable({}, u0)
  local v3 = getUserAttribute({id = id}.id, "startHour")
  local v2 = Utils.getNoNil(v3, 0)
  v3 = getUserAttribute({id = id, startHour = v2}.id, "endHour")
  v2 = Utils.getNoNil(v3, 24)
  if {id = id, startHour = v2, endHour = v2}.endHour >= {id = id, startHour = v2, endHour = v2}.startHour then
  end
  v1.wrap = true
  if g_currentMission ~= nil and g_currentMission.environment ~= nil then
    v1:hourChanged()
    v2:subscribe(MessageType.HOUR_CHANGED, v1.hourChanged, v1)
  end
  return v1
end
function TimedVisibility.delete(v0)
  v1:unsubscribeAll(v0)
end
function TimedVisibility:hourChanged()
  if self.wrap then
    if self.startHour > g_currentMission.environment.currentHour and g_currentMission.environment.currentHour >= self.endHour then
    end
    v2(v3, v4)
    return
  end
  if self.startHour <= v1 and v1 >= self.endHour then
  end
  v2(v3, v4)
end
