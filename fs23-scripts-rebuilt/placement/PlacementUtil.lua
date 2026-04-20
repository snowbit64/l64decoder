-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlacementUtil = {TEST_HEIGHT = 10, TEST_STEP_SIZE = 1, NETHER_HEIGHT = -100}
function PlacementUtil.getPlace(places, size, usage, includeDynamics, includeStatics, doExactTest)
  for v9, v10 in pairs(places) do
    if not (size.width <= v10.maxWidth) then
      continue
    end
    if not (size.length <= v10.maxLength) then
      continue
    end
    if not (size.height <= v10.maxHeight) then
      continue
    end
    if usage[v10] == nil then
    end
    -- TODO: structure LOP_FORNPREP (pc 38, target 175)
    local v19 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v10.startX + (v11 + size.width * 0.5) * v10.dirX, v10.startY + (v11 + size.width * 0.5) * v10.dirY, v10.startZ + (v11 + size.width * 0.5) * v10.dirZ)
    local v20 = math.max(v19 + 0.5, v10.startY + (v11 + size.width * 0.5) * v10.dirY)
    PlacementUtil.tempHasCollision = false
    overlapBox(v10.startX + (v11 + size.width * 0.5) * v10.dirX, v20, v10.startZ + (v11 + size.width * 0.5) * v10.dirZ, v10.rotX, v10.rotY, v10.rotZ, size.width * 0.5, PlacementUtil.TEST_HEIGHT * 0.5, size.length * 0.5, "PlacementUtil.collisionTestCallback", nil, 1577471, includeDynamics, includeStatics, doExactTest)
    if not PlacementUtil.tempHasCollision then
      local v23 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v10.startX + (v11 + size.width * 0.5) * v10.dirX, v20, v10.startZ + (v11 + size.width * 0.5) * v10.dirZ)
      v23 = math.max(v23 + v10.yOffset, v20)
      return v10.startX + (v11 + size.width * 0.5) * v10.dirX - size.widthOffset * v10.dirX - size.lengthOffset * v10.dirPerpX, v20 - size.widthOffset * v10.dirY - size.lengthOffset * v10.dirPerpY, v10.startZ + (v11 + size.width * 0.5) * v10.dirZ - size.widthOffset * v10.dirZ - size.lengthOffset * v10.dirPerpZ, v10, v11 + size.width * 0.5 + size.width * 0.5, v23 - v23
    end
    -- TODO: structure LOP_FORNLOOP (pc 174, target 39)
  end
  return nil
end
function PlacementUtil:markPlaceUsed(v1, v2)
  self[v1] = v2
end
function PlacementUtil:unmarkPlaceUsed(v1)
  self[v1] = nil
end
function PlacementUtil.collisionTestCallback(v0, v1)
  if g_currentMission.nodeToObject[v1] == nil and g_currentMission.players[v1] == nil then
    local v2 = v2:getNodeObject(v1)
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L25
  end
  PlacementUtil.tempHasCollision = true
  return false
  return true
end
function PlacementUtil:loadPlaceFromXML(v1, v2, v3)
  local v4 = self:getValue(v1 .. "#startNode", nil, v2, v3)
  local v5 = self:getValue(v1 .. "#endNode", nil, v2, v3)
  local v6 = PlacementUtil.loadPlaceFromNode(v4, v5)
  if v6 == nil then
    return nil
  end
  local v7 = self:getValue(v1 .. "#maxWidth")
  if not v7 then
  end
  v6.maxWidth = v7
  v7 = self:getValue(v1 .. "#maxLength")
  if not v7 then
  end
  v6.maxLength = v7
  v7 = self:getValue(v1 .. "#maxHeight")
  if not v7 then
  end
  v6.maxHeight = v7
  v7 = self:getValue(v1 .. "#length")
  if not v7 then
  end
  v6.length = v7
  return v6
