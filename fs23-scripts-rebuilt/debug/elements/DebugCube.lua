-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugCube = {}
local DebugCube_mt = Class(DebugCube)
function DebugCube.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.color = {1, 1, 1}
  v1.x = 0
  v1.y = 0
  v1.z = 0
  v1.normX = 1
  v1.normY = 0
  v1.normZ = 0
  v1.upX = 0
  v1.upY = 1
  v1.upZ = 0
  v1.dirX = 0
  v1.dirY = 0
  v1.dirZ = 1
  v1.positionNodes = {{-1, -1, -1}, {1, -1, -1}, {1, -1, 1}, {-1, -1, 1}, {-1, 1, -1}, {1, 1, -1}, {1, 1, 1}, {-1, 1, 1}}
  return v1
end
function DebugCube.delete(v0)
end
function DebugCube.update(v0, v1)
end
function DebugCube:draw()
  local v1, v2, v3 = unpack(self.color)
  drawDebugLine(self.positionNodes[1][1], self.positionNodes[1][2], self.positionNodes[1][3], v1, v2, v3, self.positionNodes[2][1], self.positionNodes[2][2], self.positionNodes[2][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[2][1], self.positionNodes[2][2], self.positionNodes[2][3], v1, v2, v3, self.positionNodes[3][1], self.positionNodes[3][2], self.positionNodes[3][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[3][1], self.positionNodes[3][2], self.positionNodes[3][3], v1, v2, v3, self.positionNodes[4][1], self.positionNodes[4][2], self.positionNodes[4][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[4][1], self.positionNodes[4][2], self.positionNodes[4][3], v1, v2, v3, self.positionNodes[1][1], self.positionNodes[1][2], self.positionNodes[1][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[5][1], self.positionNodes[5][2], self.positionNodes[5][3], v1, v2, v3, self.positionNodes[6][1], self.positionNodes[6][2], self.positionNodes[6][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[6][1], self.positionNodes[6][2], self.positionNodes[6][3], v1, v2, v3, self.positionNodes[7][1], self.positionNodes[7][2], self.positionNodes[7][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[7][1], self.positionNodes[7][2], self.positionNodes[7][3], v1, v2, v3, self.positionNodes[8][1], self.positionNodes[8][2], self.positionNodes[8][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[8][1], self.positionNodes[8][2], self.positionNodes[8][3], v1, v2, v3, self.positionNodes[5][1], self.positionNodes[5][2], self.positionNodes[5][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[1][1], self.positionNodes[1][2], self.positionNodes[1][3], v1, v2, v3, self.positionNodes[5][1], self.positionNodes[5][2], self.positionNodes[5][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[2][1], self.positionNodes[2][2], self.positionNodes[2][3], v1, v2, v3, self.positionNodes[6][1], self.positionNodes[6][2], self.positionNodes[6][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[3][1], self.positionNodes[3][2], self.positionNodes[3][3], v1, v2, v3, self.positionNodes[7][1], self.positionNodes[7][2], self.positionNodes[7][3], v1, v2, v3)
  drawDebugLine(self.positionNodes[4][1], self.positionNodes[4][2], self.positionNodes[4][3], v1, v2, v3, self.positionNodes[8][1], self.positionNodes[8][2], self.positionNodes[8][3], v1, v2, v3)
  drawDebugLine(self.x, self.y, self.z, 1, 0, 0, self.x + self.normX, self.y + self.normY, self.z + self.normZ, 1, 0, 0)
  drawDebugLine(self.x, self.y, self.z, 0, 1, 0, self.x + self.upX, self.y + self.upY, self.z + self.upZ, 0, 1, 0)
  drawDebugLine(self.x, self.y, self.z, 0, 0, 1, self.x + self.dirX, self.y + self.dirY, self.z + self.dirZ, 0, 0, 1)
end
function DebugCube:setColor(r, g, b)
  self.color = {r, g, b}
  return self
end
function DebugCube:createSimple(x, y, z, size)
  self:createWithWorldPosAndRot(x, y, z, 0, 0, 0, size, size, size)
end
function DebugCube:createWithStartEnd(startNode, endNode)
  local v3, v4, v5 = localToLocal(endNode, startNode, 0, 0, 0)
  local v6, v7, v8 = localToWorld(startNode, v3 * 0.5, v4 * 0.5, v5 * 0.5)
  local v12 = math.abs(v3)
  v12 = math.abs(v4)
  local v11 = math.abs(v5)
  local v12, v13, v14 = localDirectionToWorld(startNode, 0, 0, 1)
  local v15 = MathUtil.getYRotationFromDirection(v12, v14)
  self:createWithWorldPosAndRot(v6, v7, v8, 0, v15, 0, v12 * 0.5, v12 * 0.5, v11 * 0.5)
  return self
end
function DebugCube:createWithPlacementSize(node, sizeWidth, sizeLength, widthOffset, lengthOffset, updatePosition)
  local v7, v8, v9 = getWorldRotation(node)
  local v10, v11, v12 = localToWorld(node, widthOffset, 0, lengthOffset)
  self:createWithWorldPosAndRot(v10, v11, v12, v7, v8, v9, sizeWidth, 1, sizeLength)
  return self
end
function DebugCube:createWithNode(node, sizeX, sizeY, sizeZ, offsetX, offsetY, offsetZ)
  local v8, v9, v10 = localToWorld(node, offsetX or 0, offsetY or 0, offsetZ or 0)
  local v11, v12, v13 = localDirectionToWorld(node, 1, 0, 0)
  local v14, v15, v16 = localDirectionToWorld(node, 0, 1, 0)
  local v17, v18, v19 = localDirectionToWorld(node, 0, 0, 1)
  self.x = v8
  self.y = v9
  self.z = v10
  self.normX = v11 * sizeX
  self.normY = v12 * sizeX
  self.normZ = v13 * sizeX
  self.upX = v14 * sizeY
  self.upY = v15 * sizeY
  self.upZ = v16 * sizeY
  self.dirX = v17 * sizeZ
  self.dirY = v18 * sizeZ
  self.dirZ = v19 * sizeZ
  self.positionNodes[1] = {v8 - self.normX - self.upX - self.dirX, v9 - self.normY - self.upY - self.dirY, v10 - self.normZ - self.upZ - self.dirZ}
  self.positionNodes[2] = {v8 + self.normX - self.upX - self.dirX, v9 + self.normY - self.upY - self.dirY, v10 + self.normZ - self.upZ - self.dirZ}
  self.positionNodes[3] = {v8 + self.normX - self.upX + self.dirX, v9 + self.normY - self.upY + self.dirY, v10 + self.normZ - self.upZ + self.dirZ}
  self.positionNodes[4] = {v8 - self.normX - self.upX + self.dirX, v9 - self.normY - self.upY + self.dirY, v10 - self.normZ - self.upZ + self.dirZ}
  self.positionNodes[5] = {v8 - self.normX + self.upX - self.dirX, v9 - self.normY + self.upY - self.dirY, v10 - self.normZ + self.upZ - self.dirZ}
  self.positionNodes[6] = {v8 + self.normX + self.upX - self.dirX, v9 + self.normY + self.upY - self.dirY, v10 + self.normZ + self.upZ - self.dirZ}
  self.positionNodes[7] = {v8 + self.normX + self.upX + self.dirX, v9 + self.normY + self.upY + self.dirY, v10 + self.normZ + self.upZ + self.dirZ}
  self.positionNodes[8] = {v8 - self.normX + self.upX + self.dirX, v9 - self.normY + self.upY + self.dirY, v10 - self.normZ + self.upZ + self.dirZ}
  return self
end
function DebugCube:createWithPosAndDir(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, sizeX, sizeY, sizeZ)
  self.x = x
  self.y = y
  self.z = z
  local v13, v14, v15 = MathUtil.vector3Normalize(dirX, dirY, dirZ)
  v13, v14, v15 = MathUtil.vector3Normalize(upX, upY, upZ)
  v13, v14, v15 = MathUtil.crossProduct(v13, v14, v15, v13, v14, v15)
  self.normX = v13 * sizeX * 0.5
  self.normY = v14 * sizeX * 0.5
  self.normZ = v15 * sizeX * 0.5
  self.upX = v13 * sizeY * 0.5
  self.upY = v14 * sizeY * 0.5
  self.upZ = v15 * sizeY * 0.5
  self.dirX = v13 * sizeZ * 0.5
  self.dirY = v14 * sizeZ * 0.5
  self.dirZ = v15 * sizeZ * 0.5
  self.positionNodes[1] = {x - self.normX - self.upX - self.dirX, y - self.normY - self.upY - self.dirY, z - self.normZ - self.upZ - self.dirZ}
  self.positionNodes[2] = {x + self.normX - self.upX - self.dirX, y + self.normY - self.upY - self.dirY, z + self.normZ - self.upZ - self.dirZ}
  self.positionNodes[3] = {x + self.normX - self.upX + self.dirX, y + self.normY - self.upY + self.dirY, z + self.normZ - self.upZ + self.dirZ}
  self.positionNodes[4] = {x - self.normX - self.upX + self.dirX, y - self.normY - self.upY + self.dirY, z - self.normZ - self.upZ + self.dirZ}
  self.positionNodes[5] = {x - self.normX + self.upX - self.dirX, y - self.normY + self.upY - self.dirY, z - self.normZ + self.upZ - self.dirZ}
  self.positionNodes[6] = {x + self.normX + self.upX - self.dirX, y + self.normY + self.upY - self.dirY, z + self.normZ + self.upZ - self.dirZ}
  self.positionNodes[7] = {x + self.normX + self.upX + self.dirX, y + self.normY + self.upY + self.dirY, z + self.normZ + self.upZ + self.dirZ}
  self.positionNodes[8] = {x - self.normX + self.upX + self.dirX, y - self.normY + self.upY + self.dirY, z - self.normZ + self.upZ + self.dirZ}
  return self
end
function DebugCube:createWithWorldPosAndDir(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, sizeX, sizeY, sizeZ)
  local temp = createTransformGroup("temp_drawDebugCubeAtWorldPos")
  local v15 = getRootNode()
  link(v15, temp)
  setTranslation(temp, x, y, z)
  setDirection(temp, dirX, dirY, dirZ, upX, upY, upZ)
  self:createWithNode(temp, sizeX, sizeY, sizeZ)
  delete(temp)
  return self
end
function DebugCube:createWithWorldPosAndRot(x, y, z, rotX, rotY, rotZ, sizeX, sizeY, sizeZ)
  local temp = createTransformGroup("temp_drawDebugCubeAtWorldPos")
  local v12 = getRootNode()
  link(v12, temp)
  setTranslation(temp, x, y, z)
  setRotation(temp, rotX, rotY, rotZ)
  self:createWithNode(temp, sizeX, sizeY, sizeZ)
  delete(temp)
  return self
end
