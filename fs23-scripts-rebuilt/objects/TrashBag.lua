-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TrashBag = {}
local TrashBag_mt = Class(TrashBag)
function TrashBag.onCreate(id)
  local v3 = TrashBag.new(id)
  v1:addNonUpdateable(...)
end
function TrashBag.new(id)
  setmetatable({}, u0)
  local v2 = math.random()
  if 0.5 < v2 then
    setVisibility({id = id}.id, true)
  else
    setVisibility({id = id}.id, false)
  end
  v2:subscribe(MessageType.PERIOD_CHANGED, v1.onPeriodChanged, v1)
  return v1
end
function TrashBag.delete(v0)
  v1:unsubscribe(MessageType.DAY_CHANGED, v0)
end
function TrashBag:onPeriodChanged()
  if g_currentMission ~= nil and g_currentMission.environment ~= nil then
    if g_currentMission.environment.currentPeriod == 1 then
      setVisibility(self.id, false)
      return
    end
    local v1 = getVisibility(self.id)
    if not v1 then
      v1 = math.random()
      if 0.666 < v1 then
        setVisibility(self.id, true)
      end
    end
  end
end
