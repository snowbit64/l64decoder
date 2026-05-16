-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WorkArea = {WORK_AREA_XML_KEY = "vehicle.workAreas.workArea(?)", WORK_AREA_XML_CONFIG_KEY = "vehicle.workAreas.workAreaConfigurations.workAreaConfiguration(?).workArea(?)"}
function WorkArea.initSpecialization()
  v0:addWorkAreaType("default", false)
  v0:addWorkAreaType("auxiliary", false)
  local v3 = v3:getText("configuration_workArea")
  v0:addConfigurationType("workArea", v3, "workAreas", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("WorkArea")
  WorkArea.registerWorkAreaXMLPaths(Vehicle.xmlSchema, WorkArea.WORK_AREA_XML_KEY)
  WorkArea.registerWorkAreaXMLPaths(Vehicle.xmlSchema, WorkArea.WORK_AREA_XML_CONFIG_KEY)
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.workAreas.workAreaConfigurations.workAreaConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.INT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#workAreaIndex", "Work area index")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function WorkArea:registerWorkAreaXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#type", "Work area type", "DEFAULT")
  self:register(XMLValueType.BOOL, v1 .. "#requiresGroundContact", "Requires ground contact to work", true)
  self:register(XMLValueType.BOOL, v1 .. "#disableBackwards", "Area is disabled while driving backwards", true)
  self:register(XMLValueType.BOOL, v1 .. "#requiresOwnedFarmland", "Requires owned farmland", true)
  self:register(XMLValueType.STRING, v1 .. "#functionName", "Work area script function")
  self:register(XMLValueType.STRING, v1 .. "#preprocessFunctionName", "Pre process work area script function")
  self:register(XMLValueType.STRING, v1 .. "#postprocessFunctionName", "Post process work area script function")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".area#startNode", "Start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".area#widthNode", "Width node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".area#heightNode", "Height node")
  self:register(XMLValueType.INT, v1 .. ".groundReferenceNode#index", "Ground reference node index")
  self:register(XMLValueType.BOOL, v1 .. ".onlyActiveWhenLowered#value", "Work area is only active when lowered", false)
end
function WorkArea.prerequisitesPresent(specializations)
  return SpecializationUtil.hasSpecialization(GroundReference, specializations)
end
function WorkArea.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onStartWorkAreaProcessing")
  SpecializationUtil.registerEvent(vehicleType, "onEndWorkAreaProcessing")
end
function WorkArea.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadWorkAreaFromXML", WorkArea.loadWorkAreaFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getWorkAreaByIndex", WorkArea.getWorkAreaByIndex)
  SpecializationUtil.registerFunction(vehicleType, "getIsWorkAreaActive", WorkArea.getIsWorkAreaActive)
  SpecializationUtil.registerFunction(vehicleType, "updateWorkAreaWidth", WorkArea.updateWorkAreaWidth)
  SpecializationUtil.registerFunction(vehicleType, "getWorkAreaWidth", WorkArea.getWorkAreaWidth)
  SpecializationUtil.registerFunction(vehicleType, "getIsWorkAreaProcessing", WorkArea.getIsWorkAreaProcessing)
  SpecializationUtil.registerFunction(vehicleType, "getTypedNetworkAreas", WorkArea.getTypedNetworkAreas)
  SpecializationUtil.registerFunction(vehicleType, "getTypedWorkAreas", WorkArea.getTypedWorkAreas)
  SpecializationUtil.registerFunction(vehicleType, "getIsTypedWorkAreaActive", WorkArea.getIsTypedWorkAreaActive)
  SpecializationUtil.registerFunction(vehicleType, "getIsFarmlandNotOwnedWarningShown", WorkArea.getIsFarmlandNotOwnedWarningShown)
  SpecializationUtil.registerFunction(vehicleType, "getLastTouchedFarmlandFarmId", WorkArea.getLastTouchedFarmlandFarmId)
  SpecializationUtil.registerFunction(vehicleType, "getLastActiveMissionWork", WorkArea.getLastActiveMissionWork)
  SpecializationUtil.registerFunction(vehicleType, "getIsAccessibleAtWorldPosition", WorkArea.getIsAccessibleAtWorldPosition)
  SpecializationUtil.registerFunction(vehicleType, "updateLastWorkedArea", WorkArea.updateLastWorkedArea)
