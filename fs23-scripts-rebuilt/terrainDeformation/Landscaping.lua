-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Landscaping = {}
local Landscaping_mt = Class(Landscaping)
Landscaping.BRUSH_SHAPE_NUM_SEND_BITS = 2
Landscaping.OPERATION_NUM_SEND_BITS = 3
Landscaping.BRUSH_SHAPE = {SQUARE = 1, CIRCLE = 2}
Landscaping.OPERATION = {RAISE = 1, LOWER = 2, SMOOTH = 3, FLATTEN = 4, PAINT = 5, FOLIAGE = 6, SLOPE = 7}
{}[Landscaping.OPERATION.RAISE] = 1
{}[Landscaping.OPERATION.LOWER] = -1
{}[Landscaping.OPERATION.SMOOTH] = 0
{}[Landscaping.OPERATION.FLATTEN] = 0
{}[Landscaping.OPERATION.PAINT] = 0
{}[Landscaping.OPERATION.FOLIAGE] = 0
{}[Landscaping.OPERATION.SLOPE] = 1
Landscaping.OPERATION_HEIGHT_CHANGE_FACTOR_MAP = {}
Landscaping.TERRAIN_UNIT = 2
Landscaping.SCULPT_BASE_COST_PER_M3 = 10
Landscaping.PAINT_BASE_COST_PER_M2 = 1
Landscaping.FOLIAGE_BASE_COST_PER_M2 = 0.2
function Landscaping.new(terrainDeformationQueue, farmlandManager, terrainRootNode, placementCollisionMap, playerFarm, userId, isMasterUser, validateOnly, callbackFunction, callbackFunctionTarget)
  local v10 = setmetatable({}, u0)
  v10.terrainDeformationQueue = terrainDeformationQueue
  v10.farmlandManager = farmlandManager
  v10.terrainRootNode = terrainRootNode
  v10.placementCollisionMap = placementCollisionMap
  v10.playerFarm = playerFarm
  v10.currentUserId = userId
  v10.isMasterUser = isMasterUser
  v10.validateOnly = validateOnly
  if not callbackFunction then
  end
  v10.callbackFunction = v11
  v10.callbackFunctionTarget = callbackFunctionTarget
  v10.terrainUnit = Landscaping.TERRAIN_UNIT
  v10.halfTerrainUnit = Landscaping.TERRAIN_UNIT / 2
  v10.targetPosition = nil
  v10.radius = 0
  v10.brushShape = Landscaping.BRUSH_SHAPE.SQUARE
  v10.smoothingDistance = 0
  v10.sculptingOperation = Landscaping.OPERATION.RAISE
  v10.modifiedAreas = {}
  return v10
end
function Landscaping.delete(v0)
end
function Landscaping:hasObjectOverlapInModificationArea(x, y, z)
  for v8, v9 in pairs(g_currentMission.players) do
    if not v9.isControlled then
      continue
    end
    local v10, v11, v12 = getWorldTranslation(v9.rootNode)
    if self.brushShape == Landscaping.BRUSH_SHAPE.CIRCLE then
      if not ((v10 - x) * (v10 - x) + (v12 - z) * (v12 - z) <= v4 * v4) then
        continue
      end
      return true
    else
      local v15 = math.abs(v10 - x)
      if not (v15 <= v4) then
        continue
      end
      v15 = math.abs(v12 - z)
      if not (v15 <= v4) then
        continue
      end
      return true
    end
  end
  return false
end
function Landscaping:addModifiedCircleArea(x, z, radius)
  if radius < self.terrainUnit + self.halfTerrainUnit then
    self:addModifiedSquareArea(x, z, radius * 2 * 0.7071067811865475)
    return
  end
  -- TODO: structure LOP_FORNPREP (pc 25, target 91)
  local v13 = math.abs(-radius / self.terrainUnit * self.terrainUnit)
  local v11 = math.acos(v13 / radius)
  local v10 = math.sin(...)
  local v14 = math.abs(-radius / self.terrainUnit * self.terrainUnit + self.terrainUnit)
  local v12 = math.acos(v14 / radius)
  v11 = math.sin(...)
  v12 = math.min(v10 * radius, v11 * radius)
  table.insert(self.modifiedAreas, {x + -radius / self.terrainUnit * self.terrainUnit, z - v12 - 0.02, x + -radius / self.terrainUnit * self.terrainUnit + self.terrainUnit, z - v12 - 0.02, x + -radius / self.terrainUnit * self.terrainUnit, z + v12 - 0.02})
  -- TODO: structure LOP_FORNLOOP (pc 90, target 26)
