-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WindrowerEffect = {}
local WindrowerEffect_mt = Class(WindrowerEffect, MorphPositionEffect)
function WindrowerEffect.new(customMt)
  if customMt == nil then
  end
  return MorphPositionEffect.new(customMt)
end
function WindrowerEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = Effect.getValue(xmlFile, key, node, "unloadDirection", 0)
  self.unloadDirection = v6
  v6 = Effect.getValue(xmlFile, key, node, "width", 0)
  self.width = v6
  v6 = Effect.getValue(xmlFile, key, node, "dropOffset", 0)
  self.dropOffset = v6
  v6 = Effect.getValue(xmlFile, key, node, "turnOffRequiredEffect", 0)
  self.turnOffRequiredEffect = v6
  self.testAreas = {}
  while true do
    v9 = string.format(".testArea(%d)", v6)
    v8 = xmlFile:hasProperty(key .. v9)
    if not v8 then
      break
    end
    v8 = xmlFile:getValue(key .. v9 .. "#startNode", nil, self.rootNodes, i3dMapping)
    v9 = xmlFile:getValue(key .. v9 .. "#widthNode", nil, self.rootNodes, i3dMapping)
    v10 = xmlFile:getValue(key .. v9 .. "#heightNode", nil, self.rootNodes, i3dMapping)
    table.insert(self.testAreas, {start = v8, width = v9, height = v10})
  end
  self.particleSystems = {}
  while true do
    v9 = string.format(".particleSystem(%d)", v6)
    v8 = xmlFile:hasProperty(key .. v9)
    if not v8 then
      break
    end
    v8 = xmlFile:getValue(key .. v9 .. "#emitterShape", nil, self.rootNodes, i3dMapping)
    v9 = xmlFile:getValue(key .. v9 .. "#particleType")
    v10 = xmlFile:getValue(key .. v9 .. "#materialType", v9)
    v11 = xmlFile:getValue(key .. v9 .. "#materialIndex", 1)
    v12 = xmlFile:getValue(key .. v9 .. "#fadeInRange", nil, true)
    v13 = xmlFile:getValue(key .. v9 .. "#fadeOutRange", nil, true)
    if v8 ~= nil then
      v14, v15, v16 = getWorldTranslation(v8)
      v17, v18, v19 = worldToLocal(self.node, v14, v15, v16)
      v20 = v20:getParticleSystem(v9)
      if v20 ~= nil then
        v21 = ParticleUtil.copyParticleSystem(xmlFile, key .. v9, v20, v8)
        table.insert(self.particleSystems, {xOffset = v17, fadeInRange = v12, fadeOutRange = v13, particleSystem = v21, materialType = v10, materialIndex = v11, fillType = FillType.UNKNOWN})
      end
    end
  end
  self.lastChargeTime = 0
  self.updateTick = 0
  self.scrollUpdate = false
  self.particleSystemsTurnedOff = false
  return true
end
function WindrowerEffect:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  for v4, v5 in ipairs(self.particleSystems) do
    ParticleUtil.deleteParticleSystem(v5.particleSystem)
  end
end
function WindrowerEffect:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if 5 < self.updateTick then
    -- if v0.state == ShaderPlaneEffect.STATE_OFF then goto L149 end
    local v2, v3, v4 = WindrowerEffect.getCurrentTestAreaWidth(self)
    setShaderParameter(self.node, "offsetUV", self.scrollPosition, 0, v2, v3, false)
    for v8, v9 in ipairs(self.particleSystems) do
      if v9.fadeInRange[1] <= self.fadeCur[1] and self.fadeCur[1] > v9.fadeInRange[2] then
      end
      if v9.fadeOutRange[1] <= self.fadeCur[2] and self.fadeCur[2] > v9.fadeOutRange[2] then
      end
      if v2 <= v9.xOffset and v9.xOffset > v3 then
      end
      if v12 then
        -- if not v10 then goto L134 end
        -- if not v11 then goto L134 end
        -- if v0.state == ShaderPlaneEffect.STATE_OFF then goto L134 end
        if v9.fillType ~= v4 then
          local v13 = v13:getParticleMaterial(v4, v9.materialType, v9.materialIndex)
          if v13 ~= nil then
            ParticleUtil.setMaterial(v9.particleSystem, v13)
          end
          v9.fillType = v4
        end
        ParticleUtil.setEmittingState(v9.particleSystem, true)
      else
        ParticleUtil.setEmittingState(v9.particleSystem, false)
      end
    end
    self.updateTick = 0
    self.particleSystemsTurnedOff = false
  elseif not self.particleSystemsTurnedOff then
    for v5, v6 in ipairs(self.particleSystems) do
      ParticleUtil.setEmittingState(v6.particleSystem, false)
    end
    self.particleSystemsTurnedOff = true
  end
  v2, v3, v4, v5 = getShaderParameter(self.node, "offsetUV")
  self.scrollPosition = (self.scrollPosition + dt * self.scrollSpeed) % self.scrollLength
  setShaderParameter(self.node, "offsetUV", self.scrollPosition, v3, v4, v5, false)
  self.updateTick = self.updateTick + 1
