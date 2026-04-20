-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FoliageSystem = {}
local FoliageSystem_mt = Class(FoliageSystem)
function FoliageSystem.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.terrainRootNode = 0
  v1.paintableFoliages = {}
  v1.decoFoliages = {}
  v1.decoFoliageMappings = {}
  return v1
end
function FoliageSystem:delete()
  self.paintableFoliages = {}
  self.decoFoliages = {}
end
function FoliageSystem:loadMapData(mapXmlFile, missionInfo, baseDirectory)
  local xmlFile = XMLFile.wrap(mapXmlFile)
  xmlFile:iterate("map.paintableFoliages.paintableFoliage", function(self, mapXmlFile)
    local missionInfo = missionInfo:getString(mapXmlFile .. "#layerName")
    if missionInfo ~= nil then
      local baseDirectory = baseDirectory:getInt(mapXmlFile .. "#startChannel", 0)
      local xmlFile = xmlFile:getInt(mapXmlFile .. "#numChannels", 4)
      local v5 = v5:getInt(mapXmlFile .. "#state", 0)
      table.insert(u1.paintableFoliages, {layerName = missionInfo, startStateChannel = baseDirectory, numStateChannels = xmlFile, state = v5, id = #u1.paintableFoliages + 1})
      return
    end
    Logging.xmlWarning(u0, "Missing layerName for paintableFoliage '%s'", mapXmlFile)
  end)
  xmlFile:iterate("map.decoFoliages.decoFoliage", function(self, mapXmlFile)
    local baseDirectory = baseDirectory:getString(mapXmlFile .. "#layerName")
    if {layerName = baseDirectory}.layerName ~= nil then
      baseDirectory = baseDirectory:getInt(mapXmlFile .. "#startChannel", 0)
      baseDirectory = baseDirectory:getInt(mapXmlFile .. "#numChannels", 4)
      baseDirectory = baseDirectory:getBool(mapXmlFile .. "#mowable")
      local xmlFile = xmlFile:upper()
      u1[xmlFile] = {layerName = baseDirectory, startStateChannel = baseDirectory, numStateChannels = baseDirectory, mowable = baseDirectory}
      table.insert(u2.decoFoliages, {layerName = baseDirectory, startStateChannel = baseDirectory, numStateChannels = baseDirectory, mowable = baseDirectory})
      return
    end
    Logging.xmlWarning(u0, "Missing layerName for decoFoliage '%s'", mapXmlFile)
  end)
  self.decoFoliageMappings = {}
  xmlFile:iterate("map.decoFoliages.mapping", function(self, mapXmlFile)
    local missionInfo = missionInfo:getString(mapXmlFile .. "#name")
    if missionInfo ~= nil then
      local baseDirectory = missionInfo:upper()
      if u1.decoFoliageMappings[baseDirectory] == nil then
        local xmlFile = xmlFile:getString(mapXmlFile .. "#layerName")
        if xmlFile ~= nil then
          local v5 = xmlFile:upper()
          if u2[v5] ~= nil then
            local v7 = v7:getInt(mapXmlFile .. "#state")
            u1.decoFoliageMappings[baseDirectory] = {decoFoliage = u2[v5], state = v7}
            return
          end
          Logging.xmlWarning(u0, "Mapping layerName '%s' not defined deco foliages for '%s'", xmlFile, mapXmlFile)
          return
        end
        Logging.xmlWarning(u0, "Missing layerName for decoFoliage mapping '%s'", mapXmlFile)
        return
      end
      Logging.xmlWarning(u0, "Name '%s' already defined for decoFoliage mapping '%s'", missionInfo, mapXmlFile)
      return
    end
    Logging.xmlWarning(u0, "Missing name for decoFoliage mapping '%s'", mapXmlFile)
  end)
  xmlFile:delete()
  return true
end
function FoliageSystem:unloadMapData()
  self.paintableFoliages = {}
end
function FoliageSystem:initTerrain(mission, terrainRootNode, terrainDetailId)
  self.terrainRootNode = terrainRootNode
  for v7, v8 in pairs(self.paintableFoliages) do
    local v9 = getTerrainDataPlaneByName(self.terrainRootNode, v8.layerName)
    if v9 ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R9 aux=0x7 -> L40
      v8.terrainDataPlaneId = v9
      local v10 = DensityMapModifier.new(v9, v8.startStateChannel, v8.numStateChannels, terrainRootNode)
      v8.paintModifier = v10
      v10 = DensityMapFilter.new(v8.paintModifier)
      v8.paintFilter = v10
    else
      v8.disabled = true
    end
  end
  for v7, v8 in pairs(self.decoFoliages) do
    v9 = getTerrainDataPlaneByName(self.terrainRootNode, v8.layerName)
    if not (v9 ~= nil) then
      continue
    end
    if not (v9 ~= 0) then
      continue
    end
    v8.terrainDataPlaneId = v9
    v10 = DensityMapModifier.new(v9, v8.startStateChannel, v8.numStateChannels, terrainRootNode)
    v8.modifier = v10
  end
  self:loadModFoliageTypes()
end
function FoliageSystem:addDensityMapSyncer(densityMapSyncer)
  for v5, v6 in pairs(self.decoFoliages) do
    if not (v6.terrainDataPlaneId ~= nil) then
      continue
    end
    densityMapSyncer:addDensityMap(v6.terrainDataPlaneId)
  end
end
function FoliageSystem:applyAreas(modifiedAreas, paintTerrainFoliageId)
  for v6, v7 in pairs(self.paintableFoliages) do
    if not (v7.id == paintTerrainFoliageId) then
      continue
    end
    if not not v7.disabled then
      continue
    end
    for v11, v12 in pairs(modifiedAreas) do
      local v13, v14, v15, v16, v17, v18 = unpack(v12)
      self:apply(v7, v13, v14, v15 - v13, v16 - v14, v17 - v13, v18 - v14)
    end
    return true
  end
  return false
end
function FoliageSystem:getFoliagePaint(id)
  for v5, v6 in pairs(self.paintableFoliages) do
    if not (v6.id == id) then
      continue
    end
    if not not v6.disabled then
      continue
    end
    return v6
  end
  return nil
end
function FoliageSystem:getFoliagePaintByName(name)
  for v5, v6 in pairs(self.paintableFoliages) do
    if not (v6.layerName == name) then
      continue
    end
    if not not v6.disabled then
      continue
    end
    return v6
  end
  return nil
end
function FoliageSystem.apply(v0, v1, v2, v3, v4, v5, v6, v7, v8)
  if v8 == nil then
  end
  v9:setParallelogramWorldCoords(v2, v3, v4, v5, v6, v7, DensityCoordType.POINT_POINT_POINT)
  v10:setValueCompareParams(DensityValueCompareType.NOTEQUAL, v8)
  local v11, v12, v13 = v9:executeSet(v8, v10)
  return v12 / 4
end
function FoliageSystem:getDecoFoliages()
  return self.decoFoliages
end
function FoliageSystem:getIsDecoLayerDefined(decoName)
  local nameUpper = decoName:upper()
  if self.decoFoliageMappings[nameUpper] == nil then
  end
  return true
end
function FoliageSystem:applyDecoFoliage(decoName, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  local nameUpper = decoName:upper()
  if self.decoFoliageMappings[nameUpper] ~= nil and self.decoFoliageMappings[nameUpper].decoFoliage.modifier ~= nil then
    self.decoFoliageMappings[nameUpper].decoFoliage.modifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    self.decoFoliageMappings[nameUpper].decoFoliage.modifier:executeSet(self.decoFoliageMappings[nameUpper].state)
  end
end
function FoliageSystem.loadModFoliageTypes(v0)
  -- TODO: structure LOP_FORNPREP (pc 5, target 8)
  -- TODO: structure LOP_FORNLOOP (pc 7, target 6)
end
