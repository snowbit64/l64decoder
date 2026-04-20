-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StoneSystem = {}
local StoneSystem_mt = Class(StoneSystem)
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("stones")
  StoneSystem.xmlSchema = v1
end)
v1:addInitSchemaFunction(function()
  StoneSystem.xmlSchema:register(XMLValueType.STRING, "map.stones#name", "Stone layer name")
  StoneSystem.xmlSchema:register(XMLValueType.STRING, "map.stones#title", "Stone title")
  StoneSystem.xmlSchema:register(XMLValueType.INT, "map.stones.general#firstChannel", "Stone first channel")
  StoneSystem.xmlSchema:register(XMLValueType.INT, "map.stones.general#numChannels", "Stone num channels")
  StoneSystem.xmlSchema:register(XMLValueType.VECTOR_N, "map.stones.mapColors.mapColor(?)#states", "Map color states")
  StoneSystem.xmlSchema:register(XMLValueType.VECTOR_4, "map.stones.mapColors.mapColor(?)#default", "Default map colors")
  StoneSystem.xmlSchema:register(XMLValueType.VECTOR_4, "map.stones.mapColors.mapColor(?)#colorBlind", "Color blind map colors")
  StoneSystem.xmlSchema:register(XMLValueType.INT, "map.stones.picking#maskValue", "Stone mask value")
  StoneSystem.xmlSchema:register(XMLValueType.INT, "map.stones.picking#minValue", "Stone min value")
  StoneSystem.xmlSchema:register(XMLValueType.INT, "map.stones.picking#maxValue", "Stone max value")
  StoneSystem.xmlSchema:register(XMLValueType.INT, "map.stones.picking#pickedValue", "Stone picked value")
  StoneSystem.xmlSchema:register(XMLValueType.FLOAT, "map.stones.picking#litersPerSqm", "Stone liters per sqm")
  StoneSystem.xmlSchema:register(XMLValueType.INT, "map.stones.growth.update(?)#period", "Stone update period")
  StoneSystem.xmlSchema:register(XMLValueType.INT, "map.stones.growth.update(?)#sourceState", "Stone update source state")
  StoneSystem.xmlSchema:register(XMLValueType.INT, "map.stones.growth.update(?)#targetState", "Stone update target state")
  StoneSystem.xmlSchema:register(XMLValueType.STRING, "map.stones.wear.type(?)#name", "Vehicle type name")
  StoneSystem.xmlSchema:register(XMLValueType.FLOAT, "map.stones.wear.type(?)#multiplier1", "Multiplier in stone state 1")
  StoneSystem.xmlSchema:register(XMLValueType.FLOAT, "map.stones.wear.type(?)#multiplier2", "Multiplier in stone state 2")
  StoneSystem.xmlSchema:register(XMLValueType.FLOAT, "map.stones.wear.type(?)#multiplier3", "Multiplier in stone state 3")
end)
function StoneSystem.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.baseDirectory = ""
  v1.densityMap = nil
  v1.growthMapping = {}
  v1.wearByType = {}
  v1.mapColor = {}
  v1.mapColorBlind = {}
  return v1
end
function StoneSystem:delete()
  removeConsoleCommand("gsStoneSystemAddDelta")
  removeConsoleCommand("gsStoneSystemSetState")
  removeConsoleCommand("gsStoneSystemToggleDebug")
  self.densityMap = nil
  if self.debugArea ~= nil then
    v1:delete()
  end
