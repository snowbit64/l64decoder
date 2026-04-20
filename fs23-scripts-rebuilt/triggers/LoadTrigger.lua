-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LoadTrigger = {}
local LoadTrigger_mt = Class(LoadTrigger, Object)
InitStaticObjectClass(LoadTrigger, "LoadTrigger", ObjectIds.OBJECT_LOAD_TRIGGER)
function LoadTrigger:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#triggerNode", "Trigger node")
  self:register(XMLValueType.FLOAT, v1 .. "#fillLitersPerSecond", "Fill liters per second")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#dischargeNode", "Discharge node")
  self:register(XMLValueType.FLOAT, v1 .. "#dischargeWidth", "Discharge width", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. "#dischargeLength", "Discharge length", 0.5)
  self:register(XMLValueType.STRING, v1 .. "#fillSoundIdentifier", "Fill sound identifier in map sound xml")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#fillSoundNode", "Fill sound link node")
  EffectManager.registerEffectXMLPaths(self, v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#scrollerNode", "Scroller node")
  self:register(XMLValueType.STRING, v1 .. "#shaderParameterName", "Scroller shader parameter name", "uvScrollSpeed")
  self:register(XMLValueType.VECTOR_2, v1 .. "#scrollerScrollSpeed", "Scroller speed scale", "0 -0.75")
  self:register(XMLValueType.STRING, v1 .. "#fillTypeCategories", "Supported fill type categories")
  self:register(XMLValueType.STRING, v1 .. "#fillTypes", "Supported fill types")
  self:register(XMLValueType.BOOL, v1 .. "#autoStart", "Auto start loading", false)
  self:register(XMLValueType.BOOL, v1 .. "#infiniteCapacity", "Has infinite capacity", false)
  self:register(XMLValueType.BOOL, v1 .. "#requiresExactFillRootNode", "Only checks for exactfillrootnode", true)
  self:register(XMLValueType.STRING, v1 .. "#startFillText", "Start fill text")
  self:register(XMLValueType.STRING, v1 .. "#stopFillText", "Stop fill text")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#aiNode", "AI target node, required for the station to support AI. AI drives to the node in positive Z direction. Height is not relevant.")
end
function LoadTrigger.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.fillableObjects = {}
  return v3
end
function LoadTrigger:load(components, xmlFile, xmlNode, i3dMappings, rootNode)
  if not rootNode then
    local v6 = xmlFile:getValue(xmlNode .. "#node", nil, components, i3dMappings)
  end
  self.rootNode = v6
  if self.rootNode == nil then
    Logging.xmlError(xmlFile, "Missing node '%s#node'", xmlNode)
    return false
  end
  self.objectsInTriggers = {}
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlNode .. "#scrollerIndex", xmlNode .. "#scrollerNode")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "triggerNode", xmlFile, xmlNode .. "#triggerNode")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "triggerIndex", xmlFile, xmlNode .. "#triggerNode")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "fillLitersPerSecond", xmlFile, xmlNode .. "#fillLitersPerSecond")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "dischargeNode", xmlFile, xmlNode .. "#dischargeNode")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "fillSoundIdentifier", xmlFile, xmlNode .. "#fillSoundIdentifier")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "fillSoundNode", xmlFile, xmlNode .. "#fillSoundNode")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "scrollerIndex", xmlFile, xmlNode .. "#scrollerNode")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "shaderParameterName", xmlFile, xmlNode .. "#shaderParameterName")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "scrollerScrollSpeed", xmlFile, xmlNode .. "#scrollerScrollSpeed")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "fillTypeCategories", xmlFile, xmlNode .. "#fillTypeCategories")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "fillTypes", xmlFile, xmlNode .. "#fillTypes")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "autoStart", xmlFile, xmlNode .. "#autoStart")
  XMLUtil.checkDeprecatedUserAttribute(self.rootNode, "infiniteCapacity", xmlFile, xmlNode .. "#infiniteCapacity")
  v6 = xmlFile:getValue(xmlNode .. "#triggerNode", nil, components, i3dMappings)
  if v6 == nil then
    Logging.xmlError(xmlFile, "Missing triggerNode defined in '%s'", xmlNode)
    return false
  end
  self.triggerNode = v6
  addTrigger(v6, "loadTriggerCallback", self)
  v7:addNodeObject(v6, self)
  local v8 = xmlFile:getValue(xmlNode .. "#fillLitersPerSecond", 1000)
  self.fillLitersPerMS = v8 / 1000
  local v7 = xmlFile:getValue(xmlNode .. "#aiNode", nil, components, i3dMappings)
  self.aiNode = v7
  if self.aiNode == nil then
  end
  self.supportsAILoading = true
  v7 = xmlFile:getValue(xmlNode .. "#dischargeNode", nil, components, i3dMappings)
  if v7 ~= nil then
    XMLUtil.checkDeprecatedUserAttribute(v7, "width", xmlFile, xmlNode .. "#dischargeWidth")
    XMLUtil.checkDeprecatedUserAttribute(v7, "length", xmlFile, xmlNode .. "#dischargeLength")
    self.dischargeInfo = {name = "fillVolumeDischargeInfo", nodes = {}}
    v8 = xmlFile:getValue(xmlNode .. "#dischargeWidth", 0.5)
    local v9 = xmlFile:getValue(xmlNode .. "#dischargeLength", 0.5)
    table.insert(self.dischargeInfo.nodes, {node = v7, width = v8, length = v9, priority = 1})
  end
  v8 = createTransformGroup("loadTriggerSoundNode")
  self.soundNode = v8
  if not v7 then
  end
  v8(v9, self.soundNode)
  if self.isClient then
    v8 = v8:loadEffect(xmlFile, xmlNode, components, self, i3dMappings)
    self.effects = v8
    self.samples = {}
    v8 = xmlFile:getValue(xmlNode .. "#fillSoundIdentifier")
    v9 = xmlFile:getValue(xmlNode .. "#fillSoundNode", nil, components, i3dMappings)
    if v9 == nil then
    end
    local xmlSoundFile = loadXMLFile("mapXML", g_currentMission.missionInfo.mapSoundXmlFilename)
    if xmlSoundFile ~= nil and xmlSoundFile ~= 0 then
      local v12, v13 = Utils.getModNameAndBaseDirectory(g_currentMission.missionInfo.mapSoundXmlFilename)
      if v12 ~= nil then
      end
      if v8 ~= nil then
        local v21 = getRootNode()
        local v15 = v15:loadSampleFromXML(xmlSoundFile, "sound.object", v8, v11, v21, 0, AudioGroup.ENVIRONMENT, nil, nil)
        self.samples.load = v15
        if self.samples.load ~= nil then
          link(v9, self.samples.load.soundNode)
          setTranslation(self.samples.load.soundNode, 0, 0, 0)
        end
      end
      delete(xmlSoundFile)
    end
    local v11 = xmlFile:getValue(xmlNode .. "#scrollerNode", nil, components, i3dMappings)
    self.scroller = v11
    if self.scroller ~= nil then
      v11 = xmlFile:getValue(xmlNode .. "#shaderParameterName", "uvScrollSpeed")
      self.scrollerShaderParameterName = v11
      v11, v12 = xmlFile:getValue(xmlNode .. "#scrollerScrollSpeed", "0 -0.75")
      self.scrollerSpeedX = v11
      self.scrollerSpeedY = v12
      setShaderParameter(self.scroller, self.scrollerShaderParameterName, 0, 0, 0, 0, false)
    end
  end
  self.fillTypes = {}
  v8 = XMLUtil.getValueFromXMLFileOrUserAttribute(xmlFile, xmlNode, "fillTypeCategories", self.rootNode)
  v9 = XMLUtil.getValueFromXMLFileOrUserAttribute(xmlFile, xmlNode, "fillTypes", self.rootNode)
  if v8 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x80000000 -> L520
    v11 = v11:getFillTypesByCategoryNames(v8, "Warning: UnloadTrigger has invalid fillTypeCategory '%s'.")
  elseif v8 == nil and v9 ~= nil then
    v11 = v11:getFillTypesByNames(v9, "Warning: UnloadTrigger has invalid fillType '%s'.")
  end
  if xmlSoundFile ~= nil then
    for v14, v15 in pairs(xmlSoundFile) do
      self.fillTypes[v15] = true
    end
  else
    self.fillTypes = nil
  end
  v11 = xmlFile:getValue(xmlNode .. "#autoStart", false)
  self.autoStart = v11
  v11 = xmlFile:getValue(xmlNode .. "#infiniteCapacity", false)
  self.hasInfiniteCapacity = v11
  v11 = xmlFile:getValue(xmlNode .. "#requiresExactFillRootNode", true)
  self.requiresExactFillRootNode = v11
  v13 = xmlFile:getValue(xmlNode .. "#startFillText", "$l10n_action_siloStartFilling")
  v11 = v11:convertText(...)
  self.startFillText = v11
  v13 = xmlFile:getValue(xmlNode .. "#stopFillText", "$l10n_action_siloStopFilling")
  v11 = v11:convertText(...)
  self.stopFillText = v11
  v11 = LoadTriggerActivatable.new(self)
  self.activatable = v11
  v11:setText(self.startFillText)
  self.isLoading = false
  self.selectedFillType = FillType.UNKNOWN
  self.automaticFilling = Platform.gameplay.automaticFilling
  self.requiresActiveVehicle = not self.automaticFilling
  self.automaticFillingTimer = 0
  return true
