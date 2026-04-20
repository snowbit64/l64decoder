-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/TrailerToggleTipSideEvent.lua")
source("dataS/scripts/vehicles/specializations/events/TrailerToggleManualTipEvent.lua")
source("dataS/scripts/vehicles/specializations/events/TrailerToggleManualDoorEvent.lua")
Trailer = {TIPSTATE_CLOSED = 0, TIPSTATE_OPENING = 1, TIPSTATE_OPEN = 2, TIPSTATE_CLOSING = 3, TIP_SIDE_NUM_BITS = 3, TIP_STATE_NUM_BITS = 2}
function Trailer.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Dischargeable, v0)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
    end
  end
  return v1
end
function Trailer.initSpecialization()
  local v3 = v3:getText("configuration_trailer")
  v0:addConfigurationType("trailer", v3, "trailer", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("Trailer")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. "#infoText", "Info text", "action_toggleTipSide")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?)#name", "Tip side name")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?)#dischargeNodeIndex", "Discharge node index", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?)#canTipIfEmpty", "Can tip if empty", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).manualTipToggle#enabled", "Tip animation can be toggled manually without dischargeable", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).manualTipToggle#stopOnDeactivate", "Stop manual tipping while vehicle is deactivated (detached, exited etc)", true)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).manualTipToggle#inputAction", "Input action to toggle tipping", "IMPLEMENT_EXTRA4")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).manualTipToggle#inputActionTextPos", "Positive input text to display", "action_startTipping")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).manualTipToggle#inputActionTextNeg", "Negative input text to display", "action_stopTipping")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).manualDoorToggle#enabled", "Door animation can be toggled manually without dischargeable", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).manualDoorToggle#inputAction", "Input action to toggle tipping", "IMPLEMENT_EXTRA3")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).manualDoorToggle#inputActionTextPos", "Positive input text to display", "action_openBackDoor")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).manualDoorToggle#inputActionTextNeg", "Negative input text to display", "action_closeBackDoor")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).animation#name", "Tip animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).animation#speedScale", "Tip animation speed scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).animation#closeSpeedScale", "Tip animation speed scale while stopping to tip", "inversed speed scale")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).animation#startTipTime", "Tip animation start tip time", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).animation#resetTipSideChange", "Reset tip animation to zero while tip side is activated", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).doorAnimation#name", "Door animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).doorAnimation#speedScale", "Door animation speed scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).doorAnimation#closeSpeedScale", "Door animation speed scale while stopping to tip", "inversed speed scale")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).doorAnimation#startTipTime", "Door animation start tip time", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).doorAnimation#delayedClosing", "Play door animation after tip animation while closing", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).tippingAnimation#name", "Tipping animation name (continously played while tipping)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).tippingAnimation#speedScale", "Tipping animation speed scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).fillLevel#fillUnitIndex", "Fill unit index to check")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).fillLevel#minFillLevelPct", "Min. trailer fill level pct to select tip side", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).fillLevel#maxFillLevelPct", "Max. trailer fill level pct to select tip side", 1)
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?).animationNodes")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?)")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.trailer.trailerConfigurations.trailerConfiguration(?).trailer" .. ".tipSide(?)", "unloadSound")
  Vehicle.xmlSchema:addDelayedRegistrationFunc("AnimatedVehicle:part", function(self, v1)
    self:register(XMLValueType.FLOAT, v1 .. "#startTipSideEmptyFactor", "Start tip side empty factor")
    self:register(XMLValueType.FLOAT, v1 .. "#endTipSideEmptyFactor", "End tip side empty factor")
  end)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Pickup.PICKUP_XML_KEY .. "#allowWhileTipping", "Allow pickup movement while tipping", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, TurnOnVehicle.TURNED_ON_ANIMATION_XML_PATH .. "#playWhileTipping", "Animation is active while tipping", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).trailer#tipSideIndex", "Current tip side index")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).trailer#doorState", "Current back door state")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).trailer#tipState", "Current tip state")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).trailer#tipAnimationTime", "Current tip animation time")
end
function Trailer.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onStartTipping")
  SpecializationUtil.registerEvent(v0, "onOpenBackDoor")
  SpecializationUtil.registerEvent(v0, "onStopTipping")
  SpecializationUtil.registerEvent(v0, "onCloseBackDoor")
  SpecializationUtil.registerEvent(v0, "onEndTipping")
end
function Trailer.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadTipSide", Trailer.loadTipSide)
  SpecializationUtil.registerFunction(vehicleType, "getCanTogglePreferdTipSide", Trailer.getCanTogglePreferdTipSide)
  SpecializationUtil.registerFunction(vehicleType, "getIsTipSideAvailable", Trailer.getIsTipSideAvailable)
  SpecializationUtil.registerFunction(vehicleType, "getNextAvailableTipSide", Trailer.getNextAvailableTipSide)
  SpecializationUtil.registerFunction(vehicleType, "setPreferedTipSide", Trailer.setPreferedTipSide)
  SpecializationUtil.registerFunction(vehicleType, "startTipping", Trailer.startTipping)
  SpecializationUtil.registerFunction(vehicleType, "stopTipping", Trailer.stopTipping)
  SpecializationUtil.registerFunction(vehicleType, "endTipping", Trailer.endTipping)
  SpecializationUtil.registerFunction(vehicleType, "setTrailerDoorState", Trailer.setTrailerDoorState)
  SpecializationUtil.registerFunction(vehicleType, "getTipState", Trailer.getTipState)
  SpecializationUtil.registerFunction(vehicleType, "setTipState", Trailer.setTipState)