end
function StoneSystem:loadStones(filename)
  local xmlFile = XMLFile.load("stones", filename, StoneSystem.xmlSchema)
  local v3 = xmlFile:getValue("map.stones#name")
  if not v3 then
  end
  self.name = v3
  local v5 = xmlFile:getValue("map.stones#title")
  v3 = v3:convertText(...)
  if not v3 then
  end
  self.title = v3
  v3 = xmlFile:getValue("map.stones.general#firstChannel")
  if not v3 and not self.firstChannel then
  end
  self.firstChannel = v3
  v3 = xmlFile:getValue("map.stones.general#numChannels")
  if not v3 and not self.numChannels then
  end
  self.numChannels = v3
  v3 = xmlFile:getValue("map.stones.picking#maskValue")
  if not v3 and not self.maskValue then
  end
  self.maskValue = v3
  v3 = xmlFile:getValue("map.stones.picking#minValue")
  if not v3 and not self.minValue then
  end
  self.minValue = v3
  v3 = xmlFile:getValue("map.stones.picking#maxValue")
  if not v3 and not self.maxValue then
  end
  self.maxValue = v3
  v3 = xmlFile:getValue("map.stones.picking#litersPerSqm")
  if not v3 and not self.litersPerSqm then
  end
  self.litersPerSqm = v3
  v3 = xmlFile:getValue("map.stones.picking#pickedValue")
  if not v3 and not self.pickedValue then
  end
  self.pickedValue = v3
  xmlFile:iterate("map.stones.growth.update", function(self, filename)
    local xmlFile = xmlFile:getValue(filename .. "#period")
    local v3 = v3:getValue(filename .. "#sourceState")
    local v4 = v4:getValue(filename .. "#targetState")
    if xmlFile ~= nil and v3 ~= nil and v4 ~= nil then
      table.insert(u1.growthMapping, {from = v3, to = v4, period = xmlFile})
    end
  end)
  xmlFile:iterate("map.stones.mapColors.mapColor", function(self, filename)
    local xmlFile = xmlFile:getValue(filename .. "#states", 1, true)
    local v3 = v3:getValue(filename .. "#default", u1, 4)
    local v4 = v4:getValue(filename .. "#colorBlind", u1, 4)
    table.insert(u2.mapColor, {states = xmlFile, color = v3})
    table.insert(u2.mapColorBlind, {states = xmlFile, color = v4})
  end)
  self.wearByType = {}
  xmlFile:iterate("map.stones.wear.type", function(self, filename)
    local xmlFile = xmlFile:getValue(filename .. "#name")
    local v3 = v3:getValue(filename .. "#multiplier1")
    local v4 = v4:getValue(filename .. "#multiplier2")
    local v5 = v5:getValue(filename .. "#multiplier3")
    if xmlFile ~= nil and v3 ~= nil and v4 ~= nil and v5 ~= nil then
      local v8 = xmlFile:upper()
      u1.wearByType[v8] = {v3, v4, v5}
    end
  end)
  xmlFile:delete()
end
function StoneSystem:loadMapData(xmlFile, missionInfo, baseDirectory)
  self.baseDirectory = baseDirectory
  self:loadStones("data/maps/maps_stones.xml")
  local v4 = getXMLString(xmlFile, "map.stones#filename")
  if v4 ~= nil then
    local v5 = Utils.getFilename(v4, baseDirectory)
    self:loadStones(v5)
  end
  v5 = v5:getIsServer()
  if v5 and g_addCheatCommands then
    addConsoleCommand("gsStoneSystemAddDelta", "Add stone delta to field", "consoleCommandAddDelta", self)
    addConsoleCommand("gsStoneSystemSetState", "Set stone state to field", "consoleCommandSetState", self)
    addConsoleCommand("gsStoneSystemToggleDebug", "Toggles debug view", "consoleCommandToggleDebug", self)
  end
  return true
end
function StoneSystem:addDensityMapSyncer(densityMapSyncer)
  if self.densityMap ~= nil then
    densityMapSyncer:addDensityMap(self.densityMap)
  end
end
function StoneSystem:getDensityMapData()
  return self.densityMap, self.firstChannel, self.numChannels
end
function StoneSystem:getMapHasStones()
  if self.densityMap == nil then
  end
  return true
end
function StoneSystem:getMinMaxValues()
  return self.minValue, self.maxValue
end
function StoneSystem:getPickedValue()
  return self.pickedValue
end
function StoneSystem:getMaskValue()
  return self.maskValue
end
function StoneSystem:getLitersPerSqm()
  return self.litersPerSqm
end
function StoneSystem:getWearMultiplierByType(name)
  if name ~= nil then
    local v4 = name:upper()
    return self.wearByType[v4]
  end
