-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ManureHeap = {}
local ManureHeap_mt = Class(ManureHeap, Object)
InitStaticObjectClass(ManureHeap, "ManureHeap", ObjectIds.OBJECT_MANURE_HEAP)
function ManureHeap.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.unloadingStations = {}
  v3.loadingStations = {}
  v3.fillLevelChangedListeners = {}
  v3.rootNode = 0
  return v3
end
function ManureHeap:load(components, xmlFile, key, customEnv, i3dMappings, rootNode)
  local v7 = xmlFile:getValue(key .. "#node", components[1].node, components, i3dMappings)
  self.rootNode = v7
  if self.rootNode == nil then
    Logging.xmlError(xmlFile, "Missing root node for manure heap")
    return false
  end
  v7 = xmlFile:getValue(key .. "#isExtension", true)
  self.isExtension = v7
  self.area = {}
  local areaStart = xmlFile:getValue(key .. ".area#startNode", nil, components, i3dMappings)
  self.area.start = areaStart
  areaStart = xmlFile:getValue(key .. ".area#widthNode", nil, components, i3dMappings)
  self.area.width = areaStart
  areaStart = xmlFile:getValue(key .. ".area#heightNode", nil, components, i3dMappings)
  self.area.height = areaStart
  if self.area.start ~= nil and self.area.width ~= nil and self.area.height == nil then
  end
  v7.isAvailable = areaStart
  if self.area.isAvailable then
    v7 = DensityMapHeightUtil.getAreaPartitions(self.area.start, self.area.width, self.area.height)
    self.splitAreas = v7
  end
  v7 = xmlFile:getValue(key .. ".area#activationTriggerNode", nil, components, i3dMappings)
  self.activationTriggerNode = v7
  if self.activationTriggerNode == nil and self.area.isAvailable then
    Logging.xmlError(xmlFile, "Missing activation trigger node for manure heap")
    return false
  end
  if self.area.isAvailable and self.isServer then
    addTrigger(self.activationTriggerNode, "onVehicleCallback", self)
  end
  self.clearArea = {}
  areaStart = xmlFile:getValue(key .. ".clearArea#startNode", nil, components, i3dMappings)
  self.clearArea.start = areaStart
  areaStart = xmlFile:getValue(key .. ".clearArea#widthNode", nil, components, i3dMappings)
  self.clearArea.width = areaStart
  areaStart = xmlFile:getValue(key .. ".clearArea#heightNode", nil, components, i3dMappings)
  self.clearArea.height = areaStart
  if self.clearArea.start ~= nil and self.clearArea.width ~= nil and self.clearArea.height == nil then
  end
  v7.isAvailable = areaStart
  v7 = xmlFile:getValue(key .. "#capacity", 20000)
  self.capacity = v7
  if self.capacity <= 0 then
    Logging.xmlError(xmlFile, "Invalid capacity")
    return false
  end
  self.fillTypeIndex = FillType.MANURE
  {}[self.fillTypeIndex] = true
  self.fillTypes = {}
  {}[self.fillTypeIndex] = 0
  self.fillLevels = {}
  v7 = FillPlane.new()
  self.fillPlane = v7
  v7 = v7:load(components, xmlFile, key .. ".fillPlane", i3dMappings)
  if v7 then
    v7:setFillType(self.fillTypeIndex)
    v7:setState(0)
    v7 = xmlFile:getValue(key .. ".fillPlane#capacity", self.capacity)
    self.fillPlaneCapacity = v7
  else
    v7:delete()
    self.fillPlane = nil
  end
  v7 = v7:getMinValidLiterValue(self.fillTypeIndex)
  self.minValidLiterValue = v7
  self.manureToDrop = 0
  self.manureToPick = 0
  self.visibleFillLevel = 0
  self.lastVisibleFillLevel = 0
  v7 = self:getNextDirtyFlag()
  self.dirtyFlag = v7
  return true