end
function PlacementUtil.loadPlaceFromNode(startNode, endNode)
  if startNode == nil then
    return nil
  end
  local v3, v4, v5 = getWorldTranslation(startNode)
  v4 = getUserAttribute(startNode, "width")
  v4 = getUserAttribute(startNode, "length")
  v4 = getUserAttribute(startNode, "yOffset")
  v3 = getUserAttribute(startNode, "maxWidth")
  if not v3 then
  end
  v2.maxWidth = v3
  v3 = getUserAttribute(startNode, "maxLength")
  if not v3 then
  end
  v2.maxLength = v3
  v3 = getUserAttribute(startNode, "maxHeight")
  if not v3 then
  end
  v2.maxHeight = v3
  v3 = getNumOfChildren(startNode)
  if endNode == nil then
    if v3 == 1 then
      v4 = getChildAt(startNode, 0)
    else
      local v6 = getName(startNode)
      Logging.warning(...)
    end
  end
  if endNode ~= nil then
    v4, v5, v6 = getWorldTranslation(endNode)
    local v10 = MathUtil.vector3Length(v4 - v2.startX, v5 - v2.startY, v6 - v2.startZ)
    v2.width = v10
    local v10, v11, v12 = MathUtil.vector3Normalize(v4 - v2.startX, v5 - v2.startY, v6 - v2.startZ)
    local v14 = getParent(startNode)
    local v13, v14, v15 = worldDirectionToLocal(v14, v10, v11, v12)
    setDirection(startNode, v13, v14, v15, 0, 1, 0)
    rotateAboutLocalAxis(startNode, -1.5707963267948966, 0, 1, 0)
  end
  if 1 < v3 then
    v6 = getName(startNode)
    Logging.warning(...)
  end
  v4, v5, v6 = getWorldRotation(startNode)
  v2.rotX = v4
  v2.rotY = v5
  v2.rotZ = v6
  v4, v5, v6 = localDirectionToWorld(startNode, 1, 0, 0)
  v2.dirX = v4
  v2.dirY = v5
  v2.dirZ = v6
  v4, v5, v6 = localDirectionToWorld(startNode, 0, 0, 1)
  v2.dirPerpX = v4
  v2.dirPerpY = v5
  v2.dirPerpZ = v6
  return v2
end
function PlacementUtil.createRestrictedZone(node)
  local v3, v4, v5 = getWorldTranslation(node)
  v3 = getNumOfChildren(node)
  if 0 < v3 then
    v4 = getChildAt(node, 0)
    v3, v4, v5 = getTranslation(...)
    local v6 = math.abs(v3)
    v6 = math.abs(v5)
    if v3 < 0 then
    end
    -- if v5 >= 0 then goto L64 end
    v1.z = v1.z + v5
    return v1
  end
  v1.width = 1
  v1.length = 1
  return v1
end
function PlacementUtil.isInsideRestrictedZone(restrictedZones, x, y, z, doWaterCheck)
  for v8, v9 in pairs(restrictedZones) do
    if not (0 < v9.x + v9.width - x) then
      continue
    end
    if not (v9.x + v9.width - x < v9.width) then
      continue
    end
    if not (0 < v9.z + v9.length - z) then
      continue
    end
    if not (v9.z + v9.length - z < v9.length) then
      continue
    end
    return true
  end
  v5 = Utils.getNoNil(doWaterCheck, true)
  if v5 then
    v6 = v6:getWaterYAtWorldPosition(x, y, z)
    if y < (v6 or -2000) - 0.5 then
      return true
    end
  end
  return false
end
function PlacementUtil.isInsidePlacementPlaces(places, x, y, z)
  for v7, v8 in pairs(places) do
    if 0 <= (x - v8.startX) * v8.dirX + (z - v8.startZ) * v8.dirZ then
      -- if (v1 - v8.startX) * v8.dirX + (v3 - v8.startZ) * v8.dirZ > v8.width then goto L37 end
      local v16 = math.abs((v8.startZ - z) * v8.dirX - (v8.startX - x) * v8.dirZ)
    elseif (x - v8.startX) * v8.dirX + (z - v8.startZ) * v8.dirZ < 0 then
      v16 = math.sqrt((v8.startX - x) * (v8.startX - x) + (v8.startZ - z) * (v8.startZ - z))
    else
      local v18 = math.sqrt((v8.startX + v8.width * v8.dirX - x) * (v8.startX + v8.width * v8.dirX - x) + (v8.startZ + v8.width * v8.dirZ - z) * (v8.startZ + v8.width * v8.dirZ - z))
    end
    if not (v15 <= v8.length * 0.5) then
      continue
    end
    return true
  end
  return false
end
function PlacementUtil:registerXMLPaths(x)
  self:register(XMLValueType.NODE_INDEX, x .. ".spawnPlaces.spawnPlace(?)#startNode", "Spawn area start node, end node default is first child")
  self:register(XMLValueType.NODE_INDEX, x .. ".spawnPlaces.spawnPlace(?)#endNode", "Spawn area end node, end node is first child")
  self:register(XMLValueType.FLOAT, x .. ".spawnPlaces.spawnPlace(?)#width", "Spawn area width in m if no child is present for node")
  self:register(XMLValueType.FLOAT, x .. ".spawnPlaces.spawnPlace(?)#length", "Spawn area length in m if no child is present for node")
  self:register(XMLValueType.FLOAT, x .. ".spawnPlaces.spawnPlace(?)#maxWidth", "Spawn area maximum width of object to spawn")
  self:register(XMLValueType.FLOAT, x .. ".spawnPlaces.spawnPlace(?)#maxLength", "Spawn area maximum length of object to spawn")
  self:register(XMLValueType.FLOAT, x .. ".spawnPlaces.spawnPlace(?)#maxHeight", "Spawn area maximum height of object to spawn")
end