end
function Trailer.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDischargeNodeEmptyFactor", Trailer.getDischargeNodeEmptyFactor)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanDischargeToGround", Trailer.getCanDischargeToGround)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsNextCoverStateAllowed", Trailer.getIsNextCoverStateAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Trailer.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIHasFinishedDischarge", Trailer.getAIHasFinishedDischarge)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "startAIDischarge", Trailer.startAIDischarge)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadPickupFromXML", Trailer.loadPickupFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanChangePickupState", Trailer.getCanChangePickupState)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanDischargeToGround", Trailer.getCanDischargeToGround)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanDischargeToObject", Trailer.getCanDischargeToObject)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsTurnedOnAnimationActive", Trailer.getIsTurnedOnAnimationActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadTurnedOnAnimationFromXML", Trailer.loadTurnedOnAnimationFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getRequiresPower", Trailer.getRequiresPower)
end
function Trailer.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onDischargeStateChanged", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterAnimationValueTypes", Trailer)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", Trailer)
end
function Trailer:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.tipScrollerNodes.tipScrollerNode", "vehicle.trailer.trailerConfigurations.trailerConfiguration.trailer.tipSide.animationNodes.animationNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.tipRotationNodes.tipRotationNode", "vehicle.trailer.trailerConfigurations.trailerConfiguration.trailer.tipSide.animationNodes.animationNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.tipAnimations.tipAnimation", "vehicle.trailer.trailerConfigurations.trailerConfiguration.trailer.tipSide")
  local trailerConfigurationId = Utils.getNoNil(self.configurations.trailer, 1)
  local v4 = string.format("vehicle.trailer.trailerConfigurations.trailerConfiguration(%d).trailer", trailerConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.trailer.trailerConfigurations.trailerConfiguration", trailerConfigurationId, self.components, self)
  self.spec_trailer.fillLevelDependentTipSides = false
  self.spec_trailer.tipSideUpdateDirty = false
  self.spec_trailer.tipSides = {}
  self.spec_trailer.dischargeNodeIndexToTipSide = {}
  while true do
    v6 = string.format("%s.tipSide(%d)", v4, v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = self:loadTipSide(self.xmlFile, v6, {})
    if v8 then
      table.insert(v2.tipSides, {})
      v2.dischargeNodeIndexToTipSide[{index = #v2.tipSides}.dischargeNodeIndex] = {index = #v2.tipSides}
    end
  end
  v6 = v6:getValue(v4 .. "#infoText", "action_toggleTipSide", self.customEnvironment, false)
  v2.infoText = v6
  v2.tipSideCount = #v2.tipSides
  v2.preferedTipSideIndex = 1
  v2.currentTipSideIndex = nil
  v2.tipState = Trailer.TIPSTATE_CLOSED
  v2.remainingFillDelta = 0
  v6 = self:getNextDirtyFlag()
  v2.dirtyFlag = v6
end
function Trailer:onPostLoad(savegame)
  if savegame ~= nil and 0 < self.spec_trailer.tipSideCount then
    if 1 < self.spec_trailer.tipSideCount then
      local v3 = v3:getValue(savegame.key .. ".trailer#tipSideIndex")
      if v3 ~= nil then
        self:setPreferedTipSide(v3, true)
      end
    end
    v3 = v3:getValue(savegame.key .. ".trailer#doorState")
    if v3 ~= nil then
      self:setTrailerDoorState(v3, true, true)
    end
    local v4 = v4:getValue(savegame.key .. ".trailer#tipState", v2.tipState)
    v2.tipState = v4
    if v2.tipState ~= Trailer.TIPSTATE_OPENING then
      -- if v2.tipState ~= Trailer.TIPSTATE_OPEN then goto L84 end
    end
    v2.currentTipSideIndex = v2.preferedTipSideIndex
    self:setTipState(true)
    v4 = v4:getValue(savegame.key .. ".trailer#tipAnimationTime")
    if v4 ~= nil then
      self:setAnimationTime(v2.tipSides[v2.preferedTipSideIndex].animation.name, v4, true, false)
    end
  end
end
function Trailer:onLoadFinished(savegame)
  if 1 < self.spec_trailer.tipSideCount then
    local v3 = self:getIsTipSideAvailable(self.spec_trailer.preferedTipSideIndex)
    if not v3 then
      self.spec_trailer.tipSideUpdateDirty = true
    end
  end
end
function Trailer:onDelete()
  if self.spec_trailer.tipSides ~= nil then
    for v5, v6 in ipairs(self.spec_trailer.tipSides) do
      v7:deleteAnimations(v6.animationNodes)
      v7:deleteSample(v6.unloadSound)
    end
  end
end
function Trailer:onReadStream(streamId, connection)
  if 1 < self.spec_trailer.tipSideCount then
    local v6 = streamReadUIntN(streamId, Trailer.TIP_SIDE_NUM_BITS)
    self:setPreferedTipSide(v6, true)
  end
  local v4 = streamReadUIntN(streamId, Trailer.TIP_STATE_NUM_BITS)
  v3.tipState = v4
  v4 = streamReadBool(streamId)
  if v4 then
    v4 = streamReadUIntN(streamId, Trailer.TIP_SIDE_NUM_BITS)
    v3.currentTipSideIndex = v4
  end
  v4 = streamReadBool(streamId)
  if v4 then
    v4 = streamReadBool(streamId)
    self:setTrailerDoorState(v4, true, true)
  end
  v4 = streamReadBool(streamId)
  if v4 then
    local v5 = streamReadFloat32(streamId)
    if v5 ~= nil then
      self:setAnimationTime(v3.tipSides[v3.preferedTipSideIndex].animation.name, v5, true, false)
    end
    v6 = streamReadBool(streamId)
    if v6 then
      v6 = streamReadBool(streamId)
      if v6 then
        self:playAnimation(v4.animation.name, v4.animation.speedScale, v5, true)
      else
        self:playAnimation(v4.animation.name, v4.animation.closeSpeedScale, v5, true)
      end
    end
  end
  v4 = streamReadBool(streamId)
  if v4 then
    v5 = streamReadFloat32(streamId)
    if v5 ~= nil then
      self:setAnimationTime(v3.tipSides[v3.preferedTipSideIndex].doorAnimation.name, v5, true, false)
    end
    v6 = streamReadBool(streamId)
    if v6 then
      v6 = streamReadBool(streamId)
      if v6 then
        self:playAnimation(v4.doorAnimation.name, v4.doorAnimation.speedScale, v5, true)
        return
      end
      self:playAnimation(v4.doorAnimation.name, v4.doorAnimation.closeSpeedScale, v5, true)
    end
  end
end
function Trailer:onWriteStream(streamId, connection)
  if 1 < self.spec_trailer.tipSideCount then
    streamWriteUIntN(streamId, self.spec_trailer.preferedTipSideIndex, Trailer.TIP_SIDE_NUM_BITS)
  end
  streamWriteUIntN(streamId, v3.tipState, Trailer.TIP_STATE_NUM_BITS)
  if v3.currentTipSideIndex == nil then
  end
  local v4 = v4(v5, true)
  if v4 then
    streamWriteUIntN(streamId, v3.currentTipSideIndex, Trailer.TIP_SIDE_NUM_BITS)
  end
  if v3.tipSides[v3.preferedTipSideIndex] ~= nil then
  end
  local v5 = v5(v6, v7)
  if v5 then
    streamWriteBool(streamId, v4.doorAnimation.state)
  end
  if v4 ~= nil and v4.animation.name == nil then
  end
  v5 = v5(v6, v7)
  if v5 then
    local v7 = self:getAnimationTime(v4.animation.name)
    streamWriteFloat32(...)
    v7 = self:getIsAnimationPlaying(v4.animation.name)
    v5 = streamWriteBool(...)
    if v5 then
      local v8 = self:getAnimationSpeed(v4.animation.name)
      if 0 >= v8 then
      end
      v5(v6, true)
    end
  end
  if v4 ~= nil and not v4.manualDoorToggle and v4.doorAnimation.name == nil then
  end
  v5 = v5(v6, v7)
  if v5 then
    v7 = self:getAnimationTime(v4.doorAnimation.name)
    streamWriteFloat32(...)
    v7 = self:getIsAnimationPlaying(v4.doorAnimation.name)
    v5 = streamWriteBool(...)
    if v5 then
      v8 = self:getAnimationSpeed(v4.doorAnimation.name)
      if 0 >= v8 then
      end
      v5(v6, true)
    end
  end
end
function Trailer:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if 1 < self.spec_trailer.tipSideCount and self.spec_trailer.actionEvents[InputAction.TOGGLE_TIPSIDE] ~= nil then
    local state = self:getCanTogglePreferdTipSide()
    v8:setActionEventActive(self.spec_trailer.actionEvents[InputAction.TOGGLE_TIPSIDE].actionEventId, state)
    if state then
      local v8 = string.format(self.spec_trailer.infoText, self.spec_trailer.tipSides[self.spec_trailer.preferedTipSideIndex].name)
      v9:setActionEventText(self.spec_trailer.actionEvents[InputAction.TOGGLE_TIPSIDE].actionEventId, v8)
    end
  end
  if v5.tipSideUpdateDirty then
    local v6 = self:getTipState()
    if v6 == Trailer.TIPSTATE_CLOSED then
      local v9 = self:getNextAvailableTipSide(v5.preferedTipSideIndex)
      self:setPreferedTipSide(...)
      v5.tipSideUpdateDirty = false
    end
  end
  if v5.tipSides[v5.preferedTipSideIndex] ~= nil then
    if v5.tipSides[v5.preferedTipSideIndex].manualTipToggle and v5.actionEvents[v5.tipSides[v5.preferedTipSideIndex].manualTipToggleAction] ~= nil then
      v9 = self:getTipState()
      if v9 ~= Trailer.TIPSTATE_CLOSED then
        -- if v9 ~= Trailer.TIPSTATE_CLOSING then goto L105 end
      end
      -- goto L107  (LOP_JUMP +2)
      v10:setActionEventText(state.actionEventId, v6.manualTipToggleActionTextNeg)
    end
    if v6.manualDoorToggle and v5.actionEvents[v6.manualDoorToggleAction] ~= nil then
      v9 = self:getIsAnimationPlaying(v6.doorAnimation.name)
      if v9 then
        v9 = self:getAnimationSpeed(v6.doorAnimation.name)
        if 0 < v9 then
          -- goto L165  (LOP_JUMP +18)
        end
      else
        v9 = self:getAnimationTime(v6.doorAnimation.name)
        if v9 <= 0 then
        else
        end
      end
      v9:setActionEventText(state.actionEventId, v8)
    end
  end
  if v5.tipState == Trailer.TIPSTATE_OPENING then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L263
    state = self:getAnimationTime(v5.tipSides[v5.currentTipSideIndex].animation.name)
    if 1 > state then
      state = self:getAnimationDuration(v5.tipSides[v5.currentTipSideIndex].animation.name)
      -- cmp-jump LOP_JUMPXEQKN R7 aux=0x8000002b -> L263
    end
    v5.tipState = Trailer.TIPSTATE_OPEN
    return
  end
  if v5.tipState == Trailer.TIPSTATE_CLOSING and v5.tipSides[v5.currentTipSideIndex] ~= nil then
    state = self:getAnimationTime(v5.tipSides[v5.currentTipSideIndex].animation.name)
    if state > 0 then
      state = self:getAnimationDuration(v5.tipSides[v5.currentTipSideIndex].animation.name)
      if state ~= 0 then
        -- cmp-jump LOP_JUMPXEQKN R7 aux=0x8000002b -> L263
      end
    end
    v5.tipState = Trailer.TIPSTATE_CLOSED
    self:endTipping()
  end
end
function Trailer:loadTipSide(xmlFile, key, entry)
  local v4 = xmlFile:getValue(key .. "#name")
  local v5 = v5:convertText(v4, self.customEnvironment)
  entry.name = v5
  if entry.name == nil then
    local v8 = tostring(v4)
    Logging.xmlWarning(self.xmlFile, "Given tipSide name '%s' not found for '%s'!", v8, key)
    return false
  end
  v5 = xmlFile:getValue(key .. "#dischargeNodeIndex", 1)
  entry.dischargeNodeIndex = v5
  v5 = xmlFile:getValue(key .. "#canTipIfEmpty", true)
  entry.canTipIfEmpty = v5
  v5 = xmlFile:getValue(key .. ".manualTipToggle#enabled", false)
  entry.manualTipToggle = v5
  if entry.manualTipToggle then
    v5 = xmlFile:getValue(key .. ".manualTipToggle#inputAction")
    if not InputAction[v5] then
    end
    entry.manualTipToggleAction = v6
    local v6 = xmlFile:getValue(key .. ".manualTipToggle#stopOnDeactivate", true)
    entry.manualTipToggleStopOnDeactivate = v6
    v6 = xmlFile:getValue(key .. ".manualTipToggle#inputActionTextPos", "action_startTipping", self.customEnvironment, false)
    entry.manualTipToggleActionTextPos = v6
    v6 = xmlFile:getValue(key .. ".manualTipToggle#inputActionTextNeg", "action_stopTipping", self.customEnvironment, false)
    entry.manualTipToggleActionTextNeg = v6
  end
  v5 = xmlFile:getValue(key .. ".manualDoorToggle#enabled", false)
  entry.manualDoorToggle = v5
  if entry.manualDoorToggle then
    v5 = xmlFile:getValue(key .. ".manualDoorToggle#inputAction")
    if not InputAction[v5] then
    end
    entry.manualDoorToggleAction = v6
    v6 = xmlFile:getValue(key .. ".manualDoorToggle#inputActionTextPos", "action_openBackDoor", self.customEnvironment, false)
    entry.manualDoorToggleActionTextPos = v6
    v6 = xmlFile:getValue(key .. ".manualDoorToggle#inputActionTextNeg", "action_closeBackDoor", self.customEnvironment, false)
    entry.manualDoorToggleActionTextNeg = v6
  end
  entry.animation = {}
  v6 = xmlFile:getValue(key .. ".animation#name")
  entry.animation.name = v6
  if entry.animation.name ~= nil then
    v5 = self:getAnimationExists(entry.animation.name)
    -- if v5 then goto L197 end
  end
  Logging.xmlWarning(self.xmlFile, "Missing animation name for '%s'!", key)
  return false
  local v7 = xmlFile:getValue(key .. ".animation#speedScale", 1)
  entry.animation.speedScale = v7 * Platform.gameplay.dischargeSpeedFactor
  v7 = xmlFile:getValue(key .. ".animation#closeSpeedScale", entry.animation.speedScale)
  entry.animation.closeSpeedScale = -v7
  v6 = xmlFile:getValue(key .. ".animation#startTipTime", 0)
  entry.animation.startTipTime = v6
  v6 = xmlFile:getValue(key .. ".animation#resetTipSideChange", false)
  entry.animation.resetTipSideChange = v6
  entry.doorAnimation = {}
  v6 = xmlFile:getValue(key .. ".doorAnimation#name")
  entry.doorAnimation.name = v6
  v6 = xmlFile:getValue(key .. ".doorAnimation#speedScale", 1)
  entry.doorAnimation.speedScale = v6
  v7 = xmlFile:getValue(key .. ".doorAnimation#closeSpeedScale", entry.doorAnimation.speedScale)
  entry.doorAnimation.closeSpeedScale = -v7
  v6 = xmlFile:getValue(key .. ".doorAnimation#startTipTime", 0)
  entry.doorAnimation.startTipTime = v6
  v6 = xmlFile:getValue(key .. ".doorAnimation#delayedClosing", false)
  entry.doorAnimation.delayedClosing = v6
  entry.doorAnimation.state = false
  if entry.doorAnimation.name ~= nil then
    v5 = self:getAnimationExists(entry.doorAnimation.name)
    if not v5 then
      Logging.xmlWarning(self.xmlFile, "Unknown door animation name for '%s'!", key)
      return false
    end
  end
  entry.tippingAnimation = {}
  v6 = xmlFile:getValue(key .. ".tippingAnimation#name")
  entry.tippingAnimation.name = v6
  v6 = xmlFile:getValue(key .. ".tippingAnimation#speedScale", 1)
  entry.tippingAnimation.speedScale = v6
  entry.fillLevel = {}
  v6 = xmlFile:getValue(key .. ".fillLevel#fillUnitIndex")
  entry.fillLevel.fillUnitIndex = v6
  v6 = xmlFile:getValue(key .. ".fillLevel#minFillLevelPct", 0)
  entry.fillLevel.minFillLevelPct = v6
  v6 = xmlFile:getValue(key .. ".fillLevel#maxFillLevelPct", 1)
  entry.fillLevel.maxFillLevelPct = v6
  if entry.fillLevel.fillUnitIndex ~= nil then
    self.spec_trailer.fillLevelDependentTipSides = true
  end
  if self.isClient then
    v5 = v5:loadAnimations(self.xmlFile, key .. ".animationNodes", self.components, self, self.i3dMappings)
    entry.animationNodes = v5
    v5 = v5:loadSampleFromXML(self.xmlFile, key, "unloadSound", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.unloadSound = v5
  end
  entry.objectChanges = {}
  ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, key, entry.objectChanges, self.components, self)
  ObjectChangeUtil.setObjectChanges(entry.objectChanges, false)
  entry.currentEmptyFactor = 1
  return true
end
function Trailer:saveToXMLFile(xmlFile, key, usedModNames)
  if 1 < self.spec_trailer.tipSideCount then
    xmlFile:setValue(key .. "#tipSideIndex", self.spec_trailer.preferedTipSideIndex)
  end
  if v4.tipSides[v4.preferedTipSideIndex] ~= nil then
    local v10 = self:getAnimationTime(v4.tipSides[v4.preferedTipSideIndex].doorAnimation.name)
    if 0 >= v10 then
    end
    xmlFile:setValue(v8, true)
    local v9 = self:getAnimationTime(v5.animation.name)
    xmlFile:setValue(...)
  end
  xmlFile:setValue(key .. "#tipState", v4.tipState)
end
function Trailer:getCanTogglePreferdTipSide()
  if self.spec_trailer.tipState == Trailer.TIPSTATE_CLOSED and 0 >= self.spec_trailer.tipSideCount then
  end
  return v2
end
function Trailer:getIsTipSideAvailable(sideIndex)
  if self.spec_trailer.tipSides[sideIndex] ~= nil then
    if self.spec_trailer.tipSides[sideIndex].fillLevel.fillUnitIndex ~= nil then
      local v4 = self:getFillUnitFillLevelPercentage(self.spec_trailer.tipSides[sideIndex].fillLevel.fillUnitIndex)
      if v4 >= self.spec_trailer.tipSides[sideIndex].fillLevel.minFillLevelPct then
        -- if v0.spec_trailer.tipSides[v1].fillLevel.maxFillLevelPct >= v4 then goto L34 end
      end
      return false
    end
    return true
  end
  return false
end
function Trailer:getNextAvailableTipSide(index)
  while true do
    if not (0 < v4) then
      break
    end
    if v2.tipSideCount < v5 + 1 then
    end
    v6 = self:getIsTipSideAvailable(v5)
    if v6 then
      return v5
    end
  end
  return v3
end
function Trailer:setPreferedTipSide(index, noEventSend)
  local v6 = math.min(self.spec_trailer.tipSideCount, index)
  local v4 = math.max(...)
  v4 = self:getTipState()
  if v4 ~= Trailer.TIPSTATE_CLOSED and v4 ~= Trailer.TIPSTATE_CLOSING then
    self:stopTipping(true)
  end
  if index ~= v3.preferedTipSideIndex and 1 < v3.tipSideCount then
    if noEventSend ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L79
    end
    if g_server ~= nil then
      local v7 = TrailerToggleTipSideEvent.new(self, index)
      v5:broadcastEvent(v7, nil, nil, self)
    else
      local v5 = v5:getServerConnection()
      v7 = TrailerToggleTipSideEvent.new(self, index)
      v5:sendEvent(...)
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 84, target 98)
  if 1 ~= index then
  end
  v8(v9, true)
  -- TODO: structure LOP_FORNLOOP (pc 97, target 85)
  v3.preferedTipSideIndex = index
  if v3.tipSides[v3.preferedTipSideIndex] ~= nil and v3.tipSides[index].doorAnimation.name ~= v3.tipSides[v3.preferedTipSideIndex].doorAnimation.name and v3.tipSides[v3.preferedTipSideIndex].doorAnimation.name ~= nil then
    v7 = self:getAnimationTime(v3.tipSides[v3.preferedTipSideIndex].doorAnimation.name)
    if 0 < v7 then
      self:setTrailerDoorState(false, true)
    end
  end
  if v6.animation.resetTipSideChange then
    self:setAnimationTime(v6.animation.name, 0, true, false)
  end
  self:setCurrentDischargeNodeIndex(v6.dischargeNodeIndex)
  self:requestActionEventUpdate()
end
function Trailer:startTipping(tipSideIndex, noEventSend)
  if not tipSideIndex then
  end
  if v3.tipSides[v4] ~= nil then
    local v5 = self:getAnimationTime(v3.tipSides[v4].animation.name)
    self:playAnimation(v3.tipSides[v4].animation.name, v3.tipSides[v4].animation.speedScale, v5, true)
    if not v3.tipSides[v4].manualDoorToggle and v3.tipSides[v4].doorAnimation.name ~= nil then
      self:setTrailerDoorState(true, true)
    end
    if v4.tippingAnimation.name ~= nil then
      local v10 = self:getAnimationTime(v4.tippingAnimation.name)
      self:playAnimation(v4.tippingAnimation.name, v4.tippingAnimation.speedScale, v10, true)
    end
    if self.isClient then
      v6:startAnimations(v4.animationNodes)
      v6:playSample(v4.unloadSound)
    end
    v3.tipState = Trailer.TIPSTATE_OPENING
    v3.currentTipSideIndex = tipSideIndex
    self:setCurrentDischargeNodeIndex(v4.dischargeNodeIndex)
    v3.remainingFillDelta = 0
    SpecializationUtil.raiseEvent(self, "onStartTipping", tipSideIndex)
    self:raiseActive()
  end
end
function Trailer:stopTipping(noEventSend)
  if self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex] ~= nil then
    if self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.closeSpeedScale ~= 0 then
      local v4 = self:getAnimationTime(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.name)
      self:playAnimation(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.name, self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.closeSpeedScale, v4, true)
    else
      v4 = self:getIsAnimationPlaying(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.name)
      if v4 then
        self:stopAnimation(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.name, true)
      end
    end
    if not v3.manualDoorToggle and v3.doorAnimation.name ~= nil and not v3.doorAnimation.delayedClosing then
      self:setTrailerDoorState(false, true)
    end
    if v3.tippingAnimation.name ~= nil then
      self:setAnimationStopTime(v3.tippingAnimation.name, 1)
    end
    if self.isClient then
      v4:stopAnimations(v3.animationNodes)
      v4:stopSample(v3.unloadSound)
    end
    v2.tipState = Trailer.TIPSTATE_CLOSING
    v2.remainingFillDelta = 0
    SpecializationUtil.raiseEvent(self, "onStopTipping")
    self:raiseActive()
  end
end
function Trailer:endTipping(noEventSend)
  if self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex] ~= nil and not self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].manualDoorToggle and self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].doorAnimation.name ~= nil and self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].doorAnimation.delayedClosing then
    self:setTrailerDoorState(false, true)
  end
  v2.tipState = Trailer.TIPSTATE_CLOSED
  v2.currentTipSideIndex = nil
  SpecializationUtil.raiseEvent(self, "onEndTipping")
