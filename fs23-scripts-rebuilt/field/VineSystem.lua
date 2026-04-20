-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VineSystem = {MAX_NUM_OBJECTS_PER_FRAME = 5}
local VineSystem_mt = Class(VineSystem)
function VineSystem.new(isServer, mission, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.mission = mission
  v3.isServer = isServer
  v3.isDebugAreaActive = false
  v3.debugAreas = {}
  v3.densityMapCellIdToNode = {}
  v3.dirtyNodes = {}
  v3.nodes = {}
  if g_addCheatCommands then
    local v4 = mission:getIsServer()
    if v4 then
      addConsoleCommand("gsVineSystemSetGrowthState", "Sets vineyard growthstate", "consoleCommandSetGrowthState", v3)
    end
    addConsoleCommand("gsVineSystemUpdateVisuals", "Updates the visuals", "consoleCommandUpdateVisuals", v3)
    addConsoleCommand("gsVineSystemPrintCellMapping", "Print the current cellmapping", "consoleCommandPrintCellMapping", v3)
    addConsoleCommand("gsVineSystemToggleDebug", "Toggles debug view", "consoleCommandToggleDebug", v3)
  end
  return v3
end
function VineSystem:initTerrain(terrainSize, terrainDetailMapSize)
  v3:subscribe(MessageType.FINISHED_GROWTH_PERIOD, self.onFinishedGrowthPeriod, self)
end
function VineSystem:delete()
  v1:unsubscribeAll(self)
  removeConsoleCommand("gsVineSystemSetGrowthState")
  removeConsoleCommand("gsVineSystemUpdateVisuals")
  removeConsoleCommand("gsVineSystemPrintCellMapping")
  removeConsoleCommand("gsVineSystemToggleDebug")
  for v4, v5 in pairs(self.debugAreas) do
    v5:delete()
    self.debugAreas[v4] = nil
  end
end
function VineSystem:addElement(placeable, node, sizeX, sizeZ)
  if self.nodes[node] ~= nil then
    return
  end
  local fruitTypeIndex = placeable:getVineFruitType()
  if self.debugAreas[fruitTypeIndex] == nil then
    local v6 = v6:getFruitTypeByIndex(fruitTypeIndex)
    if v6.terrainDataPlaneId ~= nil then
      {}[0] = {0, 0.5, 0, 0.05}
      local v9 = DebugDensityMap.new(v6.terrainDataPlaneId, v6.startStateChannel, v6.numStateChannels, 10, 0.05, {{0, 0, 1, 0.075}, {0.995, 0.685, 0, 0.05}, {0.846, 0.216, 0, 0.05}, {0.695, 0.007, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}, {0, 1, 0, 0.05}})
      self.debugAreas[fruitTypeIndex] = v9
    end
  end
  if not self.isServer and self.mission.missionDynamicInfo.isMultiplayer then
    v6 = v6:activateFruitUpdateCallback(fruitTypeIndex)
    if v6 ~= nil then
      local v7, v8, v9 = getWorldTranslation(node)
      local v10, v11, v12 = localDirectionToWorld(node, 0, 0, 1)
      local v13, v14, v15, v16 = self:getDensityMapSyncerCellIndexRange(fruitTypeIndex, v7, v9, v10, v12, sizeX, sizeZ)
      -- TODO: structure LOP_FORNPREP (pc 237, target 306)
      for v22 = v15, v16 do
        local v23 = v23:addCellUpdateListener(self, v6, v19, v22)
        if v23 ~= nil then
          if self.densityMapCellIdToNode[v6] == nil then
            self.densityMapCellIdToNode[v6] = {}
          end
          if self.densityMapCellIdToNode[v6][v23] == nil then
            self.densityMapCellIdToNode[v6][v23] = {}
          end
          if self.densityMapCellIdToNode[v6][v23][placeable] == nil then
            self.densityMapCellIdToNode[v6][v23][placeable] = {}
          end
          if self.densityMapCellIdToNode[v6][v23][placeable][node] == nil then
            self.densityMapCellIdToNode[v6][v23][placeable][node] = true
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 304, target 242)
      end
    end
  end
  self.nodes[node] = placeable
  self.dirtyNodes[node] = true
end
function VineSystem:removeElement(placeable, node, sizeX, sizeZ)
  if self.nodes[node] == nil then
    return
  end
  if not self.isServer and self.mission.missionDynamicInfo.isMultiplayer then
    local fruitTypeIndex = placeable:getVineFruitType()
    local v6 = v6:getFruitTypeByIndex(fruitTypeIndex)
    if v6.foliageTransformGroupId == nil then
      return nil
    end
    if v6.foliageTransformGroupId ~= nil then
      local v8, v9, v10 = getWorldTranslation(node)
      local v11, v12, v13 = localDirectionToWorld(node, 0, 0, 1)
      local v14, v15, v16, v17 = self:getDensityMapSyncerCellIndexRange(fruitTypeIndex, v8, v10, v11, v13, sizeX, sizeZ)
      -- TODO: structure LOP_FORNPREP (pc 59, target 127)
      for v23 = v16, v17 do
        local v24 = v24:removeCellUpdateListener(self, v7, v20, v23)
        if v24 ~= nil and self.densityMapCellIdToNode[v7][v24] ~= nil then
          if self.densityMapCellIdToNode[v7][v24][placeable] ~= nil then
            self.densityMapCellIdToNode[v7][v24][placeable][node] = nil
          end
          local v25 = next(self.densityMapCellIdToNode[v7][v24][placeable])
          if v25 == nil then
            self.densityMapCellIdToNode[v7][v24][placeable] = nil
            v25 = next(self.densityMapCellIdToNode[v7][v24])
            if v25 == nil then
              self.densityMapCellIdToNode[v7][v24] = nil
            end
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 125, target 64)
      end
    end
  end
  self.nodes[node] = nil
  self.dirtyNodes[node] = nil