end
function WorkArea.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSpeedRotatingPartFromXML", WorkArea.loadSpeedRotatingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSpeedRotatingPartActive", WorkArea.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "checkMovingPartDirtyUpdateNode", WorkArea.checkMovingPartDirtyUpdateNode)
end
function WorkArea.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", WorkArea)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", WorkArea)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", WorkArea)
end
function WorkArea:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.workAreas.workArea(0)#startIndex", "vehicle.workAreas.workArea(0).area#startIndex")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.workAreas.workArea(0)#widthIndex", "vehicle.workAreas.workArea(0).area#widthIndex")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.workAreas.workArea(0)#heightIndex", "vehicle.workAreas.workArea(0).area#heightIndex")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.workAreas.workArea(0)#foldMinLimit", "vehicle.workAreas.workArea(0).folding#minLimit")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.workAreas.workArea(0)#foldMaxLimit", "vehicle.workAreas.workArea(0).folding#maxLimit")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.workAreas.workArea(0)#refNodeIndex", "vehicle.workAreas.workArea(0).groundReferenceNode#index")
  local configurationId = Utils.getNoNil(self.configurations.workArea, 1)
  local configKey = string.format("vehicle.workAreas.workAreaConfigurations.workAreaConfiguration(%d)", configurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.workAreas.workAreaConfigurations.workAreaConfiguration", configurationId, self.components, self)
  local v5 = v5:hasProperty(configKey)
  if not v5 then
  end
  v2.workAreas = {}
  while true do
    v6 = string.format("%s.workArea(%d)", configKey, v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = self:loadWorkAreaFromXML({}, self.xmlFile, v6)
    if v8 then
      table.insert(v2.workAreas, {})
      self:updateWorkAreaWidth({index = #v2.workAreas}.index)
    end
  end
  v2.workAreaByType = {}
  for v9, v10 in pairs(v2.workAreas) do
    if v2.workAreaByType[v10["type"]] == nil then
      v2.workAreaByType[v10["type"]] = {}
    end
    table.insert(v2.workAreaByType[v10["type"]], v10)
  end
  v2.lastAccessedFarmlandOwner = 0
  v2.lastActiveMissionWork = false
  v2.lastWorkedArea = -1
  v2.showFarmlandNotOwnedWarning = false
  v6 = v6:getText("warning_cantUseMissionVehiclesOnOtherLand")
  v2.warningCantUseMissionVehiclesOnOtherLand = v6
  v6 = v6:getText("warning_youDontHaveAccessToThisLand")
  v2.warningYouDontHaveAccessToThisLand = v6
end
function WorkArea:getIsAccessibleAtWorldPosition(farmId, x, z, workAreaType)
  if self.propertyState == Vehicle.PROPERTY_STATE_MISSION then
    local v5 = v5:getIsMissionWorkAllowed(farmId, x, z, workAreaType)
    return v5, farmId, true
  end
  v5 = v5:getFarmlandIdAtWorldPosition(x, z)
  if v5 == nil then
    return false, nil, false
  end
  if v5 == FarmlandManager.NOT_BUYABLE_FARM_ID then
    return false, FarmlandManager.NO_OWNER_FARM_ID, false
  end
  local v6 = v6:getFarmlandOwner(v5)
  if v6 ~= 0 then
    local v7 = v7:canFarmAccessOtherId(farmId, v6)
    -- if v7 then goto L65 end
  end
  v7 = v7:getIsMissionWorkAllowed(farmId, x, z, workAreaType)
  return v7, v6, true
end
function WorkArea:updateLastWorkedArea(area)
  local v3 = math.max(area, self.spec_workArea.lastWorkedArea)
  self.spec_workArea.lastWorkedArea = v3
end
function WorkArea:getLastTouchedFarmlandFarmId()
  if self.spec_workArea.lastAccessedFarmlandOwner ~= 0 then
    return self.spec_workArea.lastAccessedFarmlandOwner
  end
  return 0
end
function WorkArea:getLastActiveMissionWork()
  return self.spec_workArea.lastActiveMissionWork
end
function WorkArea:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  SpecializationUtil.raiseEvent(self, "onStartWorkAreaProcessing", dt, self.spec_workArea.workAreas)
  self.spec_workArea.showFarmlandNotOwnedWarning = false
  local farmId = self:getActiveFarm()
  if farmId == nil then
  end
  -- TODO: structure LOP_FORNPREP (pc 29, target 242)
  if v5.workAreas[1]["type"] ~= WorkAreaType.AUXILIARY then
    v5.workAreas[1].lastWorkedHectares = 0
    local v15 = self:getIsWorkAreaActive(v5.workAreas[1])
    if v15 and v5.workAreas[1].requiresOwnedFarmland then
      local v16, v17, v18 = getWorldTranslation(v5.workAreas[1].start)
      local v19, v20, v21 = self:getIsAccessibleAtWorldPosition(farmId, v16, v18, v5.workAreas[1]["type"])
      if v19 then
        if v20 ~= nil then
          v5.lastAccessedFarmlandOwner = v20
          local v22 = v22:getIsMissionWorkAllowed(farmId, v16, v18, v5.workAreas[1]["type"])
          v5.lastActiveMissionWork = v22
        end
      else
        local v22, v23, v24 = getWorldTranslation(v5.workAreas[1].width)
        local v25, v26, v27 = self:getIsAccessibleAtWorldPosition(farmId, v22, v24, v5.workAreas[1]["type"])
        if v25 then
        else
          v25, v26, v27 = getWorldTranslation(v5.workAreas[1].height)
          local v28, v29, v30 = self:getIsAccessibleAtWorldPosition(farmId, v25, v27, v5.workAreas[1]["type"])
          if v28 then
          else
            local v30, v31, v32 = self:getIsAccessibleAtWorldPosition(farmId, v22 + v25 - v16, v24 + v27 - v18, v5.workAreas[1]["type"])
            if v30 then
            end
          end
        end
      end
      if not v8 then
      end
    end
    if v15 then
      if v14.preprocessingFunction ~= nil then
        v14.preprocessingFunction(self, v14, dt)
      end
      if v14.processingFunction ~= nil then
        v16, v17 = v14.processingFunction(self, v14, dt)
        if 0 < v16 then
          v20 = v20:getFruitPixelsToSqm()
          v18 = MathUtil.areaToHa(...)
          v14.lastWorkedHectares = v18
          v14.lastProcessingTime = g_currentMission.time
          -- cmp-jump LOP_JUMPXEQKNIL R18 aux=0x0 -> L230
          v18 = v18:getWorkAreaTypeByIndex(v14["type"])
          -- if not v18.attractWildlife then goto L230 end
          v19, v20, v21 = getWorldTranslation(v14.width)
          v22, v23, v24 = getWorldTranslation(v14.height)
          v27:addAreaOfInterest(0, 0.5 * v19 + 0.5 * v22, 0.5 * v21 + 0.5 * v24, 3)
        else
          v14.lastWorkedHectares = 0
        end
      end
      if v14.postprocessingFunction ~= nil then
        v14.postprocessingFunction(self, v14, dt)
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 241, target 30)
  if v10 and not v8 then
    v5.showFarmlandNotOwnedWarning = true
  end
  SpecializationUtil.raiseEvent(self, "onEndWorkAreaProcessing", dt, v6)
  if 0 <= v5.lastWorkedArea then
    local v11 = self:getLastTouchedFarmlandFarmId()
    local v14 = v14:getFruitPixelsToSqm()
    local v12 = MathUtil.areaToHa(...)
    v13:updateFarmStats(v11, "workedHectares", v12)
    v13:updateFarmStats(v11, "workedTime", dt / 60000)
    v5.lastWorkedArea = -1
  end
end
function WorkArea:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_workArea.showFarmlandNotOwnedWarning then
    if self.propertyState == Vehicle.PROPERTY_STATE_MISSION then
      v5:showBlinkingWarning(self.spec_workArea.warningCantUseMissionVehiclesOnOtherLand)
      return
    end
    v5:showBlinkingWarning(v4.warningYouDontHaveAccessToThisLand)
  end
end
function WorkArea:loadWorkAreaFromXML(workArea, xmlFile, key)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. ".area#startIndex", key .. ".area#startNode")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. ".area#widthIndex", key .. ".area#widthNode")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. ".area#heightIndex", key .. ".area#heightNode")
  local v4 = xmlFile:getValue(key .. ".area#startNode", workArea.start, self.components, self.i3dMappings)
  local v5 = xmlFile:getValue(key .. ".area#widthNode", workArea.width, self.components, self.i3dMappings)
  local v6 = xmlFile:getValue(key .. ".area#heightNode", workArea.height, self.components, self.i3dMappings)
  if v4 ~= nil and v5 ~= nil and v6 ~= nil then
    local v7 = calcDistanceFrom(v4, v5)
    if v7 < 0.001 then
      Logging.xmlError(xmlFile, "'start' and 'width' have the same position for '%s'!", key)
      return false
    end
    v7 = calcDistanceFrom(v5, v6)
    if v7 < 0.001 then
      Logging.xmlError(xmlFile, "'width' and 'height' have the same position for '%s'!", key)
      return false
    end
    v7 = xmlFile:getValue(key .. "#type")
    local v8 = v8:getWorkAreaTypeIndexByName(v7)
    if not v8 then
    end
    workArea["type"] = v8
    if workArea["type"] == nil then
      Logging.xmlWarning(xmlFile, "Invalid workArea type '%s' for workArea '%s'!", v7, key)
      return false
    end
    v8 = xmlFile:getValue(key .. "#requiresGroundContact", true)
    workArea.requiresGroundContact = v8
    if workArea["type"] ~= WorkAreaType.AUXILIARY then
      if workArea.requiresGroundContact then
        XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#refNodeIndex", key .. ".groundReferenceNode#index")
        v8 = xmlFile:getValue(key .. ".groundReferenceNode#index")
        if v8 == nil then
          Logging.xmlWarning(xmlFile, "Missing groundReference 'groundReferenceNode#index' for workArea '%s'. Add requiresGroundContact=\"false\" if groundContact is not required!", key)
          return false
        end
        local v9 = self:getGroundReferenceNodeFromIndex(v8)
        if v9 ~= nil then
          workArea.groundReferenceNode = v9
        else
          Logging.xmlWarning(xmlFile, "Invalid groundReferenceNode-index for workArea '%s'!", key)
          return false
        end
      end
      v8 = xmlFile:getValue(key .. "#disableBackwards", true)
      workArea.disableBackwards = v8
      v8 = xmlFile:getValue(key .. ".onlyActiveWhenLowered#value", false)
      workArea.onlyActiveWhenLowered = v8
      v8 = xmlFile:getValue(key .. "#functionName")
      workArea.functionName = v8
      if workArea.functionName == nil then
        Logging.xmlWarning(xmlFile, "Missing 'functionName' for workArea '%s'!", key)
        return false
      end
      if self[workArea.functionName] == nil then
        local v11 = tostring(workArea.functionName)
        Logging.xmlWarning(...)
        return false
      end
      workArea.processingFunction = self[workArea.functionName]
      if g_isDevelopmentVersion then
        v8 = SpecializationUtil.hasSpecialization(Cutter, self.specializations)
        if not v8 then
          v8 = SpecializationUtil.hasSpecialization(Pickup, self.specializations)
          if not v8 then
            v8 = SpecializationUtil.hasSpecialization(Drivable, self.specializations)
            if not v8 then
              v8 = xmlFile:getString(key .. ".onlyActiveWhenLowered#value")
              if v8 == nil then
                Logging.xmlDevWarning(xmlFile, "Work area has no 'onlyActiveWhenLowered' attribute set! '%s'", key)
              end
            end
          end
        end
      end
      v8 = xmlFile:getValue(key .. "#preprocessFunctionName")
      workArea.preprocessFunctionName = v8
      if workArea.preprocessFunctionName ~= nil then
        if self[workArea.preprocessFunctionName] == nil then
          v11 = tostring(workArea.preprocessFunctionName)
          Logging.xmlWarning(...)
          return false
        end
        workArea.preprocessingFunction = self[workArea.preprocessFunctionName]
      end
      v8 = xmlFile:getValue(key .. "#postprocessFunctionName")
      workArea.postprocessFunctionName = v8
      if workArea.postprocessFunctionName ~= nil then
        if self[workArea.postprocessFunctionName] == nil then
          v11 = tostring(workArea.postprocessFunctionName)
          Logging.xmlWarning(...)
          return false
        end
        workArea.postprocessingFunction = self[workArea.postprocessFunctionName]
      end
      v8 = xmlFile:getValue(key .. "#requiresOwnedFarmland", true)
      workArea.requiresOwnedFarmland = v8
    end
    workArea.lastProcessingTime = 0
    workArea.start = v4
    workArea.width = v5
    workArea.height = v6
    workArea.workWidth = -1
    return true
  end
  return false
