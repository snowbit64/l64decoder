-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InlineBale = {xmlSchema = nil}
source("dataS/scripts/events/InlineBaleOpenEvent.lua")
InitStaticObjectClass(InlineBale, "InlineBale", ObjectIds.OBJECT_INLINE_BALE)
local InlineBale_mt = Class(InlineBale, Object)
InlineBaleActivatable_mt:addCreateSchemaFunction(function()
  local InlineBaleActivatable_mt = XMLSchema.new("inlineBale")
  InlineBale.xmlSchema = InlineBaleActivatable_mt
end)
InlineBaleActivatable_mt:addInitSchemaFunction(function()
  InlineBale.xmlSchema:register(XMLValueType.FLOAT, "inlineBale#maxOpenDistance", "Max. distance to player to allow opening of bale", 3)
  InlineBale.xmlSchema:register(XMLValueType.STRING, "inlineBale.replacementBale#filename", "Filename of bale replacement")
  InlineBale.xmlSchema:register(XMLValueType.STRING, "inlineBale.textures#diffuse", "Wrapping diffuse file to apply on bale")
  InlineBale.xmlSchema:register(XMLValueType.STRING, "inlineBale.textures#normal", "Wrapping normal file to apply on bale")
  InlineBale.xmlSchema:register(XMLValueType.FLOAT, "inlineBale.wrapping.key(?)#time", "Wrapping time")
  InlineBale.xmlSchema:register(XMLValueType.FLOAT, "inlineBale.wrapping.key(?)#wrappingState", "Wrapping shader state")
  InlineBale.xmlSchema:register(XMLValueType.VECTOR_ROT, "inlineBale.joint#startRotLimit", "Start rotation limit")
  InlineBale.xmlSchema:register(XMLValueType.VECTOR_ROT, "inlineBale.joint#endRotLimit", "End rotation limit")
  InlineBale.xmlSchema:register(XMLValueType.VECTOR_TRANS, "inlineBale.joint#startTransLimit", "Start translation limit")
  InlineBale.xmlSchema:register(XMLValueType.VECTOR_TRANS, "inlineBale.joint#endTransLimit", "End translation limit")
  InlineBale.xmlSchema:register(XMLValueType.INT, "inlineBale.joint#wrappingAxis", "Wrapping axis of bale", 1)
  InlineBale.xmlSchema:register(XMLValueType.TIME, "inlineBale.joint#lockTime", "Time until joint is fully locked (sec)", 5)
  InlineBale.xmlSchema:register(XMLValueType.STRING, "inlineBale.connector#filename", "Path to connector file")
  InlineBale.xmlSchema:register(XMLValueType.INT, "inlineBale.connector#axis", "Connector axis index", 1)
  InlineBale.xmlSchema:register(XMLValueType.FLOAT, "inlineBale.connector#offset", "Connection placement offset", 0.5)
  ItemSystem.xmlSchemaSavegame:register(XMLValueType.STRING, "items.item(?)#filename", "Filename")
  ItemSystem.xmlSchemaSavegame:register(XMLValueType.INT, "items.item(?).bales.bale(?)#saveId", "Save id of inline bale")
end)
function InlineBale.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.bales = {}
  v3.baleJoints = {}
  v3.pendingBale = nil
  v3.wrappingColor = {1, 1, 1, 1}
  v3.wrappingState = 0
  v3.configFileName = nil
  v3.maxOpenDistance = 3
  v3.connector = nil
  v3.connectorAxis = 1
  v3.connectorOffset = 0.5
  v3.wrappingStateCurve = nil
  v3.startRotLimit = {0, 0, 0}
  v3.endRotLimit = {0, 0, 0}
  v3.startTransLimit = {0, 0, 0}
  v3.endTransLimit = {0, 0, 0}
  v3.wrappingAxis = 1
  v3.wrappingAxisScale = {1, 0, 0}
  v3.lockTime = 5000
  v3.balesToLoad = {}
  registerObjectClassName(v3, "InlineBale")
  v4:addItemToSave(v3)
  local v4 = InlineBaleActivatable.new(v3)
  v3.activatable = v4
  v4 = v3:getNextDirtyFlag()
  v3.balesDirtyFlag = v4
  v4 = v3:getNextDirtyFlag()
  v3.wrapperDirtyFlag = v4
  v3.wakeUpDelay = 0
  return v3
