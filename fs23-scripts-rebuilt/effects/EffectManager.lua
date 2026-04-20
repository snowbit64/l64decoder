-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EffectManager = {}
local EffectManager_mt = Class(EffectManager, AbstractManager)
function EffectManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function EffectManager:initDataStructures()
  self.runningEffects = {}
  self.registeredEffectClasses = {}
  self.delayedCommands = {}
  self.validCommands = 0
end
function EffectManager:loadEffect(xmlFile, baseName, rootNode, parent, i3dMapping)
  while true do
    v8 = string.format(baseName .. ".effectNode(%d)", v7)
    v9 = xmlFile:hasProperty(v8)
    if not v9 then
      break
    end
    v9 = xmlFile:getValue(v8 .. "#effectClass", "ShaderPlaneEffect")
    v10 = self:getEffectClass(v9)
    if v10 == nil then
      if parent.customEnvironment ~= nil and parent.customEnvironment ~= "" then
        v11 = self:getEffectClass(parent.customEnvironment .. "." .. v9)
      end
      if v10 == nil then
        v11 = ClassUtil.getClassObject(v9)
      end
    end
    if v10 ~= nil then
      v11 = v10.new()
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L89
      v14 = v11:load(xmlFile, v8, rootNode, parent, i3dMapping)
      table.insert(...)
    else
      v18 = Utils.getNoNil(parent.configFileName, parent.xmlFilename)
      print("Warning: Unkown effect '" .. v9 .. "' in '" .. v18 .. "'")
    end
  end
  return v6
end
function EffectManager:loadFromNode(node, parent)
  local v7 = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 9, target 86)
  v7 = getChildAt(node, 0)
  local v9 = getUserAttribute(v7, "effectClass")
  local v8 = Utils.getNoNil(v9, "ShaderPlaneEffect")
  v9 = self:getEffectClass(v8)
  if v9 == nil then
    if parent.customEnvironment ~= nil and parent.customEnvironment ~= "" then
      local v10 = self:getEffectClass(parent.customEnvironment .. "." .. v8)
    end
    if v9 == nil then
      v10 = ClassUtil.getClassObject(v8)
    end
  end
  if v9 ~= nil then
    v10 = v9.new()
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L85
    local v13 = v10:loadFromNode(v7, parent)
    table.insert(...)
  else
    local v17 = getName(node)
    print("Warning: Unkown effect '" .. v8 .. "' in '" .. v17 .. "'")
  end
  -- TODO: structure LOP_FORNLOOP (pc 85, target 10)
  return v3
end
function EffectManager:registerEffectClass(className, effectClass)
  local v3 = ClassUtil.getIsValidClassName(className)
  if not v3 then
    print("Error: Invalid effect class name: " .. className)
    return
  end
  self.registeredEffectClasses[className] = effectClass
end
function EffectManager:getEffectClass(className)
  return self.registeredEffectClasses[className]
end
function EffectManager:deleteEffects(effects)
  if effects ~= nil then
    for v5, v6 in pairs(effects) do
      self.runningEffects[v6] = nil
      v6:delete()
      -- TODO: structure LOP_FORNPREP (pc 19, target 34)
      if self.delayedCommands[1].isValid and self.delayedCommands[1].arg1 == v6 then
        self.delayedCommands[1].isValid = false
      end
      -- TODO: structure LOP_FORNLOOP (pc 33, target 20)
    end
  end
end
function EffectManager:update(dt)
  for v5, v6 in pairs(self.runningEffects) do
    v6:update(dt)
    local v7 = v6:isRunning()
    if not not v7 then
      continue
    end
    self.runningEffects[v5] = nil
  end
  if 0 < self.validCommands then
    -- TODO: structure LOP_FORNPREP (pc 30, target 64)
    if self.delayedCommands[1].isValid then
      self.delayedCommands[1].delay = self.delayedCommands[1].delay - dt
      if self.delayedCommands[1].delay <= 0 then
        self.delayedCommands[1].func(self, self.delayedCommands[1].arg1, self.delayedCommands[1].arg2)
        self.delayedCommands[1].isValid = false
        self.validCommands = self.validCommands - 1
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 63, target 31)
  end
