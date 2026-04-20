-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedCombine = {MOD_NAME = g_currentModName}
function ExtendedCombine.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Combine, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, v0)
  end
  return v1
end
function ExtendedCombine.registerFunctions(v0)
end
function ExtendedCombine.registerOverwrittenFunctions(v0)
end
function ExtendedCombine.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onUpdateTick", ExtendedCombine)
  SpecializationUtil.registerEventListener(v0, "onRegisterActionEvents", ExtendedCombine)
end
function ExtendedCombine:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    local v5 = self:getIsActiveForInput(true, true)
    if v5 then
      ExtendedCombine.updateMinimapActiveState(self)
    end
  end
end
function ExtendedCombine:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    if isActiveForInputIgnoreSelection then
      ExtendedCombine.updateMinimapActiveState(self)
      return
    end
    ExtendedCombine.updateMinimapActiveState(self, false)
  end
end
function ExtendedCombine:updateMinimapActiveState(forcedState)
  local yieldMap = self:getPFYieldMap()
  if yieldMap ~= nil then
    if forcedState == nil then
      local v4, v5, v6, v7, v8 = self:getPFStatisticInfo()
      if v7 and 0 < self.spec_combine.numAttachedCutters and v8 ~= nil then
      end
    end
    v8 = self:getIsSelected()
    yieldMap:setRequireMinimapDisplay(...)
  end
end
