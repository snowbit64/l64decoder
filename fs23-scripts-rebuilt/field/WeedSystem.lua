-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WeedSystem = {}
local WeedSystem_mt = Class(WeedSystem)
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("weed")
  WeedSystem.xmlSchema = v1
end)
v1:addInitSchemaFunction(function()
  WeedSystem.xmlSchema:register(XMLValueType.STRING, "map.weed#name", "Weed layer name")
  WeedSystem.xmlSchema:register(XMLValueType.STRING, "map.weed#title", "Weed title")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.general#firstChannel", "Weed first channel")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.general#numChannels", "Weed num channels")
  WeedSystem.xmlSchema:register(XMLValueType.VECTOR_N, "map.weed.mapColors.mapColor(?)#states", "Map color states")
  WeedSystem.xmlSchema:register(XMLValueType.VECTOR_4, "map.weed.mapColors.mapColor(?)#default", "Default map colors")
  WeedSystem.xmlSchema:register(XMLValueType.VECTOR_4, "map.weed.mapColors.mapColor(?)#colorBlind", "Color blind map colors")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.states.sparseStart#value", "Weed sparse state")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.states.denseStart#value", "Weed sparse state")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.fieldInfoStates.fieldInfoState(?)#state", "Field info weed state")
  WeedSystem.xmlSchema:register(XMLValueType.STRING, "map.weed.fieldInfoStates.fieldInfoState(?)#title", "Field info weed state title")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.growth.update(?)#sourceState", "Weed update source state")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.growth.update(?)#targetState", "Weed update target state")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.factors.factor(?)#state", "Weed factor state")
  WeedSystem.xmlSchema:register(XMLValueType.FLOAT, "map.weed.factors.factor(?)#value", "Weed factor")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.infoLayer#firstChannel", "Weed info layer first channel")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.infoLayer#numChannels", "Weed info layer num channels")
  WeedSystem.xmlSchema:register(XMLValueType.STRING, "map.weed.infoLayer#filename", "Weed info layer filename")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.infoLayer.blockingState#value", "Weed info layer blocking value")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.infoLayer.blockingState#firstChannel", "Weed info layer blocking first channel")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.weed.infoLayer.blockingState#numChannels", "Weed info layer blocking num channels")
  WeedSystem.xmlSchema:register(XMLValueType.STRING, "map.replacements.herbicide.replacements(?)#fruitType", "Replacement fruittype. If undefined weed is used")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.replacements.herbicide.replacements(?).replacement(?)#sourceState", "Herbicide replacement source state")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.replacements.herbicide.replacements(?).replacement(?)#targetState", "Herbicide replacement target state")
  WeedSystem.xmlSchema:register(XMLValueType.STRING, "map.replacements.weeder.replacements(?)#fruitType", "Replacement fruittype. If undefined weed is used")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.replacements.weeder.replacements(?).replacement(?)#sourceState", "Weeder replacement source state")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.replacements.weeder.replacements(?).replacement(?)#targetState", "Weeder replacement target state")
  WeedSystem.xmlSchema:register(XMLValueType.STRING, "map.replacements.weederHoe.replacements(?)#fruitType", "Replacement fruittype. If undefined weed is used")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.replacements.weederHoe.replacements(?).replacement(?)#sourceState", "Weeder hoe replacement source state")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.replacements.weederHoe.replacements(?).replacement(?)#targetState", "Weeder hoe replacement target state")
  WeedSystem.xmlSchema:register(XMLValueType.STRING, "map.replacements.mulcher.replacements(?)#fruitType", "Replacement fruittype. If undefined weed is used")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.replacements.mulcher.replacements(?).replacement(?)#sourceState", "Mulcher replacement source state")
  WeedSystem.xmlSchema:register(XMLValueType.INT, "map.replacements.mulcher.replacements(?).replacement(?)#targetState", "Mulcher replacement target state")
end)
function WeedSystem.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.baseDirectory = ""
  v1.densityMap = nil
  v1.herbicideReplacements = {}
  v1.weederReplacements = {}
  v1.weederHoeReplacements = {}
  v1.mulcherReplacements = {}
  v1.growthMapping = {}
  v1.factors = {}
  v1.fieldInfoStates = {}
  v1.infoLayer = nil
  v1.mapColor = {}
  v1.mapColorBlind = {}
  return v1