end
function Trailer:setTrailerDoorState(state, noEventSend, instantUpdate)
  if self.spec_trailer.tipSides[self.spec_trailer.preferedTipSideIndex] ~= nil then
    if state == nil then
    end
    v5.doorAnimation.state = state
    if state then
      -- if v5.doorAnimation.speedScale then goto L34 end
    end
    local v10 = self:getAnimationTime(v5.doorAnimation.name)
    self:playAnimation(v8, v5.doorAnimation.closeSpeedScale, v10, true)
    if instantUpdate then
      AnimatedVehicle.updateAnimationByName(self, v5.doorAnimation.name, 999999, true)
    end
    if v5.manualDoorToggle and v5.doorAnimation.name ~= nil then
      if state then
        SpecializationUtil.raiseEvent(self, "onOpenBackDoor", v4.preferedTipSideIndex)
      else
        SpecializationUtil.raiseEvent(self, "onCloseBackDoor", v4.preferedTipSideIndex)
      end
    end
    TrailerToggleManualDoorEvent.sendEvent(self, state, noEventSend)
  end
end
function Trailer:getTipState()
  return self.spec_trailer.tipState
end
function Trailer:setTipState(isOpen)
  if self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex] ~= nil then
    if isOpen then
      local v8 = self:getAnimationTime(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.name)
      self:playAnimation(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.name, self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.speedScale, v8, true)
      -- if v0.spec_trailer.tipSides[v0.spec_trailer.currentTipSideIndex].manualDoorToggle then goto L105 end
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L105
      v8 = self:getAnimationTime(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].doorAnimation.name)
      self:playAnimation(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].doorAnimation.name, self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].doorAnimation.speedScale, v8, true)
    else
      v8 = self:getAnimationTime(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.name)
      self:playAnimation(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.name, self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].animation.closeSpeedScale, v8, true)
      if not self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].manualDoorToggle and self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].doorAnimation.name ~= nil then
        v8 = self:getAnimationTime(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].doorAnimation.name)
        self:playAnimation(self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].doorAnimation.name, self.spec_trailer.tipSides[self.spec_trailer.currentTipSideIndex].doorAnimation.closeSpeedScale, v8, true)
      end
    end
    AnimatedVehicle.updateAnimationByName(self, v3.animation.name, 999999, true)
    AnimatedVehicle.updateAnimationByName(self, v3.doorAnimation.name, 999999, true)
  end
