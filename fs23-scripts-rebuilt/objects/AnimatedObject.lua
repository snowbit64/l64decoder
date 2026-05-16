-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/objects/AnimatedObjectEvent.lua")
AnimatedObject = {}
local AnimatedObject_mt = Class(AnimatedObject, Object)
InitStaticObjectClass(AnimatedObject, "AnimatedObject", ObjectIds.OBJECT_ANIMATED_OBJECT)
function AnimatedObject.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.nodeId = 0
  v3.isMoving = false
  v3.controls = {wasPressed = false, active = false, posAction = nil, negAction = nil, posText = nil, negText = nil, posActionEventId = nil, negActionEventId = nil}
  local v4 = InterpolationTime.new(1.2)
  v3.networkTimeInterpolator = v4
  v4 = InterpolatorValue.new(0)
  v3.networkAnimTimeInterpolator = v4
  v4 = AnimatedObjectActivatable.new(v3)
  v3.activatable = v4
  return v3
end
function AnimatedObject:load(rootNode, xmlFile, key, xmlFilename, i3dMappings)
  self.xmlFilename = xmlFilename
  local v6, v7 = Utils.getModNameAndBaseDirectory(xmlFilename)
  self.baseDirectory = v7
  self.customEnvironment = v6
  self.nodeId = rootNode
  local v8 = type(rootNode)
  if v8 == "table" then
    self.nodeId = rootNode[1].node
  end
  self.samples = {}
  v8 = xmlFile:getValue(key .. "#saveId")
  self.saveId = v8
  if self.saveId == nil then
    local v10 = getName(self.nodeId)
    self.saveId = "AnimatedObject_" .. v10
  end
  self.animation = {parts = {}, shaderAnims = {}}
  v10 = xmlFile:getValue(key .. ".animation" .. "#duration")
  self.animation.duration = v10
  self.animation.time = 0
  self.animation.direction = 0
  self.animation.maxTime = 0
  xmlFile:iterate(key .. ".animation" .. ".part", function(self, rootNode)
    local xmlFile = xmlFile:getValue(rootNode .. "#node", nil, u1, u2)
    if xmlFile ~= nil then
      i3dMappings:iterate(rootNode .. ".keyFrame", function(self, rootNode)
        local key = key:loadFrameValues(u1, rootNode, u2)
        key = key:getValue(rootNode .. "#time")
        local xmlFilename = math.max({time = key}.time, u0.animation.maxTime)
        u0.animation.maxTime = xmlFilename
        table.insert(u3.frames, {time = key})
        u4 = true
      end)
      if false then
        table.insert(u3.animation.parts, {node = xmlFile, frames = {}})
      end
    end
  end)
  xmlFile:iterate(key .. ".animation" .. ".shader", function(self, rootNode)
    local xmlFile = xmlFile:getValue(rootNode .. "#node", nil, u1, u2)
    if xmlFile ~= nil then
      local key = key:getValue(rootNode .. "#parameterName")
      if key ~= nil then
        local xmlFilename = getHasShaderParameter(xmlFile, key)
        if xmlFilename then
          v6:iterate(rootNode .. ".keyFrame", function(self, rootNode)
            local xmlFile = xmlFile:getValue(rootNode .. "#time")
            local key, xmlFilename, i3dMappings, v6 = getShaderParameter(u1, u2)
            local v7 = v7:getValue(rootNode .. "#values", nil)
            if v7 ~= nil then
              local v8 = string.split(v7, " ")
              if v8[1] then
                local v10 = tonumber(v8[1])
                -- if v10 then goto L37 end
              end
              v9[1] = key
              if v8[2] then
                v10 = tonumber(v8[2])
                -- if v10 then goto L46 end
              end
              v9[2] = xmlFilename
              if v8[3] then
                v10 = tonumber(v8[3])
                -- if v10 then goto L55 end
              end
              v9[3] = i3dMappings
              if v8[4] then
                v10 = tonumber(v8[4])
                -- if v10 then goto L64 end
              end
              v9[4] = v6
              v9.time = xmlFile
              table.insert(u3.frames, v9)
              u4 = true
            end
          end)
          if false then
            table.insert(u3.animation.shaderAnims, {node = xmlFile, parameterName = key, frames = {}})
          end
        end
      end
    end
  end)
  for v12, v13 in ipairs(self.animation.parts) do
    local v14 = AnimCurve.new(linearInterpolatorN)
    v13.animCurve = v14
    for v17, v18 in ipairs(v13.frames) do
      if self.animation.duration == nil then
        v18.time = v18.time / self.animation.maxTime
      end
      v19:addKeyframe(v18)
    end
  end
  for v12, v13 in ipairs(self.animation.shaderAnims) do
    v14 = AnimCurve.new(linearInterpolatorN)
    v13.animCurve = v14
    for v17, v18 in ipairs(v13.frames) do
      if self.animation.duration == nil then
        v18.time = v18.time / self.animation.maxTime
      end
      v19:addKeyframe(v18)
    end
  end
  v9 = xmlFile:getValue(v8 .. ".clip#rootNode", nil, rootNode, i3dMappings)
  v10 = xmlFile:getValue(v8 .. ".clip#name")
  if v9 ~= nil and v10 ~= nil then
    v11 = xmlFile:getValue(v8 .. ".clip#filename")
    self.animation.clipRootNode = v9
    self.animation.clipName = v10
    self.animation.clipTrack = 0
    if v11 ~= nil then
      v12 = Utils.getFilename(v11, self.baseDirectory)
      v13 = v13:loadSharedI3DFileAsync(v12, false, false, self.onSharedAnimationFileLoaded, self, nil)
      self.animation.sharedLoadRequestId = v13
      self.animation.clipFilename = v12
    else
      self:applyAnimation()
    end
  end
  if self.animation.duration == nil then
    self.animation.duration = self.animation.maxTime
  end
  self.animation.duration = self.animation.duration * 1000
  v12 = xmlFile:getValue(v8 .. "#initialTime", 0)
  self:setAnimTime(v12 * 1000 / self.animation.duration, true)
  v12 = xmlFile:getValue(key .. ".openingHours#startTime")
  v13 = xmlFile:getValue(key .. ".openingHours#endTime")
  if v12 ~= nil and v13 ~= nil then
    v14 = xmlFile:getValue(key .. ".openingHours#disableIfClosed", false)
    v15 = xmlFile:getValue(key .. ".openingHours#closedText", nil, self.customEnvironment)
    self.openingHours = {startTime = v12, endTime = v13, disableIfClosed = v14, closedText = v15}
    v16:subscribe(MessageType.HOUR_CHANGED, self.hourChanged, self)
  end
  self.isEnabled = true
  v14 = xmlFile:getValue(key .. ".controls#triggerNode", nil, rootNode, i3dMappings)
  if v14 ~= nil then
    self.triggerNode = v14
    addTrigger(self.triggerNode, "triggerCallback", self)
    v18 = getNumOfChildren(self.triggerNode)
    -- TODO: structure LOP_FORNPREP (pc 402, target 415)
    local v19 = getChildAt(self.triggerNode, 0)
    addTrigger(v19, "triggerCallback", self)
    -- TODO: structure LOP_FORNLOOP (pc 414, target 403)
    v15 = xmlFile:getValue(key .. ".controls#posAction")
    if v15 ~= nil then
      if InputAction[v15] then
        self.controls.posAction = v15
        v16 = xmlFile:getValue(key .. ".controls#posText")
        if v16 ~= nil then
          v17 = v17:hasText(v16, self.customEnvironment)
          if v17 then
            v17 = v17:getText(v16, self.customEnvironment)
          end
          self.controls.posActionText = v16
        end
        v17 = xmlFile:getValue(key .. ".controls#negText")
        if v17 ~= nil then
          v18 = v18:hasText(v17, self.customEnvironment)
          if v18 then
            v18 = v18:getText(v17, self.customEnvironment)
          end
          self.controls.negActionText = v17
        end
        v18 = xmlFile:getValue(key .. ".controls#negAction")
        -- cmp-jump LOP_JUMPXEQKNIL R18 aux=0x0 -> L523
        if InputAction[v18] then
          self.controls.negAction = v18
          -- goto L523  (LOP_JUMP +15)
        end
        print("Warning: Negative direction action '" .. v18 .. "' not defined!")
      else
        print("Warning: Positive direction action '" .. v15 .. "' not defined!")
      end
    end
  end
  if g_client ~= nil then
    v16 = v16:loadSamplesFromXML(xmlFile, key .. ".sounds", "moving", self.baseDirectory, rootNode, 1, AudioGroup.ENVIRONMENT, i3dMappings, nil)
    self.samplesMoving = v16
    v16 = v16:loadSampleFromXML(xmlFile, key .. ".sounds", "posEnd", self.baseDirectory, rootNode, 1, AudioGroup.ENVIRONMENT, i3dMappings, nil)
    self.samplePosEnd = v16
    v16 = v16:loadSampleFromXML(xmlFile, key .. ".sounds", "negEnd", self.baseDirectory, rootNode, 1, AudioGroup.ENVIRONMENT, i3dMappings, nil)
    self.sampleNegEnd = v16
  end
  v15 = self:getNextDirtyFlag()
  self.animatedObjectDirtyFlag = v15
  return true
