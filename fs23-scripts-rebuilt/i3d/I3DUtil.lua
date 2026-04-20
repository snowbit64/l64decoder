-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

I3DUtil = {}
function I3DUtil.checkChildIndex(v0, v1)
  local v2 = getNumOfChildren(v0)
  if v2 <= v1 then
    local v4 = tostring(v1)
    local v6 = getName(v0)
    local v5 = tostring(...)
    local v7 = getNumOfChildren(v0)
    v6 = tostring(...)
    Logging.error(...)
    printCallstack()
    return false
  end
  return true
end
function I3DUtil:indexToObject(v1, v2, v3)
  if v1 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R0 aux=0x80000000 -> L6
  end
  return nil
  if v2 ~= nil and v2[v1] ~= nil then
    local v5 = type(v2[v1])
    if v5 == "table" then
      return v2[v1].nodeId, v2[v1].rootNode
    end
  end
  local v6, v7 = string.find(v1, ">", 1, true)
  if v6 ~= nil then
  end
  local v8 = type(self)
  if v8 == "table" then
    if v6 ~= nil then
      local v10 = string.sub(v1, 1, v6 - 1)
      local v9 = tonumber(...)
      if v9 == nil then
        local v12 = tostring(v1)
        Logging.error(...)
      end
    end
    if self[v8] == nil then
      if not v3 then
      end
      if v9 < v8 then
        local v11 = tostring(v1)
        Logging.error(...)
      end
      return nil
    end
  else
  end
  if v6 ~= nil then
    v8 = string.len(v1)
    if v7 == v8 then
      return v5, v5
    end
  end
  v8 = type(self)
  if v8 ~= "table" and v6 ~= nil then
    v10 = tostring(v1)
    Logging.error(...)
    printCallstack()
    return nil
  end
  v9, v10 = string.find(v1, "|", v4, true)
  while v9 ~= nil do
    v10 = string.sub(v1, v4, v6 - 1)
    v9 = tonumber(...)
    if v9 ~= nil then
      v10 = I3DUtil.checkChildIndex(v8, v9)
      -- if v10 then goto L166 end
    end
    v12 = tostring(v1)
    Logging.error(...)
    return nil
    v10 = getChildAt(v8, v9)
    v10, v11 = string.find(v1, "|", v7 + 1, true)
  end
  v10 = string.sub(v1, v4)
  v9 = tonumber(...)
  if v9 ~= nil then
    v10 = I3DUtil.checkChildIndex(v8, v9)
    -- if v10 then goto L213 end
  end
  v12 = tostring(v1)
  Logging.error(...)
  return nil
  v10 = getChildAt(v8, v9)
  return v10, v5
end
function I3DUtil.setNumberShaderByValue(numbers, value, precision, showZero)
  if numbers ~= nil then
    local v4 = math.floor(value * 10 ^ precision)
    local v7 = getNumOfChildren(numbers)
    -- TODO: structure LOP_FORNPREP (pc 17, target 71)
    v7 = getChildAt(numbers, 0)
    if 0 < v4 then
      local v10 = math.floor(v4 / 10)
      setShaderParameter(v7, "number", v4 - v10 * 10, 0, 0, 0, false)
    elseif showZero then
      -- if 0 > v2 then goto L60 end
      setShaderParameter(v7, "number", 0, 0, 0, 0, false)
    else
      setShaderParameter(v7, "number", -1, 0, 0, 0, false)
    end
    -- TODO: structure LOP_FORNLOOP (pc 70, target 18)
  end
end
function I3DUtil.wakeUpObject(node)
  addImpulse(node, 0, 0.001, 0, 0, 0, 0, true)
end
function I3DUtil.setWorldDirection(node, dirX, dirY, dirZ, upX, upY, upZ, limitedAxis, minRot, maxRot)
  local v10 = getParent(node)
  if dirX == dirX and dirY == dirY then
    -- if v3 == v3 then goto L25 end
  end
  local v13 = getName(node)
  Logging.error("Failed to set world direction: Object '%s' dir %.2f %.2f %.2f up %.2f %.2f %.2f", v13, dirX, dirY, dirZ, upX, upY, upZ)
  return
  if v10 ~= 0 then
    local v11, v12, v13 = worldDirectionToLocal(v10, dirX, dirY, dirZ)
    v11, v12, v13 = worldDirectionToLocal(v10, upX, upY, upZ)
  end
  if limitedAxis ~= nil then
    if limitedAxis == 1 then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L91
      v11, v12 = MathUtil.getRotationLimitedVector2(dirZ, dirY, minRot, maxRot)
    elseif limitedAxis == 2 then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L91
      v11, v12 = MathUtil.getRotationLimitedVector2(dirZ, dirX, minRot, maxRot)
    else
      if minRot ~= nil then
        v11, v12 = MathUtil.getRotationLimitedVector2(dirX, dirY, minRot, maxRot)
      end
    end
  end
  if 0.0001 < dirX * dirX + dirY * dirY + dirZ * dirZ then
    setDirection(node, dirX, dirY, dirZ, upX, upY, upZ)
  end
