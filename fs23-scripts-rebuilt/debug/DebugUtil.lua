-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugUtil = {COLORS = {{1, 0, 0.86}, {0.16, 1, 0}, {0, 1, 1}, {1, 0, 0}, {0, 0, 1}, {1, 0.52, 0}, {0, 0.4, 0}, {0.1, 0.35, 0.4}}}
function DebugUtil.drawDebugNode(node, text, alignToGround, offsetY)
  local v4, v5, v6 = getWorldTranslation(node)
  local v7, v8, v9 = localDirectionToWorld(node, 0, 1, 0)
  local v10, v11, v12 = localDirectionToWorld(node, 0, 0, 1)
  DebugUtil.drawDebugGizmoAtWorldPos(v4, v5 + (offsetY or 0), v6, v10, v11, v12, v7, v8, v9, text, alignToGround)
end
function DebugUtil.renderTextAtNode(node, text, textSize)
  local v3, v4, v5 = getWorldTranslation(node)
  Utils.renderTextAtWorldPosition(v3, v4, v5, text, textSize or 0.02)
end
function DebugUtil.drawDebugGizmoAtWorldPos(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, text, alignToGround, color)
  local v12, v13, v14 = MathUtil.crossProduct(upX, upY, upZ, dirX, dirY, dirZ)
  if alignToGround then
    local v15 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
  end
  drawDebugLine(x, y, z, 1, 0, 0, x + v12 * 0.3, y + v13 * 0.3, z + v14 * 0.3, 1, 0, 0)
  drawDebugLine(x, y, z, 0, 1, 0, x + upX * 0.3, y + upY * 0.3, z + upZ * 0.3, 0, 1, 0)
  drawDebugLine(x, y, z, 0, 0, 1, x + dirX * 0.3, y + dirY * 0.3, z + dirZ * 0.3, 0, 0, 1)
  if text ~= nil then
    local v19 = tostring(text)
    local v20 = getCorrectTextSize(0.012)
    Utils.renderTextAtWorldPosition(x, y, z, v19, v20, 0, color)
  end
end
function DebugUtil.drawDebugArea(start, width, height, r, g, b, alignToGround, drawNodes, drawCircle, offsetY)
  local v10, v11, v12 = getWorldTranslation(start)
  local v13, v14, v15 = getWorldTranslation(width)
  local v16, v17, v18 = getWorldTranslation(height)
  DebugUtil.drawDebugAreaRectangle(v10, v11 + (offsetY or 0), v12, v13, v14 + (offsetY or 0), v15, v16, v17 + (offsetY or 0), v18, alignToGround, r, g, b)
  if drawNodes ~= nil then
    -- if not v7 then goto L73 end
  end
  local v21 = getName(start)
  DebugUtil.drawDebugNode(start, v21, alignToGround, offsetY)
  v21 = getName(width)
  DebugUtil.drawDebugNode(width, v21, alignToGround, offsetY)
  v21 = getName(height)
  DebugUtil.drawDebugNode(height, v21, alignToGround, offsetY)
  local v19, v20, v21, v22, v23, v24, v25 = DensityMapHeightUtil.getLineByArea(start, width, height, 0.5)
  if alignToGround then
    local v26 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v19, 0, v21)
    v26 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v22, 0, v24)
  end
  if drawCircle ~= nil then
    -- if not v8 then goto L133 end
  end
  drawDebugLine(v19, v20, v21, 1, 1, 1, v22, v23, v24, 1, 1, 1)
  DebugUtil.drawDebugCircle((v19 + v22) * 0.5, (v20 + v23) * 0.5, (v21 + v24) * 0.5, v25, 20, nil)
end
function DebugUtil.drawDebugLine(x1, y1, z1, x2, y2, z2, r, g, b, radius, alignToGround)
  if alignToGround then
    local v11 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x1, 0, z1)
    v11 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x2, 0, z2)
  end
  drawDebugLine(x1, y1, z1, r or 1, g or 1, b or 1, x2, y2, z2, r or 1, g or 1, b or 1)
  if radius ~= nil then
    DebugUtil.drawDebugCircle(x1, y1, z1, radius, 20, nil)
    DebugUtil.drawDebugCircle(x2, y2, z2, radius, 20, nil)
  end
