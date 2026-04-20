-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PowerTakeOffs = {DEFAULT_MAX_UPDATE_DISTANCE = 40, xmlSchema = nil}
function PowerTakeOffs.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(AttacherJoints, v0)
  if not v1 then
    v1 = SpecializationUtil.hasSpecialization(Attachable, v0)
  end
  return v1
end
function PowerTakeOffs.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("PowerTakeOffs")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.powerTakeOffs.powerTakeOffConfigurations.powerTakeOffConfiguration(?)")
  PowerTakeOffs.registerXMLPaths(Vehicle.xmlSchema, "vehicle.powerTakeOffs.powerTakeOffConfigurations.powerTakeOffConfiguration(?)")
  PowerTakeOffs.registerXMLPaths(Vehicle.xmlSchema, "vehicle.powerTakeOffs")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_TOOL_XML_KEY .. ".powerTakeOffs#indices", "PTOs to update")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_TOOL_XML_KEY .. ".powerTakeOffs#localIndices", "Local PTOs to update")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_PART_XML_KEY .. ".powerTakeOffs#indices", "PTOs to update")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_PART_XML_KEY .. ".powerTakeOffs#localIndices", "Local PTOs to update")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.powerTakeOffs#ignoreInvalidJointIndices", "Do not display warning if attacher joint index could not be found. Can be useful if attacher joints change due to configurations", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.powerTakeOffs#maxUpdateDistance", "Max. distance to vehicle root to update power take offs", PowerTakeOffs.DEFAULT_MAX_UPDATE_DISTANCE)
  Vehicle.xmlSchema:setXMLSpecializationType()
  local powerTakeOffXMLSchema = XMLSchema.new("powerTakeOff")
  PowerTakeOffs.xmlSchema = powerTakeOffXMLSchema
  powerTakeOffXMLSchema:register(XMLValueType.STRING, "powerTakeOff#filename", "Path to i3d file")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.startNode#node", "Start node")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.linkNode#node", "Link node")
  powerTakeOffXMLSchema:register(XMLValueType.FLOAT, "powerTakeOff#size", "Height of pto", 0.19)
  powerTakeOffXMLSchema:register(XMLValueType.FLOAT, "powerTakeOff#minLength", "Minimum length of pto", 0.6)
  powerTakeOffXMLSchema:register(XMLValueType.ANGLE, "powerTakeOff#maxAngle", "Max. angle between start and end", 45)
  powerTakeOffXMLSchema:register(XMLValueType.FLOAT, "powerTakeOff#zOffset", "Z axis offset of end node", 0)
  powerTakeOffXMLSchema:register(XMLValueType.STRING, "powerTakeOff#colorShaderParameter", "Color shader parameter")
  powerTakeOffXMLSchema:register(XMLValueType.STRING, "powerTakeOff#decalColorShaderParameter", "Decal color shader parameter")
  AnimationManager.registerAnimationNodesXMLPaths(powerTakeOffXMLSchema, "powerTakeOff.animationNodes")
  powerTakeOffXMLSchema:register(XMLValueType.BOOL, "powerTakeOff#isSingleJoint", "Is single joint PTO", false)
  powerTakeOffXMLSchema:register(XMLValueType.BOOL, "powerTakeOff#isDoubleJoint", "Is double joint PTO", false)
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.startJoint#node", "(Single Joint) Start joint node")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.endJoint#node", "(Single Joint) End joint node")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.scalePart#node", "(Single|Double Joint) Scale part node")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.scalePart#referenceNode", "(Single|Double Joint) Scale part reference node")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.translationPart#node", "(Single|Double Joint) translation part node")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.translationPart#referenceNode", "(Single|Double Joint) translation part reference node")
  powerTakeOffXMLSchema:register(XMLValueType.FLOAT, "powerTakeOff.translationPart#length", "(Single|Double Joint) translation part length", 0.4)
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.translationPart.decal#node", "(Single|Double Joint) translation part decal node")
  powerTakeOffXMLSchema:register(XMLValueType.FLOAT, "powerTakeOff.translationPart.decal#size", "(Single|Double Joint) translation part decal size", 0.1)
  powerTakeOffXMLSchema:register(XMLValueType.FLOAT, "powerTakeOff.translationPart.decal#offset", "(Single|Double Joint) translation part decal offset", 0.05)
  powerTakeOffXMLSchema:register(XMLValueType.FLOAT, "powerTakeOff.translationPart.decal#minOffset", "(Single|Double Joint) translation part decal minOffset", 0.01)
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.startJoint1#node", "(Double Joint) Start joint 1")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.startJoint2#node", "(Double Joint) Start joint 2")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.endJoint1#node", "(Double Joint) End joint 1")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.endJoint1#referenceNode", "(Double Joint) End joint 1 reference node")
  powerTakeOffXMLSchema:register(XMLValueType.NODE_INDEX, "powerTakeOff.endJoint2#node", "(Double Joint) End joint 2")
end
function PowerTakeOffs.registerXMLPaths(schema, basePath)
  PowerTakeOffs.registerOutputXMLPaths(schema, basePath .. ".output(?)")
  PowerTakeOffs.registerInputXMLPaths(schema, basePath .. ".input(?)")
  PowerTakeOffs.registerLocalXMLPaths(schema, basePath .. ".local(?)")
end
function PowerTakeOffs:registerOutputXMLPaths(v1)
  self:register(XMLValueType.INT, v1 .. "#skipToInputAttacherIndex", "Skip to input attacher joint index")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#outputNode", "Output node")
  self:register(XMLValueType.VECTOR_N, v1 .. "#attacherJointIndices", "Attacher joint indices")
  self:register(XMLValueType.STRING, v1 .. "#ptoName", "Output name", "DEFAULT_PTO")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1)
end
function PowerTakeOffs:registerInputXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#inputNode", "Input node")
  self:register(XMLValueType.VECTOR_N, v1 .. "#inputAttacherJointIndices", "Input attacher joint indices")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#detachNode", "Detach node")
  self:register(XMLValueType.BOOL, v1 .. "#aboveAttacher", "Above attacher", true)
  self:register(XMLValueType.COLOR, v1 .. "#color", "Color")
  self:register(XMLValueType.COLOR, v1 .. "#decalColor", "Color of decals")
  self:register(XMLValueType.STRING, v1 .. "#filename", "Path to pto xml file", "$data/shared/assets/powerTakeOffs/walterscheidW.xml")
  self:register(XMLValueType.STRING, v1 .. "#ptoName", "Pto name", "DEFAULT_PTO")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1)