end
function I3DUtil.setDirection(node, dirX, dirY, dirZ, upX, upY, upZ)
  local limitedAxis = MathUtil.vector3LengthSq(dirX, dirY, dirZ)
  if 0.0001 < limitedAxis then
    setDirection(node, dirX, dirY, dirZ, upX, upY, upZ)
  end
end
function I3DUtil.setShaderParameterRec(node, shaderParam, x, y, z, w, sameMaterial, material)
  local minRot = getHasClassId(node, ClassIds.SHAPE)
  if minRot then
    minRot = getHasShaderParameter(node, shaderParam)
    if minRot then
      if sameMaterial ~= nil and sameMaterial and material == nil then
        minRot = getMaterial(node, 0)
      end
      if material ~= nil then
        minRot = getMaterial(node, 0)
        -- if v8 ~= v7 then goto L60 end
      end
      if x ~= nil and y ~= nil and z ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L50
      end
      local minRot, maxRot, v10, v11 = getShaderParameter(node, shaderParam)
      setShaderParameter(node, shaderParam, x or minRot, y or maxRot, z or v10, w or v11, false)
    end
  end
  minRot = getNumOfChildren(node)
  if 0 < minRot then
    -- TODO: structure LOP_FORNPREP (pc 70, target 89)
    local v13 = getChildAt(node, 0)
    I3DUtil.setShaderParameterRec(v13, shaderParam, x, y, z, w, sameMaterial, material)
    -- TODO: structure LOP_FORNLOOP (pc 88, target 71)
  end
end
function I3DUtil.setShapeBonesRec(node, skeleton, oldSkeleton, keepBindPoses)
  local upX = getHasClassId(node, ClassIds.SHAPE)
  if upX then
    setShapeBones(node, skeleton, oldSkeleton, keepBindPoses)
  end
  upX = getNumOfChildren(node)
  if 0 < upX then
    -- TODO: structure LOP_FORNPREP (pc 24, target 39)
    local maxRot = getChildAt(node, 0)
    I3DUtil.setShapeBonesRec(maxRot, skeleton, oldSkeleton, keepBindPoses)
    -- TODO: structure LOP_FORNLOOP (pc 38, target 25)
  end
end
function I3DUtil.getHasShaderParameterRec(node, shaderParam)
  local dirY = getHasClassId(node, ClassIds.SHAPE)
  if dirY then
    dirY = getHasShaderParameter(node, shaderParam)
    if dirY then
      return true
    end
  end
  dirY = getNumOfChildren(node)
  if 0 < dirY then
    -- TODO: structure LOP_FORNPREP (pc 25, target 41)
    local limitedAxis = getChildAt(node, 0)
    local upZ = I3DUtil.getHasShaderParameterRec(limitedAxis, shaderParam)
    if upZ then
      return true
    end
    -- TODO: structure LOP_FORNLOOP (pc 40, target 26)
  end
  return false
end
function I3DUtil.getShaderParameterRec(node, shaderParam)
  local dirY = getHasClassId(node, ClassIds.SHAPE)
  if dirY then
    dirY = getHasShaderParameter(node, shaderParam)
    if dirY then
      dirY = getShaderParameter(node, shaderParam)
      return dirY
    end
  end
  dirY = getNumOfChildren(node)
  if 0 < dirY then
    -- TODO: structure LOP_FORNPREP (pc 29, target 45)
    local limitedAxis = getChildAt(node, 0)
    local upZ, limitedAxis, minRot, maxRot = I3DUtil.getShaderParameterRec(limitedAxis, shaderParam)
    if upZ ~= nil then
      return upZ, limitedAxis, minRot, maxRot
    end
    -- TODO: structure LOP_FORNLOOP (pc 44, target 30)
  end
  return 0, 0, 0, 0
end
function I3DUtil.getNodesByShaderParam(node, shaderParam, nodes, sorted)
  if nodes == nil then
  end
  local upX = getHasClassId(node, ClassIds.SHAPE)
  if upX then
    upX = getHasShaderParameter(node, shaderParam)
    if upX then
      if sorted ~= nil then
        -- if v3 then goto L22 end
      end
      nodes[node] = node
      -- goto L29  (LOP_JUMP +7)
      table.insert(nodes, node)
    end
  end
  upX = getNumOfChildren(node)
  if 0 < upX then
    -- TODO: structure LOP_FORNPREP (pc 39, target 54)
    local maxRot = getChildAt(node, 0)
    I3DUtil.getNodesByShaderParam(maxRot, shaderParam, nodes, sorted)
    -- TODO: structure LOP_FORNLOOP (pc 53, target 40)
  end
  return nodes
end
function I3DUtil.printChildren(node, offset)
  local upY = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 8, target 33)
  upY = getChildAt(node, 0)
  local maxRot = getName(upY)
  log(...)
  I3DUtil.printChildren(upY, (offset or "    ") .. "    ")
  -- TODO: structure LOP_FORNLOOP (pc 32, target 9)
