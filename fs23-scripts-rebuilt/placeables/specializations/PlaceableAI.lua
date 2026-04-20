-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableAI = {}
function PlaceableAI.prerequisitesPresent(v0)
  return true
end
function PlaceableAI.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "setObstacleActive", PlaceableAI.setObstacleActive)
  SpecializationUtil.registerFunction(placeableType, "loadAIUpdateArea", PlaceableAI.loadAIUpdateArea)
  SpecializationUtil.registerFunction(placeableType, "loadAISpline", PlaceableAI.loadAISpline)
  SpecializationUtil.registerFunction(placeableType, "loadAIObstacle", PlaceableAI.loadAIObstacle)
  SpecializationUtil.registerFunction(placeableType, "updateAIUpdateAreas", PlaceableAI.updateAIUpdateAreas)
end
function PlaceableAI.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableAI)
  SpecializationUtil.registerEventListener(placeableType, "onPostLoad", PlaceableAI)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableAI)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableAI)
end
function PlaceableAI:registerXMLPaths(v1)
  self:setXMLSpecializationType("AI")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".ai.updateAreas.updateArea(?)#startNode", "Start node of ai update area")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".ai.updateAreas.updateArea(?)#endNode", "End node of ai update area")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".ai.splines.spline(?)#node", "Spline node or transform group containing splines. Spline direction not relevant")
  self:register(XMLValueType.FLOAT, v1 .. ".ai.splines.spline(?)#maxWidth", "Maximum vehicle width supported by the spline")
  self:register(XMLValueType.FLOAT, v1 .. ".ai.splines.spline(?)#maxTurningRadius", "Maxmium vehicle turning supported by the spline")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".ai.obstacles.obstacle(?)#node", "Node to be used for obstacle box", nil, true)
  self:register(XMLValueType.VECTOR_3, v1 .. ".ai.obstacles.obstacle(?)#size", "Obstacle box size as x y z vector, required if node is not a rigid body")
  self:register(XMLValueType.VECTOR_3, v1 .. ".ai.obstacles.obstacle(?)#offset", "Obstacle box offset to node as x y z vector")
  self:register(XMLValueType.INT, v1 .. ".ai.obstacles.obstacle(?).animatedObject#index", "Index of corresponding animated object in xml", nil, true)
  self:register(XMLValueType.FLOAT, v1 .. ".ai.obstacles.obstacle(?).animatedObject#startTime", "Normalized start time to activate obstacle", nil, true)
  self:register(XMLValueType.FLOAT, v1 .. ".ai.obstacles.obstacle(?).animatedObject#endTime", "Normalized end time to deactivate obstacle", nil, true)
  self:setXMLSpecializationType()
end
function PlaceableAI:onLoad(savegame)
  self.spec_ai.updateAreaOnDelete = false
  self.spec_ai.areas = {}
  self.xmlFile:iterate("placeable.ai.updateAreas.updateArea", function(self, savegame)
    local v3 = v3:loadAIUpdateArea(u1, savegame, {})
    if v3 then
      table.insert(u2.areas, {})
    end
  end)
  local v4 = v4:hasProperty("placeable.ai.updateAreas")
  if not v4 then
    Logging.xmlWarning(self.xmlFile, "Missing ai update areas")
  end
  v2.splines = {}
  v3:iterate("placeable.ai.splines.spline", function(self, savegame)
    local v3 = v3:loadAISpline(u1, savegame, {})
    if v3 then
      table.insert(u2.splines, {})
    end
  end)
  v2.obstacles = {}
  v3:iterate("placeable.ai.obstacles.obstacle", function(self, savegame)
    local v3 = v3:loadAIObstacle(u1, savegame, {})
    if v3 then
      table.insert(u2.obstacles, {})
    end
  end)
end
function PlaceableAI:onPostLoad(savegame)
  if self.spec_animatedObjects ~= nil and g_currentMission.aiSystem ~= nil and g_currentMission.aiSystem.navigationMap ~= nil then
    for v7, v8 in ipairs(self.spec_ai.obstacles) do
      if v3[v8.animatedObjectIndex] == nil then
        Logging.warning("Placeable AI obstacle %d: AnimatedObject with index %d does not exist", v7, v8.animatedObjectIndex)
      else
        v8.animatedObject = v3[v8.animatedObjectIndex]
        v8.updateState = function(self, savegame, v2)
          if u0.animatedObjectTimeStart <= savegame and savegame <= u0.animatedObjectTimeEnd then
            -- if u0.isActive then goto L31 end
            v3:setObstacleActive(u0, true)
            return
          end
          if u0.isActive then
            v3:setObstacleActive(u0, false)
          end
        end
        local v10 = Utils.appendedFunction(v3[v8.animatedObjectIndex].setAnimTime, v8.updateState)
        v3[v8.animatedObjectIndex].setAnimTime = v10
      end
    end
  end
end
function PlaceableAI:onDelete()
  if self.isServer then
    if self.spec_ai.updateAreaOnDelete then
      self:updateAIUpdateAreas()
    end
    if g_currentMission.aiSystem ~= nil then
      if v1.splines ~= nil then
        for v5, v6 in pairs(v1.splines) do
          v7:removeRoadSpline(v6.splineNode)
        end
      end
      if self.spec_animatedObjects ~= nil and g_currentMission.aiSystem.navigationMap ~= nil and self.spec_animatedObjects.animatedObjects ~= nil then
        for v6, v7 in ipairs(v1.obstacles) do
          if not v7.isActive then
            continue
          end
          self:setObstacleActive(v7, false)
        end
      end
    end
  end
