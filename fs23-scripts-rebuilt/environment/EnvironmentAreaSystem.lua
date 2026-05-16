-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EnvironmentAreaSystem = {WATER_THRESHOLD = 0.4}
local EnvironmentAreaSystem_mt = Class(EnvironmentAreaSystem)
function EnvironmentAreaSystem.getName(index)
  for v4, v5 in pairs(EnvironmentAreaSystem) do
    if not (index == v5) then
      continue
    end
    return v4
  end
  return ""
end
function EnvironmentAreaSystem:new(v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2.mission = self
  local v3 = getCamera(0)
  v2.referenceNode = v3
  v2.currentAreaType = AreaType.OPEN_FIELD
  v2.waterYRequests = {}
  v2.waterCheckPosition = {0, 0, 0}
  v2.raycastsXZMaxDistance = 30
  v2.raycastsYMaxDistance = 30
  local v6 = MathUtil.vector3Normalize(0, 0, 1)
  local v7 = MathUtil.vector3Normalize(1, 0, 0)
  local v8 = MathUtil.vector3Normalize(0, 0, -1)
  local v9 = MathUtil.vector3Normalize(-1, 0, 0)
  local v10 = MathUtil.vector3Normalize(1, 0, 1)
  local v11 = MathUtil.vector3Normalize(1, 0, -1)
  local v12 = MathUtil.vector3Normalize(-1, 0, -1)
  local v13 = MathUtil.vector3Normalize(-1, 0, 1)
  v2.raycastsXZ = {{dir = {}}, {dir = {}}, {dir = {}}, {dir = {}}, {dir = {}}, {dir = {}}, {dir = {}}, {dir = {}}}
  v6 = MathUtil.vector3Normalize(0, 1, 0)
  v7 = MathUtil.vector3Normalize(0, 1.5, 1)
  v8 = MathUtil.vector3Normalize(1, 1.5, 0)
  v9 = MathUtil.vector3Normalize(0, 1.5, -1)
  v10 = MathUtil.vector3Normalize(-1, 1.5, 0)
  v11 = MathUtil.vector3Normalize(0, 1, 0)
  v12 = MathUtil.vector3Normalize(1, 1.5, 1)
  v13 = MathUtil.vector3Normalize(1, 1.5, -1)
  local v14 = MathUtil.vector3Normalize(-1, 1.5, -1)
  local v15 = MathUtil.vector3Normalize(-1, 1.5, 1)
  v2.raycastsY = {{dir = {}, isTopRaycast = true}, {dir = {}, isTopRaycast = false}, {dir = {}, isTopRaycast = false}, {dir = {}, isTopRaycast = false}, {dir = {}, isTopRaycast = false}, {dir = {}, isTopRaycast = true}, {dir = {}, isTopRaycast = false}, {dir = {}, isTopRaycast = false}, {dir = {}, isTopRaycast = false}, {dir = {}, isTopRaycast = false}}
  v2.isDebugViewActive = false
  v2.areaTypeWeights = {}
  v2.lastAreaTypeWeights = {}
  local v4 = AreaType.getAll()
  for v6, v7 in pairs(...) do
    v2.areaTypeWeights[v7] = 0
    v2.lastAreaTypeWeights[v7] = 0
  end
  v2.areaTypeWeights[AreaType.OPEN_FIELD] = 1
  v2.lastAreaTypeWeights[AreaType.OPEN_FIELD] = 1
  v2.lastPosition = {x = 0, y = 0, z = 0}
  v2.tileSize = 4
  v3 = DynamicDataGrid.new(60, v2.tileSize)
  v2.dataGrid = v3
  v2.treeCheckRadius = 25
  v2.maxNumForestThreshold = 10
  v2.minNumForestThreshold = 3
  v2.minTopCollisionDistanceThreshold = 10
  v2.maxTopCollisionDistanceThreshold = 20
  v2.minWallCollisionDistanceThreshold = 5
  v2.maxWallCollisionDistanceThreshold = 15
  v2.raycastCollisionMask = CollisionFlag.STATIC_OBJECT
  v4 = self.ambientSoundSystem:registerModifier("inForest", nil)
  v2.setIsInForest = v4
  v4 = self.ambientSoundSystem:registerModifier("nearWater", nil)
  v2.setIsNearWater = v4
  addConsoleCommand("gsEnvironmentAreaSystemToggleDebugView", "Toggles the environment checker debug view", "consoleCommandToggleDebugView", v2)
  return v2
end
function EnvironmentAreaSystem:delete()
  v1:removeDrawable(self)
  removeConsoleCommand("gsEnvironmentAreaSystemToggleDebugView")
  self.mission = nil
end
function EnvironmentAreaSystem:getAreaWeights()
  return self.areaTypeWeights
end
function EnvironmentAreaSystem:update(dt)
  local v2 = entityExists(self.referenceNode)
  if not v2 then
    v2 = getCamera(0)
    self.referenceNode = v2
  end
  if self.currentCell ~= nil then
    self:updateCellType(self.currentCell)
    self:updateWeights()
  end
  if 0.1 >= self.areaTypeWeights[AreaType.WATER] then
  end
  v2(true)
  if 0.25 >= self.areaTypeWeights[AreaType.FOREST] then
  end
  v2(true)
  local v2, v3, v4 = getWorldTranslation(self.referenceNode)
  v5:setWorldPosition(v2, v4)
  local v5, v6, v7 = v5:getCellData(0, 0)
  self.currentCell = v5
  if v5.raycastIndexXZ == nil then
    self:setupCell(v5)
  else
    v5.raycastIndexXZ = v5.raycastIndexXZ + 2
  end
  if #self.raycastsXZ <= v5.raycastIndexXZ then
    v5.raycastIndexXZ = 0
    v5.isDone = true
    self.lastDoneCell = v5
  end
  raycastClosest(v2, v3, v4, self.raycastsXZ[v5.raycastIndexXZ + 1].dir[1], self.raycastsXZ[v5.raycastIndexXZ + 1].dir[2], self.raycastsXZ[v5.raycastIndexXZ + 1].dir[3], "raycastXZCallback1", self.raycastsXZMaxDistance, self, self.raycastCollisionMask, false, true)
  raycastClosest(v2, v3, v4, self.raycastsXZ[v5.raycastIndexXZ + 2].dir[1], self.raycastsXZ[v5.raycastIndexXZ + 2].dir[2], self.raycastsXZ[v5.raycastIndexXZ + 2].dir[3], "raycastXZCallback2", self.raycastsXZMaxDistance, self, self.raycastCollisionMask, false, true)
  if not v5.hasTopHit then
    raycastClosest(v2, v3, v4, 0, 1, 0, "raycastYCallback", self.raycastsYMaxDistance, self, self.raycastCollisionMask, false, true)
  end
  if v5.treeCount == nil then
    v5.treeCount = 0
    overlapSphere(v6, v3, v7, self.treeCheckRadius, "forestCheckCallback", self, CollisionFlag.TREE, false, true, false, true)
  end
  if not self.waterCheckPending then
    self.waterCheckPending = true
    self.waterCheckPosition[1] = v2
    self.waterCheckPosition[3] = v4
    self:getWaterYAtWorldPositionAsync(v2, v3, v4, EnvironmentAreaSystem.onCellWaterCallback, self)
  end
  self.lastPosition.x = v2
  self.lastPosition.y = v3
  self.lastPosition.z = v4
end
function EnvironmentAreaSystem:setupCell(cell)
  cell.isValid = true
  cell.isDone = false
  cell.raycastIndexXZ = 0
  cell.hitDataXZ = {}
  cell.areaTypeWeights = {}
  cell.treeCount = nil
  for v5, v6 in pairs(self.areaTypeWeights) do
    cell.areaTypeWeights[v5] = 0
  end
end
function EnvironmentAreaSystem:updateWeights()
  for v5, v6 in pairs(self.areaTypeWeights) do
    self.areaTypeWeights[v5] = 0
  end
  v2, v3, v4 = v2:getCellData(0, 0)
  if not v2.isDone and self.lastDoneCell ~= nil and self.lastDoneCell.areaTypeWeights ~= nil then
  end
  -- TODO: structure LOP_FORNPREP (pc 38, target 100)
  for v10 = 1, 3 do
    local v11, v12, v13 = v11:getCellData(v7 - 2, v10 - 2)
    if v11.areaTypeWeights ~= nil then
      -- if v11.isDone then goto L59 end
    end
    local v15 = MathUtil.vector2Length(v12 - self.lastPosition.x, v13 - self.lastPosition.z)
    local v16 = MathUtil.clamp(1 - v15 / self.tileSize, 0, 1)
    for v20, v21 in pairs(v2.areaTypeWeights) do
      self.areaTypeWeights[v20] = self.areaTypeWeights[v20] + v21 * v16
    end
    -- TODO: structure LOP_FORNLOOP (pc 98, target 43)
  end
  if 0 < v1 then
    for v8, v9 in pairs(self.areaTypeWeights) do
      self.areaTypeWeights[v8] = v9 / v1
    end
    return
  end
  self.areaTypeWeights[AreaType.OPEN_FIELD] = 1
end
function EnvironmentAreaSystem:updateCellType(cell)
  for v6, v7 in pairs(cell.areaTypeWeights) do
    cell.areaTypeWeights[v6] = 0
  end
  if self.maxNumForestThreshold < cell.treeCount then
    cell.areaTypeWeights[AreaType.FOREST] = 1
    return
  end
  if cell.hasTopHit then
    cell.areaTypeWeights[AreaType.HALL] = 1
    return
  end
  if cell.isNearWater then
    cell.areaTypeWeights[AreaType.WATER] = EnvironmentAreaSystem.WATER_THRESHOLD
  end
  if self.minNumForestThreshold < cell.treeCount then
    v3 = MathUtil.inverseLerp(self.minNumForestThreshold, self.maxNumForestThreshold, cell.treeCount)
    cell.areaTypeWeights[AreaType.FOREST] = v3
  end
  for v7, v8 in pairs(cell.hitDataXZ) do
    local v9 = math.min(v3, v8.distance)
  end
  if v3 < self.maxWallCollisionDistanceThreshold then
    v6 = MathUtil.inverseLerp(self.minWallCollisionDistanceThreshold, self.maxWallCollisionDistanceThreshold, v3)
    cell.areaTypeWeights[AreaType.CITY] = 1 - v6
  end
  if 0 < v2 then
    if 1 < v2 then
      for v7, v8 in pairs(cell.areaTypeWeights) do
        if not (v7 ~= AreaType.OPEN_FIELD) then
          continue
        end
        cell.areaTypeWeights[v7] = v8 / v2
      end
      return
    end
    cell.areaTypeWeights[AreaType.OPEN_FIELD] = 1 - v2
    return
  end
  cell.areaTypeWeights[AreaType.OPEN_FIELD] = 1
end
function EnvironmentAreaSystem:raycastXZCallback1(hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  self:handleRaycast(1, hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
end
function EnvironmentAreaSystem:raycastXZCallback2(hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  self:handleRaycast(2, hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
end
function EnvironmentAreaSystem:handleRaycast(indexOffset, hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  if hitObjectId ~= 0 then
    local collisionMask = getCollisionMask(hitObjectId)
    local v16 = Utils.isBitSet(collisionMask, CollisionFlag.AI_DRIVABLE)
    if not v16 then
      if self.currentCell.hitDataXZ[self.currentCell.raycastIndexXZ + indexOffset] ~= nil then
        -- if v6 >= v0.currentCell.hitDataXZ[v0.currentCell.raycastIndexXZ + v1].distance then goto L48 end
      end
      local v18 = getName(hitObjectId)
      v13.hitDataXZ[v14] = {name = v18, x = x, y = y, z = z, distance = distance}
    end
  end
end
function EnvironmentAreaSystem:raycastYCallback(hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  if hitObjectId ~= 0 then
    self.currentCell.hasTopHit = true
  end
end
function EnvironmentAreaSystem:setReferenceNode(node)
  self.referenceNode = node
end
function EnvironmentAreaSystem:forestCheckCallback(transformId)
  if transformId ~= 0 then
    local v2 = getHasClassId(transformId, ClassIds.SHAPE)
    if v2 then
      v2 = getSplitType(transformId)
      if v2 ~= 0 then
        v2 = getIsSplitShapeSplit(transformId)
        if not v2 then
          self.currentCell.treeCount = self.currentCell.treeCount + 1
        end
      end
    end
  end
  return true
end
function EnvironmentAreaSystem:onCellWaterCallback(waterY, args)
  self.waterCheckPending = false
  self.currentCell.isNearWater = false
  if waterY ~= nil and g_currentMission ~= nil then
    local v6 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.waterCheckPosition[1], 0, self.waterCheckPosition[3])
    if v6 - 0.25 < waterY then
      self.currentCell.isNearWater = true
    end
  end
end
function EnvironmentAreaSystem:draw()
  v1:drawDebug(function(self)
    if not self.isValid then
      return 1, 0, 0, 0.1
    end
    if not self.isDone then
      return 0, 0, 1, 0.1
    end
    return 0, 1, 0, 0.1
  end, function(self, v1, v2)
    if self.treeCount ~= nil then
      local v4 = string.format("%s\nTrees: %d", nil or "", self.treeCount)
    end
    if self.areaTypeWeights ~= nil then
      for v7, v8 in pairs(self.areaTypeWeights) do
        local v12 = AreaType.getName(v7)
        local v9 = string.format("%s\n[%s] %.3f", v3 or "", v12, v8)
      end
    end
    if v3 ~= nil then
      v5 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v1, 0, v2)
      DebugUtil.drawDebugGizmoAtWorldPos(v1, v5 + 0.1, v2, 0, 0, 1, 0, 1, 0, v3, false, {1, 1, 1})
    end
    if self == u0.currentCell and self.hitDataXZ ~= nil then
      for v7, v8 in pairs(self.hitDataXZ) do
        local v19 = string.format("Raycast-XZ %d\n%.3f", v7, v8.distance)
        DebugUtil.drawDebugGizmoAtWorldPos(v8.x, v8.y, v8.z, 0, 0, 1, 0, 1, 0, v19, false)
      end
    end
  end)
  setTextColor(1, 1, 1, 1)
  for v5, v6 in ipairs(self.areaTypeWeights) do
    local v7 = AreaType.getName(v5)
    setTextAlignment(RenderText.ALIGN_RIGHT)
    renderText(0.3, v1, 0.014, v7 .. ": ")
    setTextAlignment(RenderText.ALIGN_LEFT)
    local v12 = string.format("%.3f", v6)
    renderText(...)
  end
end
function EnvironmentAreaSystem:getWaterYAtWorldPosition(x, y, z)
  self.waterY = nil
  raycastClosest(x, (y or 100) + 100, z, 0, -1, 0, "onWaterRaycastCallback", 200, self, CollisionFlag.WATER, false, false)
  return self.waterY
end
function EnvironmentAreaSystem:onWaterRaycastCallback(hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  if hitObjectId ~= 0 then
    self.waterY = y
  end
end
function EnvironmentAreaSystem.getWaterYAtWorldPositionAsync(v0, v1, v2, v3, v4, v5, v6, v7)
  return v9:raycastClosestAsync(v1, v2 + 100, v3, 0, -1, 0, 200, false, CollisionFlag.WATER, v0, EnvironmentAreaSystem.onWaterRaycastCallbackAsync, v6, {callbackTarget = v5, callbackFunction = v4, arguments = v7})
end
function EnvironmentAreaSystem.onWaterRaycastCallbackAsync(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9)
  if v1 ~= 0 then
  end
  v9.callbackFunction(v9.callbackTarget, v10, v9.arguments)
end
function EnvironmentAreaSystem:consoleCommandToggleDebugView()
  self.isDebugViewActive = not self.isDebugViewActive
  if self.isDebugViewActive then
    v1:addDrawable(self)
    return
  end
  v1:removeDrawable(self)
end
