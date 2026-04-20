-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WoodUnloadTrigger = {}
source("dataS/scripts/triggers/WoodUnloadTriggerEvent.lua")
local WoodUnloadTrigger_mt = Class(WoodUnloadTrigger, Object)
InitStaticObjectClass(WoodUnloadTrigger, "WoodUnloadTrigger", ObjectIds.OBJECT_WOOD_UNLOAD_TRIGGER)
function WoodUnloadTrigger:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#triggerNode", "Trigger node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#activationTriggerNode", "Activation trigger node for the player")
  self:register(XMLValueType.BOOL, v1 .. "#autoUnload", "Wood is automatically unloaded", false)
  self:register(XMLValueType.STRING, v1 .. "#trainSystemId", "Money will be added to the account of the current rental farm id of the train. This attribute is the map bound id of the corresponding train system.")
end
function WoodUnloadTrigger.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.triggerNode = nil
  v3.woodInTrigger = {}
  v3.vehiclesInTrigger = {}
  v3.lastSplitShapeVolume = 0
  v3.lastSplitType = nil
  v3.lastSplitShapeStats = {sizeX = 0, sizeY = 0, sizeZ = 0, numConvexes = 0, numAttachments = 0}
  v3.extraAttributes = {price = 1}
  return v3
end
function WoodUnloadTrigger:load(components, xmlFile, xmlNode, target, i3dMappings, rootNode)
  local v8 = xmlFile:getValue(xmlNode .. "#triggerNode", nil, components, i3dMappings)
  self.triggerNode = v8
  if self.triggerNode ~= nil then
    v8 = getCollisionMask(self.triggerNode)
    local v9 = bitAND(SplitTypeManager.COLLISIONMASK_TRIGGER, v8)
    if v9 == 0 then
      Logging.xmlWarning(xmlFile, "Invalid collision mask for wood trigger '%s'. Bit 24 needs to be set!", xmlNode .. "#triggerNode")
      return false
    end
    addTrigger(self.triggerNode, "woodTriggerCallback", self)
  else
    return false
  end
  v8 = xmlFile:getValue(xmlNode .. "#activationTriggerNode", nil, components, i3dMappings)
  if v8 ~= nil then
    v9 = CollisionFlag.getHasFlagSet(v8, CollisionFlag.TRIGGER_PLAYER)
    if not v9 then
      local v12 = CollisionFlag.getBit(CollisionFlag.TRIGGER_PLAYER)
      local v13 = getName(v8)
      Logging.xmlWarning(...)
      return false
    end
    self.activationTrigger = v8
    if self.activationTrigger ~= nil then
      addTrigger(self.activationTrigger, "woodSellTriggerCallback", self)
    end
  end
  v9 = xmlFile:getValue(xmlNode .. "#autoUnload", false)
  self.autoUnload = v9
  self.isManualSellingActive = true
  v9 = xmlFile:getValue(xmlNode .. "#trainSystemId")
  self.trainSystemId = v9
  self.trainSystem = nil
  if target ~= nil then
    self:setTarget(target)
  end
  v9 = PlaceableWoodSellingStationActivatable.new(self)
  self.activatable = v9
  return true
end
function WoodUnloadTrigger:delete()
  if self.triggerNode ~= nil and self.triggerNode ~= 0 then
    removeTrigger(self.triggerNode)
    self.triggerNode = 0
  end
  if self.activationTrigger ~= nil then
    v1:removeActivatable(self.activatable)
    removeTrigger(self.activationTrigger)
    self.activationTrigger = nil
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function WoodUnloadTrigger:setTarget(object)
  if object.getIsFillTypeAllowed == nil then
  end
  assert(true)
  if object.getIsToolTypeAllowed == nil then
  end
  assert(true)
  if object.addFillUnitFillLevel == nil then
  end
  assert(true)
  self.target = object
end
function WoodUnloadTrigger:getTarget()
  return self.target
end
function WoodUnloadTrigger:processWood(farmId, noEventSend)
  if not self.isServer then
    local v3 = v3:getServerConnection()
    local v5 = WoodUnloadTriggerEvent.new(self, farmId)
    v3:sendEvent(...)
    return
  end
  for v8, v9 in pairs(self.woodInTrigger) do
    local v10 = self:getCanProcessWood()
    if not v10 then
      continue
    end
    v10 = entityExists(v9)
    if v10 then
      local v10, v11, v12 = self:calculateWoodBaseValue(v9)
      self.extraAttributes.price = v11
      self.extraAttributes.maxSize = v12
      local v13 = v13:getIsServer()
      if v13 then
        v13 = self:getTargetFillType(v12, v10)
        if self.target.getFillUnitFreeCapacity ~= nil then
          local v14 = v14:getFillUnitFreeCapacity(nil, v13, farmId)
          -- if v10 * 0.9 >= v14 then goto L112 end
        end
        v14:addFillUnitFillLevel(farmId, nil, v10, v13, ToolType.undefined, nil, self.extraAttributes)
        self:onProcessedWood(v9, v10, v13)
        v14 = v14:getNodeObject(v9)
        if v14 ~= nil then
          v14:delete()
        else
          delete(v9)
          -- goto L113  (LOP_JUMP +1)
        end
      end
    end
    if v4 then
      break
    else
      self.woodInTrigger[v9] = nil
    end
  end
  if v3 then
    v5 = v5:getIsServer()
    if v5 then
      v5:updateFarmStats(g_currentMission.player.farmId, "woodTonsSold", 0)
    end
  end
end
function WoodUnloadTrigger.getTargetFillType(v0, v1, v2)
  return FillType.WOOD
