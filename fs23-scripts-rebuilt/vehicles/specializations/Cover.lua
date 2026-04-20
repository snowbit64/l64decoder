-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SetCoverStateEvent.lua")
Cover = {SEND_NUM_BITS = 4, COVER_XML_KEY = "vehicle.cover.coverConfigurations.coverConfiguration(?).cover(?)"}
function Cover.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
end
function Cover.initSpecialization()
  local v3 = v3:getText("configuration_cover")
  v0:addConfigurationType("cover", v3, "cover", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("Cover")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cover.COVER_XML_KEY .. "#openAnimation", "Open animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cover.COVER_XML_KEY .. "#openAnimationStopTime", "Open animation stop time")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cover.COVER_XML_KEY .. "#openAnimationStartTime", "Open animation start time")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cover.COVER_XML_KEY .. "#closeAnimation", "Close animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cover.COVER_XML_KEY .. "#closeAnimationStopTime", "Close animation stop time")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cover.COVER_XML_KEY .. "#openOnBuy", "Open after buying", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cover.COVER_XML_KEY .. "#forceOpenOnTip", "Open while tipping", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cover.COVER_XML_KEY .. "#autoReactToTrigger", "Automatically open in triggers", true)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cover.COVER_XML_KEY .. "#fillUnitIndices", "Fill unit indices to cover")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cover.COVER_XML_KEY .. "#blockedToolTypes", "List with blocked tool types", "dischargeable bale trigger pallet")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cover.coverConfigurations.coverConfiguration(?)#closeCoverIfNotAllowed", "Close cover if not allowed to open it", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cover.coverConfigurations.coverConfiguration(?)#openCoverWhileTipping", "Open cover while tipping", false)
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.cover.coverConfigurations.coverConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.pipe#coverMinState", "Min. cover state to allow pipe state change", 0)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.pipe#coverMaxState", "Max. cover state to allow pipe state change", "Max. cover state")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).cover#state", "Current cover state")
end
function Cover.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadCoverFromXML", Cover.loadCoverFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsNextCoverStateAllowed", Cover.getIsNextCoverStateAllowed)
  SpecializationUtil.registerFunction(vehicleType, "setCoverState", Cover.setCoverState)
  SpecializationUtil.registerFunction(vehicleType, "playCoverAnimation", Cover.playCoverAnimation)
  SpecializationUtil.registerFunction(vehicleType, "getCoverByFillUnitIndex", Cover.getCoverByFillUnitIndex)
end
function Cover.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitSupportsToolType", Cover.getFillUnitSupportsToolType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Cover.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadPipeNodes", Cover.loadPipeNodes)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsPipeStateChangeAllowed", Cover.getIsPipeStateChangeAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "aiPrepareLoading", Cover.aiPrepareLoading)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "aiFinishLoading", Cover.aiFinishLoading)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "finishedAIDischarge", Cover.finishedAIDischarge)
end
function Cover.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Cover)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Cover)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Cover)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Cover)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Cover)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Cover)
  SpecializationUtil.registerEventListener(vehicleType, "onStartTipping", Cover)
  SpecializationUtil.registerEventListener(vehicleType, "onOpenBackDoor", Cover)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitTriggerChanged", Cover)
  SpecializationUtil.registerEventListener(vehicleType, "onRemovedFillUnitTrigger", Cover)
