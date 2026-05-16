-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIImplement = {}
function AIImplement.prerequisitesPresent(v0)
  return true
end
function AIImplement.initSpecialization()
  local v3 = v3:getText("configuration_design")
  v0:addConfigurationType("ai", v3, "ai", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("AIImplement")
  AIImplement.registerAIImplementXMLPaths(Vehicle.xmlSchema, "vehicle.ai")
  AIImplement.registerAIImplementXMLPaths(Vehicle.xmlSchema, "vehicle.ai.aiConfigurations.aiConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.ai.aiConfigurations.aiConfiguration(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function AIImplement:registerAIImplementXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. ".minTurningRadius#value", "Min turning radius")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".areaMarkers#leftNode", "AI area left node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".areaMarkers#rightNode", "AI area right node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".areaMarkers#backNode", "AI area back node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".sizeMarkers#leftNode", "Size area left node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".sizeMarkers#rightNode", "Size area right node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".sizeMarkers#backNode", "Size area back node")
  AIImplement.registerAICollisionTriggerXMLPaths(self, v1)
  self:register(XMLValueType.BOOL, v1 .. ".needsLowering#value", "AI needs to lower this tool", true)
  self:register(XMLValueType.BOOL, v1 .. ".needsLowering#lowerIfAnyIsLowered", "Lower tool of any attached ai tool is lowered", false)
  self:register(XMLValueType.BOOL, v1 .. ".needsRootAlignment#value", "Tool needs to point in the same direction as the root while working", true)
  self:register(XMLValueType.BOOL, v1 .. ".allowTurnBackward#value", "Worker is allowed the turn backward with this tool", true)
  self:register(XMLValueType.BOOL, v1 .. ".blockTurnBackward#value", "Can be used for non ai tools to block ai from driving backward", false)
  self:register(XMLValueType.BOOL, v1 .. ".isVineyardTool#value", "Field work AI for this tool can only be used in vine yards", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".toolReverserDirectionNode#node", "Reverser direction node, target node if driving backward")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".turningRadiusLimitation#rotationJointNode", "Turn radius limitation joint node")
  self:register(XMLValueType.VECTOR_N, v1 .. ".turningRadiusLimitation#wheelIndices", "Turn radius limitation wheel indices")
  self:register(XMLValueType.FLOAT, v1 .. ".turningRadiusLimitation#radius", "Turn radius limitation radius")
  self:register(XMLValueType.FLOAT, v1 .. ".turningRadiusLimitation#rotLimitFactor", "Changes the rot limit of attacher joint or component joint for turning radius calculation", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".lookAheadSize#value", "Look a head size to check ground in front of tool", 2)
  self:register(XMLValueType.BOOL, v1 .. ".useAttributesOfAttachedImplement#value", "Use AI attributes (area & fruit/ground requirements) of first attached implement", false)
  self:register(XMLValueType.BOOL, v1 .. ".hasNoFullCoverageArea#value", "Tool as a no full coverage area (e.g. plows)", false)
  self:register(XMLValueType.FLOAT, v1 .. ".hasNoFullCoverageArea#offset", "Non full coverage area offset", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".overlap#value", "Defines the ai line to line overlap", AIVehicleUtil.AREA_OVERLAP)
end
function AIImplement:registerAICollisionTriggerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".collisionTrigger#node", "Collision trigger node")
  self:register(XMLValueType.FLOAT, v1 .. ".collisionTrigger#width", "Width of ai collision trigger", 4)
  self:register(XMLValueType.FLOAT, v1 .. ".collisionTrigger#height", "Width of ai collision trigger", 3)
  self:register(XMLValueType.FLOAT, v1 .. ".collisionTrigger#length", "Max. length of ai collision trigger", 5)
end
function AIImplement.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementStart")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementActive")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementEnd")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementStartLine")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementEndLine")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementStartTurn")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementTurnProgress")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementEndTurn")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementBlock")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementContinue")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementPrepare")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementJobVehicleBlock")
  SpecializationUtil.registerEvent(vehicleType, "onAIImplementJobVehicleContinue")