end
function AnimatedObject.builder(v0, v1, v2)
  return AnimatedObjectBuilder.new(v0, v1, v2)
end
function AnimatedObject.loadFrameValues(v0, v1, v2, v3)
  local v8 = getRotation(v3)
  local v4, v5, v6 = v1:getValue(v2 .. "#rotation", {})
  local v11 = getTranslation(v3)
  local v7, v8, v9 = v1:getValue(v2 .. "#translation", {})
  local v14 = getScale(v3)
  local v10, v11, v12 = v1:getValue(v2 .. "#scale", {})
  local v13 = v1:getValue(v2 .. "#visibility", true)
  if not v13 then
  end
  return v7, v8, v9, v4, v5, v6, v10, v11, v12, v14
end
function AnimatedObject:onSharedAnimationFileLoaded(node, failedReason, args)
  if node ~= 0 and node ~= nil then
    if not self.isDeleted then
      local animNode = getChildAt(node, 0)
      local v7 = getParent(self.animation.clipRootNode)
      cloneAnimCharacterSet(...)
      self:applyAnimation()
    end
    delete(node)
  end
end
function AnimatedObject:applyAnimation()
  local characterSet = getAnimCharacterSet(self.animation.clipRootNode)
  local clipIndex = getAnimClipIndex(characterSet, self.animation.clipName)
  if clipIndex == -1 then
    if not self.animation.clipFilename then
    end
    v3(v4, v5, v6)
    return
  end
  assignAnimTrackClip(characterSet, self.animation.clipTrack, clipIndex)
  setAnimTrackLoopState(characterSet, self.animation.clipTrack, false)
  local v4 = getAnimClipDuration(characterSet, clipIndex)
  self.animation.clipDuration = v4
  self.animation.clipCharacterSet = characterSet
  self:setAnimTime(self.animation.time, false)
