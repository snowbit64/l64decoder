-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Cutter = {AUTO_TILT_COLLISION_MASK = 4287627263, CUTTER_TILT_XML_KEY = "vehicle.cutter.automaticTilt"}
function Cutter.initSpecialization()
  v0:addWorkAreaType("cutter", false)
  Vehicle.xmlSchema:setXMLSpecializationType("Cutter")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.cutter#fruitTypes", "List with supported fruit types")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.cutter#fruitTypeCategories", "List with supported fruit types categories")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.cutter#fruitTypeConverter", "Name of fruit type converter")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cutter#useWindrowed", "Uses windrow types")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.cutter.animationNodes")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cutter.fruitExtraObjects.fruitExtraObject(?)#node", "Name of fruit type converter")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.cutter.fruitExtraObjects.fruitExtraObject(?)#anim", "Change animation name")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cutter.fruitExtraObjects.fruitExtraObject(?)#isDefault", "Is default active")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.cutter.fruitExtraObjects.fruitExtraObject(?)#fruitType", "Name of fruit type")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cutter.fruitExtraObjects#hideOnDetach", "Hide extra objects on detach", false)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.cutter.effect")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.cutter.fillEffect")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cutter.CUTTER_TILT_XML_KEY .. ".automaticTiltNode(?)#node", "Automatic tilt node")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cutter.CUTTER_TILT_XML_KEY .. ".automaticTiltNode(?)#minAngle", "Min. angle", -5)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cutter.CUTTER_TILT_XML_KEY .. ".automaticTiltNode(?)#maxAngle", "Max. angle", 5)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cutter.CUTTER_TILT_XML_KEY .. ".automaticTiltNode(?)#maxSpeed", "Max. angle change per second", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cutter.CUTTER_TILT_XML_KEY .. "#raycastNode1", "Raycast node 1")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cutter.CUTTER_TILT_XML_KEY .. "#raycastNode2", "Raycast node 2")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cutter#allowsForageGrowthState", "Allows forage growth state", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cutter#allowCuttingWhileRaised", "Allow cutting while raised", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.cutter#movingDirection", "Moving direction", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cutter#strawRatio", "Straw ratio", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cutter.spikedDrums.spikedDrum(?)#node", "Spiked drum node (Needs to rotate on X axis)")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cutter.spikedDrums.spikedDrum(?)#spline", "Reference spline")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cutter.spikedDrums.spikedDrum(?).spike(?)#node", "Spike that is translated on Y axis depending on spline")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.cutter.sounds", "cut")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_KEY .. ".chopperArea#index", "Chopper area index")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".chopperArea#index", "Chopper area index")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#moveOnlyIfCut", "Move only if cutters cuts something", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#rotateIfTurnedOn", "Rotate only if turned on", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Cutter.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(WorkArea, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(TestAreas, specializations)
  end
  return v1
end
function Cutter.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "readCutterFromStream", Cutter.readCutterFromStream)
  SpecializationUtil.registerFunction(vehicleType, "writeCutterToStream", Cutter.writeCutterToStream)
  SpecializationUtil.registerFunction(vehicleType, "getCombine", Cutter.getCombine)
  SpecializationUtil.registerFunction(vehicleType, "getAllowCutterAIFruitRequirements", Cutter.getAllowCutterAIFruitRequirements)
  SpecializationUtil.registerFunction(vehicleType, "processCutterArea", Cutter.processCutterArea)
  SpecializationUtil.registerFunction(vehicleType, "processPickupCutterArea", Cutter.processPickupCutterArea)
  SpecializationUtil.registerFunction(vehicleType, "getCutterLoad", Cutter.getCutterLoad)
  SpecializationUtil.registerFunction(vehicleType, "getCutterStoneMultiplier", Cutter.getCutterStoneMultiplier)
  SpecializationUtil.registerFunction(vehicleType, "loadCutterTiltFromXML", Cutter.loadCutterTiltFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getCutterTiltIsAvailable", Cutter.getCutterTiltIsAvailable)
  SpecializationUtil.registerFunction(vehicleType, "getCutterTiltIsActive", Cutter.getCutterTiltIsActive)
  SpecializationUtil.registerFunction(vehicleType, "getCutterTiltDelta", Cutter.getCutterTiltDelta)
  SpecializationUtil.registerFunction(vehicleType, "tiltRaycastDetectionCallback", Cutter.tiltRaycastDetectionCallback)
  SpecializationUtil.registerFunction(vehicleType, "setCutterCutHeight", Cutter.setCutterCutHeight)
end
function Cutter.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSpeedRotatingPartFromXML", Cutter.loadSpeedRotatingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSpeedRotatingPartActive", Cutter.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadRandomlyMovingPartFromXML", Cutter.loadRandomlyMovingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsRandomlyMovingPartActive", Cutter.getIsRandomlyMovingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", Cutter.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Cutter.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", Cutter.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Cutter.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Cutter.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "isAttachAllowed", Cutter.isAttachAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getConsumingLoad", Cutter.getConsumingLoad)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsGroundReferenceNodeThreshold", Cutter.getIsGroundReferenceNodeThreshold)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDefaultAllowComponentMassReduction", Cutter.getDefaultAllowComponentMassReduction)
end
function Cutter.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onPreAttach", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onPostDetach", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", Cutter)
  SpecializationUtil.registerEventListener(vehicleType, "onAIImplementStart", Cutter)