end
function StoneSystem:initTerrain(mission, terrainNode, terrainDetailId)
  local id = getTerrainDataPlaneByName(terrainNode, self.name)
  if id ~= nil and id ~= 0 then
    self.densityMap = id
    local v5 = DensityMapModifier.new(self.densityMap, self.firstChannel, self.numChannels, g_currentMission.terrainNode)
    self.stoneModifier = v5
    v5 = DensityMapFilter.new(self.stoneModifier)
    self.stoneFilter = v5
    {}[0] = {0, 0.5, 0, 0.05}
    local v6 = DebugDensityMap.new(id, self.firstChannel, self.numChannels, 10, 0.05, {{0, 0, 1, 0.075}, {0.995, 0.685, 0, 0.05}, {0.846, 0.216, 0, 0.05}, {0.695, 0.007, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}})
    self.debugArea = v6
  end
end
function StoneSystem:getGrowthMapping()
  return self.growthMapping
end
function StoneSystem:getColors()
  return self.mapColor, self.mapColorBlind
end
function StoneSystem:getTitle()
  return self.title
end
function StoneSystem:consoleCommandToggleDebug()
  self.isDebugAreaActive = not self.isDebugAreaActive
  if self.isDebugAreaActive then
    v1:addDrawable(self.debugArea)
    return
  end
  v1:removeDrawable(self.debugArea)
end
function StoneSystem:consoleCommandAddDelta(fieldIndex, delta)
  local v3 = tonumber(fieldIndex)
  v3 = tonumber(delta)
  if v3 == nil then
    return "Missing field index. gsStoneSystemAddDelta <fieldIndex> [<delta>]"
  end
  if self.stoneModifier == nil then
    return "No stones defined for current map"
  end
  v3 = v3:getFieldByIndex(fieldIndex)
  local v4 = getNumOfChildren(v3.fieldDimensions)
  -- TODO: structure LOP_FORNPREP (pc 34, target 117)
  local v8 = getChildAt(v3.fieldDimensions, 1 - 1)
  local v9 = getChildAt(v8, 0)
  local v10 = getChildAt(v8, 1)
  local v11, v12, v13 = getWorldTranslation(v9)
  local v14, v15, v16 = getWorldTranslation(v8)
  local v17, v18, v19 = getWorldTranslation(v10)
  v20:setParallelogramWorldCoords(v11, v13, v14, v16, v17, v19, DensityCoordType.POINT_POINT_POINT)
  local v23 = math.max(-delta, 0)
  v20:setValueCompareParams(...)
  v20:executeAdd(delta, self.stoneFilter)
  v20:setValueCompareParams(DensityValueCompareType.GREATER, self.maxValue)
  v20:executeSet(self.maxValue, self.stoneFilter)
  -- TODO: structure LOP_FORNLOOP (pc 116, target 35)
  return "Added delta " .. delta
end
function StoneSystem:consoleCommandSetState(fieldIndex, state)
  local v3 = tonumber(fieldIndex)
  v3 = tonumber(state)
  if v3 == nil then
    return "Missing field index. gsStoneSystemSetState <fieldIndex> [<state>]"
  end
  if self.stoneModifier == nil then
    return "No stones defined for current map"
  end
  v3 = v3:getFieldByIndex(fieldIndex)
  local v4 = getNumOfChildren(v3.fieldDimensions)
  -- TODO: structure LOP_FORNPREP (pc 34, target 93)
  local v8 = getChildAt(v3.fieldDimensions, 1 - 1)
  local v9 = getChildAt(v8, 0)
  local v10 = getChildAt(v8, 1)
  local v11, v12, v13 = getWorldTranslation(v9)
  local v14, v15, v16 = getWorldTranslation(v8)
  local v17, v18, v19 = getWorldTranslation(v10)
  v20:setParallelogramWorldCoords(v11, v13, v14, v16, v17, v19, DensityCoordType.POINT_POINT_POINT)
  v20:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  v20:executeSet(state, self.stoneFilter)
  -- TODO: structure LOP_FORNLOOP (pc 92, target 35)
  return "Added state " .. state
end