end
function LoadTrigger:delete()
  if self.triggerNode ~= nil then
    removeTrigger(self.triggerNode)
    components:removeNodeObject(self.triggerNode)
  end
  if self.isClient then
    components:deleteSamples(self.samples)
    components:deleteEffects(self.effects)
  end
  components:removeActivatable(self.activatable)
  local xmlFile = xmlFile:superClass()
  xmlFile.delete(self)
end
function LoadTrigger:setSource(object)
  if object.getSupportedFillTypes == nil then
  end
  assert(true)
  if object.getAllFillLevels == nil then
  end
  assert(true)
  if object.addFillLevelToFillableObject == nil then
  end
  assert(true)
  if object.getIsFillAllowedToFarm == nil then
  end
  assert(true)
  self.source = object
end
function LoadTrigger:raiseActive()
  local xmlFile = xmlFile:superClass()
  xmlFile.raiseActive(self)
  if self.source ~= nil and self.source.raiseActive ~= nil then
    components:raiseActive()
  end
end
function LoadTrigger:loadTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if self.requiresExactFillRootNode then
    local v7 = CollisionFlag.getHasFlagSet(otherId, CollisionFlag.FILLABLE)
    if not v7 then
      return
    end
  end
  v7 = v7:getNodeObject(otherId)
  if v7 ~= nil and v7 ~= self.source and v7.getRootVehicle ~= nil and v7.getFillUnitIndexFromNode ~= nil then
    local v8 = v8:getSupportedFillTypes()
    if v8 ~= nil then
      local v9 = v7:getFillUnitIndexFromNode(otherId)
      if v9 ~= nil then
        for v14, v15 in pairs(v8) do
          if not v15 then
            continue
          end
          if self.fillTypes ~= nil and not self.fillTypes[v14] then
            continue
          end
          local v16 = v7:getFillUnitSupportsFillType(v9, v14)
          if not v16 then
            continue
          end
          v16 = v7:getFillUnitAllowsFillType(v9, v14)
          if not v16 then
            continue
          end
          break
        end
        if not xmlSoundFile then
        end
      end
      if v9 == nil then
        for v13, v14 in pairs(v8) do
          if not v14 then
            continue
          end
          if self.fillTypes ~= nil and not self.fillTypes[v13] then
            continue
          end
          v15 = v7:getFillUnits()
          for v19, v20 in ipairs(v15) do
            if not (v20.exactFillRootNode == nil) then
              continue
            end
            local v21 = v7:getFillUnitSupportsFillType(v19, v13)
            if not v21 then
              continue
            end
            v21 = v7:getFillUnitAllowsFillType(v19, v13)
            if not v21 then
              continue
            end
            break
          end
        end
      end
      if v9 ~= nil then
        if onEnter then
          self.fillableObjects[otherId] = {object = v7, fillUnitIndex = v9}
          v7:addDeleteListener(self)
          self:raiseActive()
        elseif onLeave then
          self.fillableObjects[otherId] = nil
          v7:removeDeleteListener(self)
          if self.isLoading and self.currentFillableObject == v7 then
            self:setIsLoading(false)
          end
          if v7 == self.validFillableObject then
            self.validFillableObject = nil
            self.validFillableFillUnitIndex = nil
          end
        end
        if self.automaticFilling then
          -- if v0.isLoading then goto L215 end
          xmlSoundFile = next(self.fillableObjects)
          -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L215
          xmlSoundFile = self:getIsFillableObjectAvailable()
          -- if not v10 then goto L215 end
          self:toggleLoading()
          return
        end
        xmlSoundFile = next(self.fillableObjects)
        if xmlSoundFile ~= nil then
          xmlSoundFile:addActivatable(self.activatable)
          return
        end
        xmlSoundFile:removeActivatable(self.activatable)
      end
    end
  end