end
function WeedSystem:delete()
  removeConsoleCommand("gsWeedSystemAddDelta")
  removeConsoleCommand("gsWeedSystemSetState")
  self.densityMap = nil
  if self.infoLayer ~= nil and self.infoLayer.map ~= nil then
    delete(self.infoLayer.map)
  end
  self.infoLayer = nil
end
function WeedSystem:loadWeed(filename)
  local xmlFile = XMLFile.load("weed", filename, WeedSystem.xmlSchema)
  if xmlFile == nil then
    return
  end
  local v3 = xmlFile:getValue("map.weed#name")
  if not v3 then
  end
  self.name = v3
  v3 = xmlFile:getValue("map.weed#title")
  if v3 ~= nil then
    local v4 = v4:convertText(v3)
    if not v4 then
    end
    self.title = v4
  end
  v4 = xmlFile:getValue("map.weed.general#firstChannel")
  if not v4 and not self.firstChannel then
  end
  self.firstChannel = v4
  v4 = xmlFile:getValue("map.weed.general#numChannels")
  if not v4 and not self.numChannels then
  end
  self.numChannels = v4
  self.minValue = 1
  self.maxValue = 5
  xmlFile:iterate("map.weed.mapColors.mapColor", function(self, filename)
    local xmlFile = xmlFile:getValue(filename .. "#states", 1, true)
    local v3 = v3:getValue(filename .. "#default", u1, 4)
    local v4 = v4:getValue(filename .. "#colorBlind", u1, 4)
    table.insert(u2.mapColor, {states = xmlFile, color = v3})
    table.insert(u2.mapColorBlind, {states = xmlFile, color = v4})
  end)
  self:loadInfoLayer(xmlFile, "map.weed.infoLayer")
  local v5 = xmlFile:getValue("map.weed.states.sparseStart#value")
  if not v5 and not self.sparseStartState then
  end
  self.sparseStartState = v5
  v5 = xmlFile:getValue("map.weed.states.denseStart#value")
  if not v5 and not self.denseStartState then
  end
  self.denseStartState = v5
  xmlFile:iterate("map.weed.growth.update", function(self, filename)
    local xmlFile = xmlFile:getValue(filename .. "#sourceState")
    local v3 = v3:getValue(filename .. "#targetState")
    if xmlFile ~= nil then
      u1.growthMapping[xmlFile] = v3
    end
  end)
  xmlFile:iterate("map.weed.factors.factor", function(self, filename)
    local xmlFile = xmlFile:getValue(filename .. "#state")
    local v3 = v3:getValue(filename .. "#value")
    if xmlFile ~= nil and v3 ~= nil then
      u1.factors[xmlFile] = v3
    end
  end)
  xmlFile:iterate("map.weed.fieldInfoStates.fieldInfoState", function(self, filename)
    local xmlFile = xmlFile:getValue(filename .. "#state")
    local v3 = v3:getValue(filename .. "#title")
    if xmlFile ~= nil and v3 ~= nil then
      local v5 = v5:convertText(v3)
      u1.fieldInfoStates[xmlFile] = v5
    end
  end)
  self:loadReplacements(xmlFile, "map.replacements.herbicide", self.herbicideReplacements)
  self:loadReplacements(xmlFile, "map.replacements.weeder", self.weederReplacements)
  self:loadReplacements(xmlFile, "map.replacements.weederHoe", self.weederHoeReplacements)
  self:loadReplacements(xmlFile, "map.replacements.mulcher", self.mulcherReplacements)
  xmlFile:delete()
end
function WeedSystem.loadReplacements(v0, v1, v2, v3)
  v1:iterate(v2 .. ".replacements", function(v0, v1)
    local v3 = v3:getValue(v1 .. "#fruitType")
    if v3 ~= nil then
      local v4 = v4:getFruitTypeByName(v3)
      if v4 == nil then
        Logging.xmlWarning(u0, "FruitType '%s' not defined for '%s'", v3, v1)
        return
      end
    end
    v6:iterate(v1 .. ".replacement", function(v0, v1)
      local v2 = v2:getValue(v1 .. "#sourceState")
      local v3 = v3:getValue(v1 .. "#targetState")
      if v2 ~= nil then
        u1.replacements[v2] = v3
        u2 = true
      end
    end)
    if not false then
      return
    end
    if v4.fruitType == nil then
      u1.weed = v4
    else
      if u1.custom == nil then
        u1.custom = {}
      end
      table.insert(u1.custom, v4)
    end
  end)
