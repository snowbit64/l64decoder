-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimationManager = {}
local AnimationManager_mt = Class(AnimationManager, AbstractManager)
function AnimationManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function AnimationManager:initDataStructures()
  self.runningAnimations = {}
  self.registeredAnimations = {}
  self.registeredAnimationClasses = {}
  self.prevShaderParametersToSet = {}
end
function AnimationManager:registerAnimationClass(className, animationClass)
  local v3 = ClassUtil.getIsValidClassName(className)
  if not v3 then
    print("Error: Invalid animation class name: " .. className)
    return
  end
  self.registeredAnimationClasses[className] = animationClass
end
function AnimationManager:getAnimationClass(className)
  return self.registeredAnimationClasses[className]
end
function AnimationManager:loadAnimations(xmlFile, baseName, rootNode, parent, i3dMapping)
  while true do
    v8 = string.format(baseName .. ".animationNode(%d)", v7)
    v9 = xmlFile:hasProperty(v8)
    if not v9 then
      break
    end
    v10 = xmlFile:getValue(v8 .. "#class")
    v10 = self:getAnimationClass(v10 or "RotationAnimation")
    if v10 == nil then
      if parent.customEnvironment ~= nil and parent.customEnvironment ~= "" then
        v11 = self:getAnimationClass(parent.customEnvironment .. "." .. (v10 or "RotationAnimation"))
      end
      if v10 == nil then
        v11 = ClassUtil.getClassObject(v9)
      end
    end
    if v10 ~= nil then
      v11 = v10.new()
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L124
      v12 = v11:load(xmlFile, v8, rootNode, parent, i3dMapping)
      -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L124
      -- TODO: structure LOP_FORNPREP (pc 74, target 92)
      v17 = v12:isDuplicate(self.registeredAnimations[1])
      if v17 then
        v12:addDuplicate(self.registeredAnimations[1])
        self.registeredAnimations[1]:addDuplicate(v12)
      end
      -- TODO: structure LOP_FORNLOOP (pc 91, target 75)
      table.insert(v6, v12)
      table.insert(self.registeredAnimations, v12)
    else
      v18 = Utils.getNoNil(parent.configFileName, parent.xmlFilename)
      print("Warning: Unkown animation '" .. v9 .. "' in '" .. v18 .. "'")
    end
  end
  return v6
end
function AnimationManager:deleteAnimations(animations)
  if animations ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 5, target 26)
    self.runningAnimations[animations[#animations]] = nil
    animations[#animations]:delete()
    table.remove(animations, #animations)
    table.removeElement(self.registeredAnimations, animations[#animations])
    -- TODO: structure LOP_FORNLOOP (pc 25, target 6)
  end
end
function AnimationManager:update(dt)
  for v5, v6 in pairs(self.runningAnimations) do
    v6:update(dt)
    local v7 = v6:isRunning()
    if not not v7 then
      continue
    end
    self.runningAnimations[v5] = nil
  end
  -- TODO: structure LOP_FORNPREP (pc 25, target 65)
  if self.prevShaderParametersToSet[1].isValid and self.prevShaderParametersToSet[1].loopIndex < g_updateLoopIndex then
    v6 = entityExists(self.prevShaderParametersToSet[1].node)
    if v6 then
      setShaderParameter(self.prevShaderParametersToSet[1].node, self.prevShaderParametersToSet[1].parameterNamePrev, self.prevShaderParametersToSet[1].x, self.prevShaderParametersToSet[1].y, self.prevShaderParametersToSet[1].z, self.prevShaderParametersToSet[1].w, self.prevShaderParametersToSet[1].shared)
    end
    v5.isValid = false
  end
  -- TODO: structure LOP_FORNLOOP (pc 64, target 26)
end
function AnimationManager.areAnimationsRunning(v0, v1)
  if v1 ~= nil then
    for v5, v6 in ipairs(v1) do
      local v7 = v6:isRunning()
      if not v7 then
        continue
      end
      return true
    end
  end
  return false
end
function AnimationManager:startAnimations(animations)
  if animations ~= nil then
    for v5, v6 in ipairs(animations) do
      self:startAnimation(v6)
    end
  end
end
function AnimationManager:startAnimation(animation)
  if animation ~= nil then
    local v2 = animation:start()
    if v2 then
      self.runningAnimations[animation] = animation
    end
  end
end
function AnimationManager:stopAnimations(animations)
  if animations ~= nil then
    for v5, v6 in ipairs(animations) do
      self:stopAnimation(v6)
    end
  end
end
function AnimationManager:stopAnimation(animation)
  if animation.stop == nil then
    printCallstack()
  end
  if animation ~= nil then
    local v2 = animation:stop()
    if v2 then
      self.runningAnimations[animation] = animation
    end
  end
end
function AnimationManager:resetAnimations(animations)
  if animations ~= nil then
    for v5, v6 in ipairs(animations) do
      self:resetAnimation(v6)
    end
  end
end
function AnimationManager:resetAnimation(animation)
  if animation ~= nil then
    self.runningAnimations[animation] = nil
    animation:reset()
  end
end
function AnimationManager.setFillType(v0, v1, v2)
  if v1 ~= nil then
    for v6, v7 in ipairs(v1) do
      if not (v7.setFillType ~= nil) then
        continue
      end
      v7:setFillType(v2)
    end
  end
end
function AnimationManager:setPrevShaderParameter(node, parameterName, x, y, z, w, shared, parameterNamePrev)
  setShaderParameter(node, parameterName, x, y, z, w, shared)
  -- TODO: structure LOP_FORNPREP (pc 16, target 49)
  if not self.prevShaderParametersToSet[1].isValid then
  elseif self.prevShaderParametersToSet[1].loopIndex == g_updateLoopIndex and self.prevShaderParametersToSet[1].node == node and self.prevShaderParametersToSet[1].parameterNamePrev == parameterNamePrev then
    self.prevShaderParametersToSet[1].x = x
    self.prevShaderParametersToSet[1].y = y
    self.prevShaderParametersToSet[1].z = z
    self.prevShaderParametersToSet[1].w = w
    return
  end
  -- TODO: structure LOP_FORNLOOP (pc 48, target 17)
  if v9 == nil then
    table.insert(self.prevShaderParametersToSet, {})
  end
  v9.node = node
  v9.parameterNamePrev = parameterNamePrev
  v9.x = x
  v9.y = y
  v9.z = z
  v9.w = w
  v9.shared = shared
  v9.isValid = true
  v9.loopIndex = g_updateLoopIndex
end
function AnimationManager:registerAnimationNodesXMLPaths(node)
  self:setXMLSharedRegistration("AnimationNode", node)
  self:register(XMLValueType.STRING, node .. ".animationNode(?)#class", "Animation class (RotationAnimation | RotationAnimationSpikes | ScrollingAnimation | ShakeAnimation)", "RotationAnimation")
  RotationAnimation.registerAnimationClassXMLPaths(self, node .. ".animationNode(?)")
  RotationAnimationSpikes.registerAnimationClassXMLPaths(self, node .. ".animationNode(?)")
  ScrollingAnimation.registerAnimationClassXMLPaths(self, node .. ".animationNode(?)")
  ShakeAnimation.registerAnimationClassXMLPaths(self, node .. ".animationNode(?)")
  self:setXMLSharedRegistration()
end
local node = AnimationManager.new()
g_animationManager = v1