end
function DebugUtil.drawDebugAreaRectangle(x, y, z, x1, y1, z1, x2, y2, z2, alignToGround, r, g, b)
  if alignToGround then
    local v13 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
    v13 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x1, 0, z1)
    v13 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x2, 0, z2)
  end
  drawDebugLine(x, y, z, r, g, b, x1, y1, z1, r, g, b)
  drawDebugLine(x, y, z, r, g, b, x2, y2, z2, r, g, b)
  drawDebugLine(x2, y2, z2, r, g, b, x2 + x1 - x, y2 + y1 - y, z2 + z1 - z, r, g, b)
  drawDebugLine(x1, y1, z1, r, g, b, x1 + x2 - x, y1 + y2 - y, z1 + z2 - z, r, g, b)
end
function DebugUtil.drawDebugAreaRectangleFilled(x, y, z, x1, y1, z1, x2, y2, z2, alignToGround, r, g, b, a)
  if alignToGround then
    local v17 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
    v17 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x1, 0, z1)
    v17 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x2, 0, z2)
    v17 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x1, 0, z2)
  end
  drawDebugTriangle(x, y, z, x2, y2, z2, x1, y1, z1, r, g, b, a, false)
  drawDebugTriangle(x1, y1, z1, x2, y2, z2, v14, v15, v16, r, g, b, a, false)
end
function DebugUtil.drawDebugRectangle(node, minX, maxX, minZ, maxZ, yOffset, r, g, b, a, filled)
  local v11, v12, v13 = localToWorld(node, minX, yOffset, maxZ)
  local v14, v15, v16 = localToWorld(node, maxX, yOffset, maxZ)
  local v17, v18, v19 = localToWorld(node, minX, yOffset, minZ)
  local v20, v21, v22 = localToWorld(node, maxX, yOffset, minZ)
  drawDebugLine(v11, v12, v13, r, g, b, v14, v15, v16, r, g, b)
  drawDebugLine(v14, v15, v16, r, g, b, v20, v21, v22, r, g, b)
  drawDebugLine(v20, v21, v22, r, g, b, v17, v18, v19, r, g, b)
  drawDebugLine(v17, v18, v19, r, g, b, v11, v12, v13, r, g, b)
  if filled then
    drawDebugTriangle(v11, v12, v13, v14, v15, v16, v20, v21, v22, r, g, b, a, true)
    drawDebugTriangle(v20, v21, v22, v17, v18, v19, v11, v12, v13, r, g, b, a, true)
  end
end
function DebugUtil.drawDebugCircle(v0, v1, v2, v3, v4, v5, v6, v7, v8)
  if v5 ~= nil then
  end
  -- TODO: structure LOP_FORNPREP (pc 13, target 115)
  local v19 = math.cos((1 - 1) / v4 * 2 * math.pi)
  local v20 = math.sin((1 - 1) / v4 * 2 * math.pi)
  local v23 = math.cos(1 / v4 * 2 * math.pi)
  v23 = math.sin(1 / v4 * 2 * math.pi)
  if v6 then
    local v26 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v0, v1, v2)
    v26 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v0 + v19 * v3, v26 + 0.25, v2 + v20 * v3)
    v26 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v0 + v23 * v3, v26 + 0.25, v2 + v23 * v3)
  end
  drawDebugLine(v20, v21, v22, v9, v10, v11, v23, v24, v25, v9, v10, v11, v8)
  if v7 then
    drawDebugTriangle(v0, v1, v2, v23, v24, v25, v20, v21, v22, v9, v10, v11, 0.3, v8)
  end
  -- TODO: structure LOP_FORNLOOP (pc 114, target 14)
end
function DebugUtil.drawDebugCircleAtNode(node, radius, steps, color, vertical, offset)
  if offset ~= nil then
  end
  -- TODO: structure LOP_FORNPREP (pc 11, target 131)
  local v15 = math.cos((1 - 1) / steps * 2 * math.pi)
  local v16 = math.sin((1 - 1) / steps * 2 * math.pi)
  if vertical then
    local v19, v20, v21 = localToWorld(node, v6 + 0, v7 + v15 * radius, v8 + v16 * radius)
  else
    v19, v20, v21 = localToWorld(node, v6 + v15 * radius, v7 + 0, v8 + v16 * radius)
  end
  v19 = math.cos(v13)
  v19 = math.sin(v13)
  if vertical then
    local v22, v23, v24 = localToWorld(node, v6 + 0, v7 + v19 * radius, v8 + v19 * radius)
  else
    v22, v23, v24 = localToWorld(node, v6 + v19 * radius, v7 + 0, v8 + v19 * radius)
  end
  if color == nil then
    drawDebugLine(v16, v17, v18, 1, 0, 0, v19, v20, v21, 1, 0, 0)
  else
    drawDebugLine(v16, v17, v18, color[1], color[2], color[3], v19, v20, v21, color[1], color[2], color[3])
  end
  -- TODO: structure LOP_FORNLOOP (pc 130, target 12)
