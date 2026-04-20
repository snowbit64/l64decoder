-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VineDetector = {}
function VineDetector.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("VineDetector")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.vineDetector.raycast#node", "Raycast node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.vineDetector.raycast#maxDistance", "Max raycast distance", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function VineDetector.prerequisitesPresent(v0)
  return true
end
function VineDetector.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "raycastCallbackVineDetection", VineDetector.raycastCallbackVineDetection)
  SpecializationUtil.registerFunction(vehicleType, "finishedVineDetection", VineDetector.finishedVineDetection)
  SpecializationUtil.registerFunction(vehicleType, "clearCurrentVinePlaceable", VineDetector.clearCurrentVinePlaceable)
  SpecializationUtil.registerFunction(vehicleType, "cancelVineDetection", VineDetector.cancelVineDetection)
  SpecializationUtil.registerFunction(vehicleType, "getIsValidVinePlaceable", VineDetector.getIsValidVinePlaceable)
  SpecializationUtil.registerFunction(vehicleType, "handleVinePlaceable", VineDetector.handleVinePlaceable)
  SpecializationUtil.registerFunction(vehicleType, "getCanStartVineDetection", VineDetector.getCanStartVineDetection)
  SpecializationUtil.registerFunction(vehicleType, "getFirstVineHitPosition", VineDetector.getFirstVineHitPosition)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentVineHitPosition", VineDetector.getCurrentVineHitPosition)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentVineHitDistance", VineDetector.getCurrentVineHitDistance)
end
function VineDetector.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", VineDetector)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", VineDetector)
end
function VineDetector:onLoad(savegame)
  self.spec_vineDetector.raycast = {}
  local v4 = v4:getValue("vehicle.vineDetector.raycast#node", nil, self.components, self.i3dMappings)
  self.spec_vineDetector.raycast.node = v4
  if self.spec_vineDetector.raycast.node == nil then
    Logging.xmlWarning(self.xmlFile, "Missing vine detector raycast node")
  end
  v4 = v4:getValue("vehicle.vineDetector.raycast#maxDistance", 1)
  v2.raycast.maxDistance = v4
  v2.raycast.vineNode = nil
  v2.raycast.isRaycasting = false
  v2.raycast.firstHitPosition = {0, 0, 0}
  v2.raycast.currentHitPosition = {0, 0, 0}
  v2.raycast.currentHitDistance = 0
  v2.raycast.currentNode = nil
  v2.isVineDetectionActive = false
end
function VineDetector:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer and self.spec_vineDetector.raycast.node ~= nil then
    local v6 = self:getCanStartVineDetection()
    if v6 then
      self.spec_vineDetector.isVineDetectionActive = true
      -- if v0.spec_vineDetector.raycast.isRaycasting then goto L76 end
      self.spec_vineDetector.raycast.isRaycasting = true
      local v6, v7, v8 = getWorldTranslation(self.spec_vineDetector.raycast.node)
      local v9, v10, v11 = localDirectionToWorld(self.spec_vineDetector.raycast.node, 0, -1, 0)
      raycastAll(v6, v7, v8, v9, v10, v11, "raycastCallbackVineDetection", self.spec_vineDetector.raycast.maxDistance, self, nil, false, true)
      return
    end
    if v5.isVineDetectionActive then
      self:clearCurrentVinePlaceable()
      self:finishedVineDetection()
      v5.isVineDetectionActive = false
    end
  end
end
function VineDetector:raycastCallbackVineDetection(hitActorId, x, y, z, distance, nx, ny, nz, subShapeIndex, hitShapeId, isLast)
  if hitActorId ~= 0 then
    if VehicleDebug.state == VehicleDebug.DEBUG then
      local v24 = getName(hitActorId)
      local v26 = getName(hitShapeId)
      local v22 = string.format("hitActorId %s (%s); hitShape %s (%s)", v24, hitActorId, v26, hitShapeId)
      DebugUtil.drawDebugGizmoAtWorldPos(...)
    end
    if not self.spec_vineDetector.raycast.isRaycasting then
      self:cancelVineDetection()
      return false
    end
    local v13 = v13:getPlaceable(hitActorId)
    local v14 = self:getIsValidVinePlaceable(v13)
    if v14 then
      -- if g_currentMission.nodeToObject[v1] ~= v0 then goto L73 end
    end
    if isLast then
      self:clearCurrentVinePlaceable()
      self:finishedVineDetection()
      return false
    end
    return true
    v14 = self:handleVinePlaceable(hitActorId, v13, x, y, z, distance)
    if v14 then
      self:finishedVineDetection()
      return false
    end
    if isLast then
      self:finishedVineDetection()
      return false
    end
    return true
  end
  self:clearCurrentVinePlaceable()
  self:finishedVineDetection()
end
function VineDetector:finishedVineDetection()
  self.spec_vineDetector.raycast.isRaycasting = false
end
function VineDetector.getCanStartVineDetection(v0)
  return true
end
function VineDetector:getFirstVineHitPosition()
  return self.spec_vineDetector.raycast.firstHitPosition[1], self.spec_vineDetector.raycast.firstHitPosition[2], self.spec_vineDetector.raycast.firstHitPosition[3]
end
function VineDetector:getCurrentVineHitPosition()
  return self.spec_vineDetector.raycast.currentHitPosition[1], self.spec_vineDetector.raycast.currentHitPosition[2], self.spec_vineDetector.raycast.currentHitPosition[3]
end
function VineDetector:getCurrentVineHitDistance()
  return self.spec_vineDetector.raycast.currentHitDistance
end
function VineDetector:clearCurrentVinePlaceable()
  self.spec_vineDetector.raycast.currentNode = nil
  self.spec_vineDetector.raycast.placeable = nil
end
function VineDetector:cancelVineDetection()
  self.spec_vineDetector.raycast.currentNode = nil
  self.spec_vineDetector.raycast.placeable = nil
  self:finishedVineDetection()
end
function VineDetector.getIsValidVinePlaceable(v0, v1)
  if v1 == nil then
    return false
  end
  return true
end
function VineDetector:handleVinePlaceable(node, placeable, x, y, z, distance)
  if self.spec_vineDetector.raycast.currentNode ~= node then
    self.spec_vineDetector.raycast.firstHitPosition[1] = x
    self.spec_vineDetector.raycast.firstHitPosition[2] = y
    self.spec_vineDetector.raycast.firstHitPosition[3] = z
  end
  v8.currentNode = node
  v8.currentHitPosition[1] = x
  v8.currentHitPosition[2] = y
  v8.currentHitPosition[3] = z
  v8.currentHitDistance = distance
  v8.placeable = placeable
  return true
end