end
function AnimatedObject:delete()
  if self.triggerNode ~= nil then
    removeTrigger(self.triggerNode)
    local v4 = getNumOfChildren(self.triggerNode)
    -- TODO: structure LOP_FORNPREP (pc 17, target 28)
    local v5 = getChildAt(self.triggerNode, 0)
    removeTrigger(...)
    -- TODO: structure LOP_FORNLOOP (pc 27, target 18)
    self.triggerNode = nil
  end
  if self.samplesMoving ~= nil then
    v1:deleteSamples(self.samplesMoving)
    self.samplesMoving = nil
  end
  if self.samplePosEnd ~= nil then
    v1:deleteSample(self.samplePosEnd)
    self.samplePosEnd = nil
  end
  if self.sampleNegEnd ~= nil then
    v1:deleteSample(self.sampleNegEnd)
    self.sampleNegEnd = nil
  end
  if self.animation ~= nil and self.animation.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.animation.sharedLoadRequestId)
    self.animation.sharedLoadRequestId = nil
  end
  v1:removeActivatable(self.activatable)
  v1:unsubscribeAll(self)
  self.isDeleted = true
  local v2 = v2:superClass()
  v2.delete(self)
end
function AnimatedObject:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    v3 = streamReadFloat32(streamId)
    self:setAnimTime(v3, true)
    local v5 = streamReadUIntN(streamId, 2)
    self.animation.direction = v5 - 1
    v5:setValue(v3)
    v5:reset()
  end
end
function AnimatedObject:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    streamWriteFloat32(streamId, self.animation.time)
    streamWriteUIntN(streamId, self.animation.direction + 1, 2)
  end
end
function AnimatedObject:readUpdateStream(streamId, timestamp, connection)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      v4:startNewPhaseNetwork()
      v4 = streamReadFloat32(streamId)
      v5:setTargetValue(v4)
      local v6 = streamReadUIntN(streamId, 2)
      self.animation.direction = v6 - 1
    end
  end