end
function PlaceableAI:loadAIUpdateArea(xmlFile, key, area)
  local v4 = xmlFile:getValue(key .. "#startNode", nil, self.components, self.i3dMappings)
  local v5 = xmlFile:getValue(key .. "#endNode", nil, self.components, self.i3dMappings)
  if v4 == nil then
    Logging.xmlWarning(xmlFile, "Missing ai update area start node for '%s'", key)
    return false
  end
  if v5 == nil then
    Logging.xmlWarning(xmlFile, "Missing ai update area end node for '%s'", key)
    return false
  end
  local v6, v7, v8 = localToLocal(v4, self.rootNode, 0, 0, 0)
  local v9, v10, v11 = localToLocal(v5, self.rootNode, 0, 0, 0)
  local v12 = math.abs(v9 - v6)
  local v13 = math.abs(v11 - v8)
  area.center = {x = (v9 + v6) * 0.5, z = (v11 + v8) * 0.5}
  area.size = {x = v12, z = v13}
  area.startNode = v4
  area.endNode = v5
  return true
end
function PlaceableAI:loadAISpline(xmlFile, key, spline)
  local v4 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if v4 == nil then
    return false
  end
  setVisibility(v4, false)
  local v5 = xmlFile:getValue(key .. "#maxWidth")
  local v6 = xmlFile:getValue(key .. "#maxTurningRadius")
  spline.splineNode = v4
  spline.maxWidth = v5
  spline.maxTurningRadius = v6
  return true
end
function PlaceableAI:loadAIObstacle(xmlFile, key, obstacle)
  local v4 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  obstacle.node = v4
  if obstacle.node == nil then
    Logging.xmlWarning(xmlFile, "Obstacle '%s' node does not exist", key)
    return false
  end
  v4 = xmlFile:getValue(key .. "#size", "0 0 0", true)
  obstacle.size = v4
  v4 = xmlFile:getValue(key .. "#offset", "0 0 0", true)
  obstacle.offset = v4
  v4 = getRigidBodyType(obstacle.node)
  if v4 == RigidBodyType.NONE and obstacle.size[1] == 0 then
    Logging.xmlWarning(xmlFile, "Obstacle '%s' is not a rigid body and needs a size", key)
    return false
  end
  v4 = xmlFile:getValue(key .. ".animatedObject#index")
  obstacle.animatedObjectIndex = v4
  if obstacle.animatedObjectIndex == nil then
    Logging.xmlWarning(xmlFile, "Obstacle '%s' is missing animated object index", key)
    return false
  end
  v4 = xmlFile:getValue(key .. ".animatedObject#startTime")
  obstacle.animatedObjectTimeStart = v4
  v4 = xmlFile:getValue(key .. ".animatedObject#endTime")
  obstacle.animatedObjectTimeEnd = v4
  if obstacle.animatedObjectTimeStart ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L119
  end
  Logging.xmlWarning(xmlFile, "Obstacle '%s' is missing start or end time", key)
  return false
  if obstacle.animatedObjectTimeEnd <= obstacle.animatedObjectTimeStart then
    Logging.xmlWarning(xmlFile, "Obstacle '%s' start time need to be smaller than end time", key)
    return false
  end
  obstacle.isActive = false
  return true
end
function PlaceableAI:onFinalizePlacement()
  if self.isServer then
    self.spec_ai.updateAreaOnDelete = true
    if self.isLoadedFromSavegame then
      -- if g_currentMission.missionInfo.isValid then goto L19 end
    end
    self:updateAIUpdateAreas()
    if g_currentMission.aiSystem ~= nil then
      for v6, v7 in ipairs(v1.splines) do
        v8:addRoadSpline(v7.splineNode, v7.maxWidth, v7.maxTurningRadius)
      end
      if g_currentMission.aiSystem.navigationMap ~= nil then
        for v6, v7 in ipairs(v1.obstacles) do
          if not (v7.animatedObject ~= nil) then
            continue
          end
          v7.updateState(nil, v7.animatedObject.animation.time)
        end
      end
    end
  end
end
function PlaceableAI.setObstacleActive(v0, v1, v2)
  if v2 then
    addVehicleNavigationPhysicsObstacle(g_currentMission.aiSystem.navigationMap, v1.node, v1.offset[1], v1.offset[2], v1.offset[3], v1.size[1], v1.size[2], v1.size[3], 0)
    setVehicleNavigationPhysicsObstacleIsPassable(g_currentMission.aiSystem.navigationMap, v1.node, false)
  else
    removeVehicleNavigationPhysicsObstacle(g_currentMission.aiSystem.navigationMap, v1.node)
  end
  v1.isActive = v2
end
function PlaceableAI:updateAIUpdateAreas()
  if self.isServer then
    for v5, v6 in pairs(self.spec_ai.areas) do
      local v11, v12, v13 = localToWorld(self.rootNode, v6.center.x + v6.size.x * 0.5, 0, v6.center.z + v6.size.z * 0.5)
      local v14, v15, v16 = localToWorld(self.rootNode, v6.center.x - v6.size.x * 0.5, 0, v6.center.z + v6.size.z * 0.5)
      local v17, v18, v19 = localToWorld(self.rootNode, v6.center.x + v6.size.x * 0.5, 0, v6.center.z - v6.size.z * 0.5)
      local v20, v21, v22 = localToWorld(self.rootNode, v6.center.x - v6.size.x * 0.5, 0, v6.center.z - v6.size.z * 0.5)
      local v23 = math.min(v11, v14, v17, v20)
      local v24 = math.max(v11, v14, v17, v20)
      local v25 = math.min(v13, v16, v19, v22)
      local v26 = math.max(v13, v16, v19, v22)
      v27:setAreaDirty(v23, v24, v25, v26)
    end
  end
end
