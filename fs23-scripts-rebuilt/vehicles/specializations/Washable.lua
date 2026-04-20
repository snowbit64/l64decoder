-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Washable = {SEND_NUM_BITS = 6, SEND_MAX_VALUE = 2 ^ Washable.SEND_NUM_BITS - 1, SEND_THRESHOLD = 1 / Washable.SEND_MAX_VALUE, WASHTYPE_HIGH_PRESSURE_WASHER = 1, WASHTYPE_RAIN = 2, WASHTYPE_TRIGGER = 3}
function Washable.prerequisitesPresent(specializations)
  return true
end
function Washable.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Washable")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.washable#dirtDuration", "Duration until fully dirty (minutes)", 90)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.washable#washDuration", "Duration until fully clean (minutes)", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.washable#workMultiplier", "Multiplier while working", 4)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.washable#fieldMultiplier", "Multiplier while on field", 2)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.washable#blockedWashTypes", "Block specific ways to clean vehicle (HIGH_PRESSURE_WASHER, RAIN, TRIGGER)")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).washable.dirtNode(?)#amount", "Dirt amount")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).washable.dirtNode(?)#snowScale", "Snow scale")
end
function Washable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "updateDirtAmount", Washable.updateDirtAmount)
  SpecializationUtil.registerFunction(vehicleType, "addDirtAmount", Washable.addDirtAmount)
  SpecializationUtil.registerFunction(vehicleType, "getDirtAmount", Washable.getDirtAmount)
  SpecializationUtil.registerFunction(vehicleType, "setNodeDirtAmount", Washable.setNodeDirtAmount)
  SpecializationUtil.registerFunction(vehicleType, "getNodeDirtAmount", Washable.getNodeDirtAmount)
  SpecializationUtil.registerFunction(vehicleType, "setNodeDirtColor", Washable.setNodeDirtColor)
  SpecializationUtil.registerFunction(vehicleType, "addAllSubWashableNodes", Washable.addAllSubWashableNodes)
  SpecializationUtil.registerFunction(vehicleType, "addWashableNodes", Washable.addWashableNodes)
  SpecializationUtil.registerFunction(vehicleType, "validateWashableNode", Washable.validateWashableNode)
  SpecializationUtil.registerFunction(vehicleType, "addToGlobalWashableNode", Washable.addToGlobalWashableNode)
  SpecializationUtil.registerFunction(vehicleType, "getWashableNodeByCustomIndex", Washable.getWashableNodeByCustomIndex)
  SpecializationUtil.registerFunction(vehicleType, "addToLocalWashableNode", Washable.addToLocalWashableNode)
  SpecializationUtil.registerFunction(vehicleType, "removeAllSubWashableNodes", Washable.removeAllSubWashableNodes)
  SpecializationUtil.registerFunction(vehicleType, "removeWashableNode", Washable.removeWashableNode)
  SpecializationUtil.registerFunction(vehicleType, "getDirtMultiplier", Washable.getDirtMultiplier)
  SpecializationUtil.registerFunction(vehicleType, "getWorkDirtMultiplier", Washable.getWorkDirtMultiplier)
  SpecializationUtil.registerFunction(vehicleType, "getWashDuration", Washable.getWashDuration)
  SpecializationUtil.registerFunction(vehicleType, "getAllowsWashingByType", Washable.getAllowsWashingByType)
