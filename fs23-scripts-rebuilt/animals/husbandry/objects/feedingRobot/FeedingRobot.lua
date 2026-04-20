-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FeedingRobot = {}
local FeedingRobot_mt = Class(FeedingRobot, Object)
InitStaticObjectClass(FeedingRobot, "FeedingRobot", ObjectIds.OBJECT_ANIMAL_HUSBANDRY_FEEDING_ROBOT)
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("feedingRobot")
  FeedingRobot.xmlSchema = v1
end)
v1:addInitSchemaFunction(function()
  FeedingRobot.xmlSchema:register(XMLValueType.STRING, "feedingRobot.filename", "Feeding robot i3d file", nil, true)
  FeedingRobot.xmlSchema:register(XMLValueType.NODE_INDEX, "feedingRobot.robot#node", "Robot node")
  FeedingRobot.xmlSchema:register(XMLValueType.NODE_INDEX, "feedingRobot.robot.door#node", "Robot door node")
  FeedingRobot.xmlSchema:register(XMLValueType.FLOAT, "feedingRobot.robot.door#maxY", "Robot door maxY")
  FeedingRobot.xmlSchema:register(XMLValueType.FLOAT, "feedingRobot.robot.door#duration", "Robot door duration")
  FeedingRobot.xmlSchema:register(XMLValueType.FLOAT, "feedingRobot.robot#maxSpeed", "Max Speed", 0)
  FeedingRobot.xmlSchema:register(XMLValueType.FLOAT, "feedingRobot.robot#acceleration", "Max acceleration", 1)
  FeedingRobot.xmlSchema:register(XMLValueType.FLOAT, "feedingRobot.robot#deceleration", "Max deceleration", -1)
  FeedingRobot.xmlSchema:register(XMLValueType.NODE_INDEX, "feedingRobot.robot#triggerNode", "Vehicle and player trigger node")
  FeedingRobot.xmlSchema:register(XMLValueType.STRING, "feedingRobot.stateMachine.states.state(?)#name", "State name")
  FeedingRobot.xmlSchema:register(XMLValueType.STRING, "feedingRobot.stateMachine.states.state(?)#class", "State class")
  FeedingRobotState.registerXMLPaths(FeedingRobot.xmlSchema, "feedingRobot.stateMachine.states.state(?)")
  FeedingRobotStateFilling.registerXMLPaths(FeedingRobot.xmlSchema, "feedingRobot.stateMachine.states.state(?)")
  I3DUtil.registerI3dMappingXMLPaths(FeedingRobot.xmlSchema, "feedingRobot")
  FeedingRobot.xmlSchema:register(XMLValueType.NODE_INDEX, "feedingRobot.playerTrigger#node", "Vehicle and player trigger node")
  FeedingRobot.xmlSchema:register(XMLValueType.STRING, "feedingRobot.stateMachine.transitions.transition(?)#from", "State name from")
  FeedingRobot.xmlSchema:register(XMLValueType.STRING, "feedingRobot.stateMachine.transitions.transition(?)#to", "State name to")
  AnimatedObject.registerXMLPaths(FeedingRobot.xmlSchema, "feedingRobot.animatedObjects")
  AnimationManager.registerAnimationNodesXMLPaths(FeedingRobot.xmlSchema, "feedingRobot.robot.mixer.animationNodes")
  EffectManager.registerEffectXMLPaths(FeedingRobot.xmlSchema, "feedingRobot.robot.dischargeEffects")
  FeedingRobot.xmlSchema:register(XMLValueType.NODE_INDEX, "feedingRobot.robot.fillPlane#node", "Fillplane base node")
  FeedingRobot.xmlSchema:register(XMLValueType.INT, "feedingRobot.robot.fillPlane#capacity", "Fillplane capacity")
  FeedingRobot.xmlSchema:register(XMLValueType.STRING, "feedingRobot.robot.mixer#recipe", "Recipe filltype")
  FillPlaneUtil.registerFillPlaneXMLPaths(FeedingRobot.xmlSchema, "feedingRobot.robot.fillPlane")
  SoundManager.registerSampleXMLPaths(FeedingRobot.xmlSchema, "feedingRobot.robot.sounds", "driving")
  SoundManager.registerSampleXMLPaths(FeedingRobot.xmlSchema, "feedingRobot.robot.sounds", "discharging")
  UnloadTrigger.registerXMLPaths(FeedingRobot.xmlSchema, "feedingRobot.unloadingSpots.unloadingSpot(?).unloadTrigger")
  FillPlane.registerXMLPaths(FeedingRobot.xmlSchema, "feedingRobot.unloadingSpots.unloadingSpot(?).fillPlane", "Fillplane")
  FeedingRobot.xmlSchema:register(XMLValueType.STRING, "feedingRobot.unloadingSpots.unloadingSpot(?)#capacity", "Unloading spot capacity")
  FeedingRobot.xmlSchema:register(XMLValueType.STRING, "feedingRobot.unloadingSpots.unloadingSpot(?)#fillTypes", "Unloading spot filltypes")
  FeedingRobot.xmlSchema:register(XMLValueType.STRING, "feedingRobot.unloadingSpots.unloadingSpot(?)#fillTypeCategories", "Unloading spot filltype categories")
  FeedingRobot.xmlSchema:register(XMLValueType.NODE_INDEX, "feedingRobot.unloadingSpots.unloadingSpot(?)#markerNode", "Unloading spot marker")
end)
function FeedingRobot:registerSavegameXMLPaths(v1)
  self:register(XMLValueType.INT, v1 .. ".unloadingSpot(?)#index", "Unloading spot index")
  self:register(XMLValueType.INT, v1 .. ".unloadingSpot(?)#fillLevel", "Unloading spot filllevel")
