-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCupActivatable = {}
local SuperCupActivatable_mt = Class(SuperCupActivatable)
function SuperCupActivatable.new(v0, v1)
  setmetatable({}, u0)
  return {superCup = v1, activateText = "unknown"}
end
function SuperCupActivatable:getIsActivatable()
  local v1 = v1:isInState(SuperCup.STATES.RUN)
  if v1 then
    return false
  end
  self:updateActivateText()
  return true
end
function SuperCupActivatable:run()
  v1:setIsSuperCupStarted(not self.superCup.started)
  self:updateActivateText()
end
function SuperCupActivatable.drawActivate(v0)
end
function SuperCupActivatable:updateActivateText()
  if self.superCup.started then
  else
  end
  local v2 = v2:getText(v1)
  self.activateText = v2
end
