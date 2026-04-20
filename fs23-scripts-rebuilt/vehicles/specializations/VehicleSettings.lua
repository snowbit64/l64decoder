-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/VehicleSettingsChangeEvent.lua")
VehicleSettings = {}
function VehicleSettings.prerequisitesPresent(v0)
  return true
end
function VehicleSettings.initSpecialization()
end
function VehicleSettings.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "registerVehicleSetting", VehicleSettings.registerVehicleSetting)
  SpecializationUtil.registerFunction(vehicleType, "setVehicleSettingState", VehicleSettings.setVehicleSettingState)
  SpecializationUtil.registerFunction(vehicleType, "forceVehicleSettingsUpdate", VehicleSettings.forceVehicleSettingsUpdate)
end
function VehicleSettings.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onVehicleSettingChanged")
end
function VehicleSettings.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoad", VehicleSettings)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", VehicleSettings)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", VehicleSettings)
  SpecializationUtil.registerEventListener(vehicleType, "onPreAttach", VehicleSettings)
end
function VehicleSettings:onPreLoad(savegame)
  self.spec_vehicleSettings.isDirty = false
  self.spec_vehicleSettings.settings = {}
  if self.isServer then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", VehicleSettings)
  end
end
function VehicleSettings:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_vehicleSettings.isDirty then
    -- TODO: structure LOP_FORNPREP (pc 11, target 21)
    if self.spec_vehicleSettings.settings[1].isDirty then
    else
      -- TODO: structure LOP_FORNLOOP (pc 20, target 12)
    end
    if v6 and g_server == nil and g_client ~= nil then
      local v7 = v7:getServerConnection()
      local v9 = VehicleSettingsChangeEvent.new(self, v5.settings)
      v7:sendEvent(...)
    end
    v5.isDirty = false
  end
end
function VehicleSettings:registerVehicleSetting(gameSettingId, isBool)
  v5:subscribe(MessageType.SETTING_CHANGED[gameSettingId], {index = #self.spec_vehicleSettings.settings + 1, gameSettingId = gameSettingId, isBool = isBool, callback = function(self, gameSettingId)
    local isBool = isBool:getIsActiveForInput(true, true)
    if isBool then
      isBool:setVehicleSettingState(u1.index, gameSettingId)
    end
  end}.callback, self)
  table.insert(self.spec_vehicleSettings.settings, {index = #self.spec_vehicleSettings.settings + 1, gameSettingId = gameSettingId, isBool = isBool, callback = function(self, gameSettingId)
    local isBool = isBool:getIsActiveForInput(true, true)
    if isBool then
      isBool:setVehicleSettingState(u1.index, gameSettingId)
    end
  end})
end
function VehicleSettings:forceVehicleSettingsUpdate()
  -- TODO: structure LOP_FORNPREP (pc 7, target 25)
  local v9 = v9:getValue(self.spec_vehicleSettings.settings[1].gameSettingId)
  self:setVehicleSettingState(self.spec_vehicleSettings.settings[1].index, v9, true)
  -- TODO: structure LOP_FORNLOOP (pc 24, target 8)
end
function VehicleSettings:setVehicleSettingState(settingIndex, state, noEventSend)
  if self.spec_vehicleSettings.settings[settingIndex] ~= nil then
    if noEventSend ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L33
    end
    if g_server == nil and g_client ~= nil then
      local v6 = v6:getServerConnection()
      local v8 = VehicleSettingsChangeEvent.new(self, v4.settings)
      v6:sendEvent(...)
    end
    v5.state = state
    v5.isDirty = true
    v4.isDirty = true
    SpecializationUtil.raiseEvent(self, "onVehicleSettingChanged", v5.gameSettingId, state)
  end
end
function VehicleSettings:onStateChange(state, vehicle, isControlling)
  if isControlling and state == Vehicle.STATE_CHANGE_ENTER_VEHICLE then
    self:forceVehicleSettingsUpdate()
  end
end
function VehicleSettings:onPreAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  self:forceVehicleSettingsUpdate()
end
