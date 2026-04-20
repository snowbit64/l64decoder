-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TestAreas = {}
function TestAreas.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("TestAreas")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, WorkArea.WORK_AREA_XML_KEY .. ".testAreas#autoGenerate", "Automatically generate test areas", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_KEY .. ".testAreas#rootNode", "Root node as reference for width")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_KEY .. ".testAreas#startNode", "Left node reference for automatic calculation")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_KEY .. ".testAreas#widthNode", "Right node reference for automatic calculation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_KEY .. ".testAreas#zOffset", "Offset in Z direction", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_KEY .. ".testAreas#xOffset", "Offset for both sides mirrored (negative value will shrink area, positive will increase area on both sides)", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_KEY .. ".testAreas#length", "Length of area itself", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_KEY .. ".testAreas#numAreas", "Number of used areas", 10)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_KEY .. ".testAreas#areaWidthScale", "Width percentage of each individual area", 0.9)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_KEY .. ".testAreas#scale", "Scale of test areas over width of work area", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_KEY .. ".testAreas.testArea(?)#startNode", "Start Node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_KEY .. ".testAreas.testArea(?)#widthNode", "Width Node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_KEY .. ".testAreas.testArea(?)#heightNode", "Height Node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas#autoGenerate", "Automatically generate test areas", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas#rootNode", "Root node as reference for width")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas#startNode", "Left node reference for automatic calculation")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas#widthNode", "Right node reference for automatic calculation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas#zOffset", "Offset in Z direction", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas#xOffset", "Offset for both sides mirrored (negative value will shrink area, positive will increase area on both sides)", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas#length", "Length of area itself", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas#numAreas", "Number of used areas", 10)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas#areaWidthScale", "Width percentage of each individual area", 0.9)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas#scale", "Scale of test areas over width of work area", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas.testArea(?)#startNode", "Start Node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas.testArea(?)#widthNode", "Width Node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".testAreas.testArea(?)#heightNode", "Height Node")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function TestAreas.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(WorkArea, v0)
end
function TestAreas.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "readTestAreasStream", TestAreas.readTestAreasStream)
  SpecializationUtil.registerFunction(vehicleType, "writeTestAreasStream", TestAreas.writeTestAreasStream)
  SpecializationUtil.registerFunction(vehicleType, "generateTestAreasForWorkArea", TestAreas.generateTestAreasForWorkArea)
  SpecializationUtil.registerFunction(vehicleType, "calculateTestAreaDimensions", TestAreas.calculateTestAreaDimensions)
  SpecializationUtil.registerFunction(vehicleType, "registerTestAreaForWorkArea", TestAreas.registerTestAreaForWorkArea)
  SpecializationUtil.registerFunction(vehicleType, "setTestAreaRequirements", TestAreas.setTestAreaRequirements)
  SpecializationUtil.registerFunction(vehicleType, "getIsTestAreaActive", TestAreas.getIsTestAreaActive)
  SpecializationUtil.registerFunction(vehicleType, "processTestArea", TestAreas.processTestArea)
  SpecializationUtil.registerFunction(vehicleType, "getTestAreaWidthByWorkAreaIndex", TestAreas.getTestAreaWidthByWorkAreaIndex)
  SpecializationUtil.registerFunction(vehicleType, "getTestAreaChargeByWorkAreaIndex", TestAreas.getTestAreaChargeByWorkAreaIndex)
end
function TestAreas.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", TestAreas.loadWorkAreaFromXML)
end
function TestAreas.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoad", TestAreas)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", TestAreas)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", TestAreas)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", TestAreas)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", TestAreas)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", TestAreas)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", TestAreas)
end
function TestAreas:onPreLoad(savegame)
  self.spec_testAreas.testAreas = {}
  self.spec_testAreas.testAreasByWorkArea = {}
  self.spec_testAreas.testAreasByWorkAreaIndex = {}
  local v3 = self:getNextDirtyFlag()
  self.spec_testAreas.testAreaDirtyFlag = v3
end
function TestAreas:onPostLoad(savegame)
  for v6, v7 in pairs(self.spec_testAreas.testAreasByWorkArea) do
    v2.testAreasByWorkAreaIndex[v6.index] = v7
  end
