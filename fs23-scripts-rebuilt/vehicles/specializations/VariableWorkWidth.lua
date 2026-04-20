-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/VariableWorkWidthStateEvent.lua")
VariableWorkWidth = {SEND_NUM_BITS = 6}
source("dataS/scripts/gui/hud/VariableWorkWidthHUDExtension.lua")
function VariableWorkWidth.prerequisitesPresent(specializations)
  return true
end
function VariableWorkWidth.initSpecialization()
  local v3 = v3:getText("configuration_workingWidth")
  v0:addConfigurationType("variableWorkWidth", v3, "variableWorkWidth", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("VariableWorkWidth")
  VariableWorkWidth.registerSectionPaths(Vehicle.xmlSchema, "vehicle.variableWorkWidth")
  VariableWorkWidth.registerSectionPaths(Vehicle.xmlSchema, "vehicle.variableWorkWidth.variableWorkWidthConfigurations.variableWorkWidthConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.variableWorkWidth.variableWorkWidthConfigurations.variableWorkWidthConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.variableWorkWidth#widthReferenceWorkAreaIndex", "Width of this work area is used as reference for the HUD display", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.variableWorkWidth#defaultStateLeft", "Default state on left side", "Max. possible state")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.variableWorkWidth#defaultStateRight", "Default state on right side", "Max. possible state")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.variableWorkWidth#aiKeepCurrentWidth", "Defines if the ai should keep the current width or change it", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.variableWorkWidth#aiStateLeft", "AI state on left side", "Max. possible state")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.variableWorkWidth#aiStateRight", "AI state on right side", "Max. possible state")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_KEY .. ".section#index", "Section index (Section needs to be active to activate workArea)")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".section#index", "Section index (Section needs to be active to activate workArea)")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).variableWorkWidth#leftSide", "Left side section states", "Max. state")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).variableWorkWidth#rightSide", "Right side section states", "Max. state")
end
function VariableWorkWidth:registerSectionPaths(v1)
  self:register(XMLValueType.BOOL, v1 .. ".sections.section(?)#isLeft", "Section side", false)
  self:register(XMLValueType.BOOL, v1 .. ".sections.section(?)#isCenter", "Is center section", false)
  self:register(XMLValueType.FLOAT, v1 .. ".sections.section(?)#width", "Section max. width as percentage [0..1]", "Automatically calculated")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".sections.section(?)#maxWidthNode", "Position of this node defines max. width of this section")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".sections.section(?).effect(?)#node", "Effect to deactivate/activate")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".sectionNodes.sectionNode(?)#node", "Section node")
  self:register(XMLValueType.BOOL, v1 .. ".sectionNodes.sectionNode(?)#isLeft", "Section node")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".sectionNodes.sectionNode(?)#minTrans", "Min. translation")
  self:register(XMLValueType.FLOAT, v1 .. ".sectionNodes.sectionNode(?)#minTransX", "Min. X translation")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".sectionNodes.sectionNode(?)#maxTrans", "Max. translation")
  self:register(XMLValueType.FLOAT, v1 .. ".sectionNodes.sectionNode(?)#maxTransX", "Max. X translation")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".sectionNodes.sectionNode(?)#minRot", "Min. rotation")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".sectionNodes.sectionNode(?)#endRot", "Max. rotation")
  self:register(XMLValueType.INT, v1 .. ".sectionNodes.sectionNode(?)#workAreaIndex", "Work area index", 1)
end
function VariableWorkWidth.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onVariableWorkWidthSectionChanged")
end
function VariableWorkWidth.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setSectionsActive", VariableWorkWidth.setSectionsActive)
  SpecializationUtil.registerFunction(vehicleType, "setSectionNodePercentage", VariableWorkWidth.setSectionNodePercentage)
  SpecializationUtil.registerFunction(vehicleType, "updateSections", VariableWorkWidth.updateSections)
  SpecializationUtil.registerFunction(vehicleType, "updateSectionStates", VariableWorkWidth.updateSectionStates)
  SpecializationUtil.registerFunction(vehicleType, "getEffectByNode", VariableWorkWidth.getEffectByNode)
  SpecializationUtil.registerFunction(vehicleType, "getVariableWorkWidth", VariableWorkWidth.getVariableWorkWidth)
  SpecializationUtil.registerFunction(vehicleType, "getVariableWorkWidthUsage", VariableWorkWidth.getVariableWorkWidthUsage)