end
function AIImplement.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadAICollisionTriggerFromXML", AIImplement.loadAICollisionTriggerFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getCanAIImplementContinueWork", AIImplement.getCanAIImplementContinueWork)
  SpecializationUtil.registerFunction(vehicleType, "getCanImplementBeUsedForAI", AIImplement.getCanImplementBeUsedForAI)
  SpecializationUtil.registerFunction(vehicleType, "getAIMinTurningRadius", AIImplement.getAIMinTurningRadius)
  SpecializationUtil.registerFunction(vehicleType, "getAIMarkers", AIImplement.getAIMarkers)
  SpecializationUtil.registerFunction(vehicleType, "setAIMarkersInverted", AIImplement.setAIMarkersInverted)
  SpecializationUtil.registerFunction(vehicleType, "getAIInvertMarkersOnTurn", AIImplement.getAIInvertMarkersOnTurn)
  SpecializationUtil.registerFunction(vehicleType, "getAISizeMarkers", AIImplement.getAISizeMarkers)
  SpecializationUtil.registerFunction(vehicleType, "getAILookAheadSize", AIImplement.getAILookAheadSize)
  SpecializationUtil.registerFunction(vehicleType, "getAIHasNoFullCoverageArea", AIImplement.getAIHasNoFullCoverageArea)
  SpecializationUtil.registerFunction(vehicleType, "getAIAreaOverlap", AIImplement.getAIAreaOverlap)
  SpecializationUtil.registerFunction(vehicleType, "getAIImplementCollisionTrigger", AIImplement.getAIImplementCollisionTrigger)
  SpecializationUtil.registerFunction(vehicleType, "getAIImplementCollisionTriggers", AIImplement.getAIImplementCollisionTriggers)
  SpecializationUtil.registerFunction(vehicleType, "getAINeedsLowering", AIImplement.getAINeedsLowering)
  SpecializationUtil.registerFunction(vehicleType, "getAILowerIfAnyIsLowered", AIImplement.getAILowerIfAnyIsLowered)
  SpecializationUtil.registerFunction(vehicleType, "getAINeedsRootAlignment", AIImplement.getAINeedsRootAlignment)
  SpecializationUtil.registerFunction(vehicleType, "getAIAllowTurnBackward", AIImplement.getAIAllowTurnBackward)
  SpecializationUtil.registerFunction(vehicleType, "getAIBlockTurnBackward", AIImplement.getAIBlockTurnBackward)
  SpecializationUtil.registerFunction(vehicleType, "getAIIsVineyardTool", AIImplement.getAIIsVineyardTool)
  SpecializationUtil.registerFunction(vehicleType, "getAIToolReverserDirectionNode", AIImplement.getAIToolReverserDirectionNode)
  SpecializationUtil.registerFunction(vehicleType, "getAITurnRadiusLimitation", AIImplement.getAITurnRadiusLimitation)
  SpecializationUtil.registerFunction(vehicleType, "setAIFruitProhibitions", AIImplement.setAIFruitProhibitions)
  SpecializationUtil.registerFunction(vehicleType, "addAIFruitProhibitions", AIImplement.addAIFruitProhibitions)
  SpecializationUtil.registerFunction(vehicleType, "clearAIFruitProhibitions", AIImplement.clearAIFruitProhibitions)
  SpecializationUtil.registerFunction(vehicleType, "getAIFruitProhibitions", AIImplement.getAIFruitProhibitions)
  SpecializationUtil.registerFunction(vehicleType, "setAIFruitRequirements", AIImplement.setAIFruitRequirements)
  SpecializationUtil.registerFunction(vehicleType, "addAIFruitRequirement", AIImplement.addAIFruitRequirement)
  SpecializationUtil.registerFunction(vehicleType, "clearAIFruitRequirements", AIImplement.clearAIFruitRequirements)
  SpecializationUtil.registerFunction(vehicleType, "getAIFruitRequirements", AIImplement.getAIFruitRequirements)
  SpecializationUtil.registerFunction(vehicleType, "setAIDensityHeightTypeRequirements", AIImplement.setAIDensityHeightTypeRequirements)
  SpecializationUtil.registerFunction(vehicleType, "addAIDensityHeightTypeRequirement", AIImplement.addAIDensityHeightTypeRequirement)
  SpecializationUtil.registerFunction(vehicleType, "clearAIDensityHeightTypeRequirements", AIImplement.clearAIDensityHeightTypeRequirements)
  SpecializationUtil.registerFunction(vehicleType, "getAIDensityHeightTypeRequirements", AIImplement.getAIDensityHeightTypeRequirements)
  SpecializationUtil.registerFunction(vehicleType, "getAIImplementUseVineSegment", AIImplement.getAIImplementUseVineSegment)
  SpecializationUtil.registerFunction(vehicleType, "addAITerrainDetailRequiredRange", AIImplement.addAITerrainDetailRequiredRange)
  SpecializationUtil.registerFunction(vehicleType, "addAIGroundTypeRequirements", AIImplement.addAIGroundTypeRequirements)
  SpecializationUtil.registerFunction(vehicleType, "clearAITerrainDetailRequiredRange", AIImplement.clearAITerrainDetailRequiredRange)
  SpecializationUtil.registerFunction(vehicleType, "getAITerrainDetailRequiredRange", AIImplement.getAITerrainDetailRequiredRange)
  SpecializationUtil.registerFunction(vehicleType, "addAITerrainDetailProhibitedRange", AIImplement.addAITerrainDetailProhibitedRange)
  SpecializationUtil.registerFunction(vehicleType, "clearAITerrainDetailProhibitedRange", AIImplement.clearAITerrainDetailProhibitedRange)
  SpecializationUtil.registerFunction(vehicleType, "getAITerrainDetailProhibitedRange", AIImplement.getAITerrainDetailProhibitedRange)
  SpecializationUtil.registerFunction(vehicleType, "getFieldCropsQuery", AIImplement.getFieldCropsQuery)
  SpecializationUtil.registerFunction(vehicleType, "updateFieldCropsQuery", AIImplement.updateFieldCropsQuery)
  SpecializationUtil.registerFunction(vehicleType, "createFieldCropsQuery", AIImplement.createFieldCropsQuery)
  SpecializationUtil.registerFunction(vehicleType, "getIsAIImplementInLine", AIImplement.getIsAIImplementInLine)
  SpecializationUtil.registerFunction(vehicleType, "aiImplementStartLine", AIImplement.aiImplementStartLine)
  SpecializationUtil.registerFunction(vehicleType, "aiImplementEndLine", AIImplement.aiImplementEndLine)
