-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PalletUnloadTrigger = {}
local PalletUnloadTrigger_mt = Class(PalletUnloadTrigger, Object)
InitStaticObjectClass(PalletUnloadTrigger, "PalletUnloadTrigger", ObjectIds.OBJECT_PALLET_UNLOAD_TRIGGER)
function PalletUnloadTrigger:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#triggerNode", "Trigger node")
  self:register(XMLValueType.BOOL, v1 .. "#autoUnload", "Auto unload pallets")
end
function PalletUnloadTrigger.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.triggerNode = nil
  local v4 = PalletUnloadTriggerActivatable.new(v3)
  v3.activatable = v4
  v3.isPlayerInRange = false
  v3.isEnabled = true
  v3.palletsInRange = {}
  v3.vehiclesInRange = {}
  v3.autoUnload = true
  return v3
end
function PalletUnloadTrigger:load(components, xmlFile, xmlNode, target, i3dMappings, rootNode)
  local v8 = xmlFile:getValue(xmlNode .. "#triggerNode", nil, components, i3dMappings)
  self.triggerNode = v8
  if self.triggerNode ~= nil then
    v8 = getCollisionMask(self.triggerNode)
    local v9 = bitAND(CollisionFlag.TRIGGER_VEHICLE, v8)
    if v9 == 0 then
      Logging.xmlWarning(xmlFile, "Invalid collision mask for pallet trigger '%s'. Bit 21 needs to be set!", xmlNode .. "#triggerNode")
      return false
    end
    addTrigger(self.triggerNode, "palletTriggerCallback", self)
  else
    return false
  end
  v8 = xmlFile:getValue(xmlNode .. "#autoUnload", self.autoUnload)
  self.autoUnload = v8
  if target ~= nil then
    self:setTarget(target)
  end
  return true
end
function PalletUnloadTrigger:delete()
  if self.triggerNode ~= nil and self.triggerNode ~= 0 then
    removeTrigger(self.triggerNode)
    self.triggerNode = 0
  end
  self.palletsInRange = {}
  self.vehiclesInRange = {}
  local v2 = v2:superClass()
  v2.delete(self)
end
function PalletUnloadTrigger:setTarget(object)
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
function PalletUnloadTrigger:getTarget()
  return self.target
end
function PalletUnloadTrigger:unloadPallets(v1)
  if not self.isServer then
    local v2 = v2:getServerConnection()
    local v4 = PalletUnloadTriggerEvent.new(self)
    v2:sendEvent(...)
    return
  end
  for v5, v6 in ipairs(self.palletsInRange) do
    local v7 = v7:canFarmAccess(v1, v6)
    if not v7 then
      continue
    end
    v7 = v6:getFillUnits()
    for v11, v12 in pairs(v7) do
      local v13 = v6:getFillUnitFillType(v11)
      if not (v13 ~= FillType.UNKNOWN) then
        continue
      end
      local v14 = v14:getIsFillTypeSupported(v13)
      if not v14 then
        continue
      end
      v14 = v6:getFillUnitFillLevel(v11)
      if not (0 < v14) then
        continue
      end
      if v6.getMountObject ~= nil then
        local v15 = v6:getMountObject()
        if v15 ~= nil then
          v6:unmountDynamic()
          v15 = v6:getMountObject()
          if v15.setAllTensionBeltsActive ~= nil then
            v15:setAllTensionBeltsActive(false)
          end
        end
      end
      if v6.getPalletUnloadTriggerExtraSellPrice ~= nil and self.target ~= nil and self.target.target ~= nil and self.target.target.moneyChangeType ~= nil then
        local v17 = v6:getPalletUnloadTriggerExtraSellPrice()
        local v18 = v6:getOwnerFarmId()
        v15:addMoney(v17, v18, self.target.target.moneyChangeType, true)
      end
      v17 = v6:getOwnerFarmId()
      v15:addFillUnitFillLevel(v17, v11, v14, v13, ToolType.UNDEFINED)
      v17 = v6:getOwnerFarmId()
      v6:addFillUnitFillLevel(v17, v11, -v14, v13, ToolType.UNDEFINED)
    end
  end