end
function DebugUtil.drawDebugCubeAtWorldPos(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, sizeX, sizeY, sizeZ, r, g, b)
  local temp = createTransformGroup("temp_drawDebugCubeAtWorldPos")
  local v17 = getRootNode()
  link(v17, temp)
  setTranslation(temp, x, y, z)
  setDirection(temp, dirX, dirY, dirZ, upX, upY, upZ)
  DebugUtil.drawDebugCube(temp, sizeX, sizeY, sizeZ, r, g, b)
  delete(temp)
end
function DebugUtil.drawOverlapBox(x, y, z, rotX, rotY, rotZ, extendX, extendY, extendZ, r, g, b)
  local temp = createTransformGroup("temp_drawDebugCubeAtWorldPos")
  local v14 = getRootNode()
  link(v14, temp)
  setTranslation(temp, x, y, z)
  setRotation(temp, rotX, rotY, rotZ)
  DebugUtil.drawDebugCube(temp, extendX * 2, extendY * 2, extendZ * 2, r, g, b)
  delete(temp)
end
function DebugUtil.drawDebugCube(node, sizeX, sizeY, sizeZ, r, g, b, offsetX, offsetY, offsetZ)
  local v10, v11, v12 = localToWorld(node, offsetX or 0, offsetY or 0, offsetZ or 0)
  local v13, v14, v15 = localDirectionToWorld(node, 1, 0, 0)
  local v16, v17, v18 = localDirectionToWorld(node, 0, 1, 0)
  local v19, v20, v21 = localDirectionToWorld(node, 0, 0, 1)
  drawDebugLine(v10 + v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 + v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 - v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 - v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 + v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 + v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 - v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 - v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 + v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 - v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 - v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 - v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 - v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 + v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 + v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 + v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 + v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 + v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 + v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 + v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 - v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 - v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 - v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 - v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 - v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 - v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 + v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
  drawDebugLine(v10 + v13 * sizeX * 0.5 + v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 + v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 + v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1, v10 + v13 * sizeX * 0.5 - v19 * sizeZ * 0.5 - v16 * sizeY * 0.5, v11 + v14 * sizeX * 0.5 - v20 * sizeZ * 0.5 - v17 * sizeY * 0.5, v12 + v15 * sizeX * 0.5 - v21 * sizeZ * 0.5 - v18 * sizeY * 0.5, r or 1, g or 1, b or 1)
end
function DebugUtil.drawSimpleDebugCube(x, y, z, width, r, g, b)
  drawDebugLine(x - width * 0.5, y - width * 0.5, z - width * 0.5, r, g, b, x + width * 0.5, y - width * 0.5, z - width * 0.5, r, g, b)
  drawDebugLine(x - width * 0.5, y - width * 0.5, z - width * 0.5, r, g, b, x - width * 0.5, y + width * 0.5, z - width * 0.5, r, g, b)
  drawDebugLine(x - width * 0.5, y - width * 0.5, z - width * 0.5, r, g, b, x - width * 0.5, y - width * 0.5, z + width * 0.5, r, g, b)
  drawDebugLine(x + width * 0.5, y + width * 0.5, z + width * 0.5, r, g, b, x - width * 0.5, y + width * 0.5, z + width * 0.5, r, g, b)
  drawDebugLine(x + width * 0.5, y + width * 0.5, z + width * 0.5, r, g, b, x + width * 0.5, y - width * 0.5, z + width * 0.5, r, g, b)
  drawDebugLine(x + width * 0.5, y + width * 0.5, z + width * 0.5, r, g, b, x + width * 0.5, y + width * 0.5, z - width * 0.5, r, g, b)
  drawDebugLine(x - width * 0.5, y - width * 0.5, z + width * 0.5, r, g, b, x + width * 0.5, y - width * 0.5, z + width * 0.5, r, g, b)
  drawDebugLine(x - width * 0.5, y - width * 0.5, z + width * 0.5, r, g, b, x - width * 0.5, y + width * 0.5, z + width * 0.5, r, g, b)
  drawDebugLine(x - width * 0.5, y + width * 0.5, z - width * 0.5, r, g, b, x - width * 0.5, y + width * 0.5, z + width * 0.5, r, g, b)
  drawDebugLine(x - width * 0.5, y + width * 0.5, z - width * 0.5, r, g, b, x + width * 0.5, y + width * 0.5, z - width * 0.5, r, g, b)
  drawDebugLine(x + width * 0.5, y - width * 0.5, z - width * 0.5, r, g, b, x + width * 0.5, y + width * 0.5, z - width * 0.5, r, g, b)
  drawDebugLine(x + width * 0.5, y - width * 0.5, z - width * 0.5, r, g, b, x + width * 0.5, y - width * 0.5, z + width * 0.5, r, g, b)
  drawDebugPoint(x, y, z, r, g, b, 1)
end
function DebugUtil.drawDebugReferenceAxisFromNode(node)
  if node ~= nil then
    local v1, v2, v3 = getWorldTranslation(node)
    local v4, v5, v6 = localDirectionToWorld(node, 0, 1, 0)
    local v7, v8, v9 = localDirectionToWorld(node, 0, 0, 1)
    DebugUtil.drawDebugReferenceAxis(v1, v2, v3, v4, v5, v6, v7, v8, v9)
  end
end
function DebugUtil.drawDebugReferenceAxis(posX, posY, posZ, upX, upY, upZ, dirX, dirY, dirZ)
  local v9, v10, v11 = MathUtil.crossProduct(upX, upY, upZ, dirX, dirY, dirZ)
  drawDebugLine(posX - v9 * 0.2, posY - v10 * 0.2, posZ - v11 * 0.2, 1, 1, 1, posX + v9 * 0.2, posY + v10 * 0.2, posZ + v11 * 0.2, 1, 0, 0)
  drawDebugLine(posX - upX * 0.2, posY - upY * 0.2, posZ - upZ * 0.2, 1, 1, 1, posX + upX * 0.2, posY + upY * 0.2, posZ + upZ * 0.2, 0, 1, 0)
  drawDebugLine(posX - dirX * 0.2, posY - dirY * 0.2, posZ - dirZ * 0.2, 1, 1, 1, posX + dirX * 0.2, posY + dirY * 0.2, posZ + dirZ * 0.2, 0, 0, 1)
end
function DebugUtil.drawDebugParallelogram(x, z, widthX, widthZ, heightX, heightZ, heightOffset, r, g, b, a, fixedHeight)
  local v15 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
  local v18 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x + widthX, 0, z + widthZ)
  local v21 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x + heightX, 0, z + heightZ)
  local v24 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x + widthX + heightX, 0, z + widthZ + heightZ)
  if fixedHeight then
  end
  drawDebugTriangle(v12, v14, v13, v15, v17, v16, v18, v20, v19, r, g, b, a, false)
  drawDebugTriangle(v15, v17, v16, v21, v23, v22, v18, v20, v19, r, g, b, a, false)
  drawDebugTriangle(v12, v14, v13, v18, v20, v19, v15, v17, v16, r, g, b, a, false)
  drawDebugTriangle(v18, v20, v19, v21, v23, v22, v15, v17, v16, r, g, b, a, false)
  drawDebugLine(v12, v14, v13, r, g, b, v15, v17, v16, r, g, b)
  drawDebugLine(v15, v17, v16, r, g, b, v18, v20, v19, r, g, b)
  drawDebugLine(v18, v20, v19, r, g, b, v12, v14, v13, r, g, b)
  drawDebugLine(v15, v17, v16, r, g, b, v21, v23, v22, r, g, b)
  drawDebugLine(v21, v23, v22, r, g, b, v18, v20, v19, r, g, b)
