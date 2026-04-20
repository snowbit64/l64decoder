-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WorkParticles = {PARTICLE_MAPPING_XML_PATH = "vehicle.workParticles.particle(?).node(?)"}
function WorkParticles.prerequisitesPresent(v0)
  return true
end
function WorkParticles.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("WorkParticles")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.workParticles.particleAnimation(?)#file", "External effect i3d file")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.workParticles.particleAnimation(?)#speedThreshold", "Speed threshold", 0)
  WorkParticles.registerGroundAnimationMappingXMLPaths(Vehicle.xmlSchema, "vehicle.workParticles.particleAnimation(?).node(?)")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.workParticles.particle(?)#file", "External effect i3d file")
  WorkParticles.registerGroundParticleMappingXMLPaths(Vehicle.xmlSchema, "vehicle.workParticles.particle(?).node(?)")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.workParticles.effect(?)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.workParticles.effect(?)#speedThreshold", "Speed threshold", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.workParticles.effect(?)#activeDirection", "Active Direction (effect will be turned off wen in opposite direction)", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.workParticles.effect(?)#workAreaIndex", "Work area index")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.workParticles.effect(?)#groundReferenceNodeIndex", "Index of ground reference node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.workParticles.effect(?)#needsSetIsTurnedOn", "Needs set is turned on", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, GroundReference.GROUND_REFERENCE_XML_KEY .. "#depthNode", "Depth node")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function WorkParticles:registerGroundAnimationMappingXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Link node in vehicle")
  self:register(XMLValueType.INT, v1 .. "#refNodeIndex", "Ground reference node index")
  self:register(XMLValueType.STRING, v1 .. "#animMeshNode", "Animation mesh node in external file")
  self:register(XMLValueType.STRING, v1 .. "#materialType", "Material type name (If external file is not given)")
  self:register(XMLValueType.INT, v1 .. "#materialId", "Material index (If external file is not given)", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#maxDepth", "Max. depth", -0.1)
end
function WorkParticles:registerGroundParticleMappingXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Link node in vehicle")
  self:register(XMLValueType.INT, v1 .. "#refNodeIndex", "Ground reference node index")
  self:register(XMLValueType.STRING, v1 .. "#particleNode", "Particle node in external file")
  self:register(XMLValueType.STRING, v1 .. "#particleType", "Particle type name (If external file is not given)")
  self:register(XMLValueType.STRING, v1 .. "#fillType", "Fill type for particles (If external file is not given)", "UNKNOWN")
  self:register(XMLValueType.FLOAT, v1 .. "#speedThreshold", "Speed threshold", 0.5)
  self:register(XMLValueType.INT, v1 .. "#movingDirection", "Moving direction")
  ParticleUtil.registerParticleCopyXMLPaths(self, v1)
end
function WorkParticles.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getDoGroundManipulation", WorkParticles.getDoGroundManipulation)
  SpecializationUtil.registerFunction(vehicleType, "loadGroundAnimations", WorkParticles.loadGroundAnimations)
  SpecializationUtil.registerFunction(vehicleType, "onGroundAnimationI3DLoaded", WorkParticles.onGroundAnimationI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "loadGroundAnimationMapping", WorkParticles.loadGroundAnimationMapping)
  SpecializationUtil.registerFunction(vehicleType, "loadGroundParticles", WorkParticles.loadGroundParticles)
  SpecializationUtil.registerFunction(vehicleType, "groundParticleI3DLoaded", WorkParticles.groundParticleI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "loadGroundParticleMapping", WorkParticles.loadGroundParticleMapping)
  SpecializationUtil.registerFunction(vehicleType, "loadGroundEffects", WorkParticles.loadGroundEffects)
  SpecializationUtil.registerFunction(vehicleType, "getFillTypeFromWorkAreaIndex", WorkParticles.getFillTypeFromWorkAreaIndex)
end
function WorkParticles.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadGroundReferenceNode", WorkParticles.loadGroundReferenceNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateGroundReferenceNode", WorkParticles.updateGroundReferenceNode)
end
function WorkParticles.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", WorkParticles)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", WorkParticles)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", WorkParticles)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", WorkParticles)
end
function WorkParticles:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.groundParticleAnimations.groundParticleAnimation", "vehicle.workParticles.particleAnimation")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.groundParticleAnimations.groundParticle", "vehicle.workParticles.particle")
  if self.isClient then
    self.spec_workParticles.particleAnimations = {}
    while true do
      v4 = string.format("vehicle.workParticles.particleAnimation(%d)", v3)
      v5 = v5:hasProperty(v4)
      if not v5 then
        break
      end
      v6 = self:loadGroundAnimations(self.xmlFile, v4, {}, v3)
      if v6 then
        table.insert(v2.particleAnimations, {})
      end
    end
    v2.particles = {}
    while true do
      v4 = string.format("vehicle.workParticles.particle(%d)", v3)
      v5 = v5:hasProperty(v4)
      if not v5 then
        break
      end
      v6 = self:loadGroundParticles(self.xmlFile, v4, {}, v3)
      if v6 then
        table.insert(v2.particles, {})
      end
    end
    v2.effects = {}
    while true do
      v4 = string.format("vehicle.workParticles.effect(%d)", v3)
      v5 = v5:hasProperty(v4)
      if not v5 then
        break
      end
      v6 = self:loadGroundEffects(self.xmlFile, v4, {}, v3)
      if v6 then
        table.insert(v2.effects, {})
      end
    end
  end
  if not self.isClient then
    SpecializationUtil.removeEventListener(self, "onDelete", WorkParticles)
    SpecializationUtil.removeEventListener(self, "onUpdateTick", WorkParticles)
    SpecializationUtil.removeEventListener(self, "onDeactivate", WorkParticles)
  end
