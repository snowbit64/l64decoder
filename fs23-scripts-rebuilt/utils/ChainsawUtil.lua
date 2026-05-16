-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChainsawUtil = {}
function ChainsawUtil.cutSplitShape(shape, x, y, z, nx, ny, nz, yx, yy, yz, cutSizeY, cutSizeZ, farmId)
  local v16 = getSplitType(shape)
  local v14 = v14:getSplitTypeByIndex(...)
  if v14 ~= nil then
  end
  local v15 = getRigidBodyType(shape)
  if v15 == RigidBodyType.STATIC then
    v15:setCollisionMapAreaDirty(x - 5, z - 5, x + 5, z + 5, true)
    v15:setAreaDirty(x - 5, x + 5, z - 5, z + 5)
  end
  v15 = v15:getFarmById(farmId)
  v16 = math.abs(ny)
  if v16 < 0.866 then
    ChainsawUtil.curSplitShapes = {}
    v16:removeKnownSplitShape(shape)
    ChainsawUtil.shapeBeingCut = shape
    local v18 = getRigidBodyType(shape)
    if v18 ~= RigidBodyType.STATIC then
    end
    v16.fromTree = true
    splitShape(shape, x, y, z, nx, ny, nz, yx, yy, yz, cutSizeY, cutSizeZ, "ChainsawUtil.cutSplitShapeCallback", nil)
    v16:removingSplitShape(shape)
    v16 = table.getn(ChainsawUtil.curSplitShapes)
    -- cmp-jump LOP_JUMPXEQKN R16 aux=0x8000002a -> L599
    v18 = getRigidBodyType(ChainsawUtil.curSplitShapes[1].shape)
    local v19 = getRigidBodyType(ChainsawUtil.curSplitShapes[2].shape)
    if v18 == RigidBodyType.STATIC then
      -- if v19 ~= RigidBodyType.DYNAMIC then goto L150 end
    elseif v19 == RigidBodyType.STATIC and v18 == RigidBodyType.DYNAMIC then
    end
    -- if not v21 then goto L599 end
    if v15 ~= nil then
      local v22 = v22:updateStats("cutTreeCount", 1)
      v23:tryUnlock("CutTreeFirst", v22)
      v23:tryUnlock("CutTree", v22)
      if v13 ~= "" then
        v23:updateTreeTypesCut(v13)
      end
    end
    local v23, v24, v25, v26, v27 = getSplitShapeStats(v20.shape)
    if v23 ~= nil then
    end
    -- cmp-jump LOP_JUMPXEQKNIL R22 aux=0x0 -> L599
    -- if 1 >= v28 then goto L599 end
    v29:playSample(v22)
    setTranslation(v22.soundNode, x, y, z)
    return
  end
  ChainsawUtil.curSplitShapes = {}
  v16:removeKnownSplitShape(shape)
  ChainsawUtil.shapeBeingCut = shape
  v18 = getRigidBodyType(shape)
  if v18 ~= RigidBodyType.STATIC then
  end
  v16.fromTree = true
  splitShape(shape, x, y, z, nx, ny, nz, yx, yy, yz, cutSizeY, cutSizeZ, "ChainsawUtil.cutSplitShapeCallback", nil)
  v16:removingSplitShape(shape)
  v16 = table.getn(ChainsawUtil.curSplitShapes)
  if v16 == 2 then
    v18 = getRigidBodyType(ChainsawUtil.curSplitShapes[1].shape)
    v19 = getRigidBodyType(ChainsawUtil.curSplitShapes[2].shape)
    if v18 == RigidBodyType.STATIC then
      -- if v19 ~= RigidBodyType.DYNAMIC then goto L323 end
    elseif v19 == RigidBodyType.STATIC and v18 == RigidBodyType.DYNAMIC then
    end
    if v22 then
      local v24, v25, v26, v27, v28 = getSplitShapeStats(v20.shape)
      if v24 ~= nil then
      end
      if v23 ~= nil and 1 < v29 then
        v30:playSample(v23)
        setTranslation(v23.soundNode, x, y, z)
      end
    end
    if v20 ~= nil then
      v25, v26, v27 = MathUtil.crossProduct(nx, ny, nz, yx, yy, yz)
      if v20.isBelow then
      end
      local v32, v33, v34 = MathUtil.crossProduct(v25, v26, v27, nx * 0.7659825218948272 + yx * v28, ny * 0.7659825218948272 + yy * v28, nz * 0.7659825218948272 + yz * v28)
      v38:removeKnownSplitShape(v21.shape)
      ChainsawUtil.shapeBeingCut = v21.shape
      splitShape(v21.shape, x + yx * v23 - v32 * cutSizeY * 0.1, y + yy * v23 - v33 * cutSizeY * 0.1, z + yz * v23 - v34 * cutSizeY * 0.1, nx * 0.7659825218948272 + yx * v28, ny * 0.7659825218948272 + yy * v28, nz * 0.7659825218948272 + yz * v28, v32, v33, v34, cutSizeY * 1.1, cutSizeZ, "ChainsawUtil.cutSplitShapeCallbackCutJoint", nil)
      v38:removingSplitShape(v21.shape)
      local constr = JointConstructor.new()
      constr:setActors(0, v20.shape)
      constr:setJointWorldAxes(nx, ny, nz, nx, ny, nz)
      constr:setJointWorldNormals(yx, yy, yz, yx, yy, yz)
      constr:setJointWorldPositions(x + yx * v23 + v25 * v24, y + yy * v23 + v26 * v24, z + yz * v23 + v27 * v24, x + yx * v23 + v25 * v24, y + yy * v23 + v26 * v24, z + yz * v23 + v27 * v24)
      constr:setRotationLimit(0, 0, 0)
      constr:setTranslationLimit(0, false, 0, 0)
      constr:setEnableCollision(true)
      local jointIndex = constr:finalize()
      local v43, v44, v45 = MathUtil.crossProduct(0, 0.8, 0, yx, yy, yz)
      setAngularVelocity(v20.shape, v43, v44, v45)
      v46:addTreeCutJoint(jointIndex, v20.shape, nx, ny, nz, 0.7853981633974483, 2000)
      if v15 ~= nil then
        local v46 = v46:updateStats("cutTreeCount", 1)
        v47:tryUnlock("CutTreeFirst", v46)
        v47:tryUnlock("CutTree", v46)
        if v13 ~= "" then
          v47:updateTreeTypesCut(v13)
        end
      end
    end
  end
end
function ChainsawUtil.cutSplitShapeCallback(unused, shape, isBelow, isAbove, minY, maxY, minZ, maxZ)
  yy:addKnownSplitShape(shape)
  yy:addingSplitShape(shape, ChainsawUtil.shapeBeingCut, ChainsawUtil.fromTree)
  table.insert(ChainsawUtil.curSplitShapes, {shape = shape, isBelow = isBelow, isAbove = isAbove, minY = minY, maxY = maxY, minZ = minZ, maxZ = maxZ})
end
function ChainsawUtil.cutSplitShapeCallbackCutJoint(unused, shape, isBelow, isAbove, minY, maxY, minZ, maxZ)
  yy:addKnownSplitShape(shape)
  yy:addingSplitShape(shape, ChainsawUtil.shapeBeingCut, true)
end