end
function Landscaping:addModifiedSquareArea(x, z, side)
  table.insert(self.modifiedAreas, {x - side * 0.5, z - side * 0.5, x + side * 0.5, z - side * 0.5, x - side * 0.5, z + side * 0.5})
end
function Landscaping:assignSmoothingParameters(deform, x, z, radius, strength, brushShape)
  deform:setAdditiveHeightChangeAmount(0.05)
  if brushShape == Landscaping.BRUSH_SHAPE.CIRCLE then
    deform:addSoftCircleBrush(x, z, radius, 0.2, strength)
    self:addModifiedCircleArea(x, z, radius)
  else
    deform:addSoftSquareBrush(x, z, radius * 2, 0.2, strength)
    self:addModifiedSquareArea(x, z, radius * 2)
  end
  deform:enableSmoothingMode()
end
function Landscaping:assignPaintingParameters(deform, x, z, radius, brushShape, layerIndex)
  if brushShape == Landscaping.BRUSH_SHAPE.CIRCLE then
    deform:addSoftCircleBrush(x, z, radius, 1, 1, layerIndex)
    self:addModifiedCircleArea(x, z, radius)
  else
    deform:addSoftSquareBrush(x, z, radius * 2, 1, 1, layerIndex)
    self:addModifiedSquareArea(x, z, radius * 2)
  end
  deform:enablePaintingMode()
end
function Landscaping:assignSculptingParameters(deform, x, y, z, nx, ny, nz, d, minY, maxY, radius, strength, brushShape, operation, smoothingDistance)
  if operation == Landscaping.OPERATION.FLATTEN then
    deform:setAdditiveHeightChangeAmount(0.75)
    deform:setHeightTarget(y, y, 0, 1, 0, -y)
    deform:enableSetDeformationMode()
  elseif operation == Landscaping.OPERATION.LOWER then
    deform:enableAdditiveDeformationMode()
    deform:setAdditiveHeightChangeAmount(-0.005)
  else
    if operation == Landscaping.OPERATION.RAISE then
      deform:enableAdditiveDeformationMode()
      deform:setAdditiveHeightChangeAmount(0.005)
    elseif operation == Landscaping.OPERATION.SLOPE then
      deform:setAdditiveHeightChangeAmount(0.75)
      deform:setHeightTarget(minY, maxY, nx, ny, nz, d)
      deform:enableSetDeformationMode()
    end
  end
  if brushShape == Landscaping.BRUSH_SHAPE.SQUARE then
    deform:addSoftSquareBrush(x, z, radius * 2, 0.2, strength)
    self:addModifiedSquareArea(x, z, radius * 2)
  else
    deform:addSoftCircleBrush(x, z, radius, 0.2, strength)
    self:addModifiedCircleArea(x, z, radius)
  end
  deform:setOutsideAreaConstraints(0, 1.3089969389957472, 1.3089969389957472)
end
function Landscaping.validateWaterLevel(v0, deform, x, y)
  if g_currentMission ~= nil and g_currentMission.environment ~= nil and g_currentMission.environment.water ~= nil then
    local ny, nz, d = getWorldTranslation(g_currentMission.environment.water)
    if deform > nz and deform + x * Landscaping.OPERATION_HEIGHT_CHANGE_FACTOR_MAP[y] > nz then
    end
    return not maxY
  end
  return true