end
function AnimatedObject:writeUpdateStream(streamId, connection, dirtyMask)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.animatedObjectDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      streamWriteFloat32(streamId, self.animation.timeSend)
      streamWriteUIntN(streamId, self.animation.direction + 1, 2)
    end
  end
end
function AnimatedObject:loadFromXMLFile(xmlFile, key)
  local animTime = xmlFile:getValue(key .. "#time")
  if animTime ~= nil then
    local v5 = xmlFile:getValue(key .. "#direction", 0)
    self.animation.direction = v5
    self:setAnimTime(animTime, true)
  end
  AnimatedObject.hourChanged(self)
  return true
end
function AnimatedObject:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#time", self.animation.time)
  xmlFile:setValue(key .. "#direction", self.animation.direction)
end
function AnimatedObject:reset()
  self.animation.time = 0
end
function AnimatedObject:setDirection(direction)
  self.animation.direction = direction
  if self.animation.direction == 0 then
    if 0 < self.animation.time then
      self.animation.direction = -1
    else
      self.animation.direction = 1
    end
  end
  if g_server == nil then
    local v2 = v2:getServerConnection()
    local v4 = AnimatedObjectEvent.new(self, self.animation.direction)
    v2:sendEvent(...)
    return
  end
  self:raiseActive()
end
function AnimatedObject:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.isServer then
    if self.animation.direction ~= 0 then
      v3 = MathUtil.clamp(self.animation.time + self.animation.direction * dt / self.animation.duration, 0, 1)
      self:setAnimTime(v3)
      if v3 ~= 0 then
        -- cmp-jump LOP_JUMPXEQKN R3 aux=0x8000000d -> L54
      end
      self.animation.direction = 0
    end
    -- if v0.animation.time == v0.animation.timeSend then goto L138 end
    self.animation.timeSend = self.animation.time
    self:raiseDirtyFlags(self.animatedObjectDirtyFlag)
  else
    v3:update(dt)
    v3 = v3:getAlpha()
    local v4 = v4:getInterpolatedValue(v3)
    local v5 = self:setAnimTime(v4)
    if self.animation.direction ~= 0 then
      if 0 < self.animation.direction then
        -- cmp-jump LOP_JUMPXEQKN R5 aux=0x8000000d -> L129
        self.animation.direction = 0
      elseif v5 == 0 then
        self.animation.direction = 0
      end
    end
    local v6 = v6:isInterpolating()
    if v6 then
      self:raiseActive()
    end
  end
  if self.samplesMoving ~= nil then
    if self.isMoving then
      -- cmp-jump LOP_JUMPXEQKN R3 aux=0x6 -> L165
      -- if v0.samplesMovingArePlaying then goto L178 end
      v3:playSamples(self.samplesMoving)
      self.samplesMovingArePlaying = true
    elseif self.samplesMovingArePlaying then
      v3:stopSamples(self.samplesMoving)
      self.samplesMovingArePlaying = false
    end
  end
  if AnimatedObjectActivatable_mt and self.animation.direction == 0 then
    if self.samplePosEnd ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R3 aux=0x8000000d -> L203
      v3:playSample(self.samplePosEnd)
    elseif self.sampleNegEnd ~= nil and self.animation.time == 0 then
      v3:playSample(self.sampleNegEnd)
    end
  end
  self.isMoving = false
  if self.animation.direction ~= 0 then
    self:raiseActive()
  end
end
function AnimatedObject.getCanBeTriggered(v0)
  return true
end
function AnimatedObject:setAnimTime(t, omitSound)
  local v3 = MathUtil.clamp(t, 0, 1)
  for v6, v7 in pairs(self.animation.parts) do
    local v8 = v8:get(t)
    self:setFrameValues(v7.node, v8)
  end
  for v6, v7 in pairs(self.animation.shaderAnims) do
    v8 = v8:get(t)
    setShaderParameter(v7.node, v7.parameterName, v8[1], v8[2], v8[3], v8[4], false)
  end
  if self.animation.clipCharacterSet ~= nil then
    enableAnimTrack(self.animation.clipCharacterSet, self.animation.clipTrack)
    setAnimTrackTime(self.animation.clipCharacterSet, self.animation.clipTrack, t * self.animation.clipDuration, true)
    disableAnimTrack(self.animation.clipCharacterSet, self.animation.clipTrack)
  end
  self.animation.time = t
  self.isMoving = true
  return t
