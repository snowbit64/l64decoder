-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BarnMoverTrigger = {}
local BarnMoverTrigger_mt = Class(BarnMoverTrigger)
function BarnMoverTrigger.onCreate(v0, v1)
  local v4 = BarnMoverTrigger.new(v1)
  v2:addUpdateable(...)
end
function BarnMoverTrigger.new(id, customMt)
  if customMt ~= nil then
    setmetatable({}, customMt)
  else
    setmetatable({}, u0)
  end
  local v3 = getChildAt(id, 0)
  v2.triggerId = v3
  v3 = getChildAt(id, 1)
  v2.triggerTargetId = v3
  v3 = v3:getIsServer()
  if v3 then
    addTrigger(v2.triggerId, "triggerCallback", v2)
  end
  addTrigger(v2.triggerTargetId, "triggerCallbackTarget", v2)
  v2.dirLength = 0.008
  local v3, v4, v5 = localDirectionToWorld(v2.triggerId, 0, 0, 1)
  v2.dirX = v3
  v2.dirY = v4
  v2.dirZ = v5
  v2.dirX = v2.dirX * v2.dirLength
  v2.dirY = v2.dirY * v2.dirLength
  v2.dirZ = v2.dirZ * v2.dirLength
  v2.targetVelocity = 2
  v2.touched = {}
  return v2
end
function BarnMoverTrigger:delete()
  local v1 = v1:getIsServer()
  if v1 then
    removeTrigger(self.triggerId)
  end
  removeTrigger(self.triggerTargetId)
end
function BarnMoverTrigger:update(dt)
  for v5, v6 in pairs(self.touched) do
    local v7, v8, v9 = getLinearVelocity(v5)
    if not ((v7 * self.dirX + v8 * self.dirY + v9 * self.dirZ) / self.dirLength < self.targetVelocity) then
      continue
    end
    addForce(v5, self.dirX * dt, self.dirY * dt, self.dirZ * dt, 0, 0, 0, true)
  end
end
function BarnMoverTrigger:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if onEnter then
    if self.touched[otherId] ~= nil then
      self.touched[otherId].count = self.touched[otherId].count + 1
      return
    end
    local v7 = getMass(otherId)
    self.touched[otherId] = {mass = v7, count = 1}
    return
  end
  if onLeave and self.touched[otherId] ~= nil then
    if 1 < self.touched[otherId].count then
      self.touched[otherId].count = self.touched[otherId].count - 1
      return
    end
    self.touched[otherId] = nil
  end
end
function BarnMoverTrigger:triggerCallbackTarget(triggerId, otherId, onEnter, onLeave, onStay)
  if onEnter and otherId ~= 0 then
    local v6 = v6:getNodeObject(otherId)
    self.touched[otherId] = nil
    if v6 ~= nil then
      local v7 = v6:isa(Bale)
      if v7 then
        v7 = v7:getIsServer()
        -- if not v7 then goto L66 end
        local v8 = v6:getValue()
        local v10 = v6:getOwnerFarmId()
        v11:addMoney(v8 * g_currentMission.missionInfo.sellPriceMultiplier, v10, MoneyType.SOLD_BALES, true, true)
        v6:delete()
        return
      end
      v7 = v6:isa(Vehicle)
      if not v7 then
        v7 = v7:getIsServer()
        if v7 then
          v6:delete()
        end
      end
    end
  end
end
