-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/missions/GuidedTourHelp.lua")
GuidedTour = {}
local GuidedTour_mt = Class(GuidedTour)
function GuidedTour.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.mission = mission
  v2.isLoaded = false
  v2.isRunning = false
  v2.vehicles = {}
  v2.iconFilename = nil
  v2.steps = {}
  v2.backgroundChecks = {}
  v2.testBackgroundChecks = true
  v2.finishedBackgroundChecks = {}
  if g_isDevelopmentVersion then
    addConsoleCommand("gsGuidedTourReload", "Reloads the guided tour", "consoleCommandReload", v2)
  end
  return v2
end
function GuidedTour:delete()
  removeConsoleCommand("gsGuidedTourReload")
  v1:unsubscribeAll(self)
  self:deleteIcon()
  self:deleteHotspot()
end
function GuidedTour:loadMapData(mapXmlFile, missionInfo, baseDirectory)
  self.missionInfo = missionInfo
  if missionInfo.scenario ~= nil then
  else
    local v5 = getXMLString(mapXmlFile, "map.guidedTour#filename")
    if v5 == nil then
      self.missionInfo.guidedTourActive = false
      return
    end
    v5 = Utils.getFilename(v4, baseDirectory)
  end
  if v4 ~= nil then
    self.baseDirectory = baseDirectory
    self.xmlFilename = v4
    self:load(v4)
  end
end
function GuidedTour:load(v1, v2)
  local v3 = XMLFile.load("guidedTour", v1)
  if v3 == nil then
    self.missionInfo.guidedTourActive = false
    return
  end
  local v4 = v3:getInt("guidedTour#version", 1)
  self.version = v4
  v4 = v3:getString("guidedTour.icon#filename")
  if v4 ~= nil then
    local v5 = Utils.getFilename(v4, v2)
    self.iconFilename = v5
  end
  v5 = v3:hasProperty("guidedTour.redirect")
  if v5 then
    v5 = v3:getString("guidedTour.redirect#text")
    if v5 == nil then
      Logging.warning("Guided tour redirect configuration is missing text attribute.")
    else
      local v6 = v6:convertText(v5)
      self.redirectText = v6
    end
  end
  local v7 = v3:getString("guidedTour.header#startText", "$l10n_tour_text_start_question")
  v5 = v5:convertText(...)
  self.startText = v5
  v7 = v3:getString("guidedTour.header#abortText", "$l10n_tour_text_abort")
  v5 = v5:convertText(...)
  self.abortText = v5
  v7 = v3:getString("guidedTour.header#abortTitle", "$l10n_tour_title_abort")
  v5 = v5:convertText(...)
  self.abortTitle = v5
  v5 = v3:getBool("guidedTour.header#tourCanAbort", true)
  self.canAbort = v5
  v5 = v3:getBool("guidedTour.header#allowTimeChange", false)
  self.allowTimeChange = v5
  v3:iterate("guidedTour.step", function(self, v1)
    local v3 = v3:getString(v1 .. "#name")
    v3 = v3:getBool(v1 .. "#canBeSaved", true)
    table.insert(u1.steps, {activation = {}, name = v3, canBeSaved = v3})
    v3:loadStepContentsFromXML(u0, v1, {activation = {}, name = v3, canBeSaved = v3}, u2)
  end)
  v3:iterate("guidedTour.backgroundCheck", function(self, v1)
    local v2 = v2:getString(v1 .. "#name")
    if v2 == nil then
      Logging.error("Background checks need a 'name' attribute.")
      return
    end
    table.insert(u1.backgroundChecks, {activation = {}, name = v2})
    u1.finishedBackgroundChecks[{activation = {}, name = v2}.name] = false
    v4:loadStepContentsFromXML(u0, v1, {activation = {}, name = v2}, u2)
  end)
  self.finishStateChanges = {}
  self:loadStateChangesFromXML(v3, "guidedTour.finish.stateChanges", self.finishStateChanges)
  v3:delete()
  v5 = string.split(self.mission.missionInfo.guidedTourState, ";")
  for v9, v10 in ipairs(v5) do
    if not (self.finishedBackgroundChecks[v10] ~= nil) then
      continue
    end
    self.finishedBackgroundChecks[v10] = true
  end
  self.isLoaded = true
  GuidedTourHelp.init()
  if not self.mission.missionDynamicInfo.isMultiplayer then
    v6 = v6:getIsTourSupported()
    -- if v6 then goto L190 end
  end
  self.missionInfo.guidedTourActive = false
  self:revertTourChanges()
