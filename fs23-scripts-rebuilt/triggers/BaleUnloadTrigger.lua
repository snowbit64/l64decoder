-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaleUnloadTrigger = {}
local BaleUnloadTrigger_mt = Class(BaleUnloadTrigger, Object)
InitStaticObjectClass(BaleUnloadTrigger, "BaleUnloadTrigger", ObjectIds.OBJECT_BALE_UNLOAD_TRIGGER)
function BaleUnloadTrigger.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.triggerNode = nil
  v3.balesInTrigger = {}
  return v3
end
function BaleUnloadTrigger:load(components, xmlFile, xmlNode, target, i3dMappings, rootNode)
  local v7 = xmlFile:getValue(xmlNode .. "#triggerNode", nil, components, i3dMappings)
  self.triggerNode = v7
  if self.triggerNode ~= nil then
    v7 = CollisionFlag.getHasFlagSet(self.triggerNode, CollisionFlag.TRIGGER_DYNAMIC_OBJECT)
    if not v7 then
      local v11 = CollisionFlag.getBit(CollisionFlag.TRIGGER_DYNAMIC_OBJECT)
      Logging.xmlError(xmlFile, "Bale trigger '%s' does not have Bit '%d' (%s) set", xmlNode .. "#triggerNode", v11, "TRIGGER_DYNAMIC_OBJECT")
      return false
    end
    if Platform.gameplay.automaticBaleDrop then
      v7 = CollisionFlag.getHasFlagSet(self.triggerNode, CollisionFlag.TRIGGER_VEHICLE)
      if not v7 then
        v11 = CollisionFlag.getBit(CollisionFlag.TRIGGER_VEHICLE)
        Logging.xmlError(xmlFile, "Bale trigger '%s' does not have Bit '%d' (%s) set, which is required for automatic bale loader unloading", xmlNode .. "#triggerNode", v11, "TRIGGER_VEHICLE")
        return false
      end
    end
    addTrigger(self.triggerNode, "baleTriggerCallback", self)
  else
    return false
  end
  v7 = xmlFile:getValue(xmlNode .. "#supportedFillTypes")
  if v7 ~= nil then
    local v8 = v8:getFillTypesByNames(v7, "Warning: BaleUnloadTrigger has invalid fillType '%s'.")
    if v8 ~= nil then
      self.supportedFillTypes = {}
      for v12, v13 in pairs(v8) do
        self.supportedFillTypes[v13] = true
      end
    end
  end
  v9 = xmlFile:getValue(xmlNode .. "#deleteLitersPerSecond", 4000)
  self.deleteLitersPerMS = v9 / 1000
  if target ~= nil then
    self:setTarget(target)
  end
  self.isEnabled = true
  return true
end
function BaleUnloadTrigger:delete()
  if self.triggerNode ~= nil and self.triggerNode ~= 0 then
    removeTrigger(self.triggerNode)
    self.triggerNode = 0
  end
  self.balesInTrigger = nil
  local v2 = v2:superClass()
  v2.delete(self)
end
function BaleUnloadTrigger:setTarget(object)
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
function BaleUnloadTrigger:getTarget()
  return self.target
end
function BaleUnloadTrigger:getIsBaleSupportedByUnloadTrigger(bale)
  local fillType = bale:getFillType()
  if self.supportedFillTypes ~= nil and self.supportedFillTypes[fillType] == nil then
    return false
  end
  local v3 = v3:getIsFillTypeAllowed(fillType)
  if v3 then
    v3 = v3:getIsFillTypeSupported(fillType)
    if v3 then
      v3 = v3:getIsToolTypeAllowed(ToolType.BALE)
      if v3 then
        return true
      end
    end
  end
  return false
end
function BaleUnloadTrigger:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.isServer then
    for v5, v6 in ipairs(self.balesInTrigger) do
      if v6 ~= nil then
        -- cmp-jump LOP_JUMPXEQKN R7 aux=0x8 -> L113
        local v7 = v6:getCanBeSold()
        if not v7 then
          continue
        end
        if not (v6.dynamicMountType == MountableObject.MOUNT_TYPE_NONE) then
          continue
        end
        v7 = v6:getFillType()
        local v8 = v6:getFillLevel()
        local v9 = v6:getFillLevel()
        if self.deleteLitersPerMS ~= nil then
        end
        if not (0 < v9) then
          continue
        end
        local v12 = v6:getOwnerFarmId()
        local v10 = v10:addFillUnitFillLevel(v12, 1, v9, v7, ToolType.BALE, nil)
        v6:setFillLevel(v8 - v10)
        v10 = v6:getFillLevel()
        if not (v10 < 0.01) then
          continue
        end
        if v7 == FillType.COTTON then
          local v13 = self:getOwnerFarmId()
          local v11, v12 = v11:updateFarmStats(v13, "soldCottonBales", 1)
          if v11 ~= nil then
            v13:tryUnlock("CottonBales", v11)
          end
        end
        v6:delete()
        table.remove(self.balesInTrigger, v5)
        break
      else
        table.remove(self.balesInTrigger, v5)
      end
    end
    if 0 < #self.balesInTrigger then
      self:raiseActive()
    end
  end
end
function BaleUnloadTrigger:baleTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if self.isEnabled then
    local v7 = v7:getNodeObject(otherId)
    if v7 ~= nil then
      local v8 = v7:isa(Bale)
      if v8 then
        if onEnter then
          v8 = self:getIsBaleSupportedByUnloadTrigger(v7)
          -- if not v8 then goto L77 end
          self:raiseActive()
          table.addElement(self.balesInTrigger, v7)
          return
        end
        -- if not v4 then goto L77 end
        for v11, v12 in ipairs(self.balesInTrigger) do
          if not (v12 == v7) then
            continue
          end
          table.remove(self.balesInTrigger, v11)
          return
        end
        return
      end
      v8 = v7:isa(Vehicle)
      if v8 then
        v8 = SpecializationUtil.hasSpecialization(BaleLoader, v7.specializations)
        if v8 then
          if onEnter then
            v7:addBaleUnloadTrigger(self)
            return
          end
          if onLeave then
            v7:removeBaleUnloadTrigger(self)
          end
        end
      end
    end
  end
end
function BaleUnloadTrigger:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#triggerNode", "Trigger node")
  self:register(XMLValueType.FLOAT, v1 .. "#deleteLitersPerSecond", "Delete liters per second", 4000)
  self:register(XMLValueType.STRING, v1 .. "#supportedFillTypes", "List of supported fill types", nil)
end