end
function Cutter:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode#type", "vehicle.cutter.animationNodes.animationNode", "cutter")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnScrollers", "vehicle.cutter.animationNodes.animationNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cutter.turnedOnScrollers", "vehicle.cutter.animationNodes.animationNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cutter.reelspikes", "vehicle.cutter.rotationNodes.rotationNode or vehicle.turnOnVehicle.turnedOnAnimation")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cutter.threshingParticleSystems.threshingParticleSystem", "vehicle.cutter.fillEffect.effectNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cutter.threshingParticleSystems.emitterShape", "vehicle.cutter.fillEffect.effectNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cutter#convertedFillTypeCategories", "vehicle.cutter#fruitTypeConverter")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cutter#startAnimationName", "vehicle.turnOnVehicle.turnOnAnimation#name")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cutter.testAreas", "vehicle.workAreas.workArea.testAreas")
  local v4 = v4:getValue("vehicle.cutter#fruitTypes")
  local v5 = v5:getValue("vehicle.cutter#fruitTypeCategories")
  if v5 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L96
    local v6 = v6:getFruitTypesByCategoryNames(v5, "Warning: Cutter has invalid fruitTypeCategory '%s' in '" .. self.configFileName .. "'")
  elseif v5 == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L113
    v6 = v6:getFruitTypesByNames(v4, "Warning: Cutter has invalid fruitType '%s' in '" .. self.configFileName .. "'")
  else
    Logging.xmlWarning(self.xmlFile, "Cutter needs either the 'fruitTypeCategories' or 'fruitTypes' attribute!")
  end
  v2.currentCutHeight = 0
  if v3 ~= nil then
    v2.fruitTypes = {}
    for v9, v10 in pairs(v3) do
      table.insert(v2.fruitTypes, v10)
      if not (#v2.fruitTypes == 1) then
        continue
      end
      local v11 = v11:getCutHeightByFruitTypeIndex(v10, v2.allowsForageGrowthState)
      self:setCutterCutHeight(v11)
    end
  end
  v2.fruitTypeConverters = {}
  v6 = v6:getValue("vehicle.cutter#fruitTypeConverter")
  if v6 ~= nil then
    v7 = v7:getConverterDataByName(v6)
    if v7 ~= nil then
      for v11, v12 in pairs(v7) do
        v2.fruitTypeConverters[v11] = v12
      end
    end
  end
  v2.fillTypes = {}
  for v10, v11 in ipairs(v2.fruitTypes) do
    if v2.fruitTypeConverters[v11] ~= nil then
      table.insert(v2.fillTypes, v2.fruitTypeConverters[v11].fillTypeIndex)
    else
      v12 = v12:getFillTypeIndexByFruitTypeIndex(v11)
      if not (v12 ~= nil) then
        continue
      end
      table.insert(v2.fillTypes, v12)
    end
  end
  if self.isClient then
    v7 = v7:loadAnimations(self.xmlFile, "vehicle.cutter.animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v7
    v2.fruitExtraObjects = {}
    while true do
      v8 = string.format("vehicle.cutter.fruitExtraObjects.fruitExtraObject(%d)", v7)
      XMLUtil.checkDeprecatedXMLElements(self.xmlFile, v8 .. "#index", v8 .. "#node")
      v9 = v9:getValue(v8 .. "#node", nil, self.components, self.i3dMappings)
      v10 = v10:getValue(v8 .. "#anim")
      v11 = v11:getValue(v8 .. "#isDefault", false)
      v14 = v14:getValue(v8 .. "#fruitType")
      v12 = v12:getFruitTypeByName(...)
      if not (v12 ~= nil) then
        break
      end
      if v9 == nil and not (v10 ~= nil) then
        break
      end
      if v9 ~= nil then
        setVisibility(v9, false)
      end
      v2.fruitExtraObjects[v12.index] = {node = v9, anim = v10}
      if v11 then
        v2.fruitExtraObjects[FruitType.UNKNOWN] = {node = v9, anim = v10}
      end
    end
    v8 = v8:getValue("vehicle.cutter.fruitExtraObjects#hideOnDetach", false)
    v2.hideExtraObjectsOnDetach = v8
    v2.spikedDrums = {}
    v8:iterate("vehicle.cutter.spikedDrums.spikedDrum", function(self, savegame)
      local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      if {node = v3}.node ~= nil then
        v3 = v3:getValue(savegame .. "#spline", nil, u0.components, u0.i3dMappings)
        if {node = v3, spline = v3}.spline ~= nil then
          setVisibility({node = v3, spline = v3}.spline, false)
          v3:iterate(savegame .. ".spike", function(self, savegame)
            local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
            if {node = v3}.node ~= nil then
              local v7 = getName({node = v3}.node)
              v3 = createTransformGroup(v7 .. "Parent")
              local v5 = getParent({node = v3}.node)
              v7 = getChildIndex({node = v3}.node)
              link(...)
              local v6 = getTranslation({node = v3}.node)
              setTranslation(...)
              v6 = getRotation({node = v3}.node)
              setRotation(...)
              link(v3, {node = v3}.node)
              setTranslation({node = v3}.node, 0, 0, 0)
              setRotation({node = v3}.node, 0, 0, 0)
              local v4, v5, v6 = localToLocal({node = v3}.node, u1.node, 0, 0, 0)
              local v8 = MathUtil.getYRotationFromDirection(v5, v6)
              if -v8 / 2 * math.pi < 0 then
              end
              v2.initalTime = v8
              table.insert(u1.spikes, v2)
            end
          end)
          -- TODO: structure LOP_FORNPREP (pc 73, target 119)
          local v7, v8, v9 = getSplinePosition({node = v3, spline = v3, spikes = {}}.spline, 0)
          local v11, v12, v13 = worldToLocal({node = v3, spline = v3, spikes = {}}.node, v7, v8, v9)
          v12 = MathUtil.getYRotationFromDirection(v12, v13)
          if -v12 / 2 * math.pi < 0 then
          end
          table.insert(v3, {alpha = v12, time = v6})
          -- TODO: structure LOP_FORNLOOP (pc 118, target 74)
          table.insert(v3, {alpha = v3[1].alpha - 0.000001, time = 1})
          table.sort(v3, function(self, savegame)
            if self.alpha >= savegame.alpha then
            end
            return true
          end)
          local v4 = AnimCurve.new(linearInterpolator1)
          v2.splineCurve = v4
          -- TODO: structure LOP_FORNPREP (pc 150, target 169)
          v7:addKeyframe({v3[1].time, time = v3[1].alpha})
          -- TODO: structure LOP_FORNLOOP (pc 168, target 151)
          -- TODO: structure LOP_FORNPREP (pc 175, target 189)
          if u1.animationNodes[1].node == v2.node then
            v2.animationNode = u1.animationNodes[1]
          end
          -- TODO: structure LOP_FORNLOOP (pc 188, target 176)
          if v2.animationNode ~= nil then
            table.insert(u1.spikedDrums, v2)
            return
          end
          v7 = getName(v2.node)
          Logging.xmlWarning(...)
          return
        end
        Logging.xmlWarning(u0.xmlFile, "No spline defined for spiked drum '%s'", savegame)
        return
      end
      Logging.xmlWarning(u0.xmlFile, "No drum node defined for spiked drum '%s'", savegame)
    end)
    v8 = v8:loadEffect(self.xmlFile, "vehicle.cutter.effect", self.components, self, self.i3dMappings)
    v2.cutterEffects = v8
    v8 = v8:loadEffect(self.xmlFile, "vehicle.cutter.fillEffect", self.components, self, self.i3dMappings)
    v2.fillEffects = v8
    v2.samples = {}
    v9 = v9:loadSampleFromXML(self.xmlFile, "vehicle.cutter.sounds", "cut", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.cut = v9
  end
  v2.lastAutomaticTiltRaycastPosition = {0, 0, 0}
  v2.automaticTilt = {isAvailable = false, hasNodes = false}
  v7 = self:loadCutterTiltFromXML(self.xmlFile, Cutter.CUTTER_TILT_XML_KEY, v2.automaticTilt)
  if v7 then
    v2.automaticTilt.currentDelta = 0
    v2.automaticTilt.lastHit = {0, 0, 0}
    v2.automaticTilt.raycastHit = true
    v2.automaticTilt.isAvailable = true
    if 0 >= #v2.automaticTilt.nodes then
    end
    v7.hasNodes = true
  end
  if not Platform.gameplay.allowAutomaticHeaderTilt and v2.automaticTilt.hasNodes then
    Logging.xmlWarning(self.xmlFile, "Automatic header tilt is not allowed on this platform!")
    v2.automaticTilt.hasNodes = false
  end
  v7 = v7:getValue("vehicle.cutter#allowsForageGrowthState", false)
  v2.allowsForageGrowthState = v7
  v7 = v7:getValue("vehicle.cutter#allowCuttingWhileRaised", false)
  v2.allowCuttingWhileRaised = v7
  v8 = v8:getValue("vehicle.cutter#movingDirection", 1)
  v7 = MathUtil.sign(...)
  v2.movingDirection = v7
  v7 = v7:getValue("vehicle.cutter#strawRatio", 1)
  v2.strawRatio = v7
  v2.useWindrow = false
  v2.currentInputFillType = FillType.UNKNOWN
  v2.currentInputFruitType = FruitType.UNKNOWN
  v2.currentInputFruitTypeAI = FruitType.UNKNOWN
  v2.lastValidInputFruitType = FruitType.UNKNOWN
  v2.currentInputFruitTypeSent = FruitType.UNKNOWN
  v2.currentOutputFillType = FillType.UNKNOWN
  v2.currentConversionFactor = 1
  v2.currentGrowthStateTime = 0
  v2.currentGrowthStateTimer = 0
  v2.currentGrowthState = 0
  v2.lastAreaBiggerZero = false
  v2.lastAreaBiggerZeroSent = false
  v2.lastAreaBiggerZeroTime = -1
  v2.workAreaParameters = {lastRealArea = 0, lastArea = 0, lastGrowthState = 0, lastGrowthStateArea = 0, fruitTypesToUse = {}, lastFruitTypeToUse = {}}
  v2.lastOutputFillTypes = {}
  v2.lastPrioritizedOutputType = FillType.UNKNOWN
  v2.lastOutputTime = 0
  v2.cutterLoad = 0
  v2.isWorking = false
  v2.stoneLastState = 0
  v7 = v7:getWearMultiplierByType("CUTTER")
  v2.stoneWearMultiplierData = v7
  v2.workAreaParameters.countArea = true
  v2.aiNoValidGroundTimer = 0
  v7 = self:getNextDirtyFlag()
  v2.dirtyFlag = v7
  v7 = self:getNextDirtyFlag()
  v2.effectDirtyFlag = v7
end
function Cutter:onPostLoad(savegame)
  if self.addCutterToCombine ~= nil then
    self:addCutterToCombine(self)
  end
  if self.isClient then
    Cutter.updateExtraObjects(self)
  end
end
function Cutter:onDelete()
  v2:deleteEffects(self.spec_cutter.cutterEffects)
  v2:deleteEffects(self.spec_cutter.fillEffects)
  v2:deleteAnimations(self.spec_cutter.animationNodes)
  v2:deleteSamples(self.spec_cutter.samples)
end
function Cutter:onReadStream(streamId, connection)
  self:readCutterFromStream(streamId, connection)
  local v4 = streamReadBool(streamId)
  self.spec_cutter.lastAreaBiggerZero = v4
  if self.spec_cutter.lastAreaBiggerZero then
    self.spec_cutter.lastAreaBiggerZeroTime = g_currentMission.time
  end
  self:setTestAreaRequirements(v3.currentInputFruitType, nil, v3.allowsForageGrowthState)
end
function Cutter:onWriteStream(streamId, connection)
  self:writeCutterToStream(streamId, connection)
  streamWriteBool(streamId, self.spec_cutter.lastAreaBiggerZeroSent)
end
function Cutter:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      self:readCutterFromStream(streamId, connection)
    end
    v5 = streamReadBool(streamId)
    v4.lastAreaBiggerZero = v5
    if v4.lastAreaBiggerZero then
      v4.lastAreaBiggerZeroTime = g_currentMission.time
    end
    self:setTestAreaRequirements(v4.currentInputFruitType, nil, v4.allowsForageGrowthState)
  end
end
function Cutter:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_cutter.effectDirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      self:writeCutterToStream(streamId, connection)
    end
    streamWriteBool(streamId, v4.lastAreaBiggerZeroSent)
  end
end
function Cutter:readCutterFromStream(streamId, connection)
  local v4 = streamReadUIntN(streamId, 4)
  self.spec_cutter.currentGrowthState = v4
  v4 = streamReadUIntN(streamId, FruitTypeManager.SEND_NUM_BITS)
  self.spec_cutter.currentInputFruitType = v4
  v4 = streamReadBool(streamId)
  if v4 then
    self.spec_cutter.lastValidInputFruitType = self.spec_cutter.currentInputFruitType
  else
    self.spec_cutter.currentInputFruitType = FruitType.UNKNOWN
  end
  v4 = v4:getFillTypeIndexByFruitTypeIndex(v3.currentInputFruitType)
  v3.currentOutputFillType = v4
  if v3.fruitTypeConverters[v3.currentInputFruitType] ~= nil then
    v3.currentOutputFillType = v3.fruitTypeConverters[v3.currentInputFruitType].fillTypeIndex
    v3.currentConversionFactor = v3.fruitTypeConverters[v3.currentInputFruitType].conversionFactor
  end
  v4 = streamReadBool(streamId)
  if v4 then
    v4 = v4:getWindrowFillTypeIndexByFruitTypeIndex(v3.currentInputFruitType)
    v3.currentInputFillType = v4
    return
  end
  v4 = v4:getFillTypeIndexByFruitTypeIndex(v3.currentInputFruitType)
  v3.currentInputFillType = v4
end
function Cutter:writeCutterToStream(streamId, connection)
  streamWriteUIntN(streamId, self.spec_cutter.currentGrowthState, 4)
  streamWriteUIntN(streamId, self.spec_cutter.currentInputFruitType, FruitTypeManager.SEND_NUM_BITS)
  if self.spec_cutter.currentInputFruitType ~= self.spec_cutter.lastValidInputFruitType then
  end
  v4(v5, true)
  streamWriteBool(streamId, v3.useWindrow)
end
function Cutter:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_cutter.automaticTilt.hasNodes then
    local v6, v7, v8 = self:getCutterTiltDelta()
    if self.isActive then
      -- TODO: structure LOP_FORNPREP (pc 21, target 97)
      local v13, v14, v15 = getRotation(self.spec_cutter.automaticTilt.nodes[1].node)
      if not v7 and v8 then
      end
      local v16 = math.abs(v6)
      if 0.00001 < v16 then
        local v20 = math.abs(v6)
        local v18 = math.pow(v20 / 0.01745, 2)
        local v17 = math.min(v18, 1)
        v18 = MathUtil.sign(v6)
        v18 = MathUtil.clamp(v15 + v17 * v18 * v12.maxSpeed * dt, v12.minAngle, v12.maxAngle)
        setRotation(v12.node, 0, 0, v18)
        if self.setMovingToolDirty ~= nil then
          self:setMovingToolDirty(v12.node)
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 96, target 22)
    end
  end
  if self.isClient then
    -- TODO: structure LOP_FORNPREP (pc 105, target 181)
    if v5.spikedDrums[1].animationNode.state ~= RotationAnimation.STATE_OFF then
      local v10, v11, v12 = getRotation(v5.spikedDrums[1].node)
      if v10 < 0 then
      end
      -- TODO: structure LOP_FORNPREP (pc 141, target 180)
      local v19 = v19:get((v10 / 2 * math.pi + v9.spikes[1].initalTime) % 1)
      local v20, v21, v22 = getSplinePosition(v9.spline, v19)
      local v24 = getParent(v9.spikes[1].node)
      local v23, v24, v25 = worldToLocal(v24, v20, v21, v22)
      setTranslation(v9.spikes[1].node, 0, v24, 0)
      -- TODO: structure LOP_FORNLOOP (pc 179, target 142)
    end
    -- TODO: structure LOP_FORNLOOP (pc 180, target 106)
  end
end
function Cutter:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v6 = self:getIsTurnedOn()
  if v6 and self.movingDirection == self.spec_cutter.movingDirection then
    local v8 = self:getLastSpeed()
    if 0.5 < v8 then
      if not self.spec_cutter.allowCuttingWhileRaised then
        local v7 = self:getIsLowered(true)
        -- if not v7 then goto L37 end
      end
      if v5.workAreaParameters.combineVehicle == nil then
      end
    end
  end
  if v7 then
    local v8, v9, v10, v11, v12 = self:getTestAreaWidthByWorkAreaIndex(1)
    local testAreaCharge = self:getTestAreaChargeByWorkAreaIndex(1)
    if not v5.useWindrow then
      v5.cutterLoad = v5.cutterLoad * 0.95 + testAreaCharge * 0.05
    end
    if v8 == -math.huge then
      -- if v9 ~= math.huge then goto L70 end
    elseif not v12 and v5.lastAreaBiggerZeroTime + 300 < g_currentMission.time then
    end
    if 0 < v5.movingDirection and v9 * -1 < v8 * -1 then
    end
    if v10 ~= 0 then
    end
    if v11 ~= 0 then
    end
    if v5.currentInputFruitType ~= v5.lastValidInputFruitType then
    end
    if v17 ~= nil then
      Cutter.updateExtraObjects(self)
    end
    if g_currentMission.time >= v5.lastAreaBiggerZeroTime + 300 then
    end
    if v5.useWindrow then
      if true then
        v5.cutterLoad = v5.cutterLoad * 0.95 + 0.05
      else
        v5.cutterLoad = v5.cutterLoad * 0.9
      end
    end
    -- if not v0.isClient then goto L315 end
    if v19 ~= nil then
      -- if v19 == FillType.UNKNOWN then goto L183 end
      -- if not v18 then goto L183 end
      v21:setFillType(v5.fillEffects, v19)
      v21:setMinMaxWidth(v5.fillEffects, v8, v9, v15, v16, v14)
      v21:startEffects(v5.fillEffects)
    else
      v21:stopEffects(v5.fillEffects)
    end
    if v17 ~= nil then
      -- if v17 == FruitType.UNKNOWN then goto L236 end
      -- if v14 then goto L236 end
      v21:setFruitType(v5.cutterEffects, v17, v5.currentGrowthState)
      v21:setFillType(v5.cutterEffects, v19)
      v21:setMinMaxWidth(v5.cutterEffects, v8, v9, v15, v16, v14)
      v21:startEffects(v5.cutterEffects)
    else
      v21:stopEffects(v5.cutterEffects)
    end
    if v20 then
      local v21 = v21:getIsSamplePlaying(v5.samples.cut)
      -- if v21 then goto L315 end
      v21:playSample(v5.samples.cut)
      -- goto L315  (LOP_JUMP +51)
    end
    v21 = v21:getIsSamplePlaying(v5.samples.cut)
    -- if not v21 then goto L315 end
    v21:stopSample(v5.samples.cut)
  else
    if self.isClient then
      v8:stopEffects(v5.cutterEffects)
      v8:stopEffects(v5.fillEffects)
      v8:stopSample(v5.samples.cut)
    end
    v5.cutterLoad = v5.cutterLoad * 0.9
  end
  v5.lastOutputTime = v5.lastOutputTime + dt
  if 500 < v5.lastOutputTime then
    v5.lastPrioritizedOutputType = FillType.UNKNOWN
    for v12, testAreaCharge in pairs(v5.lastOutputFillTypes) do
      if v8 < v5.lastOutputFillTypes[v12] then
        v5.lastPrioritizedOutputType = v12
      end
      v5.lastOutputFillTypes[v12] = 0
    end
    v5.lastOutputTime = 0
  end
  v9, v10 = self:getCutterTiltIsActive(v5.automaticTilt)
  if v9 and v5.automaticTilt ~= nil and v5.automaticTilt.raycastNode1 ~= nil and v5.automaticTilt.raycastNode2 ~= nil then
    v5.automaticTilt.currentDelta = 0
    v11, v12, testAreaCharge = localToWorld(v5.automaticTilt.raycastNode1, 0, 1, 0)
    local v14, v15, v16 = localDirectionToWorld(v5.automaticTilt.raycastNode1, 0, -1, 0)
    v5.automaticTilt.raycastHit = false
    raycastAll(v11, v12, testAreaCharge, v14, v15, v16, "tiltRaycastDetectionCallback", 2, self, Cutter.AUTO_TILT_COLLISION_MASK)
    local v20, v21, v22 = getWorldTranslation(v5.automaticTilt.raycastNode1)
    if not v5.automaticTilt.raycastHit then
      local v23, v24, v25 = localToWorld(v5.automaticTilt.raycastNode1, 0, -1, 0)
    end
    v23, v24, v25 = localToWorld(v8.raycastNode2, 0, 1, 0)
    v23, v24, v25 = localDirectionToWorld(v8.raycastNode2, 0, -1, 0)
    v8.raycastHit = false
    raycastAll(v23, v24, v25, v23, v24, v25, "tiltRaycastDetectionCallback", 2, self, Cutter.AUTO_TILT_COLLISION_MASK)
    local v26, v27, v28 = getWorldTranslation(v8.raycastNode2)
    if not v8.raycastHit then
      local v29, v30, v31 = localToWorld(v8.raycastNode2, 0, -1, 0)
    end
    local v33 = MathUtil.vector3Length(v17 - v23 + v14 * (v18 - v24), v18 - v24 + v15 * (v18 - v24), v19 - v25 + v16 * (v18 - v24))
    if v18 < v24 then
    else
    end
    local v38 = math.abs(v29)
    local v36 = math.atan(v38 / v33)
    local v37 = MathUtil.vector3Length(v20 - v26, v21 - v27, v22 - v28)
    if v21 < v27 then
    else
    end
    local v42 = math.abs(v36)
    local v40 = math.atan(v42 / v37)
    if v35 == v35 and v40 * v38 == v40 * v38 then
      v8.currentDelta = v35 - v40 * v38
    end
  end
end
function Cutter:getCombine()
  if self.verifyCombine ~= nil then
    return self:verifyCombine(self.spec_cutter.currentInputFruitType, self.spec_cutter.currentOutputFillType)
  end
  if self.getAttacherVehicle ~= nil then
    isActiveForInput = self:getAttacherVehicle()
    if isActiveForInput ~= nil and isActiveForInput.verifyCombine ~= nil then
      return isActiveForInput:verifyCombine(dt.currentInputFruitType, dt.currentOutputFillType)
    end
  end
  return nil
end
function Cutter.getAllowCutterAIFruitRequirements(v0)
  return true
end
function Cutter:processCutterArea(workArea, dt)
  if self.spec_cutter.workAreaParameters.combineVehicle ~= nil then
    local isSelected, v5, v6 = getWorldTranslation(workArea.start)
    local v7, v8, v9 = getWorldTranslation(workArea.width)
    local v10, v11, v12 = getWorldTranslation(workArea.height)
    for v20, v21 in ipairs(self.spec_cutter.workAreaParameters.fruitTypesToUse) do
      local v22 = v22:getFruitTypeByIndex(v21)
      local v23 = v16:getChopperTypeValue(v22.chopperTypeIndex)
      local v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35 = FSDensityMapUtil.cutFruitArea(v21, isSelected, v6, v7, v9, v10, v12, true, isActiveForInputIgnoreSelection.allowsForageGrowthState, v23)
      if not (0 < v24) then
        continue
      end
      if self.isServer then
        if v33 ~= isActiveForInputIgnoreSelection.currentGrowthState then
          isActiveForInputIgnoreSelection.currentGrowthStateTimer = isActiveForInputIgnoreSelection.currentGrowthStateTimer + dt
          if 500 >= isActiveForInputIgnoreSelection.currentGrowthStateTimer then
            -- if v3.currentGrowthStateTime + 1000 >= g_time then goto L101 end
          end
          isActiveForInputIgnoreSelection.currentGrowthState = v33
          isActiveForInputIgnoreSelection.currentGrowthStateTimer = 0
        else
          isActiveForInputIgnoreSelection.currentGrowthStateTimer = 0
          isActiveForInputIgnoreSelection.currentGrowthStateTime = g_time
        end
        if v21 ~= isActiveForInputIgnoreSelection.currentInputFruitType then
          isActiveForInputIgnoreSelection.currentInputFruitType = v21
          isActiveForInputIgnoreSelection.currentGrowthState = v33
          local v36 = v36:getFillTypeIndexByFruitTypeIndex(isActiveForInputIgnoreSelection.currentInputFruitType)
          isActiveForInputIgnoreSelection.currentOutputFillType = v36
          if isActiveForInputIgnoreSelection.fruitTypeConverters[isActiveForInputIgnoreSelection.currentInputFruitType] ~= nil then
            isActiveForInputIgnoreSelection.currentOutputFillType = isActiveForInputIgnoreSelection.fruitTypeConverters[isActiveForInputIgnoreSelection.currentInputFruitType].fillTypeIndex
            isActiveForInputIgnoreSelection.currentConversionFactor = isActiveForInputIgnoreSelection.fruitTypeConverters[isActiveForInputIgnoreSelection.currentInputFruitType].conversionFactor
          end
          v36 = v36:getCutHeightByFruitTypeIndex(v21, isActiveForInputIgnoreSelection.allowsForageGrowthState)
          self:setCutterCutHeight(v36)
        end
        self:setTestAreaRequirements(v21, nil, isActiveForInputIgnoreSelection.allowsForageGrowthState)
        if 0 < v35 then
          isActiveForInputIgnoreSelection.currentInputFruitTypeAI = v21
        end
        v36 = v36:getFillTypeIndexByFruitTypeIndex(v21)
        isActiveForInputIgnoreSelection.currentInputFillType = v36
        isActiveForInputIgnoreSelection.useWindrow = false
      end
      v36 = v36:getHarvestScaleMultiplier(v21, v26, v27, v28, v29, v30, v31, v32)
      isActiveForInputIgnoreSelection.workAreaParameters.lastFruitType = v21
      isActiveForInputIgnoreSelection.workAreaParameters.lastChopperValue = v23
      break
    end
    if 0 < v15 then
      if workArea.chopperAreaIndex ~= nil and isActiveForInputIgnoreSelection.workAreaParameters.lastChopperValue ~= nil then
        v17 = self:getWorkAreaByIndex(workArea.chopperAreaIndex)
        if v17 ~= nil then
          v18, v19, v20 = getWorldTranslation(v17.start)
          v18, v19, v20 = getWorldTranslation(v17.width)
          v18, v19, v20 = getWorldTranslation(v17.height)
          FSDensityMapUtil.setGroundTypeLayerArea(v18, v20, v18, v20, v18, v20, isActiveForInputIgnoreSelection.workAreaParameters.lastChopperValue)
        else
          Logging.xmlWarning(self.xmlFile, "Invalid chopperAreaIndex '%d' for workArea '%d'!", workArea.chopperAreaIndex, workArea.index)
          workArea.chopperAreaIndex = nil
        end
      end
      v17 = FSDensityMapUtil.getStoneArea(isSelected, v6, v7, v9, v10, v12)
      isActiveForInputIgnoreSelection.stoneLastState = v17
      isActiveForInputIgnoreSelection.isWorking = true
    end
    isActiveForInputIgnoreSelection.workAreaParameters.lastRealArea = isActiveForInputIgnoreSelection.workAreaParameters.lastRealArea + testAreaCharge
    isActiveForInputIgnoreSelection.workAreaParameters.lastThreshedArea = isActiveForInputIgnoreSelection.workAreaParameters.lastThreshedArea + v14
    isActiveForInputIgnoreSelection.workAreaParameters.lastStatsArea = isActiveForInputIgnoreSelection.workAreaParameters.lastStatsArea + v14
    isActiveForInputIgnoreSelection.workAreaParameters.lastArea = isActiveForInputIgnoreSelection.workAreaParameters.lastArea + v15
  end
  return isActiveForInputIgnoreSelection.workAreaParameters.lastRealArea, isActiveForInputIgnoreSelection.workAreaParameters.lastArea
end
function Cutter:processPickupCutterArea(workArea, dt)
  if self.spec_cutter.workAreaParameters.combineVehicle ~= nil then
    local isSelected, v5, v6 = getWorldTranslation(workArea.start)
    local v7, v8, v9 = getWorldTranslation(workArea.width)
    local v10, v11, v12 = getWorldTranslation(workArea.height)
    local testAreaCharge, v14, v15, v16, v17, v18, v19 = DensityMapHeightUtil.getLineByAreaDimensions(isSelected, v5, v6, v7, v8, v9, v10, v11, v12)
    for v23, v24 in ipairs(self.spec_cutter.workAreaParameters.fruitTypesToUse) do
      local v25 = v25:getWindrowFillTypeIndexByFruitTypeIndex(v24)
      if not (v25 ~= nil) then
        continue
      end
      local v27 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, v25, testAreaCharge, v14, v15, v16, v17, v18, v19, nil, nil, false, nil)
      if not self.isServer then
        continue
      end
      if not (0 < -v27) then
        continue
      end
      v27 = v27:getFruitTypeByIndex(v24)
      local v31 = v31:getFruitPixelsToSqm()
      if v24 ~= isActiveForInputIgnoreSelection.currentInputFruitType then
        isActiveForInputIgnoreSelection.currentInputFruitType = v24
        local v30 = v30:getFillTypeIndexByFruitTypeIndex(isActiveForInputIgnoreSelection.currentInputFruitType)
        isActiveForInputIgnoreSelection.currentOutputFillType = v30
        if isActiveForInputIgnoreSelection.fruitTypeConverters[isActiveForInputIgnoreSelection.currentInputFruitType] ~= nil then
          isActiveForInputIgnoreSelection.currentOutputFillType = isActiveForInputIgnoreSelection.fruitTypeConverters[isActiveForInputIgnoreSelection.currentInputFruitType].fillTypeIndex
          isActiveForInputIgnoreSelection.currentConversionFactor = isActiveForInputIgnoreSelection.fruitTypeConverters[isActiveForInputIgnoreSelection.currentInputFruitType].conversionFactor
        end
      end
      isActiveForInputIgnoreSelection.useWindrow = true
      isActiveForInputIgnoreSelection.currentInputFillType = v25
      isActiveForInputIgnoreSelection.workAreaParameters.lastFruitType = v24
      isActiveForInputIgnoreSelection.workAreaParameters.lastRealArea = isActiveForInputIgnoreSelection.workAreaParameters.lastRealArea + v29
      isActiveForInputIgnoreSelection.workAreaParameters.lastThreshedArea = isActiveForInputIgnoreSelection.workAreaParameters.lastThreshedArea + v29
      isActiveForInputIgnoreSelection.workAreaParameters.lastStatsArea = isActiveForInputIgnoreSelection.workAreaParameters.lastStatsArea + v29
      isActiveForInputIgnoreSelection.workAreaParameters.lastArea = isActiveForInputIgnoreSelection.workAreaParameters.lastArea + v29
      v30 = FSDensityMapUtil.getStoneArea(isSelected, v6, v7, v9, v10, v12)
      isActiveForInputIgnoreSelection.stoneLastState = v30
      isActiveForInputIgnoreSelection.isWorking = true
      break
    end
  end
  return isActiveForInputIgnoreSelection.workAreaParameters.lastRealArea, isActiveForInputIgnoreSelection.workAreaParameters.lastArea
end
function Cutter:onStartWorkAreaProcessing(dt)
  local isActiveForInputIgnoreSelection, isSelected, v5 = self:getCombine()
  if isActiveForInputIgnoreSelection == nil and v5 ~= nil then
  end
  isActiveForInput.workAreaParameters.combineVehicle = isActiveForInputIgnoreSelection
  isActiveForInput.workAreaParameters.lastRealArea = 0
  isActiveForInput.workAreaParameters.lastThreshedArea = 0
  isActiveForInput.workAreaParameters.lastStatsArea = 0
  isActiveForInput.workAreaParameters.lastArea = 0
  isActiveForInput.workAreaParameters.lastGrowthState = 0
  isActiveForInput.workAreaParameters.lastGrowthStateArea = 0
  isActiveForInput.workAreaParameters.lastChopperValue = nil
  if isActiveForInput.workAreaParameters.lastFruitType == nil then
    isActiveForInput.workAreaParameters.fruitTypesToUse = isActiveForInput.fruitTypes
  else
    -- TODO: structure LOP_FORNPREP (pc 69, target 77)
    isActiveForInput.workAreaParameters.lastFruitTypeToUse[1] = nil
    -- TODO: structure LOP_FORNLOOP (pc 76, target 70)
    isActiveForInput.workAreaParameters.lastFruitTypeToUse[1] = isActiveForInput.workAreaParameters.lastFruitType
    isActiveForInput.workAreaParameters.fruitTypesToUse = isActiveForInput.workAreaParameters.lastFruitTypeToUse
  end
  if v5 ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 103, target 111)
    isActiveForInput.workAreaParameters.lastFruitTypeToUse[1] = nil
    -- TODO: structure LOP_FORNLOOP (pc 110, target 104)
    local v6 = v6:getFruitTypeIndexByFillTypeIndex(v5)
    for v10, v11 in pairs(isActiveForInput.fruitTypeConverters) do
      if not (v11.fillTypeIndex == v5) then
        continue
      end
      table.insert(isActiveForInput.workAreaParameters.lastFruitTypeToUse, v10)
    end
    if v6 ~= nil then
      table.insert(isActiveForInput.workAreaParameters.lastFruitTypeToUse, v6)
    end
    isActiveForInput.workAreaParameters.fruitTypesToUse = isActiveForInput.workAreaParameters.lastFruitTypeToUse
  end
  isActiveForInput.workAreaParameters.lastFruitType = nil
  isActiveForInput.isWorking = false
