-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CrowsWildlife = {}
local CrowsWildlife_mt = Class(CrowsWildlife, LightWildlife)
InitStaticObjectClass(CrowsWildlife, "CrowsWildlife", ObjectIds.OBJECT_ANIMAL_CROWS_WILDLIFE)
CrowsWildlife.CROW_STATES = {{id = "default", classObject = CrowStateDefault}, {id = "fly_glide", classObject = CrowStateFlyGlide}, {id = "fly", classObject = CrowStateFly}, {id = "flyUp", classObject = CrowStateFlyUp}, {id = "flyDown", classObject = CrowStateFlyDown}, {id = "flyDownFlapping", classObject = CrowStateFlyDownFlapping}, {id = "land", classObject = CrowStateLand}, {id = "takeOff", classObject = CrowStateTakeOff}, {id = "idle_walk", classObject = CrowStateIdleWalk}, {id = "idle_eat", classObject = CrowStateIdleEat}, {id = "idle_attention", classObject = CrowStateIdleAttention}}
CrowsWildlife.CROW_SOUND_STATES = {NONE = 1, CALM_GROUND = 2, CALM_AIR = 3, BUSY = 4, TAKEOFF = 5}
function CrowsWildlife.new(customMt)
  local v2 = v2:superClass()
  if not customMt then
  end
  local v1 = v1(v2)
  v1.animalStates = {}
  for v5, v6 in pairs(CrowsWildlife.CROW_STATES) do
    table.insert(v1.animalStates, v6)
  end
  v1.tree = nil
  v2 = FSMUtil.create()
  v1.soundFSM = v2
  v5 = CrowSoundStateDefault.new(CrowsWildlife.CROW_SOUND_STATES.NONE, v1, v1.soundFSM)
  v2:addState(...)
  v5 = CrowSoundStateCalmGround.new(CrowsWildlife.CROW_SOUND_STATES.CALM_GROUND, v1, v1.soundFSM)
  v2:addState(...)
  v5 = CrowSoundStateCalmAir.new(CrowsWildlife.CROW_SOUND_STATES.CALM_AIR, v1, v1.soundFSM)
  v2:addState(...)
  v5 = CrowSoundStateBusy.new(CrowsWildlife.CROW_SOUND_STATES.BUSY, v1, v1.soundFSM)
  v2:addState(...)
  v5 = CrowSoundStateTakeOff.new(CrowsWildlife.CROW_SOUND_STATES.TAKEOFF, v1, v1.soundFSM)
  v2:addState(...)
  v2:changeState(CrowsWildlife.CROW_SOUND_STATES.NONE)
  return v1
end
function CrowsWildlife:delete()
  v1:deleteSamples(self.samples.flyAway)
  v1:deleteSamples(self.samples.calmGround)
  v1:deleteSample(self.samples.busy)
  v1:deleteSample(self.samples.calmAir)
  local v2 = v2:superClass()
  v2.delete(self)
end
function CrowsWildlife:load(xmlFilename)
  local v3 = v3:superClass()
  v3.load(self, xmlFilename)
  local xmlFile = loadXMLFile("TempXML", self.xmlFilename)
  if xmlFile == 0 then
    self.xmlFilename = nil
    return false
  end
  self.samples = {flyAway = {}}
  while true do
    v8 = string.format("flyAway(%d)", v3)
    v4 = v4:loadSampleFromXML(xmlFile, "wildlifeAnimal.sounds.flyAways", v8, self.baseDirectory, self.soundsNode, 1, AudioGroup.ENVIRONMENT, nil, nil)
    if not (v4 ~= nil) then
      break
    end
    table.insert(self.samples.flyAway, v4)
  end
  self.samples.flyAwayCount = v3
  self.samples.calmGround = {}
  while true do
    v9 = string.format("calmGround(%d)", v4)
    v5 = v5:loadSampleFromXML(xmlFile, "wildlifeAnimal.sounds.calmGrounds", v9, self.baseDirectory, self.soundsNode, 1, AudioGroup.ENVIRONMENT, nil, nil)
    if not (v5 ~= nil) then
      break
    end
    table.insert(self.samples.calmGround, v5)
  end
  self.samples.calmCount = v4
  local v6 = v6:loadSampleFromXML(xmlFile, "wildlifeAnimal.sounds", "busy", self.baseDirectory, self.soundsNode, 0, AudioGroup.ENVIRONMENT, nil, nil)
  self.samples.busy = v6
  v6 = v6:loadSampleFromXML(xmlFile, "wildlifeAnimal.sounds", "calmAir", self.baseDirectory, self.soundsNode, 0, AudioGroup.ENVIRONMENT, nil, nil)
  self.samples.calmAir = v6
  delete(xmlFile)
  return true
end
function CrowsWildlife:createAnimals(name, spawnPosX, spawnPosY, spawnPosZ, nbAnimals)
  if #self.animals == 0 then
    v6:changeState(CrowsWildlife.CROW_SOUND_STATES.CALM_GROUND)
  end
  local v7 = v7:superClass()
  return v7.createAnimals(self, name, spawnPosX, spawnPosY, spawnPosZ, nbAnimals)
end
function CrowsWildlife:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if 0 < #self.animals then
    v2:update(dt)
    return
  end
  if self.soundFSM.currentState.id ~= CrowsWildlife.CROW_SOUND_STATES.NONE then
    v2:changeState(CrowsWildlife.CROW_SOUND_STATES.NONE)
  end
end
function CrowsWildlife.searchTree(v0, v1, v2, v3, v4)
  overlapSphere(v1, v2, v3, v4, "treeSearchCallback", v0, CollisionFlag.TREE, false, true, false)
end
function CrowsWildlife:treeSearchCallback(transformId)
  self.tree = nil
  if transformId ~= 0 then
    local v2 = getHasClassId(transformId, ClassIds.SHAPE)
    if v2 then
      v2 = getParent(transformId)
      if v2 ~= nil then
        local v3 = getSplitType(transformId)
        if v3 ~= 0 then
          self.tree = v2
        end
      end
    end
  end
  return true
end
function CrowsWildlife:getAverageLocationOfIdleAnimals()
  for v7, v8 in pairs(self.animals) do
    if v8.stateMachine.currentState.id ~= "idle_walk" and v8.stateMachine.currentState.id ~= "idle_eat" and not (v8.stateMachine.currentState.id == "idle_attention") then
      continue
    end
    local v10, v11, v12 = getWorldTranslation(v8.i3dNodeId)
  end
  if 0 < v1 then
    v4 = self:getTerrainHeightWithProps(v2 / v1, v3 / v1)
    return true, v2 / v1, v4, v3 / v1
  end
  return false, 0, 0, 0
end
