-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedFoldable = {}
function ExtendedFoldable.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Foldable, v0)
end
function ExtendedFoldable.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onFillUnitFillLevelChanged", ExtendedFoldable)
  SpecializationUtil.registerEventListener(v0, "onFoldStateChanged", ExtendedFoldable)
end
function ExtendedFoldable.prerequisitesPresent(v0)
  return true
end
function ExtendedFoldable:onFillUnitFillLevelChanged(v1, v2, v3, v4, v5, v6)
  local v7 = self:getCurrentDischargeNode()
  if v7 ~= nil and v7.fillUnitIndex == v1 then
    local v8 = self:getFillUnitFillLevelPercentage(v1)
    if 0.2 <= v8 then
      local v9 = self:getFoldAnimTime()
      if 0 < v9 then
        self:setFoldState(-1, true)
      end
    end
  end
end
function ExtendedFoldable:onFoldStateChanged(v1, v2)
  if v1 == self.spec_foldable.turnOnFoldDirection and self.spec_cover ~= nil then
    self:setCoverState(1)
  end
end