end
function Cutter:onEndWorkAreaProcessing(dt, hasProcessed)
  if self.isServer then
    if 0 < self.spec_cutter.workAreaParameters.lastRealArea then
      if self.spec_cutter.workAreaParameters.combineVehicle ~= nil then
        local v9 = self:getIsAIActive()
        if v9 then
          v9 = self:getAIFruitRequirements()
          if #v9 == 1 and v9[1] ~= nil and v9[1].fruitType ~= FruitType.UNKNOWN then
          end
        end
        if isActiveForInputIgnoreSelection.lastOutputFillTypes[isActiveForInputIgnoreSelection.currentOutputFillType] == nil then
          isActiveForInputIgnoreSelection.lastOutputFillTypes[isActiveForInputIgnoreSelection.currentOutputFillType] = isSelected
        else
          isActiveForInputIgnoreSelection.lastOutputFillTypes[isActiveForInputIgnoreSelection.currentOutputFillType] = isActiveForInputIgnoreSelection.lastOutputFillTypes[isActiveForInputIgnoreSelection.currentOutputFillType] + isSelected
        end
        if isActiveForInputIgnoreSelection.lastPrioritizedOutputType ~= FillType.UNKNOWN then
        end
        local v12 = self:getLastTouchedFarmlandFarmId()
        local loadPercentage = self:getCutterLoad()
        local v14 = v14:addCutterArea(...)
        if 0 < v14 and v10 == v11 then
          isActiveForInputIgnoreSelection.lastValidInputFruitType = v8
        end
      end
      local v10 = v10:getFruitPixelsToSqm()
      local v8 = MathUtil.areaToHa(...)
      local v11 = self:getLastTouchedFarmlandFarmId()
      v9:updateFarmStats(v11, "threshedHectares", v8)
      self:updateLastWorkedArea(v6)
      if 0 >= v7 then
      end
      isActiveForInputIgnoreSelection.lastAreaBiggerZero = true
      if isActiveForInputIgnoreSelection.lastAreaBiggerZero then
        isActiveForInputIgnoreSelection.lastAreaBiggerZeroTime = g_currentMission.time
      end
      if isActiveForInputIgnoreSelection.lastAreaBiggerZero ~= isActiveForInputIgnoreSelection.lastAreaBiggerZeroSent then
        self:raiseDirtyFlags(isActiveForInputIgnoreSelection.dirtyFlag)
        isActiveForInputIgnoreSelection.lastAreaBiggerZeroSent = isActiveForInputIgnoreSelection.lastAreaBiggerZero
      end
      if isActiveForInputIgnoreSelection.currentInputFruitType ~= isActiveForInputIgnoreSelection.currentInputFruitTypeSent then
        self:raiseDirtyFlags(isActiveForInputIgnoreSelection.effectDirtyFlag)
        isActiveForInputIgnoreSelection.currentInputFruitTypeSent = isActiveForInputIgnoreSelection.currentInputFruitType
      end
      v9 = self:getAllowCutterAIFruitRequirements()
      -- if not v9 then goto L287 end
      if self.setAIFruitRequirements ~= nil then
        v9 = self:getAIFruitRequirements()
        if 1 >= #v9 and v9[1] ~= nil then
          -- if v9[1].fruitType ~= FruitType.UNKNOWN then goto L234 end
        end
        v11 = v11:getFruitTypeByIndex(isActiveForInputIgnoreSelection.currentInputFruitTypeAI)
        if v11 ~= nil then
          if isActiveForInputIgnoreSelection.allowsForageGrowthState then
            -- if v11.minForageGrowthState then goto L226 end
          end
          self:setAIFruitRequirements(isActiveForInputIgnoreSelection.currentInputFruitTypeAI, v11.minHarvestingGrowthState, v11.maxHarvestingGrowthState)
        end
      end
      isActiveForInputIgnoreSelection.aiNoValidGroundTimer = 0
      return
    end
    v8 = self:getAllowCutterAIFruitRequirements()
    if v8 and hasProcessed and self.rootVehicle.getAIFieldWorkerIsTurning ~= nil then
      v9 = self.rootVehicle:getIsAIActive()
      if v9 then
        v9 = self.rootVehicle:getLastSpeed()
        if 5 < v9 then
          v9 = self.rootVehicle:getAIFieldWorkerIsTurning()
          if not v9 then
            isActiveForInputIgnoreSelection.aiNoValidGroundTimer = isActiveForInputIgnoreSelection.aiNoValidGroundTimer + dt
            -- if 5000 >= v3.aiNoValidGroundTimer then goto L287 end
            -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L287
            v11 = AIMessageErrorUnknown.new()
            self.rootVehicle:stopCurrentAIJob(...)
            return
          end
        end
      end
      isActiveForInputIgnoreSelection.aiNoValidGroundTimer = 0
    end
  end
