-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlowPacker = {CULTIVATED_GROUND_TYPES = {FieldGroundType.STUBBLE_TILLAGE, FieldGroundType.CULTIVATED, FieldGroundType.SEEDBED, FieldGroundType.ROLLED_SEEDBED}}
source("dataS/scripts/vehicles/specializations/events/PlowPackerStateEvent.lua")
function PlowPacker.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("PlowPacker")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.plow.packer#inputAction", "Input action name for packer toggeling", "IMPLEMENT_EXTRA4")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.plow.packer#deactivateLeft", "Packer deactivate animation left side")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.plow.packer#deactivateRight", "Packer deactivate animation left side")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.plow.packer#animationSpeed", "Packer animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.plow.packer#foldingConfig", "Folding configuration with available packer", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.plow.packer#partialDeactivated", "Only some parts of the packer are deactivated", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.plow.packer.lowerAnimation#name", "Lower animation that is played while packer is active")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.plow.packer.lowerAnimation#speed", "Lower animation speed", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).plowPacker#packerState", "Packer state")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).plowPacker#lastPackerState", "Last packer state while turning")
end
function PlowPacker.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(Plow, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Cultivator, specializations)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, specializations)
    end
  end
  return v1
end
function PlowPacker.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setPackerState", PlowPacker.setPackerState)
  SpecializationUtil.registerFunction(vehicleType, "getIsPackerAllowed", PlowPacker.getIsPackerAllowed)
end
function PlowPacker.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setRotationMax", PlowPacker.setRotationMax)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setPlowAIRequirements", PlowPacker.setPlowAIRequirements)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setFoldState", PlowPacker.setFoldState)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "processCultivatorArea", PlowPacker.processCultivatorArea)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getUseCultivatorAIRequirements", PlowPacker.getUseCultivatorAIRequirements)
end
function PlowPacker.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", PlowPacker)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", PlowPacker)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", PlowPacker)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", PlowPacker)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", PlowPacker)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", PlowPacker)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", PlowPacker)
  SpecializationUtil.registerEventListener(vehicleType, "onSetLowered", PlowPacker)
end
function PlowPacker:onLoad(savegame)
  local v3 = v3:getValue("vehicle.plow.packer#inputAction", "IMPLEMENT_EXTRA4")
  if v3 ~= nil then
    self.spec_plowPacker.packerInputActionIndex = InputAction[v3]
  end
  local v4 = v4:getValue("vehicle.plow.packer#deactivateLeft")
  v2.packerDeactivateLeftAnimation = v4
  v4 = v4:getValue("vehicle.plow.packer#deactivateRight")
  v2.packerDeactivateRightAnimation = v4
  v4 = v4:getValue("vehicle.plow.packer#animationSpeed", 1)
  v2.packerDeactivateAnimSpeed = v4
  v4 = v4:getValue("vehicle.plow.packer#foldingConfig", 1)
  v2.packerFoldingConfiguration = v4
  if self.configurations.folding == v2.packerFoldingConfiguration and v2.packerDeactivateLeftAnimation ~= nil and v2.packerDeactivateRightAnimation == nil then
  end
  v2.packerAvailable = v4
  v4 = v4:getValue("vehicle.plow.packer#partialDeactivated", false)
  v2.partialDeactivated = v4
  v4 = v4:getValue("vehicle.plow.packer.lowerAnimation#name")
  v2.lowerAnimation = v4
  v4 = v4:getValue("vehicle.plow.packer.lowerAnimation#speed", 1)
  v2.lowerAnimationSpeed = v4
  v4 = v4:getText("action_activatePacker", self.customEnvironment)
  v2.packerActivateText = v4
  v4 = v4:getText("action_deactivatePacker", self.customEnvironment)
  v2.packerDeactivateText = v4
  v2.packerState = true
  v2.delayedFoldStateChange = nil
  v2.delayedLowerAnimationUpdate = false
end
function PlowPacker:onPostLoad(savegame)
  self:setPlowAIRequirements()
  if savegame ~= nil and not savegame.resetVehicles and self.spec_plowPacker.packerAvailable then
    local v3 = v3:getValue(savegame.key .. ".plowPacker#packerState")
    if v3 ~= nil then
      self:setPackerState(v3, true, true)
      AnimatedVehicle.updateAnimations(self, 99999999, true)
    end
    local v4 = v4:getValue(savegame.key .. ".plowPacker#lastPackerState")
    v2.lastPackerState = v4
  end
end
function PlowPacker:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_plowPacker.packerAvailable then
    xmlFile:setValue(key .. "#packerState", self.spec_plowPacker.packerState)
    if self.spec_plowPacker.lastPackerState ~= nil then
      xmlFile:setValue(key .. "#lastPackerState", self.spec_plowPacker.lastPackerState)
    end
  end
