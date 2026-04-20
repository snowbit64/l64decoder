-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugBitVectorMap = {}
local DebugBitVectorMap_mt = Class(DebugBitVectorMap)
function DebugBitVectorMap.new(radius, resolution, opacity, yOffset, customMt)
  if not customMt then
  end
  local v5 = v5(v6, v7)
  v5.radius = radius or 15
  v5.resolution = resolution or 0.5
  v5.colorPos = {0, 1, 0, opacity}
  v5.colorNeg = {1, 0, 0, opacity}
  v5.yOffset = yOffset or 0.1
  return v5
end
function DebugBitVectorMap.delete(v0)
end
function DebugBitVectorMap.update(v0, v1)
end
function DebugBitVectorMap:draw()
  if self.aiVehicle ~= nil then
    -- if v0.aiVehicle.isDeleted then goto L48 end
    -- if v0.aiVehicle.isDeleting then goto L48 end
    local v1, v2, v3 = getWorldTranslation(self.aiVehicle.rootNode)
    self:drawAroundCenter(v1, v3, DebugBitVectorMap.aiAreaCheck)
    return
  end
  if self.customFunc ~= nil then
    v2 = getCamera()
    v1, v2, v3 = getWorldTranslation(...)
    self:drawAroundCenter(v1, v3, self.customFunc)
  end
end
function DebugBitVectorMap:createWithAIVehicle(vehicle)
  self.aiVehicle = vehicle
end
function DebugBitVectorMap:createWithCustomFunc(customFunc)
  self.customFunc = customFunc
end
function DebugBitVectorMap:setAdditionalDrawInfoFunc(drawInfoFunc)
  self.drawInfoFunc = drawInfoFunc
end
function DebugBitVectorMap:drawAroundCenter(x, z, func)
  local v8 = math.ceil(self.radius / self.resolution)
  v8 = math.floor(x / self.resolution)
  v8 = math.floor(z / self.resolution)
  -- TODO: structure LOP_FORNPREP (pc 37, target 124)
  for v13 = 0, v8 * 2 do
    local v20, v21 = func(self, x + (v10 - v7 * 0.5) * v4, z + (v13 - v7 * 0.5) * v4, x + (v10 + 1 - v7 * 0.5) * v4, z + (v13 - v7 * 0.5) * v4, x + (v10 - v7 * 0.5) * v4, z + (v13 + 1 - v7 * 0.5) * v4)
    if 0 < v20 then
      -- if v5 then goto L83 end
    end
    self:drawDebugAreaRectangleFilled(v14 + v4 * 0.1, v15 + v4 * 0.1, v16 - v4 * 0.1, v17 + v4 * 0.1, v18 + v4 * 0.1, v19 - v4 * 0.1, v6[1], v6[2], v6[3], v6[4])
    if self.drawInfoFunc ~= nil then
      self.drawInfoFunc(self, (v14 + v4 * 0.1 + v16 - v4 * 0.1) * 0.5, (v15 + v4 * 0.1 + v19 - v4 * 0.1) * 0.5, v20, v21)
    end
    -- TODO: structure LOP_FORNLOOP (pc 122, target 42)
  end
end
function DebugBitVectorMap:drawDebugAreaRectangleFilled(x, z, x1, z1, x2, z2, r, g, b, a)
  local v14 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
  local v15 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x1, 0, z1)
  local v16 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x2, 0, z2)
  local v17 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x1, 0, z2)
  drawDebugTriangle(x, v14 + self.yOffset, z, x2, v16 + self.yOffset, z2, x1, v15 + self.yOffset, z1, r, g, b, a, false)
  drawDebugTriangle(x1, v15 + self.yOffset, z1, x2, v16 + self.yOffset, z2, x1, v17 + self.yOffset, z2, r, g, b, a, false)
end
function DebugBitVectorMap:aiAreaCheck(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  return AIVehicleUtil.getAIAreaOfVehicle(self.aiVehicle, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, false)
end
