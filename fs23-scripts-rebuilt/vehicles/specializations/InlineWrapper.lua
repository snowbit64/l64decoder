-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InlineWrapper = {INTERACTION_RADIUS = 5}
source("dataS/scripts/vehicles/specializations/events/InlineWrapperPushOffEvent.lua")
function InlineWrapper.prerequisitesPresent(specializations)
  return true
end
function InlineWrapper.initSpecialization()
  v0:addSpecType("inlineWrapperBaleSizeRound", "shopListAttributeIconBaleWrapperBaleSizeRound", InlineWrapper.loadSpecValueBaleSizeRound, InlineWrapper.getSpecValueBaleSizeRound, "vehicle")
  v0:addSpecType("inlineWrapperBaleSizeSquare", "shopListAttributeIconBaleWrapperBaleSizeSquare", InlineWrapper.loadSpecValueBaleSizeSquare, InlineWrapper.getSpecValueBaleSizeSquare, "vehicle")
  Vehicle.xmlSchema:setXMLSpecializationType("InlineWrapper")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.inlineWrapper.baleTrigger#node", "Bale pickup trigger")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.baleTrigger#minFoldTime", "Min. folding time for bale pickup", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.baleTrigger#maxFoldTime", "Max. folding time for bale pickup", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.inlineWrapper.wrapTrigger#node", "Wrap trigger")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.inlineWrapper.baleTypes.baleType(?)#startNode", "Start placement node for bale")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.baleTypes.baleType(?).railing#width", "Railing width to set")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.inlineWrapper.baleTypes.baleType(?).inlineBale#filename", "Path to inline bale xml file")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.baleTypes.baleType(?).size#diameter", "Bale diameter")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.baleTypes.baleType(?).size#width", "Bale width")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.baleTypes.baleType(?).size#height", "Bale height")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.baleTypes.baleType(?).size#length", "Bale length")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.inlineWrapper.railings#animation", "Railing animation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.railings#animStartX", "Railing width at start of animation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.railings#animEndX", "Railing width at end of animation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.railings#defaultX", "Default railing width", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.inlineWrapper.wrapping#startNode", "Reference node for warpping state of bale")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.inlineWrapper.steeringNodes.steeringNode(?)#node", "Steering node that is aligned to the start wrapping direction")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.inlineWrapper.wrappingNodes.wrappingNode(?)#node", "Wrapping node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.inlineWrapper.wrappingNodes.wrappingNode(?)#target", "Target node that is aliged to the bale")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.inlineWrapper.wrappingNodes.wrappingNode(?)#startTrans", "Start translation")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.inlineWrapper.animations#pusher", "Pusher animation", "pusherAnimation")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.inlineWrapper.animations#wrapping", "Wrapping animation", "wrappingAnimation")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.inlineWrapper.animations#pushOff", "Push bale off animation", "pushOffAnimation")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.inlineWrapper.pushing#brakeForce", "Brake force while pushing", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.pushing#openBrakeTime", "Pusher animation time to open brake", 0.1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper.pushing#closeBrakeTime", "Pusher animation time to close brake", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.inlineWrapper.pushing#minBaleAmount", "Min. bales wrapped to open brake", 4)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.inlineWrapper#baleMovedThreshold", "Bale moved threshold for starting wrappign animation", 0.05)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.inlineWrapper#numObjectBits", "Num bits for sending bales", 4)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.inlineWrapper.sounds", "wrap")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.inlineWrapper.sounds", "start")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.inlineWrapper.sounds", "stop")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function InlineWrapper.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "readInlineBales", InlineWrapper.readInlineBales)
  SpecializationUtil.registerFunction(vehicleType, "writeInlineBales", InlineWrapper.writeInlineBales)
  SpecializationUtil.registerFunction(vehicleType, "getIsInlineBalingAllowed", InlineWrapper.getIsInlineBalingAllowed)
  SpecializationUtil.registerFunction(vehicleType, "inlineBaleTriggerCallback", InlineWrapper.inlineBaleTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "inlineWrapTriggerCallback", InlineWrapper.inlineWrapTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "updateWrappingNodes", InlineWrapper.updateWrappingNodes)
  SpecializationUtil.registerFunction(vehicleType, "updateRoundBaleWrappingNode", InlineWrapper.updateRoundBaleWrappingNode)
  SpecializationUtil.registerFunction(vehicleType, "updateSquareBaleWrappingNode", InlineWrapper.updateSquareBaleWrappingNode)
  SpecializationUtil.registerFunction(vehicleType, "getWrapperBaleType", InlineWrapper.getWrapperBaleType)
  SpecializationUtil.registerFunction(vehicleType, "getAllowBalePushing", InlineWrapper.getAllowBalePushing)
  SpecializationUtil.registerFunction(vehicleType, "updateWrapperRailings", InlineWrapper.updateWrapperRailings)
  SpecializationUtil.registerFunction(vehicleType, "updateInlineSteeringWheels", InlineWrapper.updateInlineSteeringWheels)
  SpecializationUtil.registerFunction(vehicleType, "getCanInteract", InlineWrapper.getCanInteract)
  SpecializationUtil.registerFunction(vehicleType, "getCanPushOff", InlineWrapper.getCanPushOff)
  SpecializationUtil.registerFunction(vehicleType, "setCurrentInlineBale", InlineWrapper.setCurrentInlineBale)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentInlineBale", InlineWrapper.getCurrentInlineBale)
  SpecializationUtil.registerFunction(vehicleType, "pushOffInlineBale", InlineWrapper.pushOffInlineBale)