end
function PowerTakeOffs:registerLocalXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#startNode", "Start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#endNode", "End node")
  self:register(XMLValueType.COLOR, v1 .. "#color", "Color")
  self:register(XMLValueType.COLOR, v1 .. "#decalColor", "Color of decals")
  self:register(XMLValueType.STRING, v1 .. "#filename", "Path to pto xml file", "$data/shared/assets/powerTakeOffs/walterscheidW.xml")
end
function PowerTakeOffs.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getPowerTakeOffConfigIndex", PowerTakeOffs.getPowerTakeOffConfigIndex)
  SpecializationUtil.registerFunction(vehicleType, "loadPowerTakeOffsFromXML", PowerTakeOffs.loadPowerTakeOffsFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadOutputPowerTakeOff", PowerTakeOffs.loadOutputPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "loadInputPowerTakeOff", PowerTakeOffs.loadInputPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "loadLocalPowerTakeOff", PowerTakeOffs.loadLocalPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "placeLocalPowerTakeOff", PowerTakeOffs.placeLocalPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "updatePowerTakeOff", PowerTakeOffs.updatePowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "updateAttachedPowerTakeOffs", PowerTakeOffs.updateAttachedPowerTakeOffs)
  SpecializationUtil.registerFunction(vehicleType, "updatePowerTakeOffLength", PowerTakeOffs.updatePowerTakeOffLength)
  SpecializationUtil.registerFunction(vehicleType, "getOutputPowerTakeOffsByJointDescIndex", PowerTakeOffs.getOutputPowerTakeOffsByJointDescIndex)
  SpecializationUtil.registerFunction(vehicleType, "getOutputPowerTakeOffs", PowerTakeOffs.getOutputPowerTakeOffs)
  SpecializationUtil.registerFunction(vehicleType, "getInputPowerTakeOffs", PowerTakeOffs.getInputPowerTakeOffs)
  SpecializationUtil.registerFunction(vehicleType, "getInputPowerTakeOffsByJointDescIndexAndName", PowerTakeOffs.getInputPowerTakeOffsByJointDescIndexAndName)
  SpecializationUtil.registerFunction(vehicleType, "getIsPowerTakeOffActive", PowerTakeOffs.getIsPowerTakeOffActive)
  SpecializationUtil.registerFunction(vehicleType, "attachPowerTakeOff", PowerTakeOffs.attachPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "detachPowerTakeOff", PowerTakeOffs.detachPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "checkPowerTakeOffCollision", PowerTakeOffs.checkPowerTakeOffCollision)
  SpecializationUtil.registerFunction(vehicleType, "parkPowerTakeOff", PowerTakeOffs.parkPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "loadPowerTakeOffFromConfigFile", PowerTakeOffs.loadPowerTakeOffFromConfigFile)
  SpecializationUtil.registerFunction(vehicleType, "onPowerTakeOffI3DLoaded", PowerTakeOffs.onPowerTakeOffI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "loadSingleJointPowerTakeOff", PowerTakeOffs.loadSingleJointPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "updateSingleJointPowerTakeOff", PowerTakeOffs.updateSingleJointPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "loadDoubleJointPowerTakeOff", PowerTakeOffs.loadDoubleJointPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "updateDoubleJointPowerTakeOff", PowerTakeOffs.updateDoubleJointPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "loadBasicPowerTakeOff", PowerTakeOffs.loadBasicPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "attachTypedPowerTakeOff", PowerTakeOffs.attachTypedPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "detachTypedPowerTakeOff", PowerTakeOffs.detachTypedPowerTakeOff)
  SpecializationUtil.registerFunction(vehicleType, "validatePowerTakeOffAttachment", PowerTakeOffs.validatePowerTakeOffAttachment)
end
function PowerTakeOffs.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadExtraDependentParts", PowerTakeOffs.loadExtraDependentParts)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateExtraDependentParts", PowerTakeOffs.updateExtraDependentParts)
end
function PowerTakeOffs.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoad", PowerTakeOffs)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", PowerTakeOffs)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", PowerTakeOffs)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", PowerTakeOffs)
  SpecializationUtil.registerEventListener(vehicleType, "onPostUpdate", PowerTakeOffs)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateEnd", PowerTakeOffs)
  SpecializationUtil.registerEventListener(vehicleType, "onPreAttachImplement", PowerTakeOffs)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttachImplement", PowerTakeOffs)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetachImplement", PowerTakeOffs)
end
function PowerTakeOffs:onPreLoad(savegame)
  local v3 = self:getPowerTakeOffConfigIndex()
  self.spec_powerTakeOffs.configIndex = v3