end
function GuidedTour:loadStepContentsFromXML(xmlFile, key, step, baseDirectory)
  local v5 = xmlFile:hasProperty(key .. ".activation")
  if v5 then
    v5 = xmlFile:getString(key .. ".activation.icon#position")
    if v5 ~= nil then
      local v7 = xmlFile:getBool(key .. ".activation.icon#isPlayerTrigger", true)
      v7 = xmlFile:getBool(key .. ".activation.icon#isVehicleTrigger", true)
      v7 = xmlFile:getString(key .. ".activation.icon#triggerVehicle")
      v7 = string.getVectorN(v5, 2)
      v7 = xmlFile:getString(key .. ".activation.icon#positionVehicle")
      v7 = xmlFile:getBool(key .. ".activation.icon#targetIndicator", false)
      step.activation.icon = {isPlayerTrigger = v7, isVehicleTrigger = v7, triggerVehicle = v7, position = v7, positionVehicle = v7, targetIndicator = v7}
    end
    local v6 = xmlFile:hasProperty(key .. ".activation.check(0)")
    if v6 then
      step.activation.checks = {}
      self:loadChecksFromXML(xmlFile, key .. ".activation", step.activation.checks)
    end
    v6 = xmlFile:getInt(key .. ".activation.triggerMarker#index")
    if v6 ~= nil then
      local v8 = xmlFile:getString(key .. ".activation.triggerMarker#filename")
      v7 = Utils.getFilename(v8, baseDirectory)
      local v10 = xmlFile:getBool(key .. ".activation.triggerMarker#targetIndicator", false)
      step.activation.triggerMarker = {filename = v7, index = v6, targetIndicator = v10}
    end
    step.isActivated = false
  else
    step.isActivated = true
  end
  v5 = xmlFile:hasProperty(key .. ".stateChanges")
  if v5 then
    step.stateChanges = {}
    self:loadStateChangesFromXML(xmlFile, key .. ".stateChanges", step.stateChanges)
  end
  v5 = xmlFile:hasProperty(key .. ".dialog")
  if v5 then
    step.dialog = {}
    v8 = xmlFile:getString(key .. ".dialog#text")
    v6 = v6:convertText(...)
    xmlFile:iterate(key .. ".dialog.input", function(self, xmlFile)
      local step = step:getString(xmlFile .. "#name")
      step = step:getString(xmlFile .. "#name2")
      step = step:getString(xmlFile .. "#text")
      step = step:getBool(xmlFile .. "#keyboardOnly", false)
      step = step:getBool(xmlFile .. "#gamepadOnly", false)
      table.insert(u1.inputs, {action = step, action2 = step, text = step, keyboardOnly = step, gamepadOnly = step})
    end)
  end
  v5 = xmlFile:hasProperty(key .. ".message")
  if v5 then
    v8 = xmlFile:getString(key .. ".message#text")
    v6 = v6:convertText(...)
    step.message = {text = v6}
  end
  v5 = xmlFile:hasProperty(key .. ".hudButtons")
  if v5 then
    step.hudButtons = {}
    xmlFile:iterate(key .. ".hudButtons.button", function(self, xmlFile)
      local key = key:getString(xmlFile .. "#name")
      local step = step:getBool(xmlFile .. "#canAccess", true)
      u1.hudButtons[key] = step
    end)
  end
  v5 = xmlFile:hasProperty(key .. ".mapHotspot")
  if v5 then
    step.mapHotspot = {}
    v6 = xmlFile:getString(key .. ".mapHotspot#positionVehicle")
    step.mapHotspot.positionVehicle = v6
    v6 = xmlFile:getBool(key .. ".mapHotspot#targetIndicator")
    step.mapHotspot.targetIndicator = v6
    v5 = xmlFile:getString(key .. ".mapHotspot#position")
    if v5 ~= nil then
      v7 = string.getVectorN(v5, 2)
      step.mapHotspot.position = v7
    else
      step.mapHotspot.position = {0, 0}
    end
  end
  v5 = xmlFile:hasProperty(key .. ".goal")
  if v5 then
    step.goal = {checks = {}}
    self:loadChecksFromXML(xmlFile, key .. ".goal", step.goal.checks, baseDirectory)
  end
  step.vehicleControl = {}
  xmlFile:iterate(key .. ".vehicleControl." .. "canHireAI", function(self, xmlFile)
    local key = key:getString(xmlFile .. "#vehicle")
    local baseDirectory = baseDirectory:getBool(xmlFile .. "#value", false)
    u1[key] = baseDirectory
  end)
  step.vehicleControl.canHireAI = {}
  xmlFile:iterate(key .. ".vehicleControl." .. "canLeave", function(self, xmlFile)
    local key = key:getString(xmlFile .. "#vehicle")
    local baseDirectory = baseDirectory:getBool(xmlFile .. "#value", false)
    u1[key] = baseDirectory
  end)
  step.vehicleControl.canLeave = {}
  xmlFile:iterate(key .. ".vehicleControl." .. "canBeTurnedOn", function(self, xmlFile)
    local key = key:getString(xmlFile .. "#vehicle")
    local baseDirectory = baseDirectory:getBool(xmlFile .. "#value", false)
    u1[key] = baseDirectory
  end)
  step.vehicleControl.canBeTurnedOn = {}
  xmlFile:iterate(key .. ".vehicleControl." .. "canBeTurnedOff", function(self, xmlFile)
    local key = key:getString(xmlFile .. "#vehicle")
    local baseDirectory = baseDirectory:getBool(xmlFile .. "#value", false)
    u1[key] = baseDirectory
  end)
  step.vehicleControl.canBeTurnedOff = {}
  xmlFile:iterate(key .. ".vehicleControl." .. "canBeLifted", function(self, xmlFile)
    local key = key:getString(xmlFile .. "#vehicle")
    local baseDirectory = baseDirectory:getBool(xmlFile .. "#value", false)
    u1[key] = baseDirectory
  end)
  step.vehicleControl.canBeLifted = {}
  xmlFile:iterate(key .. ".vehicleControl." .. "canBeLowered", function(self, xmlFile)
    local key = key:getString(xmlFile .. "#vehicle")
    local baseDirectory = baseDirectory:getBool(xmlFile .. "#value", false)
    u1[key] = baseDirectory
  end)
  step.vehicleControl.canBeLowered = {}
  xmlFile:iterate(key .. ".vehicleControl." .. "canDetachImplement", function(self, xmlFile)
    local key = key:getString(xmlFile .. "#vehicle")
    local baseDirectory = baseDirectory:getBool(xmlFile .. "#value", false)
    u1[key] = baseDirectory
  end)
  step.vehicleControl.canDetachImplement = {}
  xmlFile:iterate(key .. ".vehicleControl." .. "canChangeSeeds", function(self, xmlFile)
    local key = key:getString(xmlFile .. "#vehicle")
    local baseDirectory = baseDirectory:getBool(xmlFile .. "#value", false)
    u1[key] = baseDirectory
  end)
  step.vehicleControl.canChangeSeeds = {}
  xmlFile:iterate(key .. ".vehicleControl." .. "canBeFilledByTrigger", function(self, xmlFile)
    local key = key:getString(xmlFile .. "#vehicle")
    local baseDirectory = baseDirectory:getBool(xmlFile .. "#value", false)
    u1[key] = baseDirectory
  end)
  step.vehicleControl.canBeFilledByTrigger = {}
  v6 = xmlFile:hasProperty(key .. ".introductionHelpSystem")
  if v6 then
    step.showHelpItems = {}
    xmlFile:iterate(key .. ".introductionHelpSystem.show", function(self, xmlFile)
      local key = key:getString(xmlFile .. "#id")
      local step = step:getBool(xmlFile .. "#blockInput", true)
      local baseDirectory = baseDirectory:getString(xmlFile .. "#text")
      if baseDirectory ~= nil then
        local v5 = v5:convertText(baseDirectory)
      end
      table.insert(u1.showHelpItems, {id = key, blockInput = step, customText = baseDirectory})
    end)
  end