end
function InlineWrapper.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", InlineWrapper.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsActive", InlineWrapper.getIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getBrakeForce", InlineWrapper.getBrakeForce)
end
function InlineWrapper.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", InlineWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onEnterVehicle", InlineWrapper)
end
function InlineWrapper:onLoad(savegame)
  local v3 = v3:getValue("vehicle.inlineWrapper" .. ".baleTrigger#node", nil, self.components, self.i3dMappings)
  self.spec_inlineWrapper.triggerNode = v3
  if self.spec_inlineWrapper.triggerNode ~= nil then
    addTrigger(self.spec_inlineWrapper.triggerNode, "inlineBaleTriggerCallback", self)
  end
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".wrapTrigger#node", nil, self.components, self.i3dMappings)
  v2.wrapTriggerNode = v3
  if v2.wrapTriggerNode ~= nil then
    addTrigger(v2.wrapTriggerNode, "inlineWrapTriggerCallback", self)
  end
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".baleTrigger#minFoldTime", 0)
  v2.minFoldTime = v3
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".baleTrigger#maxFoldTime", 1)
  v2.maxFoldTime = v3
  v2.baleTypes = {}
  v3:iterate("vehicle.inlineWrapper" .. ".baleTypes.baleType", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#startNode", nil, u0.components, u0.i3dMappings)
    if {startNode = v3}.startNode ~= nil then
      v3 = v3:getValue(savegame .. ".railing#width")
      local v4 = v4:getValue(savegame .. ".inlineBale#filename")
      v3 = Utils.getFilename(v4, u0.baseDirectory)
      if {startNode = v3, railingWidth = v3, inlineBaleFilename = v3}.inlineBaleFilename ~= nil then
        v4 = v4:getValue(savegame .. ".size#diameter", 0)
        v3 = MathUtil.round(v4, 2)
        v4 = v4:getValue(savegame .. ".size#width", 0)
        v3 = MathUtil.round(v4, 2)
        if {startNode = v3, railingWidth = v3, inlineBaleFilename = v3, diameter = v3, width = v3}.diameter == 0 then
        end
        v2.isRoundBale = true
        if not v2.isRoundBale then
          v4 = v4:getValue(savegame .. ".size#height", 0)
          v3 = MathUtil.round(v4, 2)
          v2.height = v3
          v4 = v4:getValue(savegame .. ".size#length", 0)
          v3 = MathUtil.round(v4, 2)
          v2.length = v3
        end
        v2.index = #u1.baleTypes + 1
        table.insert(u1.baleTypes, v2)
        return
      end
      Logging.xmlError(u0.xmlFile, "Failed to load bale type. Missing inline bale filename! '%s'", savegame)
      return
    end
    Logging.xmlError(u0.xmlFile, "Failed to load bale type. Missing start node! '%s'", savegame)
  end)
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".railings#animation")
  v2.railingsAnimation = v3
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".railings#animStartX")
  v2.railingsAnimationStartX = v3
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".railings#animEndX")
  v2.railingsAnimationEndX = v3
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".railings#defaultX", 1)
  v2.railingStartX = v3
  v2.currentPosition = v2.railingStartX + 0.01
  v2.targetPosition = v2.railingStartX + 0.01
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".wrapping#startNode", nil, self.components, self.i3dMappings)
  v2.wrappingStartNode = v3
  v2.steeringNodes = {}
  v3:iterate("vehicle.inlineWrapper" .. ".steeringNodes.steeringNode", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    if {node = v3}.node ~= nil then
      local v4 = getRotation({node = v3}.node)
      table.insert(u1.steeringNodes, {node = v3, startRot = {}})
    end
  end)
  v2.wrappingNodes = {}
  v3:iterate("vehicle.inlineWrapper" .. ".wrappingNodes.wrappingNode", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    v3 = v3:getValue(savegame .. "#target", nil, u0.components, u0.i3dMappings)
    if {node = v3, target = v3}.node ~= nil and {node = v3, target = v3}.target ~= nil then
      local v7 = getTranslation({node = v3, target = v3}.target)
      v3 = v3:getValue(savegame .. "#startTrans", {}, true)
      setTranslation({node = v3, target = v3, startTrans = v3}.target, {node = v3, target = v3, startTrans = v3}.startTrans[1], {node = v3, target = v3, startTrans = v3}.startTrans[2], {node = v3, target = v3, startTrans = v3}.startTrans[3])
      table.insert(u1.wrappingNodes, {node = v3, target = v3, startTrans = v3})
    end
  end)
  v2.animations = {}
  local v4 = v4:getValue("vehicle.inlineWrapper" .. ".animations#pusher", "pusherAnimation")
  v2.animations.pusher = v4
  v4 = v4:getValue("vehicle.inlineWrapper" .. ".animations#wrapping", "wrappingAnimation")
  v2.animations.wrapping = v4
  v4 = v4:getValue("vehicle.inlineWrapper" .. ".animations#pushOff", "pushOffAnimation")
  v2.animations.pushOff = v4
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".pushing#brakeForce", 0)
  v2.pushingBrakeForce = v3
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".pushing#openBrakeTime", 0.1)
  v2.pushingOpenBrakeTime = v3
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".pushing#closeBrakeTime", 0.5)
  v2.pushingCloseBrakeTime = v3
  v3 = v3:getValue("vehicle.inlineWrapper" .. ".pushing#minBaleAmount", 4)
  v2.pushingMinBaleAmount = v3
  v3 = v3:getValue("vehicle.inlineWrapper" .. "#baleMovedThreshold", 0.05)
  v2.baleMovedThreshold = v3
  v2.pusherAnimationDirty = false
  v2.pendingSingleBales = {}
  v2.enteredInlineBales = {}
  v2.enteredBalesToWrap = {}
  v3 = v3:getValue("vehicle.inlineWrapper#numObjectBits", 4)
  v2.numObjectBits = v3
  v3 = self:getNextDirtyFlag()
  v2.inlineBalesDirtyFlag = v3
  v2.currentLineDirection = nil
  v2.lineDirection = nil
  v3 = InlineWrapperActivatable.new(self)
  v2.activatable = v3
  if self.isClient then
    v2.samples = {}
    v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.inlineWrapper" .. ".sounds", "wrap", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.wrap = v4
    v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.inlineWrapper" .. ".sounds", "start", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.start = v4
    v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.inlineWrapper" .. ".sounds", "stop", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.stop = v4
  end
