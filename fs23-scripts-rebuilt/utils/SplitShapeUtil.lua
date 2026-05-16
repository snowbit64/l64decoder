-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SplitShapeUtil = {}
function SplitShapeUtil.getTreeOffsetPosition(v0, v1, v2, v3, v4, v5)
  local v6, v7, v8 = worldToLocal(v0, v1, v2, v3)
  local v9, v10, v11 = localToWorld(v0, v6 - v4 * 0.5, v7, v8 - v4 * 0.5)
  local v12, v13, v14 = localDirectionToWorld(v0, 0, 1, 0)
  local v15, v16, v17 = localDirectionToWorld(v0, 0, 0, 1)
  local v18, v19, v20, v21 = testSplitShape(v0, v9, v10, v11, v12, v13, v14, v15, v16, v17, v4, v4)
  if v18 ~= nil then
    if v5 ~= nil then
      local v22, v23 = getSplitShapePlaneExtents(v0, v9, v10, v11, v12, v13, v14)
      if v22 ~= nil and v22 < v5 then
        return nil
      end
      if v23 ~= nil and v23 < v5 then
        return nil
      end
    end
    local v24, v25, v26 = localToWorld(v0, v6 - v4 * 0.5 + (v20 + v21) * 0.5, v7, v8 - v4 * 0.5 + (v18 + v19) * 0.5)
    local v28 = math.max(v19 - v18, v21 - v20)
    return v24, v25, v26, v12, v13, v14, v28 * 0.5
  end
  return nil
end
function SplitShapeUtil:createTreeBelt(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13)
  local v14, v15, v16 = MathUtil.vector3Normalize(v5 - v2, v6 - v3, v7 - v4)
  if v12 then
  end
  local v17 = createTransformGroup("rootNode")
  local v19 = getRootNode()
  link(v19, v17)
  setTranslation(v17, v2, v3, v4)
  setDirection(v17, v14, v15, v16, v8, v9, v10)
  local v18 = createTransformGroup("startNode")
  link(v17, v18)
  setTranslation(v18, -(v13 or 0.0025) * 0.5, 0, v11)
  setRotation(v18, -math.pi * 0.5, 0, -math.pi * 0.5)
  v19 = createTransformGroup("endNode")
  link(v18, v19)
  setTranslation(v19, 0, 0, v13 or 0.0025)
  setRotation(v19, 0, 0, 0)
  local v20 = createTransformGroup("linkNode")
  link(v18, v20)
  setTranslation(v20, 0, 0, (v13 or 0.0025) * 0.5)
  setRotation(v20, 0, 0, 0)
  local v21 = TensionBeltGeometryConstructor.new()
  v21:setWidth(self.width)
  v21:setMaterial(self.material.materialId)
  v21:setUVscale(self.material.uvScale)
  v21:setMaxEdgeLength(0.1)
  v21:setFixedPoints(v18, v19)
  v21:setGeometryBias(0.005)
  v21:setLinkNode(v20)
  v21:addShape(v1, -100, 100, -100, 100)
  local v22, v23, v24 = v21:finalize()
  local v25, v26, v27 = getWorldTranslation(v22)
  local v28, v29, v30 = getWorldRotation(v22)
  local v32 = getRootNode()
  link(v32, v22)
  setWorldTranslation(v22, v25, v26, v27)
  setWorldRotation(v22, v28, v29, v30)
  delete(v17)
  return v22
end
function SplitShapeUtil.getSplitShapeId(v0)
  local v1 = getHasClassId(v0, ClassIds.MESH_SPLIT_SHAPE)
  if v1 then
    return v0
  end
  local v4 = getNumOfChildren(v0)
  -- TODO: structure LOP_FORNPREP (pc 15, target 30)
  local v5 = getChildAt(v0, 0)
  v4 = SplitShapeUtil.getSplitShapeId(...)
  if v4 ~= nil then
    return v4
  end
  -- TODO: structure LOP_FORNLOOP (pc 29, target 16)
  return nil
end