end
function AnimatedObject.setFrameValues(v0, dt, AnimatedObjectActivatable_mt)
  setTranslation(dt, AnimatedObjectActivatable_mt[1], AnimatedObjectActivatable_mt[2], AnimatedObjectActivatable_mt[3])
  setRotation(dt, AnimatedObjectActivatable_mt[4], AnimatedObjectActivatable_mt[5], AnimatedObjectActivatable_mt[6])
  setScale(dt, AnimatedObjectActivatable_mt[7], AnimatedObjectActivatable_mt[8], AnimatedObjectActivatable_mt[9])
  if AnimatedObjectActivatable_mt[10] ~= 1 then
  end
  v3(v4, true)
end
function AnimatedObject:hourChanged()
  if self.isServer and self.openingHours ~= nil then
    if self.openingHours.startTime <= g_currentMission.environment.currentHour and g_currentMission.environment.currentHour < self.openingHours.endTime then
      if not self.openingHours.isOpen then
        if self.isServer then
          self.animation.direction = 1
          self:raiseActive()
        end
        self.openingHours.isOpen = true
      end
      -- if not v0.openingHours.disableIfClosed then goto L80 end
      self.isEnabled = true
      return
    end
    if self.openingHours.isOpen then
      if self.isServer then
        self.animation.direction = -1
        self:raiseActive()
      end
      self.openingHours.isOpen = false
    end
    if self.openingHours.disableIfClosed then
      self.isEnabled = false
    end
  end
end
function AnimatedObject:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  local v6 = v6:isa(FSCareerMissionInfo)
  if v6 then
    if not onEnter then
      -- if not v4 then goto L37 end
    end
    if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
      if onEnter then
        v6:addActivatable(self.activatable)
      else
        v6:removeActivatable(self.activatable)
      end
      self:raiseActive()
    end
  end
end
function AnimatedObject:registerXMLPaths(dt)
  self:setXMLSharedRegistration("AnimatedObject", dt)
  self:register(XMLValueType.STRING, dt .. ".animatedObject(?)" .. "#saveId", "Save identifier", "AnimatedObject_[nodeName]")
  self:register(XMLValueType.FLOAT, dt .. ".animatedObject(?)" .. ".animation#duration", "Animation duration (sec.)", 3)
  self:register(XMLValueType.NODE_INDEX, dt .. ".animatedObject(?)" .. ".animation.part(?)#node", "Part node")
  self:register(XMLValueType.FLOAT, dt .. ".animatedObject(?)" .. ".animation.part(?).keyFrame(?)#time", "Key time")
  self:register(XMLValueType.VECTOR_ROT, dt .. ".animatedObject(?)" .. ".animation.part(?).keyFrame(?)#rotation", "Key rotation", "values read from i3d node")
  self:register(XMLValueType.VECTOR_TRANS, dt .. ".animatedObject(?)" .. ".animation.part(?).keyFrame(?)#translation", "Key translation", "values read from i3d node")
  self:register(XMLValueType.VECTOR_SCALE, dt .. ".animatedObject(?)" .. ".animation.part(?).keyFrame(?)#scale", "Key scale", "values read from i3d node")
  self:register(XMLValueType.BOOL, dt .. ".animatedObject(?)" .. ".animation.part(?).keyFrame(?)#visibility", "Key visibility", true)
  self:register(XMLValueType.NODE_INDEX, dt .. ".animatedObject(?)" .. ".animation.shader(?)#node", "Shader node")
  self:register(XMLValueType.STRING, dt .. ".animatedObject(?)" .. ".animation.shader(?)#parameterName", "Shader parameter name")
  self:register(XMLValueType.FLOAT, dt .. ".animatedObject(?)" .. ".animation.shader(?).keyFrame(?)#time", "Key time")
  self:register(XMLValueType.STRING, dt .. ".animatedObject(?)" .. ".animation.shader(?).keyFrame(?)#values", "Key shader parameter values. Use '-' to force using existing shader parameter value")
  self:register(XMLValueType.NODE_INDEX, dt .. ".animatedObject(?)" .. ".animation.clip#rootNode", "I3d animation rootnode")
  self:register(XMLValueType.STRING, dt .. ".animatedObject(?)" .. ".animation.clip#name", "I3d animation clipName")
  self:register(XMLValueType.STRING, dt .. ".animatedObject(?)" .. ".animation.clip#filename", "I3d animation external animation")
  self:register(XMLValueType.FLOAT, dt .. ".animatedObject(?)" .. ".animation#initialTime", "Animation time after loading", 0)
  self:register(XMLValueType.FLOAT, dt .. ".animatedObject(?)" .. ".openingHours#startTime", "Start day time")
  self:register(XMLValueType.FLOAT, dt .. ".animatedObject(?)" .. ".openingHours#endTime", "End day time")
  self:register(XMLValueType.BOOL, dt .. ".animatedObject(?)" .. ".openingHours#disableIfClosed", "Disabled if closed")
  self:register(XMLValueType.L10N_STRING, dt .. ".animatedObject(?)" .. ".openingHours#closedText", "Closed text")
  self:register(XMLValueType.NODE_INDEX, dt .. ".animatedObject(?)" .. ".controls#triggerNode", "Player trigger node")
  self:register(XMLValueType.STRING, dt .. ".animatedObject(?)" .. ".controls#posAction", "Positive direction action event name")
  self:register(XMLValueType.STRING, dt .. ".animatedObject(?)" .. ".controls#posText", "Positive direction text")
  self:register(XMLValueType.STRING, dt .. ".animatedObject(?)" .. ".controls#negText", "Negative direction text")
  self:register(XMLValueType.STRING, dt .. ".animatedObject(?)" .. ".controls#negAction", "Negative direction action event name")
  SoundManager.registerSampleXMLPaths(self, dt .. ".animatedObject(?)" .. ".sounds", "moving(?)")
  SoundManager.registerSampleXMLPaths(self, dt .. ".animatedObject(?)" .. ".sounds", "posEnd")
  SoundManager.registerSampleXMLPaths(self, dt .. ".animatedObject(?)" .. ".sounds", "negEnd")
  self:setXMLSharedRegistration()