end
function InlineBale:delete()
  v1:removeActivatable(self.activatable)
  v1:removeItemToSave(self)
  unregisterObjectClassName(self)
  local v2 = v2:superClass()
  v2.delete(self)
end
function InlineBale:loadFromConfigXML(configFileName)
  self.configFileName = configFileName
  local v2, v3 = Utils.getModNameAndBaseDirectory(configFileName)
  self.baseDirectory = v3
  local xmlFile = XMLFile.load("inlineBaleXml", configFileName, InlineBale.xmlSchema)
  if xmlFile ~= nil then
    local v5 = xmlFile:getValue("inlineBale#maxOpenDistance", self.maxOpenDistance)
    self.maxOpenDistance = v5
    local v6 = xmlFile:getValue("inlineBale.connector#filename")
    v5 = Utils.getFilename(v6, self.baseDirectory)
    self.connectorFilename = v5
    v5 = xmlFile:getValue("inlineBale.connector#axis", self.connectorAxis)
    self.connectorAxis = v5
    v5 = xmlFile:getValue("inlineBale.connector#offset", self.connectorOffset)
    self.connectorOffset = v5
    v5 = xmlFile:getValue("inlineBale.replacementBale#filename")
    if v5 ~= nil then
      v6 = Utils.getFilename(v5, self.baseDirectory)
      self.replacementBaleFilename = v6
      v6 = fileExists(self.replacementBaleFilename)
      if not v6 then
        local v9 = tostring(self.replacementBaleFilename)
        Logging.xmlWarning(...)
        return false
      end
    end
    local v7 = xmlFile:getValue("inlineBale.textures#diffuse")
    v6 = Utils.getFilename(v7, self.baseDirectory)
    self.wrapDiffuse = v6
    if self.wrapDiffuse ~= nil then
      v6 = fileExists(self.wrapDiffuse)
      -- if v6 then goto L119 end
    end
    v9 = tostring(self.wrapDiffuse)
    Logging.xmlWarning(...)
    return false
    v7 = xmlFile:getValue("inlineBale.textures#normal")
    v6 = Utils.getFilename(v7, self.baseDirectory)
    self.wrapNormal = v6
    if self.wrapNormal ~= nil then
      v6 = fileExists(self.wrapNormal)
      -- if v6 then goto L152 end
    end
    v9 = tostring(self.wrapNormal)
    Logging.xmlWarning(...)
    return false
    v6 = AnimCurve.new(linearInterpolator1)
    self.wrappingStateCurve = v6
    while true do
      v7 = string.format("inlineBale.wrapping.key(%d)", v6)
      v8 = xmlFile:hasProperty(v7)
      if not v8 then
        break
      end
      v8 = xmlFile:getValue(v7 .. "#time")
      v9 = xmlFile:getValue(v7 .. "#wrappingState")
      v10:addKeyframe({v9, time = v8})
    end
    v7 = xmlFile:getValue("inlineBale.joint#startRotLimit", self.startRotLimit, true)
    self.startRotLimit = v7
    v7 = xmlFile:getValue("inlineBale.joint#endRotLimit", self.endRotLimit, true)
    self.endRotLimit = v7
    v7 = xmlFile:getValue("inlineBale.joint#startTransLimit", self.startTransLimit, true)
    self.startTransLimit = v7
    v7 = xmlFile:getValue("inlineBale.joint#endTransLimit", self.endTransLimit, true)
    self.endTransLimit = v7
    v7 = xmlFile:getValue("inlineBale.joint#wrappingAxis", self.wrappingAxis)
    self.wrappingAxis = v7
    self.wrappingAxisScale = {0, 0, 0}
    v8 = math.abs(self.wrappingAxis)
    v9 = MathUtil.clamp(self.wrappingAxis, -1, 1)
    self.wrappingAxisScale[v8] = v9
    v7 = xmlFile:getValue("inlineBale.joint#lockTime", self.lockTime / 1000)
    self.lockTime = v7
    xmlFile:delete()
  else
    Logging.error("Unable to create InlineBale from config file '%s'", configFileName)
    return false
  end
  return true
