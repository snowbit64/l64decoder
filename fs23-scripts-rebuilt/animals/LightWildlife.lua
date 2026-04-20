-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LightWildlifeStateDefault = {}
local LightWildlifeStateDefault_mt = Class(LightWildlifeStateDefault, SimpleState)
function LightWildlifeStateDefault.new(id, owner, stateMachine, custom_mt)
  return SimpleState.new(id, owner, stateMachine, u0)
end
LightWildlife = {}
local LightWildlife_mt = Class(LightWildlife)
InitStaticObjectClass(LightWildlife, "LightWildlife", ObjectIds.OBJECT_ANIMAL_LIGHT_WILDLIFE)
function LightWildlife.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1["type"] = ""
  v1.i3dFilename = nil
  v1.sharedLoadRequestId = nil
  v1.animals = {}
  v1.animalStates = {}
  table.insert(v1.animalStates, {id = "default", classObject = LightWildlifeStateDefault})
  local v3 = createTransformGroup("lightWildlifeSounds")
  v1.soundsNode = v3
  local v4 = getRootNode()
  link(v4, v1.soundsNode)
  return v1
end
function LightWildlife:load(xmlFilename)
  local v2 = Utils.getFilename(xmlFilename, self.baseDirectory)
  self.xmlFilename = v2
  v2 = loadXMLFile("TempXML", self.xmlFilename)
  if v2 == 0 then
    self.xmlFilename = nil
    return false
  end
  local v3 = hasXMLProperty(v2, "wildlifeAnimal")
  if v3 then
    v3 = getXMLString(v2, "wildlifeAnimal" .. "#type")
    self["type"] = v3
    local v4 = getXMLFloat(v2, "wildlifeAnimal" .. "#randomSpawnRadius")
    v3 = Utils.getNoNil(v4, 0)
    self.randomSpawnRadius = v3
    v3 = getXMLString(v2, "wildlifeAnimal" .. ".asset#filename")
    v4 = getXMLString(v2, "wildlifeAnimal" .. ".animations#shaderNode")
    self.shaderNodeString = v4
    v4 = getXMLString(v2, "wildlifeAnimal" .. ".animations#shaderParameterId")
    self.shaderParmId = v4
    v4 = getXMLString(v2, "wildlifeAnimal" .. ".animations#shaderParameterOpcode")
    self.shaderParmOpcode = v4
    v4 = getXMLString(v2, "wildlifeAnimal" .. ".animations#shaderParameterSpeed")
    self.shaderParmSpeed = v4
    self.animations = {default = {name = "default", opcode = 0, speed = 0, transitionTimer = 0}}
    while true do
      v5 = string.format("wildlifeAnimal" .. ".animations.animation(%d)", v4)
      v6 = hasXMLProperty(v2, v5)
      if not v6 then
        break
      end
      v7 = getXMLString(v2, v5 .. "#conditionState")
      v6 = Utils.getNoNil(v7, "")
      v9 = getXMLInt(v2, v5 .. "#opcode")
      v8 = Utils.getNoNil(v9, 0)
      v9 = getXMLFloat(v2, v5 .. "#speed")
      v8 = Utils.getNoNil(v9, 0)
      v10 = getXMLFloat(v2, v5 .. "#transitionTimer")
      v9 = Utils.getNoNil(v10, 1)
      self.animations[v6] = {opcode = v8, speed = v8, transitionTimer = v9 * 1000}
    end
    if self["type"] ~= nil and v3 ~= nil then
      v5 = Utils.getFilename(v3, self.baseDirectory)
      self.i3dFilename = v5
      v5, v6 = v5:loadSharedI3DFile(self.i3dFilename, false, false)
      if v5 ~= 0 then
        delete(v5)
        self.cacheLoadRequestId = v6
      end
      delete(v2)
      return true
    end
  end
  delete(v2)
  return false