end
function InlineWrapper:onPostLoad(savegame)
  if self.spec_inlineWrapper.railingsAnimation ~= nil then
    self:setAnimationTime(self.spec_inlineWrapper.railingsAnimation, 1, true)
  end
  if self.configurations.wrappingColor ~= nil then
    self:applyBaseMaterialConfiguration(self.xmlFile, "wrappingColor", self.configurations.wrappingColor)
  end
end
function InlineWrapper:onDelete()
  if self.spec_inlineWrapper.triggerNode ~= nil then
    removeTrigger(self.spec_inlineWrapper.triggerNode)
  end
  if v1.wrapTriggerNode ~= nil then
    removeTrigger(v1.wrapTriggerNode)
  end
  inlineBale:deleteSamples(v1.samples)
  inlineBale:removeActivatable(v1.activatable)
  local inlineBale = self:getCurrentInlineBale()
  if inlineBale ~= nil then
    inlineBale:wakeUp(50)
    inlineBale:setWrappingState(1)
    inlineBale:setCurrentWrapperInfo(nil, nil)
    self:setCurrentInlineBale(nil)
  end
end
function InlineWrapper:onReadStream(streamId, connection)
  self:readInlineBales("pendingSingleBales", streamId, connection)
  self:readInlineBales("enteredInlineBales", streamId, connection)
  self:readInlineBales("enteredBalesToWrap", streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    v3 = NetworkUtil.readNodeObjectId(streamId)
    self:setCurrentInlineBale(v3, true)
  else
    self:setCurrentInlineBale(nil, true)
  end
  v4:addActivatable(self.spec_inlineWrapper.activatable)
end
function InlineWrapper:onWriteStream(streamId, connection)
  self:writeInlineBales("pendingSingleBales", streamId, connection)
  self:writeInlineBales("enteredInlineBales", streamId, connection)
  self:writeInlineBales("enteredBalesToWrap", streamId, connection)
  local currentInlineBale = self:getCurrentInlineBale()
  if currentInlineBale == nil then
  end
  local v4 = v4(v5, true)
  if v4 then
    NetworkUtil.writeNodeObject(streamId, currentInlineBale)
  end
end
function InlineWrapper:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      self:readInlineBales("pendingSingleBales", streamId, connection)
      self:readInlineBales("enteredInlineBales", streamId, connection)
      self:readInlineBales("enteredBalesToWrap", streamId, connection)
      v4 = streamReadBool(streamId)
      if v4 then
        v4 = NetworkUtil.readNodeObjectId(streamId)
        self:setCurrentInlineBale(v4, true)
      else
        self:setCurrentInlineBale(nil, true)
      end
      v5:addActivatable(self.spec_inlineWrapper.activatable)
    end
  end
end
function InlineWrapper:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_inlineWrapper.inlineBalesDirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      self:writeInlineBales("pendingSingleBales", streamId, connection)
      self:writeInlineBales("enteredInlineBales", streamId, connection)
      self:writeInlineBales("enteredBalesToWrap", streamId, connection)
      v5 = self:getCurrentInlineBale()
      if v5 == nil then
      end
      local v6 = v6(v7, true)
      if v6 then
        NetworkUtil.writeNodeObject(streamId, v5)
      end
    end
  end
end
function InlineWrapper:readInlineBales(name, streamId, connection)
  local v5 = streamReadUIntN(streamId, self.spec_inlineWrapper.numObjectBits)
  self.spec_inlineWrapper[name] = {}
  -- TODO: structure LOP_FORNPREP (pc 14, target 22)
  local object = NetworkUtil.readNodeObjectId(streamId)
  self.spec_inlineWrapper[name][object] = object
  -- TODO: structure LOP_FORNLOOP (pc 21, target 15)
end
function InlineWrapper:writeInlineBales(name, streamId, connection)
  local v5 = table.size(self.spec_inlineWrapper[name])
  streamWriteUIntN(streamId, v5, self.spec_inlineWrapper.numObjectBits)
  for v10, v11 in pairs(self.spec_inlineWrapper[name]) do
    if v6 + 1 <= v5 then
      NetworkUtil.writeNodeObjectId(streamId, v10)
    else
      Logging.xmlWarning(self.xmlFile, "Not enough bits to send all inline objects. Please increase '%s'", "vehicle.inlineWrapper#numObjectBits")
    end
  end
end
function InlineWrapper:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v6 = self:getIsAnimationPlaying(self.spec_inlineWrapper.animations.wrapping)
  if v6 then
    self:updateWrappingNodes()
  end
end
function InlineWrapper:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    local v6 = next(self.spec_inlineWrapper.pendingSingleBales)
    local v7 = NetworkUtil.getObject(v6)
    if v7 ~= nil then
      local v8 = self:getIsInlineBalingAllowed()
      if v8 then
        v8 = self:getWrapperBaleType(v7)
        local v9 = next(self.spec_inlineWrapper.enteredInlineBales)
        local v10 = NetworkUtil.getObject(v9)
        if v10 == nil then
          local v13 = InlineBale.new(self.isServer, self.isClient)
          v13 = v13:loadFromConfigXML(v8.inlineBaleFilename)
          if v13 then
            local v15 = self:getActiveFarm()
            v13:setOwnerFarmId(v15, true)
            v13:setCurrentWrapperInfo(self, self.spec_inlineWrapper.wrappingStartNode)
            v13:register()
            v13 = v13:addBale(v7, v8)
            -- goto L106  (LOP_JUMP +32)
          end
          v11:delete()
        else
          v13 = v10:isa(InlineBaleSingle)
          if v13 then
            v13 = v10:getConnectedInlineBale()
            if v13 ~= nil then
              v13 = v13:addBale(v7, v8)
              if v13 then
                v13 = self:getCurrentInlineBale()
                v13:setCurrentWrapperInfo(self, self.spec_inlineWrapper.wrappingStartNode)
              end
            end
          end
        end
        if v12 then
          v5.pendingSingleBales[v6] = nil
          v5.enteredInlineBales[v6] = v6
          v5.pusherAnimationDirty = true
          self:setCurrentInlineBale(v11)
          v13:addActivatable(v5.activatable)
          v15 = self:getOwnerFarmId()
          local v13, v14 = v13:updateFarmStats(v15, "wrappedBales", 1)
          if v13 ~= nil then
            v15:tryUnlock("WrappedBales", v13)
          end
          self:raiseDirtyFlags(v5.inlineBalesDirtyFlag)
        end
      end
    end
  end
  v6 = next(v5.enteredInlineBales)
  v7 = NetworkUtil.getObject(v6)
  if v7 ~= nil then
    v8 = self:getCurrentInlineBale()
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L207
    v8 = v7:isa(InlineBaleSingle)
    -- if not v8 then goto L207 end
    v8 = v7:getConnectedInlineBale()
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L207
    self:setCurrentInlineBale(v8)
    v9:addActivatable(v5.activatable)
    self:updateWrappingNodes()
    v9 = self:getCurrentInlineBale()
    v9:setCurrentWrapperInfo(self, v5.wrappingStartNode)
  else
    self:setCurrentInlineBale(nil)
  end
  v9 = next(v5.enteredInlineBales)
  if v9 == nil then
    -- if not v5.pushOffStarted then goto L224 end
  end
  v9 = self:getAttacherVehicle()
  if v9 ~= nil then
  end
  if true then
    v10 = self:getIsControlled()
  end
  if v5.lineDirection == nil then
    -- if not v8 then goto L255 end
    local v10, v11, v12 = localDirectionToWorld(self.components[1].node, 0, 0, -1)
    v5.lineDirection = {v10, v12}
  elseif v5.lineDirection ~= nil and not v8 then
    v5.lineDirection = nil
  end
  if not v9 then
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L279
    v5.currentLineDirection = nil
    self:updateInlineSteeringWheels()
  else
    v5.currentLineDirection = v5.lineDirection
  end
  if v5.currentLineDirection ~= nil then
    self:updateInlineSteeringWheels(v5.currentLineDirection[1], v5.currentLineDirection[2])
  end
  if self.isServer then
    v5.releaseBrake = false
    v10 = self:getCurrentInlineBale()
    if v5.pusherAnimationDirty then
      for v15, v16 in pairs(v5.pendingSingleBales) do
        local v19 = NetworkUtil.getObject(v16)
        local v17 = self:getAllowBalePushing(...)
        if not not v17 then
          continue
        end
        break
      end
      if v11 then
        for v15, v16 in pairs(v5.enteredInlineBales) do
          v19 = NetworkUtil.getObject(v16)
          v17 = self:getAllowBalePushing(...)
          if not not v17 then
            continue
          end
          break
        end
      end
      if v11 and v10 ~= nil then
        v12 = v10:getPendingBale()
        v13 = NetworkUtil.getObjectId(v12)
        v14 = self:getWrapperBaleType(v12)
        local v18 = ConfigurationUtil.getColorByConfigId(self, "wrappingColor", self.configurations.wrappingColor)
        v15, v16 = v10:replacePendingBale(...)
        if v15 then
          v5.enteredInlineBales[v13] = nil
          v5.enteredInlineBales[v16] = v16
        end
        self:playAnimation(v5.animations.pusher, 1, 0)
        v5.pusherAnimationDirty = false
        v10:connectPendingBale()
        self:raiseDirtyFlags(v5.inlineBalesDirtyFlag)
      end
      self:raiseActive()
    end
    v11 = self:getAttacherVehicle()
    if v11 == nil then
      if v10 ~= nil then
        v12 = v10:getNumberOfBales()
        if v12 < v5.pushingMinBaleAmount then
        end
      end
      v12 = self:getAnimationTime(v5.animations.pusher)
      v13 = self:getIsAnimationPlaying(v5.animations.pusher)
      if v13 and v5.pushingOpenBrakeTime < v12 and v12 >= v5.pushingCloseBrakeTime then
      end
      v14 = self:getAnimationSpeed(v5.animations.pushOff)
      v15 = self:getIsAnimationPlaying(v5.animations.pushOff)
      if v15 and 0 >= v14 then
      end
      if v11 then
        v5.releaseBrake = v13 or v15
      end
    end
  end
  for v14, v15 in pairs(v5.enteredBalesToWrap) do
    v16 = NetworkUtil.getObject(v15)
    if not (v16 ~= nil) then
      continue
    end
    v17 = entityExists(v16.nodeId)
    if not v17 then
      continue
    end
    v17, v18, v19 = localToLocal(v16.nodeId, self.components[1].node, 0, 0, 0)
    if v16.lastWrapTranslation ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R20 aux=0x0 -> L551
      local v22 = math.abs(v16.lastWrapTranslation[1] - v17)
      local v23 = math.abs(v16.lastWrapTranslation[2] - v18)
      v22 = math.abs(v16.lastWrapTranslation[3] - v19)
      -- if v5.baleMovedThreshold >= v22 + v23 + v22 then goto L565 end
      v16.lastWrapMoveTime = g_currentMission.time
      v16.lastWrapTranslation = {v17, v18, v19}
    else
      v16.lastWrapMoveTime = -math.huge
      v16.lastWrapTranslation = {v17, v18, v19}
    end
    if g_currentMission.time < v16.lastWrapMoveTime + 1500 then
      break
    end
    self:raiseActive()
  end
  if v10 then
    v11 = self:getIsAnimationPlaying(v5.animations.wrapping)
    if not v11 then
      v15 = self:getAnimationTime(v5.animations.wrapping)
      self:playAnimation(v5.animations.wrapping, 1, v15, true)
    end
    -- if not v0.isClient then goto L709 end
    v11 = v11:getIsSamplePlaying(v5.samples.start)
    -- if v11 then goto L709 end
    v11 = v11:getIsSamplePlaying(v5.samples.wrap)
    -- if v11 then goto L709 end
    v11:playSample(v5.samples.start)
    v11:playSample(v5.samples.wrap, 0, v5.samples.start)
  else
    self:stopAnimation(v5.animations.wrapping, true)
    if self.isClient then
      v11 = v11:getIsSamplePlaying(v5.samples.start)
      if not v11 then
        v11 = v11:getIsSamplePlaying(v5.samples.wrap)
        -- if not v11 then goto L709 end
      end
      v11:stopSample(v5.samples.start)
      v11:stopSample(v5.samples.wrap)
      v11:playSample(v5.samples.stop)
    end
  end
  v11 = next(v5.pendingSingleBales)
  if not v11 then
    v11 = next(v5.enteredInlineBales)
  end
  v12 = NetworkUtil.getObject(v11)
  if v12 ~= nil then
    v12 = self:getWrapperBaleType(v12)
    v13 = self:getCurrentInlineBale()
    if v13 ~= nil then
      v14 = v13:getIsBaleAllowed(v12, v12)
      if not v14 then
      end
    end
    -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L762
    v5.targetPosition = v12.railingWidth
    self:updateWrapperRailings(v5.targetPosition, dt)
  else
    self:updateWrapperRailings(v5.railingStartX, dt)
  end
  if self.isServer and v5.pushOffStarted ~= nil and v5.pushOffStarted then
    v12 = self:getIsAnimationPlaying(v5.animations.pushOff)
    if not v12 then
      self:playAnimation(v5.animations.pushOff, -1, 1)
      v5.pushOffStarted = nil
    end
  end
  if self.isClient and v5.actionEvents[InputAction.ACTIVATE_OBJECT] ~= nil then
    v16 = self:getCanPushOff()
    v13:setActionEventActive(...)
  end
end
function InlineWrapper:updateWrappingNodes()
  local isActiveForInput = self:getCurrentInlineBale()
  if isActiveForInput ~= nil then
    for v7, v8 in ipairs(self.spec_inlineWrapper.wrappingNodes) do
      local v9, v10, v11 = getWorldTranslation(v8.node)
      for v17, v18 in pairs(isActiveForInputIgnoreSelection) do
        local v19 = NetworkUtil.getObject(v18)
        if not (v19 ~= nil) then
          continue
        end
        local v20 = isActiveForInput:getPendingBale()
        if not (v19 ~= v20) then
          continue
        end
        local v20, v21, v22 = worldToLocal(v19.nodeId, v9, v10, v11)
        if v19.isRoundbale then
          -- if -v19.width / 2 > v22 then goto L123 end
          local v29, v30, v31 = localToWorld(v19.nodeId, 0, 0, v19.width / 2)
          v29, v30, v31 = localToWorld(v19.nodeId, 0, 0, -v19.width / 2)
        elseif -v19.width / 2 <= v20 then
          v29, v30, v31 = localToWorld(v19.nodeId, v19.width / 2, 0, 0)
          v29, v30, v31 = localToWorld(v19.nodeId, -v19.width / 2, 0, 0)
        end
        if not (v23 ~= nil) then
          continue
        end
        v30 = MathUtil.vector3Length(v9 - v23, v10 - v24, v11 - v25)
        v31 = MathUtil.vector3Length(v9 - v26, v10 - v27, v11 - v28)
        v29 = math.min(...)
        if not (v29 < v12) then
          continue
        end
      end
      if v13 ~= nil then
        if v13.isRoundbale then
          v17, v18, v19 = self:updateRoundBaleWrappingNode(v13, v8.node, v9, v10, v11)
        else
          v17, v18, v19 = self:updateSquareBaleWrappingNode(v13, v8.node, v9, v10, v11)
        end
        if v14 ~= nil then
          v18 = getParent(v8.target)
          v17, v18, v19 = worldToLocal(v18, v14, v15, v16)
          setTranslation(v8.target, v17, v18, v19)
          continue
        end
        setTranslation(v8.target, v8.startTrans[1], v8.startTrans[2], v8.startTrans[3])
      else
        setTranslation(v8.target, v8.startTrans[1], v8.startTrans[2], v8.startTrans[3])
      end
    end
    dt.resetWrappingNodes = true
    return
  end
  if dt.resetWrappingNodes then
    for v6, v7 in ipairs(dt.wrappingNodes) do
      setTranslation(v7.target, v7.startTrans[1], v7.startTrans[2], v7.startTrans[3])
    end
    dt.resetWrappingNodes = nil
  end
end
function InlineWrapper.updateRoundBaleWrappingNode(v0, dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected, v5)
  local v8, v9, v10 = worldToLocal(dt.nodeId, isActiveForInputIgnoreSelection, isSelected, v5)
  local v11 = MathUtil.vector3Length(v8, v9, 0)
  -- TODO: structure LOP_FORNPREP (pc 27, target 105)
  local v21 = math.cos(1 / 32 * 2 * math.pi)
  local v22 = math.sin(1 / 32 * 2 * math.pi)
  v22 = MathUtil.vector2Length(v21 * (dt.diameter / 2 + 0.01) - v8, v22 * (dt.diameter / 2 + 0.01) - v9)
  if v22 < v11 then
    local v23, v24, v25, v26, v27 = MathUtil.getCircleLineIntersection(0, 0, dt.diameter / 2, v8, v9, v21 * (dt.diameter / 2 + 0.01), v22 * (dt.diameter / 2 + 0.01))
    if not v23 then
      local v28, v29, v30 = localToWorld(dt.nodeId, v21 * (dt.diameter / 2 + 0.01), v22 * (dt.diameter / 2 + 0.01), 0)
      local v31, v32, v33 = worldToLocal(isActiveForInput, v28, v29, v30)
      if -math.huge < v32 then
        local v37 = math.cos(1 / 32 * 2 * math.pi)
        local v38 = math.sin(1 / 32 * 2 * math.pi)
        local v34, v35, v36 = localToWorld(dt.nodeId, v37 * (dt.diameter / 2 + -0.03), v38 * (dt.diameter / 2 + -0.03), v10)
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 104, target 28)
  return v13, v14, v15