end
function ManureHeap:delete()
  if self.isServer then
    if self.clearArea ~= nil and self.clearArea.isAvailable then
      local v1, v2, v3 = getWorldTranslation(self.clearArea.start)
      local v4, v5, v6 = getWorldTranslation(self.clearArea.width)
      local v7, v8, v9 = getWorldTranslation(self.clearArea.height)
      DensityMapHeightUtil.clearArea(v1, v3, v4, v6, v7, v9)
    end
    if self.activationTriggerNode ~= nil then
      removeTrigger(self.activationTriggerNode)
      self.activationTriggerNode = nil
    end
  end
  if self.area ~= nil and self.area.isAvailable then
    v1:removeFixedFillTypesArea(self.area)
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function ManureHeap:finalize()
  if self.area.isAvailable then
    v1:setFixedFillTypesArea(self.area, self.fillTypes)
  end
  self:updateTotalFillLevel(true)
end
function ManureHeap:loadFromXMLFile(xmlFile, key)
  local v3 = xmlFile:getValue(key .. "#manureToDrop", self.manureToDrop)
  self.manureToDrop = v3
  v3 = xmlFile:getValue(key .. "#manureToPick", self.manureToPick)
  self.manureToPick = v3
  return true
end
function ManureHeap:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#manureToDrop", self.manureToDrop)
  xmlFile:setValue(key .. "#manureToPick", self.manureToPick)
end
function ManureHeap:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v5 = streamReadFloat32(streamId)
  self.fillLevels[self.fillTypeIndex] = v5
end
function ManureHeap:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  streamWriteFloat32(streamId, self.fillLevels[self.fillTypeIndex])
end
function ManureHeap:readUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      local v6 = streamReadInt32(streamId)
      self.fillLevels[self.fillTypeIndex] = v6
    end
  end
end
function ManureHeap:writeUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.dirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      streamWriteInt32(streamId, self.fillLevels[self.fillTypeIndex])
    end
  end