end
function DebugUtil:drawArea(v1, v2, v3, v4)
  local v5, v6, v7 = getWorldTranslation(self.start)
  local v8, v9, v10 = getWorldTranslation(self.width)
  local v11, v12, v13 = getWorldTranslation(self.height)
  local v14, v15, v16, v17, v18, v19 = MathUtil.getXZWidthAndHeight(v5, v7, v8, v10, v11, v13)
  DebugUtil.drawDebugParallelogram(v14, v15, v16, v17, v18, v19, v1, v2, v3, v4)
end
function DebugUtil.drawCutNodeArea(node, sizeY, sizeZ, r, g, b)
  if node ~= nil then
    local v6, v7, v8 = getWorldTranslation(node)
    local v9, v10, v11 = localToWorld(node, 0, sizeY or 1, 0)
    local v12, v13, v14 = localToWorld(node, 0, 0, sizeZ or 1)
    DebugUtil.drawDebugAreaRectangle(v6, v7, v8, v9, v10, v11, v12, v13, v14, false, r or 0, g or 1, b or 0)
  end
end
function DebugUtil.printTableRecursively(inputTable, inputIndent, depth, maxDepth)
  if (maxDepth or 3) < (depth or 0) then
    return
  end
  for v7, v8 in pairs(inputTable) do
    local v15 = tostring(v7)
    local v14 = tostring(v8)
    print(inputIndent .. v15 .. " :: " .. v14)
    local v9 = type(v8)
    if not (v9 == "table") then
      continue
    end
    DebugUtil.printTableRecursively(v8, inputIndent .. "    ", depth + 1, maxDepth)
  end
  return ""