end
function PlowPacker:onReadStream(streamId, connection)
  if self.spec_plowPacker.packerAvailable then
    local packerState = streamReadBool(streamId)
    local v5 = self:getIsPackerAllowed()
    if v5 then
      self:setPackerState(packerState, true, true)
      AnimatedVehicle.updateAnimations(self, 99999999, true)
    end
  end
end
function PlowPacker:onWriteStream(streamId, connection)
  if self.spec_plowPacker.packerAvailable then
    streamWriteBool(streamId, self.spec_plowPacker.packerState)
  end
end
function PlowPacker:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer and self.spec_plowPacker.packerAvailable then
    if self.spec_plowPacker.lastPackerState ~= nil then
      local v6 = self:getIsPackerAllowed()
      if v6 then
        if self.spec_plowPacker.lastPackerState == false then
          self:setPackerState(false, true)
        end
        v5.lastPackerState = nil
      end
    end
    if v5.delayedFoldStateChange ~= nil then
      v6 = self:getIsAnimationPlaying(v5.packerDeactivateLeftAnimation)
      if not v6 then
        v6 = self:getIsAnimationPlaying(v5.packerDeactivateRightAnimation)
        if not v6 then
          v5.delayedFoldStateChange.superFunc(self, v5.delayedFoldStateChange.direction, v5.delayedFoldStateChange.moveToMiddle, false)
          v5.delayedFoldStateChange = nil
        end
      end
    end
    if v5.delayedLowerAnimationUpdate then
      v6 = self:getIsAnimationPlaying(v5.packerDeactivateLeftAnimation)
      if not v6 then
        v6 = self:getIsAnimationPlaying(v5.packerDeactivateRightAnimation)
        if not v6 then
          v6 = self:getIsLowered()
          local v7 = self:getAnimationTime(v5.lowerAnimation)
          if v6 then
            -- if v7 <= 0.5 then goto L89 end
          end
          if not v6 and 0.5 < v7 then
            if v6 then
              -- if v5.lowerAnimationSpeed then goto L98 end
            end
            self:playAnimation(v10, -v5.lowerAnimationSpeed, nil, true)
          end
          v5.delayedLowerAnimationUpdate = false
        end
      end
    end
  end
end
function PlowPacker:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient and self.spec_plowPacker.packerAvailable then
    PlowPacker.updateActionEventText(self)
  end
end
function PlowPacker:setRotationMax(superFunc, rotationMax, noEventSend, turnAnimationTime)
  if self.isServer and self.spec_plow.rotationMax ~= rotationMax and self.spec_plowPacker.packerAvailable and self.spec_plowPacker.lastPackerState == nil then
    self.spec_plowPacker.lastPackerState = self.spec_plowPacker.packerState
    self:setPackerState(true, true)
  end
  superFunc(self, rotationMax, noEventSend, turnAnimationTime)
end
function PlowPacker:setPlowAIRequirements(superFunc, excludedGroundTypes)
  if self.spec_plowPacker.packerAvailable then
    if not self.spec_plowPacker.packerState then
      -- if not v0.spec_plowPacker.partialDeactivated then goto L19 end
    end
    return superFunc(self, PlowPacker.CULTIVATED_GROUND_TYPES)
  end
  v4 = superFunc(self, excludedGroundTypes)
  return v4
end
function PlowPacker:setFoldState(superFunc, direction, moveToMiddle, noEventSend)
  if self.spec_plowPacker.packerAvailable and direction ~= 0 and direction ~= self.spec_foldable.turnOnFoldDirection then
    local v6 = self:getIsPackerAllowed()
    if v6 and not self.spec_plowPacker.packerState then
      if self.isServer and self.spec_plowPacker.lastPackerState == nil then
        self.spec_plowPacker.lastPackerState = self.spec_plowPacker.packerState
        self:setPackerState(true, true)
        self.spec_plowPacker.delayedFoldStateChange = {superFunc = superFunc, direction = direction, moveToMiddle = moveToMiddle}
      end
      if self.spec_foldable.foldMiddleAnimTime == nil then
      end
      if v6.foldMoveDirection == direction then
        -- if v6.moveToMiddle == v3 then goto L97 end
      end
      if noEventSend ~= nil then
        -- cmp-jump LOP_JUMPXEQKB R4 aux=0x80000000 -> L97
      end
      if g_server ~= nil then
        local v9 = FoldableSetFoldDirectionEvent.new(self, direction, moveToMiddle)
        v7:broadcastEvent(v9, nil, nil, self)
        return
      end
      local v7 = v7:getServerConnection()
      v9 = FoldableSetFoldDirectionEvent.new(self, direction, moveToMiddle)
      v7:sendEvent(...)
      return
    end
  end
  superFunc(self, direction, moveToMiddle, noEventSend)