end
function AIImplement.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addVehicleToAIImplementList", AIImplement.addVehicleToAIImplementList)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addNodeObjectMapping", AIImplement.addNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeNodeObjectMapping", AIImplement.removeNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowTireTracks", AIImplement.getAllowTireTracks)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoConsumePtoPower", AIImplement.getDoConsumePtoPower)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "checkMovingPartDirtyUpdateNode", AIImplement.checkMovingPartDirtyUpdateNode)
end
function AIImplement.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AIImplement)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", AIImplement)
end
function AIImplement:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".areaMarkers#leftIndex", "vehicle.ai" .. ".areaMarkers#leftNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".areaMarkers#rightIndex", "vehicle.ai" .. ".areaMarkers#rightNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".areaMarkers#backIndex", "vehicle.ai" .. ".areaMarkers#backNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".sizeMarkers#leftIndex", "vehicle.ai" .. ".sizeMarkers#leftNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".sizeMarkers#rightIndex", "vehicle.ai" .. ".sizeMarkers#rightNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".sizeMarkers#backIndex", "vehicle.ai" .. ".sizeMarkers#backNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".trafficCollisionTrigger#index", "vehicle.ai" .. ".collisionTrigger#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".trafficCollisionTrigger#node", "vehicle.ai" .. ".collisionTrigger#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".collisionTrigger#index", "vehicle.ai" .. ".collisionTrigger#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.aiLookAheadSize#value", "vehicle.ai" .. ".lookAheadSize#value")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".toolReverserDirectionNode#index", "vehicle.ai" .. ".toolReverserDirectionNode#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".turningRadiusLimiation", "vehicle.ai" .. ".turningRadiusLimitation")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".forceTurnNoBackward#value", "vehicle.ai" .. ".allowTurnBackward#value (inverted)")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ai" .. ".needsLowering#lowerIfAnyIsLowerd", "vehicle.ai" .. ".allowTurnBackward#lowerIfAnyIsLowered")
  local aiConfigurationId = Utils.getNoNil(self.configurations.ai, 1)
  local configKey = string.format("vehicle.ai.aiConfigurations.aiConfiguration(%d)", aiConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.ai.aiConfigurations.aiConfiguration", aiConfigurationId, self.components, self)
  local v6 = v6:hasProperty(configKey)
  if v6 then
  end
  v6 = v6:getValue(v3 .. ".minTurningRadius#value")
  v2.minTurningRadius = v6
  v6 = v6:getValue(v3 .. ".areaMarkers#leftNode", nil, self.components, self.i3dMappings)
  v2.leftMarker = v6
  v6 = v6:getValue(v3 .. ".areaMarkers#rightNode", nil, self.components, self.i3dMappings)
  v2.rightMarker = v6
  v6 = v6:getValue(v3 .. ".areaMarkers#backNode", nil, self.components, self.i3dMappings)
  v2.backMarker = v6
  v2.aiMarkersInverted = false
  v6 = v6:getValue(v3 .. ".sizeMarkers#leftNode", nil, self.components, self.i3dMappings)
  v2.sizeLeftMarker = v6
  v6 = v6:getValue(v3 .. ".sizeMarkers#rightNode", nil, self.components, self.i3dMappings)
  v2.sizeRightMarker = v6
  v6 = v6:getValue(v3 .. ".sizeMarkers#backNode", nil, self.components, self.i3dMappings)
  v2.sizeBackMarker = v6
  v6 = self:loadAICollisionTriggerFromXML(self.xmlFile, v3)
  v2.collisionTrigger = v6
  v6 = v6:getValue(v3 .. ".needsLowering#value", true)
  v2.needsLowering = v6
  v6 = v6:getValue(v3 .. ".needsLowering#lowerIfAnyIsLowered", false)
  v2.lowerIfAnyIsLowered = v6
  v6 = v6:getValue(v3 .. ".needsRootAlignment#value", true)
  v2.needsRootAlignment = v6
  v6 = v6:getValue(v3 .. ".allowTurnBackward#value", true)
  v2.allowTurnBackward = v6
  v6 = v6:getValue(v3 .. ".blockTurnBackward#value", false)
  v2.blockTurnBackward = v6
  v6 = v6:getValue(v3 .. ".isVineyardTool#value", false)
  v2.isVineyardTool = v6
  v6 = v6:getValue(v3 .. ".toolReverserDirectionNode#node", nil, self.components, self.i3dMappings)
  v2.toolReverserDirectionNode = v6
  v2.turningRadiusLimitation = {}
  local v7 = v7:getValue(v3 .. ".turningRadiusLimitation#rotationJointNode", nil, self.components, self.i3dMappings)
  v2.turningRadiusLimitation.rotationJoint = v7
  if v2.turningRadiusLimitation.rotationJoint ~= nil then
    v7 = v7:getValue(v3 .. ".turningRadiusLimitation#wheelIndices", nil, true)
    v2.turningRadiusLimitation.wheelIndices = v7
  end
  v7 = v7:getValue(v3 .. ".turningRadiusLimitation#radius")
  v2.turningRadiusLimitation.radius = v7
  v7 = v7:getValue(v3 .. ".turningRadiusLimitation#rotLimitFactor", 1)
  v2.turningRadiusLimitation.rotLimitFactor = v7
  v6 = v6:getValue(v3 .. ".lookAheadSize#value", 2)
  v2.lookAheadSize = v6
  v6 = v6:getValue(v3 .. ".useAttributesOfAttachedImplement#value", false)
  v2.useAttributesOfAttachedImplement = v6
  v6 = v6:getValue(v3 .. ".hasNoFullCoverageArea#value", false)
  v2.hasNoFullCoverageArea = v6
  v6 = v6:getValue(v3 .. ".hasNoFullCoverageArea#offset", 0)
  v2.hasNoFullCoverageAreaOffset = v6
  v6 = v6:getValue(v3 .. ".overlap#value")
  v2.overlap = v6
  v2.terrainDetailRequiredValueRanges = {}
  v2.terrainDetailProhibitedValueRanges = {}
  v2.requiredFruitTypes = {}
  v2.prohibitedFruitTypes = {}
  v2.requiredDensityHeightTypes = {}
  v2.fieldGroundSystem = g_currentMission.fieldGroundSystem
  local v7, v8, v9 = v7:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  v2.groundTypeFirstChannel = v8
  v2.groundTypeNumChannels = v9
  v2.fieldCropyQuery = nil
  v2.fieldCropyQueryValid = false
  v2.isLineStarted = false
end
function AIImplement:onPostLoad(savegame)
  if self.getWheels ~= nil and self.spec_aiImplement.turningRadiusLimitation.wheelIndices ~= nil then
    self.spec_aiImplement.turningRadiusLimitation.wheels = {}
    local v3 = self:getWheels()
    for v7, v8 in ipairs(self.spec_aiImplement.turningRadiusLimitation.wheelIndices) do
      if v3[v8] ~= nil then
        table.insert(v2.turningRadiusLimitation.wheels, v3[v8])
      else
        Logging.xmlWarning(self.xmlFile, "Unknown wheel index '%s' defined in '%s'", v8, "vehicle.ai.turningRadiusLimitation#wheelIndices")
      end
    end
  end
end
function AIImplement:loadAICollisionTriggerFromXML(xmlFile, key)
  local v4 = xmlFile:getValue(key .. ".collisionTrigger#node", nil, self.components, self.i3dMappings)
  if {node = v4}.node ~= nil then
    v4 = getHasClassId({node = v4}.node, ClassIds.SHAPE)
    if v4 then
      Logging.xmlWarning(xmlFile, "Obsolete ai collision trigger ground. Please replace with empty transform group and add size attributes. '%s'", key .. ".collisionTrigger#node")
    end
    v4 = xmlFile:getValue(key .. ".collisionTrigger#width", 4)
    v3.width = v4
    v4 = xmlFile:getValue(key .. ".collisionTrigger#height", 3)
    v3.height = v4
    v4 = xmlFile:getValue(key .. ".collisionTrigger#length", 5)
    v3.length = v4
    return v3
  end
  return nil
  return v3
end
function AIImplement.getCanAIImplementContinueWork(v0)
  return true, false, nil
end
function AIImplement:getCanImplementBeUsedForAI()
  local v1, v2, v3, v4 = self:getAIMarkers()
  if v1 ~= nil and v2 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L11
  end
  return false
  return true
end
function AIImplement:addVehicleToAIImplementList(superFunc, list)
  local v3 = self:getCanImplementBeUsedForAI()
  if v3 then
    table.insert(list, {object = self})
  end
  superFunc(self, list)
end
function AIImplement:addNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_aiImplement.collisionTrigger ~= nil then
    list[self.spec_aiImplement.collisionTrigger] = self
  end
end
function AIImplement:removeNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_aiImplement.collisionTrigger ~= nil then
    list[self.spec_aiImplement.collisionTrigger] = nil
  end
end
function AIImplement:getAllowTireTracks(superFunc)
  local v2 = superFunc(self)
  if v2 then
    local v3 = self:getIsAIActive()
  end
  return v2
end
function AIImplement:getDoConsumePtoPower(superFunc)
  if self.rootVehicle.getAIFieldWorkerIsTurning ~= nil then
    local v3 = self.rootVehicle:getAIFieldWorkerIsTurning()
    if v3 then
      return false
    end
  end
  v3 = superFunc(self)
  return v3
end
function AIImplement:checkMovingPartDirtyUpdateNode(superFunc, node, movingPart)
  superFunc(self, node, movingPart)
  if node ~= self.spec_aiImplement.leftMarker and node ~= self.spec_aiImplement.rightMarker then
    -- if v2 ~= v0.spec_aiImplement.backMarker then goto L34 end
  end
  local v8 = getName(node)
  local v9 = getName(movingPart.node)
  Logging.xmlError(...)
  if node ~= v4.sizeLeftMarker and node ~= v4.sizeRightMarker then
    -- if v2 ~= v4.sizeBackMarker then goto L61 end
  end
  v8 = getName(node)
  v9 = getName(movingPart.node)
  Logging.xmlError(...)
  if v4.collisionTrigger ~= nil and node == v4.collisionTrigger.node then
    v8 = getName(node)
    v9 = getName(movingPart.node)
    Logging.xmlError(...)
  end
end
function AIImplement:getAIMinTurningRadius()
  return self.spec_aiImplement.minTurningRadius
end
function AIImplement:getAIMarkers()
  if self.spec_aiImplement.useAttributesOfAttachedImplement and self.getAttachedImplements ~= nil then
    local v3 = self:getAttachedImplements()
    for v5, v6 in ipairs(...) do
      if not (v6.object.getAIMarkers ~= nil) then
        continue
      end
      return v7:getAIMarkers()
    end
  end
  if v1.aiMarkersInverted then
    return v1.rightMarker, v1.leftMarker, v1.backMarker, true
  end
  return v1.leftMarker, v1.rightMarker, v1.backMarker, false
end
function AIImplement:setAIMarkersInverted(state)
  self.spec_aiImplement.aiMarkersInverted = not self.spec_aiImplement.aiMarkersInverted
end
function AIImplement.getAIInvertMarkersOnTurn(v0, v1)
  return false
end
function AIImplement:getAISizeMarkers()
  return self.spec_aiImplement.sizeLeftMarker, self.spec_aiImplement.sizeRightMarker, self.spec_aiImplement.sizeBackMarker
end
function AIImplement:getAILookAheadSize()
  return self.spec_aiImplement.lookAheadSize
end
function AIImplement:getAIHasNoFullCoverageArea()
  return self.spec_aiImplement.hasNoFullCoverageArea, self.spec_aiImplement.hasNoFullCoverageAreaOffset
end
function AIImplement:getAIAreaOverlap()
  return self.spec_aiImplement.overlap
end
function AIImplement:getAIImplementCollisionTrigger()
  return self.spec_aiImplement.collisionTrigger
end
function AIImplement:getAIImplementCollisionTriggers(collisionTriggers)
  local collisionTrigger = self:getAIImplementCollisionTrigger()
  if collisionTrigger ~= nil then
    collisionTriggers[self] = collisionTrigger
  end
end
function AIImplement:getAINeedsLowering()
  return self.spec_aiImplement.needsLowering
end
function AIImplement:getAILowerIfAnyIsLowered()
  return self.spec_aiImplement.lowerIfAnyIsLowered
end
function AIImplement:getAINeedsRootAlignment()
  return self.spec_aiImplement.needsRootAlignment
end
function AIImplement:getAIAllowTurnBackward()
  return self.spec_aiImplement.allowTurnBackward
end
function AIImplement:getAIBlockTurnBackward()
  return self.spec_aiImplement.blockTurnBackward
end
function AIImplement:getAIIsVineyardTool()
  return self.spec_aiImplement.isVineyardTool
end
function AIImplement:getAIToolReverserDirectionNode()
  return self.spec_aiImplement.toolReverserDirectionNode
end
function AIImplement:getAITurnRadiusLimitation()
  return self.spec_aiImplement.turningRadiusLimitation.radius, self.spec_aiImplement.turningRadiusLimitation.rotationJoint, self.spec_aiImplement.turningRadiusLimitation.wheels, self.spec_aiImplement.turningRadiusLimitation.rotLimitFactor
end
function AIImplement:setAIFruitRequirements(fruitType, minGrowthState, maxGrowthState)
  self:clearAIFruitRequirements()
  self:addAIFruitRequirement(fruitType, minGrowthState, maxGrowthState)
end
function AIImplement:addAIFruitRequirement(fruitType, minGrowthState, maxGrowthState, customMapId, customMapStartChannel, customMapNumChannels)
  table.insert(self.spec_aiImplement.requiredFruitTypes, {fruitType = fruitType or 0, minGrowthState = minGrowthState or 0, maxGrowthState = maxGrowthState or 0, customMapId = customMapId, customMapStartChannel = customMapStartChannel, customMapNumChannels = customMapNumChannels})
  self:updateFieldCropsQuery()
end
function AIImplement:clearAIFruitRequirements()
  if 0 < #self.spec_aiImplement.requiredFruitTypes then
    self.spec_aiImplement.requiredFruitTypes = {}
  end
  self:updateFieldCropsQuery()
end
function AIImplement:getAIFruitRequirements()
  return self.spec_aiImplement.requiredFruitTypes
end
function AIImplement:setAIDensityHeightTypeRequirements(fillType)
  self:clearAIDensityHeightTypeRequirements()
  self:addAIDensityHeightTypeRequirement(fillType)
end
function AIImplement:addAIDensityHeightTypeRequirement(fillType)
  table.insert(self.spec_aiImplement.requiredDensityHeightTypes, {fillType = fillType or 0})
  self:updateFieldCropsQuery()
end
function AIImplement:clearAIDensityHeightTypeRequirements()
  if 0 < #self.spec_aiImplement.requiredDensityHeightTypes then
    self.spec_aiImplement.requiredDensityHeightTypes = {}
  end
  self:updateFieldCropsQuery()
end
function AIImplement:getAIDensityHeightTypeRequirements()
  return self.spec_aiImplement.requiredDensityHeightTypes
end
function AIImplement.getAIImplementUseVineSegment(v0, v1, v2, v3)
  return true
end
function AIImplement:setAIFruitProhibitions(fruitType, minGrowthState, maxGrowthState)
  self:clearAIFruitProhibitions()
  self:addAIFruitProhibitions(fruitType, minGrowthState, maxGrowthState)
end
function AIImplement:addAIFruitProhibitions(fruitType, minGrowthState, maxGrowthState, customMapId, customMapStartChannel, customMapNumChannels)
  table.insert(self.spec_aiImplement.prohibitedFruitTypes, {fruitType = fruitType or 0, minGrowthState = minGrowthState or 0, maxGrowthState = maxGrowthState or 0, customMapId = customMapId, customMapStartChannel = customMapStartChannel, customMapNumChannels = customMapNumChannels})
  self:updateFieldCropsQuery()
end
function AIImplement:clearAIFruitProhibitions()
  if 0 < #self.spec_aiImplement.prohibitedFruitTypes then
    self.spec_aiImplement.prohibitedFruitTypes = {}
  end
  self:updateFieldCropsQuery()
end
function AIImplement:getAIFruitProhibitions()
  return self.spec_aiImplement.prohibitedFruitTypes
end
function AIImplement:addAITerrainDetailRequiredRange(detailType1, detailType2, minState, maxState)
  if not minState then
  end
  if not maxState then
  end
  table.insert(v7, {v9, v10, v11, v12})
  self:updateFieldCropsQuery()
end
function AIImplement:addAIGroundTypeRequirements(groundTypes, excludedType1, excludedType2, excludedType3, excludedType4, excludedType5, excludedType6)
  -- TODO: structure LOP_FORNPREP (pc 5, target 43)
  if groundTypes[1] ~= excludedType1 and groundTypes[1] ~= excludedType2 and groundTypes[1] ~= excludedType3 and groundTypes[1] ~= excludedType4 and groundTypes[1] ~= excludedType5 and groundTypes[1] ~= excludedType6 then
    local v13 = v13:getFieldGroundValue(groundTypes[1])
    table.insert(self.spec_aiImplement.terrainDetailRequiredValueRanges, {v13, v13, self.spec_aiImplement.groundTypeFirstChannel, self.spec_aiImplement.groundTypeNumChannels})
  end
  -- TODO: structure LOP_FORNLOOP (pc 42, target 6)
  self:updateFieldCropsQuery()
end
function AIImplement:clearAITerrainDetailRequiredRange()
  self.spec_aiImplement.terrainDetailRequiredValueRanges = {}
  self:updateFieldCropsQuery()
end
function AIImplement:getAITerrainDetailRequiredRange()
  if self.spec_aiImplement.useAttributesOfAttachedImplement and self.getAttachedImplements ~= nil then
    local v3 = self:getAttachedImplements()
    for v5, v6 in ipairs(...) do
      if not (v6.object.getAITerrainDetailRequiredRange ~= nil) then
        continue
      end
      return v7:getAITerrainDetailRequiredRange()
    end
  end
  return v1.terrainDetailRequiredValueRanges
end
function AIImplement:addAITerrainDetailProhibitedRange(detailType1, detailType2, minState, maxState)
  table.insert(self.spec_aiImplement.terrainDetailProhibitedValueRanges, {detailType1, detailType2, minState, maxState})
  self:updateFieldCropsQuery()
end
function AIImplement:clearAITerrainDetailProhibitedRange()
  self.spec_aiImplement.terrainDetailProhibitedValueRanges = {}
  self:updateFieldCropsQuery()
end
function AIImplement:getAITerrainDetailProhibitedRange()
  if self.spec_aiImplement.useAttributesOfAttachedImplement and self.getAttachedImplements ~= nil then
    local v3 = self:getAttachedImplements()
    for v5, v6 in ipairs(...) do
      if not (v6.object.getAITerrainDetailProhibitedRange ~= nil) then
        continue
      end
      return v7:getAITerrainDetailProhibitedRange()
    end
  end
  return v1.terrainDetailProhibitedValueRanges
end
function AIImplement:getFieldCropsQuery()
  if self.spec_aiImplement.fieldCropyQuery == nil then
    self:createFieldCropsQuery()
  end
  return v1.fieldCropyQuery, v1.fieldCropyQueryValid
end
function AIImplement:updateFieldCropsQuery()
  if self.spec_aiImplement.fieldCropyQuery ~= nil then
    self:createFieldCropsQuery()
  end
end
function AIImplement:createFieldCropsQuery()
  local v2, v3, v4 = v2:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  if v2 ~= nil then
    self.spec_aiImplement.fieldCropyQueryValid = false
    local v6 = FieldCropsQuery.new(v2)
    local fruitRequirements = self:getAIFruitRequirements()
    -- TODO: structure LOP_FORNPREP (pc 26, target 84)
    if fruitRequirements[1].customMapId == nil then
      -- if v7[1].fruitType == FruitType.UNKNOWN then goto L61 end
      local v12 = v12:getFruitTypeByIndex(fruitRequirements[1].fruitType)
      v6:addRequiredCropType(v12.terrainDataPlaneId, fruitRequirements[1].minGrowthState, fruitRequirements[1].maxGrowthState, v12.startStateChannel, v12.numStateChannels, v3, v4)
    elseif fruitRequirements[1].customMapId ~= nil then
      v6:addRequiredCropType(fruitRequirements[1].customMapId, fruitRequirements[1].minGrowthState, fruitRequirements[1].maxGrowthState, fruitRequirements[1].customMapStartChannel, fruitRequirements[1].customMapNumChannels, v3, v4)
    end
    v5.fieldCropyQueryValid = true
    -- TODO: structure LOP_FORNLOOP (pc 83, target 27)
    local fruitProhibitions = self:getAIFruitProhibitions()
    -- TODO: structure LOP_FORNPREP (pc 90, target 148)
    if fruitProhibitions[1].customMapId == nil then
      -- if v8[1].fruitType == FruitType.UNKNOWN then goto L125 end
      local v13 = v13:getFruitTypeByIndex(fruitProhibitions[1].fruitType)
      v6:addProhibitedCropType(v13.terrainDataPlaneId, fruitProhibitions[1].minGrowthState, fruitProhibitions[1].maxGrowthState, v13.startStateChannel, v13.numStateChannels, v3, v4)
    elseif fruitProhibitions[1].customMapId ~= nil then
      v6:addProhibitedCropType(fruitProhibitions[1].customMapId, fruitProhibitions[1].minGrowthState, fruitProhibitions[1].maxGrowthState, fruitProhibitions[1].customMapStartChannel, fruitProhibitions[1].customMapNumChannels, v3, v4)
    end
    v5.fieldCropyQueryValid = true
    -- TODO: structure LOP_FORNLOOP (pc 147, target 91)
    local terrainDetailRequiredValueRanges = self:getAITerrainDetailRequiredRange()
    -- TODO: structure LOP_FORNPREP (pc 154, target 167)
    v6:addRequiredGroundValue(terrainDetailRequiredValueRanges[1][1], terrainDetailRequiredValueRanges[1][2], terrainDetailRequiredValueRanges[1][3], terrainDetailRequiredValueRanges[1][4])
    v5.fieldCropyQueryValid = true
    -- TODO: structure LOP_FORNLOOP (pc 166, target 155)
    local terrainDetailProhibitValueRanges = self:getAITerrainDetailProhibitedRange()
    -- TODO: structure LOP_FORNPREP (pc 173, target 186)
    v6:addProhibitedGroundValue(terrainDetailProhibitValueRanges[1][1], terrainDetailProhibitValueRanges[1][2], terrainDetailProhibitValueRanges[1][3], terrainDetailProhibitValueRanges[1][4])
    v5.fieldCropyQueryValid = true
    -- TODO: structure LOP_FORNLOOP (pc 185, target 174)
    v5.fieldCropyQuery = v6
  end
end
function AIImplement:getIsAIImplementInLine()
  return self.spec_aiImplement.isLineStarted
end
function AIImplement:aiImplementStartLine()
  self.spec_aiImplement.isLineStarted = true
  SpecializationUtil.raiseEvent(self, "onAIImplementStartLine")
  if self.rootVehicle.actionController ~= nil then
    v2:onAIEvent(self, "onAIImplementStartLine")
  end
end
function AIImplement:aiImplementEndLine()
  self.spec_aiImplement.isLineStarted = false
  SpecializationUtil.raiseEvent(self, "onAIImplementEndLine")
  if self.rootVehicle.actionController ~= nil then
    v2:onAIEvent(self, "onAIImplementEndLine")
  end
end