end
function GuidedTour.loadChecksFromXML(v0, v1, v2, v3, v4)
  v1:iterate(v2 .. ".check", function(v0, v1)
    local v3 = v3:getString(v1 .. "#name")
    v3 = v3:getBool(v1 .. "#skipStep", false)
    v3 = v3:getString(v1 .. "#statsName")
    v3 = v3:getFloat(v1 .. "#statsValue")
    v3 = v3:getString(v1 .. "#vehicle")
    v3 = v3:getString(v1 .. "#toVehicle")
    v3 = v3:getInt(v1 .. "#fillUnit")
    v3 = v3:getInt(v1 .. "#fillLevel")
    v3 = v3:getString(v1 .. "#seedTypeName")
    if v3 ~= nil then
      local v4 = v4:getFillTypeIndexByName(v3)
      if {name = v3, skipStep = v3, statsName = v3, statsValue = v3, vehicle = v3, toVehicle = v3, fillUnitIndex = v3, fillLevel = v3, seedFillTypeIndex = v4}.seedFillTypeIndex == nil then
        Logging.warning("Invalid guided tour seed type name '%s'", v3)
      end
    end
    v4 = v4:getInt(v1 .. "#value")
    v2.value = v4
    v4 = v4:getString(v1 .. "#valueType")
    v2.valueType = v4
    v4 = v4:getString(v1 .. "#comparator")
    v2.comparator = v4
    v4 = v4:getString(v1 .. "#attribute")
    v2.attribute = v4
    v4 = v4:getString(v1 .. "#filename")
    if v4 ~= nil then
      local v5 = Utils.getFilename(v4, u1)
      v2.filename = v5
    end
    table.insert(u2, v2)
  end)
end
function GuidedTour.loadStateChangesFromXML(v0, v1, v2, v3)
  v1:iterate(v2 .. ".change", function(v0, v1)
    local v3 = v3:getString(v1 .. "#name")
    v3 = v3:getString(v1 .. "#vehicle")
    v3 = v3:getInt(v1 .. "#farmlandId")
    v3 = v3:getInt(v1 .. "#fillUnit")
    v3 = v3:getInt(v1 .. "#fillLevel")
    v3 = v3:getInt(v1 .. "#fieldId")
    v3 = v3:getString(v1 .. "#position")
    if v3 ~= nil then
      local v4 = string.getVectorN(v3, 2)
    end
    v4 = v4:getFloat(v1 .. "#rotationY")
    if v4 ~= nil then
      local v5 = math.rad(v4)
      v2.rotationY = v5
    end
    v5 = v5:getString(v1 .. "#fruitType")
    if v5 ~= nil then
      local v6 = v6:getFruitTypeByName(v5)
      if v6 ~= nil then
        v2.fruitTypeIndex = v6.index
      else
        Logging.xmlError(u0, "Invalid fruitType '%s' for stateChange '%s'. Using wheat instead!", v5, v1)
        v2.fruitTypeIndex = FruitType.WHEAT
      end
    end
    v6 = v6:getString(v1 .. "#ownerFarmId")
    if v6 ~= nil then
      local v8 = string.lower(v6)
      if v8 == "spectator" then
      elseif v8 == "nobody" then
      else
        if v8 == "default" then
        else
          local v9 = tonumber(v6)
        end
      end
      v2.ownerFarmId = v7
    end
    table.insert(u1, v2)
  end)
end
function GuidedTour:validateTour()
  for v4, v5 in ipairs(self.steps) do
    if v5.activation.icon ~= nil and v5.activation.icon.vehicle ~= nil and self.vehicles[v5.activation.icon.vehicle] == nil then
      Logging.devError("GuidedTour: Activation-Icon vehicle '%s' is not defined in default vehicles.xml", v5.activation.icon.vehicle)
      return false
    end
    if v5.activation.checks ~= nil then
      for v9, v10 in ipairs(v5.activation.checks) do
        if v10.vehicle ~= nil and self.vehicles[v10.vehicle] == nil then
          Logging.devError("GuidedTour: Activation-Check vehicle '%s' is not defined in default vehicles.xml", v10.vehicle)
          return false
        end
        if not (v10.toVehicle ~= nil) then
          continue
        end
        if not (self.vehicles[v10.toVehicle] == nil) then
          continue
        end
        Logging.devError("GuidedTour: Activation-Check vehicle '%s' is not defined in default vehicles.xml", v10.vehicle)
        return false
      end
    end
    if not (v5.goal ~= nil) then
      continue
    end
    if not (v5.goal.checks ~= nil) then
      continue
    end
    for v9, v10 in ipairs(v5.goal.checks) do
      if v10.vehicle ~= nil and self.vehicles[v10.vehicle] == nil then
        Logging.devError("GuidedTour: Goal-Check vehicle '%s' is not defined in default vehicles.xml", v10.vehicle)
        return false
      end
      if not (v10.toVehicle ~= nil) then
        continue
      end
      if not (self.vehicles[v10.toVehicle] == nil) then
        continue
      end
      Logging.devError("GuidedTour: Goal-Check vehicle '%s' is not defined in default vehicles.xml", v10.vehicle)
      return false
    end
  end
  return true
end
function GuidedTour:getIsRunning()
  return self.isRunning
end
function GuidedTour:getCanAbort()
  return self.canAbort
end
function GuidedTour:getBlocksTimeChange()
  if self.isRunning then
  end
  return v1