end
function Trailer:getDischargeNodeEmptyFactor(superFunc, dischargeNode)
  if self.spec_trailer.dischargeNodeIndexToTipSide[dischargeNode.index] ~= nil then
    if self.spec_trailer.dischargeNodeIndexToTipSide[dischargeNode.index].animation.name ~= nil and self.spec_trailer.dischargeNodeIndexToTipSide[dischargeNode.index].animation.startTipTime ~= 0 then
      local v5 = self:getAnimationTime(self.spec_trailer.dischargeNodeIndexToTipSide[dischargeNode.index].animation.name)
      if v5 < self.spec_trailer.dischargeNodeIndexToTipSide[dischargeNode.index].animation.startTipTime then
        return 0
      end
    end
    if v4.doorAnimation.name ~= nil and v4.doorAnimation.startTipTime ~= 0 then
      v5 = self:getAnimationTime(v4.doorAnimation.name)
      if v5 < v4.doorAnimation.startTipTime then
        return 0
      end
    end
    return v4.currentEmptyFactor
  end
  v5 = superFunc(self, dischargeNode)
  return v5
end
function Trailer:getCanDischargeToGround(superFunc, dischargeNode)
  local v3 = superFunc(self, dischargeNode)
  if dischargeNode ~= nil and self.spec_trailer.dischargeNodeIndexToTipSide[dischargeNode.index] ~= nil and not self.spec_trailer.dischargeNodeIndexToTipSide[dischargeNode.index].canTipIfEmpty then
    local v7 = self:getFillUnitFillLevel(dischargeNode.fillUnitIndex)
    if v7 == 0 then
    end
  end
  return v3