end
function TestAreas:onReadStream(streamId, connection)
  self:readTestAreasStream(streamId, connection)
end
function TestAreas:onWriteStream(streamId, connection)
  self:writeTestAreasStream(streamId, connection)
end
function TestAreas:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      self:readTestAreasStream(streamId, connection)
    end
  end
end
function TestAreas:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.spec_testAreas.testAreaDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      self:writeTestAreasStream(streamId, connection)
    end
  end
end
function TestAreas:readTestAreasStream(streamId, connection)
  -- TODO: structure LOP_FORNPREP (pc 8, target 24)
  local v9 = streamReadBool(streamId)
  self.spec_testAreas.testAreas[1].hasContact = v9
  if self.spec_testAreas.testAreas[1].hasContact then
  else
    -- TODO: structure LOP_FORNLOOP (pc 23, target 9)
  end
  if v4 then
    -- TODO: structure LOP_FORNPREP (pc 30, target 44)
    v9 = streamReadBool(streamId)
    v3.testAreas[#v3.testAreas].hasContact = v9
    if not v3.testAreas[#v3.testAreas].hasContact then
      -- TODO: structure LOP_FORNLOOP (pc 43, target 31)
    end
  end
end
function TestAreas:writeTestAreasStream(streamId, connection)
  -- TODO: structure LOP_FORNPREP (pc 8, target 24)
  streamWriteBool(streamId, self.spec_testAreas.testAreas[1].hasContact)
  if self.spec_testAreas.testAreas[1].hasContact then
  else
    -- TODO: structure LOP_FORNLOOP (pc 23, target 9)
  end
  if v4 then
    -- TODO: structure LOP_FORNPREP (pc 30, target 44)
    streamWriteBool(streamId, v3.testAreas[#v3.testAreas].hasContact)
    if not v3.testAreas[#v3.testAreas].hasContact then
      -- TODO: structure LOP_FORNLOOP (pc 43, target 31)
    end
  end
end
function TestAreas:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v9, v10 in pairs(self.spec_testAreas.testAreasByWorkArea) do
    local v11 = self:getIsWorkAreaActive(v9)
    if v11 then
      v9.testAreaCurrentWidthMin = -math.huge
      v9.testAreaCurrentWidthMax = math.huge
      -- TODO: structure LOP_FORNPREP (pc 29, target 50)
      local v19 = self:processTestArea(v10[1])
      if v19 then
        v9.testAreaCurrentWidthMin = v10[1].minWidthValue
        v9.testAreaCurrentWidthMax = v10[1].maxWidthValue
        -- goto L50  (LOP_JUMP +3)
      else
      end
      -- TODO: structure LOP_FORNLOOP (pc 49, target 30)
      if v13 then
        -- TODO: structure LOP_FORNPREP (pc 55, target 75)
        if not false then
          local v20 = self:processTestArea(v10[v11])
          if v20 then
            v9.testAreaCurrentWidthMax = v10[v11].maxWidthValue
            -- goto L74  (LOP_JUMP +5)
          end
        else
          v10[v11].hasContact = true
        end
        -- TODO: structure LOP_FORNLOOP (pc 74, target 56)
      end
      if not (VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES) then
        continue
      end
      local v17 = math.max(v9.testAreaCurrentWidthMin, v9.testAreaMinX)
      local v15, v16, v17 = localToWorld(v9.testAreaRootNode, v17, 0, 0)
      v20 = math.min(v9.testAreaCurrentWidthMax, v9.testAreaMaxX)
      local v18, v19, v20 = localToWorld(v9.testAreaRootNode, v20, 0, 0)
      drawDebugLine(v15, v16, v17, 0, 1, 0, v15, v16 + 2, v17, 0, 1, 0)
      drawDebugLine(v18, v19, v20, 0, 1, 0, v18, v19 + 1, v20, 0, 1, 0)
    else
      v9.testAreaCurrentWidthMin = -math.huge
      v9.testAreaCurrentWidthMax = math.huge
    end
  end
end
function TestAreas:loadWorkAreaFromXML(superFunc, workArea, xmlFile, key)
  local v5 = superFunc(self, workArea, xmlFile, key)
  if not v5 then
    return false
  end
  if not Platform.gameplay.allowTestAreas then
    v5 = xmlFile:hasProperty(key .. ".testAreas")
    if v5 then
      Logging.xmlWarning(xmlFile, "TestAreas not allowed on this platform in '%s'", key)
    end
  end
  v5 = xmlFile:getValue(key .. ".testAreas#autoGenerate", false)
  workArea.automaticTestAreas = v5
  v5 = xmlFile:getValue(key .. ".testAreas#rootNode", nil, self.components, self.i3dMappings)
  workArea.testAreaRootNode = v5
  v5 = xmlFile:getValue(key .. ".testAreas#startNode", workArea.start, self.components, self.i3dMappings)
  workArea.testAreaStartNode = v5
  v5 = xmlFile:getValue(key .. ".testAreas#widthNode", workArea.width, self.components, self.i3dMappings)
  workArea.testAreaWidthNode = v5
  v5 = xmlFile:getValue(key .. ".testAreas#xOffset", 0)
  workArea.testAreaXOffset = v5
  v5 = xmlFile:getValue(key .. ".testAreas#zOffset", 0)
  workArea.testAreaZOffset = v5
  v5 = xmlFile:getValue(key .. ".testAreas#numAreas", 10)
  workArea.testAreaNumAreas = v5
  v5 = xmlFile:getValue(key .. ".testAreas#length", 0.5)
  workArea.testAreaLength = v5
  v5 = xmlFile:getValue(key .. ".testAreas#areaWidthScale", 0.9)
  workArea.testAreaWidthScale = v5
  v5 = xmlFile:getValue(key .. ".testAreas#scale", 1)
  workArea.testAreaScale = v5
  workArea.testAreaMinX = 0
  workArea.testAreaMaxX = 0
  if workArea.automaticTestAreas then
    if workArea.testAreaRootNode == nil then
      v5 = createTransformGroup("testAreaRootNode")
      workArea.testAreaRootNode = v5
      local v6 = getParent(workArea.testAreaStartNode)
      link(v6, workArea.testAreaRootNode)
      local v5, v6, v7 = getWorldTranslation(workArea.testAreaStartNode)
      local v8, v9, v10 = getWorldTranslation(workArea.testAreaWidthNode)
      setWorldTranslation(workArea.testAreaRootNode, (v5 + v8) * 0.5, (v6 + v9) * 0.5, (v7 + v10) * 0.5)
    end
    self:generateTestAreasForWorkArea(workArea)
  else
    if workArea.testAreaRootNode == nil then
      workArea.testAreaRootNode = self.components[1].node
    end
    xmlFile:iterate(key .. ".testAreas.testArea", function(self, superFunc)
      local xmlFile = xmlFile:getValue(superFunc .. "#startNode", nil, u1.components, u1.i3dMappings)
      xmlFile = xmlFile:getValue(superFunc .. "#widthNode", nil, u1.components, u1.i3dMappings)
      xmlFile = xmlFile:getValue(superFunc .. "#heightNode", nil, u1.components, u1.i3dMappings)
      if {start = xmlFile, width = xmlFile, height = xmlFile}.start ~= nil and {start = xmlFile, width = xmlFile, height = xmlFile}.width ~= nil and {start = xmlFile, width = xmlFile, height = xmlFile}.height ~= nil then
        xmlFile:calculateTestAreaDimensions(u2, {start = xmlFile, width = xmlFile, height = xmlFile})
        xmlFile:registerTestAreaForWorkArea(u2, {start = xmlFile, width = xmlFile, height = xmlFile})
      end
    end)
  end
  if workArea.testAreaRootNode == nil then
  end
  workArea.hasTestAreas = true
  workArea.testAreaCurrentWidthMin = -math.huge
  workArea.testAreaCurrentWidthMax = math.huge
  return true
end
function TestAreas:generateTestAreasForWorkArea(workArea)
  local v2 = createTransformGroup("testAreaParent")
  workArea.testAreaParent = v2
  local v3 = getParent(workArea.testAreaStartNode)
  link(v3, workArea.testAreaParent)
  local v4 = getTranslation(workArea.testAreaStartNode)
  setTranslation(...)
  v2, v3, v4 = localToLocal(workArea.testAreaStartNode, workArea.testAreaWidthNode, 0, 0, 0)
  local v5, v6, v7 = MathUtil.vector3Normalize(v2, v3, v4)
  v7 = getParent(workArea.testAreaStartNode)
  v5, v6, v7 = localDirectionToLocal(workArea.testAreaStartNode, v7, v5, v6, v7)
  I3DUtil.setDirection(workArea.testAreaParent, v5, v6, v7, 0, 1, 0)
  v5 = calcDistanceFrom(workArea.testAreaStartNode, workArea.testAreaWidthNode)
  -- TODO: structure LOP_FORNPREP (pc 105, target 211)
  local v13 = string.format("testArea%dStart", 1)
  local v12 = createTransformGroup(...)
  local v14 = string.format("testArea%dWidth", 1)
  v13 = createTransformGroup(...)
  local v15 = string.format("testArea%dHeight", 1)
  v14 = createTransformGroup(...)
  link(workArea.testAreaParent, v12)
  link(workArea.testAreaParent, v13)
  link(workArea.testAreaParent, v14)
  setTranslation(v12, -(workArea.testAreaZOffset + workArea.testAreaLength), 0, -((1 - 1) * v5 * workArea.testAreaScale / workArea.testAreaNumAreas) - v5 * workArea.testAreaScale / workArea.testAreaNumAreas * (1 - workArea.testAreaWidthScale) * 0.5 + workArea.testAreaXOffset + -v5 * (1 - workArea.testAreaScale) * 0.5)
  setTranslation(v13, -(workArea.testAreaZOffset + workArea.testAreaLength), 0, -(1 * v5 * workArea.testAreaScale / workArea.testAreaNumAreas) + v5 * workArea.testAreaScale / workArea.testAreaNumAreas * (1 - workArea.testAreaWidthScale) * 0.5 + workArea.testAreaXOffset + -v5 * (1 - workArea.testAreaScale) * 0.5)
  setTranslation(v14, -workArea.testAreaZOffset, 0, -((1 - 1) * v5 * workArea.testAreaScale / workArea.testAreaNumAreas) - v5 * workArea.testAreaScale / workArea.testAreaNumAreas * (1 - workArea.testAreaWidthScale) * 0.5 + workArea.testAreaXOffset + -v5 * (1 - workArea.testAreaScale) * 0.5)
  self:calculateTestAreaDimensions(workArea, {start = v12, width = v13, height = v14, areaSideOffset = v5 * workArea.testAreaScale / workArea.testAreaNumAreas * (1 - workArea.testAreaWidthScale) * 0.5 + workArea.testAreaXOffset})
  self:registerTestAreaForWorkArea(workArea, {start = v12, width = v13, height = v14, areaSideOffset = v5 * workArea.testAreaScale / workArea.testAreaNumAreas * (1 - workArea.testAreaWidthScale) * 0.5 + workArea.testAreaXOffset})
  -- TODO: structure LOP_FORNLOOP (pc 210, target 106)
end
function TestAreas.calculateTestAreaDimensions(v0, v1, v2)
  v2.areaSideOffset = v2.areaSideOffset or 0
  local v5 = getWorldTranslation(v2.start)
  local v3, v4, v5 = worldToLocal(...)
  local v8 = getWorldTranslation(v2.width)
  local v6, v7, v8 = worldToLocal(...)
  v2.minWidthValue = v3 + v2.areaSideOffset
  v2.maxWidthValue = v6 - v2.areaSideOffset
  local v9 = math.min(v1.testAreaMinX, v2.minWidthValue, v2.maxWidthValue)
  v1.testAreaMinX = v9
  v9 = math.max(v1.testAreaMaxX, v2.minWidthValue, v2.maxWidthValue)
  v1.testAreaMaxX = v9
end
function TestAreas:registerTestAreaForWorkArea(workArea, testArea)
  testArea.hasContact = false
  testArea.hasContactSent = false
  if self.spec_testAreas.testAreasByWorkArea[workArea] == nil then
    self.spec_testAreas.testAreasByWorkArea[workArea] = {}
  end
  table.insert(v3.testAreasByWorkArea[workArea], testArea)
  table.insert(v3.testAreas, testArea)
end
function TestAreas:setTestAreaRequirements(fruitTypeIndex, fillTypeIndex, allowsForageGrowthState)
  if fruitTypeIndex == FruitType.UNKNOWN then
  end
  if fillTypeIndex == FillType.UNKNOWN then
  end
  v4.fruitTypeIndex = fruitTypeIndex
  v4.fillTypeIndex = fillTypeIndex
  v4.allowsForageGrowthState = allowsForageGrowthState
end
function TestAreas.getIsTestAreaActive(v0, v1)
  return true
end
function TestAreas:processTestArea(testArea)
  local v3, v4, v5 = getWorldTranslation(testArea.start)
  local v6, v7, v8 = getWorldTranslation(testArea.width)
  local v9, v10, v11 = getWorldTranslation(testArea.height)
  if self.isServer then
    if self.spec_testAreas.fruitTypeIndex == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L165
    end
    local v12 = self:getIsTestAreaActive(testArea)
    -- if not v12 then goto L212 end
    if v2.fruitTypeIndex ~= nil then
      local v12, v13, v14, v15 = FSDensityMapUtil.getFruitArea(v2.fruitTypeIndex, v3, v5, v6, v8, v9, v11, nil, v2.allowsForageGrowthState)
      if 0 >= v12 then
      end
      testArea.hasContact = true
    else
      v12 = DensityMapHeightUtil.getFillLevelAtArea(v2.fillTypeIndex, v3, v5, v6, v8, v9, v11)
      if 0 >= v12 then
      end
      testArea.hasContact = true
    end
    if VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES then
      local v12, v13, v14, v15, v16, v17 = MathUtil.getXZWidthAndHeight(v3, v5, v6, v8, v9, v11)
      if testArea.hasContact then
      else
      end
      if testArea.hasContact then
      else
      end
      v18(v19, v20, v21, v22, v23, v24, v25, v26, v27, 0, 0.5)
      local v20 = getName(testArea.start)
      DebugUtil.drawDebugNode(testArea.start, v20, true)
      v20 = getName(testArea.width)
      DebugUtil.drawDebugNode(testArea.width, v20, true)
      v20 = getName(testArea.height)
      DebugUtil.drawDebugNode(testArea.height, v20, true)
    end
    -- if v1.hasContactSent == v1.hasContact then goto L212 end
    self:raiseDirtyFlags(v2.testAreaDirtyFlag)
    testArea.hasContactSent = testArea.hasContact
  else
    if self.spec_testAreas.fruitTypeIndex == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L212
    end
    if VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES then
      v12, v13, v14, v15, v16, v17 = MathUtil.getXZWidthAndHeight(v3, v5, v6, v8, v9, v11)
      if testArea.hasContact then
      else
      end
      if testArea.hasContact then
      else
      end
      v18(v19, v20, v21, v22, v23, v24, v25, v26, v27, 0, 0.5)
    end
  end
  return testArea.hasContact
end
function TestAreas:getTestAreaWidthByWorkAreaIndex(workAreaIndex)
  local workArea = self:getWorkAreaByIndex(workAreaIndex)
  if workArea ~= nil then
    if self.spec_testAreas.testAreasByWorkAreaIndex[workAreaIndex] ~= nil then
      return workArea.testAreaCurrentWidthMin, workArea.testAreaCurrentWidthMax, workArea.testAreaMinX, workArea.testAreaMaxX, true
    end
    local v5 = self:getWorkAreaWidth(workAreaIndex)
    return -(v5 * 0.5), v5 * 0.5, -(v5 * 0.5), v5 * 0.5, false
  end
  return -math.huge, math.huge, 0, 0, false
end
function TestAreas:getTestAreaChargeByWorkAreaIndex(workAreaIndex)
  if self.spec_testAreas.testAreasByWorkAreaIndex[workAreaIndex] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 11, target 18)
    if self.spec_testAreas.testAreasByWorkAreaIndex[workAreaIndex][1].hasContact then
    end
    -- TODO: structure LOP_FORNLOOP (pc 17, target 12)
    return v4 / #v3
  end
  return 1
end