end
function GuidedTour:updateMissionState()
  for v5, v6 in pairs(self.finishedBackgroundChecks) do
    if not v6 then
      continue
    end
  end
  self.mission.missionInfo.guidedTourState = v1
end
function GuidedTour:addVehicle(vehicle, name)
  self.vehicles[name] = vehicle
end
function GuidedTour:removeVehicle(name)
  self.vehicles[name] = nil
end
function GuidedTour:abort()
  if self.missionInfo.guidedTourActive and self.canAbort then
    self.missionInfo.guidedTourActive = false
    v1:hideAll()
    if self.isRunning then
      self:onFinished()
    end
    if not Profiler.IS_INITIALIZED then
      v2:showInGameMessage(v1, self.abortText, -1)
    end
  end
end
function GuidedTour:onStarted()
  v1:setTimeScaleMultiplier(0.1)
  self.missionInfo.guidedTourVersion = self.version
  self.isRunning = true
  self:loadHotspot()
  if self.mission.helpIconsBase ~= nil then
    v1:showHelpIcons(false, true)
  end
  self:loadIcon()
  if self.vehicles[self.missionInfo.guidedTourLastVehicleName] ~= nil then
    v2:enterVehicleWithPlayer(self.vehicles[self.missionInfo.guidedTourLastVehicleName], g_currentMission.player, 1)
  end
end
function GuidedTour:revertTourChanges()
  v1:setTimeScaleMultiplier(1)
  for v4, v5 in ipairs(self.finishStateChanges) do
    self:performStateChange(v5)
  end
  self.vehicles = {}
  self:deleteIcon()
  self:deleteHotspot()
  self:setTargetIndicator()
  self.isRunning = false
  self.missionInfo.guidedTourActive = false
  v1 = v1:getValue("showHelpIcons")
  if v1 and self.mission.helpIconsBase ~= nil then
    v1:showHelpIcons(true, true)
  end
end
function GuidedTour:onFinished()
  self:revertTourChanges()
  v1:publish(MessageType.MISSION_TOUR_FINISHED)
end
function GuidedTour:update(dt)
  if self.redirectText ~= nil then
    if self.missionInfo.guidedTourActive then
      local v2 = v2:getIsGuiVisible()
      if not v2 and self.missionInfo.guidedTourStep == 0 then
        InfoDialog.show(self.redirectText)
        self.missionInfo.guidedTourStep = 1
        self.missionInfo.guidedTourSaveStep = 1
      end
    end
    return
  end
  if not self.isRunning and self.missionInfo.guidedTourActive then
    v2 = v2:getIsGuiVisible()
    if not v2 then
      if self.missionInfo.guidedTourStep == 0 then
        if self.canAbort then
          v2 = self:validateTour()
          if v2 then
            YesNoDialog.show(self.onReactToDialog, self, self.startText, "")
            -- goto L113  (LOP_JUMP +39)
          end
          self.missionInfo.guidedTourActive = false
          -- goto L113  (LOP_JUMP +33)
        end
        self:onStarted()
      elseif self.version == self.missionInfo.guidedTourVersion then
        self:onStarted()
      else
        self:revertTourChanges()
        local v3 = v3:getText("ui_tour_newVersion")
        InfoDialog.show(...)
        self.missionInfo.guidedTourActive = false
      end
    end
  end
  if self.isRunning then
    if self.vehicleDependendIcon ~= nil then
      local v4, v5, v6 = localToWorld(self.vehicleDependendIcon.rootNode, self.vehicleDependendIconOffset[1], self.vehicleDependendIconOffset[2], self.vehicleDependendIconOffset[3])
      self:setIcon(true, v4, v6, self.vehicleDependendIconIndicator, false, self.vehicleDependendIcon, self.vehicleDependendIconOffset)
    end
    if self.stepActivationCheck ~= nil then
      v2 = self:performCheck(self.stepActivationCheck)
      if v2 and self.stepActivationCheckCallback ~= nil then
        self.stepActivationCheckCallback()
      end
    end
    if self.goalPredicate ~= nil then
      v2 = self.goalPredicate()
      if v2 then
        self.goalAchievedCallback()
      end
    end
    if self.testBackgroundChecks then
      self:runBackgroundChecks()
    end
  end
end
function GuidedTour:draw()
  local dt = self:getCurrentStep()
  if dt ~= nil and dt.isActivated and dt.message ~= nil then
    IntroductionHelpHUDUtil.drawMessage(dt.message.text)
  end
end
function GuidedTour:onReactToDialog(yes)
  v2:setIsActive(yes)
  if yes then
    self:onStarted()
    return
  end
  self:abort()
end
function GuidedTour:onIconTrigger(dt, v2, v3, v4, v5, v6)
  if v3 and v2 ~= 0 then
    local v7 = getHasTrigger(v2)
    if not v7 and self.iconTriggerCallback ~= nil then
      self.iconTriggerCallback(v2)
    end
  end
end
function GuidedTour:onMessageClosed()
  if self.messageClosedCallback ~= nil then
    self.messageClosedCallback()
  end
end
function GuidedTour:getControlledTourVehicleName()
  if g_currentMission.controlledVehicle ~= nil then
    for v5, v6 in pairs(self.vehicles) do
      if not (v6 == dt) then
        continue
      end
      return v5
    end
  end
  return nil