end
function DebugUtil.debugTableToString(inputTable, inputIndent, depth, maxDepth)
  if (maxDepth or 2) < (depth or 0) then
    return nil
  end
  for v8, v9 in pairs(inputTable) do
    local v14 = tostring(v8)
    local v15 = tostring(v9)
    local v11 = string.format(...)
    local v10 = type(v9)
    if not (v10 == "table") then
      continue
    end
    v10 = DebugUtil.debugTableToString(v9, inputIndent .. "    ", depth + 1, maxDepth)
    if not (v10 ~= nil) then
      continue
    end
  end
  return v4
end
function DebugUtil.renderTable(posX, posY, textSize, data, nextColumnOffset)
  setTextColor(1, 1, 1, 1)
  setTextBold(false)
  local v6 = getCorrectTextSize(textSize)
  for v9, v10 in ipairs(data) do
    if v10.name ~= "" then
      setTextAlignment(RenderText.ALIGN_RIGHT)
      local v19 = tostring(v10.name)
      renderText(posX, posY - v5 * textSize * 1.05, textSize, v19 .. ":")
      setTextAlignment(RenderText.ALIGN_LEFT)
      local v12 = type(v10.value)
      if v12 == "number" then
        local v18 = string.format("%.4f", v10.value)
        renderText(posX, posY - v5 * textSize * 1.05, textSize, " " .. v18)
      else
        v18 = tostring(v10.value)
        renderText(posX, posY - v5 * textSize * 1.05, textSize, " " .. v18)
      end
    end
    if not v10.newColumn and not v10.columnOffset then
      continue
    end
  end
end
function DebugUtil.printNodeHierarchy(node, offset)
  local v5 = getName(node)
  log((offset or "") .. v5)
  v5 = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 17, target 32)
  local v6 = getChildAt(node, 0)
  DebugUtil.printNodeHierarchy(v6, (offset or "") .. " ")
  -- TODO: structure LOP_FORNLOOP (pc 31, target 18)
end
function DebugUtil.printCallingFunctionLocation()
  local v0 = debug.getinfo(3, "Sl")
  local v6 = tostring(v0.source)
  local v4 = string.format("%s, line %d", v6, v0.currentline)
  print(...)
end
function DebugUtil.tableToColor(tbl, alpha)
  local v2 = tostring(tbl)
  v2 = v2:sub(10)
  local v6 = v2:sub(-2)
  local v5 = tonumber(v6, 16)
  local v7 = v2:sub(-4, -3)
  v6 = tonumber(v7, 16)
  local v8 = v2:sub(-6, -5)
  v7 = tonumber(v8, 16)
  return {v5 / 255, v6 / 255, v7 / 255, alpha or 1}