end
function WorkParticles:onDelete()
  if self.spec_workParticles.particleAnimations ~= nil then
    for v5, v6 in ipairs(self.spec_workParticles.particleAnimations) do
      if not (v6.sharedLoadRequestId ~= nil) then
        continue
      end
      v7:releaseSharedI3DFile(v6.sharedLoadRequestId)
      v6.sharedLoadRequestId = nil
    end
  end
  if v1.particles ~= nil then
    for v5, v6 in pairs(v1.particles) do
      for v10, v11 in ipairs(v6.mappings) do
        ParticleUtil.deleteParticleSystem(v11.particleSystem)
      end
      if not (v6.sharedLoadRequestId ~= nil) then
        continue
      end
      v7:releaseSharedI3DFile(v6.sharedLoadRequestId)
      v6.sharedLoadRequestId = nil
    end
  end
  if v1.effects ~= nil then
    for v5, v6 in pairs(v1.effects) do
      v7:deleteEffects(v6.effect)
    end
  end
end
function WorkParticles:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local isOnField = self:getIsOnField()
  for v10, v11 in ipairs(self.spec_workParticles.particleAnimations) do
    for v15, v16 in ipairs(v11.mappings) do
      if not (v16.groundRefNode ~= nil) then
        continue
      end
      if not (v16.groundRefNode.depthNode ~= nil) then
        continue
      end
      local v18 = MathUtil.clamp(v16.groundRefNode.depth / v16.maxWorkDepth, 0, 1)
      if not isOnField then
      end
      local v20 = math.min(v18, v16.lastDepth + v17.movingDirection * v17.movedDistance / 0.5)
      local v19 = MathUtil.clamp(v20, 0, 1)
      v16.lastDepth = v19
      v16.speed = v16.speed - v17.movedDistance * v17.movingDirection
      if 0 >= v19 then
      end
      v19(v20, true)
      setShaderParameter(v16.animNode, "VertxoffsetVertexdeformMotionUVscale", -6, v18, v16.speed, 1.5, false)
    end
  end
  v7 = self:getLastSpeed(true)
  v9 = self:getDoGroundManipulation()
  for v12, v13 in pairs(v5.particles) do
    for v17, v18 in ipairs(v13.mappings) do
      if v8 and v18.groundRefNode.isActive and v18.speedThreshold >= v7 then
      end
      if v18.movingDirection ~= nil and v19 and v18.movingDirection ~= self.movingDirection then
      end
      ParticleUtil.setEmittingState(v18.particleSystem, v19)
    end
  end
  for v12, v13 in pairs(v5.effects) do
    if v8 and v13.speedThreshold >= v7 then
    end
    if v13.needsSetIsTurnedOn and self.getIsTurnedOn ~= nil then
      v15 = self:getIsTurnedOn()
      if self.getAttacherVehicle ~= nil then
        v16 = self:getAttacherVehicle()
        if v16 ~= nil and v16.getIsTurnedOn ~= nil and not v15 then
          v17 = v16:getIsTurnedOn()
        end
      end
    end
    v15 = self:getWorkAreaByIndex(v13.workAreaIndex)
    if v15 ~= nil and v15.requiresGroundContact and v14 and v15.groundReferenceNode ~= nil then
    end
    if v13.groundReferenceNodeIndex ~= nil and v13.groundReferenceNode == nil then
      v16 = self:getGroundReferenceNodeFromIndex(v13.groundReferenceNodeIndex)
      v13.groundReferenceNode = v16
      if v13.groundReferenceNode == nil then
        Logging.warning("Unknown ground reference node '%s' for WorkParticle effect!", v13.groundReferenceNodeIndex)
        v13.groundReferenceNodeIndex = nil
      end
    end
    if v13.groundReferenceNode ~= nil and v14 then
    end
    if v14 and self.movingDirection == -v13.activeDirection then
      v17 = self:getLastSpeed()
      if v17 >= 0.5 then
      end
    end
    if v16 then
      v16 = self:getFillTypeFromWorkAreaIndex(v13.workAreaIndex)
      v17:setFillType(v13.effect, v16)
      v17:startEffects(v13.effect)
    else
      v16:stopEffects(v13.effect)
    end
  end