end
function PowerTakeOffs:onLoad(savegame)
  local v3 = string.format("vehicle.powerTakeOffs.powerTakeOffConfigurations.powerTakeOffConfiguration(%d)", self.spec_powerTakeOffs.configIndex - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.powerTakeOffs.powerTakeOffConfigurations.powerTakeOffConfiguration", self.spec_powerTakeOffs.configIndex, self.components, self)
  self.spec_powerTakeOffs.outputPowerTakeOffs = {}
  self.spec_powerTakeOffs.inputPowerTakeOffs = {}
  self.spec_powerTakeOffs.localPowerTakeOffs = {}
  self:loadPowerTakeOffsFromXML(self.xmlFile, "vehicle.powerTakeOffs")
  local v4 = v4:hasProperty(v3)
  if v4 then
    self:loadPowerTakeOffsFromXML(self.xmlFile, v3)
  end
  v4 = v4:getValue("vehicle.powerTakeOffs#ignoreInvalidJointIndices", false)
  v2.ignoreInvalidJointIndices = v4
  v4 = v4:getValue("vehicle.powerTakeOffs#maxUpdateDistance", PowerTakeOffs.DEFAULT_MAX_UPDATE_DISTANCE)
  v2.maxUpdateDistance = v4
  v2.delayedPowerTakeOffsMountings = {}
  if not self.isClient then
    SpecializationUtil.removeEventListener(self, "onPostUpdate", PowerTakeOffs)
  end
end
function PowerTakeOffs:onPostLoad(savegame)
  -- TODO: structure LOP_FORNPREP (pc 7, target 41)
  for v10, v11 in pairs(self.spec_powerTakeOffs.outputPowerTakeOffs[1].attacherJointIndices) do
    local v12 = self:getAttacherJointByJointDescIndex(v10)
    if not (v12 == nil) then
      continue
    end
    if not v2.ignoreInvalidJointIndices then
      Logging.xmlWarning(self.xmlFile, "The given attacherJointIndex '%d' for powerTakeOff output '%s' can't be resolved into a valid attacherJoint", v10, v5)
    end
    v6.attacherJointIndices[v10] = false
  end
  -- TODO: structure LOP_FORNLOOP (pc 40, target 8)
  -- TODO: structure LOP_FORNPREP (pc 46, target 80)
  for v10, v11 in pairs(v2.inputPowerTakeOffs[1].inputAttacherJointIndices) do
    v12 = self:getInputAttacherJointByJointDescIndex(v10)
    if not (v12 == nil) then
      continue
    end
    if not v2.ignoreInvalidJointIndices then
      Logging.xmlWarning(self.xmlFile, "The given inputAttacherJointIndex '%d' for powerTakeOff input '%s' can't be resolved into a valid attacherJoint", v10, v5)
    end
    v6.inputAttacherJointIndices[v10] = false
  end
  -- TODO: structure LOP_FORNLOOP (pc 79, target 47)
end
function PowerTakeOffs:onDelete()
  if self.spec_powerTakeOffs.outputPowerTakeOffs ~= nil then
    for v5, v6 in pairs(self.spec_powerTakeOffs.outputPowerTakeOffs) do
      if v6.xmlFile ~= nil then
        v7:delete()
        v6.xmlFile = nil
      end
      if v6.sharedLoadRequestId ~= nil then
        v7:releaseSharedI3DFile(v6.sharedLoadRequestId)
        v6.sharedLoadRequestId = nil
      end
      if not (v6.rootNode ~= nil) then
        continue
      end
      delete(v6.rootNode)
      delete(v6.attachNode)
    end
  end
  if v1.inputPowerTakeOffs ~= nil then
    for v5, v6 in pairs(v1.inputPowerTakeOffs) do
      if v6.xmlFile ~= nil then
        v7:delete()
        v6.xmlFile = nil
      end
      if v6.sharedLoadRequestId ~= nil then
        v7:releaseSharedI3DFile(v6.sharedLoadRequestId)
        v6.sharedLoadRequestId = nil
      end
      if v6.rootNode ~= nil then
        delete(v6.rootNode)
        delete(v6.attachNode)
      end
      v7:deleteAnimations(v6.animationNodes)
    end
  end
  if v1.localPowerTakeOffs ~= nil then
    for v5, v6 in pairs(v1.localPowerTakeOffs) do
      if v6.xmlFile ~= nil then
        v7:delete()
        v6.xmlFile = nil
      end
      if v6.sharedLoadRequestId ~= nil then
        v7:releaseSharedI3DFile(v6.sharedLoadRequestId)
        v6.sharedLoadRequestId = nil
      end
      v7:deleteAnimations(v6.animationNodes)
    end
  end
end
function PowerTakeOffs:onPostUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient and self.currentUpdateDistance < self.spec_powerTakeOffs.maxUpdateDistance then
    -- TODO: structure LOP_FORNPREP (pc 16, target 38)
    if self.spec_powerTakeOffs.inputPowerTakeOffs[1].connectedVehicle ~= nil and self.updateLoopIndex == self.spec_powerTakeOffs.inputPowerTakeOffs[1].connectedVehicle.updateLoopIndex then
      self:updatePowerTakeOff(self.spec_powerTakeOffs.inputPowerTakeOffs[1], dt)
    end
    -- TODO: structure LOP_FORNLOOP (pc 37, target 17)
    if self.getAttachedImplements ~= nil then
      local impements = self:getAttachedImplements()
      -- TODO: structure LOP_FORNPREP (pc 48, target 62)
      if impements[1].object.updateAttachedPowerTakeOffs ~= nil then
        impements[1].object:updateAttachedPowerTakeOffs(dt, self)
      end
      -- TODO: structure LOP_FORNLOOP (pc 61, target 49)
    end
    impements = self:getIsPowerTakeOffActive()
    if v5.lastIsPowerTakeOffActive ~= impements then
      -- TODO: structure LOP_FORNPREP (pc 74, target 99)
      if impements then
        -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L91
        v11:startAnimations(v5.inputPowerTakeOffs[1].animationNodes)
      else
        v11:stopAnimations(v5.inputPowerTakeOffs[1].animationNodes)
      end
      -- TODO: structure LOP_FORNLOOP (pc 98, target 75)
      -- TODO: structure LOP_FORNPREP (pc 104, target 125)
      if impements then
        v11:startAnimations(v5.localPowerTakeOffs[1].animationNodes)
      else
        v11:stopAnimations(v5.localPowerTakeOffs[1].animationNodes)
      end
      -- TODO: structure LOP_FORNLOOP (pc 124, target 105)
      v5.lastIsPowerTakeOffActive = impements
    end
  end
end
function PowerTakeOffs.onUpdateEnd(v0, v1, v2, v3, v4)
  PowerTakeOffs.onPostUpdate(v0, v1, v2, v3, v4)
end
function PowerTakeOffs.getPowerTakeOffConfigIndex(v0)
  return 1
end
function PowerTakeOffs:loadPowerTakeOffsFromXML(xmlFile, key)
  local v4 = SpecializationUtil.hasSpecialization(AttacherJoints, self.specializations)
  if v4 then
    xmlFile:iterate(key .. ".output", function(self, xmlFile)
      local v3 = v3:loadOutputPowerTakeOff(u1, xmlFile, {})
      if v3 then
        table.insert(u2.outputPowerTakeOffs, {})
      end
    end)
  end
  v4 = SpecializationUtil.hasSpecialization(Attachable, self.specializations)
  if v4 then
    xmlFile:iterate(key .. ".input", function(self, xmlFile)
      local v3 = v3:loadInputPowerTakeOff(u1, xmlFile, {})
      if v3 then
        table.insert(u2.inputPowerTakeOffs, {})
      end
    end)
  end
  xmlFile:iterate(key .. ".local", function(self, xmlFile)
    local v3 = v3:loadLocalPowerTakeOff(u1, xmlFile, {})
    if v3 then
      table.insert(u2.localPowerTakeOffs, {})
    end
  end)
end
function PowerTakeOffs:loadOutputPowerTakeOff(xmlFile, baseName, powerTakeOffOutput)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#linkNode", baseName .. "#outputNode")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#filename", "pto file is now defined in the pto input node")
  local v4 = xmlFile:getValue(baseName .. "#skipToInputAttacherIndex")
  powerTakeOffOutput.skipToInputAttacherIndex = v4
  v4 = xmlFile:getValue(baseName .. "#outputNode", nil, self.components, self.i3dMappings)
  if v4 == nil and powerTakeOffOutput.skipToInputAttacherIndex == nil then
    Logging.xmlWarning(xmlFile, "Pto output needs to have either a valid 'outputNode' or a 'skipToInputAttacherIndex' in '%s'", baseName)
    return false
  end
  local attacherJointIndicesRaw = xmlFile:getValue(baseName .. "#attacherJointIndices", nil, true)
  if attacherJointIndicesRaw == nil then
    Logging.xmlWarning(xmlFile, "Pto output needs to have valid 'attacherJointIndices' in '%s'", baseName)
    return false
  end
  for v10, v11 in ipairs(attacherJointIndicesRaw) do
    v5[v11] = true
  end
  powerTakeOffOutput.outputNode = v4
  powerTakeOffOutput.attacherJointIndices = v5
  powerTakeOffOutput.connectedInput = nil
  v7 = xmlFile:getValue(baseName .. "#ptoName", "DEFAULT_PTO")
  powerTakeOffOutput.ptoName = v7
  powerTakeOffOutput.objectChanges = {}
  ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, baseName, powerTakeOffOutput.objectChanges, self.components, self)
  ObjectChangeUtil.setObjectChanges(powerTakeOffOutput.objectChanges, false)
  return true