end
function Landscaping:sculpt(x, y, z, nx, ny, nz, d, minY, maxY, radius, strength, brushShape, operation, smoothingDistance, terrainPaintingLayer, terrainFoliageLayer, terrainFoliageValue)
  local v18 = self:validateWaterLevel(y, strength, operation)
  if not v18 then
    self:onSculptingApplied(TerrainDeformation.STATE_FAILED_BLOCKED, 0)
    return
  end
  self.isTerrainDeformationPending = true
  v18 = TerrainDeformation.new(self.terrainRootNode)
  self.currentTerrainDeformation = v18
  self.targetPosition = {x, y, z}
  self.radius = radius
  self.brushShape = brushShape
  local v19 = math.max(smoothingDistance, self.terrainUnit)
  self.smoothingDistance = v19
  self.sculptingOperation = operation
  if operation == Landscaping.OPERATION.SMOOTH then
    self:assignSmoothingParameters(v18, x, z, radius, strength, brushShape)
  elseif operation == Landscaping.OPERATION.PAINT then
    self:assignPaintingParameters(v18, x, z, radius, brushShape, terrainPaintingLayer)
  else
    if operation == Landscaping.OPERATION.FOLIAGE then
      if brushShape == Landscaping.BRUSH_SHAPE.CIRCLE and 1 <= radius then
        -- TODO: structure LOP_FORNPREP (pc 112, target 221)
        local v30 = math.abs(-radius / 0.5 * 0.5)
        local v28 = math.acos(v30 / radius)
        local v27 = math.sin(...)
        local v31 = math.abs(-radius / 0.5 * 0.5 + 0.5)
        local v29 = math.acos(v31 / radius)
        v28 = math.sin(...)
        v29 = math.min(v27 * radius, v28 * radius)
        v31 = g_currentMission.foliageSystem:getFoliagePaint(terrainFoliageLayer)
        v29 = g_currentMission.foliageSystem:apply(v31, x + -radius / 0.5 * 0.5, z - v29 - 0.02, x + -radius / 0.5 * 0.5 + 0.5, z - v29 - 0.02, x + -radius / 0.5 * 0.5, z + v29 - 0.02, terrainFoliageValue)
        -- TODO: structure LOP_FORNLOOP (pc 169, target 113)
        -- goto L221  (LOP_JUMP +50)
      end
      if brushShape == Landscaping.BRUSH_SHAPE.CIRCLE then
      end
      v29 = v20:getFoliagePaint(terrainFoliageLayer)
      v27 = v20:apply(v29, x - radius, z - radius, x - radius, z + radius, x + radius, z - radius, terrainFoliageValue)
    else
      self:assignSculptingParameters(v18, x, y, z, nx, ny, nz, d, minY, maxY, radius, strength, brushShape, operation, self.smoothingDistance)
    end
  end
  if operation ~= Landscaping.OPERATION.PAINT and operation ~= Landscaping.OPERATION.FOLIAGE then
    v18:setBlockedAreaMaxDisplacement(0.01)
    v18:setDynamicObjectCollisionMask(CollisionMask.LANDSCAPING)
    v18:setDynamicObjectMaxDisplacement(0.03)
    if self.placementCollisionMap ~= nil then
      v18:setBlockedAreaMap(self.placementCollisionMap, 0)
    end
  end
  if operation == Landscaping.OPERATION.FOLIAGE then
    self:onSculptingValidated(TerrainDeformation.STATE_SUCCESS, v19, false)
    return
  end
  if operation ~= Landscaping.OPERATION.SMOOTH then
    -- if v13 ~= Landscaping.OPERATION.PAINT then goto L302 end
  end
  if not self.validateOnly then
    v18:apply(true, "onSculptingValidated", self)
    return
  end
  v20:queueJob(v18, true, "onSculptingValidated", self)
end
function Landscaping:onSculptingValidated(errorCode, displacedVolumeOrArea, blocked)
  if errorCode == TerrainDeformation.STATE_SUCCESS then
    local nz = nz:getBalance()
    local cost = self:getCost(displacedVolumeOrArea)
    if nz < cost then
    end
    nz = Landscaping.isModificationAreaOnOwnedLand(self.targetPosition[1], self.targetPosition[3], self.radius, self.smoothingDistance, self.farmlandManager, self.playerFarm.farmId)
    if not nz then
    end
    if self.sculptingOperation ~= Landscaping.OPERATION.PAINT and self.sculptingOperation ~= Landscaping.OPERATION.FOLIAGE then
      local maxY = unpack(self.targetPosition)
      cost = self:hasObjectOverlapInModificationArea(...)
      if cost then
      end
    end
    if self.sculptingOperation == Landscaping.OPERATION.FOLIAGE then
      self:onSculptingApplied(ny, displacedVolumeOrArea, nil)
      return
    end
    if nx and not self.validateOnly then
      cost:queueJob(self.currentTerrainDeformation, false, "onSculptingApplied", self)
      return
    end
    self:onSculptingApplied(ny, displacedVolumeOrArea, nil)
    return
  end
  nx:cancel()
  self:onSculptingApplied(errorCode, 0, nil)