end
function GuidedTour:runStep(index, fromTrigger, fromDialog)
  if index == 0 then
  end
  if index < self.missionInfo.guidedTourStep then
    return
  end
  if #self.steps < index then
    self:onFinished()
    return
  end
  if index ~= self.missionInfo.guidedTourStep then
    Logging.info("Guided-Tour: Started step '%d'", index)
  end
  if index ~= self.missionInfo.guidedTourStep then
    v4:publish(MessageType.MISSION_TOUR_CHANGED)
  end
  self.missionInfo.guidedTourStep = index
  if self.steps[index].canBeSaved then
    self.missionInfo.guidedTourSaveStep = index
  end
  local v6 = self:getControlledTourVehicleName()
  self.missionInfo.guidedTourLastVehicleName = v6
  if v4.activation ~= nil then
    -- if v2 then goto L229 end
    if v4.activation.icon ~= nil then
      local v7, v8 = unpack(v4.activation.icon.position)
      if v4.activation.icon.positionVehicle ~= nil then
        local v12, v13, v14 = localToWorld(self.vehicles[v4.activation.icon.positionVehicle].rootNode, v7, 0, v8)
      end
      self:setIcon(true, v7, v8, v4.activation.icon.targetIndicator, false, v10, v11)
      self.iconTriggerCallback = function(self)
        if u0.isPlayerTrigger then
          -- if g_currentMission.player.rootNode ~= v0 then goto L11 end
        elseif u0.isVehicleTrigger then
          local fromTrigger = fromTrigger:getNodeObject(self)
          if fromTrigger ~= nil then
            local fromDialog = fromTrigger:isa(Vehicle)
            if fromDialog and u0.triggerVehicle ~= nil and fromTrigger ~= u1.vehicles[u0.triggerVehicle] then
            end
          end
        end
        if index then
          u2.isActivated = true
          u1.iconTriggerCallback = nil
          u1.stepActivationCheck = nil
          u1.stepActivationCheckCallback = nil
          fromTrigger:runStep(u3, true, false)
        end
      end
    elseif v4.activation.triggerMarker ~= nil then
      v7 = self:findFirstPlaceable(v4.activation.triggerMarker.filename)
      if v7 ~= nil then
        local v8, v9, v10 = v7:getTriggerMarkerPosition(v4.activation.triggerMarker.index)
        self:setIcon(true, v8, v10, v4.activation.triggerMarker.targetIndicator, true)
        self.iconTriggerCallback = function(self)
          u0.isActivated = true
          u1.iconTriggerCallback = nil
          u1.stepActivationCheck = nil
          u1.stepActivationCheckCallback = nil
          index:runStep(u2, true, false)
        end
      end
    end
    if v4.activation.checks ~= nil and #v4.activation.checks == 1 then
      self.stepActivationCheck = v4.activation.checks[1]
      if v4.activation.checks[1].skipStep then
      end
      self.stepActivationCheckCallback = function()
        u0.isActivated = true
        u1.iconTriggerCallback = nil
        u1.stepActivationCheck = nil
        u1.stepActivationCheckCallback = nil
        self:runStep(u2, u3, false)
      end
    end
    if v5 then
      return
    end
    self:setIcon(false)
  else
    self:setIcon(false)
  end
  if v4.mapHotspot ~= nil then
    v6, v7 = unpack(v4.mapHotspot.position)
    if v4.mapHotspot.positionVehicle ~= nil then
      local v11, v12, v13 = localToWorld(self.vehicles[v4.mapHotspot.positionVehicle].rootNode, v6, 0, v7)
    end
    self:setIcon(true, v6, v7, v5.targetIndicator, false, v9, v10)
  else
    self:setIcon(false)
  end
  if v4.dialog ~= nil and not fromDialog then
    if self.mission.controlledVehicle ~= nil then
      self.mission.controlledVehicle:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF)
      self.mission.controlledVehicle:setCustomBrakeForce(100)
    end
    v7:publish(MessageType.MISSION_TOUR_DIALOG)
    self:showDialog(v4.dialog, function()
      if u0 ~= nil then
        self:setCustomBrakeForce(nil)
      end
      self:runStep(u2, u3, true)
    end)
    return
  end
  self:showHelpItems(v4)
  v4.isActivated = true
  if v4.stateChanges ~= nil then
    for v9, v10 in ipairs(v4.stateChanges) do
      self:performStateChange(v10)
    end
  end
  if v4.goal ~= nil then
    self.goalPredicate = function()
      for fromDialog, v4 in ipairs(u0.goal.checks) do
        local v5 = v5:performCheck(v4)
        if not not v5 then
          continue
        end
        return false
      end
      return true
    end
    self.goalAchievedCallback = function()
      u0.goalPredicate = nil
      self:runStep(u1 + 1, false, false)
    end
    return
  end
  self:runStep(index + 1, false, false)
end
function GuidedTour:runBackgroundChecks()
  for v4, v5 in ipairs(self.backgroundChecks) do
    if not not self.finishedBackgroundChecks[v5.name] then
      continue
    end
    for v10, v11 in ipairs(v5.activation.checks) do
      local v12 = self:performCheck(v11)
      if not not v12 then
        continue
      end
      break
    end
    if not v6 then
      continue
    end
    self.testBackgroundChecks = false
    self.finishedBackgroundChecks[v5.name] = true
    self:updateMissionState()
    if v5.dialog ~= nil then
      self:showDialog(v5.dialog, function()
        u0.testBackgroundChecks = true
      end)
    end
    self:showHelpItems(v5)
  end
end
function GuidedTour:showDialog(dialog, callback)
  local v5 = v5:getInputHelpMode()
  if v5 ~= GS_INPUT_HELP_MODE_GAMEPAD then
  end
  for v8, v9 in ipairs(dialog.inputs) do
    if v9.action2 ~= nil then
      -- if InputAction[v9.action2] then goto L35 end
    end
    if v9.keyboardOnly and not not v4 then
      continue
    end
    if not Platform.isMobile and v9.gamepadOnly and not v4 then
      continue
    end
    local v18 = v18:convertText(v9.text)
    local v14 = v14:getControllerSymbolOverlays(...)
    table.insert(...)
  end
  if self.mission.controlledVehicle ~= nil and self.mission.controlledVehicle.setCruiseControlState ~= nil then
    v5:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF)
    v5:brake(100)
  end
  self.messageClosedCallback = function()
    u0.messageClosedCallback = nil
    u1()
  end
  v7 = v7:getText("ui_tour")
  v8 = v8:convertText(dialog.text)
  v5:showInGameMessage(v7, v8, -1, fromDialog, self.onMessageClosed, self)