end
function VineSystem:onDensityMapSyncerUpdate(densityMapId, cellX, cellZ, cellId)
  if self.densityMapCellIdToNode[densityMapId] == nil then
    Logging.devWarning("VineSystem:onDensityMapSyncerUpdate: No placeables registered for densityMap '%d'", densityMapId)
    return
  end
  if v5[cellId] == nil then
    Logging.devWarning("VineSystem:onDensityMapSyncerUpdate: No placeables registered for cellId '%d'", cellId)
    return
  end
  for v10, v11 in pairs(v6) do
    for v15, v16 in pairs(v11) do
      self.dirtyNodes[v15] = true
    end
  end
end
function VineSystem:onFinishedGrowthPeriod(period)
  for v5, v6 in pairs(self.nodes) do
    self.dirtyNodes[v5] = true
  end
end
function VineSystem:update(dt)
  -- TODO: structure LOP_FORNPREP (pc 6, target 29)
  local node = next(self.dirtyNodes)
  if node ~= nil then
    if self.nodes[node] ~= nil then
      self.nodes[node]:updateVineNode(node, true)
    end
    self.dirtyNodes[node] = nil
  end
  -- TODO: structure LOP_FORNLOOP (pc 28, target 7)
end
function VineSystem.getDensityMapSyncerCellIndexRange(v0, v1, v2, v3, v4, v5, v6, v7)
  local v8, v9, v10 = MathUtil.crossProduct(v4, 0, v5, 0, 1, 0)
  local v20, v21 = v20:getFruitCellIndicesAtWorldPosition(v1, v2 + v8 * -(v6 * 0.5), v3 + v10 * -(v6 * 0.5))
  local v22, v23 = v22:getFruitCellIndicesAtWorldPosition(v1, v2 + v8 * v6 * 0.5, v3 + v10 * v6 * 0.5)
  local v24, v25 = v24:getFruitCellIndicesAtWorldPosition(v1, v2 + v4 * v7 + v8 * -(v6 * 0.5), v3 + v5 * v7 + v10 * -(v6 * 0.5))
  local v26, v27 = v26:getFruitCellIndicesAtWorldPosition(v1, v2 + v4 * v7 + v8 * v6 * 0.5, v3 + v5 * v7 + v10 * v6 * 0.5)
  local v28 = math.min(v20, v22, v24, v26)
  local v29 = math.max(v20, v22, v24, v26)
  local v30 = math.min(v21, v23, v25, v27)
  local v31 = math.max(v21, v23, v25, v27)
  return v28, v29, v30, v31
end
function VineSystem:getPlaceable(node)
  if node == nil then
    return nil
  end
  if self.nodes[node] == nil then
    return nil
  end
  return v2
end
function VineSystem:consoleCommandSetGrowthState(fruitTypeName, growthState)
  local v3 = v3:getFruitTypeByName(fruitTypeName)
  if v3 == nil then
    local v8 = tostring(fruitTypeName)
    return "FruitType " .. v8 .. " not defined"
  end
  local v4 = tonumber(growthState)
  if v4 == nil then
    local v6 = tostring(v4)
    return "Invalid growthstate " .. v6
  end
  for v8, v9 in pairs(self.nodes) do
    local v10 = v9:getVineFruitType()
    if not (v10 == v4) then
      continue
    end
    local v10, v11, v12, v13, v14, v15 = v9:getVineAreaByNode(v8)
    v16:setVineAreaValue(v4, v10, v11, v12, v13, v14, v15, growthState)
    self.dirtyNodes[v8] = true
  end
end
function VineSystem:consoleCommandUpdateVisuals()
  for v4, v5 in pairs(self.nodes) do
    self.dirtyNodes[v4] = true
  end
end
function VineSystem:consoleCommandPrintCellMapping()
  for v4, v5 in pairs(self.densityMapCellIdToNode) do
    log("DensityMapId", v4)
    for v9, v10 in pairs(v5) do
      log("    CellId", v9)
      for v14, v15 in pairs(v10) do
        log("        Placeable", v14, v14.spec_vine.fruitType.name)
        for v19, v20 in pairs(v15) do
          local v24 = getName(v19)
          log(...)
        end
      end
    end
  end
end
function VineSystem:consoleCommandToggleDebug()
  self.isDebugAreaActive = not self.isDebugAreaActive
  for v4, v5 in pairs(self.debugAreas) do
    if self.isDebugAreaActive then
      v6:addDrawable(v5)
    else
      v6:removeDrawable(v5)
    end
  end
end