end
function Cover:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cover#animationName", "vehicle.cover.coverConfigurations.coverConfiguration.cover#openAnimation")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.foldable.foldingParts#closeCoverOnFold", "vehicle.cover.coverConfigurations.coverConfiguration.cover#closeCoverIfNotAllowed")
  local coverConfigurationId = Utils.getNoNil(self.configurations.cover, 1)
  local v4 = string.format("vehicle.cover.coverConfigurations.coverConfiguration(%d)", coverConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.cover.coverConfigurations.coverConfiguration", coverConfigurationId, self.components, self)
  self.spec_cover.state = 0
  self.spec_cover.runningAnimations = {}
  self.spec_cover.covers = {}
  self.spec_cover.fillUnitIndexToCovers = {}
  self.spec_cover.isStateSetAutomatically = false
  while true do
    v6 = string.format("%s.cover(%d)", v4, v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = self:loadCoverFromXML(self.xmlFile, v6, {})
    if v8 then
      -- TODO: structure LOP_FORNPREP (pc 86, target 114)
      if v2.fillUnitIndexToCovers[{}.fillUnitIndices[#{}.fillUnitIndices]] == nil then
        v2.fillUnitIndexToCovers[{}.fillUnitIndices[#{}.fillUnitIndices]] = {{}}
      else
        table.insert(v2.fillUnitIndexToCovers[{}.fillUnitIndices[#{}.fillUnitIndices]], {})
      end
      -- TODO: structure LOP_FORNLOOP (pc 113, target 87)
      table.insert(v2.covers, v7)
      v7.index = #v2.covers
    end
  end
  v6 = v6:getValue(v4 .. "#closeCoverIfNotAllowed", false)
  v2.closeCoverIfNotAllowed = v6
  v6 = v6:getValue(v4 .. "#openCoverWhileTipping", false)
  v2.openCoverWhileTipping = v6
  if 0 >= #v2.covers then
  end
  v2.hasCovers = true
  v2.isDirty = false
  if not v2.hasCovers then
    SpecializationUtil.removeEventListener(self, "onReadStream", Cover)
    SpecializationUtil.removeEventListener(self, "onWriteStream", Cover)
    SpecializationUtil.removeEventListener(self, "onUpdate", Cover)
    SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", Cover)
    SpecializationUtil.removeEventListener(self, "onStartTipping", Cover)
    SpecializationUtil.removeEventListener(self, "onFillUnitTriggerChanged", Cover)
    SpecializationUtil.removeEventListener(self, "onRemovedFillUnitTrigger", Cover)
  end
end
function Cover:onPostLoad(savegame)
  if self.spec_cover.hasCovers then
    if savegame ~= nil then
      local v4 = v4:getValue(savegame.key .. ".cover#state", 0)
    else
      -- TODO: structure LOP_FORNPREP (pc 25, target 34)
      if self.spec_cover.covers[1].startOpenState then
      end
      -- TODO: structure LOP_FORNLOOP (pc 33, target 26)
    end
    if v3 == 0 then
      v2.state = #v2.covers
    end
    self:setCoverState(v3, true)
    -- TODO: structure LOP_FORNPREP (pc 51, target 70)
    AnimatedVehicle.updateAnimationByName(self, v2.runningAnimations[#v2.runningAnimations].name, 9999999, true)
    table.remove(v2.runningAnimations, #v2.runningAnimations)
    -- TODO: structure LOP_FORNLOOP (pc 69, target 52)
    v2.isDirty = false
  end
end
function Cover:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_cover.hasCovers then
    xmlFile:setValue(key .. "#state", self.spec_cover.state)
  end
end
function Cover:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    local state = streamReadUIntN(streamId, Cover.SEND_NUM_BITS)
    self:setCoverState(state, true)
    -- TODO: structure LOP_FORNPREP (pc 24, target 43)
    AnimatedVehicle.updateAnimationByName(self, self.spec_cover.runningAnimations[#self.spec_cover.runningAnimations].name, 9999999, true)
    table.remove(self.spec_cover.runningAnimations, #self.spec_cover.runningAnimations)
    -- TODO: structure LOP_FORNLOOP (pc 42, target 25)
    self.spec_cover.isDirty = false
  end
end
function Cover:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    streamWriteUIntN(streamId, self.spec_cover.state, Cover.SEND_NUM_BITS)
  end
end
function Cover:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_cover.isDirty and self.spec_cover.runningAnimations[1] ~= nil then
    if self.spec_cover.runningAnimations[2] ~= nil and self.spec_cover.runningAnimations[2].name == self.spec_cover.runningAnimations[1].name then
      table.remove(self.spec_cover.runningAnimations, 1)
      self:stopAnimation(self.spec_cover.runningAnimations[1].name, true)
      self:playCoverAnimation(self.spec_cover.runningAnimations[2])
    end
    local v8 = self:getIsAnimationPlaying(v6.name)
    if not v8 then
      table.remove(v5.runningAnimations, 1)
      if v5.runningAnimations[1] ~= nil then
        self:playCoverAnimation(v5.runningAnimations[1])
      else
        v5.isDirty = false
      end
    end
  end
  if v5.closeCoverIfNotAllowed and v5.state ~= 0 then
    if #v5.covers < v5.state + 1 then
    end
    local v7 = self:getIsNextCoverStateAllowed(v6)
    if not v7 then
      self:setCoverState(0, true)
    end
  end
end
function Cover:loadCoverFromXML(xmlFile, key, cover)
  local v4 = xmlFile:getValue(key .. "#openAnimation")
  cover.openAnimation = v4
  v4 = xmlFile:getValue(key .. "#openAnimationStartTime")
  cover.openAnimationStartTime = v4
  v4 = xmlFile:getValue(key .. "#openAnimationStopTime")
  cover.openAnimationStopTime = v4
  if cover.openAnimation == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'openAnimation' for cover '%s'!", key)
    return false
  end
  v4 = xmlFile:getValue(key .. "#closeAnimation")
  cover.closeAnimation = v4
  v4 = xmlFile:getValue(key .. "#closeAnimationStopTime")
  cover.closeAnimationStopTime = v4
  v4 = xmlFile:getValue(key .. "#openOnBuy", false)
  cover.startOpenState = v4
  v4 = xmlFile:getValue(key .. "#forceOpenOnTip", true)
  cover.forceOpenOnTip = v4
  v4 = xmlFile:getValue(key .. "#autoReactToTrigger", true)
  cover.autoReactToTrigger = v4
  v4 = xmlFile:getValue(key .. "#fillUnitIndices", nil, true)
  cover.fillUnitIndices = v4
  if cover.fillUnitIndices == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'fillUnitIndices' for cover '%s'!", key)
    return false
  end
  cover.blockedToolTypes = {}
  v4 = xmlFile:getValue(key .. "#blockedToolTypes", "dischargeable bale trigger pallet")
  local v5 = v4:trim()
  v5 = v5:split(" ")
  for v8, v9 in ipairs(v5) do
    local v10 = v10:getToolTypeIndexByName(v9)
    if not (v10 ~= ToolType.UNDEFINED) then
      continue
    end
    cover.blockedToolTypes[v10] = true
  end
  return true
end
function Cover:setCoverState(state, noEventSend)
  if self.spec_cover.hasCovers and 0 <= state and state <= #self.spec_cover.covers and self.spec_cover.state ~= state then
    SetCoverStateEvent.sendEvent(self, state, noEventSend)
    if #self.spec_cover.runningAnimations ~= 0 then
    end
    if 0 < v3.state then
      if v3.covers[v3.state].closeAnimation == nil then
      end
      local v8 = self:getAnimationExists(v6)
      if v8 then
        table.insert(v3.runningAnimations, {name = v6, stopTime = v7})
      end
    end
    if 0 < state then
      table.insert(v3.runningAnimations, {name = v3.covers[state].openAnimation, startTime = v3.covers[state].openAnimationStartTime, stopTime = v3.covers[state].openAnimationStopTime or 1})
    end
    v3.state = state
    if 0 >= #v3.runningAnimations then
    end
    v3.isDirty = true
    if v4 and 0 < #v3.runningAnimations then
      self:playCoverAnimation(v3.runningAnimations[1])
    end
    Cover.updateActionText(self)
  end
end
function Cover:playCoverAnimation(animation)
  if animation.startTime ~= nil then
    self:setAnimationTime(animation.name, animation.startTime, true)
  end
  local v5 = self:getAnimationTime(animation.name)
  local v2 = MathUtil.sign(animation.stopTime - v5)
  self:setAnimationStopTime(animation.name, animation.stopTime)
  if not animation.startTime then
    local v7 = self:getAnimationTime(animation.name)
  end
  self:playAnimation(v5, v6, v7, true)
end
function Cover:getCoverByFillUnitIndex(fillUnitIndex)
  if self.spec_cover.fillUnitIndexToCovers[fillUnitIndex] ~= nil then
    return self.spec_cover.fillUnitIndexToCovers[fillUnitIndex][1]
  end
  return nil
end
function Cover.getIsNextCoverStateAllowed(v0, v1)
  return true
end
function Cover:getFillUnitSupportsToolType(superFunc, fillUnitIndex, toolType)
  if self.spec_cover.hasCovers and self.spec_cover.fillUnitIndexToCovers[fillUnitIndex] ~= nil and 0 < #self.spec_cover.fillUnitIndexToCovers[fillUnitIndex] then
    -- TODO: structure LOP_FORNPREP (pc 18, target 29)
    if self.spec_cover.state == self.spec_cover.fillUnitIndexToCovers[fillUnitIndex][1].index then
    else
      -- TODO: structure LOP_FORNLOOP (pc 28, target 19)
    end
    if not v6 and v5[1].blockedToolTypes[toolType] then
      return false
    end
  end
  return superFunc(self, fillUnitIndex, toolType)
end
function Cover.getCanBeSelected(v0, v1)
  return true
end
function Cover:loadPipeNodes(superFunc, pipeNodes, xmlFile, baseKey)
  superFunc(self, pipeNodes, xmlFile, baseKey)
  local v6 = xmlFile:getValue("vehicle.pipe#coverMinState", 0)
  self.spec_pipe.coverMinState = v6
  v6 = xmlFile:getValue("vehicle.pipe#coverMaxState", #self.spec_cover.covers)
  self.spec_pipe.coverMaxState = v6
end
function Cover:getIsPipeStateChangeAllowed(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  if self.spec_cover.state >= self.spec_pipe.coverMinState then
    -- if v0.spec_pipe.coverMaxState >= v0.spec_cover.state then goto L24 end
  end
  return false
  return true
end
function Cover:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_cover.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4, v5 = self:addActionEvent(self.spec_cover.actionEvents, InputAction.TOGGLE_COVER, self, Cover.actionEventToggleCover, false, true, false, true, nil, nil, true, true)
      if not v4 then
        local v7, v8 = self:addActionEvent(self.spec_cover.actionEvents, InputAction.IMPLEMENT_EXTRA4, self, Cover.actionEventToggleCover, false, true, false, true, nil, nil, true, true)
      end
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
      Cover.updateActionText(self)
    end
  end
end
function Cover:onStartTipping(tipSide)
  if self.spec_cover.openCoverWhileTipping then
    local v4 = self:getDischargeNodeByIndex(self.spec_trailer.tipSides[tipSide].dischargeNodeIndex)
    local v5 = self:getCoverByFillUnitIndex(v4.fillUnitIndex)
    if v5 ~= nil then
      self:setCoverState(v5.index, true)
    end
  end
end
function Cover:onOpenBackDoor(tipSide)
  if self.spec_cover.openCoverWhileTipping then
    local v4 = self:getDischargeNodeByIndex(self.spec_trailer.tipSides[tipSide].dischargeNodeIndex)
    local v5 = self:getCoverByFillUnitIndex(v4.fillUnitIndex)
    if v5 ~= nil then
      self:setCoverState(v5.index, true)
    end
  end
end
function Cover:finishedAIDischarge(superFunc)
  if self.spec_cover.hasCovers then
    self:setCoverState(0)
  end
  superFunc(self)
end
function Cover:aiPrepareLoading(superFunc, fillUnitIndex, task)
  local cover = self:getCoverByFillUnitIndex(fillUnitIndex)
  if cover ~= nil then
    self:setCoverState(cover.index)
  end
  superFunc(self, fillUnitIndex, task)
end
function Cover:aiFinishLoading(superFunc, fillUnitIndex, task)
  if self.spec_cover.hasCovers then
    self:setCoverState(0)
  end
  superFunc(self, fillUnitIndex, task)
end
function Cover:onFillUnitTriggerChanged(fillTrigger, fillTypeIndex, fillUnitIndex, numTriggers)
  if self.spec_cover.fillUnitIndexToCovers[fillUnitIndex] ~= nil then
    for v11, v12 in pairs(self.spec_cover.fillUnitIndexToCovers[fillUnitIndex]) do
      if v7 and v5.state == v12.index then
      end
    end
    v8 = self:getIsNextCoverStateAllowed(v6[1].index)
    if v6[1].autoReactToTrigger and v7 and v8 then
      self:setCoverState(v6[1].index, true)
      v5.isStateSetAutomatically = true
    end
  end
end
function Cover:onRemovedFillUnitTrigger(numTriggers)
  if numTriggers == 0 and self.spec_cover.covers[self.spec_cover.state] ~= nil and self.spec_cover.isStateSetAutomatically and self.spec_cover.covers[self.spec_cover.state].autoReactToTrigger then
    self:setCoverState(0, true)
    self.spec_cover.isStateSetAutomatically = false
  end
end
function Cover:updateActionText()
  local v2 = next(self.spec_cover.actionEvents)
  if v2 ~= nil then
    local v4 = next(self.spec_cover.actionEvents)
    if self.spec_cover.actionEvents[v4] ~= nil then
      local v3 = v3:getText("action_nextCover")
      if self.spec_cover.state == #self.spec_cover.covers then
        v4 = v4:getText("action_closeCover")
      elseif self.spec_cover.state == 0 then
        v4 = v4:getText("action_openCover")
      end
      v4:setActionEventText(v2.actionEventId, v3)
    end
  end
end
function Cover:actionEventToggleCover(actionName, inputValue, callbackState, isAnalog)
  if #self.spec_cover.covers < self.spec_cover.state + 1 then
  end
  local v7 = self:getIsNextCoverStateAllowed(v6)
  if v7 then
    self:setCoverState(v6)
    v5.isStateSetAutomatically = false
  end
end