end
function WindrowerEffect:start()
  local v2 = v2:superClass()
  local dt = v2.start(self)
  if dt and self.unloadDirection ~= 0 then
    local v2, v3 = WindrowerEffect.getCurrentTestAreaWidth(self, true)
    if self.unloadDirection < 0 then
    end
    local v5 = MathUtil.clamp((v3 / self.width / 2 + 1) / 2, 0, 1)
    self.fadeCur[2] = v5
    if self.unloadDirection < 0 then
      v5 = math.abs(1 - self.fadeCur[2])
      self.fadeCur[2] = v5
    end
  end
  return dt
end
function WindrowerEffect:stop()
  local v2 = v2:superClass()
  local dt = v2.stop(self)
  if dt and self.unloadDirection ~= 0 and self.fadeCur[1] == 0 then
    local v2, v3, v4, v5 = getShaderParameter(self.node, "offsetUV")
    if self.unloadDirection < 0 then
    end
    local v7 = MathUtil.clamp((v4 / self.width / 2 + 1) / 2, 0, 1)
    self.fadeCur[1] = v7
    if self.unloadDirection < 0 then
      v7 = math.abs(1 - self.fadeCur[1])
      self.fadeCur[1] = v7
    end
  end
  return dt
end
function WindrowerEffect:getCurrentTestAreaWidth(real)
  for v8, v9 in ipairs(self.testAreas) do
    local v10, v11, v12 = getWorldTranslation(v9.start)
    local v13, v14, v15 = getWorldTranslation(v9.width)
    local v16, v17, v18 = getWorldTranslation(v9.height)
    local v19 = DensityMapHeightUtil.getFillTypeAtArea(v10, v12, v13, v15, v16, v18)
    if not (v19 ~= FillType.UNKNOWN) then
      continue
    end
    local v20, v21, v22 = worldToLocal(self.node, v10, v11, v12)
    local v23, v24, v25 = worldToLocal(self.node, v13, v14, v15)
    if v20 < v2 then
    end
    if v3 < v23 then
    end
  end
  if real then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L104
  end
  if self.unloadDirection ~= 0 then
    if self.unloadDirection < 0 then
    end
    if 0 < self.unloadDirection then
    end
  end
  return v2, v3, v4
end
function WindrowerEffect:registerEffectXMLPaths(dt)
  self:register(XMLValueType.INT, dt .. "#unloadDirection", "(WindrowerEffect) Unload direction")
  self:register(XMLValueType.FLOAT, dt .. "#width", "(WindrowerEffect) Width", 0)
  self:register(XMLValueType.FLOAT, dt .. "#dropOffset", "(WindrowerEffect) Drop offset", 0)
  self:register(XMLValueType.INT, dt .. "#turnOffRequiredEffect", "(WindrowerEffect) Index of turn off required effect", 0)
  self:register(XMLValueType.NODE_INDEX, dt .. ".testArea(?)#startNode", "(WindrowerEffect) Test area start node")
  self:register(XMLValueType.NODE_INDEX, dt .. ".testArea(?)#widthNode", "(WindrowerEffect) Test area width node")
  self:register(XMLValueType.NODE_INDEX, dt .. ".testArea(?)#heightNode", "(WindrowerEffect) Test area height node")
  self:register(XMLValueType.NODE_INDEX, dt .. ".particleSystem(?)#emitterShape", "(WindrowerEffect) Emitter shape node")
  self:register(XMLValueType.STRING, dt .. ".particleSystem(?)#particleType", "(WindrowerEffect) Particle type")
  self:register(XMLValueType.STRING, dt .. ".particleSystem(?)#materialType", "(WindrowerEffect) Material type", "same as particleType")
  self:register(XMLValueType.INT, dt .. ".particleSystem(?)#materialIndex", "(WindrowerEffect) Particle type", 1)
  self:register(XMLValueType.VECTOR_2, dt .. ".particleSystem(?)#fadeInRange", "(WindrowerEffect) Fade in range")
  self:register(XMLValueType.VECTOR_2, dt .. ".particleSystem(?)#fadeOutRange", "(WindrowerEffect) Fade out range")
  ParticleUtil.registerParticleCopyXMLPaths(self, dt .. ".particleSystem(?)")
end