end
function VariableWorkWidth.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", VariableWorkWidth.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", VariableWorkWidth.getIsWorkAreaActive)
end
function VariableWorkWidth.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", VariableWorkWidth)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", VariableWorkWidth)
  SpecializationUtil.registerEventListener(vehicleType, "onAIFieldWorkerStart", VariableWorkWidth)
  SpecializationUtil.registerEventListener(vehicleType, "onAIImplementStart", VariableWorkWidth)
end
function VariableWorkWidth:onPostLoad(savegame)
  local configurationId = Utils.getNoNil(self.configurations.variableWorkWidth, 1)
  local v4 = string.format("vehicle.variableWorkWidth.variableWorkWidthConfigurations.variableWorkWidthConfiguration(%d)", configurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.variableWorkWidth.variableWorkWidthConfigurations.variableWorkWidthConfiguration", configurationId, self.components, self)
  local v5 = v5:hasProperty(v4)
  if not v5 then
  end
  v2.hasCenter = false
  v2.sections = {}
  v2.sectionsLeft = {}
  v2.sectionsRight = {}
  v7:iterate(v4 .. ".sections.section", function(self, savegame)
    local configurationId = configurationId:getValue(savegame .. "#isLeft", false)
    configurationId = configurationId:getValue(savegame .. "#isCenter", false)
    configurationId = configurationId:getValue(savegame .. "#maxWidthNode", nil, u0.components, u0.i3dMappings)
    configurationId = configurationId:getValue(savegame .. "#width")
    configurationId:iterate(savegame .. ".effect", function(self, savegame)
      local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      if v2 ~= nil then
        local configurationId = configurationId:getEffectByNode(v2)
        if configurationId ~= nil then
          configurationId:addDeleteListener(u1, u2, configurationId)
          configurationId:addStartRestriction(u3, u2)
          table.insert(u2.effects, configurationId)
        end
      end
    end)
    if {isLeft = configurationId, isCenter = configurationId, maxWidthNode = configurationId, width = configurationId, effects = {}, isActive = true}.isLeft then
      table.insert(u3.sectionsLeft, {isLeft = configurationId, isCenter = configurationId, maxWidthNode = configurationId, width = configurationId, effects = {}, isActive = true})
    elseif not {isLeft = configurationId, isCenter = configurationId, maxWidthNode = configurationId, width = configurationId, effects = {}, isActive = true}.isCenter then
      table.insert(u3.sectionsRight, {isLeft = configurationId, isCenter = configurationId, maxWidthNode = configurationId, width = configurationId, effects = {}, isActive = true})
    else
      u3.hasCenter = true
    end
    table.insert(u3.sections, v2)
  end)
  v2.sectionNodes = {}
  v2.sectionNodesLeft = {}
  v2.sectionNodesRight = {}
  v7:iterate(v4 .. ".sectionNodes.sectionNode", function(self, savegame)
    local configurationId = configurationId:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    if {node = configurationId}.node ~= nil then
      configurationId = configurationId:getValue(savegame .. "#isLeft", false)
      configurationId = configurationId:getValue(savegame .. "#minTrans", nil, true)
      configurationId = configurationId:getValue(savegame .. "#minTransX")
      configurationId = configurationId:getValue(savegame .. "#maxTrans", nil, true)
      configurationId = configurationId:getValue(savegame .. "#maxTransX")
      configurationId = configurationId:getValue(savegame .. "#minRot", nil, true)
      configurationId = configurationId:getValue(savegame .. "#endRot", nil, true)
      configurationId = configurationId:getValue(savegame .. "#workAreaIndex", 1)
      if {node = configurationId, isLeft = configurationId, startTrans = configurationId, startTransX = configurationId, endTrans = configurationId, endTransX = configurationId, startRot = configurationId, endRot = configurationId, workAreaIndex = configurationId}.isLeft then
        table.insert(u1.sectionNodesLeft, {node = configurationId, isLeft = configurationId, startTrans = configurationId, startTransX = configurationId, endTrans = configurationId, endTransX = configurationId, startRot = configurationId, endRot = configurationId, workAreaIndex = configurationId})
      else
        table.insert(u1.sectionNodesRight, {node = configurationId, isLeft = configurationId, startTrans = configurationId, startTransX = configurationId, endTrans = configurationId, endTransX = configurationId, startRot = configurationId, endRot = configurationId, workAreaIndex = configurationId})
      end
      table.insert(u1.sectionNodes, v2)
    end
  end)
  -- TODO: structure LOP_FORNPREP (pc 91, target 179)
  if v2.sections[1].maxWidthNode ~= nil then
    -- if v2.sections[1].isCenter then goto L164 end
    -- TODO: structure LOP_FORNPREP (pc 107, target 164)
    if v2.sectionNodes[1].isLeft == v2.sections[1].isLeft then
      local v17 = getParent(v2.sectionNodes[1].node)
      local v15, v16, v17 = localToLocal(v2.sections[1].maxWidthNode, v17, 0, 0, 0)
      if not v2.sectionNodes[1].startTransX then
      end
      if not v14.endTransX then
      end
      local v21 = math.abs((v15 - v18) / (v19 - v18))
      local v20 = MathUtil.clamp(v21, 0, 1)
      v10.width = v20
      v10.widthAbs = v15
      -- goto L164  (LOP_JUMP +5)
    end
    -- TODO: structure LOP_FORNLOOP (pc 159, target 108)
  else
    v2.sections[1].width = 0
  end
  if v10.width == nil then
    Logging.xmlWarning(self.xmlFile, "Unable to get width for section 'vehicle.variableWorkWidth.sections.section(%d)'", v9)
    v10.width = 0
  end
  -- TODO: structure LOP_FORNLOOP (pc 178, target 92)
  table.sort(v2.sectionsLeft, function(self, savegame)
    if self.width >= savegame.width then
    end
    return true
  end)
  table.sort(v2.sectionsRight, function(self, savegame)
    if self.width >= savegame.width then
    end
    return true
  end)
  local v8 = v8:getValue("vehicle.variableWorkWidth#widthReferenceWorkAreaIndex", 1)
  v2.widthReferenceWorkArea = v8
  v2.leftSideMax = #v2.sectionsLeft
  v8 = v8:getValue("vehicle.variableWorkWidth#defaultStateLeft", v2.leftSideMax)
  v2.leftSide = v8
  v2.rightSideMax = #v2.sectionsRight
  v8 = v8:getValue("vehicle.variableWorkWidth#defaultStateRight", v2.rightSideMax)
  v2.rightSide = v8
  v8 = v8:getValue("vehicle.variableWorkWidth#aiKeepCurrentWidth", false)
  v2.aiKeepCurrentWidth = v8
  v8 = v8:getValue("vehicle.variableWorkWidth#aiStateLeft", v2.leftSideMax)
  v2.aiStateLeft = v8
  v8 = v8:getValue("vehicle.variableWorkWidth#aiStateRight", v2.rightSideMax)
  v2.aiStateRight = v8
  if v2.hasCenter then
  else
  end
  v2.minSideState = v8
  if savegame ~= nil and not savegame.resetVehicles then
    local v9 = v9:getValue(savegame.key .. ".variableWorkWidth#leftSide", v2.leftSide)
    v8 = math.min(v9, v2.leftSideMax)
    v2.leftSide = v8
    v9 = v9:getValue(savegame.key .. ".variableWorkWidth#rightSide", v2.rightSide)
    v8 = math.min(v9, v2.rightSideMax)
    v2.rightSide = v8
  end
  self:updateSections()
  v2.drawInputHelp = false
  if 0 >= #v2.sections then
  end
  v2.hasSections = true
  if self.isClient then
    -- if v2.hasSections then goto L342 end
  end
  SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", VariableWorkWidth)
end
function VariableWorkWidth:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_variableWorkWidth.hasSections then
    xmlFile:setValue(key .. "#leftSide", self.spec_variableWorkWidth.leftSide)
    xmlFile:setValue(key .. "#rightSide", self.spec_variableWorkWidth.rightSide)
  end
end
function VariableWorkWidth:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  self:clearActionEventsTable(self.spec_variableWorkWidth.actionEvents)
  if isActiveForInputIgnoreSelection then
    local v4, v5 = self:addActionEvent(self.spec_variableWorkWidth.actionEvents, InputAction.VARIABLE_WORK_WIDTH_LEFT, self, VariableWorkWidth.actionEventWorkWidthLeft, false, true, false, true, nil)
    v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
    local v6, v7 = self:addActionEvent(self.spec_variableWorkWidth.actionEvents, InputAction.VARIABLE_WORK_WIDTH_RIGHT, self, VariableWorkWidth.actionEventWorkWidthRight, false, true, false, true, nil)
    v8:setActionEventTextPriority(v7, GS_PRIO_HIGH)
    local v8, v9 = self:addActionEvent(self.spec_variableWorkWidth.actionEvents, InputAction.VARIABLE_WORK_WIDTH_TOGGLE, self, VariableWorkWidth.actionEventWorkWidthToggle, false, true, false, true, nil)
    v10:setActionEventTextPriority(v9, GS_PRIO_HIGH)
    local v10 = v10:getActionEventsHasBinding(v5)
    if not v10 then
      v10 = v10:getActionEventsHasBinding(v7)
      if not v10 then
        v10 = v10:getActionEventsHasBinding(v9)
      end
    end
    configurationId.drawInputHelp = v10
  end
end
function VariableWorkWidth:actionEventWorkWidthLeft(actionName, inputValue, callbackState, isAnalog)
  self:setSectionsActive(self.spec_variableWorkWidth.leftSide - inputValue, self.spec_variableWorkWidth.rightSide)
end
function VariableWorkWidth:actionEventWorkWidthRight(actionName, inputValue, callbackState, isAnalog)
  self:setSectionsActive(self.spec_variableWorkWidth.leftSide, self.spec_variableWorkWidth.rightSide - inputValue)
end
function VariableWorkWidth:actionEventWorkWidthToggle(actionName, inputValue, callbackState, isAnalog)
  local v6 = math.min(self.spec_variableWorkWidth.leftSide, self.spec_variableWorkWidth.rightSide)
  if v6 - 1 < self.spec_variableWorkWidth.minSideState then
    local v8 = math.min(self.spec_variableWorkWidth.leftSideMax, self.spec_variableWorkWidth.rightSideMax)
  end
  self:setSectionsActive(v7, v7)
end
function VariableWorkWidth:onAIFieldWorkerStart()
  if self.isServer and not self.spec_variableWorkWidth.aiKeepCurrentWidth then
    self:setSectionsActive(self.spec_variableWorkWidth.aiStateLeft, self.spec_variableWorkWidth.aiStateRight)
  end
end
function VariableWorkWidth:onAIImplementStart()
  if self.isServer and not self.spec_variableWorkWidth.aiKeepCurrentWidth then
    self:setSectionsActive(self.spec_variableWorkWidth.aiStateLeft, self.spec_variableWorkWidth.aiStateRight)
  end
end
function VariableWorkWidth:setSectionsActive(leftSide, rightSide, noEventSend)
  local v5 = MathUtil.clamp(leftSide, 0, self.spec_variableWorkWidth.leftSideMax)
  v5 = MathUtil.clamp(rightSide, 0, self.spec_variableWorkWidth.rightSideMax)
  if self.spec_variableWorkWidth.leftSide == v5 then
    -- if v0.spec_variableWorkWidth.rightSide == v5 then goto L42 end
  end
  v4.leftSide = leftSide
  v4.rightSide = rightSide
  self:updateSections()
  VariableWorkWidthStateEvent.sendEvent(self, v4.leftSide, v4.rightSide, noEventSend)
end
function VariableWorkWidth:setSectionNodePercentage(sectionNodes, percentage)
  local v4 = math.min(percentage, 1)
  local configurationId = math.max(v4, 0)
  -- TODO: structure LOP_FORNPREP (pc 17, target 100)
  if sectionNodes[1].startTrans ~= nil and sectionNodes[1].endTrans ~= nil then
    local v9 = MathUtil.vector3ArrayLerp(sectionNodes[1].startTrans, sectionNodes[1].endTrans, configurationId)
    setTranslation(...)
  end
  if v6.startTransX ~= nil and v6.endTransX ~= nil then
    local v7, v8, v9 = getTranslation(v6.node)
    local v10 = MathUtil.lerp(v6.startTransX, v6.endTransX, percentage)
    setTranslation(v6.node, v10, v8, v9)
  end
  if v6.startRot ~= nil and v6.endRot ~= nil then
    v9 = MathUtil.vector3ArrayLerp(v6.startRot, v6.endRot, percentage)
    setRotation(...)
  end
  if v6.workAreaIndex ~= nil then
    self:updateWorkAreaWidth(v6.workAreaIndex)
  end
  -- TODO: structure LOP_FORNLOOP (pc 99, target 18)
end
function VariableWorkWidth:updateSections()
  self:updateSectionStates(self.spec_variableWorkWidth.sectionsLeft, self.spec_variableWorkWidth.leftSide)
  self:updateSectionStates(self.spec_variableWorkWidth.sectionsRight, self.spec_variableWorkWidth.rightSide)
  if self.spec_variableWorkWidth.leftSide == 0 then
  else
  end
  self:setSectionNodePercentage(savegame.sectionNodesLeft, v2)
  if savegame.rightSide == 0 then
  else
  end
  self:setSectionNodePercentage(savegame.sectionNodesRight, configurationId)
  SpecializationUtil.raiseEvent(self, "onVariableWorkWidthSectionChanged")
end
function VariableWorkWidth.updateSectionStates(v0, savegame, v2)
  -- TODO: structure LOP_FORNPREP (pc 3, target 32)
  if 1 > v2 then
  end
  v6.isActive = true
  for v9 = 1, #v6.effects do
    if not v6.isActive then
      local v11 = v6.effects[v9]:isRunning()
      if v11 then
        v6.effects[v9]:stop()
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 30, target 17)
  end