end
function ManureHeap:update(dt)
  if self.area.isAvailable and self.isServer then
    if self.minValidLiterValue < self.manureToDrop then
      for v6, v7 in ipairs(self.splitAreas) do
        local v8, v9, v10, v11, v12, v13, v14 = DensityMapHeightUtil.getLineByArea(v7.start, v7.width, v7.height, false)
        local v15, v16 = DensityMapHeightUtil.tipToGroundAroundLine(nil, v2, self.fillTypeIndex, v8, v9, v10, v11, v12, v13, v14, v14, v7.lineOffset, false, nil)
        v7.lineOffset = v16
        local v17 = math.max(v2 - v15, 0)
        if not (v17 > 0) then
          break
        end
      end
      self.manureToDrop = v2
    end
    if self.minValidLiterValue < self.manureToPick then
      -- TODO: structure LOP_FORNPREP (pc 81, target 128)
      v7, v8, v9, v10, v11, v12, v13 = DensityMapHeightUtil.getLineByArea(self.splitAreas[#self.splitAreas].start, self.splitAreas[#self.splitAreas].width, self.splitAreas[#self.splitAreas].height, false)
      v14, v15 = DensityMapHeightUtil.tipToGroundAroundLine(nil, -self.manureToPick, self.fillTypeIndex, v7, v8, v9, v10, v11, v12, v13, v13, self.splitAreas[#self.splitAreas].lineOffset, false, nil)
      self.splitAreas[#self.splitAreas].lineOffset = v15
      v16 = math.max(self.manureToPick + v14, 0)
      if v16 > 0 then
        -- TODO: structure LOP_FORNLOOP (pc 127, target 82)
      end
      self.manureToPick = v2
    end
    self:updateTotalFillLevel()
  end
end
function ManureHeap:updateTotalFillLevel(v1)
  if self.area.isAvailable then
    local v3, v4, v5 = getWorldTranslation(self.area.start)
    local v6, v7, v8 = getWorldTranslation(self.area.width)
    local v9, v10, v11 = getWorldTranslation(self.area.height)
    local v12 = DensityMapHeightUtil.getFillLevelAtArea(self.fillTypeIndex, v3, v5, v6, v8, v9, v11)
  end
  if v2 == self.lastVisibleFillLevel then
    -- if not v1 then goto L65 end
  end
  self.fillLevels[self.fillTypeIndex] = v2 + self.manureToDrop - self.manureToPick
  self.lastVisibleFillLevel = v2
  self:onFillLevelChanged()
  self:raiseDirtyFlags(self.dirtyFlag)
end
function ManureHeap:getIsFillTypeSupported(fillTypeIndex)
  if fillTypeIndex ~= self.fillTypeIndex then
  end
  return true
end
function ManureHeap:getFillLevel(fillTypeIndex)
  if fillTypeIndex == self.fillTypeIndex then
    return self.fillLevels[fillTypeIndex]
  end
  return 0
end
function ManureHeap:getFillLevels()
  return self.fillLevels
end
function ManureHeap:getCapacity(fillTypeIndex)
  if fillTypeIndex == self.fillTypeIndex then
    return self.capacity
  end
  return 0
end
function ManureHeap:setFillLevel(fillLevel, fillTypeIndex)
  if fillTypeIndex ~= self.fillTypeIndex then
    return
  end
  local v4 = MathUtil.clamp(fillLevel, 0, self.capacity)
  local v5 = math.abs(v4 - self.fillLevels[fillTypeIndex])
  if 0.1 < v5 then
    self.fillLevels[fillTypeIndex] = v4
    self:onFillLevelChanged()
    if self.isServer then
      if 0 < v4 - self.fillLevels[fillTypeIndex] then
        self.manureToDrop = self.manureToDrop + v5
      else
        self.manureToPick = self.manureToPick + v5
      end
      if self.manureToDrop < self.manureToPick then
        self.manureToPick = self.manureToPick - self.manureToDrop
        self.manureToDrop = 0
      else
        self.manureToDrop = self.manureToDrop - self.manureToPick
        self.manureToPick = 0
      end
      self:raiseActive()
      self:raiseDirtyFlags(self.dirtyFlag)
    end
    for v9, v10 in ipairs(self.fillLevelChangedListeners) do
      v10(self.fillTypeIndex, v4)
    end
  end
end
function ManureHeap:onFillLevelChanged()
  if self.fillPlane ~= nil then
    local v4 = math.min(self.fillLevels[self.fillTypeIndex] / self.fillPlaneCapacity, 1)
    v2:setState(...)
  end
end
function ManureHeap:removeManure(absDelta)
  if self.isServer then
    local newFillLevel = math.max(self.fillLevels[self.fillTypeIndex] - absDelta, 0)
    self:setFillLevel(newFillLevel, self.fillTypeIndex)
  end
end
function ManureHeap:getFreeCapacity(fillTypeIndex)
  if fillTypeIndex == self.fillTypeIndex then
    return math.max(self.capacity - self.fillLevels[self.fillTypeIndex], 0)
  end
  return 0
end
function ManureHeap:getSupportedFillTypes()
  return self.fillTypes
end
function ManureHeap:onVehicleCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if onLeave then
    local v6 = v6:getNodeObject(otherId)
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L25
    self:raiseActive()
    return
  end
  if onEnter and g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
    self:raiseActive()
  end
end
function ManureHeap:addUnloadingStation(station)
  self.unloadingStations[station] = station
end
function ManureHeap:removeUnloadingStation(station)
  self.unloadingStations[station] = nil
end
function ManureHeap:addLoadingStation(loadingStation)
  self.loadingStations[loadingStation] = loadingStation
end
function ManureHeap:removeLoadingStation(loadingStation)
  self.loadingStations[loadingStation] = nil
end
function ManureHeap:addFillLevelChangedListeners(func)
  table.addElement(self.fillLevelChangedListeners, func)
end
function ManureHeap:removeFillLevelChangedListeners(func)
  table.removeElement(self.fillLevelChangedListeners, func)
end
function ManureHeap:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Manure heap rootnode")
  self:register(XMLValueType.INT, v1 .. "#capacity", "Capacity", 20000)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".area#startNode", "Manure area start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".area#widthNode", "Manure area width node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".area#heightNode", "Manure area height node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".area#activationTriggerNode", "Activation trigger")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".clearArea#startNode", "Manure clear area start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".clearArea#widthNode", "Manure clear area width node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".clearArea#heightNode", "Manure clear area height node")
  FillPlane.registerXMLPaths(self, v1 .. ".fillPlane")
  self:register(XMLValueType.INT, v1 .. ".fillPlane#capacity", "Capacity at which the fill plane is at the max. level", "same as heap capacity")
end
function ManureHeap:registerSavegameXMLPaths(v1)
  self:register(XMLValueType.INT, v1 .. "#manureToDrop", "Manure that should be drop the visible heap", 0)
  self:register(XMLValueType.INT, v1 .. "#manureToPick", "Manure that need to be picked from visible heap", 0)
end