end
function FeedingRobot.new(isServer, isClient, owner, baseDirectory, customMt)
  if not customMt then
  end
  local v5 = v5(v6, v7, v8)
  v5.owner = owner
  v5.baseDirectory = baseDirectory
  v5.i3dMappings = {}
  v5.components = {}
  v5.isLoadingFinished = false
  v5.requestedStart = false
  v5.spline = {nodes = {}, time = 0, timeSent = 0, length = 0, feedingLength = 0, feedingFactor = 0}
  local v7 = v5:getNextDirtyFlag()
  v5.spline.dirtyFlag = v7
  v7 = InterpolationTime.new(1.2)
  v5.spline.timeInterpolator = v7
  v7 = InterpolatorValue.new(0)
  v5.spline.interpolator = v7
  v5.fillTypeToUnloadingSpot = {}
  v5.unloadingSpots = {}
  local v6 = v5:getNextDirtyFlag()
  v5.dirtyFlagFillLevel = v6
  v5.robot = nil
  v5.playerTrigger = nil
  v5.stateChangedListeners = {}
  v5.animatedObjects = {}
  v5.stateMachineNextIndex = 0
  v5.stateIndex = nil
  v5.state = {}
  v5.stateMachine = {}
  v5.stateTransitions = {}
  return v5
end
function FeedingRobot:load(linkNode, filename, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArgs)
  local v6 = XMLFile.load("feedingRobot", filename, FeedingRobot.xmlSchema)
  if v6 == nil then
    return false
  end
  self.configFileName = filename
  local v8 = v6:getValue("feedingRobot.filename")
  local v7 = Utils.getFilename(v8, self.baseDirectory)
  local v9 = v9:loadSharedI3DFileAsync(v7, true, false, self.onI3DFileLoaded, self, {xmlFile = v6, linkNode = linkNode, asyncCallbackFunction = asyncCallbackFunction, asyncCallbackObject = asyncCallbackObject, asyncCallbackArgs = asyncCallbackArgs})
  self.sharedLoadRequestId = v9
