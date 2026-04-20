-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedMower = {MOD_NAME = g_currentModName}
function ExtendedMower.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Mower, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, v0)
  end
  return v1
end
function ExtendedMower.registerFunctions(v0)
end
function ExtendedMower.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "processMowerArea", ExtendedMower.processMowerArea)
end
function ExtendedMower.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", ExtendedMower)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", ExtendedMower)
end
function ExtendedMower:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    local v5 = self:getIsActiveForInput(true, true)
    if v5 then
      ExtendedMower.updateMinimapActiveState(self)
    end
  end
end
function ExtendedMower:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    if isActiveForInputIgnoreSelection then
      ExtendedMower.updateMinimapActiveState(self)
      return
    end
    ExtendedMower.updateMinimapActiveState(self, false)
  end
end
function ExtendedMower:updateMinimapActiveState(forcedState)
  local yieldMap = self:getPFYieldMap()
  if forcedState == nil then
    local v4, v5, v6, v7 = self:getPFStatisticInfo()
  end
  local v8 = self:getIsSelected()
  yieldMap:setRequireMinimapDisplay(...)
end
function ExtendedMower.processMowerArea(v0, v1, v2, v3)
  if g_precisionFarming ~= nil then
    v4:preProcessMowerArea(v0, v2, v3)
  end
  local v4, v5 = v1(v0, v2, v3)
  if g_precisionFarming ~= nil then
    v6:postProcessMowerArea(v0, v2, v3, v4)
  end
  return v4, v5
end