end
function DebugUtil.getDebugColor(index)
  local v1 = tonumber(index)
  if not v1 then
    v1 = math.random(#DebugUtil.COLORS)
  end
  return DebugUtil.COLORS[(v1 - 1) % #DebugUtil.COLORS + 1]
end
function DebugUtil.getSplineDebugElements(spline)
  local splineLength = getSplineLength(spline)
  local v5 = getName(spline)
  local v3 = string.format("%s (%d)", v5, spline)
  local v7 = getIsSplineClosed(spline)
  local v9 = getSplineNumOfCV(spline)
  local v4 = string.format(...)
  if getNumOfUserAttributes ~= nil then
    local v8 = getNumOfUserAttributes(spline)
    -- TODO: structure LOP_FORNPREP (pc 40, target 82)
    v8, v9 = getUserAttributeByIndex(spline, 0)
    local v11 = string.format("\nUserAttr %s=%s", v9, v8)
    -- TODO: structure LOP_FORNLOOP (pc 54, target 41)
  elseif getNumUserAttribute ~= nil then
    v8 = getNumUserAttribute(spline)
    -- TODO: structure LOP_FORNPREP (pc 67, target 82)
    v8, v9 = getUserAttributeByIndex(spline, 1)
    v11 = string.format("\nUserAttr %s=%s", v9, v8)
    -- TODO: structure LOP_FORNLOOP (pc 81, target 68)
  end
  local v6, v7, v8 = getSplinePosition(spline, 0.5)
  local v14 = DebugText.new()
  v14 = v14:createWithWorldPosAndRot(v6, v7 + 0.3, v8, 0, 0, 0, v4, 0.13)
  v14 = v14:setClipDistance(150)
  v14.alignToCamera = true
  v1.splineAttributes = v14
  v9 = DebugPoint.new()
  v11 = getSplinePosition(spline, 0.02 / splineLength)
  v9 = v9:createWithWorldPos(...)
  v9 = v9:setColor(0, 0.5, 0, 0.8)
  v9 = v9:setClipDistance(150)
  v1.startPoint = v9
  local v9, v10, v11 = getSplinePosition(spline, 0.5 / splineLength)
  v14 = math.random(0, 25)
  v14 = DebugText.new()
  v14 = v14:createWithWorldPosAndRot(v9, v10 + 0.2 + v14 / 100, v11, 0, 0, 0, "[Start] " .. v3, 0.13)
  v14 = v14:setClipDistance(150)
  v14.alignToCamera = true
  v9 = v9:setColor(0, 0.5, 0)
  v1.startText = v9
  v9 = DebugPoint.new()
  v11 = getSplinePosition(spline, 1 - 0.02 / splineLength)
  v9 = v9:createWithWorldPos(...)
  v9 = v9:setColor(0.5, 0, 0, 0.8)
  v9 = v9:setClipDistance(150)
  v1.endPoint = v9
  v9, v10, v11 = getSplinePosition(spline, 1 - 0.5 / splineLength)
  v14 = math.random(0, 25)
  v14 = DebugText.new()
  v14 = v14:createWithWorldPosAndRot(v9, v10 + 0.2 + v14 / 100, v11, 0, 0, 0, "[End] " .. v3, 0.13)
  v14 = v14:setClipDistance(150)
  v14.alignToCamera = true
  v9 = v9:setColor(0.5, 0, 0)
  v1.endText = v9
  return v1
end
function DebugUtil.isNodeInCameraRange(node, distance)
  local v5 = getCamera()
  local v3 = calcDistanceFrom(...)
  if not distance then
  end
  if v3 >= v4 then
  end
  return true
end
function DebugUtil.isPositionInCameraRange(x, y, z, distance)
  if distance ~= nil then
    local v5 = getCamera()
    local v4, v5, v6 = getWorldTranslation(...)
    local v8 = MathUtil.vector3Length(x - v4, y - v5, z - v6)
    if v8 >= distance then
    end
    return true
  end
  return true
end
function DebugUtil.setNodeEffectivelyVisible(node)
  setVisibility(node, true)
  local parent = getParent(node)
  while parent ~= 0 do
    setVisibility(parent, true)
    local splineLength = getParent(parent)
  end
end
function DebugUtil.getVehicleOrPlayerPosAndDir()
  if g_currentMission then
    if g_currentMission.controlPlayer then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L74
      -- if not g_currentMission.player.isControlled then goto L74 end
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L74
      -- cmp-jump LOP_JUMPXEQKN R8 aux=0xa -> L74
      local v8, v9, v10 = getWorldTranslation(g_currentMission.player.rootNode)
      v8 = math.sin(g_currentMission.player.rotY)
      v8 = math.cos(g_currentMission.player.rotY)
    elseif g_currentMission.controlledVehicle ~= nil then
      v8, v9, v10 = getWorldTranslation(g_currentMission.controlledVehicle.rootNode)
      v8, v9, v10 = localDirectionToWorld(g_currentMission.controlledVehicle.rootNode, 0, 0, 1)
    end
  end
  return spline, v1, splineLength, v3, 0, v5
end