end
function PowerTakeOffs:loadInputPowerTakeOff(xmlFile, baseName, powerTakeOffInput)
  local v4 = xmlFile:getValue(baseName .. "#inputNode", nil, self.components, self.i3dMappings)
  if v4 == nil then
    Logging.xmlWarning(xmlFile, "Pto input needs to have a valid 'inputNode' in '%s'", baseName)
    return false
  end
  local inputAttacherJointIndicesRaw = xmlFile:getValue(baseName .. "#inputAttacherJointIndices", nil, true)
  if inputAttacherJointIndicesRaw == nil then
    Logging.xmlWarning(xmlFile, "Pto output needs to have valid 'inputAttacherJointIndices' in '%s'", baseName)
    return false
  end
  for v10, v11 in ipairs(inputAttacherJointIndicesRaw) do
    v5[v11] = true
  end
  powerTakeOffInput.inputNode = v4
  if Platform.gameplay.hasDetachedPowerTakeOffs then
    v7 = xmlFile:getValue(baseName .. "#detachNode", nil, self.components, self.i3dMappings)
    powerTakeOffInput.detachNode = v7
  end
  powerTakeOffInput.inputAttacherJointIndices = v5
  v7 = xmlFile:getValue(baseName .. "#aboveAttacher", true)
  powerTakeOffInput.aboveAttacher = v7
  v7 = xmlFile:getValue(baseName .. "#color", nil, true)
  powerTakeOffInput.color = v7
  v7 = xmlFile:getValue(baseName .. "#decalColor", nil, true)
  powerTakeOffInput.decalColor = v7
  v7 = xmlFile:getValue(baseName .. "#ptoName", "DEFAULT_PTO")
  powerTakeOffInput.ptoName = v7
  powerTakeOffInput.objectChanges = {}
  ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, baseName, powerTakeOffInput.objectChanges, self.components, self)
  ObjectChangeUtil.setObjectChanges(powerTakeOffInput.objectChanges, false)
  v7 = xmlFile:getValue(baseName .. "#filename", "$data/shared/assets/powerTakeOffs/walterscheidW.xml")
  if v7 ~= nil then
    self:loadPowerTakeOffFromConfigFile(powerTakeOffInput, v7)
  end
  return true
end
function PowerTakeOffs:loadLocalPowerTakeOff(xmlFile, baseName, powerTakeOffLocal)
  powerTakeOffLocal.isLocal = true
  local v4 = xmlFile:getValue(baseName .. "#startNode", nil, self.components, self.i3dMappings)
  powerTakeOffLocal.inputNode = v4
  if powerTakeOffLocal.inputNode == nil then
    Logging.xmlWarning(xmlFile, "Missing startNode for local power take off '%s'", baseName)
    return false
  end
  v4 = xmlFile:getValue(baseName .. "#endNode", nil, self.components, self.i3dMappings)
  powerTakeOffLocal.endNode = v4
  if powerTakeOffLocal.endNode == nil then
    Logging.xmlWarning(xmlFile, "Missing endNode for local power take off '%s'", baseName)
    return false
  end
  v4 = xmlFile:getValue(baseName .. "#color", nil, true)
  powerTakeOffLocal.color = v4
  v4 = xmlFile:getValue(baseName .. "#decalColor", nil, true)
  powerTakeOffLocal.decalColor = v4
  v4 = xmlFile:getValue(baseName .. "#filename", "$data/shared/assets/powerTakeOffs/walterscheidW.xml")
  if v4 ~= nil then
    self:loadPowerTakeOffFromConfigFile(powerTakeOffLocal, v4)
  end
  return true
end
function PowerTakeOffs:placeLocalPowerTakeOff(powerTakeOff)
  if powerTakeOff.i3dLoaded then
    if not powerTakeOff.isPlaced then
      link(powerTakeOff.endNode, powerTakeOff.linkNode)
      setTranslation(powerTakeOff.linkNode, 0, 0, powerTakeOff.zOffset)
      setTranslation(powerTakeOff.startNode, 0, 0, -powerTakeOff.zOffset)
      self:updatePowerTakeOffLength(powerTakeOff)
      powerTakeOff.isPlaced = true
    end
    self:updatePowerTakeOff(powerTakeOff, 0)
  end
end
function PowerTakeOffs.updatePowerTakeOff(v0, v1, v2)
  if v1.i3dLoaded and v1.updateFunc ~= nil then
    v1.updateFunc(v0, v1, v2)
  end