end
function Cutter:getCutterLoad()
  local v5 = self:getLastSpeed()
  local isActiveForInputIgnoreSelection = MathUtil.clamp(v5 / self.speedLimit, 0, 1)
  return self.spec_cutter.cutterLoad * (isActiveForInputIgnoreSelection * 0.75 + 0.25)
end
function Cutter:getCutterStoneMultiplier()
  if self.spec_cutter.stoneLastState ~= 0 and self.spec_cutter.stoneWearMultiplierData ~= nil then
    return self.spec_cutter.stoneWearMultiplierData[self.spec_cutter.stoneLastState] or 1
  end
  return 1
end
function Cutter:loadCutterTiltFromXML(xmlFile, key, target)
  target.nodes = {}
  xmlFile:iterate(key .. ".automaticTiltNode", function(self, xmlFile)
    local target = target:getValue(xmlFile .. "#node", nil, u1.components, u1.i3dMappings)
    if {node = target}.node ~= nil then
      target = target:getValue(xmlFile .. "#minAngle", -5)
      target = target:getValue(xmlFile .. "#maxAngle", 5)
      local isSelected = isSelected:getValue(xmlFile .. "#maxSpeed", 2)
      table.insert(u2.nodes, {node = target, minAngle = target, maxAngle = target, maxSpeed = isSelected / 1000})
    end
  end)
  local isSelected = xmlFile:getValue(key .. "#raycastNode1", nil, self.components, self.i3dMappings)
  target.raycastNode1 = isSelected
  isSelected = xmlFile:getValue(key .. "#raycastNode2", nil, self.components, self.i3dMappings)
  target.raycastNode2 = isSelected
  if target.raycastNode1 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L79
    local isSelected, v5, v6 = localToLocal(target.raycastNode1, self.rootNode, 0, 0, 0)
    local v7, v8, v9 = localToLocal(target.raycastNode2, self.rootNode, 0, 0, 0)
    -- if v4 >= v7 then goto L81 end
    target.raycastNode1 = target.raycastNode2
    target.raycastNode2 = target.raycastNode1
  else
    return false
  end
  return true