end
function FeedingRobot:delete()
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  if self.animatedObjects ~= nil then
    for v4, v5 in ipairs(self.animatedObjects) do
      v5:delete()
    end
    self.animatedObjects = nil
  end
  if self.isServer then
    if self.robot ~= nil then
      removeTrigger(self.robot.trigger)
    end
    if self.playerTrigger ~= nil then
      removeTrigger(self.playerTrigger)
    end
  end
  if self.robot ~= nil then
    v1:deleteAnimations(self.robot.mixerAnimationNodes)
    v1:deleteEffects(self.robot.dischargeEffects)
    v1:deleteSamples(self.robot.samples)
  end
  if self.unloadingSpots ~= nil then
    for v4, v5 in ipairs(self.unloadingSpots) do
      if v5.trigger ~= nil then
        v6:delete()
        v5.trigger = nil
      end
      if not (v5.markerNode ~= nil) then
        continue
      end
      v6:removeTriggerMarker(v5.markerNode)
      v5.markerNode = nil
    end
  end
  if self.rootNode ~= nil then
    delete(self.rootNode)
    self.rootNode = nil
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function FeedingRobot:onI3DFileLoaded(node, failedReason, args)
  if node ~= 0 then
    local numChildren = getNumOfChildren(node)
    -- TODO: structure LOP_FORNPREP (pc 17, target 36)
    local v13 = getChildAt(node, 0)
    table.insert(self.components, {node = v13})
    -- TODO: structure LOP_FORNLOOP (pc 35, target 18)
    if #self.components == 0 then
      Logging.xmlError(args.xmlFile, "Unable to get feedingRobot components")
      args.xmlFile:delete()
      args.asyncCallbackFunction(args.asyncCallbackObject, self, args.asyncCallbackArgs)
      return
    end
    I3DUtil.loadI3DMapping(v4, "feedingRobot", self.components, self.i3dMappings)
    for v12, v13 in ipairs(self.components) do
      link(args.linkNode, v13.node)
    end
    self.rootNode = node
    self.robot = {}
    v10 = v4:getValue("feedingRobot.robot#node", nil, self.components, self.i3dMappings)
    self.robot.node = v10
    if self.isClient then
      v10 = v10:loadAnimations(v4, "feedingRobot.robot.mixer.animationNodes", self.components, self, self.i3dMappings)
      self.robot.mixerAnimationNodes = v10
      v10 = v10:loadEffect(v4, "feedingRobot.robot.dischargeEffects", self.components, self, self.i3dMappings)
      self.robot.dischargeEffects = v10
      self.robot.samples = {}
      v10 = v10:loadSampleFromXML(v4, "feedingRobot.robot.sounds", "driving", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
      self.robot.samples.driving = v10
      v10 = v10:loadSampleFromXML(v4, "feedingRobot.robot.sounds", "discharging", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
      self.robot.samples.discharging = v10
    end
    v11 = v4:getValue("feedingRobot.robot#maxSpeed", 1)
    self.robot.maxSpeed = v11 / 3600
    self.robot.speed = 0
    v11 = v4:getValue("feedingRobot.robot#acceleration", 1)
    self.robot.acceleration = v11 / 3600
    v11 = v4:getValue("feedingRobot.robot#deceleration", -1)
    self.robot.deceleration = v11 / 3600
    if 0 < self.robot.deceleration then
      self.robot.deceleration = -self.robot.deceleration
    end
    self.robot.door = {}
    v10 = v4:getValue("feedingRobot.robot.door#node", nil, self.components, self.i3dMappings)
    self.robot.door.node = v10
    v10 = v4:getValue("feedingRobot.robot.door#maxY", 0)
    self.robot.door.maxY = v10
    v10 = v4:getValue("feedingRobot.robot.door#duration", 1)
    self.robot.door.speed = self.robot.door.maxY / v10 * 1000
    self.robot.door.isOpen = false
    v10 = v4:getValue("feedingRobot.robot.mixer#recipe", "")
    v11 = v11:getFillTypeIndexByName(v10)
    if v11 == nil then
      Logging.xmlError(v4, "Recipe filltype '%s' not defined.", v10)
    end
    v12 = v12:getRecipeByFillTypeIndex(v11)
    if v12 == nil then
      Logging.xmlError(v4, "Recipe '%s' not defined.", v10)
    else
      self.infos = {}
      for v16, v17 in pairs(v12.ingredients) do
        for v22, v23 in ipairs(v17.fillTypes) do
          table.insert(v18.fillTypes, v23)
        end
        table.insert(self.infos, v18)
      end
    end
    self.robot.recipe = v12
    self.robot.fillPlane = {}
    v14 = v4:getValue("feedingRobot.robot.fillPlane#node", nil, self.components, self.i3dMappings)
    self.robot.fillPlane.baseNode = v14
    v14 = v4:getValue("feedingRobot.robot.fillPlane#capacity", 2000)
    self.robot.fillPlane.capacity = v14
    self.robot.fillPlane.fillLevel = 0
    v14 = FillPlaneUtil.createFromXML(v4, "feedingRobot.robot.fillPlane", self.robot.fillPlane.baseNode, self.robot.fillPlane.capacity)
    self.robot.fillPlane.node = v14
    if self.robot.fillPlane.node ~= nil then
      FillPlaneUtil.assignDefaultMaterials(self.robot.fillPlane.node)
      FillPlaneUtil.setFillType(self.robot.fillPlane.node, v11)
      setVisibility(self.robot.fillPlane.node, false)
    end
    v14 = v4:getValue("feedingRobot.robot#triggerNode", nil, self.components, self.i3dMappings)
    self.robot.trigger = v14
    self.robot.objectsInTrigger = {}
    self.robot.isBlocked = false
    if self.isServer then
      addTrigger(self.robot.trigger, "onRobotTrigger", self)
    end
    v13 = v4:getValue("feedingRobot.playerTrigger#node", nil, self.components, self.i3dMappings)
    self.playerTrigger = v13
    self.nodesInPlayerTrigger = {}
    if self.isServer then
      addTrigger(self.playerTrigger, "onPlayerTrigger", self)
    end
    v4:iterate("feedingRobot.animatedObjects.animatedObject", function(self, node)
      local failedReason = AnimatedObject.new(u0.isServer, u0.isClient)
      local v5 = v5:getOwnerFarmId()
      failedReason:setOwnerFarmId(v5, false)
      local args = failedReason:load(u0.components, u1, node, u0.configFileName, u0.i3dMappings)
      if args then
        table.insert(u0.animatedObjects, failedReason)
        return
      end
      Logging.xmlError(u1, "Failed to load animated object %i", self)
    end)
    v4:iterate("feedingRobot.stateMachine.states.state", function(self, node)
      if 255 < u0.stateMachineNextIndex then
        Logging.xmlWarning(u1, "Maximum number of states reached (%d)", 255)
        return
      end
      local failedReason = failedReason:getValue(node .. "#name", "")
      failedReason = failedReason:upper()
      if u0.state[failedReason] ~= nil then
        Logging.xmlError(u1, "State '%s' already defined", failedReason, node)
        return
      end
      local args = args:getValue(node .. "#class", "")
      local v4 = ClassUtil.getClassObject(args)
      if v4 == nil then
        Logging.xmlError(u1, "State class '%s' not defined", args, node)
        return
      end
      u0.state[failedReason] = u0.stateMachineNextIndex
      local v6 = v4.new(u0)
      v6:load(u1, node)
      u0.stateMachine[u0.stateMachineNextIndex] = v6
      u0.stateMachineNextIndex = u0.stateMachineNextIndex + 1
      if u0.stateIndex == nil then
        u0.stateIndex = u0.stateMachineNextIndex
      end
    end)
    if self.state.PAUSED == nil then
      Logging.xmlError(v4, "Mandatory state 'PAUSED' not defined")
      v4:delete()
      v5(v6, self, v7)
      return
    end
    if self.state.DRIVING == nil then
      Logging.xmlError(v4, "Mandatory state 'DRIVING' not defined")
      v4:delete()
      v5(v6, self, v7)
      return
    end
    v4:iterate("feedingRobot.stateMachine.transitions.transition", function(self, node)
      local failedReason = failedReason:getValue(node .. "#from", "")
      failedReason = failedReason:upper()
      if u1.state[failedReason] == nil then
        Logging.xmlError(u0, "Invalid state. Transition from name '%s' not defined for '%s'", failedReason, node)
        return
      end
      local v4 = v4:getValue(node .. "#to", "")
      v4 = v4:upper()
      if u1.state[v4] == nil then
        Logging.xmlError(u0, "Invalid state. Transition to name '%s' not defined for '%s'", v4, node)
        return
      end
      u1.stateTransitions[args] = v5
    end)
    v4:iterate("feedingRobot.unloadingSpots.unloadingSpot", function(self, node)
      local args = UnloadTrigger.new(u0.isServer, u0.isClient)
      local v4 = args:load(u0.components, u1, node .. ".unloadTrigger", u0, nil, u0.i3dMappings)
      if not v4 then
        args:delete()
        return
      end
      failedReason.trigger = args
      v4 = v4:getInt(node .. "#capacity", 1000)
      failedReason.capacity = v4
      v4 = MathUtil.getNumRequiredBits(failedReason.capacity)
      failedReason.FILLLEVEL_NUM_BITS = v4
      failedReason.fillLevel = 0
      failedReason.fillTypes = {}
      v4 = v4:getValue(node .. "#markerNode", nil, u0.components, u0.i3dMappings)
      failedReason.markerNode = v4
      if failedReason.markerNode ~= nil then
        v4:addTriggerMarker(failedReason.markerNode)
      end
      v4 = v4:getValue(node .. "#fillTypeCategories")
      local v5 = v5:getValue(node .. "#fillTypes")
      if v4 ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L119
        local v14 = tostring(node)
        local v7 = v7:getFillTypesByCategoryNames(v4, "Warning: '" .. v14 .. "' has invalid fillTypeCategory '%s'.")
      elseif v4 == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L139
        v14 = tostring(node)
        v7 = v7:getFillTypesByNames(v5, "Warning: '" .. v14 .. "' has invalid fillType '%s'.")
      else
        Logging.xmlWarning(u1, "'%s' An 'unloadingSpot' entry needs either the 'fillTypeCategories' or 'fillTypes' attribute.", node)
        args:delete()
        return
      end
      args.fillTypes = {}
      for v10, v11 in pairs(v6) do
        table.addElement(failedReason.fillTypes, v11)
        u0.fillTypeToUnloadingSpot[v11] = failedReason
        args.fillTypes[v11] = true
      end
      v7 = v7:hasProperty(node .. ".fillPlane")
      if v7 then
        v7 = FillPlane.new()
        failedReason.fillPlane = v7
        v7:load(u0.components, u1, node .. ".fillPlane", u0.i3dMappings)
        FillPlaneUtil.assignDefaultMaterials(failedReason.fillPlane.node)
        v9 = next(args.fillTypes)
        FillPlaneUtil.setFillType(...)
        setShaderParameter(failedReason.fillPlane.node, "isCustomShape", 1, 0, 0, 0, false)
      end
      table.insert(u0.unloadingSpots, failedReason)
    end)
    self:raiseActive()
  end
  v4:delete()
  v5(v6, self, v7)
end
function FeedingRobot:finalizePlacement()
  for v4, v5 in ipairs(self.components) do
    addToPhysics(v5.node)
  end
  for v4, v5 in ipairs(self.animatedObjects) do
    v5:register(true)
  end
  for v4, v5 in ipairs(self.unloadingSpots) do
    v6:register(true)
  end
  self.isLoadingFinished = true
end
function FeedingRobot:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local args = connection:getIsServer()
  if args then
    args = streamReadUInt8(streamId)
    self:setState(args)
    v4 = streamReadFloat32(streamId)
    v5:setValue(v4)
    v5:reset()
    self.spline.time = v4
    for numChildren, v9 in ipairs(self.animatedObjects) do
      local v10 = NetworkUtil.readNodeObjectId(streamId)
      v9:readStream(streamId, connection)
      v11:finishRegisterObject(v9, v10)
    end
    for numChildren, v9 in ipairs(self.unloadingSpots) do
      v10 = NetworkUtil.readNodeObjectId(streamId)
      v11:readStream(streamId, connection)
      v11:finishRegisterObject(v9.trigger, v10)
      local v11 = streamReadUIntN(streamId, v9.FILLLEVEL_NUM_BITS)
      v9.fillLevel = v11
      self:updateUnloadingSpot(v9)
    end
    self:raiseActive()
  end
end
function FeedingRobot:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local args = connection:getIsServer()
  if not args then
    streamWriteUInt8(streamId, self.stateIndex)
    streamWriteFloat32(streamId, self.spline.timeSent)
    for v6, v7 in ipairs(self.animatedObjects) do
      local v10 = NetworkUtil.getObjectId(v7)
      NetworkUtil.writeNodeObjectId(...)
      v7:writeStream(streamId, connection)
      numChildren:registerObjectInStream(connection, v7)
    end
    for v6, v7 in ipairs(self.unloadingSpots) do
      v10 = NetworkUtil.getObjectId(v7.trigger)
      NetworkUtil.writeNodeObjectId(...)
      numChildren:writeStream(streamId, connection)
      numChildren:registerObjectInStream(connection, v7.trigger)
      streamWriteUIntN(streamId, v7.fillLevel, v7.FILLLEVEL_NUM_BITS)
    end
  end
end
function FeedingRobot:readUpdateStream(streamId, timestamp, connection)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      v4 = streamReadFloat32(streamId)
      v5:startNewPhaseNetwork()
      v5:setTargetValue(v4)
    end
    v4 = streamReadBool(streamId)
    if v4 then
      for v7, numChildren in ipairs(self.unloadingSpots) do
        local v9 = streamReadUIntN(streamId, numChildren.FILLLEVEL_NUM_BITS)
        numChildren.fillLevel = v9
        self:updateUnloadingSpot(numChildren)
      end
    end
  end
end
function FeedingRobot:writeUpdateStream(streamId, connection, dirtyMask)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.spline.dirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      streamWriteFloat32(streamId, self.spline.timeSent)
    end
    v7 = bitAND(dirtyMask, self.dirtyFlagFillLevel)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      for v7, numChildren in ipairs(self.unloadingSpots) do
        streamWriteUIntN(streamId, numChildren.fillLevel, numChildren.FILLLEVEL_NUM_BITS)
      end
    end
  end
end
function FeedingRobot.loadFromXMLFile(v0, node, failedReason)
  node:iterate(failedReason .. ".unloadingSpot", function(v0, node)
    local failedReason = failedReason:getValue(node .. "#index")
    local args = args:getValue(node .. "#fillLevel")
    if failedReason ~= nil and args ~= nil and u1.unloadingSpots[failedReason] ~= nil then
      local v5 = MathUtil.clamp(args, 0, u1.unloadingSpots[failedReason].capacity)
      u1.unloadingSpots[failedReason].fillLevel = v5
      v5:updateUnloadingSpot(u1.unloadingSpots[failedReason])
    end
  end)
end
function FeedingRobot:saveToXMLFile(xmlFile, key, usedModNames)
  for numChildren, v9 in pairs(self.unloadingSpots) do
    local v10 = string.format("%s.unloadingSpot(%d)", key, v4)
    xmlFile:setValue(v10 .. "#index", numChildren)
    xmlFile:setValue(v10 .. "#fillLevel", v9.fillLevel)
  end
end
function FeedingRobot:setOwnerFarmId(ownerFarmId, noEventSend)
  local v4 = v4:superClass()
  v4.setOwnerFarmId(self, ownerFarmId, noEventSend)
  for v6, v7 in ipairs(self.animatedObjects) do
    v7:setOwnerFarmId(ownerFarmId, true)
  end
end
function FeedingRobot:addSpline(node, direction, isFeeding)
  local v4 = getSplineLength(node)
  table.insert(self.spline.nodes, {node = node, direction = direction, length = v4, startTime = 0, endTime = 0, isFeeding = isFeeding})
  self.spline.length = self.spline.length + v4
  if isFeeding then
    self.spline.feedingLength = self.spline.feedingLength + v4
  end
  for v9, v10 in ipairs(self.spline.nodes) do
    local v11 = math.max(v5, 0)
    v10.startTime = v11
    v11 = math.min(v5 + v10.length / self.spline.length, 1)
    v10.endTime = v11
  end
end
function FeedingRobot:update(dt)
  if not self.isLoadingFinished then
    return
  end
  if self.isServer then
    local args = self.stateMachine[self.stateIndex]:isDone()
    if args then
      self:setState(self.stateTransitions[self.stateIndex])
      self:raiseActive()
    else
      args = self.stateMachine[self.stateIndex]:raiseActive()
      if args then
        self:raiseActive()
      end
    end
  end
  failedReason:update(dt)
  if not self.isServer and self.isClient then
    args = self:getIsDriving()
    if args then
      args:update(dt)
      args = args:getAlpha()
      local v4 = v4:getInterpolatedValue(args)
      local v5 = SplineUtil.getValidSplineTime(v4)
      self:setSplineTime(v5)
      v5 = v5:isInterpolating()
      if v5 then
        self:raiseActive()
      end
    end
  end
  if not self.robot.door.isOpen then
  end
  local v5, v6, v7 = getTranslation(args.node)
  local numChildren = MathUtil.clamp(v6 + v4 * dt * args.speed, 0, args.maxY)
  setTranslation(args.node, 0, numChildren, 0)
end
function FeedingRobot:start()
  if self.isServer and self.stateIndex == self.state.PAUSED then
    for v4, v5 in pairs(self.nodesInPlayerTrigger) do
      local v6 = entityExists(v4)
      if not not v6 then
        continue
      end
      self.nodesInPlayerTrigger[v4] = nil
    end
    node = next(self.nodesInPlayerTrigger)
    if node == nil then
      self.requestedStart = true
      self:raiseActive()
    end
  end
end
function FeedingRobot:getIsDriving()
  if self.stateIndex ~= self.state.DRIVING then
  end
  return true
end
function FeedingRobot:addStateChangedListener(func)
  table.addElement(self.stateChangedListeners, func)
end
function FeedingRobot:resetRobot()
  self:setSplineTime(0)
end
function FeedingRobot:addSplineDelta(delta)
  self:setSplineTime(self.spline.time + delta / self.spline.length)
end
function FeedingRobot:setSplineTime(splineTime)
  local args = MathUtil.clamp(splineTime, 0, 1)
  self.spline.time = args
  for numChildren, v9 in ipairs(self.spline.nodes) do
    if v9.startTime <= splineTime and splineTime <= v9.endTime then
      local v13, v14, v15 = getSplinePosition(v9.node, (splineTime - v9.startTime) / (v9.endTime - v9.startTime))
      local v16, v17, v18 = getSplineDirection(v9.node, (splineTime - v9.startTime) / (v9.endTime - v9.startTime))
      local v20 = getParent(self.robot.node)
      local v19, v20, v21 = worldDirectionToLocal(v20, v16, v17, v18)
      setWorldTranslation(self.robot.node, v13, v14, v15)
      setDirection(self.robot.node, v19 * v9.direction, v20, v21 * v9.direction, 0, 1, 0)
      if not v9.isFeeding then
        break
      end
      break
    end
    if not v9.isFeeding then
      continue
    end
  end
  if 0 < self.spline.feedingLength then
  end
  self.spline.feedingFactor = v5
  if args then
    v6 = v6:getIsSamplePlaying(self.robot.samples.discharging)
    if not v6 then
      v6:playSample(self.robot.samples.discharging)
    end
    -- if v0.robot.dischargeEffectsActive then goto L222 end
    v6:setFillType(self.robot.dischargeEffects, self.robot.recipe.fillType)
    v6:startEffects(self.robot.dischargeEffects)
    self.robot.dischargeEffectsActive = true
  else
    v6 = v6:getIsSamplePlaying(self.robot.samples.discharging)
    if v6 then
      v6:stopSample(self.robot.samples.discharging)
    end
    if self.robot.dischargeEffectsActive then
      v6:stopEffects(self.robot.dischargeEffects)
      self.robot.dischargeEffectsActive = false
    end
  end
  self.robot.door.isOpen = args
  if self.isServer then
    v7 = math.abs(self.spline.time - self.spline.timeSent)
    if 0.02 / self.spline.length < v7 then
      self.spline.timeSent = self.spline.time
      self:raiseDirtyFlags(self.spline.dirtyFlag)
    end
  end
end
function FeedingRobot:getFeedingFactor()
  return self.spline.feedingFactor
end
function FeedingRobot:setState(newState)
  if newState ~= self.stateIndex then
    if self.isServer then
      local v4 = FeedingRobotStateEvent.new(self, newState)
      failedReason:broadcastEvent(v4, false)
    end
    self.stateIndex = newState
    self.stateMachine[self.stateIndex]:deactivate()
    self.stateMachine[newState]:activate()
    for numChildren, v9 in ipairs(self.stateChangedListeners) do
      v9(self, newState)
    end
    if self.isClient then
      if newState == self.state.DRIVING then
        v5 = v5:getIsSamplePlaying(self.robot.samples.driving)
        if not v5 then
          v5:playSample(self.robot.samples.driving)
          return
        end
      end
      if newState ~= self.state.DRIVING then
        v5 = v5:getIsSamplePlaying(self.robot.samples.driving)
        if v5 then
          v5:stopSamples(self.robot.samples)
        end
      end
    end
  end
end
function FeedingRobot:getState()
  return self.stateIndex
end
function FeedingRobot:setFillScale(scale)
  if self.robot.fillPlane ~= nil and self.robot.fillPlane.node ~= nil then
    local v5 = math.abs(scale * self.robot.fillPlane.capacity - self.robot.fillPlane.fillLevel)
    if 10 < v5 then
      self.robot.fillPlane.fillLevel = scale * self.robot.fillPlane.capacity
      local v6, v7, numChildren = localToWorld(self.robot.fillPlane.node, 0, 0, 0)
      local v9, v10, v11 = localDirectionToWorld(self.robot.fillPlane.node, 0.5, 0, 0)
      local v12, v13, v14 = localDirectionToWorld(self.robot.fillPlane.node, 0, 0, 0.5)
      fillPlaneAdd(self.robot.fillPlane.node, scale * self.robot.fillPlane.capacity - self.robot.fillPlane.fillLevel, v6, v7, numChildren, v9, v10, v11, v12, v13, v14)
    end
    if 0 >= scale then
    end
    v5(v6, true)
  end
end
function FeedingRobot:onRobotTrigger(triggerId, otherId, onEnter, onLeave, onStay)
  if onEnter then
    self.robot.objectsInTrigger[otherId] = true
  elseif onLeave then
    self.robot.objectsInTrigger[otherId] = nil
  end
  local numChildren = next(self.robot.objectsInTrigger)
  if numChildren == nil then
  end
  v6.isBlocked = true
end
function FeedingRobot:onPlayerTrigger(triggerId, otherId, onEnter, onLeave, onStay)
  if onEnter then
    self.nodesInPlayerTrigger[otherId] = true
    return
  end
  if onLeave then
    self.nodesInPlayerTrigger[otherId] = nil
  end
end
function FeedingRobot:getIsNodeUsed(node)
  for onStay, v6 in ipairs(self.unloadingSpots) do
    if not (v6.trigger ~= nil) then
      continue
    end
    if not (v6.trigger.exactFillRootNode == node) then
      continue
    end
    return true
  end
  return false
end
function FeedingRobot:getFreeCapacity(fillTypeIndex)
  if self.fillTypeToUnloadingSpot[fillTypeIndex] ~= nil then
    return self.fillTypeToUnloadingSpot[fillTypeIndex].capacity - self.fillTypeToUnloadingSpot[fillTypeIndex].fillLevel
  end
  return 0
end
function FeedingRobot:getIsFillTypeAllowed(fillTypeIndex)
  if self.fillTypeToUnloadingSpot[fillTypeIndex] == nil then
  end
  return true
end
function FeedingRobot.getIsToolTypeAllowed(v0, triggerId)
  return true
end
function FeedingRobot:addFillLevelFromTool(farmId, deltaFillLevel, fillTypeIndex, fillPositionData, toolType, extraAttributes)
  if self.fillTypeToUnloadingSpot[fillTypeIndex] == nil then
    return 0
  end
  if v7.capacity <= v7.fillLevel then
    return 0
  end
  local numChildren = math.min(v7.capacity - v7.fillLevel, deltaFillLevel)
  if self.isServer then
    self:raiseDirtyFlags(self.dirtyFlagFillLevel)
  end
  v7.fillLevel = v7.fillLevel + deltaFillLevel
  self:updateUnloadingSpot(v7)
  return deltaFillLevel
end
function FeedingRobot:removeFillLevel(deltaFillLevel, fillTypeIndex)
  local onLeave = math.abs(deltaFillLevel)
  if self.fillTypeToUnloadingSpot[fillTypeIndex] ~= nil then
    local onStay = math.min(onLeave, self.fillTypeToUnloadingSpot[fillTypeIndex].fillLevel)
    self.fillTypeToUnloadingSpot[fillTypeIndex].fillLevel = self.fillTypeToUnloadingSpot[fillTypeIndex].fillLevel - onStay
    if self.isServer then
      self:raiseDirtyFlags(self.dirtyFlagFillLevel)
    end
    self:updateUnloadingSpot(onEnter)
  end
  local v6 = math.abs(deltaFillLevel)
  return v6 - onLeave
end
function FeedingRobot:getFillLevel(fillTypeIndex)
  if self.fillTypeToUnloadingSpot[fillTypeIndex] ~= nil then
  end
  return otherId
end
function FeedingRobot.updateUnloadingSpot(v0, triggerId)
  if triggerId.fillPlane ~= nil then
    otherId:setState(triggerId.fillLevel / triggerId.capacity)
  end
end
function FeedingRobot:createFoodMixture()
  if self.isServer then
    local onLeave = onLeave:getFreeFoodCapacity(self.robot.recipe.fillType)
    local otherId = math.min(...)
    for v6, v7 in pairs(self.robot.recipe.ingredients) do
      for v12, v13 in ipairs(v7.fillTypes) do
        local v14 = self:getFillLevel(v13)
      end
      v9 = math.min(otherId, numChildren / v7.ratio)
      if not (v9 <= 0) then
        continue
      end
      return
    end
    for v6, v7 in pairs(triggerId.ingredients) do
      for v12, v13 in ipairs(v7.fillTypes) do
        v14 = self:removeFillLevel(numChildren, v13)
        if not (numChildren - v14 > 0) then
          break
        end
      end
    end
    onStay = self:getOwnerFarmId()
    onEnter:addFood(onStay, otherId, triggerId.fillType, nil, nil, nil)
    self:start()
  end
end
function FeedingRobot:updateInfo(infoTable)
  if self.infos ~= nil then
    for onStay, v6 in ipairs(self.infos) do
      for v11, v12 in ipairs(v6.fillTypes) do
        local v13 = self:getFillLevel(v12)
      end
      numChildren = string.format("%d l", v7)
      v6.text = numChildren
      table.insert(infoTable, v6)
    end
  end
end
