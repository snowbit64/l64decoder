-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AccessHandler = {EVERYONE = 0, NOBODY = 2 ^ FarmManager.FARM_ID_SEND_NUM_BITS - 1}
local AccessHandler_mt = Class(AccessHandler)
function AccessHandler.new(customMt)
  if not customMt then
  end
  v2(v3, v4)
  return v1
end
function AccessHandler.delete(v0)
end
function AccessHandler:canPlayerAccess(object, player)
  if player == nil then
    local v4 = v4:getFarmId()
  else
  end
  v4 = self:canFarmAccess(v3, object)
  return v4
end
function AccessHandler:canFarmAccess(farmId, object, allowEqualAlways)
  if object == nil then
    return false
  end
  local ownerFarmId = object:getOwnerFarmId()
  if farmId == FarmManager.SPECTATOR_FARM_ID then
    if allowEqualAlways then
      -- if v1 == v4 then goto L16 end
    end
    return false
  end
  if ownerFarmId ~= nil then
    -- if v4 ~= AccessHandler.EVERYONE then goto L26 end
  end
  return true
  if farmId == nil then
    if ownerFarmId ~= AccessHandler.EVERYONE then
    end
    return true
  end
  return self:canFarmAccessOtherId(farmId, ownerFarmId)
end
function AccessHandler.canFarmAccessOtherId(v0, v1, v2)
  if v2 == AccessHandler.EVERYONE then
    return true
  end
  if v2 == AccessHandler.NOBODY then
    return false
  end
  if v2 == v1 then
    return true
  end
  local v3 = v3:getFarmById(v1)
  if v3 == nil then
    return false
  end
  return v3:getIsContractingFor(v2)
end
function AccessHandler.canFarmAccessLand(v0, v1, v2, v3, v4)
  if v1 == FarmlandManager.NO_OWNER_FARM_ID then
    return false
  end
  local v5 = v5:getOwnerIdAtWorldPosition(v2, v3)
  if v5 == v1 then
    return true
  end
  local v6 = v6:getFarmById(v1)
  if v6 == nil then
    return false
  end
  if v4 ~= true then
    local v7 = v6:getIsContractingFor(v5)
  end
  return v7
end
