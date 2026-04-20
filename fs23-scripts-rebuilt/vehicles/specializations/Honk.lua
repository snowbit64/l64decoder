-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/HonkEvent.lua")
Honk = {}
function Honk.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Drivable, v0)
end
function Honk.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Honk")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.honk", "sound")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Honk.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getIsHonkAvailable", Honk.getIsHonkAvailable)
  SpecializationUtil.registerFunction(vehicleType, "setHonkInput", Honk.setHonkInput)
  SpecializationUtil.registerFunction(vehicleType, "playHonk", Honk.playHonk)
end
function Honk.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Honk)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Honk)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Honk)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", Honk)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Honk)
end
function Honk:onLoad(savegame)
  self.spec_honk.inputPressed = false
  self.spec_honk.isPlaying = false
  if self.isClient then
    local v3 = v3:loadSampleFromXML(self.xmlFile, "vehicle.honk", "sound", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_honk.sample = v3
  end
  if not self.isClient then
    SpecializationUtil.removeEventListener(self, "onUpdate", Honk)
  end
end
function Honk:onDelete()
  v2:deleteSample(self.spec_honk.sample)
end
function Honk:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient and isActiveForInputIgnoreSelection then
    if self.spec_honk.inputPressed then
      local v6 = v6:getIsSamplePlaying(self.spec_honk.sample)
      -- if v6 then goto L29 end
      self:playHonk(true)
    elseif self.spec_honk.isPlaying then
      self:playHonk(false)
    end
    v5.inputPressed = false
  end
end
function Honk:onLeaveVehicle()
  self:playHonk(false, true)
end
function Honk.getIsHonkAvailable(v0)
  return true
end
function Honk:setHonkInput()
  self.spec_honk.inputPressed = true
end
function Honk:playHonk(isPlaying, noEventSend)
  HonkEvent.sendEvent(self, isPlaying, noEventSend)
  self.spec_honk.isPlaying = isPlaying
  if self.spec_honk.sample ~= nil then
    if isPlaying then
      local isSelected = self:getIsActive()
      -- if not v4 then goto L37 end
      -- if not v0.isClient then goto L37 end
      isSelected:playSample(self.spec_honk.sample)
      return
    end
    isSelected:stopSample(isActiveForInputIgnoreSelection.sample)
  end
end
function Honk:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_honk.actionEvents)
    if isActiveForInputIgnoreSelection and self.spec_honk.sample ~= nil then
      local isSelected, v5 = self:addActionEvent(self.spec_honk.actionEvents, InputAction.HONK, self, Honk.actionEventHonk, false, true, true, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_VERY_LOW)
      v6:setActionEventActive(v5, true)
      local v9 = v9:getText("action_honk")
      v6:setActionEventText(...)
    end
  end
end
function Honk:actionEventHonk(actionName, inputValue, callbackState, isAnalog)
  self:setHonkInput()
end
