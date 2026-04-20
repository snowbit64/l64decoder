-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FillTrigger = {TRIGGER_MASK = CollisionFlag.FILLABLE}
local FillTrigger_mt = Class(FillTrigger)
function FillTrigger.onCreate(v0, v1)
  local v2 = FillTrigger.new(v1)
  local v3 = MoneyType.register("other", "finance_purchaseFuel")
  v2:setMoneyChangeType(v3)
  v4:addNonUpdateable(v2)
end
function FillTrigger.new(id, sourceObject, fillUnitIndex, fillLitersPerSecond, defaultFillType, customMt)
  if not customMt then
  end
  v7(v8, v9)
  v6.customEnvironment = g_currentMission.loadingMapModName
  v6.triggerId = id
  addTrigger(id, "fillTriggerCallback", v6)
  local v7 = createTransformGroup("fillTriggerSoundNode")
  v6.soundNode = v7
  local v8 = getParent(id)
  link(v8, v6.soundNode)
  local v9 = getTranslation(id)
  setTranslation(...)
  v6.sourceObject = sourceObject
  v6.vehiclesTriggerCount = {}
  v6.fillUnitIndex = fillUnitIndex
  v6.fillLitersPerSecond = fillLitersPerSecond
  v6.isEnabled = true
  v6.fillTypeIndex = FillType.DIESEL
  return v6
end
function FillTrigger:setMoneyChangeType(moneyChangeType)
  self.moneyChangeType = moneyChangeType
end
function FillTrigger:delete()
  for v4, v5 in pairs(self.vehiclesTriggerCount) do
    if not (0 < v5) then
      continue
    end
    if not (v4.removeFillUnitTrigger ~= nil) then
      continue
    end
    v4:removeFillUnitTrigger(self)
  end
  v1:deleteSample(self.sample)
  removeTrigger(self.triggerId)
end
function FillTrigger:onVehicleDeleted(vehicle)
  self.vehiclesTriggerCount[vehicle] = nil
  local v7 = vehicle:getActiveFarm()
  v2:showMoneyChange(...)
end
function FillTrigger:fillVehicle(vehicle, delta, dt)
  if self.fillLitersPerSecond ~= nil then
    local v4 = math.min(delta, self.fillLitersPerSecond * 0.001 * dt)
  end
  v4 = vehicle:getActiveFarm()
  if self.sourceObject ~= nil then
    local v5 = v5:getFillUnitFillLevel(self.fillUnitIndex)
    if 0 < v5 then
      local v6 = v6:canFarmAccess(v4, self.sourceObject)
      -- if not v6 then goto L55 end
      v6 = math.min(delta, v5)
      -- if v6 > 0 then goto L57 end
      return 0
    else
      return 0
    end
  end
  v5 = self:getCurrentFillType()
  v6 = vehicle:getFirstValidFillUnitToFill(v5)
  if v6 == nil then
    return 0
  end
  local v7 = vehicle:addFillUnitFillLevel(v4, v6, delta, v5, ToolType.TRIGGER, nil)
  if 0 < v7 then
    if self.sourceObject ~= nil then
      v7:addFillUnitFillLevel(v4, self.fillUnitIndex, -v7, v5, ToolType.TRIGGER, nil)
      return v7
    end
    local v8 = v8:getPricePerLiter(v5)
    v8:updateFarmStats(v4, "expenses", delta * v8)
    v8:addMoney(-(delta * v8), v4, self.moneyChangeType, true)
  end
  return delta
end
function FillTrigger:getIsActivatable(vehicle)
  if self.sourceObject ~= nil then
    local v2 = v2:getFillUnitFillLevel(self.fillUnitIndex)
    if 0 < v2 then
      local v4 = vehicle:getActiveFarm()
      v2 = v2:canFarmAccess(v4, self.sourceObject)
      if v2 then
        return true
      end
    end
  end
  return false
end
function FillTrigger:fillTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if self.isEnabled then
    if not onEnter then
      -- if not v4 then goto L84 end
    end
    local v6 = v6:getNodeObject(otherId)
    if v6 ~= nil and v6.addFillUnitTrigger ~= nil and v6.removeFillUnitTrigger ~= nil and v6 ~= self and v6 ~= self.sourceObject then
      local v7 = Utils.getNoNil(self.vehiclesTriggerCount[v6], 0)
      if onEnter then
        local fillType = self:getCurrentFillType()
        local v9 = v6:getFirstValidFillUnitToFill(fillType)
        -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L84
        self.vehiclesTriggerCount[v6] = v7 + 1
        -- cmp-jump LOP_JUMPXEQKN R7 aux=0x8000000e -> L84
        v6:addFillUnitTrigger(self, fillType, v9)
        return
      end
      self.vehiclesTriggerCount[v6] = v7 - 1
      if v7 <= 1 then
        self.vehiclesTriggerCount[v6] = nil
        v6:removeFillUnitTrigger(self)
        local v13 = v6:getActiveFarm()
        fillType:showMoneyChange(...)
      end
    end
  end
end
function FillTrigger:getCurrentFillType()
  if self.sourceObject ~= nil then
    return v1:getFillUnitFillType(self.fillUnitIndex)
  end
  return self.fillTypeIndex
end
function FillTrigger:setFillSoundIsPlaying(state)
  if state then
    local v4 = self:getCurrentFillType()
    local v2 = v2:getSampleByFillType(...)
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L78
    if v2 ~= self.sharedSample then
      if self.sample ~= nil then
        v3:deleteSample(self.sample)
      end
      local v3 = v3:cloneSample(v2, self.soundNode, self)
      self.sample = v3
      self.sharedSample = v2
      v3:playSample(self.sample)
      return
    end
    v3 = v3:getIsSamplePlaying(self.sample)
    -- if v3 then goto L78 end
    v3:playSample(self.sample)
    return
  end
  v2 = v2:getIsSamplePlaying(self.sample)
  if v2 then
    v2:stopSample(self.sample)
  end
end