end
function Trailer:getIsNextCoverStateAllowed(superFunc, nextState)
  if self.spec_trailer.currentTipSideIndex ~= nil then
  end
  if v3.preferedTipSideIndex ~= nil and v3.tipSides[v3.preferedTipSideIndex] ~= nil and v3.tipSides[v3.preferedTipSideIndex].manualDoorToggle and v3.tipSides[v3.preferedTipSideIndex].doorAnimation.state then
  end
  if v4 ~= nil then
    local v5 = self:getDischargeNodeByIndex(v4.dischargeNodeIndex)
    local v6 = self:getCoverByFillUnitIndex(v5.fillUnitIndex)
    if v6 ~= nil and nextState ~= v6.index then
      return false
    end
  end
  v5 = superFunc(self, nextState)
  return v5
end
function Trailer.getCanBeSelected(v0, v1)
  return true
end
function Trailer:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    if self.spec_trailer.tipSideCount < 2 then
      return
    end
    self:clearActionEventsTable(v3.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4, v5 = self:addActionEvent(v3.actionEvents, InputAction.TOGGLE_TIPSIDE, self, Trailer.actionEventToggleTipSide, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
      if v3.tipSides[v3.preferedTipSideIndex] ~= nil then
        if v3.tipSides[v3.preferedTipSideIndex].manualTipToggle then
          local v7, v8 = self:addPoweredActionEvent(v3.actionEvents, v3.tipSides[v3.preferedTipSideIndex].manualTipToggleAction, self, Trailer.actionEventManualToggleTip, false, true, false, true, nil)
          v7:setActionEventTextPriority(v8, GS_PRIO_NORMAL)
        end
        if v6.manualDoorToggle then
          v7, v8 = self:addPoweredActionEvent(v3.actionEvents, v6.manualDoorToggleAction, self, Trailer.actionEventManualToggleDoor, false, true, false, true, nil)
          v7:setActionEventTextPriority(v8, GS_PRIO_NORMAL)
        end
      end
    end
  end
end
function Trailer:onDischargeStateChanged(dischargState)
  if dischargState == Dischargeable.DISCHARGE_STATE_OFF then
    self:stopTipping(true)
    return
  end
  if dischargState ~= Dischargeable.DISCHARGE_STATE_GROUND then
    -- if v1 ~= Dischargeable.DISCHARGE_STATE_OBJECT then goto L22 end
  end
  self:startTipping(nil, true)
end
function Trailer:onDeactivate()
  if self.spec_trailer.tipSides[self.spec_trailer.preferedTipSideIndex] ~= nil and self.spec_trailer.tipSides[self.spec_trailer.preferedTipSideIndex].manualTipToggle and self.spec_trailer.tipSides[self.spec_trailer.preferedTipSideIndex].manualTipToggleStopOnDeactivate then
    local tipState = self:getTipState()
    if tipState ~= Trailer.TIPSTATE_OPEN then
      -- if v3 ~= Trailer.TIPSTATE_OPENING then goto L34 end
    end
    self:stopTipping(true)
  end
end
function Trailer:getAIHasFinishedDischarge(superFunc, dischargeNode)
  local v3 = self:getTipState()
  if v3 ~= Trailer.TIPSTATE_CLOSED then
    return false
  end
  v3 = superFunc(self, dischargeNode)
  return v3
end
function Trailer:startAIDischarge(superFunc, dischargeNode, task)
  if self.spec_trailer.dischargeNodeIndexToTipSide[dischargeNode.index] ~= nil then
    self:setPreferedTipSide(self.spec_trailer.dischargeNodeIndexToTipSide[dischargeNode.index].index)
  end
  superFunc(self, dischargeNode, task)
end
function Trailer.loadPickupFromXML(v0, v1, v2, v3, v4)
  local v5 = v2:getValue(v3 .. "#allowWhileTipping", true)
  v4.allowWhileTipping = v5
  v5 = v1(v0, v2, v3, v4)
  return v5
end
function Trailer:getCanChangePickupState(superFunc, spec, newState)
  local v4 = superFunc(self, spec, newState)
  if not v4 then
    return false
  end
  if not spec.allowWhileTipping then
    local v5 = self:getTipState()
    if v5 ~= Trailer.TIPSTATE_CLOSED then
    end
    return true
  end
  return true
end
function Trailer:getCanDischargeToGround(superFunc, dischargeNode)
  local v3 = superFunc(self, dischargeNode)
  if not v3 then
    return false
  end
  if self.spec_pickup ~= nil and not self.spec_pickup.allowWhileTipping then
    return not self.spec_pickup.isLowered
  end
  return true
end
function Trailer:getCanDischargeToObject(superFunc, dischargeNode)
  local v3 = superFunc(self, dischargeNode)
  if not v3 then
    return false
  end
  if self.spec_pickup ~= nil and not self.spec_pickup.allowWhileTipping then
    return not self.spec_pickup.isLowered
  end
  return true
end
function Trailer.loadTurnedOnAnimationFromXML(v0, v1, v2, v3, v4)
  local v5 = v2:getValue(v3 .. "#playWhileTipping", false)
  v4.playWhileTipping = v5
  v5 = v1(v0, v2, v3, v4)
  return v5
end
function Trailer:getRequiresPower(superFunc)
  local tipState = self:getTipState()
  if tipState ~= Trailer.TIPSTATE_OPENING then
    -- if v2 ~= Trailer.TIPSTATE_CLOSING then goto L17 end
  end
  return true
  return superFunc(self)
end
function Trailer:getIsTurnedOnAnimationActive(superFunc, turnedOnAnimation)
  if turnedOnAnimation.playWhileTipping then
    local v3 = superFunc(self, turnedOnAnimation)
    if not v3 then
      local v4 = self:getTipState()
      if v4 ~= Trailer.TIPSTATE_CLOSED then
        local v6 = self:getCurrentDischargeNode()
        v4 = self:getDischargeNodeEmptyFactor(...)
        if 0 >= v4 then
        end
      end
    end
    return v3
  end
  v3 = superFunc(self, turnedOnAnimation)
  return v3
end
function Trailer:onRegisterAnimationValueTypes()
  self:registerAnimationValueType("tipSideEmptyFactor", "startTipSideEmptyFactor", "endTipSideEmptyFactor", false, AnimationValueFloat, function(self, v1, v2)
    local v3 = v1:getValue(v2 .. "#node", nil, self.part.components, self.part.i3dMappings)
    self.node = v3
    if self.node ~= nil then
      local v7 = getName(self.node)
      self:setWarningInformation("node: " .. v7)
      self:addCompareParameters("node")
      return true
    end
    return false
  end, function(self)
    if self.tipSide == nil then
      local v1 = v1:getDischargeNodeByNode(self.node)
      if v1 ~= nil then
      end
      if v1 ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L43
      end
      local v6 = getName(self.node)
      Logging.xmlWarning(...)
      self.startValue = nil
      return 0
      self.tipSide = v2
    end
    return self.tipSide.currentEmptyFactor
  end, function(self, v1)
    if self.tipSide ~= nil then
      self.tipSide.currentEmptyFactor = v1
    end
  end)
end
function Trailer:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillType, toolType, fillPositionData, appliedDelta)
  if self.spec_trailer.fillLevelDependentTipSides and fillLevelDelta ~= 0 then
    local v8 = self:getIsTipSideAvailable(self.spec_trailer.preferedTipSideIndex)
    if not v8 then
      v8 = self:getTipState()
      if v8 == Trailer.TIPSTATE_CLOSED then
        local v11 = self:getNextAvailableTipSide(self.spec_trailer.preferedTipSideIndex)
        self:setPreferedTipSide(...)
        return
      end
      v7.tipSideUpdateDirty = true
    end
  end
end
function Trailer:actionEventToggleTipSide(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getCanTogglePreferdTipSide()
  if v6 then
    local v8 = self:getNextAvailableTipSide(self.spec_trailer.preferedTipSideIndex)
    self:setPreferedTipSide(...)
  end
end
function Trailer:actionEventManualToggleTip(actionName, inputValue, callbackState, isAnalog)
  local tipState = self:getTipState()
  if tipState ~= Trailer.TIPSTATE_CLOSED then
    -- if v5 ~= Trailer.TIPSTATE_CLOSING then goto L26 end
  end
  self:startTipping(nil, false)
  TrailerToggleManualTipEvent.sendEvent(self, true)
  return
  self:stopTipping()
  TrailerToggleManualTipEvent.sendEvent(self, false)
end
function Trailer:actionEventManualToggleDoor(actionName, inputValue, callbackState, isAnalog)
  self:setTrailerDoorState()
end