end
function Cutter:getCutterTiltIsAvailable()
  return self.spec_cutter.automaticTilt.isAvailable
end
function Cutter:getCutterTiltIsActive(automaticTilt)
  if automaticTilt.isAvailable then
    -- if v0.isActive then goto L9 end
  end
  return false, false
  local isActiveForInput = self:getIsLowered(true)
  if isActiveForInput then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L26
    isActiveForInput = self:getAttacherVehicle()
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L26
  end
  return false, true
  return true, false
end
function Cutter:getCutterTiltDelta()
  local isActiveForInput = self:getCutterTiltIsActive(self.spec_cutter.automaticTilt)
  if isActiveForInput then
    -- if v0.spec_cutter.automaticTilt.currentDelta then goto L14 end
  end
  return 0, isActiveForInput
end
function Cutter:tiltRaycastDetectionCallback(hitObjectId, x, y, z, distance)
  local v6 = getRigidBodyType(hitObjectId)
  if v6 ~= RigidBodyType.STATIC then
    return true
  end
  self.spec_cutter.automaticTilt.lastHit[1] = x
  self.spec_cutter.automaticTilt.lastHit[2] = y
  self.spec_cutter.automaticTilt.lastHit[3] = z
  self.spec_cutter.automaticTilt.raycastHit = true
  return false