end
function LoadTrigger.farmIdForFillableObject(v0, triggerId)
  local otherId = triggerId:getOwnerFarmId()
  if triggerId.getActiveFarm ~= nil then
    local onEnter = triggerId:getActiveFarm()
  end
  if otherId == nil then
  end
  return otherId
end
function LoadTrigger:getIsFillableObjectAvailable()
  local triggerId = next(self.fillableObjects)
  if triggerId == nil then
    return false
  end
  if self.isLoading then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L115
    triggerId = self:getAllowsActivation(self.currentFillableObject)
    -- if not v1 then goto L115 end
    return true
  else
    self.validFillableObject = nil
    self.validFillableFillUnitIndex = nil
    for otherShapeId, v7 in pairs(self.fillableObjects) do
      if v7.lastWasFilled then
      end
    end
    if triggerId and 1 >= otherId then
    end
    for otherShapeId, v7 in pairs(self.fillableObjects) do
      if v7.lastWasFilled and not not triggerId then
        continue
      end
      local v8 = self:getAllowsActivation(v7.object)
      if not v8 then
        continue
      end
      v8 = v8:getFillUnitSupportsToolType(v7.fillUnitIndex, ToolType.TRIGGER)
      if not v8 then
        continue
      end
      v8 = v8:getFillUnitFreeCapacity(v7.fillUnitIndex, nil, nil)
      if not (0 < v8) then
        continue
      end
      local xmlSoundFile = self:farmIdForFillableObject(v7.object)
      v8 = v8:getIsFillAllowedToFarm(...)
      if not v8 then
        continue
      end
      self.validFillableObject = v7.object
      self.validFillableFillUnitIndex = v7.fillUnitIndex
      return true
    end
  end
  return false