end
function InlineBale:loadFromXMLFile(xmlFile, key)
  local v3 = xmlFile:getValue(key .. "#filename")
  self.configFileName = v3
  if self.configFileName == nil then
    Logging.error("Unable to load InlineBale from savegame. No filename given.")
    return false
  end
  v3 = self:loadFromConfigXML(self.configFileName)
  if not v3 then
    Logging.error("Unable to load InlineBale from savegame.")
    return false
  end
  while true do
    v4 = string.format("%s.bales.bale(%d)", key, v3)
    v5 = xmlFile:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = xmlFile:getValue(v4 .. "#saveId")
    if {saveId = v6}.saveId ~= nil then
      table.insert(self.balesToLoad, {saveId = v6})
    end
  end
  if 0 < #self.balesToLoad then
    self:raiseActive()
  else
    self.removeEmptyInlineBale = true
    self:raiseActive()
  end
  self.numBalesSent = 0
  return true
end
function InlineBale:saveToXMLFile(xmlFile, key)
  if #self.bales == 1 and self.pendingBale ~= nil then
    return
  end
  xmlFile:setValue(key .. "#filename", self.configFileName)
  for v6, v7 in ipairs(self.bales) do
    local v10 = string.format("%s.bales.bale(%d)#saveId", key, v6 - 1)
    xmlFile:setValue(v10, v7.currentSavegameItemId)
  end
end
function InlineBale:readStream(streamId, connection)
  local v4 = streamReadString(streamId)
  local v3 = NetworkUtil.convertFromNetworkFilename(...)
  self.configFileName = v3
  self:loadFromConfigXML(self.configFileName)
  v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  v3:addItemToSave(self)
  self:readBales(streamId, nil, connection)
end
function InlineBale:writeStream(streamId, connection)
  local v5 = NetworkUtil.convertToNetworkFilename(self.configFileName)
  streamWriteString(...)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  self:writeBales(streamId, connection)
end
function InlineBale:readUpdateStream(streamId, timestamp, connection)
  if connection.isServer then
    local v4 = streamReadBool(streamId)
    if v4 then
      self:readBales(streamId, timestamp, connection)
    end
    v4 = streamReadBool(streamId)
    if v4 then
      v4 = NetworkUtil.readNodeObject(streamId)
      self.currentWrapper = v4
    end
  end
end
function InlineBale:writeUpdateStream(streamId, connection, dirtyMask)
  if not connection.isServer then
    local v7 = bitAND(dirtyMask, self.balesDirtyFlag)
    if v7 == 0 then
    end
    local v4 = v4(v5, true)
    if v4 then
      self:writeBales(streamId, connection, dirtyMask)
    end
    v7 = bitAND(dirtyMask, self.wrapperDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      NetworkUtil.writeNodeObject(streamId, self.currentWrapper)
    end
  end
end
function InlineBale:readBales(streamId, timestamp, connection)
  local v4 = streamReadUIntN(streamId, 6)
  for v8, v9 in ipairs(self.bales) do
    local v10 = entityExists(v9.nodeId)
    if not v10 then
      continue
    end
    self:removeBaleConnector(v9)
  end
  self.bales = {}
  -- TODO: structure LOP_FORNPREP (pc 30, target 42)
  v10 = NetworkUtil.readNodeObjectId(streamId)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 41, target 31)
  if 0 < v4 then
    v5:addActivatable(self.activatable)
  end
  if 0 < #self.balesToLoad then
    self:raiseActive()
  end
end
function InlineBale:writeBales(streamId, connection, dirtyMask)
  if self.pendingBale ~= nil then
  end
  streamWriteUIntN(streamId, v4, 6)
  -- TODO: structure LOP_FORNPREP (pc 17, target 26)
  NetworkUtil.writeNodeObject(streamId, self.bales[1])
  -- TODO: structure LOP_FORNLOOP (pc 25, target 18)
  self.numBalesSent = v4