end
function PowerTakeOffs:updateAttachedPowerTakeOffs(dt, attacherVehicle)
  for v7, v8 in pairs(self.spec_powerTakeOffs.inputPowerTakeOffs) do
    if not (v8.connectedVehicle ~= nil) then
      continue
    end
    if not (v8.connectedVehicle == attacherVehicle) then
      continue
    end
    if not (self.updateLoopIndex == v8.connectedVehicle.updateLoopIndex) then
      continue
    end
    self:updatePowerTakeOff(v8, dt)
  end
end
function PowerTakeOffs.updatePowerTakeOffLength(v0, v1)
  if v1.i3dLoaded and v1.updateDistanceFunc ~= nil then
    v1.updateDistanceFunc(v0, v1)
  end
end
function PowerTakeOffs:getOutputPowerTakeOffsByJointDescIndex(jointDescIndex)
  for v7, v8 in pairs(self.spec_powerTakeOffs.outputPowerTakeOffs) do
    if not (v8.attacherJointIndices[jointDescIndex] ~= nil) then
      continue
    end
    table.insert(v2, v8)
  end
  if 0 < #v2 then
    for v7, v8 in ipairs(v2) do
      if not (v8.skipToInputAttacherIndex ~= nil) then
        continue
      end
      local secondAttacherVehicle = self:getAttacherVehicle()
      if not (secondAttacherVehicle ~= nil) then
        continue
      end
      local v10 = secondAttacherVehicle:getImplementByObject(self)
      return secondAttacherVehicle:getOutputPowerTakeOffsByJointDescIndex(v10.jointDescIndex)
    end
  end
  return v2
end
function PowerTakeOffs:getOutputPowerTakeOffs()
  return self.spec_powerTakeOffs.outputPowerTakeOffs
end
function PowerTakeOffs:getInputPowerTakeOffsByJointDescIndexAndName(jointDescIndex, ptoName)
  for v8, v9 in pairs(self.spec_powerTakeOffs.inputPowerTakeOffs) do
    if not (v9.inputAttacherJointIndices[jointDescIndex] ~= nil) then
      continue
    end
    if not (v9.ptoName == ptoName) then
      continue
    end
    table.insert(v3, v9)
  end
  if #v3 == 0 then
    for v8, v9 in pairs(v4.outputPowerTakeOffs) do
      if not (v9.skipToInputAttacherIndex == jointDescIndex) then
        continue
      end
      for v13, v14 in pairs(v9.attacherJointIndices) do
        local v15 = self:getImplementFromAttacherJointIndex(v13)
        if not (v15 ~= nil) then
          continue
        end
        local v16 = v16:getInputPowerTakeOffsByJointDescIndexAndName(v15.inputJointDescIndex, ptoName)
      end
    end
  end
  return v3
end
function PowerTakeOffs:getInputPowerTakeOffs()
  return self.spec_powerTakeOffs.inputPowerTakeOffs
end
function PowerTakeOffs.getIsPowerTakeOffActive(v0)
  return false
end
function PowerTakeOffs:attachPowerTakeOff(attachableObject, inputJointDescIndex, jointDescIndex)
  local outputs = self:getOutputPowerTakeOffsByJointDescIndex(jointDescIndex)
  for v9, v10 in ipairs(outputs) do
    if not (attachableObject.getInputPowerTakeOffsByJointDescIndexAndName ~= nil) then
      continue
    end
    local v11 = attachableObject:getInputPowerTakeOffsByJointDescIndexAndName(inputJointDescIndex, v10.ptoName)
    for v15, v16 in ipairs(v11) do
      v10.connectedInput = v16
      v10.connectedVehicle = attachableObject
      v16.connectedVehicle = self
      v16.connectedOutput = v10
      table.insert(v4.delayedPowerTakeOffsMountings, {jointDescIndex = jointDescIndex, input = v16, output = v10})
    end
  end
  return true
end
function PowerTakeOffs:detachPowerTakeOff(detachingVehicle, implement, jointDescIndex)
  self.spec_powerTakeOffs.delayedPowerTakeOffsMountings = {}
  if not jointDescIndex then
  end
  local v5 = detachingVehicle:getOutputPowerTakeOffsByJointDescIndex(v7)
  for v9, v10 in ipairs(v5) do
    if not (v10.connectedInput ~= nil) then
      continue
    end
    if v10.connectedInput.detachFunc ~= nil then
      v10.connectedInput.detachFunc(self, v10.connectedInput, v10)
    end
    v11.connectedVehicle = nil
    v11.connectedOutput = nil
    v10.connectedVehicle = nil
    v10.connectedInput = nil
    ObjectChangeUtil.setObjectChanges(v11.objectChanges, false)
    ObjectChangeUtil.setObjectChanges(v10.objectChanges, false)
  end
  return true
end
function PowerTakeOffs:checkPowerTakeOffCollision(attacherJointNode, jointDescIndex, isTrailerAttacher)
  if isTrailerAttacher then
    local ptoOutputs = self:getOutputPowerTakeOffsByJointDescIndex(jointDescIndex)
    if ptoOutputs ~= nil and 0 < #ptoOutputs and ptoOutputs[1].connectedInput ~= nil then
      local v7, v8, v9 = localToLocal(ptoOutputs[1].outputNode, attacherJointNode, 0, 0, 0)
      if ptoOutputs[1].connectedInput.aboveAttacher then
        -- if v8 < 0 then goto L37 end
      end
      if not v6.aboveAttacher and 0 < v8 then
        self:detachPowerTakeOff(self, nil, jointDescIndex)
      end
    end
  end
end
function PowerTakeOffs:parkPowerTakeOff(input)
  if input.detachNode ~= nil then
    link(input.detachNode, input.linkNode)
    link(input.inputNode, input.startNode)
    self:updatePowerTakeOff(input, 0)
    self:updatePowerTakeOffLength(input)
  else
    link(input.inputNode, input.linkNode)
    link(input.inputNode, input.startNode)
    setVisibility(input.linkNode, false)
    setVisibility(input.startNode, false)
  end
  setTranslation(input.linkNode, 0, 0, input.zOffset)
  setTranslation(input.startNode, 0, 0, -input.zOffset)