end
function Landscaping:onSculptingApplied(errorCode, displacedVolumeOrArea, _)
  if errorCode == TerrainDeformation.STATE_SUCCESS and not self.validateOnly then
    local cost = self:getCost(displacedVolumeOrArea)
    ny:changeBalance(-cost, MoneyType.SHOP_PROPERTY_BUY)
    if self.sculptingOperation ~= Landscaping.OPERATION.FOLIAGE then
      for minY, maxY in pairs(self.modifiedAreas) do
        local radius, strength, brushShape, operation, smoothingDistance, terrainPaintingLayer = unpack(maxY)
        if self.sculptingOperation ~= Landscaping.OPERATION.SMOOTH then
          FSDensityMapUtil.removeFieldArea(radius, strength, brushShape, operation, smoothingDistance, terrainPaintingLayer, false)
          FSDensityMapUtil.removeWeedArea(radius, strength, brushShape, operation, smoothingDistance, terrainPaintingLayer)
          FSDensityMapUtil.removeStoneArea(radius, strength, brushShape, operation, smoothingDistance, terrainPaintingLayer)
        end
        FSDensityMapUtil.eraseTireTrack(radius, strength, brushShape, operation, smoothingDistance, terrainPaintingLayer)
        DensityMapHeightUtil.clearArea(radius, strength, brushShape, operation, smoothingDistance, terrainPaintingLayer)
        if self.sculptingOperation == Landscaping.OPERATION.PAINT then
          FSDensityMapUtil.clearDecoArea(radius, strength, brushShape, operation, smoothingDistance, terrainPaintingLayer)
        end
        local terrainFoliageLayer = math.min(radius, brushShape, smoothingDistance, smoothingDistance + brushShape - radius)
        local terrainFoliageValue = math.max(radius, brushShape, smoothingDistance, smoothingDistance + brushShape - radius)
        local v18 = math.min(strength, operation, terrainPaintingLayer, terrainPaintingLayer + operation - strength)
        local v19 = math.max(strength, operation, terrainPaintingLayer, terrainPaintingLayer + operation - strength)
        v20:setAreaDirty(terrainFoliageLayer, terrainFoliageValue, v18, v19)
      end
    end
  end
  if self.callbackFunctionTarget ~= nil then
    self.callbackFunction(self.callbackFunctionTarget, errorCode, displacedVolumeOrArea)
  else
    self.callbackFunction(errorCode, displacedVolumeOrArea)
  end
  cost:delete()
  self.currentTerrainDeformation = nil
end
function Landscaping:getCost(displacedVolumeOrArea)
  if self.sculptingOperation == Landscaping.OPERATION.PAINT then
    return displacedVolumeOrArea * Landscaping.PAINT_BASE_COST_PER_M2
  end
  if self.sculptingOperation == Landscaping.OPERATION.PAINT then
    return displacedVolumeOrArea * Landscaping.FOLIAGE_BASE_COST_PER_M2
  end
  return displacedVolumeOrArea * Landscaping.SCULPT_BASE_COST_PER_M3
end
function Landscaping.isModificationAreaOnOwnedLand(x, z, radius, smoothingDistance, farmlandManager, farmId)
  local d = farmlandManager:getIsOwnedByFarmAtWorldPosition(farmId, x - radius + smoothingDistance, z - radius + smoothingDistance)
  if d then
    d = farmlandManager:getIsOwnedByFarmAtWorldPosition(farmId, x - radius + smoothingDistance, z + radius + smoothingDistance)
    if d then
      d = farmlandManager:getIsOwnedByFarmAtWorldPosition(farmId, x + radius + smoothingDistance, z - radius + smoothingDistance)
      if d then
        d = farmlandManager:getIsOwnedByFarmAtWorldPosition(farmId, x + radius + smoothingDistance, z + radius + smoothingDistance)
      end
    end
  end
  return d
end