end
function InlineBale.update(v0, v1)
end
function InlineBale:updateTick(dt)
  if self.isServer then
    if 0 < #self.balesToLoad then
      for v6, v7 in ipairs(self.balesToLoad) do
        local v8 = v8:getItemBySaveId(v7.saveId)
        if not (v8 == nil) then
          continue
        end
      end
      if v2 then
        for v6, v7 in ipairs(self.balesToLoad) do
          v8 = v8:getItemBySaveId(v7.saveId)
          local v9 = v8:isa(InlineBaleSingle)
          if v9 then
            self:addBale(v8)
            self:connectPendingBale(self.connectorFilename)
            self:updateBaleJoints(9999)
          else
            Logging.error("Invalid inline bale found")
          end
        end
        self.balesToLoad = {}
      end
      self:raiseActive()
    end
    self:updateBaleJoints(dt)
    if self.wrappingNode ~= nil and self.wrappingState < 1 then
      local v2, v3, v4 = getWorldTranslation(self.wrappingNode)
      for v9, v10 in ipairs(self.bales) do
        if not (v10 ~= self.pendingBale) then
          continue
        end
        local v12, v13, v14 = localToWorld(v10.nodeId, self.wrappingAxisScale[1] * v10.width / 2, self.wrappingAxisScale[2] * v10.width / 2, self.wrappingAxisScale[3] * v10.width / 2)
        local v15, v16, v17 = localToWorld(v10.nodeId, self.wrappingAxisScale[1] * -(v10.width / 2), self.wrappingAxisScale[2] * -(v10.width / 2), self.wrappingAxisScale[3] * -(v10.width / 2))
        local v18, v19 = MathUtil.vector2Normalize(v12 - v15, v14 - v17)
        local v20, v21 = MathUtil.projectOnLine(v2, v4, v12, v14, v18, v19)
        local v23 = MathUtil.getProjectOnLineParameter(v2, v4, v12, v14, v18, v19)
        local v22 = MathUtil.clamp(v23, 0, 1)
        local v24 = MathUtil.vector3Length(v12 - v20, v13 - v13 * v22 + v16 * (1 - v22), v14 - v21)
        local v25 = MathUtil.clamp(v24 / v10.width, 0, 1)
        local v26, v27, v28 = localToWorld(v10.nodeId, self.wrappingAxisScale[1] * (v10.width / 2 + 0.1), self.wrappingAxisScale[2] * (v10.width / 2 + 0.1), self.wrappingAxisScale[3] * (v10.width / 2 + 0.1))
        local v29 = MathUtil.vector3Length(v26 - v20, v27 - v13 * v22 + v16 * (1 - v22), v28 - v21)
        if v29 < v24 then
        end
        if not (self.wrappingStateCurve ~= nil) then
          continue
        end
        local v31 = v31:get(v25)
        local v30 = math.max(v31, v10.wrappingState)
        v10:setWrappingState(v30)
      end
      self.wrappingState = v5 / #self.bales
      self:raiseActive()
    end
    if self.pendingBale == nil and #self.bales ~= self.numBalesSent then
      self:raiseDirtyFlags(self.balesDirtyFlag)
    end
    if self.removeEmptyInlineBale then
      self:delete()
    end
    -- if 0 >= v0.wakeUpDelay then goto L376 end
    self.wakeUpDelay = self.wakeUpDelay - dt
    if self.wakeUpDelay <= 0 then
      self:wakeUp()
    end
    self:raiseActive()
    return
  end
  if 0 < #self.balesToLoad then
    for v6, v7 in ipairs(self.balesToLoad) do
      v8 = NetworkUtil.getObject(v7)
      if not (v8 == nil) then
        continue
      end
    end
    if v2 then
      for v6, v7 in ipairs(self.balesToLoad) do
        v8 = NetworkUtil.getObject(v7)
        if not (v8 ~= nil) then
          continue
        end
        self:addBale(v8)
      end
      self.balesToLoad = {}
      -- TODO: structure LOP_FORNPREP (pc 348, target 373)
      if self.bales[1] ~= nil and self.bales[1 + 1] ~= nil then
        self:loadBaleConnector(self.bales[1], self.bales[1 + 1], self.connectorFilename)
      end
      -- TODO: structure LOP_FORNLOOP (pc 372, target 349)
    end
    self:raiseActive()
  end
