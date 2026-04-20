-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlacementGrid2D = {MODE_SIDES = 0, MODE_FILL = 1, EPSILON = 0.01}
local v0 = Class(PlacementGrid2D)
function PlacementGrid2D.new(v0, v1, v2, v3, v4)
  local v5 = setmetatable({}, u0)
  v5.node = v0
  v5.width = v1
  v5.length = v2
  v5.spacing = v3
  if not v4 then
  end
  v5.placementMode = v6
  v5.blockedAreas = {}
  v5.lowerPos = {x = 0, z = 0, isValid = false}
  v5.upperPos = {x = 0, z = 0, isValid = false}
  return v5
end
function PlacementGrid2D.delete(v0)
end
function PlacementGrid2D:reset()
  self.blockedAreas = {}
end
function PlacementGrid2D:getFreePosition(v1, v2)
  self.lowerPos.isValid = false
  self.upperPos.isValid = false
  local v5 = math.floor(self.length / self.spacing)
  -- TODO: structure LOP_FORNPREP (pc 24, target 237)
  if self.blockedAreas[0] ~= nil then
  end
  if not self.lowerPos.isValid then
    -- if v1 - v13 >= 0.01 then goto L143 end
    self.lowerPos.isValid = true
    self.lowerPos.z = v10
    if self.placementMode == PlacementGrid2D.MODE_SIDES then
      self.lowerPos.x = 0
      -- goto L143  (LOP_JUMP +60)
    end
    self.lowerPos.x = v11 - v1
  elseif v1 - v13 < PlacementGrid2D.EPSILON then
    if self.placementMode == PlacementGrid2D.MODE_FILL then
      local v16 = math.min(self.lowerPos.x, v11 - v1)
      self.lowerPos.x = v16
    end
    -- if v2 > v10 + v0.spacing - v0.lowerPos.z then goto L143 end
    -- goto L237  (LOP_JUMP +100)
  else
    self.lowerPos.isValid = false
  end
  if not self.upperPos.isValid then
    -- if v1 - v14 >= PlacementGrid2D.EPSILON then goto L236 end
    self.upperPos.isValid = true
    self.upperPos.z = v10
    if self.placementMode == PlacementGrid2D.MODE_SIDES then
      self.upperPos.x = self.width - v1
      -- goto L236  (LOP_JUMP +56)
    end
    self.upperPos.x = v12
  elseif v1 - v14 < 0.01 then
    if self.placementMode == PlacementGrid2D.MODE_FILL then
      v16 = math.max(self.upperPos.x, v12)
      self.upperPos.x = v16
    end
    -- if v2 > v10 + v0.spacing - v0.upperPos.z then goto L236 end
    -- goto L237  (LOP_JUMP +7)
  else
    self.upperPos.isValid = false
  end
  -- TODO: structure LOP_FORNLOOP (pc 236, target 25)
  if v3 ~= nil then
    return v3, v4
  end
  return nil, nil
end
function PlacementGrid2D:blockAreaLocal(v1, v2, v3, v4)
  self:updateBlockedArea(v1, v1 + v3, v2, v2 + v4)