end
function GuidedTour:loadIcon()
  if self.iconFilename ~= nil then
    index:loadI3DFileAsync(self.iconFilename, true, true, GuidedTour.onIconLoaded, self, nil)
  end
end
function GuidedTour:onIconLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    self.icon = i3dNode
    local v5 = getRootNode()
    link(v5, self.icon)
    local v6 = getChildAt(self.icon, 0)
    v5 = getChildAt(v6, 0)
    addTrigger(v5, "onIconTrigger", self)
    setWorldTranslation(self.icon, 0, -100, 0)
    v4:publish(MessageType.MISSION_TOUR_STARTED)
    self:runStep(self.missionInfo.guidedTourStep, false, false)
  end
end
function GuidedTour:deleteIcon()
  if self.icon ~= nil then
    local fromDialog = getChildAt(self.icon, 0)
    local fromTrigger = getChildAt(fromDialog, 0)
    removeTrigger(...)
    delete(self.icon)
    self.icon = nil
  end
end
function GuidedTour:setIcon(index, fromTrigger, fromDialog, v4, v5, v6, v7)
  setVisibility(self.icon, index)
  self.vehicleDependendIcon = nil
  self.vehicleDependendIconOffset = nil
  self.vehicleDependendIconIndicator = nil
  if index then
    self.vehicleDependendIcon = v6
    self.vehicleDependendIconOffset = v7
    self.vehicleDependendIconIndicator = v4
    local v8 = getTerrainHeightAtWorldPos(self.mission.terrainRootNode, fromTrigger, 0, fromDialog)
    if v5 then
    end
    setWorldTranslation(self.icon, fromTrigger, v8, fromDialog)
  end
  self:setHotspot(index, v4, fromTrigger, fromDialog)
end
function GuidedTour:loadHotspot()
  local index = TourHotspot.new()
  self.mapHotspot = index
  index:addMapHotspot(self.mapHotspot)
end
function GuidedTour:deleteHotspot()
  if self.mapHotspot ~= nil then
    index:removeMapHotspot(self.mapHotspot)
    index:delete()
    self.mapHotspot = nil
  end
end
function GuidedTour:setHotspot(active, targetIndicator, x, z, vehicle)
  v6:setVisible(active)
  if active then
    if vehicle ~= nil then
      local v7, v8, v9 = getWorldTranslation(self.vehicles[vehicle].rootNode)
    end
    v6:setWorldPosition(x, z)
  end
  self:setTargetIndicator(active and targetIndicator)
end
function GuidedTour:setTargetIndicator(active)
  if active then
    fromTrigger:setMapTargetHotspot(self.mapHotspot)
    self.mission.disableMapTargetHotspotHiding = true
    return
  end
  fromTrigger:setMapTargetHotspot(nil)
  self.mission.disableMapTargetHotspotHiding = false
end
function GuidedTour:hideHelpItems(index)
  if index.hideHelpItems ~= nil then
    if self.lastBrakeForceVehicle ~= nil then
      fromTrigger:setCustomBrakeForce(nil)
      self.lastBrakeForceVehicle = nil
    end
    for v5, v6 in pairs(index.hideHelpItems) do
      v7:hideHelp(v6.id, true)
    end
  end
end
function GuidedTour:showHelpItems(index)
  if index.showHelpItems ~= nil then
    if self.mission.controlledVehicle ~= nil then
      self.mission.controlledVehicle:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF)
      self.mission.controlledVehicle:setCustomBrakeForce(100)
    end
    fromDialog:publish(MessageType.MISSION_TOUR_DIALOG)
    for v6, v7 in pairs(index.showHelpItems) do
      v12:showHelp(v7.id, true, v7.blockInput, v7.customText, function()
        if u0 ~= nil then
          self:setCustomBrakeForce(nil)
        end
      end)
    end
  end
end
function GuidedTour:performStateChange(index)
  if index.name == "vehicleSetFillLevel" then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L177
    local v4 = self.vehicles[index.vehicle]:getFillUnitFillType(index.fillUnitIndex)
    local v5 = self.vehicles[index.vehicle]:getFillUnitFillLevel(index.fillUnitIndex)
    local v6 = self.vehicles[index.vehicle]:getOwnerFarmId()
    if v4 then
    end
    fromTrigger:addFillUnitFillLevel(v6, fromDialog, index.fillLevel - v5, v4, v7, nil)
    return
  end
  if index.name == "vehicleOwnerFarmId" then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L177
    self.vehicles[index.vehicle]:setOwnerFarmId(index.ownerFarmId, false)
    return
  end
  if index.name == "vehicleDismissHelper" then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L177
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L177
    self.vehicles[index.vehicle]:stopCurrentAIJob()
    return
  end
  if index.name == "vehicleReset" then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L177
    if index.position == nil then
      Logging.devWarning("Missing position data for state change vehicleReset")
      return
    end
    if index.rotationY == nil then
      Logging.devWarning("Missing rotationY data for state change vehicleReset")
      return
    end
    fromDialog:teleportVehicle(fromTrigger, index.position[1], index.position[2], index.rotationY)
    return
  end
  if index.name == "farmlandOwnerFarmId" then
    if index.ownerFarmId == AccessHandler.NOBODY then
    end
    v4:setLandOwnership(fromTrigger, fromDialog)
    return
  end
  if index.name == "cultivateField" then
    fromTrigger:addFieldUpdateTask(index.fieldId, nil, FieldManager.FIELDSTATE_CULTIVATED, nil)
    return
  end
  if index.name == "sowField" then
    fromTrigger:addFieldUpdateTask(index.fieldId, index.fruitTypeIndex, FieldManager.FIELDSTATE_GROWING, 1)
  end
