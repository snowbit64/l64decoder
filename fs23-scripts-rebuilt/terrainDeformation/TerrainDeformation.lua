-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TerrainDeformation = {}
local TerrainDeformation_mt = Class(TerrainDeformation)
TerrainDeformation.STATE_SUCCESS = 0
TerrainDeformation.STATE_FAILED_BLOCKED = 1
TerrainDeformation.STATE_FAILED_COLLIDE_WITH_OBJECT = 2
TerrainDeformation.STATE_FAILED_TO_DEFORM = 3
TerrainDeformation.STATE_CANCELLED = 4
TerrainDeformation.STATE_FAILED_NOT_ENOUGH_MONEY = 5
TerrainDeformation.STATE_FAILED_NOT_OWNED = 6
TerrainDeformation.STATE_SEND_NUM_BITS = 3
TerrainDeformation.LAYER_SEND_NUM_BITS = 8
TerrainDeformation.NO_TERRAIN_BRUSH = -1
function TerrainDeformation.new(terrainNode)
  local v1 = setmetatable({}, u0)
  local v2 = createTerrainDeformation(terrainNode)
  v1.terrainDeformationId = v2
  v1.terrainNode = terrainNode
  return v1
end
function TerrainDeformation:delete()
  delete(self.terrainDeformationId)
end
function TerrainDeformation:enableDeformationMode()
  enableTerrainDeformationMode(self.terrainDeformationId)
end
function TerrainDeformation:enableAdditiveDeformationMode()
  enableTerrainDeformationHeightAdditiveMode(self.terrainDeformationId)
end
function TerrainDeformation:setAdditiveHeightChangeAmount(amount)
  setTerrainDeformationHeightChangeAmount(self.terrainDeformationId, amount)
end
function TerrainDeformation:setHeightTarget(minY, maxY, nx, ny, nz, d)
  setTerrainDeformationHeightSetTarget(self.terrainDeformationId, minY, maxY, nx, ny, nz, d)
end
function TerrainDeformation:enableSetDeformationMode()
  enableTerrainDeformationHeightSetMode(self.terrainDeformationId)
end
function TerrainDeformation:enableSmoothingMode()
  enableTerrainDeformationHeightSmoothingMode(self.terrainDeformationId)
end
function TerrainDeformation:enablePaintingMode()
  enableTerrainDeformationPaintingMode(self.terrainDeformationId)
end
function TerrainDeformation:clearAreas()
  clearTerrainDeformationAreas(self.terrainDeformationId)
end
function TerrainDeformation:addSoftSquareBrush(x, z, size, hardness, strength, terrainBrushId)
  if not terrainBrushId then
  end
  v7(v8, v9, v10, v11, v12, v13, v14, v15)
end
function TerrainDeformation:addSoftCircleBrush(x, z, radius, hardness, strength, terrainBrushId)
  if not terrainBrushId then
  end
  v7(v8, v9, v10, v11, v12, v13, v14, v15)
end
function TerrainDeformation:addArea(x, y, z, side1X, side1Y, side1Z, side2X, side2Y, side2Z, terrainBrushId, writeBlockedAreaMap)
  if not terrainBrushId then
  end
  v12(v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, writeBlockedAreaMap)
end
function TerrainDeformation:setOutsideAreaBrush(brushId)
  if not brushId then
  end
  v2(v3, v4)
end
function TerrainDeformation:setOutsideAreaConstraints(maxSmoothDistance, maxSlope, maxEdgeAngle)
  setTerrainDeformationOutsideAreaConstraints(self.terrainDeformationId, maxSmoothDistance, maxSlope / 0.7853981633974483, maxEdgeAngle)
end
function TerrainDeformation:getBlockedAreaMapSize()
  return getTerrainDeformationBlockedAreaMapSize(self.terrainDeformationId)
end
function TerrainDeformation:setDynamicObjectCollisionMask(collisionMask)
  setTerrainDeformationDynamicObjectCollisionMask(self.terrainDeformationId, collisionMask)
end
function TerrainDeformation:setDynamicObjectMaxDisplacement(maxDisplacement)
  setTerrainDeformationDynamicObjectMaxDisplacement(self.terrainDeformationId, maxDisplacement)
end
function TerrainDeformation:setBlockedAreaMap(bitVectorMapId, channel)
  setTerrainDeformationBlockedAreaMap(self.terrainDeformationId, bitVectorMapId, channel)
end
function TerrainDeformation:setBlockedAreaMaxDisplacement(maxDisplacement)
  setTerrainDeformationBlockedAreaMaxDisplacement(self.terrainDeformationId, maxDisplacement)
end
function TerrainDeformation:apply(previewOnly, callbackFunc, callbackObject)
  applyTerrainDeformation(self.terrainDeformationId, previewOnly, callbackFunc, callbackObject)
end
function TerrainDeformation:cancel()
  cancelTerrainDeformation(self.terrainDeformationId)
end
function TerrainDeformation:blockAreas()
  writeTerrainDeformationBlockedAreas(self.terrainDeformationId, 1)
end
function TerrainDeformation:unblockAreas()
  writeTerrainDeformationBlockedAreas(self.terrainDeformationId, 0)
end