end
function PalletUnloadTrigger:updateActivatableObject()
  if not self.isPlayerInRange then
    local v1 = next(self.vehiclesInRange)
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L18
  end
  v1:addActivatable(self.activatable)
  return
  v1:removeActivatable(self.activatable)
end
function PalletUnloadTrigger:onObjectDeleted(v1)
  table.removeElement(self.palletsInRange, v1)
  self.vehiclesInRange[v1] = nil
end
function PalletUnloadTrigger:palletTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if otherId ~= 0 then
    local v7 = v7:getNodeObject(otherId)
    if v7 ~= nil and v7.isPallet and v7.getFillUnits ~= nil then
      if onEnter then
        local v8 = v7:getFillUnits()
        for v12, v13 in pairs(v8) do
          local v14 = v7:getFillUnitFillType(v12)
          if not (v14 ~= FillType.UNKNOWN) then
            continue
          end
          local v15 = v15:getIsFillTypeSupported(v14)
          if not v15 then
            continue
          end
          v15 = v7:getFillUnitFillLevel(v12)
          if not (0 < v15) then
            continue
          end
          table.addElement(self.palletsInRange, v7)
          v7:addDeleteListener(self, "onObjectDeleted")
        end
        -- if not v0.autoUnload then goto L85 end
        -- if not v0.isServer then goto L85 end
        v11 = v7:getOwnerFarmId()
        self:unloadPallets(...)
      else
        table.removeElement(self.palletsInRange, v7)
        v7:removeDeleteListener(self, "onObjectDeleted")
      end
    end
    if not self.autoUnload then
      if v7 ~= nil then
        v8 = v7:isa(Vehicle)
        -- if not v8 then goto L162 end
        if onEnter then
          if self.vehiclesInRange[v7] == nil then
            self.vehiclesInRange[v7] = 0
            v7:addDeleteListener(self, "onObjectDeleted")
          end
          self.vehiclesInRange[v7] = self.vehiclesInRange[v7] + 1
          -- goto L162  (LOP_JUMP +43)
        end
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L162
        self.vehiclesInRange[v7] = self.vehiclesInRange[v7] - 1
        -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000000 -> L162
        self.vehiclesInRange[v7] = nil
        v7:removeDeleteListener(self, "onObjectDeleted")
      elseif g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
        if onEnter then
          self.isPlayerInRange = true
        else
          self.isPlayerInRange = false
        end
      end
    end
    self:updateActivatableObject()
  end
end
function PalletUnloadTrigger.getNeedRaiseActive(v0)
  return false
end
PalletUnloadTriggerActivatable = {}
local triggerId = Class(PalletUnloadTriggerActivatable)
function PalletUnloadTriggerActivatable.new(v0)
  local triggerId = setmetatable({}, u0)
  triggerId.owner = v0
  local otherId = otherId:getText("button_unload")
  triggerId.activateText = otherId
  return triggerId
end
function PalletUnloadTriggerActivatable:getIsActivatable()
  if not self.owner.isEnabled then
    return false
  end
  if g_gui.currentGui ~= nil then
    return false
  end
  local otherId = otherId:canPlayerAccess(self.owner)
  if not otherId then
    return false
  end
  if #triggerId.palletsInRange == 0 then
    return false
  end
  if triggerId.isPlayerInRange then
    return true
  end
  for otherShapeId, v7 in pairs(triggerId.vehiclesInRange) do
    if not (otherShapeId.rootVehicle == g_currentMission.controlledVehicle) then
      continue
    end
    return true
  end
  return false
end
function PalletUnloadTriggerActivatable:run()
  local onEnter = onEnter:getFarmId()
  triggerId:unloadPallets(...)
end
function PalletUnloadTriggerActivatable:getDistance(triggerId, otherId, onEnter)
  if self.owner.triggerNode ~= nil then
    local onLeave, onStay, otherShapeId = getWorldTranslation(self.owner.triggerNode)
    return MathUtil.vector3Length(triggerId - onLeave, otherId - onStay, onEnter - otherShapeId)
  end
  return math.huge
end