end
function WoodUnloadTrigger.getCanProcessWood(v0)
  return true
end
function WoodUnloadTrigger.onProcessedWood(v0, v1, v2, v3)
end
function WoodUnloadTrigger:calculateWoodBaseValue(objectId)
  local volume = getVolume(objectId)
  local v5 = getSplitType(objectId)
  local v3 = v3:getSplitTypeByIndex(...)
  local v4, v5, v6, v7, v8 = getSplitShapeStats(objectId)
  return self:calculateWoodBaseValueForData(volume, v3, v4, v5, v6, v7, v8)
end
function WoodUnloadTrigger.calculateWoodBaseValueForData(v0, v1, v2, v3, v4, v5, v6, v7)
  if v3 ~= nil and 0 < v1 then
    local v18 = MathUtil.clamp((v3 * v4 * v5 / v1 - 3) / 7, 0, 1)
    local v17 = math.sqrt(...)
    v18 = MathUtil.clamp((v6 - 2) / 4, 0, 1)
    local v16 = math.max(v3, v4, v5)
    if v16 < 11 then
      local v19 = math.max((v16 - 1) / 5, 0)
      v18 = math.min(v19, 1)
    else
      v19 = math.max((v16 - 11) / 8, 0)
      v18 = math.min(v19, 1)
    end
    v16 = math.min(v15, v14)
    v17 = math.max(v15, v14)
    local v20 = math.min(v7 / 15, 1)
  end
  local v12 = MathUtil.lerp(1, v8, g_currentMission.missionInfo.economicDifficulty / 3)
  v12 = MathUtil.lerp(1, v10, g_currentMission.missionInfo.economicDifficulty / 3)
  return v1 * v2.volumeToLiter, v2.pricePerLiter * v12 * v12 * v9, v11
end
function WoodUnloadTrigger:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.isServer then
    local v2 = v2:getOwnerFarmId()
    if self.trainSystemId ~= nil then
      if self.trainSystem == nil then
        for v6, v7 in pairs(g_currentMission.trainSystems) do
          if not (v7.mapBoundId == self.trainSystemId) then
            continue
          end
          self.trainSystem = v7
          break
        end
      end
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L81
    elseif self.autoUnload then
      v3 = next(self.vehiclesInTrigger)
      if v3 ~= nil then
        v4 = v4:getNodeObject(v3)
        if v4 ~= nil then
          v5 = v4:getOwnerFarmId()
        else
          self.vehiclesInTrigger[v3] = nil
        end
      end
    end
    if v2 ~= FarmManager.SPECTATOR_FARM_ID then
      self:processWood(v2)
    end
  end
end
function WoodUnloadTrigger:woodTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if otherId ~= 0 then
    local v8 = getHasClassId(otherId, ClassIds.MESH_SPLIT_SHAPE)
    if v8 then
      local v10 = getSplitType(otherId)
      v8 = v8:getSplitTypeByIndex(...)
    end
    if v7 ~= nil and 0 < v7.pricePerLiter then
      if onEnter then
        self.woodInTrigger[otherId] = otherId
        v8 = self:getNeedRaiseActive()
        -- if not v8 then goto L92 end
        self:raiseActive()
        return
      end
      self.woodInTrigger[otherId] = nil
      return
    end
    if self.autoUnload then
      v8 = v8:getNodeObject(otherId)
      if v8 ~= nil then
        local v9 = v8:isa(Vehicle)
        if v9 then
          if onEnter then
            self.vehiclesInTrigger[otherId] = (self.vehiclesInTrigger[otherId] or 0) + 1
            self:raiseActive()
            return
          end
          self.vehiclesInTrigger[otherId] = (self.vehiclesInTrigger[otherId] or 0) - 1
          if self.vehiclesInTrigger[otherId] <= 0 then
            self.vehiclesInTrigger[otherId] = nil
          end
        end
      end
    end
  end
end
function WoodUnloadTrigger:getNeedRaiseActive()
  if self.trainSystemId == nil then
  end
  return dt
end
function WoodUnloadTrigger:getWoodLogs()
  return self.woodInTrigger
end
function WoodUnloadTrigger:woodSellTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if not onEnter then
    -- if not v4 then goto L29 end
  end
  if g_currentMission.player ~= nil and otherActorId == g_currentMission.player.rootNode then
    if onEnter then
      -- if not v0.isManualSellingActive then goto L29 end
      v7:addActivatable(self.activatable)
      return
    end
    v7:removeActivatable(self.activatable)
  end
end
PlaceableWoodSellingStationActivatable = {}
local dt = Class(PlaceableWoodSellingStationActivatable)
function PlaceableWoodSellingStationActivatable.new(woodUnloadTrigger)
  local dt = setmetatable({}, u0)
  dt.woodUnloadTrigger = woodUnloadTrigger
  local v2 = v2:getText("action_sellWood")
  dt.activateText = v2
  return dt
end
function PlaceableWoodSellingStationActivatable.getIsActivatable(v0)
  if g_currentMission.controlPlayer then
    local v2 = v2:getFarmId()
    if v2 == FarmManager.SPECTATOR_FARM_ID then
    end
  end
  return dt
end
function PlaceableWoodSellingStationActivatable:run()
  local v3 = v3:getFarmId()
  dt:processWood(...)
end
function PlaceableWoodSellingStationActivatable:getDistance(x, y, z)
  if self.woodUnloadTrigger.activationTrigger ~= nil then
    local v4, v5, v6 = getWorldTranslation(self.woodUnloadTrigger.activationTrigger)
    return MathUtil.vector3Length(x - v4, y - v5, z - v6)
  end
  return math.huge
end
