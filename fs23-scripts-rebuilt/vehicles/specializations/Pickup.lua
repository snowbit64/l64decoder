-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/PickupSetStateEvent.lua")
Pickup = {PICKUP_XML_KEY = "vehicle.pickup"}
function Pickup.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
end
function Pickup.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Pickup")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Pickup.PICKUP_XML_KEY .. ".animation#name", "Pickup animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Pickup.PICKUP_XML_KEY .. ".animation#lowerSpeed", "Pickup animation lower speed")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Pickup.PICKUP_XML_KEY .. ".animation#liftSpeed", "Pickup animation lift speed")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Pickup.PICKUP_XML_KEY .. ".animation#isDefaultLowered", "Pickup animation is default lowered")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Pickup.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "allowPickingUp", Pickup.allowPickingUp)
  SpecializationUtil.registerFunction(vehicleType, "setPickupState", Pickup.setPickupState)
  SpecializationUtil.registerFunction(vehicleType, "loadPickupFromXML", Pickup.loadPickupFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getCanChangePickupState", Pickup.getCanChangePickupState)
end
function Pickup.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsLowered", Pickup.getIsLowered)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Pickup.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Pickup.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "registerLoweringActionEvent", Pickup.registerLoweringActionEvent)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "registerSelfLoweringActionEvent", Pickup.registerSelfLoweringActionEvent)
end
function Pickup.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Pickup)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Pickup)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Pickup)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Pickup)
  SpecializationUtil.registerEventListener(vehicleType, "onSetLoweredAll", Pickup)
  SpecializationUtil.registerEventListener(vehicleType, "onRootVehicleChanged", Pickup)
  SpecializationUtil.registerEventListener(vehicleType, "onFoldTimeChanged", Pickup)
end
function Pickup:onLoad(savegame)
  self:loadPickupFromXML(self.xmlFile, "vehicle.pickup", self.spec_pickup)
end
function Pickup:onPostLoad(savegame)
  if self.spec_pickup.animationName ~= "" then
    if self.spec_pickup.animationIsDefaultLowered then
      self.spec_pickup.isLowered = true
    end
    self:playAnimation(v2.animationName, v3, nil, true)
    AnimatedVehicle.updateAnimations(self, 99999999, true)
  end
end
function Pickup:onReadStream(streamId, connection)
  local isPickupLowered = streamReadBool(streamId)
  self:setPickupState(isPickupLowered, true)
end
function Pickup:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_pickup.isLowered)
end
function Pickup:onSetLoweredAll(doLowering, jointDescIndex)
  self:setPickupState(doLowering)
end
function Pickup:onRootVehicleChanged(rootVehicle)
  if self.spec_pickup.animationName ~= "" then
    if rootVehicle.actionController ~= nil then
      if self.spec_pickup.controlledAction ~= nil then
        v4:updateParent(rootVehicle.actionController)
        return
      end
      local v4 = v3:registerAction("lowerPickup", InputAction.LOWER_IMPLEMENT, 2)
      v2.controlledAction = v4
      v4:setCallback(self, Pickup.actionControllerLowerPickupEvent)
      v4:setFinishedFunctions(self, self.getIsLowered, true, false)
      v4:setIsSaved(true)
      v4 = self:getAINeedsLowering()
      -- if not v4 then goto L86 end
      v4:addAIEventListener(self, "onAIImplementStartLine", 1)
      v4:addAIEventListener(self, "onAIImplementEndLine", -1)
      return
    end
    if v2.controlledAction ~= nil then
      v4:remove()
    end
  end
end
function Pickup.onFoldTimeChanged(v0, v1)
  Pickup.updateActionEvents(v0)
end
function Pickup:actionControllerLowerPickupEvent(direction)
  if 0 >= direction then
  end
  self:setPickupState(true)
  return true