end
function Washable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Washable)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Washable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Washable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Washable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Washable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Washable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Washable)
end
function Washable:onLoad(savegame)
  self.spec_washable.washableNodes = {}
  self.spec_washable.washableNodesByIndex = {}
  self:addToLocalWashableNode(nil, Washable.updateDirtAmount, nil, nil)
  self.spec_washable.globalWashableNode = self.spec_washable.washableNodes[1]
  local v5 = v5:getValue("vehicle.washable#dirtDuration", 90)
  self.spec_washable.dirtDuration = v5 * 60 * 1000
  if self.spec_washable.dirtDuration ~= 0 then
    self.spec_washable.dirtDuration = 1 / self.spec_washable.dirtDuration
  end
  local v6 = v6:getValue("vehicle.washable#washDuration", 1)
  local v3 = math.max(v6 * 60 * 1000, 0.00001)
  v2.washDuration = v3
  v3 = v3:getValue("vehicle.washable#workMultiplier", 4)
  v2.workMultiplier = v3
  v3 = v3:getValue("vehicle.washable#fieldMultiplier", 2)
  v2.fieldMultiplier = v3
  v2.blockedWashTypes = {}
  v3 = v3:getValue("vehicle.washable#blockedWashTypes")
  if v3 ~= nil then
    local v4 = v3:split(" ")
    for v8, v9 in pairs(v4) do
      if Washable["WASHTYPE_" .. v9] ~= nil then
        v2.blockedWashTypes[Washable["WASHTYPE_" .. v9]] = true
      else
        Logging.xmlWarning(self.xmlFile, "Unknown wash type '%s' in '%s'", "WASHTYPE_" .. v9, "vehicle.washable#blockedWashTypes")
      end
    end
  end
  v2.lastDirtMultiplier = 0
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
end
function Washable:onLoadFinished(savegame)
  for v6, v7 in pairs(self.components) do
    self:addAllSubWashableNodes(v7.node)
  end
  if savegame ~= nil then
    v3 = Washable.getIntervalMultiplier()
    if v3 ~= 0 then
      -- TODO: structure LOP_FORNPREP (pc 29, target 83)
      v7 = string.format("%s.washable.dirtNode(%d)", savegame.key, 1 - 1)
      local v8 = v8:getValue(v7 .. "#amount", 0)
      self:setNodeDirtAmount(v2.washableNodes[1], v8, true)
      if v2.washableNodes[1].loadFromSavegameFunc ~= nil then
        v2.washableNodes[1].loadFromSavegameFunc(savegame.xmlFile, v7)
      end
      -- TODO: structure LOP_FORNLOOP (pc 65, target 30)
      return
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 72, target 83)
  self:setNodeDirtAmount(v2.washableNodes[1], 0, true)
  -- TODO: structure LOP_FORNLOOP (pc 82, target 73)
end
function Washable:saveToXMLFile(xmlFile, key, usedModNames)
  -- TODO: structure LOP_FORNPREP (pc 7, target 35)
  local v9 = string.format("%s.dirtNode(%d)", key, 1 - 1)
  xmlFile:setValue(v9 .. "#amount", self.spec_washable.washableNodes[1].dirtAmount)
  if self.spec_washable.washableNodes[1].saveToSavegameFunc ~= nil then
    self.spec_washable.washableNodes[1].saveToSavegameFunc(xmlFile, v9)
  end
  -- TODO: structure LOP_FORNLOOP (pc 34, target 8)
end
function Washable.onReadStream(v0, v1, v2)
  Washable.readWashableNodeData(v0, v1, v2)
end
function Washable.onWriteStream(v0, v1, v2)
  Washable.writeWashableNodeData(v0, v1, v2)
end
function Washable:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 and self.spec_washable.washableNodes ~= nil then
    local v5 = streamReadBool(streamId)
    if v5 then
      Washable.readWashableNodeData(self, streamId, connection)
    end
  end
end
function Washable:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_washable.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      Washable.writeWashableNodeData(self, streamId, connection)
    end
  end
end
function Washable:readWashableNodeData(streamId, connection)
  -- TODO: structure LOP_FORNPREP (pc 7, target 83)
  local v9 = streamReadUIntN(streamId, Washable.SEND_NUM_BITS)
  self:setNodeDirtAmount(self.spec_washable.washableNodes[1], v9 / Washable.SEND_MAX_VALUE, true)
  v9 = streamReadBool(streamId)
  if v9 then
    local v10 = streamReadUIntN(streamId, Washable.SEND_NUM_BITS)
    local v11 = streamReadUIntN(streamId, Washable.SEND_NUM_BITS)
    local v12 = streamReadUIntN(streamId, Washable.SEND_NUM_BITS)
    self:setNodeDirtColor(self.spec_washable.washableNodes[1], v10 / Washable.SEND_MAX_VALUE, v11 / Washable.SEND_MAX_VALUE, v12 / Washable.SEND_MAX_VALUE, true)
  end
  -- TODO: structure LOP_FORNLOOP (pc 82, target 8)
end
function Washable:writeWashableNodeData(streamId, connection)
  -- TODO: structure LOP_FORNPREP (pc 7, target 107)
  local v10 = math.floor(self.spec_washable.washableNodes[1].dirtAmount * Washable.SEND_MAX_VALUE + 0.5)
  streamWriteUIntN(streamId, v10, Washable.SEND_NUM_BITS)
  streamWriteBool(streamId, self.spec_washable.washableNodes[1].colorChanged)
  if self.spec_washable.washableNodes[1].colorChanged then
    v10 = math.floor(self.spec_washable.washableNodes[1].color[1] * Washable.SEND_MAX_VALUE + 0.5)
    streamWriteUIntN(streamId, v10, Washable.SEND_NUM_BITS)
    v10 = math.floor(self.spec_washable.washableNodes[1].color[2] * Washable.SEND_MAX_VALUE + 0.5)
    streamWriteUIntN(streamId, v10, Washable.SEND_NUM_BITS)
    v10 = math.floor(self.spec_washable.washableNodes[1].color[3] * Washable.SEND_MAX_VALUE + 0.5)
    streamWriteUIntN(streamId, v10, Washable.SEND_NUM_BITS)
    self.spec_washable.washableNodes[1].colorChanged = false
  end
  -- TODO: structure LOP_FORNLOOP (pc 106, target 8)