end
function InlineWrapper.updateSquareBaleWrappingNode(v0, dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected, v5)
  local v13, v14, v15 = worldToLocal(dt.nodeId, isActiveForInputIgnoreSelection, isSelected, v5)
  if dt.wrappingEdges == nil then
    dt.wrappingEdges = {[1] = {0, dt.height / 2, -(dt.length / 2)}, [2] = {0, -(dt.height / 2), -(dt.length / 2)}, [3] = {0, -(dt.height / 2), dt.length / 2}, [4] = {0, dt.height / 2, dt.length / 2}}
  end
  for v19, v20 in ipairs(dt.wrappingEdges) do
    local v24 = MathUtil.sign(v20[2])
    local v25 = MathUtil.sign(v20[3])
    -- TODO: structure LOP_FORNPREP (pc 92, target 126)
    if 1 <= 3 then
      -- if 1 + 1 then goto L99 end
    end
    if not v23 then
      local v28 = MathUtil.getLineBoundingVolumeIntersect(v21, v22, v14, v15, dt.wrappingEdges[v26][2], dt.wrappingEdges[v26][3], dt.wrappingEdges[1][2], dt.wrappingEdges[1][3])
    end
    -- TODO: structure LOP_FORNLOOP (pc 125, target 93)
    if not not v28 then
      continue
    end
    local v24, v25, v26 = localToWorld(v6, v13, v21, v22)
    local v27, v28, v29 = worldToLocal(isActiveForInput, v24, v25, v26)
    local v30 = MathUtil.getYRotationFromDirection(v28, v29)
    if v30 < 0 then
    end
    if not (v30 < v7) then
      continue
    end
    local v37 = MathUtil.sign(v20[2])
    local v38 = MathUtil.sign(v20[3])
    local v31, v32, v33 = localToWorld(v6, v13, v20[2] + v37 * -0.05, v20[3] + v38 * -0.05)
  end
  return v8, v9, v10