end
function LightWildlife:createAnimals(name, spawnPosX, spawnPosY, spawnPosZ, nbAnimals)
  if #self.animals == 0 then
    -- TODO: structure LOP_FORNPREP (pc 8, target 60)
    local v9, v10 = v9:loadSharedI3DFile(self.i3dFilename, false, false)
    if v9 ~= nil then
      local v12 = getRootNode()
      link(v12, v9)
      local v11 = I3DUtil.indexToObject(v9, self.shaderNodeString)
      v12 = LightWildlifeAnimal.new(self, 1, v9, v11)
      v12:init(spawnPosX, spawnPosZ, self.randomSpawnRadius, self.animalStates)
      v12.sharedLoadRequestId = v10
      table.insert(self.animals, v12)
    end
    -- TODO: structure LOP_FORNLOOP (pc 59, target 9)
    setWorldTranslation(self.soundsNode, spawnPosX, spawnPosY, spawnPosZ)
    return 1
  end
  return 0
end
function LightWildlife:delete()
  delete(self.soundsNode)
  self:removeAllAnimals()
  if self.cacheLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.cacheLoadRequestId)
    self.cacheLoadRequestId = nil
  end
end
function LightWildlife:removeAllAnimals()
  for v4, v5 in pairs(self.animals) do
    if v5.sharedLoadRequestId ~= nil then
      v6:releaseSharedI3DFile(v5.sharedLoadRequestId)
      v5.sharedLoadRequestId = nil
    end
    if not (v5.i3dNodeId ~= nil) then
      continue
    end
    delete(v5.i3dNodeId)
  end
  self.animals = {}
end
function LightWildlife:update(dt)
  for v5, v6 in pairs(self.animals) do
    v6:update(dt)
    v6:updateAnimation(dt)
  end
end
function LightWildlife:removeFarAwayAnimals(maxDistance, refPosX, refPosY, refPosZ)
  -- TODO: structure LOP_FORNPREP (pc 6, target 73)
  local v11 = entityExists(self.animals[#self.animals].i3dNodeId)
  if v11 then
    local v11, v12, v13 = getWorldTranslation(self.animals[#self.animals].i3dNodeId)
    -- if v1 * v1 >= (v2 - v11) * (v2 - v11) + (v3 - v12) * (v3 - v12) + (v4 - v13) * (v4 - v13) then goto L50 end
    delete(self.animals[#self.animals].i3dNodeId)
  else
  end
  if v9 then
    table.remove(self.animals, v8)
    if v10.sharedLoadRequestId ~= nil then
      v11:releaseSharedI3DFile(v10.sharedLoadRequestId)
      v10.sharedLoadRequestId = nil
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 72, target 7)
  return v5
end
function LightWildlife:getClosestDistance(refPosX, refPosY, refPosZ)
  for v8, v9 in pairs(self.animals) do
    local v10 = entityExists(v9.i3dNodeId)
    if not v10 then
      continue
    end
    local v10, v11, v12 = getWorldTranslation(v9.i3dNodeId)
    if v4 ~= nil then
      if not (v4 ~= nil) then
        continue
      end
      if not ((refPosX - v10) * (refPosX - v10) + (refPosY - v11) * (refPosY - v11) + (refPosZ - v12) * (refPosZ - v12) < v4) then
        continue
      end
    end
  end
  if v4 == nil then
  end
  return v4
end
function LightWildlife:countSpawned()
  return #self.animals
end
function LightWildlife.getIsInWater(v0, v1, v2, v3)
  local v5 = v5:getWaterYAtWorldPosition(v1, v2, v3)
  if v2 >= (v5 or -2000) then
  end
  return true
end
function LightWildlife:getTerrainHeightWithProps(x, z)
  local terrainY = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
  self.groundY = -1
  raycastClosest(x, terrainY + 5, z, 0, -1, 0, "groundRaycastCallback", 5, self, 63)
  return math.max(terrainY, self.groundY)
end
function LightWildlife:groundRaycastCallback(hitObjectId, x, y, z, distance)
  if hitObjectId ~= nil then
    local objectType = getRigidBodyType(hitObjectId)
    if objectType ~= RigidBodyType.DYNAMIC and objectType ~= RigidBodyType.KINEMATIC then
      self.groundY = y
      return false
    end
  end
  return true
end