end
function WeedSystem:loadMapData(xmlFile, missionInfo, baseDirectory)
  self.baseDirectory = baseDirectory
  self:loadWeed("data/maps/maps_weed.xml")
  local v4 = getXMLString(xmlFile, "map.weed#filename")
  if v4 ~= nil then
    local v5 = Utils.getFilename(v4, baseDirectory)
    self:loadWeed(v5)
  end
  v5 = v5:getIsServer()
  if v5 and g_addCheatCommands then
    addConsoleCommand("gsWeedSystemAddDelta", "Add weed delta to field", "consoleCommandAddDelta", self)
    addConsoleCommand("gsWeedSystemSetState", "Set weed state to field", "consoleCommandSetState", self)
  end
  return true
end
function WeedSystem:addDensityMapSyncer(densityMapSyncer)
  if self.densityMap ~= nil then
    densityMapSyncer:addDensityMap(self.densityMap)
  end
end
function WeedSystem:getMapHasWeed()
  if self.densityMap == nil then
  end
  return true
end
function WeedSystem:getDensityMapData()
  return self.densityMap, self.firstChannel, self.numChannels, self.minValue, self.maxValue
end
function WeedSystem:getHerbicideReplacements()
  return self.herbicideReplacements
end
function WeedSystem:getWeederReplacements(isHoeWeeder)
  if isHoeWeeder then
    return self.weederHoeReplacements
  end
  return self.weederReplacements
end
function WeedSystem:getMulcherReplacements()
  return self.mulcherReplacements
end
function WeedSystem:getGrowthMapping()
  return self.growthMapping
end
function WeedSystem:getColors()
  return self.mapColor, self.mapColorBlind
end
function WeedSystem:getTitle()
  return self.title
end
function WeedSystem:getSparseStartState()
  return self.sparseStartState
end
function WeedSystem:getDenseStartState()
  return self.denseStartState
end
function WeedSystem:getFactors()
  return self.factors
end
function WeedSystem:getFieldInfoStates()
  return self.fieldInfoStates
end
function WeedSystem:initTerrain(mission, terrainNode, terrainDetailId)
  local id = getTerrainDataPlaneByName(terrainNode, self.name)
  if id ~= nil and id ~= 0 then
    self.densityMap = id
    local v5 = DensityMapModifier.new(self.densityMap, self.firstChannel, self.numChannels, g_currentMission.terrainNode)
    self.weedModifier = v5
    v5 = DensityMapFilter.new(self.densityMap, self.firstChannel, self.numChannels, g_currentMission.terrainNode)
    self.weedFilter = v5
    v5:setValueCompareParams(DensityValueCompareType.GREATER, self.maxValue)
  end
  if self.infoLayer ~= nil and self.infoLayer.filename ~= nil then
    local v6 = createBitVectorMap("weedInfoLayer")
    self.infoLayer.map = v6
    if mission.missionInfo.isValid then
    end
    if v8 then
      local v9 = loadBitVectorMapFromFile(v5.map, v6, v5.numChannels)
      if not v9 then
        local v14 = tostring(v6)
        Logging.warning("Loading weed info layer file '" .. v14 .. "' failed! Loading default.")
      end
    end
    if not v8 then
      v9 = loadBitVectorMapFromFile(v5.map, v5.path, v5.numChannels)
      if not v9 then
        v14 = tostring(v5.path)
        Logging.warning("Loading weed info layer file '" .. v14 .. "' failed!")
      end
    end
    local v9, v10 = getBitVectorMapSize(v5.map)
    v5.width = v9
    v5.height = v10
    v5.isBitVector = true
    v5.canBeDeleted = true
    return
  end
  self.infoLayer = nil