end
function LoadTrigger:toggleLoading()
  if not self.isLoading then
    local onEnter = onEnter:getFarmId()
    local triggerId = triggerId:getAllFillLevels(...)
    for xmlSoundFile, v11 in pairs(triggerId) do
      if self.fillTypes ~= nil and not self.fillTypes[xmlSoundFile] then
        continue
      end
      local v12 = otherId:getFillUnitAllowsFillType(onEnter, xmlSoundFile)
      if not v12 then
        continue
      end
      onStay[xmlSoundFile] = v11
      if onLeave == nil then
      end
    end
    if not self.autoStart and 0 < otherShapeId then
      if g_currentMission.controlledVehicle.getIsActiveForInput ~= nil then
        v9 = g_currentMission.controlledVehicle:getIsActiveForInput(true)
      end
      -- if not v7 then goto L107 end
      v11 = v11:getName()
      v9 = string.format(...)
      SiloDialog.show(self.onFillTypeSelection, self, v9, onStay, self.hasInfiniteCapacity)
      -- if not v0.automaticFilling then goto L107 end
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L107
      otherId.rootVehicle:brakeToStop()
      return
    end
    self:onFillTypeSelection(onLeave)
    return
  end
  self:setIsLoading(false)
end
function LoadTrigger:onFillTypeSelection(fillType)
  if fillType ~= nil and fillType ~= FillType.UNKNOWN and self.validFillableObject ~= nil then
    local onEnter = self:getAllowsActivation(self.validFillableObject)
    if onEnter then
      self:setIsLoading(true, self.validFillableObject, self.validFillableFillUnitIndex, fillType)
    end
  end
end
function LoadTrigger:setIsLoading(isLoading, targetObject, fillUnitIndex, fillType, noEventSend)
  LoadTriggerSetIsLoadingEvent.sendEvent(self, isLoading, targetObject, fillUnitIndex, fillType, noEventSend)
  if isLoading then
    self:startLoading(fillType, targetObject, fillUnitIndex)
  else
    self:stopLoading()
  end
  self:setFillSoundIsPlaying(isLoading)
  if self.currentFillableObject ~= nil and self.currentFillableObject.setFillSoundIsPlaying ~= nil then
    otherShapeId:setFillSoundIsPlaying(isLoading)
  end
end
function LoadTrigger:getAllowsActivation(fillableObject)
  if not self.requiresActiveVehicle then
    return true
  end
  if fillableObject.getAllowLoadTriggerActivation ~= nil then
    local otherId = fillableObject:getAllowLoadTriggerActivation(fillableObject)
    if otherId then
      return true
    end
  end
  return false
end
function LoadTrigger:startLoading(fillType, fillableObject, fillUnitIndex)
  if not self.isLoading then
    self:raiseActive()
    self.isLoading = true
    self.selectedFillType = fillType
    self.currentFillableObject = fillableObject
    self.fillUnitIndex = fillUnitIndex
    onLeave:setText(self.stopFillText)
    if self.isClient then
      onLeave:setFillType(self.effects, self.selectedFillType)
      onLeave:startEffects(self.effects)
      onLeave:playSample(self.samples.load)
      if self.scroller ~= nil then
        setShaderParameter(self.scroller, self.scrollerShaderParameterName, self.scrollerSpeedX, self.scrollerSpeedY, 0, 0, false)
      end
    end
  end