end
function InlineWrapper:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_inlineWrapper.actionEvents)
    if isActiveForInput then
      local isSelected, v5 = self:addActionEvent(self.spec_inlineWrapper.actionEvents, InputAction.ACTIVATE_OBJECT, self, InlineWrapper.pushOffInlineBaleEvent, false, false, true, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
      local v9 = self:getCanPushOff()
      v6:setActionEventActive(...)
      v6:setActionEventTextVisibility(v5, true)
      v9 = v9:getText("action_baleloaderUnload")
      v6:setActionEventText(...)
    end
  end
end
function InlineWrapper:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  local v5 = next(self.spec_inlineWrapper.enteredInlineBales)
  if v5 ~= nil then
    return false
  end
  v5 = superFunc(self, direction, onAiTurnOn)
  return v5
end
function InlineWrapper:getIsActive(superFunc)
  if not self.spec_inlineWrapper.releaseBrake then
    -- if v0.spec_inlineWrapper.releaseBrake == v0.spec_inlineWrapper.releaseBrakeSet then goto L13 end
  end
  return true
  return superFunc(self)
end
function InlineWrapper:getBrakeForce(superFunc)
  if self.spec_inlineWrapper.releaseBrake then
    self.spec_inlineWrapper.releaseBrakeSet = self.spec_inlineWrapper.releaseBrake
    return 0
  end
  return superFunc(self)
end
function InlineWrapper:getIsInlineBalingAllowed()
  if self.getFoldAnimTime ~= nil then
    local foldTime = self:getFoldAnimTime()
    if foldTime >= self.spec_inlineWrapper.minFoldTime then
      -- if v0.spec_inlineWrapper.maxFoldTime >= v2 then goto L19 end
    end
    return false
  end
  foldTime = self:getIsAnimationPlaying(dt.animations.pusher)
  if foldTime then
    return false
  end
  foldTime = self:getIsAnimationPlaying(dt.animations.pushOff)
  if not foldTime then
    foldTime = self:getAnimationTime(dt.animations.pushOff)
    -- if 0 >= v2 then goto L49 end
  end
  return false
  return true
end
function InlineWrapper:inlineBaleTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if self.isServer then
    local v7 = v7:getNodeObject(otherActorId)
    if v7 ~= nil then
      local v8 = v7:isa(Bale)
      if v8 then
        v8 = NetworkUtil.getObjectId(v7)
        if onEnter then
          local v10 = v7:isa(InlineBaleSingle)
          if not v10 then
            v10 = self:getWrapperBaleType(v7)
            -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L122
            self.spec_inlineWrapper.pendingSingleBales[v8] = v8
            -- goto L122  (LOP_JUMP +82)
          end
          v9.enteredInlineBales[v8] = v8
          v10 = v7:getConnectedInlineBale()
          if v10 ~= nil then
            v10:setCurrentWrapperInfo(self, v9.wrappingStartNode)
            -- goto L122  (LOP_JUMP +67)
          end
          v7.inlineWrapperToAdd = {wrapper = self, wrappingNode = v9.wrappingStartNode}
        elseif onLeave then
          self.spec_inlineWrapper.pendingSingleBales[v8] = nil
          self.spec_inlineWrapper.enteredInlineBales[v8] = nil
          v10 = v7:isa(InlineBaleSingle)
          if v10 then
            v10 = v7:getConnectedInlineBale()
            if v10 ~= nil then
              local v11 = v10:getBales()
              for v16, v17 in ipairs(v11) do
                local v18 = NetworkUtil.getObjectId(v17)
                if v9.pendingSingleBales[v18] == nil and not (v9.enteredInlineBales[v18] ~= nil) then
                  continue
                end
                break
              end
              if v12 then
                v10:setCurrentWrapperInfo(nil, nil)
                self:setCurrentInlineBale(nil)
              end
            end
          end
        end
        self:raiseDirtyFlags(v9.inlineBalesDirtyFlag)
      end
    end
  end
end
function InlineWrapper:inlineWrapTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if self.isServer then
    local v7 = v7:getNodeObject(otherActorId)
    if v7 ~= nil then
      local v8 = v7:isa(Bale)
      if v8 then
        local v9 = NetworkUtil.getObjectId(v7)
        if onEnter then
          self.spec_inlineWrapper.enteredBalesToWrap[v9] = v9
        elseif onLeave then
          self.spec_inlineWrapper.enteredBalesToWrap[v9] = nil
        end
        self:raiseActive()
        self:raiseDirtyFlags(v8.inlineBalesDirtyFlag)
      end
    end
  end
end
function InlineWrapper:getWrapperBaleType(bale)
  for otherShapeId, v7 in pairs(self.spec_inlineWrapper.baleTypes) do
    local v8 = bale:getSupportsWrapping()
    if not v8 then
      continue
    end
    if bale.isRoundbale then
      if not v7.isRoundBale then
        continue
      end
      if not (bale.diameter == v7.diameter) then
        continue
      end
      if not (bale.width == v7.width) then
        continue
      end
      return v7
    else
      if not not v7.isRoundBale then
        continue
      end
      if not (bale.width == v7.width) then
        continue
      end
      if not (bale.height == v7.height) then
        continue
      end
      if not (bale.length == v7.length) then
        continue
      end
      return v7
    end
  end
  return nil
end
function InlineWrapper.getAllowBalePushing(InlineWrapperActivatable_mt, triggerId)
  if triggerId.dynamicMountJointIndex ~= nil then
    return false
  end
  return true
end
function InlineWrapper:updateWrapperRailings(targetPosition, dt)
  if targetPosition ~= self.spec_inlineWrapper.currentPosition then
    local onLeave = MathUtil.sign(targetPosition - self.spec_inlineWrapper.currentPosition)
    self.spec_inlineWrapper.currentPosition = self.spec_inlineWrapper.currentPosition + 0.0001 * dt * onLeave
    if 0 < onLeave then
      local onStay = math.min(self.spec_inlineWrapper.currentPosition, targetPosition)
      self.spec_inlineWrapper.currentPosition = onStay
    else
      onStay = math.max(self.spec_inlineWrapper.currentPosition, targetPosition)
      self.spec_inlineWrapper.currentPosition = onStay
    end
    self:setAnimationTime(onEnter.railingsAnimation, (onEnter.currentPosition - onEnter.railingsAnimationStartX) / (onEnter.railingsAnimationEndX - onEnter.railingsAnimationStartX), true)
  end
end
function InlineWrapper:updateInlineSteeringWheels(dirX, dirZ)
  for v7, v8 in ipairs(self.spec_inlineWrapper.steeringNodes) do
    if dirX ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L24
    end
    local v11 = unpack(v8.startRot)
    setRotation(...)
    -- goto L73  (LOP_JUMP +49)
    local v9, v10, v11 = getWorldTranslation(v8.node)
    local v13 = getParent(v8.node)
    local v12, v13, v14 = worldToLocal(v13, v9 + dirX * 10, v10, v11 + dirZ * 10)
    local v15, v16, v17 = MathUtil.vector3Normalize(v12, 0, v14)
    v16 = getParent(v8.node)
    v15, v16, v17 = localDirectionToWorld(v16, 0, 1, 0)
    setDirection(v8.node, v15, 0, v17, v15, v16, v17)
    if not (self.setMovingToolDirty ~= nil) then
      continue
    end
    self:setMovingToolDirty(v8.node)
  end
end
function InlineWrapper:onLeaveVehicle()
  self.rotatedTime = 0
end
function InlineWrapper:onEnterVehicle()
  for onStay, otherShapeId in ipairs(self.spec_inlineWrapper.steeringNodes) do
    local v9 = unpack(otherShapeId.startRot)
    setRotation(...)
    if not (self.setMovingToolDirty ~= nil) then
      continue
    end
    self:setMovingToolDirty(otherShapeId.node)
  end
end
function InlineWrapper:getCanInteract()
  if not g_currentMission.controlPlayer then
    return false
  end
  local triggerId = triggerId:canPlayerAccess(self)
  if not triggerId then
    return false
  end
  local triggerId, otherActorId, onEnter = getWorldTranslation(g_currentMission.player.rootNode)
  local onLeave, onStay, otherShapeId = getWorldTranslation(self.components[1].node)
  local v7 = MathUtil.vector3Length(triggerId - onLeave, otherActorId - onStay, onEnter - otherShapeId)
  if v7 >= InlineWrapper.INTERACTION_RADIUS then
  end
  return true
end
function InlineWrapper:getCanPushOff()
  local currentInlineBale = self:getCurrentInlineBale()
  if currentInlineBale == nil then
    return false
  end
  local onEnter = currentInlineBale:getPendingBale()
  if onEnter ~= nil then
    return false
  end
  onEnter = self:getIsAnimationPlaying(triggerId.animations.pusher)
  if onEnter then
    return false
  end
  onEnter = self:getIsAnimationPlaying(triggerId.animations.pushOff)
  if onEnter then
    return false
  end
  return true
end
function InlineWrapper:setCurrentInlineBale(inlineBale, isClient)
  if self.isServer then
    local newInlineBale = NetworkUtil.getObjectId(inlineBale)
    if newInlineBale ~= self.spec_inlineWrapper.currentInlineBale then
      self.spec_inlineWrapper.currentInlineBale = newInlineBale
      self:raiseDirtyFlags(self.spec_inlineWrapper.inlineBalesDirtyFlag)
    end
  end
  if isClient then
    onEnter.currentInlineBale = inlineBale
  end
end
function InlineWrapper:getCurrentInlineBale()
  return NetworkUtil.getObject(self.spec_inlineWrapper.currentInlineBale)
end
function InlineWrapper:pushOffInlineBaleEvent(actionName, inputValue, callbackState, isAnalog)
  if inputValue == 1 then
    if g_server ~= nil then
      self:pushOffInlineBale()
      return
    end
    local onStay = onStay:getServerConnection()
    local v7 = InlineWrapperPushOffEvent.new(self)
    onStay:sendEvent(...)
  end
end
function InlineWrapper:pushOffInlineBale()
  local otherActorId = self:getIsAnimationPlaying(self.spec_inlineWrapper.animations.pushOff)
  if not otherActorId then
    self:playAnimation(self.spec_inlineWrapper.animations.pushOff, 1)
    self.spec_inlineWrapper.pushOffStarted = true
  end
end
function InlineWrapper:loadSpecValueBaleSize(triggerId, otherActorId, onEnter)
  local onLeave = self:getRootName()
  self:iterate(onLeave .. ".inlineWrapper.baleTypes.baleType", function(self, triggerId)
    local onEnter = onEnter:getValue(triggerId .. ".size#diameter", 0)
    local otherActorId = MathUtil.round(onEnter, 2)
    if u1 and otherActorId ~= 0 then
      local onLeave = math.min(u2.minDiameter, otherActorId)
      u2.minDiameter = onLeave
      onLeave = math.max(u2.maxDiameter, otherActorId)
      u2.maxDiameter = onLeave
    end
    onLeave = onLeave:getValue(triggerId .. ".size#length", 0)
    onEnter = MathUtil.round(onLeave, 2)
    if not u1 and onEnter ~= 0 then
      local onStay = math.min(u2.minLength, onEnter)
      u2.minLength = onStay
      onStay = math.max(u2.maxLength, onEnter)
      u2.maxLength = onStay
    end
  end)
  if {minDiameter = math.huge, maxDiameter = -math.huge, minLength = math.huge, maxLength = -math.huge}.minDiameter == math.huge then
    -- if {minDiameter = math.huge, maxDiameter = -math.huge, minLength = math.huge, maxLength = -math.huge}.minLength == math.huge then goto L46 end
  end
  return onStay
end
function InlineWrapper:getSpecValueBaleSize(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if otherShapeId then
    -- if v0.specs.inlineWrapperBaleSizeRound then goto L10 end
  end
  if self.specs.inlineWrapperBaleSizeSquare ~= nil then
    if otherShapeId then
      -- if v0.specs.inlineWrapperBaleSizeSquare.minDiameter then goto L18 end
    end
    if otherShapeId then
      -- if v7.maxDiameter then goto L24 end
    end
    if onLeave ~= nil then
      -- if v4 then goto L54 end
    end
    local v10 = v10:getText("unit_cmShort")
    if v9 ~= v8 then
      return string.format("%d%s-%d%s", v8 * 100, v10, v9 * 100, v10)
    end
    v12 = string.format("%d%s", v8 * 100, v10)
    return v12
    if onStay == true and v9 ~= v8 then
      v12 = v12:getText("unit_cmShort")
      return v8 * 100
    end
    local v11 = v11:getText("unit_cmShort")
    return v8 * 100
  end
  if onLeave and onStay then
    return 0, 0, ""
  end
  if onLeave then
    return 0, ""
  end
  return ""
end
function InlineWrapper.loadSpecValueBaleSizeRound(xmlFile, customEnvironment, baseDir)
  return InlineWrapper.loadSpecValueBaleSize(xmlFile, customEnvironment, baseDir, true)
end
function InlineWrapper.loadSpecValueBaleSizeSquare(xmlFile, customEnvironment, baseDir)
  return InlineWrapper.loadSpecValueBaleSize(xmlFile, customEnvironment, baseDir, false)
end
function InlineWrapper:getSpecValueBaleSizeRound(triggerId, otherActorId, onEnter, onLeave, onStay)
  if self.specs.inlineWrapperBaleSizeRound ~= nil then
    return InlineWrapper.getSpecValueBaleSize(self, triggerId, otherActorId, onEnter, onLeave, onStay, true)
  end
end
function InlineWrapper:getSpecValueBaleSizeSquare(triggerId, otherActorId, onEnter, onLeave, onStay)
  if self.specs.inlineWrapperBaleSizeSquare ~= nil then
    return InlineWrapper.getSpecValueBaleSize(self, triggerId, otherActorId, onEnter, onLeave, onStay, false)
  end
end
InlineWrapperActivatable = {}
local InlineWrapperActivatable_mt = Class(InlineWrapperActivatable)
function InlineWrapperActivatable.new(inlineWrapper)
  setmetatable({}, u0)
  local otherActorId = otherActorId:getText("action_baleloaderUnload")
  return {inlineWrapper = inlineWrapper, activateText = otherActorId}
end
function InlineWrapperActivatable:getIsActivatable()
  local triggerId = triggerId:getCanInteract()
  if triggerId then
    triggerId = triggerId:getCanPushOff()
    if triggerId then
      return true
    end
  end
  return false
end
function InlineWrapperActivatable:run()
  if g_server ~= nil then
    triggerId:pushOffInlineBale()
    return
  end
  local triggerId = triggerId:getServerConnection()
  local onEnter = InlineWrapperPushOffEvent.new(self.inlineWrapper)
  triggerId:sendEvent(...)
end