end
function WeedSystem:loadInfoLayer(xmlFile, key)
  if not self.infoLayer then
  end
  local v4 = xmlFile:getValue(key .. "#firstChannel")
  if not v4 and not v3.firstChannel then
  end
  v3.firstChannel = v4
  v4 = xmlFile:getValue(key .. "#numChannels")
  if not v4 and not v3.numChannels then
  end
  v3.numChannels = v4
  v4 = xmlFile:getValue(key .. "#filename")
  if v4 ~= nil then
    local v5 = Utils.getFilename(v4, self.baseDirectory)
    v3.path = v5
    v5 = Utils.getFilenameFromPath(v3.path)
    v3.filename = v5
  end
  v3.maxValue = 2 ^ v3.numChannels - 1
  if not v3.blockingState then
  end
  v3.blockingState = v5
  local v6 = xmlFile:getValue(key .. ".blockingState#value")
  if not v6 and not v3.blockingState.value then
  end
  v5.value = v6
  v6 = xmlFile:getValue(key .. ".blockingState#firstChannel")
  if not v6 and not v3.blockingState.firstChannel then
  end
  v5.firstChannel = v6
  v6 = xmlFile:getValue(key .. ".blockingState#numChannels")
  if not v6 and not v3.blockingState.numChannels then
  end
  v5.numChannels = v6
  self.infoLayer = v3
  return true
end
function WeedSystem:getBlockingStateData()
  if self.infoLayer == nil then
    return nil
  end
  return v1.blockingState.value, v1.blockingState.firstChannel, v1.blockingState.numChannels
end
function WeedSystem:getInfoLayerData()
  if self.infoLayer == nil then
    return nil
  end
  return v1.map, v1.firstChannel, v1.numChannels
end
function WeedSystem:getInfoLayer()
  return self.infoLayer
end
function WeedSystem:consoleCommandAddDelta(fieldIndex, delta)
  local v3 = tonumber(fieldIndex)
  v3 = tonumber(delta)
  if v3 == nil then
    return "Missing field index. gsWeedSystemAddDelta <fieldIndex> [<delta>]"
  end
  if self.weedModifier == nil then
    return "No weed defined for current map"
  end
  v3 = v3:getFieldByIndex(fieldIndex)
  local v4 = getNumOfChildren(v3.fieldDimensions)
  -- TODO: structure LOP_FORNPREP (pc 34, target 92)
  local v8 = getChildAt(v3.fieldDimensions, 1 - 1)
  local v9 = getChildAt(v8, 0)
  local v10 = getChildAt(v8, 1)
  local v11, v12, v13 = getWorldTranslation(v9)
  local v14, v15, v16 = getWorldTranslation(v8)
  local v17, v18, v19 = getWorldTranslation(v10)
  v20:setParallelogramWorldCoords(v11, v13, v14, v16, v17, v19, DensityCoordType.POINT_POINT_POINT)
  v20:executeAdd(delta)
  v20:executeSet(self.maxValue, self.weedFilter)
  -- TODO: structure LOP_FORNLOOP (pc 91, target 35)
  return "Added delta " .. delta
end
function WeedSystem:consoleCommandSetState(fieldIndex, state)
  local v3 = tonumber(fieldIndex)
  v3 = tonumber(state)
  if v3 == nil then
    return "Missing field index. gsWeedSystemSetState <fieldIndex> [<state>]"
  end
  if self.weedModifier == nil then
    return "No weed defined for current map"
  end
  v3 = v3:getFieldByIndex(fieldIndex)
  local v4 = getNumOfChildren(v3.fieldDimensions)
  -- TODO: structure LOP_FORNPREP (pc 34, target 83)
  local v8 = getChildAt(v3.fieldDimensions, 1 - 1)
  local v9 = getChildAt(v8, 0)
  local v10 = getChildAt(v8, 1)
  local v11, v12, v13 = getWorldTranslation(v9)
  local v14, v15, v16 = getWorldTranslation(v8)
  local v17, v18, v19 = getWorldTranslation(v10)
  v20:setParallelogramWorldCoords(v11, v13, v14, v16, v17, v19, DensityCoordType.POINT_POINT_POINT)
  v20:executeSet(state)
  -- TODO: structure LOP_FORNLOOP (pc 82, target 35)
  return "Added state " .. state
end