end
function Washable:onUpdateTick(dt, isActive, isActiveForInput, isSelected)
  if self.isServer then
    local v8 = self:getDirtMultiplier()
    local v9 = Washable.getIntervalMultiplier()
    self.spec_washable.lastDirtMultiplier = v8 * v9 * Platform.gameplay.dirtDurationScale
    local allowsWashingByRain = self:getAllowsWashingByType(Washable.WASHTYPE_RAIN)
    if allowsWashingByRain then
      local v11 = g_currentMission.environment.weather:getRainFallScale()
      v11 = g_currentMission.environment.weather:getTimeSinceLastRain()
      v11 = g_currentMission.environment.weather:getCurrentTemperature()
    end
    -- TODO: structure LOP_FORNPREP (pc 49, target 73)
    local v14 = v5.washableNodes[1].updateFunc(self, v5.washableNodes[1], dt, allowsWashingByRain, v7, v8, v9)
    if v14 ~= 0 then
      self:setNodeDirtAmount(v5.washableNodes[1], v5.washableNodes[1].dirtAmount + v14)
    end
    -- TODO: structure LOP_FORNLOOP (pc 72, target 50)
  end
end
function Washable:updateDirtAmount(nodeData, dt, allowsWashingByRain, rainScale, timeSinceLastRain, temperature)
  if allowsWashingByRain and 0.1 < rainScale and timeSinceLastRain < 30 and 0 < temperature and 0.5 < nodeData.dirtAmount then
  end
  if v7.lastDirtMultiplier ~= 0 then
  end
  return v8
end
function Washable:addDirtAmount(dirtAmount, force)
  -- TODO: structure LOP_FORNPREP (pc 7, target 20)
  self:setNodeDirtAmount(self.spec_washable.washableNodes[1], self.spec_washable.washableNodes[1].dirtAmount + dirtAmount, force)
  -- TODO: structure LOP_FORNLOOP (pc 19, target 8)
end
function Washable:getDirtAmount()
  -- TODO: structure LOP_FORNPREP (pc 8, target 16)
  -- TODO: structure LOP_FORNLOOP (pc 15, target 9)
  return (0 + self.spec_washable.washableNodes[1].dirtAmount) / #self.spec_washable.washableNodes
end
function Washable:setNodeDirtAmount(nodeData, dirtAmount, force)
  local v5 = MathUtil.clamp(dirtAmount, 0, 1)
  nodeData.dirtAmount = v5
  local v6 = math.abs(nodeData.dirtAmountSent - nodeData.dirtAmount)
  if Washable.SEND_THRESHOLD >= v6 then
    -- if not v3 then goto L65 end
  end
  -- TODO: structure LOP_FORNPREP (pc 32, target 53)
  local v10, v11, v12, v13 = getShaderParameter(nodeData.nodes[1], "RDT")
  setShaderParameter(nodeData.nodes[1], "RDT", v10, nodeData.dirtAmount, 0, v13, false)
  -- TODO: structure LOP_FORNLOOP (pc 52, target 33)
  if self.isServer then
    self:raiseDirtyFlags(v4.dirtyFlag)
    nodeData.dirtAmountSent = nodeData.dirtAmount
  end
end
function Washable.getNodeDirtAmount(v0, v1)
  return v1.dirtAmount
end
function Washable:setNodeDirtColor(nodeData, r, g, b, force)
  local v10 = math.abs(r - nodeData.color[1])
  if Washable.SEND_THRESHOLD >= v10 then
    v10 = math.abs(g - nodeData.color[2])
    if Washable.SEND_THRESHOLD >= v10 then
      v10 = math.abs(b - nodeData.color[3])
      if Washable.SEND_THRESHOLD >= v10 then
        -- if not v5 then goto L88 end
      end
    end
  end
  for v13, v14 in pairs(nodeData.nodes) do
    local v15, v16, v17, v18 = getShaderParameter(v14, "dirtColor")
    setShaderParameter(v14, "dirtColor", r, g, b, v18, false)
  end
  nodeData.color[1] = r
  nodeData.color[2] = g
  nodeData.color[3] = b
  if self.isServer then
    self:raiseDirtyFlags(v6.dirtyFlag)
    nodeData.colorChanged = true
  end