end
function WorkParticles.getDoGroundManipulation(v0)
  return true
end
function WorkParticles:loadGroundAnimations(xmlFile, key, animation, index)
  local v5 = xmlFile:getValue(key .. "#speedThreshold", 0)
  animation.speedThreshold = v5
  animation.mappings = {}
  while true do
    v6 = string.format(key .. ".node(%d)", v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = self:loadGroundAnimationMapping(xmlFile, v6, {}, v5)
    if v8 then
      table.insert(animation.mappings, {})
    end
  end
  v6 = v6:getValue(key .. "#file")
  if v6 ~= nil then
    v7 = Utils.getFilename(v6, self.baseDirectory)
    v8 = self:loadSubSharedI3DFile(v7, false, false, self.onGroundAnimationI3DLoaded, self, {filename = v7, animation = animation})
    animation.sharedLoadRequestId = v8
  end
  return true
end
function WorkParticles.onGroundAnimationI3DLoaded(v0, v1, v2)
  if v1 ~= 0 then
    for v7, v8 in ipairs(v2.animation.mappings) do
      link(v8.node, v8.animNode)
      setVisibility(v8.animNode, false)
    end
    v3.filename = v2.filename
    delete(v1)
  end
end
function WorkParticles:loadGroundAnimationMapping(xmlFile, key, mapping, index)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#index", key .. "#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#animMeshIndex", key .. "#animMeshNode")
  local v5 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if v5 == nil then
    local v9 = getXMLString(xmlFile.handle, key .. "#node")
    Logging.xmlWarning(self.xmlFile, "Invalid node '%s' for '%s'", v9, key)
    return false
  end
  local v6 = xmlFile:getValue(key .. "#refNodeIndex")
  if v6 ~= nil then
    local v7 = self:getGroundReferenceNodeFromIndex(v6)
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x80000000 -> L81
  end
  local v10 = xmlFile:getValue(key .. "#refNodeIndex")
  Logging.xmlWarning(self.xmlFile, "Invalid refNodeIndex '%s' for '%s'", v10, key)
  return false
  local v8 = xmlFile:getValue(key .. "#animMeshNode")
  if v8 ~= nil then
    v9 = I3DUtil.indexToObject(v5, v8, self.i3dMappings)
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x80000000 -> L170
    local v12 = xmlFile:getValue(key .. "#animMeshNode")
    Logging.xmlWarning(self.xmlFile, "Invalid animMesh node '%s' '%s'", v12, key)
    return false
  else
    v9 = xmlFile:getValue(key .. "#materialType")
    v10 = xmlFile:getValue(key .. "#materialId", 1)
    if v9 == nil then
      Logging.xmlWarning(self.xmlFile, "Missing materialType in '%s'", key)
      return false
    end
    local v11 = v11:getBaseMaterialByName(v9)
    if v11 ~= nil then
      setMaterial(v5, v11, 0)
    else
      Logging.xmlWarning(self.xmlFile, "Invalid materialType '%s' or materialId '%s' in '%s'", v9, v10, key)
    end
    setVisibility(v7, false)
  end
  mapping.node = v5
  mapping.animNode = v7
  v9 = self:getGroundReferenceNodeFromIndex(v6)
  mapping.groundRefNode = v9
  mapping.lastDepth = 0
  mapping.speed = 0
  v9 = xmlFile:getValue(key .. "#maxDepth", -0.1)
  mapping.maxWorkDepth = v9
  return true
end
function WorkParticles:loadGroundParticles(xmlFile, key, particle, index)
  particle.mappings = {}
  local v5 = xmlFile:getValue(key .. "#file")
  if v5 ~= nil then
    local v6 = Utils.getFilename(v5, self.baseDirectory)
    local v7 = v7:loadSharedI3DFileAsync(v6, false, false, self.groundParticleI3DLoaded, self, {xmlFile = xmlFile, key = key, particle = particle, filename = v6})
    particle.sharedLoadRequestId = v7
  else
    while true do
      v7 = string.format(key .. ".node(%d)", v6)
      v8 = xmlFile:hasProperty(v7)
      if not v8 then
        break
      end
      v9 = self:loadGroundParticleMapping(xmlFile, v7, {}, v6)
      if v9 then
        table.insert(particle.mappings, {})
      end
    end
  end
  return true
end
function WorkParticles:groundParticleI3DLoaded(i3dNode, failedReason, args)
  while true do
    v9 = string.format(v5 .. ".node(%d)", v8)
    v10 = v4:hasProperty(v9)
    if not v10 then
      break
    end
    v11 = self:loadGroundParticleMapping(v4, v9, {}, v8, i3dNode)
    if v11 then
      table.insert(v6.mappings, {})
    end
  end
  if i3dNode ~= 0 then
    for v12, v13 in ipairs(v6.mappings) do
      link(v13.node, v13.particleNode)
      ParticleUtil.loadParticleSystemFromNode(v13.particleNode, v13.particleSystem, false, true)
    end
    v6.filename = v7
    delete(i3dNode)
  end
end
function WorkParticles:loadGroundParticleMapping(xmlFile, key, mapping, index, i3dNode)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#index", key .. "#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#particleIndex", key .. "#particleNode")
  mapping.particleSystem = {}
  local v6 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if v6 == nil then
    local v10 = xmlFile:getValue(key .. "#node")
    Logging.xmlWarning(self.xmlFile, "Invalid node '%s' for '%s'", v10, key)
    return false
  end
  local v7 = xmlFile:getValue(key .. "#refNodeIndex")
  if v7 ~= nil then
    local v8 = self:getGroundReferenceNodeFromIndex(v7)
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L83
  end
  local v11 = xmlFile:getValue(key .. "#refNodeIndex")
  Logging.xmlWarning(self.xmlFile, "Invalid refNodeIndex '%s' for '%s'", v11, key)
  return false
  local v9 = xmlFile:getValue(key .. "#particleNode")
  if v9 ~= nil then
    v10 = I3DUtil.indexToObject(i3dNode, v9, self.i3dMappings)
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L192
    local v13 = xmlFile:getValue(key .. "#particleNode")
    Logging.xmlWarning(self.xmlFile, "Invalid particle node '%s' '%s'", v13, key)
    return false
  else
    v10 = xmlFile:getValue(key .. "#particleType")
    if v10 == nil then
      Logging.xmlWarning(self.xmlFile, "Missing particleType in '%s'", key)
      return false
    end
    v11 = xmlFile:getValue(key .. "#fillType")
    v13 = v13:getFillTypeIndexByName(v11)
    local v12 = Utils.getNoNil(v13, FillType.UNKNOWN)
    v13 = v13:getParticleSystem(v10)
    if v13 ~= nil then
      if v12 ~= FillType.UNKNOWN then
        local v14 = v14:getParticleMaterial(v12, v10, 1)
        if v14 ~= nil then
          ParticleUtil.setMaterial(v13, v14)
        end
      end
      v14 = ParticleUtil.copyParticleSystem(xmlFile, key, v13, v6)
      mapping.particleSystem = v14
    else
      return false
    end
  end
  mapping.node = v6
  mapping.particleNode = v8
  v10 = self:getGroundReferenceNodeFromIndex(v7)
  mapping.groundRefNode = v10
  v10 = xmlFile:getValue(key .. "#speedThreshold", 0.5)
  mapping.speedThreshold = v10
  v10 = xmlFile:getValue(key .. "#movingDirection")
  mapping.movingDirection = v10
  return true
end
function WorkParticles:loadGroundEffects(xmlFile, key, effect, index)
  local v5 = xmlFile:getValue(key .. "#speedThreshold", 0.5)
  effect.speedThreshold = v5
  v5 = xmlFile:getValue(key .. "#activeDirection", 1)
  effect.activeDirection = v5
  v5 = xmlFile:getValue(key .. "#workAreaIndex")
  effect.workAreaIndex = v5
  v5 = xmlFile:getValue(key .. "#groundReferenceNodeIndex")
  effect.groundReferenceNodeIndex = v5
  v5 = xmlFile:getValue(key .. "#needsSetIsTurnedOn", false)
  effect.needsSetIsTurnedOn = v5
  v5 = v5:loadEffect(xmlFile, key, self.components, self, self.i3dMappings)
  effect.effect = v5
  return true
end
function WorkParticles:getFillTypeFromWorkAreaIndex(workAreaIndex)
  local workArea = self:getWorkAreaByIndex(workAreaIndex)
  if workArea ~= nil then
    if workArea.fillType ~= nil then
      return workArea.fillType
    end
    if workArea.fruitType ~= nil then
      local v4 = v4:getFruitTypeIndexByFillTypeIndex(workArea.fruitType)
    end
  end
  return v2
end
function WorkParticles:loadGroundReferenceNode(superFunc, xmlFile, key, groundReferenceNode)
  local returnValue = superFunc(self, xmlFile, key, groundReferenceNode)
  if returnValue then
    local v6 = xmlFile:getValue(key .. "#depthNode", nil, self.components, self.i3dMappings)
    groundReferenceNode.depthNode = v6
    groundReferenceNode.movedDistance = 0
    groundReferenceNode.depth = 0
    groundReferenceNode.movingDirection = 0
  end
  return returnValue
end
function WorkParticles:updateGroundReferenceNode(superFunc, groundReferenceNode, x, y, z, terrainHeight, densityHeight)
  superFunc(self, groundReferenceNode, x, y, z, terrainHeight, densityHeight)
  if self.isClient and groundReferenceNode.depthNode ~= nil then
    local v8, v9, v10 = getWorldTranslation(groundReferenceNode.depthNode)
    if groundReferenceNode.lastPosition == nil then
      groundReferenceNode.lastPosition = {v8, v9, v10}
    end
    local v11, v12, v13 = worldDirectionToLocal(groundReferenceNode.depthNode, v8 - groundReferenceNode.lastPosition[1], v9 - groundReferenceNode.lastPosition[2], v10 - groundReferenceNode.lastPosition[3])
    groundReferenceNode.movingDirection = 0
    if 0.0001 < v13 then
      groundReferenceNode.movingDirection = 1
    elseif v13 < -0.0001 then
      groundReferenceNode.movingDirection = -1
    end
    local v14 = MathUtil.vector3Length(v11, v12, v13)
    groundReferenceNode.movedDistance = v14
    groundReferenceNode.lastPosition[1] = v8
    groundReferenceNode.lastPosition[2] = v9
    groundReferenceNode.lastPosition[3] = v10
    v14 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v8, v9, v10)
    groundReferenceNode.depth = v9 - v14
  end
end
function WorkParticles:onDeactivate()
  for z, terrainHeight in pairs(self.spec_workParticles.particles) do
    for v10, v11 in ipairs(terrainHeight.mappings) do
      ParticleUtil.setEmittingState(v11.particleSystem, false)
    end
  end
  for z, terrainHeight in ipairs(superFunc.particleAnimations) do
    for v10, v11 in ipairs(terrainHeight.mappings) do
      setVisibility(v11.animNode, false)
    end
  end
end