end
function AnimatedObject:registerSavegameXMLPaths(dt)
  self:register(XMLValueType.FLOAT, dt .. "#time", "Animated object time")
  self:register(XMLValueType.INT, dt .. "#direction", "Animated object direction", 0)
end
AnimatedObjectBuilder = {}
local dt = Class(AnimatedObjectBuilder)
function AnimatedObjectBuilder.registerXMLPaths(schema, basePath)
  SoundManager.registerSampleXMLPaths(schema, basePath .. ".sounds", "moving(?)")
  SoundManager.registerSampleXMLPaths(schema, basePath .. ".sounds", "posEnd")
  SoundManager.registerSampleXMLPaths(schema, basePath .. ".sounds", "negEnd")
end
function AnimatedObjectBuilder:new(dt, AnimatedObjectActivatable_mt)
  local v3 = setmetatable({}, u0)
  v3.animatedObject = self
  local v4, v5 = Utils.getModNameAndBaseDirectory(dt)
  self.baseDirectory = v5
  self.customEnvironment = v4
  self.samples = {}
  self.saveId = AnimatedObjectActivatable_mt
  self.animation = {parts = {}, time = 0, direction = 0, duration = 1000, shaderAnims = {}}
  self.isEnabled = true
  return v3
end
function AnimatedObjectBuilder:build(rootNodeId)
  self.animatedObject:setAnimTime(0, true)
  if self.animatedObject.openingHours ~= nil then
    v3:subscribe(MessageType.HOUR_CHANGED, self.animatedObject.hourChanged, self.animatedObject)
  end
  if AnimatedObjectActivatable_mt.triggerNode ~= nil then
    addTrigger(AnimatedObjectActivatable_mt.triggerNode, "triggerCallback", AnimatedObjectActivatable_mt)
    local v7 = getNumOfChildren(AnimatedObjectActivatable_mt.triggerNode)
    -- TODO: structure LOP_FORNPREP (pc 40, target 52)
    local v8 = getChildAt(AnimatedObjectActivatable_mt.triggerNode, 0)
    addTrigger(v8, "triggerCallback", AnimatedObjectActivatable_mt)
    -- TODO: structure LOP_FORNLOOP (pc 51, target 41)
  end
  local v3 = AnimatedObjectActivatable_mt:getNextDirtyFlag()
  AnimatedObjectActivatable_mt.animatedObjectDirtyFlag = v3
  return true