end
function GuidedTour:performCheck(check)
  if check.name == "vehicleIsControlled" then
    if self.mission.controlledVehicle ~= nil and self.mission.controlledVehicle ~= self.vehicles[check.vehicle] then
    end
    return fromTrigger
  end
  if check.name == "vehicleIsMotorStarted" then
    if self.vehicles[check.vehicle] ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L49
    end
    local v5 = fromTrigger:getFullName()
    Logging.warning(...)
    return false
    return fromTrigger:getIsMotorStarted()
  end
  if check.name == "vehicleIsTurnedOn" then
    if self.vehicles[check.vehicle] ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L77
    end
    v5 = fromTrigger:getFullName()
    Logging.warning(...)
    return false
    fromDialog = fromTrigger:getIsTurnedOn()
    return fromDialog
  end
  if check.name == "vehicleIsAIActive" then
    if self.vehicles[check.vehicle] ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L105
    end
    v5 = fromTrigger:getFullName()
    Logging.warning(...)
    return false
    fromDialog = fromTrigger:getIsAIActive()
    return fromDialog
  end
  if check.name == "canEnterVehicle" then
    return fromTrigger:getCanEnterVehicle()
  end
  if check.name == "combineHasCutterAttached" then
    if 0 >= self.vehicles[check.vehicle].spec_combine.numAttachedCutters then
    end
    return true
  end
  if check.name == "vehicleIsLowered" then
    fromTrigger = fromTrigger:getIsLowered()
    return fromTrigger
  end
  if check.name == "vehicleAttachedTo" then
    if self.vehicles[check.vehicle].rootVehicle ~= self.vehicles[check.toVehicle] then
    end
    return true
  end
  if check.name == "vehicleDetached" then
    fromDialog = fromDialog:getAttacherVehicle()
    if fromDialog ~= nil then
    end
    return true
  end
  if check.name == "vehicleSeedType" then
    local v4 = self.vehicles[check.vehicle]:getSowingMachineSeedFillTypeIndex()
    if v4 ~= check.seedFillTypeIndex then
    end
    return true
  end
  if check.name == "vehicleIndoorCamera" then
    fromDialog = self.vehicles[check.vehicle]:getActiveCamera()
    if fromDialog ~= nil then
    end
    return v4
  end
  if check.name == "playerIsWalking" then
    if self.mission.controlledVehicle ~= nil then
    end
    return true
  end
  if check.name == "fillLevelAbove" then
    fromDialog = fromDialog:getFillUnitFillLevel(check.fillUnitIndex)
    if check.fillLevel > fromDialog then
    end
    return true
  end
  if check.name == "fillLevelBelow" then
    fromDialog = fromDialog:getFillUnitFillLevel(check.fillUnitIndex)
    if fromDialog > check.fillLevel then
    end
    return true
  end
  if check.name == "vehicle.isOwned" then
    fromDialog = self:findFirstVehicle(check.filename)
    if fromDialog == nil then
    end
    return true
  end
  if check.name == "vehicle.isNotOwned" then
    fromDialog = self:findFirstVehicle(check.filename)
    if fromDialog ~= nil then
    end
    return true
  end
  if check.name == "vehicle.isAnyControlled" then
    if check.filename == nil then
      if self.mission.controlledVehicle == nil then
      end
      return true
    end
    if self.mission.controlledVehicle ~= nil and self.mission.controlledVehicle.configFileName ~= check.filename then
    end
    return fromTrigger
  end
  if check.name == "vehicle.fillLevel" then
    fromTrigger = self:findFirstVehicle(check.filename)
    if fromTrigger == nil then
      return false
    end
    fromTrigger:getFillLevelInformation({addFillLevel = function(self, check, fromTrigger)
      u0 = u0 + check
    end})
    v5 = self:performComparison(0, check.value, "number", check.comparator)
    return v5
  end
  if check.name == "stats.attribute" then
    v4 = v4:farmStats()
    v4 = v4:getTotalValue(check.attribute)
    fromTrigger = self:performComparison(v4, check.value, "number", check.comparator)
    return fromTrigger
  end
  if check.name == "money.above" then
    fromDialog = fromDialog:getMoney()
    if check.value > fromDialog then
    end
    return true
  end
  if check.name == "money.below" then
    fromDialog = fromDialog:getMoney()
    if fromDialog >= check.value then
    end
    return true
  end
  if check.name == "placeable.isPlaced" then
    fromDialog = self:findFirstPlaceable(check.filename)
    if fromDialog == nil then
    end
    return true
  end
  if check.name == "placeable.attribute" then
    fromTrigger = self:findFirstPlaceable(check.filename)
    if fromTrigger ~= nil then
      fromDialog = self:performAttributeCheckOnObject(fromTrigger, check)
    end
    return fromDialog
  end
  if check.name == "placeable.numAnimals" then
    fromTrigger = self:findFirstPlaceable(check.filename)
    if fromTrigger ~= nil then
      v5 = fromTrigger:getNumOfAnimals()
      fromDialog = self:performComparison(v5, check.value, "number", check.comparator)
    end
    return fromDialog
  end
  if check.name == "placeable.foodLevel" then
    fromTrigger = self:findFirstPlaceable(check.filename)
    if fromTrigger ~= nil then
      v5 = fromTrigger:getTotalFood()
      fromDialog = self:performComparison(v5, check.value, "number", check.comparator)
    end
    return fromDialog
  end
  if check.name == "placeable.animalPalletFillLevel" then
    fromTrigger = self:findFirstPlaceable(check.filename)
    if fromTrigger ~= nil then
      fromDialog = self:performComparison(fromTrigger.spec_husbandryPallets.fillLevel, check.value, "number", check.comparator)
    end
    return fromDialog
  end
  if check.name == "farm.attribute" then
    v4 = v4:getFarmId()
    fromTrigger = fromTrigger:getFarmById(...)
    fromDialog = self:performAttributeCheckOnObject(fromTrigger, check)
    return fromDialog
  end
  if check.name == "time.period" then
    fromTrigger = self:performComparison(self.mission.environment.currentPeriod, check.value, "number", check.comparator)
    return fromTrigger
  end
  if check.name == "time.hour" then
    fromTrigger = self:performComparison(self.mission.environment.currentHour, check.value, "number", check.comparator)
    return fromTrigger
  end
  if check.name == "introductionHelpFinished" then
    if #g_currentMission.introductionHelpSystem.drawHelpQueue == 0 and g_currentMission.introductionHelpSystem.currentElement ~= nil then
    end
    return fromTrigger
  end
  if check.name == "stats" then
    fromTrigger = fromTrigger:farmStats()
    v4 = fromTrigger:getTotalValue(check.statsName)
    if check.statsValue >= v4 then
    end
    return true
  end
  return false
