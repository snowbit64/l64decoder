-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SunAdmirer = {}
local SunAdmirer_mt = Class(SunAdmirer)
function SunAdmirer.onCreate(v0, v1)
  local v4 = SunAdmirer.new(v1)
  v2:addNonUpdateable(...)
end
function SunAdmirer.new(id)
  setmetatable({}, u0)
  local v3 = getUserAttribute(id, "switchCollision")
  local v2 = Utils.getNoNil(v3, false)
  if {id = id, switchCollision = v2}.switchCollision then
    v2 = getCollisionMask(id)
  end
  v1:setVisibility(true)
  v2:subscribe(MessageType.WEATHER_CHANGED, v1.onWeatherChanged, v1)
  return v1
end
function SunAdmirer.delete(v0)
  v1:unsubscribeAll(v0)
end
function SunAdmirer:setVisibility(visible)
  setVisibility(self.id, visible)
  if self.switchCollision then
    if visible then
      -- if v0.collisionMask then goto L18 end
    end
    v2(v3, 0)
  end
end
function SunAdmirer:onWeatherChanged()
  if g_currentMission ~= nil and g_currentMission.environment ~= nil then
    if g_currentMission.environment.isSunOn then
      local v4 = v4:getIsRaining()
    end
    self:setVisibility(v3)
  end
end