end
function WorkArea:getWorkAreaByIndex(workAreaIndex)
  return self.spec_workArea.workAreas[workAreaIndex]
end
function WorkArea:getIsWorkAreaActive(workArea)
  if workArea.requiresGroundContact == true and workArea.groundReferenceNode ~= nil then
    local v2 = self:getIsGroundReferenceNodeActive(workArea.groundReferenceNode)
    if not v2 then
      return false
    end
  end
  if workArea.disableBackwards and self.movingDirection <= 0 then
    return false
  end
  if workArea.onlyActiveWhenLowered and self.getIsLowered ~= nil then
    v2 = self:getIsLowered(false)
    if not v2 then
      return false
    end
  end
  return true
end
function WorkArea:updateWorkAreaWidth(workAreaIndex)
  local v4, v5, v6 = localToLocal(self.components[1].node, self.spec_workArea.workAreas[workAreaIndex].start, 0, 0, 0)
  local v7, v8, v9 = localToLocal(self.components[1].node, self.spec_workArea.workAreas[workAreaIndex].width, 0, 0, 0)
  local v10, v11, v12 = localToLocal(self.components[1].node, self.spec_workArea.workAreas[workAreaIndex].height, 0, 0, 0)
  local v14 = math.max(v4, v7, v10)
  local v15 = math.min(v4, v7, v10)
  self.spec_workArea.workAreas[workAreaIndex].workWidth = v14 - v15