end
function VariableWorkWidth.getEffectByNode(v0, savegame)
end
function VariableWorkWidth:getVariableWorkWidth(isLeft)
  if isLeft then
    -- if v0.spec_variableWorkWidth.sectionsLeft then goto L8 end
  end
  if #v2.sectionsRight == 0 then
    return 1, 1, false
  end
  -- TODO: structure LOP_FORNPREP (pc 19, target 35)
  if not nil then
  end
  if v8.isActive then
    return v8.widthAbs, v9, true
  end
  -- TODO: structure LOP_FORNLOOP (pc 34, target 20)
  return 0, v4 or 1, true
end
function VariableWorkWidth.getVariableWorkWidthUsage(v0)
  return nil
end
function VariableWorkWidth.loadWorkAreaFromXML(v0, savegame, v2, configurationId, v4)
  local v5 = configurationId:getValue(v4 .. ".section#index")
  v2.sectionIndex = v5
  v5 = savegame(v0, v2, configurationId, v4)
  return v5
end
function VariableWorkWidth:getIsWorkAreaActive(superFunc, workArea)
  if workArea.sectionIndex ~= nil and self.spec_variableWorkWidth.sections[workArea.sectionIndex] ~= nil and not self.spec_variableWorkWidth.sections[workArea.sectionIndex].isActive then
    return false
  end
  return superFunc(self, workArea)
end