end
function InlineBale:addBale(bale, baleType)
  if self.isServer then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L76
    local v4 = self:getIsBaleAllowed(bale, baleType)
    -- if not v4 then goto L76 end
    table.insert(self.bales, bale)
    self.pendingBale = bale
    self.wrappingState = self.wrappingState / #self.bales * (#self.bales - 1)
    v4 = bale:isa(InlineBaleSingle)
    if v4 then
      bale:setConnectedInlineBale(self)
    end
    bale:addDeleteListener(self, "onBaleDeleted")
    self:raiseActive()
  else
    table.insert(self.bales, bale)
    v4 = bale:isa(InlineBaleSingle)
    if v4 then
      bale:setConnectedInlineBale(self)
    end
  end
  if v3 and bale.inlineWrapperToAdd ~= nil then
    self:setCurrentWrapperInfo(bale.inlineWrapperToAdd.wrapper, bale.inlineWrapperToAdd.wrappingNode)
    bale.inlineWrapperToAdd = nil
  end
  return v3
end
function InlineBale:getIsBaleAllowed(bale, baleType)
  if #self.bales == 0 then
    return true
  end
  if baleType ~= nil and self.configFileName ~= baleType.inlineBaleFilename then
    return false
  end
  return true
end
function InlineBale:replacePendingBale(spawnNode, color)
  if self.pendingBale ~= nil then
    local v5 = v5:getBaleAttributes()
    local bale = InlineBaleSingle.new(self.isServer, self.isClient)
    local v7, v8, v9 = getWorldTranslation(spawnNode)
    local v10, v11, v12 = getWorldRotation(spawnNode)
    if not self.replacementBaleFilename then
    end
    local v13 = bale:loadFromConfigXML(v15, v7, v8, v9, v10, v11, v12)
    if v13 then
      v5.wrapDiffuse = self.wrapDiffuse
      v5.wrapNormal = self.wrapNormal
      bale:applyBaleAttributes(v5)
      bale:register()
      v13:delete()
      if color ~= nil then
        local v13, v14, v15, v16 = unpack(color)
        bale:setColor(v13, v14, v15, v16)
      end
      v13 = NetworkUtil.getObjectId(bale)
      self.bales[#self.bales] = bale
      self.pendingBale = bale
      bale:setConnectedInlineBale(self)
      bale:addDeleteListener(self, "onBaleDeleted")
    end
  end
  return v3, v4
end
function InlineBale:getPendingBale()
  return self.pendingBale
end
function InlineBale:connectPendingBale()
  v1:addActivatable(self.activatable)
  if self.pendingBale ~= nil then
    if 2 <= #self.bales then
      self:connectBale(self.pendingBale)
    end
    self.pendingBale = nil
    return true
  end
  return false
end
function InlineBale:connectBale(bale)
  self:createBaleJoint(self.bales[#self.bales - 1], bale)
  self:loadBaleConnector(self.bales[#self.bales - 1], bale, self.connectorFilename)
  self:raiseActive()
end
function InlineBale:createBaleJoint(bale1, bale2)
  local constr = JointConstructor.new()
  constr:setActors(bale1.nodeId, bale2.nodeId)
  constr:setJointTransforms(bale1.nodeId, bale2.nodeId)
  constr:setEnableCollision(true)
  constr:setRotationLimit(0, -self.startRotLimit[1], self.startRotLimit[1])
  constr:setRotationLimit(1, -self.startRotLimit[2], self.startRotLimit[2])
  constr:setRotationLimit(2, -self.startRotLimit[3], self.startRotLimit[3])
  constr:setTranslationLimit(0, true, -self.startTransLimit[1], self.startTransLimit[1])
  constr:setTranslationLimit(1, true, -self.startTransLimit[2], self.startTransLimit[2])
  constr:setTranslationLimit(2, true, -self.startTransLimit[3], self.startTransLimit[3])
  local v4 = constr:finalize()
  self.baleJoints[bale1] = {jointIndex = v4, time = 0}
end
function InlineBale:updateBaleJoints(dt)
  for v5, v6 in pairs(self.baleJoints) do
    if not (v6.time < self.lockTime) then
      continue
    end
    v6.time = v6.time + dt
    local v10 = MathUtil.clamp(v6.time / self.lockTime, 0, 1)
    self:setBaleJointLimits(...)
    self:raiseActive()
  end
end
function InlineBale:setBaleJointLimits(jointIndex, alpha)
  local v3, v4, v5 = MathUtil.vector3ArrayLerp(self.startRotLimit, self.endRotLimit, alpha)
  setJointRotationLimit(jointIndex, 0, true, -v3, v3)
  setJointRotationLimit(jointIndex, 1, true, -v4, v4)
  setJointRotationLimit(jointIndex, 2, true, -v5, v5)
  local v6, v7, v8 = MathUtil.vector3ArrayLerp(self.startTransLimit, self.endTransLimit, alpha)
  setJointTranslationLimit(jointIndex, 0, true, -v6, v6)
  setJointTranslationLimit(jointIndex, 1, true, -v7, v7)
  setJointTranslationLimit(jointIndex, 2, true, -v8, v8)
end
function InlineBale:loadBaleConnector(bale1, bale2, filename)
  if filename ~= nil then
    local v4 = bale2:getHasConnector()
    if not v4 then
      v4 = bale2:setConnector(bale1, filename, self.connectorAxis, self.connectorOffset)
      if not v4 then
        return false
      end
      return true
    end
  end
  return false
end
function InlineBale.removeBaleConnector(v0, v1)
  if v1 ~= nil then
    v1:removeConnector()
  end
end
function InlineBale:setCurrentWrapperInfo(wrapper, wrappingNode)
  self.wrappingNode = wrappingNode
  self:raiseActive()
  if wrapper ~= self.currentWrapper then
    self.currentWrapper = wrapper
    self:raiseDirtyFlags(self.wrapperDirtyFlag)
  end
end
function InlineBale:getNumberOfBales()
  return #self.bales
end
function InlineBale:getBales()
  return self.bales
end
function InlineBale:setWrappingState(state)
  local v3 = self:getBales()
  for v5, v6 in ipairs(...) do
    v6:setWrappingState(state)
  end
  self.wrappingState = state
end
function InlineBale:wakeUp(delay)
  if delay ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000000 -> L19
  end
  local v3 = self:getBales()
  for v5, v6 in ipairs(...) do
    I3DUtil.wakeUpObject(v6.nodeId)
  end
  return
  self.wakeUpDelay = delay
  self:raiseActive()
end
function InlineBale:getCanInteract()
  if #self.bales <= 0 then
    return false
  end
  if self.currentWrapper ~= nil then
    return false
  end
  local v1, v2, v3 = self:getInteractionPosition()
  if v1 ~= nil then
    local v5, v6, v7 = getWorldTranslation(self.bales[1].nodeId)
    local v8 = MathUtil.vector3Length(v1 - v5, v2 - v6, v3 - v7)
    if v8 < self.maxOpenDistance then
      return true
    end
    local v10, v11, v12 = getWorldTranslation(self.bales[#self.bales].nodeId)
    v10 = MathUtil.vector3Length(v1 - v10, v2 - v11, v3 - v12)
    if v10 < self.maxOpenDistance then
      return true
    end
  end
  return false
end
function InlineBale:getInteractionPosition()
  if not g_currentMission.controlPlayer then
    return
  end
  if 0 < #self.bales then
    local v1 = v1:canPlayerAccess(self.bales[1])
    if not v1 then
      return
    end
  end
  v1 = getWorldTranslation(g_currentMission.player.rootNode)
  return v1
end
function InlineBale:getCanBeOpened()
  for v4, v5 in ipairs(self.bales) do
    if v5.wrappingState >= 1 then
      local v6 = v5:getIsFermenting()
      if not v6 then
        continue
      end
    end
    return false
  end
  return true
end
function InlineBale:openBaleAtPosition(x, y, z)
  if 1 < #self.bales then
    local v8, v9, v10 = getWorldTranslation(self.bales[1].nodeId)
    local v11 = MathUtil.vector3Length(x - v8, y - v9, z - v10)
    local v11, v12, v13 = getWorldTranslation(self.bales[#self.bales].nodeId)
    v11 = MathUtil.vector3Length(x - v11, y - v12, z - v13)
  end
  if v4 < v5 then
    self:openBale(v6, true)
    return
  end
  self:openBale(v7, false)
end
function InlineBale:openBale(bale, isFirst, replaceBale)
  if isFirst then
    self:removeBaleConnector(self.bales[2])
    if self.baleJoints[bale] ~= nil then
      removeJoint(self.baleJoints[bale].jointIndex)
    end
    -- TODO: structure LOP_FORNPREP (pc 24, target 57)
    self.bales[1] = self.bales[1 + 1]
    -- TODO: structure LOP_FORNLOOP (pc 32, target 25)
  else
    self:removeBaleConnector(bale)
    if self.bales[#self.bales - 1] ~= nil and self.baleJoints[self.bales[#self.bales - 1]] ~= nil then
      removeJoint(self.baleJoints[self.bales[#self.bales - 1]].jointIndex)
    end
  end
  table.remove(self.bales, #self.bales)
  bale:setConnectedInlineBale(nil)
  if replaceBale ~= nil then
    -- if not v3 then goto L125 end
  end
  local attributes = bale:getBaleAttributes()
  local newBale = Bale.new(self.isServer, self.isClient)
  local v6, v7, v8 = getWorldTranslation(bale.nodeId)
  local v9, v10, v11 = getWorldRotation(bale.nodeId)
  local v12 = newBale:loadFromConfigXML(attributes.xmlFilename, v6, v7, v8, v9, v10, v11)
  if v12 then
    attributes.wrapDiffuse = self.wrapDiffuse
    attributes.wrapNormal = self.wrapNormal
    newBale:applyBaleAttributes(attributes)
    newBale:register()
    newBale:open()
    bale:delete()
  end
  if #self.bales == 0 then
    self:delete()
  end
  self:raiseActive()
end
function InlineBale:onBaleDeleted(bale)
  if self.pendingBale == nil then
    if self.bales[1] == bale then
      self:openBale(bale, true, false)
      return
    end
    if self.bales[#self.bales] == bale then
      self:openBale(bale, false, false)
      return
    end
    for v6, v7 in ipairs(self.bales) do
      if not (v7 == bale) then
        continue
      end
    end
    if v2 ~= nil then
      if #self.bales - v2 < v2 then
        -- TODO: structure LOP_FORNPREP (pc 56, target 65)
        self:openBale(self.bales[#self.bales], false)
        -- TODO: structure LOP_FORNLOOP (pc 64, target 57)
        self:openBale(bale, false, false)
        return
      end
      -- TODO: structure LOP_FORNPREP (pc 75, target 84)
      self:openBale(self.bales[1], true)
      -- TODO: structure LOP_FORNLOOP (pc 83, target 76)
      self:openBale(bale, true, false)
    end
  end
end
InlineBaleActivatable = {}
local InlineBaleActivatable_mt = Class(InlineBaleActivatable)
function InlineBaleActivatable.new(inlineBale)
  setmetatable({}, u0)
  local v2 = v2:getText("action_cutBale")
  return {inlineBale = inlineBale, activateText = v2}
end
function InlineBaleActivatable:getIsActivatable()
  local v1 = v1:getCanInteract()
  if v1 then
    v1 = v1:getCanBeOpened()
    if v1 then
      return true
    end
  end
  return false
end
function InlineBaleActivatable:run()
  local v1, v2, v3 = v1:getInteractionPosition()
  if v1 ~= nil then
    if g_server ~= nil then
      v4:openBaleAtPosition(v1, v2, v3)
      return
    end
    local v4 = v4:getServerConnection()
    local v6 = InlineBaleOpenEvent.new(self.inlineBale, v1, v2, v3)
    v4:sendEvent(...)
  end
end