end
function AnimatedObjectBuilder:setTrigger(node)
  self.animatedObject.triggerNode = node
end
function AnimatedObjectBuilder:setActions(posAction, posText, negAction, negText)
  if posAction ~= nil then
    if InputAction[posAction] then
      self.animatedObject.controls.posAction = posAction
      if posText ~= nil then
        local v6 = v6:hasText(posText, self.animatedObject.customEnvironment)
        if v6 then
          v6 = v6:getText(posText, self.animatedObject.customEnvironment)
        end
        v5.controls.posActionText = posText
      end
      if negText ~= nil then
        v6 = v6:hasText(negText, v5.customEnvironment)
        if v6 then
          v6 = v6:getText(negText, v5.customEnvironment)
        end
        v5.controls.negActionText = negText
      end
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L86
      if InputAction[negAction] then
        v5.controls.negAction = negAction
        return
      end
      print("Warning: Negative direction action '" .. negAction .. "' not defined!")
      return
    end
    print("Warning: Positive direction action '" .. posAction .. "' not defined!")
  end
end
function AnimatedObjectBuilder:addSimplePart(node, openRotation, openTranslation)
  local v5 = AnimCurve.new(linearInterpolatorN)
  local v5, v6, v7 = getTranslation(node)
  local v8, v9, v10 = getRotation(node)
  local v11, v12, v13 = getScale(node)
  v14:addKeyframe({v5, v6, v7, v8, v9, v10, v11, v12, v13, 1, time = 0})
  if openTranslation ~= nil then
    local v14, v15, v16 = unpack(openTranslation)
  end
  if openRotation ~= nil then
    v14, v15, v16 = unpack(openRotation)
  end
  v14:addKeyframe({v5, v6, v7, v8, v9, v10, v11, v12, v13, 1, time = 1})
  table.insert(self.animatedObject.animation.parts, v4)
end
function AnimatedObjectBuilder:setDuration(duration)
  self.animatedObject.animation.duration = duration
end
function AnimatedObjectBuilder:setSounds(xmlFile, key, rootNode)
  if g_client ~= nil then
    local v5 = v5:loadSamplesFromXML(xmlFile, key, "moving", self.animatedObject.baseDirectory, rootNode, 1, AudioGroup.ENVIRONMENT, nil, nil)
    self.animatedObject.samplesMoving = v5
    v5 = v5:loadSampleFromXML(xmlFile, key, "posEnd", self.animatedObject.baseDirectory, rootNode, 1, AudioGroup.ENVIRONMENT, nil, nil)
    self.animatedObject.samplePosEnd = v5
    v5 = v5:loadSampleFromXML(xmlFile, key, "negEnd", self.animatedObject.baseDirectory, rootNode, 1, AudioGroup.ENVIRONMENT, nil, nil)
    self.animatedObject.sampleNegEnd = v5
  end
end
function AnimatedObjectBuilder:setOpeningTimes(startTime, endTime, disableIfClosed, closedText)
  if startTime ~= nil and endTime ~= nil then
    self.animatedObject.openingHours = {startTime = startTime, endTime = endTime, disableIfClosed = disableIfClosed, closedText = closedText}
  end
end
AnimatedObjectActivatable = {}
local AnimatedObjectActivatable_mt = Class(AnimatedObjectActivatable)
function AnimatedObjectActivatable.new(animatedObject)
  setmetatable({}, u0)
  return {animatedObject = animatedObject, activateText = ""}