end
function WorkArea:getWorkAreaWidth(workAreaIndex)
  return self.spec_workArea.workAreas[workAreaIndex].workWidth
end
function WorkArea.getIsWorkAreaProcessing(v0, v1)
  if g_currentMission.time > v1.lastProcessingTime + 200 then
  end
  return true
end
function WorkArea:getTypedNetworkAreas(areaType, needsFieldProperty)
  local typedWorkAreas = self:getTypedWorkAreas(areaType)
  for v10, v11 in pairs(typedWorkAreas) do
    local v12 = self:getIsWorkAreaActive(v11)
    if not v12 then
      continue
    end
    local v12, v13, v14 = getWorldTranslation(v11.start)
    if needsFieldProperty then
      local v16 = v16:getFarmId()
      local v17 = v17:canFarmAccessLand(v16, v12, v14)
      if not v17 then
        v17 = v17:getIsMissionWorkAllowed(v16, v12, v14, areaType)
      end
    end
    if v15 then
      local v16, v17, v18 = getWorldTranslation(v11.width)
      local v19, v20, v21 = getWorldTranslation(v11.height)
      local v22 = math.abs((v18 - v14) * (v19 - v12) - (v16 - v12) * (v21 - v14))
      table.insert(v3, {v12, v14, v16, v18, v19, v21})
    else
    end
  end
  return v3, v6, v4