end
function Cutter:setCutterCutHeight(cutHeight)
  if cutHeight ~= nil then
    self.spec_cutter.currentCutHeight = cutHeight
    if self.spec_attachable ~= nil then
      local inputAttacherJoint = self:getActiveInputAttacherJoint()
      if inputAttacherJoint ~= nil then
        if inputAttacherJoint.jointType ~= AttacherJoints.JOINTTYPE_CUTTER then
          -- if v2.jointType ~= AttacherJoints.JOINTTYPE_CUTTERHARVESTER then goto L53 end
        end
        inputAttacherJoint.lowerDistanceToGround = cutHeight
        return
      end
      local inputAttacherJoints = self:getInputAttacherJoints()
      -- TODO: structure LOP_FORNPREP (pc 36, target 53)
      if inputAttacherJoints[1].jointType ~= AttacherJoints.JOINTTYPE_CUTTER then
        -- if v3[1].jointType ~= AttacherJoints.JOINTTYPE_CUTTERHARVESTER then goto L52 end
      end
      inputAttacherJoint.lowerDistanceToGround = cutHeight
      -- TODO: structure LOP_FORNLOOP (pc 52, target 37)
    end
  end
end
function Cutter.loadSpeedRotatingPartFromXML(v0, dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v5 = dt(v0, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if not v5 then
    return false
  end
  v5 = isActiveForInputIgnoreSelection:getValue(isSelected .. "#rotateIfTurnedOn", false)
  isActiveForInput.rotateIfTurnedOn = v5
  return true
end
function Cutter:getIsSpeedRotatingPartActive(superFunc, speedRotatingPart)
  if speedRotatingPart.rotateIfTurnedOn then
    local isActiveForInputIgnoreSelection = self:getIsTurnedOn()
    if not isActiveForInputIgnoreSelection then
      return false
    end
  end
  isActiveForInputIgnoreSelection = superFunc(self, speedRotatingPart)
  return isActiveForInputIgnoreSelection
end
function Cutter.loadRandomlyMovingPartFromXML(v0, dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v5 = dt(v0, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v6 = isActiveForInputIgnoreSelection:getValue(isSelected .. "#moveOnlyIfCut", false)
  isActiveForInput.moveOnlyIfCut = v6
  return v5
end
function Cutter:getIsRandomlyMovingPartActive(superFunc, part)
  local retValue = superFunc(self, part)
  if part.moveOnlyIfCut and retValue and g_currentMission.time - 150 > self.spec_cutter.lastAreaBiggerZeroTime then
  end
  return retValue
end
function Cutter:getIsWorkAreaActive(superFunc, workArea)
  if self.getAllowsLowering ~= nil then
    local isSelected = self:getAllowsLowering()
    -- if not v4 then goto L20 end
  end
  if not isActiveForInputIgnoreSelection.allowCuttingWhileRaised then
    isSelected = self:getIsLowered(true)
    if not isSelected then
      return false
    end
  end
  isSelected = superFunc(self, workArea)
  return isSelected
end
function Cutter:doCheckSpeedLimit(superFunc)
  local isActiveForInput = superFunc(self)
  if not isActiveForInput then
    isActiveForInput = self:getIsTurnedOn()
    if isActiveForInput and self.getIsLowered ~= nil then
      isActiveForInput = self:getIsLowered()
    end
  end
  return isActiveForInput
end
function Cutter.loadWorkAreaFromXML(v0, dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v5 = dt(v0, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v6 = isActiveForInputIgnoreSelection:getValue(isSelected .. ".chopperArea#index")
  isActiveForInput.chopperAreaIndex = v6
  return v5
end
function Cutter:getDirtMultiplier(superFunc)
  if self.spec_cutter.isWorking then
    local isSelected = superFunc(self)
    local v7 = self:getWorkDirtMultiplier()
    local v8 = self:getLastSpeed()
    return isSelected + v7 * v8 / self.speedLimit
  end
  return superFunc(self)
end
function Cutter:getWearMultiplier(superFunc)
  if self.spec_cutter.isWorking then
    if self.spec_cutter.stoneLastState ~= 0 and self.spec_cutter.stoneWearMultiplierData ~= nil then
    end
    local v5 = superFunc(self)
    local v9 = self:getWorkWearMultiplier()
    local v10 = self:getLastSpeed()
    return v5 + v9 * v10 / self.speedLimit * isActiveForInputIgnoreSelection
  end
  return superFunc(self)
end
function Cutter:isAttachAllowed(superFunc, farmId, attacherVehicle)
  if attacherVehicle.spec_combine ~= nil then
    local v5 = attacherVehicle:getIsCutterCompatible(self.spec_cutter.fillTypes)
    if not v5 then
      local v6 = v6:getText("info_attach_not_allowed")
      return false
    end
  end
  v5 = superFunc(self, farmId, attacherVehicle)
  return v5
end
function Cutter:getConsumingLoad(superFunc)
  local isActiveForInput, isActiveForInputIgnoreSelection = superFunc(self)
  local loadPercentage = self:getCutterLoad()
  return isActiveForInput + loadPercentage, isActiveForInputIgnoreSelection + 1
end
function Cutter:getIsGroundReferenceNodeThreshold(superFunc, groundReferenceNode)
  local threshold = superFunc(self, groundReferenceNode)
  return threshold + self.spec_cutter.currentCutHeight
end
function Cutter.getDefaultAllowComponentMassReduction(v0)
  return true
end
function Cutter:onPreAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  if self.isClient then
    Cutter.updateExtraObjects(self)
  end
end
function Cutter:onPostDetach(attacherVehicle, implement)
  if self.isClient then
    Cutter.updateExtraObjects(self)
  end
end
function Cutter:onTurnedOn()
  if self.isClient then
    isActiveForInput:startAnimations(self.spec_cutter.animationNodes)
  end
end
function Cutter:onTurnedOff()
  if self.isClient then
    isActiveForInput:stopAnimations(self.spec_cutter.animationNodes)
    isActiveForInput:resetEffects(self.spec_cutter.currentCutterEffect)
  end
  dt.currentInputFruitType = FruitType.UNKNOWN
  dt.currentInputFruitTypeSent = FruitType.UNKNOWN
  dt.currentInputFruitTypeAI = FruitType.UNKNOWN
  dt.currentInputFillType = FillType.UNKNOWN
  dt.currentOutputFillType = FillType.UNKNOWN
end
function Cutter:onAIImplementStart()
  local dt = self:getAllowCutterAIFruitRequirements()
  if dt then
    self:clearAIFruitRequirements()
    for v5, v6 in ipairs(self.spec_cutter.fruitTypes) do
      local v7 = v7:getFruitTypeByIndex(v6)
      if not (v7 ~= nil) then
        continue
      end
      if dt.allowsForageGrowthState then
        -- if v7.minForageGrowthState then goto L31 end
      end
      self:addAIFruitRequirement(v7.index, v7.minHarvestingGrowthState, v7.maxHarvestingGrowthState)
    end
  end
end
function Cutter:updateExtraObjects()
  if self.spec_cutter.lastValidInputFruitType ~= nil then
    if self.spec_cutter.hideExtraObjectsOnDetach and self.getAttacherVehicle ~= nil then
      local isActiveForInputIgnoreSelection = self:getAttacherVehicle()
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L24
    end
    if isActiveForInput ~= dt.currentExtraObject then
      if dt.currentExtraObject ~= nil then
        if dt.currentExtraObject.node ~= nil then
          setVisibility(dt.currentExtraObject.node, false)
        end
        if dt.currentExtraObject.anim ~= nil and self.playAnimation ~= nil then
          local v7 = self:getAnimationTime(dt.currentExtraObject.anim)
          self:playAnimation(dt.currentExtraObject.anim, -1, v7, true)
        end
        dt.currentExtraObject = nil
      end
      if isActiveForInput ~= nil then
        if isActiveForInput.node ~= nil then
          setVisibility(isActiveForInput.node, true)
        end
        if isActiveForInput.anim ~= nil and self.playAnimation ~= nil then
          v7 = self:getAnimationTime(isActiveForInput.anim)
          self:playAnimation(isActiveForInput.anim, 1, v7, true)
        end
        dt.currentExtraObject = isActiveForInput
      end
    end
  end
end
function Cutter.getDefaultSpeedLimit()
  return 10
end
function Cutter:updateDebugValues(values)
  local v8 = v8:getFillTypeNameByIndex(self.spec_cutter.lastPrioritizedOutputType)
  local v6 = string.format(...)
  table.insert(values, {name = "lastPrioritizedOutputType", value = v6})
  for v7, v8 in pairs(self.spec_cutter.lastOutputFillTypes) do
  end
  for v7, v8 in pairs(isActiveForInput.lastOutputFillTypes) do
    local v14 = v14:getFillTypeNameByIndex(v7)
    local v12 = string.format(...)
    local v16 = math.max(isActiveForInputIgnoreSelection, 0.01)
    v12 = string.format("%.0f%%", v8 / v16 * 100)
    table.insert(values, {name = v12, value = v12})
  end
end
