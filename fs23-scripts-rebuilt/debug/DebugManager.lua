-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugManager = {}
local DebugManager_mt = Class(DebugManager, AbstractManager)
function DebugManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function DebugManager:initDataStructures()
  self.permanentElements = {}
  self.permanentFunctions = {}
  self.frameElements = {}
  self.debugMaterial = nil
  if self.debugMaterialNode ~= nil then
    delete(self.debugMaterialNode)
    self.debugMaterialNode = nil
  end
  self.splineDebugEnabled = false
  self.splineDebugElements = {}
  self.occluderDebugEnabled = false
  if not self.initialized then
    addConsoleCommand("gsDebugManagerClearElements", "Removes all permanent elements and functions from DebugManager", "consoleCommandRemovePermanentElements", self)
    addConsoleCommand("gsSplineDebug", "Toggles debug visualization for all splines currently in the scene", "consoleCommandSplineToggleDebug", self)
    addConsoleCommand("gsOccluderDebug", "Toggles debug visualization for all occluders currently in the scene", "consoleCommandOccluderToggleDebug", self)
    self.initialized = true
  end
end
function DebugManager:getDebugMat()
  if self.debugMaterial == nil then
    local debugMatI3d = loadI3DFile("data/shared/materialHolders/debugMaterialHolder.i3d", false, false, false)
    local v2 = getChildAt(debugMatI3d, 0)
    self.debugMaterialNode = v2
    unlink(self.debugMaterialNode)
    v2 = getMaterial(self.debugMaterialNode, 0)
    self.debugMaterial = v2
    delete(debugMatI3d)
  end
  return self.debugMaterial
end
function DebugManager:unloadMapData()
  self.loadedMapData = false
  self:initDataStructures()
end
function DebugManager:update(dt)
  for v5, v6 in ipairs(self.permanentElements) do
    v6:update(dt)
  end
end
function DebugManager:draw()
  for v4, v5 in ipairs(self.permanentElements) do
    v5:draw()
  end
  for v4, v5 in ipairs(self.permanentFunctions) do
    local v7 = unpack(v5[2])
    v5[1](...)
  end
  -- TODO: structure LOP_FORNPREP (pc 31, target 45)
  v4:draw()
  table.remove(self.frameElements, #self.frameElements)
  -- TODO: structure LOP_FORNLOOP (pc 44, target 32)
end
function DebugManager:addPermanentElement(element)
  table.addElement(self.permanentElements, element)
end
function DebugManager:removePermanentElement(element)
  table.removeElement(self.permanentElements, element)
end
function DebugManager:addFrameElement(element)
  table.addElement(self.frameElements, element)
end
function DebugManager:addPermanentFunction(funcAndParams)
  table.addElement(self.permanentFunctions, funcAndParams)
end
function DebugManager:removePermanentFunction(funcAndParams)
  table.removeElement(self.permanentFunctions, funcAndParams)
end
function DebugManager:consoleCommandRemovePermanentElements()
  self.permanentElements = {}
  self.permanentFunctions = {}
  return "Cleared all permanent debug elements"
end
function DebugManager:consoleCommandSplineToggleDebug()
  self.splineDebugEnabled = not self.splineDebugEnabled
  if self.splineDebugEnabled then
    self.splineDebugElements = {}
    local v1 = self:getDebugMat()
    local v5 = getRootNode()
    I3DUtil.interateRecursively(v5, function(self)
      local v1 = I3DUtil.getIsSpline(self)
      if v1 then
        if not u0.splineDebugElements[self] then
        end
        v1[self] = v2
        DebugUtil.setNodeEffectivelyVisible(self)
        local v2 = DebugUtil.getDebugColor(self)
        local v1, v2, v3 = unpack(...)
        setMaterial(self, u1, 0)
        setShaderParameter(self, "color", v1, v2, v3, 0, false)
        setShaderParameter(self, "alpha", 1, 0, 0, 0, false)
        local v4 = DebugUtil.getSplineDebugElements(self)
        u0.splineDebugElements[self] = v4
        for v8, v9 in pairs(v4) do
          if v8 == "splineAttributes" then
            v9:setColor(v1, v2, v3)
          end
          v10:addPermanentElement(v9)
        end
        u2 = u2 + 1
      end
    end)
    return string.format("Added debug visualization to %d splines", 0)
  end
  if self.splineDebugElements then
    for v4, v5 in pairs(self.splineDebugElements) do
      local v6 = entityExists(v4)
      if v6 then
        setVisibility(v4, false)
      end
      for v9, v10 in pairs(v5) do
        v11:removePermanentElement(v10)
      end
    end
    self.splineDebugElements = nil
    v1 = string.format("Removed spline debug elements")
    return v1
  end
  return "No debug elements to remove"
end
function DebugManager:consoleCommandOccluderToggleDebug()
  self.occluderDebugEnabled = not self.occluderDebugEnabled
  if self.occluderDebugEnabled then
    self.occluderDebugElements = {}
    local debugMat = self:getDebugMat()
    local v5 = getRootNode()
    I3DUtil.interateRecursively(v5, function(self)
      local debugMat = getHasClassId(self, ClassIds.SHAPE)
      if debugMat then
        debugMat = getIsOccluderMesh(self)
        if debugMat then
          setIsNonRenderable(self, false)
          setMaterial(self, u0, 0)
          debugMat = DebugUtil.getDebugColor(self)
          setShaderParameter(self, "color", debugMat[1], debugMat[2], debugMat[3], 0, false)
          setShaderParameter(self, "alpha", 0.3, 0, 0, 0, false)
          local v2, v3 = getEffectiveClipDistancesWithLOD(self)
          local v4 = getClipDistance(self)
          local v7 = getName(self)
          local v8 = math.min(v3, v4)
          local v5 = string.format(...)
          local v6 = DebugText.new()
          local v11 = math.random()
          v6 = v6:createWithNodeToCamera(self, 0.3 + v11, v5, 0.13)
          v6 = v6:setColor(debugMat[1], debugMat[2], debugMat[3])
          u1.occluderDebugElements[self] = v6
          v7:addPermanentElement(v6)
          u2 = u2 + 1
        end
      end
    end)
    return string.format("Added debug material to %d occluders", 0)
  end
  for v4, v5 in pairs(self.occluderDebugElements) do
    local v6 = entityExists(v4)
    if v6 then
      setIsNonRenderable(v4, true)
    end
    v6:removePermanentElement(v5)
  end
  return "Reset occluders to be non-renderable"
end
local v1 = DebugManager.new()
g_debugManager = v1