end
function I3DUtil.hasNamedChildren(node, name)
  local upY = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 7, target 30)
  upY = getChildAt(node, 0)
  local upZ = getName(upY)
  if upZ ~= name then
    upZ = I3DUtil.hasNamedChildren(upY, name)
    -- if not v6 then goto L29 end
  end
  return true
  -- TODO: structure LOP_FORNLOOP (pc 29, target 8)
  return false
end
function I3DUtil.getChildByName(node, name)
  local upY = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 7, target 31)
  upY = getChildAt(node, 0)
  local upZ = getName(upY)
  if upZ == name then
    return upY
  end
  upZ = I3DUtil.getChildByName(upY, name)
  if upZ ~= nil then
    return upZ
  end
  -- TODO: structure LOP_FORNLOOP (pc 30, target 8)
  return nil
end
function I3DUtil.interateRecursively(node, func, depth)
  local upZ = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 8, target 30)
  upZ = getChildAt(node, 0)
  local limitedAxis = func(upZ, depth or 0)
  if limitedAxis == false then
    return
  end
  I3DUtil.interateRecursively(upZ, func, depth + 1)
  -- TODO: structure LOP_FORNLOOP (pc 29, target 9)
end
function I3DUtil.getIsLinkedToNode(parent, node)
  while node ~= 0 do
    if parent == node then
      return true
    end
    local dirY = getParent(node)
  end
  return false
end
function I3DUtil.getIsSpline(node)
  local dirX = getHasClassId(node, ClassIds.SHAPE)
  if dirX then
    local dirY = getGeometry(node)
    if dirY ~= 0 then
      dirY = getGeometry(node)
      dirX = getHasClassId(dirY, ClassIds.SPLINE)
    end
  end
  return dirX
end
function I3DUtil.getSupportsLOD(node)
  local dirY = getHasClassId(node, ClassIds.SHAPE)
  if dirY then
    dirY = getIsNonRenderable(node)
    if not dirY then
      dirY = I3DUtil.getIsSpline(node)
      -- if not v2 then goto L33 end
    end
  end
  local dirX = getHasClassId(node, ClassIds.LIGHT_SOURCE)
  if not dirX then
    dirX = getHasClassId(node, ClassIds.AUDIO_SOURCE)
  end
  return dirX
end
function I3DUtil.getNodePath(node)
  local parent = getParent(node)
  if parent ~= 0 and parent ~= nil then
    local upZ = I3DUtil.getNodePath(parent)
    local upY = getName(node)
    return upZ .. "|" .. upY
  end
  return getName(node)
end
function I3DUtil.getNodePathIndices(node)
  local parent = getParent(node)
  if parent ~= 0 and parent ~= nil then
    local dirY = getChildIndex(parent)
    if dirY ~= -1 then
      local upZ = I3DUtil.getNodePathIndices(parent)
      local upY = getChildIndex(node)
      return upZ .. "|" .. upY
    end
  end
  dirY = getChildIndex(node)
  return dirY
end
function I3DUtil.checkForChildCollisions(node, errorFunc, ...)
  local rigidBodyType = getRigidBodyType(node)
  if rigidBodyType ~= RigidBodyType.STATIC and rigidBodyType ~= RigidBodyType.DYNAMIC then
    local dirZ = getIsCompoundChild(node)
    -- if not v3 then goto L22 end
  end
  errorFunc(...)
  local upZ = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 29, target 43)
  local limitedAxis = getChildAt(node, 0)
  I3DUtil.checkForChildCollisions(...)
  -- TODO: structure LOP_FORNLOOP (pc 42, target 30)
end
function I3DUtil:registerI3dMappingXMLPaths(dirX)
  self:register(XMLValueType.STRING, dirX .. ".i3dMappings.i3dMapping(?)#id", "Identifier to be used in xml")
  self:register(XMLValueType.STRING, dirX .. ".i3dMappings.i3dMapping(?)#node", "Index path to node in i3d file")
end
function I3DUtil:loadI3DMapping(dirX, dirY, dirZ, upX)
  self:iterate(dirX .. ".i3dMappings.i3dMapping", function(self, dirX)
    local dirY = dirY:getValue(dirX .. "#id")
    local dirZ = dirZ:getValue(dirX .. "#node")
    if dirY ~= nil and dirZ ~= nil then
      local upX, upY = I3DUtil.indexToObject(u1, dirZ, nil, u2)
      if upX ~= nil then
        u3[dirY] = {nodeId = upX, rootNode = upY}
        return
      end
      u3[dirY] = dirZ
    end
  end)
end
function I3DUtil.loadI3DComponents(rootElement, components)
  local numChildren = getNumOfChildren(rootElement)
  -- TODO: structure LOP_FORNPREP (pc 7, target 23)
  local maxRot = getChildAt(rootElement, 0)
  table.insert(components, {node = maxRot})
  -- TODO: structure LOP_FORNLOOP (pc 22, target 8)
end