end
function LoadTrigger:stopLoading()
  if self.isLoading then
    self:raiseActive()
    self.isLoading = false
    self.selectedFillType = FillType.UNKNOWN
    triggerId:setText(self.startFillText)
    if self.currentFillableObject.aiStoppedLoadingFromTrigger ~= nil then
      triggerId:aiStoppedLoadingFromTrigger()
    end
    for onLeave, onStay in pairs(self.fillableObjects) do
      if onStay.object == self.validFillableObject and onStay.fillUnitIndex ~= self.fillUnitIndex then
      end
      onStay.lastWasFilled = otherShapeId
    end
    if self.isClient then
      triggerId:stopEffects(self.effects)
      triggerId:stopSample(self.samples.load)
      if self.scroller ~= nil then
        setShaderParameter(self.scroller, self.scrollerShaderParameterName, 0, 0, 0, 0, false)
      end
    end
  end
end
function LoadTrigger:update(dt)
  if self.isServer then
    if self.isLoading then
      if self.currentFillableObject ~= nil then
        if self.currentFillableObject.getLoadTriggerMaxFillSpeed ~= nil then
          local onStay = onStay:getLoadTriggerMaxFillSpeed()
          local onEnter = math.min(...)
        end
        onEnter = onEnter:addFillLevelToFillableObject(self.currentFillableObject, self.fillUnitIndex, self.selectedFillType, otherId * dt, self.dischargeInfo, ToolType.TRIGGER)
        if onEnter ~= nil then
          local onLeave = math.abs(onEnter)
          -- if v4 >= 0.001 then goto L67 end
        end
        self:setIsLoading(false)
      elseif self.isLoading then
        self:setIsLoading(false)
      end
      self:raiseActive()
      return
    end
    if self.automaticFilling then
      local otherId = next(self.fillableObjects)
      if otherId ~= nil then
        otherId = math.max(self.automaticFillingTimer - dt, 0)
        self.automaticFillingTimer = otherId
        if self.automaticFillingTimer == 0 then
          otherId = self:getIsFillableObjectAvailable()
          if otherId then
            self:toggleLoading()
            self.automaticFillingTimer = 10000
          end
        end
        self:raiseActive()
      end
    end
  end
end
function LoadTrigger:getCurrentFillType()
  return self.selectedFillType
end
function LoadTrigger:getFillTargetNode()
  if self.currentFillableObject ~= nil then
    return dt:getFillUnitRootNode(self.fillUnitIndex)
  end
end
function LoadTrigger:setFillSoundIsPlaying(state)
  if self.dischargeInfo == nil and state then
    local target = self:getFillTargetNode()
    if target ~= nil then
      local onEnter, onLeave, onStay = getWorldTranslation(target)
      setWorldTranslation(self.soundNode, onEnter, onLeave, onStay)
    end
  end
  if self.samples.load == nil then
    FillTrigger.setFillSoundIsPlaying(self, state)
  end
end
function LoadTrigger:onDeleteObject(vehicle)
  for onStay, otherShapeId in pairs(self.fillableObjects) do
    if not (otherShapeId.object == vehicle) then
      continue
    end
    self.fillableObjects[onStay] = nil
    if not self.isLoading then
      continue
    end
    if not (self.currentFillableObject == vehicle) then
      continue
    end
    self:stopLoading()
    self.currentFillableObject = nil
  end
end
function LoadTrigger:getIsFillTypeSupported(fillType)
  if self.fillTypes[fillType] == nil then
  end
  return true
end
function LoadTrigger:getSupportAILoading()
  return self.supportsAILoading
end
function LoadTrigger:getAITargetPositionAndDirection()
  local dt, otherId, onEnter = getWorldTranslation(self.aiNode)
  local onLeave, onStay, otherShapeId = localDirectionToWorld(self.aiNode, 0, 0, 1)
  return dt, onEnter, onLeave, otherShapeId
end
LoadTriggerActivatable = {}
local dt = Class(LoadTriggerActivatable)
function LoadTriggerActivatable.new(loadTrigger)
  local dt = setmetatable({}, u0)
  dt.loadTrigger = loadTrigger
  dt.activateText = ""
  return dt
end
function LoadTriggerActivatable:setText(text)
  self.activateText = text
end
function LoadTriggerActivatable:getIsActivatable()
  return dt:getIsFillableObjectAvailable()
end
function LoadTriggerActivatable:run()
  dt:toggleLoading()
end