end
function EffectManager:addDelayedCommand(func, arg1, arg2, delay)
  -- TODO: structure LOP_FORNPREP (pc 6, target 15)
  if not self.delayedCommands[1].isValid then
  end
  -- TODO: structure LOP_FORNLOOP (pc 14, target 7)
  if v5 == nil then
    table.insert(self.delayedCommands, {func = func, arg1 = arg1, arg2 = arg2, delay = delay, isValid = true})
  else
    v5.func = func
    v5.arg1 = arg1
    v5.arg2 = arg2
    v5.delay = delay
    v5.isValid = true
  end
  self.validCommands = self.validCommands + 1
end
function EffectManager:startEffects(effects)
  if effects ~= nil then
    for v5, v6 in pairs(effects) do
      self:startEffect(v6)
    end
  end
end
function EffectManager:startEffect(effect, skipDelay)
  if effect ~= nil then
    local v3, v4 = effect:start(skipDelay)
    if v3 then
      self.runningEffects[effect] = effect
      return
    end
    if v4 ~= nil then
      self:addDelayedCommand(self.startEffect, effect, true, v4)
    end
  end
end
function EffectManager:stopEffects(effects)
  if effects ~= nil then
    for v5, v6 in pairs(effects) do
      self:stopEffect(v6)
    end
  end
end
function EffectManager:stopEffect(effect, skipDelay)
  if effect ~= nil then
    local v3, v4 = effect:stop(skipDelay)
    if v3 then
      self.runningEffects[effect] = effect
      return
    end
    if v4 ~= nil then
      self:addDelayedCommand(self.stopEffect, effect, true, v4)
    end
  end
end
function EffectManager:resetEffects(effects)
  if effects ~= nil then
    for v5, v6 in pairs(effects) do
      self:resetEffect(v6)
    end
  end
end
function EffectManager:resetEffect(effect)
  if effect ~= nil then
    self.runningEffects[effect] = nil
    effect:reset()
  end
end
function EffectManager.setFillType(v0, v1, v2, v3)
  if v1 ~= nil then
    for v7, v8 in pairs(v1) do
      if not (v8.setFillType ~= nil) then
        continue
      end
      v8:setFillType(v2, v3)
    end
  end
end
function EffectManager.setFruitType(v0, v1, v2, v3)
  if v1 ~= nil then
    for v7, v8 in pairs(v1) do
      if not (v8.setFruitType ~= nil) then
        continue
      end
      v8:setFruitType(v2, v3)
    end
  end
end
function EffectManager.setMinMaxWidth(v0, v1, v2, v3, v4, v5, v6)
  if v1 ~= nil then
    for v10, v11 in pairs(v1) do
      if not (v11.setMinMaxWidth ~= nil) then
        continue
      end
      v11:setMinMaxWidth(v2, v3, v4, v5, v6)
    end
  end
end
function EffectManager.setDensity(v0, v1, v2)
  if v1 ~= nil then
    for v6, v7 in pairs(v1) do
      if not (v7.setDensity ~= nil) then
        continue
      end
      v7:setDensity(v2)
    end
  end
end
function EffectManager:registerEffectXMLPaths(v1)
  self:setXMLSharedRegistration("EffectNode", v1)
  self:register(XMLValueType.STRING, v1 .. ".effectNode(?)#effectClass", "Effect class", "ShaderPlaneEffect")
  Effect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  LevelerEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  MorphPositionEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  ParticleEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  PipeEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  ShaderPlaneEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  SlurrySideToSideEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  WindrowerEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  TipEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  GrainTankEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  CutterMotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  CultivatorMotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  PlowMotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  WindrowerMotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  FertilizerMotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  SnowPlowMotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  MotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  self:setXMLSharedRegistration()
end
local v1 = EffectManager.new()
g_effectManager = v1