end
function PowerTakeOffs:onPreAttachImplement(attachableObject, inputJointDescIndex, jointDescIndex)
  self:attachPowerTakeOff(attachableObject, inputJointDescIndex, jointDescIndex)
end
function PowerTakeOffs:onPostAttachImplement(attachableObject, inputJointDescIndex, jointDescIndex)
  -- TODO: structure LOP_FORNPREP (pc 7, target 48)
  if self.spec_powerTakeOffs.delayedPowerTakeOffsMountings[#self.spec_powerTakeOffs.delayedPowerTakeOffsMountings].jointDescIndex == jointDescIndex then
    if self.spec_powerTakeOffs.delayedPowerTakeOffsMountings[#self.spec_powerTakeOffs.delayedPowerTakeOffsMountings].input.attachFunc ~= nil then
      self.spec_powerTakeOffs.delayedPowerTakeOffsMountings[#self.spec_powerTakeOffs.delayedPowerTakeOffsMountings].input.attachFunc(self, self.spec_powerTakeOffs.delayedPowerTakeOffsMountings[#self.spec_powerTakeOffs.delayedPowerTakeOffsMountings].input, self.spec_powerTakeOffs.delayedPowerTakeOffsMountings[#self.spec_powerTakeOffs.delayedPowerTakeOffsMountings].output)
    end
    ObjectChangeUtil.setObjectChanges(v9.objectChanges, true)
    ObjectChangeUtil.setObjectChanges(v10.objectChanges, true)
    table.remove(v4.delayedPowerTakeOffsMountings, v7)
  end
  -- TODO: structure LOP_FORNLOOP (pc 47, target 8)
end
function PowerTakeOffs:onPreDetachImplement(implement)
  self:detachPowerTakeOff(self, implement)
end
function PowerTakeOffs:loadPowerTakeOffFromConfigFile(powerTakeOff, xmlFilename)
  local v3 = Utils.getFilename(xmlFilename, self.baseDirectory)
  v3 = XMLFile.load("PtoConfig", v3, PowerTakeOffs.xmlSchema)
  if v3 ~= nil then
    local v4 = v3:getValue("powerTakeOff#filename")
    if v4 ~= nil then
      local v5 = Utils.getFilename(v4, self.baseDirectory)
      powerTakeOff.xmlFile = v3
      local v6 = self:loadSubSharedI3DFile(v5, false, false, self.onPowerTakeOffI3DLoaded, self, {xmlFile = v3, powerTakeOff = powerTakeOff})
      powerTakeOff.sharedLoadRequestId = v6
      return
    end
    Logging.xmlWarning(self.xmlFile, "Failed to open powerTakeOff i3d file '%s' in '%s'", v4, xmlFilename)
    v3:delete()
    return
  end
  Logging.warning("Failed to open powerTakeOff config file '%s'", xmlFilename)
end
function PowerTakeOffs:onPowerTakeOffI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    local v6 = args.xmlFile:getValue("powerTakeOff.startNode#node", nil, i3dNode)
    args.powerTakeOff.startNode = v6
    v6 = args.xmlFile:getValue("powerTakeOff#size", 0.19)
    args.powerTakeOff.size = v6
    v6 = args.xmlFile:getValue("powerTakeOff#minLength", 0.6)
    args.powerTakeOff.minLength = v6
    v6 = args.xmlFile:getValue("powerTakeOff#maxAngle", 45)
    args.powerTakeOff.maxAngle = v6
    v6 = args.xmlFile:getValue("powerTakeOff#zOffset", 0)
    args.powerTakeOff.zOffset = v6
    v6 = v6:loadAnimations(args.xmlFile, "powerTakeOff.animationNodes", i3dNode, self)
    args.powerTakeOff.animationNodes = v6
    v6 = args.xmlFile:getValue("powerTakeOff#isSingleJoint")
    if v6 then
      self:loadSingleJointPowerTakeOff(args.powerTakeOff, args.xmlFile, i3dNode)
    else
      v6 = args.xmlFile:getValue("powerTakeOff#isDoubleJoint")
      if v6 then
        self:loadDoubleJointPowerTakeOff(args.powerTakeOff, args.xmlFile, i3dNode)
      else
        self:loadBasicPowerTakeOff(args.powerTakeOff, args.xmlFile, i3dNode)
      end
    end
    if v5.color ~= nil and 3 <= #v5.color then
      v6 = v4:getValue("powerTakeOff#colorShaderParameter")
      if v6 ~= nil then
        I3DUtil.setShaderParameterRec(v5.startNode, v6, v5.color[1], v5.color[2], v5.color[3])
      end
    end
    if v5.decalColor ~= nil and 3 <= #v5.decalColor then
      v6 = v4:getValue("powerTakeOff#decalColorShaderParameter")
      if v6 ~= nil then
        I3DUtil.setShaderParameterRec(v5.startNode, v6, v5.decalColor[1], v5.decalColor[2], v5.decalColor[3])
      end
    end
    link(v5.inputNode, v5.startNode)
    v5.i3dLoaded = true
    if v5.isLocal then
      self:placeLocalPowerTakeOff(v5)
    else
      self:parkPowerTakeOff(v5)
    end
    self:updatePowerTakeOff(v5, 0)
    delete(i3dNode)
  elseif not self.isDeleted and not self.isDeleting then
    Logging.xmlWarning(self.xmlFile, "Failed to find powerTakeOff in i3d file '%s'", args.powerTakeOff.filename)
  end
  v4:delete()
  v5.xmlFile = nil
end
function PowerTakeOffs.loadSingleJointPowerTakeOff(v0, i3dNode, failedReason, args)
  local v4 = failedReason:getValue("powerTakeOff.startJoint#node", nil, args)
  i3dNode.startJoint = v4
  v4 = failedReason:getValue("powerTakeOff.scalePart#node", nil, args)
  i3dNode.scalePart = v4
  v4 = failedReason:getValue("powerTakeOff.scalePart#referenceNode", nil, args)
  i3dNode.scalePartRef = v4
  local v4, v5, v6 = localToLocal(i3dNode.scalePartRef, i3dNode.scalePart, 0, 0, 0)
  i3dNode.scalePartBaseDistance = v6
  local v7 = failedReason:getValue("powerTakeOff.translationPart#node", nil, args)
  i3dNode.translationPart = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart#referenceNode", nil, args)
  i3dNode.translationPartRef = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart#length", 0.4)
  i3dNode.translationPartLength = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart.decal#node", nil, args)
  i3dNode.decal = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart.decal#size", 0.1)
  i3dNode.decalSize = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart.decal#offset", 0.05)
  i3dNode.decalOffset = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart.decal#minOffset", 0.01)
  i3dNode.decalMinOffset = v7
  v7 = failedReason:getValue("powerTakeOff.endJoint#node", nil, args)
  i3dNode.endJoint = v7
  v7 = failedReason:getValue("powerTakeOff.linkNode#node", nil, args)
  i3dNode.linkNode = v7
  local v7, v8, v9 = localToLocal(i3dNode.translationPart, i3dNode.translationPartRef, 0, 0, 0)
  local v10, v11, v12 = localToLocal(i3dNode.startNode, i3dNode.linkNode, 0, 0, 0)
  local v13 = math.abs(v9)
  i3dNode.betweenLength = v13
  local v14 = math.abs(v12)
  local v15 = math.abs(v9)
  i3dNode.connectorLength = v14 - v15
  setTranslation(i3dNode.linkNode, 0, 0, 0)
  setRotation(i3dNode.linkNode, 0, 0, 0)
  i3dNode.updateFunc = PowerTakeOffs.updateSingleJointPowerTakeOff
  i3dNode.updateDistanceFunc = PowerTakeOffs.updateDistanceOfTypedPowerTakeOff
  i3dNode.attachFunc = PowerTakeOffs.attachTypedPowerTakeOff
  i3dNode.detachFunc = PowerTakeOffs.detachTypedPowerTakeOff
end
function PowerTakeOffs.updateSingleJointPowerTakeOff(v0, i3dNode, failedReason)
  local args, v4, v5 = getWorldTranslation(i3dNode.linkNode)
  local v6, v7, v8 = worldToLocal(i3dNode.startNode, args, v4, v5)
  I3DUtil.setDirection(i3dNode.startJoint, v6, v7, v8, 0, 1, 0)
  local v10 = getParent(i3dNode.endJoint)
  local v9, v10, v11 = worldToLocal(v10, args, v4, v5)
  local v13 = MathUtil.vector3Length(v9, v10, v11)
  setTranslation(...)
  v9 = calcDistanceFrom(i3dNode.scalePart, i3dNode.scalePartRef)
  setScale(i3dNode.scalePart, 1, 1, v9 / i3dNode.scalePartBaseDistance)
end
function PowerTakeOffs.loadDoubleJointPowerTakeOff(v0, i3dNode, failedReason, args)
  local v4 = failedReason:getValue("powerTakeOff.startJoint1#node", nil, args)
  i3dNode.startJoint1 = v4
  v4 = failedReason:getValue("powerTakeOff.startJoint2#node", nil, args)
  i3dNode.startJoint2 = v4
  v4 = failedReason:getValue("powerTakeOff.scalePart#node", nil, args)
  i3dNode.scalePart = v4
  v4 = failedReason:getValue("powerTakeOff.scalePart#referenceNode", nil, args)
  i3dNode.scalePartRef = v4
  local v4, v5, v6 = localToLocal(i3dNode.scalePartRef, i3dNode.scalePart, 0, 0, 0)
  i3dNode.scalePartBaseDistance = v6
  local v7 = failedReason:getValue("powerTakeOff.translationPart#node", nil, args)
  i3dNode.translationPart = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart#referenceNode", nil, args)
  i3dNode.translationPartRef = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart#length", 0.4)
  i3dNode.translationPartLength = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart.decal#node", nil, args)
  i3dNode.decal = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart.decal#size", 0.1)
  i3dNode.decalSize = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart.decal#offset", 0.05)
  i3dNode.decalOffset = v7
  v7 = failedReason:getValue("powerTakeOff.translationPart.decal#minOffset", 0.01)
  i3dNode.decalMinOffset = v7
  v7 = failedReason:getValue("powerTakeOff.endJoint1#node", nil, args)
  i3dNode.endJoint1 = v7
  v7 = failedReason:getValue("powerTakeOff.endJoint1#referenceNode", nil, args)
  i3dNode.endJoint1Ref = v7
  v7 = failedReason:getValue("powerTakeOff.endJoint2#node", nil, args)
  i3dNode.endJoint2 = v7
  v7 = failedReason:getValue("powerTakeOff.linkNode#node", nil, args)
  i3dNode.linkNode = v7
  local v7, v8, v9 = localToLocal(i3dNode.translationPart, i3dNode.translationPartRef, 0, 0, 0)
  local v10, v11, v12 = localToLocal(i3dNode.startNode, i3dNode.linkNode, 0, 0, 0)
  local v13 = math.abs(v9)
  i3dNode.betweenLength = v13
  local v14 = math.abs(v12)
  local v15 = math.abs(v9)
  i3dNode.connectorLength = v14 - v15
  setTranslation(i3dNode.linkNode, 0, 0, 0)
  setRotation(i3dNode.linkNode, 0, 0, 0)
  i3dNode.updateFunc = PowerTakeOffs.updateDoubleJointPowerTakeOff
  i3dNode.updateDistanceFunc = PowerTakeOffs.updateDistanceOfTypedPowerTakeOff
  i3dNode.attachFunc = PowerTakeOffs.attachTypedPowerTakeOff
  i3dNode.detachFunc = PowerTakeOffs.detachTypedPowerTakeOff
end
function PowerTakeOffs.updateDoubleJointPowerTakeOff(v0, i3dNode, failedReason)
  local args, v4, v5 = getWorldTranslation(i3dNode.startNode)
  local v7 = getParent(i3dNode.endJoint2)
  local v6, v7, v8 = worldToLocal(v7, args, v4, v5)
  local v9, v10, v11 = MathUtil.vector3Normalize(v6, v7, v8)
  I3DUtil.setDirection(i3dNode.endJoint2, v9 * 0.5, v10 * 0.5, (v11 + 1) * 0.5, 0, 1, 0)
  v9, v10, v11 = getWorldTranslation(i3dNode.endJoint1Ref)
  v10 = getParent(i3dNode.startJoint1)
  v9, v10, v11 = worldToLocal(v10, v9, v10, v11)
  v9, v10, v11 = MathUtil.vector3Normalize(v9, v10, v11)
  I3DUtil.setDirection(i3dNode.startJoint1, v9 * 0.5, v10 * 0.5, (v11 + 1) * 0.5, 0, 1, 0)
  v9, v10, v11 = getWorldTranslation(i3dNode.endJoint1Ref)
  v10 = getParent(i3dNode.startJoint2)
  v9, v10, v11 = worldToLocal(v10, v9, v10, v11)
  v9, v10, v11 = MathUtil.vector3Normalize(v9, v10, v11)
  I3DUtil.setDirection(i3dNode.startJoint2, v9, v10, v11, 0, 1, 0)
  v10 = getParent(i3dNode.endJoint1)
  v9, v10, v11 = worldToLocal(v10, v9, v10, v11)
  local v13 = MathUtil.vector3Length(v9, v10, v11)
  setTranslation(...)
  v9 = calcDistanceFrom(i3dNode.scalePart, i3dNode.scalePartRef)
  setScale(i3dNode.scalePart, 1, 1, v9 / i3dNode.scalePartBaseDistance)
end
function PowerTakeOffs.loadBasicPowerTakeOff(v0, i3dNode, failedReason, args)
  local v4 = failedReason:getValue("powerTakeOff.startNode#node", nil, args)
  i3dNode.startNode = v4
  v4 = failedReason:getValue("powerTakeOff.linkNode#node", nil, args)
  i3dNode.linkNode = v4
  i3dNode.attachFunc = PowerTakeOffs.attachTypedPowerTakeOff
  i3dNode.detachFunc = PowerTakeOffs.detachTypedPowerTakeOff
end
function PowerTakeOffs.updateDistanceOfTypedPowerTakeOff(v0, i3dNode)
  local failedReason = calcDistanceFrom(i3dNode.linkNode, i3dNode.startNode)
  local v4 = math.max(failedReason - i3dNode.connectorLength, 0)
  setScale(i3dNode.translationPart, 1, 1, v4 / i3dNode.betweenLength)
  if i3dNode.decal ~= nil then
    if i3dNode.decalMinOffset * 2 + i3dNode.decalSize < v4 / i3dNode.betweenLength * i3dNode.translationPartLength then
      local v5 = math.min((v4 / i3dNode.betweenLength * i3dNode.translationPartLength - i3dNode.decalSize) / 2, i3dNode.decalOffset)
      local v7, v8, v9 = getTranslation(i3dNode.decal)
      setTranslation(i3dNode.decal, v7, v8, -(v5 + i3dNode.decalSize * 0.5) / v4 / i3dNode.betweenLength)
      setScale(i3dNode.decal, 1, 1, 1 / v4 / i3dNode.betweenLength)
      return
    end
    setVisibility(i3dNode.decal, false)
  end
end
function PowerTakeOffs:attachTypedPowerTakeOff(powerTakeOff, output)
  local args = self:validatePowerTakeOffAttachment(powerTakeOff, output)
  if args then
    link(output.outputNode, powerTakeOff.linkNode)
    link(powerTakeOff.inputNode, powerTakeOff.startNode)
    setTranslation(powerTakeOff.linkNode, 0, 0, powerTakeOff.zOffset)
    setTranslation(powerTakeOff.startNode, 0, 0, -powerTakeOff.zOffset)
    self:updatePowerTakeOff(powerTakeOff, 0)
    self:updatePowerTakeOffLength(powerTakeOff)
    setVisibility(powerTakeOff.linkNode, true)
    setVisibility(powerTakeOff.startNode, true)
  end
end
function PowerTakeOffs:detachTypedPowerTakeOff(powerTakeOff, output)
  self:parkPowerTakeOff(powerTakeOff)
end
function PowerTakeOffs.validatePowerTakeOffAttachment(v0, i3dNode, failedReason)
  if failedReason.outputNode ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L10
  end
  return false
  local args, v4, v5 = getWorldTranslation(failedReason.outputNode)
  local v6, v7, v8 = getWorldTranslation(i3dNode.inputNode)
  local v9 = MathUtil.vector3Length(args - v6, v4 - v7, v5 - v8)
  if v9 < i3dNode.minLength then
    return false
  end
  local v10 = MathUtil.vector2Length(args - v6, v5 - v8)
  local v11 = math.acos(v10 / v9)
  if i3dNode.maxAngle < v11 then
    return false
  end
  return true
end
function PowerTakeOffs.loadExtraDependentParts(v0, i3dNode, failedReason, args, v4)
  local v5 = i3dNode(v0, failedReason, args, v4)
  if not v5 then
    return false
  end
  v5 = failedReason:getValue(args .. ".powerTakeOffs#indices", nil, true)
  if v5 ~= nil then
    v4.powerTakeOffs = {}
    -- TODO: structure LOP_FORNPREP (pc 26, target 36)
    table.insert(v4.powerTakeOffs, v5[1])
    -- TODO: structure LOP_FORNLOOP (pc 35, target 27)
  end
  local v6 = failedReason:getValue(args .. ".powerTakeOffs#localIndices", nil, true)
  if v6 ~= nil then
    v4.localPowerTakeOffs = {}
    -- TODO: structure LOP_FORNPREP (pc 53, target 63)
    table.insert(v4.localPowerTakeOffs, v6[1])
    -- TODO: structure LOP_FORNLOOP (pc 62, target 54)
  end
  return true
end
function PowerTakeOffs:updateExtraDependentParts(superFunc, part, dt)
  superFunc(self, part, dt)
  if part.powerTakeOffs ~= nil then
    for v8, v9 in ipairs(part.powerTakeOffs) do
      if v4.inputPowerTakeOffs[v9] == nil then
        part.powerTakeOffs[v8] = nil
        local v14 = getName(part.node)
        Logging.xmlWarning(...)
      else
        self:updatePowerTakeOff(v4.inputPowerTakeOffs[v9], dt)
      end
    end
  end
  if part.localPowerTakeOffs ~= nil then
    for v8, v9 in ipairs(part.localPowerTakeOffs) do
      if v4.localPowerTakeOffs[v9] == nil then
        part.localPowerTakeOffs[v8] = nil
        v14 = getName(part.node)
        Logging.xmlWarning(...)
      else
        self:placeLocalPowerTakeOff(v4.localPowerTakeOffs[v9], dt)
      end
    end
  end
end
