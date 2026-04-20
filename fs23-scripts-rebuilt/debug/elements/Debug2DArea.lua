-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Debug2DArea = {}
local Debug2DArea_mt = Class(Debug2DArea)
function Debug2DArea.new(filled, doubleSided, color, alignToTerrain, customMt)
  if not customMt then
  end
  local v5 = v5(v6, v7)
  if not color then
  end
  v5.color = v6
  local v6 = Utils.getNoNil(filled, false)
  v5.filled = v6
  v6 = Utils.getNoNil(alignToTerrain, true)
  v5.alignToTerrain = v6
  v6 = Utils.getNoNil(doubleSided, false)
  v5.doubleSided = v6
  v5.positionNodes = {{-1, 0, -1}, {1, 0, -1}, {1, 0, 1}, {-1, 0, 1}, {-1, 0, -1}, {1, 0, -1}, {1, 0, 1}, {-1, 0, 1}}
  return v5
end
function Debug2DArea.delete(v0)
end
function Debug2DArea.update(v0, v1)
end
function Debug2DArea:draw()
  if g_currentMission.terrainRootNode == nil then
    return
  end
  local v1, v2, v3, v4 = unpack(self.color)
  if self.alignToTerrain then
    local v18 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.positionNodes[1][1], 0, self.positionNodes[1][3])
    v18 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.positionNodes[2][1], 0, self.positionNodes[2][3])
    v18 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.positionNodes[3][1], 0, self.positionNodes[3][3])
    v18 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.positionNodes[4][1], 0, self.positionNodes[4][3])
  end
  if self.filled then
    drawDebugTriangle(v6, v7, v8, v9, v10, v11, v12, v13, v14, v1, v2, v3, v4, false)
    drawDebugTriangle(v6, v7, v8, v12, v13, v14, v15, v16, v17, v1, v2, v3, v4, false)
    -- if not v0.doubleSided then goto L211 end
    drawDebugTriangle(v12, v13, v14, v9, v10, v11, v6, v7, v8, v1, v2, v3, v4, false)
    drawDebugTriangle(v15, v16, v17, v12, v13, v14, v6, v7, v8, v1, v2, v3, v4, false)
    return
  end
  drawDebugLine(v6, v7, v8, v1, v2, v3, v9, v10, v11, v1, v2, v3)
  drawDebugLine(v9, v10, v11, v1, v2, v3, v12, v13, v14, v1, v2, v3)
  drawDebugLine(v12, v13, v14, v1, v2, v3, v15, v16, v17, v1, v2, v3)
  drawDebugLine(v15, v16, v17, v1, v2, v3, v6, v7, v8, v1, v2, v3)
end
function Debug2DArea:setColor(r, g, b, a, isFilled)
  local v6 = Utils.getNoNil(isFilled, self.isFilled)
  self.isFilled = v6
  self.color = {r, g, b, a}
  return self
end
function Debug2DArea:createWithNodes(startNode, widthNode, heightNode)
  local v4, v5, v6 = getWorldTranslation(startNode)
  local v7, v8, v9 = getWorldTranslation(widthNode)
  local v10, v11, v12 = getWorldTranslation(heightNode)
  return self:createWithPositions(v4, v5, v6, v7, v8, v9, v10, v11, v12)
end
function Debug2DArea:createWithPositions(startX, startY, startZ, widthX, widthY, widthZ, heightX, heightY, heightZ)
  if startY == nil then
    local v10 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, startX, 0, startZ)
  end
  if widthY == nil then
    v10 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, widthX, 0, widthZ)
  end
  if heightY == nil then
    v10 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, heightX, 0, heightZ)
  end
  self.positionNodes[1] = {startX, startY, startZ}
  self.positionNodes[2] = {widthX, widthY, widthZ}
  self.positionNodes[3] = {startX + widthX - startX + heightX - startX, startY + widthY - startY + heightY - startY, startZ + widthZ - startZ + heightZ - startZ}
  self.positionNodes[4] = {heightX, heightY, heightZ}
  return self
end
function Debug2DArea:createWithStartEnd(startNode, endNode)
  local v3, v4, v5 = localToLocal(endNode, startNode, 0, 0, 0)
  local v6, v7, v8 = localToWorld(startNode, v3 * 0.5, v4 * 0.5, v5 * 0.5)
  local v11 = math.abs(v3)
  local v10 = math.abs(v5)
  local v11, v12, v13 = localDirectionToWorld(startNode, 0, 0, 1)
  return self:createFromPosAndDir(v6, v7, v8, v11, 0, v13, 0, 1, 0, v11, v10)
end
function Debug2DArea:createSimple(x, y, z, size)
  return self:createFromPosAndDir(x, y, z, 0, 0, 1, 0, 1, 0, size, size)
end
function Debug2DArea:createWithSizeAndOffset(node, width, length, widthOffset, lengthOffset)
  local v6, v7, v8 = localDirectionToWorld(node, 0, 0, 1)
  local v9, v10, v11 = localDirectionToWorld(node, 0, 1, 0)
  local v12, v13, v14 = getWorldTranslation(node)
  local v15, v16, v17 = MathUtil.transform(v12, v13, v14, v6, v7, v8, v9, v10, v11, widthOffset, 0, lengthOffset)
  v15 = self:createFromPosAndDir(v15, v16, v17, v6, v7, v8, v9, v10, v11, width, length)
  return v15
end
function Debug2DArea:createFromPosAndDir(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, width, length)
  local v16 = MathUtil.transform(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, -(width * 0.5), 0, -(length * 0.5))
  self.positionNodes[1] = {}
  v16 = MathUtil.transform(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, -(width * 0.5), 0, length * 0.5)
  self.positionNodes[2] = {}
  v16 = MathUtil.transform(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, width * 0.5, 0, length * 0.5)
  self.positionNodes[3] = {}
  v16 = MathUtil.transform(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, width * 0.5, 0, -(length * 0.5))
  self.positionNodes[4] = {}
  return self
end
function Debug2DArea:createWithNode(node, sizeX, sizeZ)
  local v8 = localToWorld(node, -(sizeX * 0.5), 0, -(sizeZ * 0.5))
  self.positionNodes[1] = {}
  v8 = localToWorld(node, -(sizeX * 0.5), 0, sizeZ * 0.5)
  self.positionNodes[2] = {}
  v8 = localToWorld(node, sizeX * 0.5, 0, sizeZ * 0.5)
  self.positionNodes[3] = {}
  v8 = localToWorld(node, sizeX * 0.5, 0, -(sizeZ * 0.5))
  self.positionNodes[4] = {}
  return self
end
