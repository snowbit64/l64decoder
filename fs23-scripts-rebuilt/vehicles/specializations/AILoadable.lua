-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AILoadable = {}
function AILoadable.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(FillUnit, v0)
end
function AILoadable.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("FillUnit")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#allowAILoading", "Allows ai loading", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, FillUnit.FILL_UNIT_XML_KEY .. "#aiLoadingNode", "AI loading node", "exactFillRootNode")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function AILoadable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getAILoadingNodeZAlignedOffset", AILoadable.getAILoadingNodeZAlignedOffset)
  SpecializationUtil.registerFunction(vehicleType, "getAIFillUnits", AILoadable.getAIFillUnits)
  SpecializationUtil.registerFunction(vehicleType, "aiPrepareLoading", AILoadable.aiPrepareLoading)
  SpecializationUtil.registerFunction(vehicleType, "aiFinishLoading", AILoadable.aiFinishLoading)
  SpecializationUtil.registerFunction(vehicleType, "aiStartLoadingFromTrigger", AILoadable.aiStartLoadingFromTrigger)
  SpecializationUtil.registerFunction(vehicleType, "aiStoppedLoadingFromTrigger", AILoadable.aiStoppedLoadingFromTrigger)
  SpecializationUtil.registerFunction(vehicleType, "aiCancelLoadingFromTrigger", AILoadable.aiCancelLoadingFromTrigger)
  SpecializationUtil.registerFunction(vehicleType, "aiFinishedLoadingFromTrigger", AILoadable.aiFinishedLoadingFromTrigger)
  SpecializationUtil.registerFunction(vehicleType, "getAIHasFinishedLoading", AILoadable.getAIHasFinishedLoading)
end
function AILoadable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadFillUnitFromXML", AILoadable.loadFillUnitFromXML)
end
function AILoadable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoad", AILoadable)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AILoadable)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", AILoadable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AILoadable)
end
function AILoadable:onPreLoad()
  self.spec_aiLoadable.aiFillUnits = {}
end
function AILoadable:onLoad()
  self.spec_aiLoadable.currentFillUnitIndex = nil
end
function AILoadable:onPostLoad()
  if self.spec_aiLoadable.aiFillUnits ~= nil then
    for v5, v6 in ipairs(self.spec_aiLoadable.aiFillUnits) do
      v6.inputAttacherJointOffsets = {}
      if self.getInputAttacherJoints ~= nil then
        local v8 = self:getInputAttacherJoints()
        for v10, v11 in ipairs(...) do
          local v12, v13, v14 = localToLocal(v6.aiLoadingNode, v11.node, 0, 0, 0)
          table.insert(v6.inputAttacherJointOffsets, {v12, v13, v14})
        end
      end
      if not (self.getAIRootNode ~= nil) then
        continue
      end
      v7 = self:getAIRootNode()
      v9 = localToLocal(v6.aiLoadingNode, v7, 0, 0, 0)
      v6.aiRootNodeOffsets = {}
    end
  end
end
function AILoadable:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_aiLoadable.currentFillUnitIndex ~= nil and not self.spec_aiLoadable.isAILoadingRunning then
    local v6 = self:getAIHasFinishedLoading(self.spec_aiLoadable.currentFillUnitIndex)
    if v6 then
      self:aiFinishedLoadingFromTrigger()
    end
  end
end
function AILoadable:loadFillUnitFromXML(superFunc, xmlFile, key, entry, index)
  local v6 = superFunc(self, xmlFile, key, entry, index)
  if not v6 then
    return false
  end
  v6 = xmlFile:getValue(key .. "#allowAILoading", false)
  entry.allowAILoading = v6
  if entry.allowAILoading then
    v6 = xmlFile:getValue(key .. "#aiLoadingNode", nil, self.components, self.i3dMappings)
    if not v6 then
    end
    entry.aiLoadingNode = v6
    if entry.aiLoadingNode ~= nil then
      table.insert(self.spec_aiLoadable.aiFillUnits, entry)
    else
      Logging.xmlWarning(self.xmlFile, "AILoadingNode not found for fillUnit '%s'!", key)
    end
  end
  return true
end
function AILoadable:getAIFillUnits()
  return self.spec_aiLoadable.aiFillUnits
end
function AILoadable:getAILoadingNodeZAlignedOffset(fillUnitIndex, targetVehicle)
  local fillUnit = self:getFillUnitByIndex(fillUnitIndex)
  if targetVehicle == self then
    return fillUnit.aiRootNodeOffsets[1], fillUnit.aiRootNodeOffsets[2], fillUnit.aiRootNodeOffsets[3]
  end
  local index = self:getActiveInputAttacherJointDescIndex()
  local v10 = self:getAttacherVehicle()
  while targetVehicle ~= v10 do
    local v11 = v10:getAttacherJointDescFromObject(v9)
    local v12 = v10:getActiveInputAttacherJointDescIndex()
    local v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25 = unpack(v11.inputAttacherJointOffsets[v12])
    local v29 = v10:getAttacherVehicle()
  end
  v11 = targetVehicle:getAttacherJointDescFromObject(v9)
  local v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24 = unpack(v11.aiRootNodeOffset)
  return v13 + v22 * v6 + v19 * v7 + v16 * v8, v14 + v23 * v6 + v20 * v7 + v17 * v8, v15 + v24 * v6 + v21 * v7 + v18 * v8
end
function AILoadable.aiPrepareLoading(v0, v1, v2)
end
function AILoadable:aiStartLoadingFromTrigger(loadTrigger, fillUnitIndex, fillType, task)
  self.spec_aiLoadable.task = task
  self.spec_aiLoadable.isAILoadingRunning = true
  self.spec_aiLoadable.currentFillUnitIndex = fillUnitIndex
  loadTrigger:setIsLoading(true, self, fillUnitIndex, fillType, false)
end
function AILoadable.aiCancelLoadingFromTrigger(v0, v1, v2, v3, v4)
  v1:setIsLoading(false, v0, v2, v3, false)
end
function AILoadable:aiStoppedLoadingFromTrigger()
  self.spec_aiLoadable.isAILoadingRunning = false
end
function AILoadable:aiFinishedLoadingFromTrigger()
  if self.spec_aiLoadable.task ~= nil then
    v2:finishedLoading()
  end
  v1.currentFillUnitIndex = nil
  v1.task = nil
end
function AILoadable.aiFinishLoading(v0, v1, v2)
end
function AILoadable.getAIHasFinishedLoading(v0, v1)
  return true
end