end
function Washable:addAllSubWashableNodes(rootNode)
  if rootNode ~= nil then
    I3DUtil.getNodesByShaderParam(rootNode, "RDT", {}, true)
    self:addWashableNodes({})
  end
  self:addDirtAmount(0, true)
end
function Washable:addWashableNodes(nodes)
  for v5, v6 in ipairs(nodes) do
    local v7, v8, v9, v10 = self:validateWashableNode(v6)
    if v7 then
      self:addToGlobalWashableNode(v6)
    else
      if not (v8 ~= nil) then
        continue
      end
      self:addToLocalWashableNode(v6, v8, v9, v10)
    end
  end
end
function Washable.validateWashableNode(v0, v1)
  return true, nil
end
function Washable:addToGlobalWashableNode(node)
  if self.spec_washable.washableNodes[1] ~= nil then
    table.insert(self.spec_washable.washableNodes[1].nodes, node)
  end
end
function Washable:getWashableNodeByCustomIndex(customIndex)
  return self.spec_washable.washableNodesByIndex[customIndex]
end
function Washable:addToLocalWashableNode(node, updateFunc, customIndex, extraParams)
  if customIndex ~= nil then
    if self.spec_washable.washableNodesByIndex[customIndex] ~= nil then
      table.insert(self.spec_washable.washableNodesByIndex[customIndex].nodes, node)
      return
    end
    v5.washableNodesByIndex[customIndex] = v6
  end
  v6.nodes = {node}
  v6.updateFunc = updateFunc
  v6.dirtAmount = 0
  v6.dirtAmountSent = 0
  v6.colorChanged = false
  local v7, v8 = v7:getDirtColors()
  v6.color = {v7[1], v7[2], v7[3]}
  v6.defaultColor = {v7[1], v7[2], v7[3]}
  if extraParams ~= nil then
    for v12, v13 in pairs(extraParams) do
      v6[v12] = v13
    end
  end
  table.insert(v5.washableNodes, v6)
end
function Washable:removeAllSubWashableNodes(rootNode)
  if rootNode ~= nil then
    I3DUtil.getNodesByShaderParam(rootNode, "RDT", {})
    for v6, v7 in pairs({}) do
      self:removeWashableNode(v7)
    end
  end
end
function Washable:removeWashableNode(node)
  if node ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 9, target 20)
    table.removeElement(self.spec_washable.washableNodes[1].nodes, node)
    -- TODO: structure LOP_FORNLOOP (pc 19, target 10)
  end
end
function Washable:getDirtMultiplier()
  local v3 = self:getLastSpeed()
  if v3 < 1 then
  end
  v3 = self:getIsOnField()
  if v3 then
    v3 = v3:getGroundWetness()
    if 0 < v3 then
    end
  end
  return v2
end
function Washable:getWorkDirtMultiplier()
  return self.spec_washable.workMultiplier
end
function Washable:getWashDuration()
  return self.spec_washable.washDuration
end
function Washable.getIntervalMultiplier()
  if g_currentMission.missionInfo.dirtInterval == 1 then
    return 0
  end
  if g_currentMission.missionInfo.dirtInterval == 2 then
    return 0.25
  end
  if g_currentMission.missionInfo.dirtInterval == 3 then
    return 0.5
  end
  if g_currentMission.missionInfo.dirtInterval == 4 then
    return 1
  end
end
function Washable:getAllowsWashingByType(type)
  if self.spec_washable.blockedWashTypes[type] ~= nil then
  end
  return true
end
function Washable:updateDebugValues(values)
  if self.spec_washable.washableNodes ~= nil then
    local allowsWashingByRain = self:getAllowsWashingByType(Washable.WASHTYPE_RAIN)
    if allowsWashingByRain then
      local v8 = g_currentMission.environment.weather:getRainFallScale()
      v8 = g_currentMission.environment.weather:getTimeSinceLastRain()
      v8 = g_currentMission.environment.weather:getCurrentTemperature()
    end
    for v10, v11 in ipairs(v2.washableNodes) do
      local v12 = v11.updateFunc(self, v11, 3600000, allowsWashingByRain, v4, v5, v6)
      local v16 = string.format("%.4f a/h (%.2f) (color %.2f %.2f %.2f)", v12, v2.washableNodes[v10].dirtAmount, v11.color[1], v11.color[2], v11.color[3])
      table.insert(values, {name = "WashableNode" .. v10, value = v16})
    end
  end
end
