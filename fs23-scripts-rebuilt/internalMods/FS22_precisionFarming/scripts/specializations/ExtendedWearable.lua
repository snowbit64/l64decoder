-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedWearable = {MOD_NAME = g_currentModName}
function ExtendedWearable.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Wearable, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, v0)
  end
  return v1
end
function ExtendedWearable.registerFunctions(v0)
end
function ExtendedWearable.registerOverwrittenFunctions(v0)
end
function ExtendedWearable.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", ExtendedWearable)
  SpecializationUtil.registerEventListener(v0, "onPostUpdateTick", ExtendedWearable)
end
function ExtendedWearable:onLoad(savegame)
  self.spec_extendedWearable = self["spec_" .. ExtendedWearable.MOD_NAME .. ".extendedWearable"]
  self.spec_extendedWearable.lastDamage = -1
end
function ExtendedWearable:onPostUpdateTick(dt, isActive, isActiveForInput, isSelected)
  if 0 < self.spec_extendedWearable.lastDamage then
    local price = self:getPrice()
    local v8 = Wearable.calculateRepairPrice(price, self.spec_extendedWearable.lastDamage)
    local v9 = Wearable.calculateRepairPrice(price, self.spec_wearable.damage)
    if 0 < v9 - v8 then
      local v11, v12, v13 = self:getPFStatisticInfo()
      if v12 and v11 ~= nil and v13 ~= nil then
        v11:updateStatistic(v13, "vehicleCosts", v9 - v8)
      end
    end
  end
  v5.lastDamage = v6
end