end
function PlowPacker:processCultivatorArea(superFunc, workArea, dt)
  local v5, v6, v7 = getWorldTranslation(workArea.start)
  local v8, v9, v10 = getWorldTranslation(workArea.width)
  local v11, v12, v13 = getWorldTranslation(workArea.height)
  local v15, v16 = FSDensityMapUtil.updatePlowPackerArea(v5, v7, v8, v10, v11, v13, self.spec_cultivator.workAreaParameters.angle)
  self.spec_cultivator.workAreaParameters.lastChangedArea = self.spec_cultivator.workAreaParameters.lastChangedArea + v15
  self.spec_cultivator.workAreaParameters.lastStatsArea = self.spec_cultivator.workAreaParameters.lastStatsArea + v15
  self.spec_cultivator.workAreaParameters.lastTotalArea = self.spec_cultivator.workAreaParameters.lastTotalArea + v16
  FSDensityMapUtil.eraseTireTrack(v5, v7, v8, v10, v11, v13)
  local v18 = self:getLastSpeed()
  if 0.5 >= v18 then
  end
  v4.isWorking = true
  return v15, v16
end
function PlowPacker.getUseCultivatorAIRequirements(v0, v1)
  return false
end
function PlowPacker:setPackerState(newState, updateAnimations, noEventSend)
  if newState == nil then
  end
  if updateAnimations == nil then
  end
  if newState ~= v4.packerState then
    v4.packerState = newState
    if updateAnimations then
      if newState then
      else
      end
      if self.spec_plow.rotationMax then
        self:playAnimation(v4.packerDeactivateLeftAnimation, v4.packerDeactivateAnimSpeed * isLowered, nil, true)
      else
        self:playAnimation(v4.packerDeactivateRightAnimation, v4.packerDeactivateAnimSpeed * isLowered, nil, true)
      end
    end
    if newState and v4.lowerAnimation ~= nil then
      local isLowered = self:getIsLowered()
      local v6 = self:getAnimationTime(v4.lowerAnimation)
      if isLowered then
        -- if v6 <= 0.5 then goto L68 end
      end
      if not isLowered and 0.5 < v6 then
        v4.delayedLowerAnimationUpdate = true
      end
    end
    self:setPlowAIRequirements()
    PlowPackerStateEvent.sendEvent(self, newState, updateAnimations, noEventSend)
  end
  PlowPacker.updateActionEventText(self)
end
function PlowPacker:getIsPackerAllowed()
  local v1 = self:getIsAnimationPlaying(self.spec_plow.rotationPart.turnAnimation)
  if v1 then
    return false
  end
  v1 = self:getFoldAnimTime()
  if 0 < self.spec_foldable.turnOnFoldDirection then
  else
  end
  if v1 ~= v2 then
    return false
  end
  if self.spec_plowPacker.delayedFoldStateChange ~= nil then
    return false
  end
  if not v1.packerAvailable then
    return false
  end
  return true
end
function PlowPacker:onSetLowered(lowered)
  local v3 = self:getIsPackerAllowed()
  if v3 and self.spec_plowPacker.packerState and self.spec_plowPacker.lowerAnimation ~= nil then
    if lowered then
      -- if v0.spec_plowPacker.lowerAnimationSpeed then goto L22 end
    end
    self:playAnimation(v5, -v2.lowerAnimationSpeed, nil, true)
  end
end
function PlowPacker:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient and self.spec_plowPacker.packerAvailable then
    self:clearActionEventsTable(self.spec_plowPacker.actionEvents)
    if isActiveForInput and self.spec_plowPacker.packerInputActionIndex ~= nil then
      local v4, v5 = self:addPoweredActionEvent(self.spec_plowPacker.actionEvents, self.spec_plowPacker.packerInputActionIndex, self, PlowPacker.actionEventPackerDeactivate, false, true, false, true)
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
      PlowPacker.updateActionEventText(self)
    end
  end
end
function PlowPacker:updateActionEventText()
  if self.spec_plowPacker.actionEvents[self.spec_plowPacker.packerInputActionIndex] ~= nil then
    if self.spec_plowPacker.packerState then
      v3:setActionEventText(self.spec_plowPacker.actionEvents[self.spec_plowPacker.packerInputActionIndex].actionEventId, self.spec_plowPacker.packerDeactivateText)
    else
      v3:setActionEventText(self.spec_plowPacker.actionEvents[self.spec_plowPacker.packerInputActionIndex].actionEventId, self.spec_plowPacker.packerActivateText)
    end
    local v6 = self:getIsPackerAllowed()
    v3:setActionEventActive(...)
  end
end
function PlowPacker:actionEventPackerDeactivate(actionName, inputValue, callbackState, isAnalog, isMouse)
  self:setPackerState()
end