end
function PlacementGrid2D:blockAreaByBoundingBox(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
  local v15 = MathUtil.transform(v1, v2, v3, v4, v5, v6, v7, v8, v9, -v10, -v11, -v12)
  local v13, v14, v15 = worldToLocal(...)
  local v18 = MathUtil.transform(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, -v11, -v12)
  local v16, v17, v18 = worldToLocal(...)
  local v21 = MathUtil.transform(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, -v11, v12)
  local v19, v20, v21 = worldToLocal(...)
  local v24 = MathUtil.transform(v1, v2, v3, v4, v5, v6, v7, v8, v9, -v10, -v11, v12)
  local v22, v23, v24 = worldToLocal(...)
  local v27 = MathUtil.transform(v1, v2, v3, v4, v5, v6, v7, v8, v9, -v10, v11, -v12)
  local v25, v26, v27 = worldToLocal(...)
  local v30 = MathUtil.transform(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, -v12)
  local v28, v29, v30 = worldToLocal(...)
  local v33 = MathUtil.transform(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
  local v31, v32, v33 = worldToLocal(...)
  local v36 = MathUtil.transform(v1, v2, v3, v4, v5, v6, v7, v8, v9, -v10, v11, v12)
  local v34, v35, v36 = worldToLocal(...)
  local v39 = math.min(v13, v16, v19, v22, v25, v28, v31, v34)
  local v37 = math.max(...)
  local v40 = math.max(v13, v16, v19, v22, v25, v28, v31, v34)
  local v38 = math.min(...)
  local v41 = math.min(v15, v18, v21, v24, v27, v30, v33, v36)
  v39 = math.max(...)
  local v42 = math.max(v15, v18, v21, v24, v27, v30, v33, v36)
  v40 = math.min(...)
  self:updateBlockedArea(v37, v38, v39, v40)
end
function PlacementGrid2D:updateBlockedArea(v1, v2, v3, v4)
  local v7 = math.ceil(v3 / self.spacing)
  local v5 = math.max(...)
  local v8 = math.ceil(v4 / self.spacing)
  local v6 = math.max(...)
  -- TODO: structure LOP_FORNPREP (pc 27, target 81)
  if self.blockedAreas[v5] == nil then
    self.blockedAreas[v5] = {minX = self.width, maxX = 0, zStart = (v5 - 1) * self.spacing, zEnd = v5 * self.spacing, offsetZ = ((v5 - 1) * self.spacing + v5 * self.spacing) * 0.5}
  end
  local v11 = math.min(v10.minX, v1)
  v10.minX = v11
  v11 = math.max(v10.maxX, v2)
  v10.maxX = v11
  -- TODO: structure LOP_FORNLOOP (pc 80, target 28)
end
function PlacementGrid2D:drawDebug()
  local v1, v2, v3 = localToWorld(self.node, 0, 0, 0)
  local v4, v5, v6 = localToWorld(self.node, self.width, 0, 0)
  local v7, v8, v9 = localToWorld(self.node, self.width, 0, self.length)
  local v10, v11, v12 = localToWorld(self.node, 0, 0, self.length)
  drawDebugLine(v1, v2, v3, 1, 1, 1, v4, v5, v6, 1, 1, 1)
  drawDebugLine(v4, v5, v6, 1, 1, 1, v7, v8, v9, 1, 1, 1)
  drawDebugLine(v7, v8, v9, 1, 1, 1, v10, v11, v12, 1, 1, 1)
  drawDebugLine(v10, v11, v12, 1, 1, 1, v1, v2, v3, 1, 1, 1)
  for v16, v17 in pairs(self.blockedAreas) do
    local v18, v19, v20 = localToWorld(self.node, v17.minX, 0, v17.offsetZ)
    local v21, v22, v23 = localToWorld(self.node, v17.maxX, 0, v17.offsetZ)
    if not (v17.minX < v17.maxX) then
      continue
    end
    local v24, v25, v26 = localToWorld(self.node, v17.minX, 0, v17.zStart)
    local v27, v28, v29 = localToWorld(self.node, v17.maxX, 0, v17.zStart)
    drawDebugLine(v24, v25, v26, 1, 1, 1, v27, v28, v29, 1, 1, 1)
    local v30, v31, v32 = localToWorld(self.node, v17.minX, 0, v17.zEnd)
    local v33, v34, v35 = localToWorld(self.node, v17.maxX, 0, v17.zEnd)
    drawDebugLine(v30, v31, v32, 1, 1, 1, v33, v34, v35, 1, 1, 1)
    drawDebugLine(v18, v19, v20, 1, 0, 0, v21, v22, v23, 1, 0, 0)
  end
end