end
function Pickup:setPickupState(isPickupLowered, noEventSend)
  if isPickupLowered ~= self.spec_pickup.isLowered then
    PickupSetStateEvent.sendEvent(self, isPickupLowered, noEventSend)
    self.spec_pickup.isLowered = isPickupLowered
    if self.spec_pickup.animationName ~= "" then
      local v5 = self:getIsAnimationPlaying(self.spec_pickup.animationName)
      if v5 then
        v5 = self:getAnimationTime(self.spec_pickup.animationName)
      end
      if isPickupLowered then
        self:playAnimation(v3.animationName, v3.animationLowerSpeed, v4, true)
      else
        self:playAnimation(v3.animationName, v3.animationLiftSpeed, v4, true)
      end
    end
    Pickup.updateActionEvents(self)
  end
end
function Pickup:allowPickingUp()
  return self.spec_pickup.isLowered
end
function Pickup:getIsLowered(superFunc, default)
  return self.spec_pickup.isLowered
end
function Pickup:loadPickupFromXML(xmlFile, key, spec)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, "vehicle.pickupAnimation", key .. ".animation")
  spec.isLowered = false
  local v4 = xmlFile:getValue(key .. ".animation#name", "")
  spec.animationName = v4
  v4 = self:getAnimationExists(spec.animationName)
  if not v4 then
    spec.animationName = ""
    spec.isLowered = true
  end
  v4 = xmlFile:getValue(key .. ".animation#lowerSpeed", 1)
  spec.animationLowerSpeed = v4
  v4 = xmlFile:getValue(key .. ".animation#liftSpeed", -spec.animationLowerSpeed)
  spec.animationLiftSpeed = v4
  v4 = xmlFile:getValue(key .. ".animation#isDefaultLowered", false)
  spec.animationIsDefaultLowered = v4
  return true
end
function Pickup.getCanChangePickupState(v0, v1, v2)
  return true
end
function Pickup:getDirtMultiplier(superFunc)
  if self.spec_pickup.isLowered then
    if self.getIsTurnedOn ~= nil then
      local v3 = self:getIsTurnedOn()
      -- if not v3 then goto L28 end
    end
    local v4 = superFunc(self)
    local v7 = self:getWorkDirtMultiplier()
    local v8 = self:getLastSpeed()
    return v4 + v7 * v8 / self.speedLimit
  end
  v3 = superFunc(self)
  return v3
end
function Pickup:getWearMultiplier(superFunc)
  if self.spec_pickup.isLowered then
    if self.getIsTurnedOn ~= nil then
      local v3 = self:getIsTurnedOn()
      -- if not v3 then goto L28 end
    end
    local v4 = superFunc(self)
    local v7 = self:getWorkWearMultiplier()
    local v8 = self:getLastSpeed()
    return v4 + v7 * v8 / self.speedLimit
  end
  v3 = superFunc(self)
  return v3
end
function Pickup:registerLoweringActionEvent(superFunc, actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName)
  if self.spec_pickup.animationName ~= "" then
    local v13, v14 = self:addPoweredActionEvent(self.spec_pickup.actionEvents, InputAction.LOWER_IMPLEMENT, self, Pickup.actionEventTogglePickup, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName)
    v15:setActionEventTextPriority(v14, GS_PRIO_HIGH)
    Pickup.updateActionEvents(self)
    if inputAction == InputAction.LOWER_IMPLEMENT then
      return
    end
  end
  superFunc(self, actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName)
end
function Pickup.registerSelfLoweringActionEvent(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
  return Pickup.registerLoweringActionEvent(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
end
function Pickup:updateActionEvents()
  if self.spec_pickup.animationName ~= "" and self.spec_pickup.actionEvents[InputAction.LOWER_IMPLEMENT] ~= nil then
    if self.spec_pickup.isLowered then
      local v7 = v7:getText("action_liftOBJECT")
      local v8 = v8:getText("typeDesc_pickup")
      local v6 = string.format(...)
      v3:setActionEventText(...)
    else
      v7 = v7:getText("action_lowerOBJECT")
      v8 = v8:getText("typeDesc_pickup")
      v6 = string.format(...)
      v3:setActionEventText(...)
    end
    v6 = self:getCanChangePickupState(v1, not v1.isLowered)
    v3:setActionEventActive(...)
  end
end
function Pickup:actionEventTogglePickup(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getCanChangePickupState(self.spec_pickup, not self.spec_pickup.isLowered)
  if v6 then
    self:setPickupState(not self.spec_pickup.isLowered)
  end
end