end
function WorkArea:getTypedWorkAreas(areaType)
  if self.spec_workArea.workAreaByType[areaType] == nil then
  end
  return v3
end
function WorkArea:getIsTypedWorkAreaActive(areaType)
  local typedWorkAreas = self:getTypedWorkAreas(areaType)
  for v7, v8 in pairs(typedWorkAreas) do
    local v9 = self:getIsWorkAreaActive(v8)
    if not v9 then
      continue
    end
    return true, typedWorkAreas
  end
  return v2, typedWorkAreas
end
function WorkArea:getIsFarmlandNotOwnedWarningShown()
  return self.spec_workArea.showFarmlandNotOwnedWarning
end
function WorkArea.loadSpeedRotatingPartFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  v5 = v3:getValue(v4 .. "#workAreaIndex")
  v2.workAreaIndex = v5
  return true
end
function WorkArea:getIsSpeedRotatingPartActive(superFunc, speedRotatingPart)
  if speedRotatingPart.workAreaIndex ~= nil then
    if self.spec_workArea.workAreas[speedRotatingPart.workAreaIndex] == nil then
      speedRotatingPart.workAreaIndex = nil
      local v8 = tostring(speedRotatingPart.workAreaIndex)
      Logging.xmlWarning(...)
      return true
    end
    local v5 = self:getIsWorkAreaProcessing(v3.workAreas[speedRotatingPart.workAreaIndex])
    if not v5 then
      return false
    end
  end
  return superFunc(self, speedRotatingPart)
end
function WorkArea:checkMovingPartDirtyUpdateNode(superFunc, node, movingPart)
  superFunc(self, node, movingPart)
  -- TODO: structure LOP_FORNPREP (pc 12, target 44)
  if node ~= self.spec_workArea.workAreas[1].start and node ~= self.spec_workArea.workAreas[1].width then
    -- if v2 ~= v0.spec_workArea.workAreas[1].height then goto L43 end
  end
  local v12 = getName(node)
  local v13 = getName(movingPart.node)
  Logging.xmlError(...)
  -- TODO: structure LOP_FORNLOOP (pc 43, target 13)
end
