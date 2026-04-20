-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WashingStation = {}
local v0 = Class(WashingStation, Object)
InitStaticObjectClass(WashingStation, "WashingStation", ObjectIds.OBJECT_WASHING_STATION)
function WashingStation:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".trigger#node", "Vehicle trigger node")
  self:register(XMLValueType.FLOAT, v1 .. "#washDuration", "Wash duration")
  self:register(XMLValueType.INT, v1 .. "#pricePerWash", "Price per wash")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "active")
  EffectManager.registerEffectXMLPaths(self, v1 .. ".effects")
end
function WashingStation.new(v0, v1, v2)
  if not v2 then
  end
  return v3(v4, v5, v6)
end
function WashingStation:load(v1, v2, v3, v4, v5, v6)
  local v7 = v2:getValue(v3 .. ".trigger#node", v6, v1, v5)
  if v7 == nil then
    return false
  end
  self.trigger = v7
  addTrigger(v7, "onTriggerCallback", self)
  self.isEnabled = true
  self.vehicleNodesInRange = {}
  self.vehiclesToWash = {}
  local v8 = v2:getValue(v3 .. "#pricePerWash", 1)
  self.pricePerWash = v8
  local v9 = v2:getValue(v3 .. "#washDuration", 1)
  self.washDuration = v9 * 1000
  if self.isClient then
    v9 = v2:getFilename()
    v8, v9 = Utils.getModNameAndBaseDirectory(...)
    local v11 = v11:loadSampleFromXML(v2, v3 .. ".sounds", "active", v9, v1, 0, AudioGroup.ENVIRONMENT, v5, nil)
    self.samples = {active = v11}
    local v10 = v10:loadEffect(v2, v3 .. ".effects", v1, self, v5)
    self.effects = v10
    self.fxActive = false
  end
  v8 = WashingStationActivatable.new(self, self.trigger)
  self.activatable = v8
  v8 = self:getNextDirtyFlag()
  self.dirtyFlag = v8
  return true
end
function WashingStation:delete()
  if self.trigger ~= nil then
    removeTrigger(self.trigger)
  end
  if self.isClient then
    v1:stopSamples(self.samples)
    v1:deleteSamples(self.samples)
    v1:deleteEffects(self.effects)
  end
  self.vehicleNodesInRange = {}
  v1:removeActivatable(self.activatable)
end
function WashingStation:readUpdateStream(v1, v2, v3)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, v1, v2, v3)
  local v4 = v3:getIsServer()
  if v4 then
    v4 = streamReadBool(v1)
    if v4 then
      self:onStartWashing()
      return
    end
    self:onStopWashing()
  end
end
function WashingStation:writeUpdateStream(v1, v2, v3)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, v1, v2, v3)
  local v4 = v2:getIsServer()
  if not v4 then
    if self.endTime == nil then
    end
    v4(v5, true)
  end
end
function WashingStation:update(v1)
  if self.isServer and self.endTime ~= nil then
    if g_time < self.endTime then
      -- TODO: structure LOP_FORNPREP (pc 18, target 49)
      local v5 = v5:getDirtAmount()
      if 0.01 < v5 then
        v6:addDirtAmount(-(1 / self.washDuration * v1), true)
      else
        table.remove(self.vehiclesToWash, #self.vehiclesToWash)
      end
      -- TODO: structure LOP_FORNLOOP (pc 48, target 19)
      self:raiseActive()
      return
    end
    self:onStopWashing()
  end
end
function WashingStation:startWashing(v1)
  if self.isServer then
    for v8, v9 in pairs(self.vehicleNodesInRange) do
      local v10 = entityExists(v8)
      if v10 then
        v10 = v10:getNodeObject(v8)
        if not (v3[v10] == nil) then
          continue
        end
        local v11 = v10:getDirtAmount()
        if 0.01 < v11 then
          table.insert(self.vehiclesToWash, v10)
        end
        v3[v10] = true
      else
        self.vehicleNodesInRange[v8] = nil
      end
    end
    if v2 then
      if 1 <= v4 then
        v5:addMoney(-v4, v1, MoneyType.VEHICLE_REPAIR, true, true)
      end
      self:onStartWashing()
    end
  end
end
function WashingStation:onStartWashing()
  if self.isServer then
    self.endTime = g_time + self.washDuration
    self:raiseActive()
    self:raiseDirtyFlags(self.dirtyFlag)
  end
  if self.isClient and not self.fxActive then
    v1:playSample(self.samples.active)
    v1:setFillType(self.effects, FillType.WATER)
    v1:startEffects(self.effects)
    self.fxActive = true
  end
end
function WashingStation:onStopWashing()
  if self.isServer then
    -- TODO: structure LOP_FORNPREP (pc 8, target 14)
    self.vehiclesToWash[#self.vehiclesToWash] = nil
    -- TODO: structure LOP_FORNLOOP (pc 13, target 9)
    self:raiseDirtyFlags(self.dirtyFlag)
  end
  if self.isClient and self.fxActive then
    v1:stopSample(self.samples.active)
    v1:stopEffects(self.effects)
    self.fxActive = false
  end
end
function WashingStation:updateVehicleState()
  v1:removeActivatable(self.activatable)
  if not self.isEnabled then
    return
  end
  if not self.isPlayerInRange then
    for v5, v6 in pairs(self.vehicleNodesInRange) do
      local v7 = entityExists(v5)
      if v7 then
        v7 = v7:getNodeObject(v5)
        if not (v7 ~= nil) then
          continue
        end
        if not (v7 == g_currentMission.controlledVehicle) then
          continue
        end
      else
        self.vehicleNodesInRange[v5] = nil
      end
    end
  end
  if v1 then
    v2:addActivatable(self.activatable)
  end
end
function WashingStation:onTriggerCallback(v1, v2, v3, v4, v5, v6)
  if not v3 then
    -- if not v4 then goto L62 end
  end
  if g_currentMission.player ~= nil then
    -- if v2 ~= g_currentMission.player.rootNode then goto L22 end
    if v3 then
      self.isPlayerInRange = true
      -- goto L58  (LOP_JUMP +41)
    end
    self.isPlayerInRange = false
  else
    local v8 = v8:getNodeObject(v2)
    if v8 ~= nil then
      local v9 = v8:isa(Vehicle)
      if v9 and v8.getAllowsWashingByType ~= nil then
        v9 = v8:getAllowsWashingByType(Washable.WASHTYPE_TRIGGER)
        if v9 then
          if v3 then
            self.vehicleNodesInRange[v2] = true
          else
            self.vehicleNodesInRange[v2] = nil
          end
        end
      end
    end
  end
  if v7 then
    self:updateVehicleState()
  end
end
WashingStationActivatable = {}
local v1 = Class(WashingStationActivatable)
function WashingStationActivatable.new(v0, v1)
  local v2 = setmetatable({}, u0)
  v2.washingStation = v0
  v2.triggerNode = v1
  local v3 = v3:getText("action_startWashing")
  v2.activateText = v3
  return v2
end
function WashingStationActivatable:getIsActivatable()
  local v3 = v3:getFarmId()
  return v1:canFarmAccess(v3, self.washingStation)
end
function WashingStationActivatable:run()
  local v1 = v1:getServerConnection()
  local v3 = WashingStationEvent.new(self.washingStation)
  v1:sendEvent(...)
end
function WashingStationActivatable:getDistance(v1, v2, v3)
  local v4, v5, v6 = getWorldTranslation(self.triggerNode)
  return MathUtil.vector3Length(v1 - v4, v2 - v5, v3 - v6)
end