end
function AnimatedObjectActivatable:registerCustomInput(inputContext)
  if self.animatedObject.controls.posAction then
    if not self.animatedObject.controls.negAction then
      local v4, v5 = v4:registerActionEvent(self.animatedObject.controls.posAction, self, self.onAnimationInputToggle, false, true, false, true)
      self.animatedObject.controls.posActionEventId = v5
    elseif self.animatedObject.controls.posAction == self.animatedObject.controls.negAction then
      v4, v5 = v4:registerActionEvent(self.animatedObject.controls.posAction, self, self.onAnimationInputContinuous, false, false, true, true)
      self.animatedObject.controls.posActionEventId = v5
    else
      v4, v5 = v4:registerActionEvent(self.animatedObject.controls.posAction, self, self.onAnimationInputContinuous, false, false, true, true)
      self.animatedObject.controls.posActionEventId = v5
      v4, v5 = v4:registerActionEvent(self.animatedObject.controls.negAction, self, self.onAnimationInputContinuous, false, false, true, true)
      self.animatedObject.controls.negActionEventId = v5
    end
  end
  if AnimatedObjectActivatable_mt.posActionEventId then
    v4:setActionEventTextPriority(AnimatedObjectActivatable_mt.posActionEventId, GS_PRIO_VERY_HIGH)
    v4:setActionEventTextVisibility(AnimatedObjectActivatable_mt.posActionEventId, true)
    if AnimatedObjectActivatable_mt.posActionText then
      v4:setActionEventText(AnimatedObjectActivatable_mt.posActionEventId, AnimatedObjectActivatable_mt.posActionText)
    end
  end
  if AnimatedObjectActivatable_mt.negActionEventId then
    v4:setActionEventTextPriority(AnimatedObjectActivatable_mt.negActionEventId, GS_PRIO_VERY_HIGH)
    v4:setActionEventTextVisibility(AnimatedObjectActivatable_mt.negActionEventId, true)
    if AnimatedObjectActivatable_mt.negActionText then
      v4:setActionEventText(AnimatedObjectActivatable_mt.negActionEventId, AnimatedObjectActivatable_mt.negActionText)
    end
  end
  self:updateActionEventTexts()
end
function AnimatedObjectActivatable:removeCustomInput(inputContext)
  AnimatedObjectActivatable_mt:removeActionEventsByTarget(self)
  self.animatedObject.controls.posActionEventId = nil
  self.animatedObject.controls.negActionEventId = nil
end
function AnimatedObjectActivatable:onAnimationInputContinuous(actionName, inputValue)
  if inputValue ~= 0 then
    if actionName == self.animatedObject.controls.posAction and 0 < inputValue then
      self.animatedObject.controls.wasPressed = true
      -- cmp-jump LOP_JUMPXEQKN R7 aux=0x7 -> L67
      -- cmp-jump LOP_JUMPXEQKN R7 aux=0x7 -> L67
      -- goto L67  (LOP_JUMP +34)
    end
    if actionName ~= v5.negAction then
      -- if v1 ~= v5.posAction then goto L67 end
      -- if v2 >= 0 then goto L67 end
    end
    v5.wasPressed = true
    -- cmp-jump LOP_JUMPXEQKN R7 aux=0xa -> L67
    -- cmp-jump LOP_JUMPXEQKN R7 aux=0x3 -> L67
  elseif self.animatedObject.animation.direction ~= 0 and self.animatedObject.controls.wasPressed then
  end
  if v3 then
    v7:setDirection(v6)
  end
end
function AnimatedObjectActivatable:onAnimationInputToggle()
  inputValue:setDirection(self.animatedObject.animation.direction * -1)
  self:updateActionEventTexts()
end
function AnimatedObjectActivatable:updateActionEventTexts()
  if self.animatedObject.controls.posAction and not self.animatedObject.controls.negAction and self.animatedObject.controls.posActionText ~= nil and self.animatedObject.controls.negActionText ~= nil then
    if self.animatedObject.animation.direction == 0 then
      -- cmp-jump LOP_JUMPXEQKN R3 aux=0x8 -> L35
    end
    if inputValue.direction < 0 then
      v3:setActionEventText(actionName.posActionEventId, actionName.posActionText)
      return
    end
    v3:setActionEventText(actionName.posActionEventId, actionName.negActionText)
  end
end
function AnimatedObjectActivatable:getIsActivatable()
  return actionName:getCanBeTriggered()
end
function AnimatedObjectActivatable.activate(v0)
  actionName:addDrawable(v0)
end
function AnimatedObjectActivatable.deactivate(v0)
  actionName:removeDrawable(v0)
end
function AnimatedObjectActivatable:getDistance(x, y, z)
  if self.animatedObject.triggerNode ~= nil then
    local v4, v5, v6 = getWorldTranslation(self.animatedObject.triggerNode)
    return MathUtil.vector3Length(x - v4, y - v5, z - v6)
  end
  return math.huge
end
function AnimatedObjectActivatable:draw()
  if self.animatedObject.openingHours ~= nil and self.animatedObject.openingHours.closedText ~= nil then
    actionName:addExtraPrintText(self.animatedObject.openingHours.closedText)
  end
end
function AnimatedObjectActivatable:run()
  self:onAnimationInputToggle()
end