end
function GuidedTour:findFirstPlaceable(xmlFilename)
  local fromTrigger = fromTrigger:getFarmId()
  for v6, v7 in ipairs(self.mission.placeableSystem.placeables) do
    if not (v7.configFileName == xmlFilename) then
      continue
    end
    local v8 = v7:getOwnerFarmId()
    if not (v8 == fromTrigger) then
      continue
    end
    return v7
  end
  return nil
end
function GuidedTour:findFirstVehicle(xmlFilename)
  local fromTrigger = fromTrigger:getFarmId()
  for v6, v7 in ipairs(self.mission.vehicles) do
    if not (v7.configFileName == xmlFilename) then
      continue
    end
    local v8 = v7:getOwnerFarmId()
    if not (v8 == fromTrigger) then
      continue
    end
    return v7
  end
  return nil
end
function GuidedTour.performAttributeCheckOnObject(v0, index, fromTrigger)
  return false
end
function GuidedTour.performComparison(v0, index, fromTrigger, fromDialog, v4)
  local v5 = type(index)
  if v5 ~= fromDialog then
    return false
  end
  if fromDialog == "number" then
    v5 = tonumber(fromTrigger)
    if v4 == "lt" then
      if index >= v5 then
      end
      return true
    end
    if v4 == "lte" then
      if index > fromTrigger then
      end
      return true
    end
    if v4 == "eq" then
      if index ~= fromTrigger then
      end
      return true
    end
    if v4 == "neq" then
      if index == fromTrigger then
      end
      return true
    end
    if v4 == "gt" then
      if fromTrigger >= index then
      end
      return true
    end
    if v4 == "gte" then
      if fromTrigger > index then
      end
      return true
    end
    return false
  end
  if fromDialog == "bool" then
    if fromTrigger ~= "true" then
    end
    if index ~= true then
    end
    return true
  end
  if fromDialog == "string" then
    if v4 == "eq" then
      if index ~= fromTrigger then
      end
      return true
    end
    if index == fromTrigger then
    end
    return true
  end
end
function GuidedTour:getCurrentStep()
  return self.steps[self.missionInfo.guidedTourStep]
end
function GuidedTour:getCanStartAI(index)
  return self:getVehicleControlValue(index, "canHireAI")
end
function GuidedTour:getCanLeaveVehicle(index)
  return self:getVehicleControlValue(index, "canLeave")
end
function GuidedTour:getCanDetachImplement(index)
  return self:getVehicleControlValue(index, "canDetachImplement")
end
function GuidedTour:getCanBeTurnedOn(index)
  return self:getVehicleControlValue(index, "canBeTurnedOn")
end
function GuidedTour:getCanBeTurnedOff(index)
  return self:getVehicleControlValue(index, "canBeTurnedOff")
end
function GuidedTour:getCanBeLowered(index)
  return self:getVehicleControlValue(index, "canBeLowered")
end
function GuidedTour:getCanBeLifted(index)
  return self:getVehicleControlValue(index, "canBeLifted")
end
function GuidedTour:getCanChangeSeeds(index)
  return self:getVehicleControlValue(index, "canChangeSeeds")
end
function GuidedTour:getCanBeFilledByTrigger(index)
  return self:getVehicleControlValue(index, "canBeFilledByTrigger")
end
function GuidedTour:getVehicleControlValue(index, fromTrigger)
  local fromDialog = self:getIsRunning()
  if not fromDialog then
    return true
  end
  fromDialog = self:getCurrentStep()
  if fromDialog == nil then
    return false
  end
  if fromDialog.vehicleControl[fromTrigger] == nil then
    Logging.warning("Name '%s' not defined in vehicleControl", fromTrigger)
    return false
  end
  for v8, v9 in pairs(v4) do
    if not (self.vehicles[v8] == index) then
      continue
    end
    return v9
  end
  return false
end
function GuidedTour:getCanAccessHudButton(index)
  local fromTrigger = self:getIsRunning()
  if not fromTrigger then
    return true
  end
  fromTrigger = self:getCurrentStep()
  if fromTrigger ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L17
  end
  return false
  return Utils.getNoNil(fromTrigger.hudButtons[index], false)
end
function GuidedTour:getPassedSteps()
  -- TODO: structure LOP_FORNPREP (pc 8, target 30)
  if not self.steps[1].dialog then
  end
  if v6 ~= nil and v5.isActivated then
    table.insert(index, v6)
  end
  -- TODO: structure LOP_FORNLOOP (pc 29, target 9)
  return index
end
function GuidedTour.consoleCommandReload(v0, index)
  if g_currentMission.guidedTour ~= nil then
    local fromDialog = table.copy(g_currentMission.guidedTour.vehicles, 0)
    if g_currentMission.guidedTour.isRunning then
      g_currentMission.guidedTour:onFinished()
    end
    fromTrigger:delete()
    fromTrigger.missionInfo.guidedTourActive = true
    if index ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000000 -> L31
    end
    v4.guidedTourStep = 0
    local v5 = GuidedTour.new(g_currentMission)
    v5.xmlFilename = fromTrigger.xmlFilename
    v5.baseDirectory = fromTrigger.baseDirectory
    v5.missionInfo = fromTrigger.missionInfo
    v5:load(fromTrigger.xmlFilename, fromTrigger.baseDirectory)
    for v9, v10 in pairs(fromDialog) do
      v5:addVehicle(v10, v9)
    end
    g_currentMission.guidedTour = v5
    v6:resetHelpSystem()
  end
end
