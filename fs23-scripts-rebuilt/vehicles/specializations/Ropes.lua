-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Ropes = {}
function Ropes.prerequisitesPresent(v0)
  return true
end
function Ropes.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Ropes")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.ropes.rope(?)#baseNode", "Base node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.ropes.rope(?)#targetNode", "Target node")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_4, "vehicle.ropes.rope(?)#baseParameters", "Base parameters")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_4, "vehicle.ropes.rope(?)#targetParameters", "Target parameters")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.ropes.rope(?).baseParameterAdjuster(?)#node", "Adjuster node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.ropes.rope(?).baseParameterAdjuster(?)#rotationAxis", "Rotation axis")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT_2, "vehicle.ropes.rope(?).baseParameterAdjuster(?)#rotationRange", "Rotation range")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.ropes.rope(?).baseParameterAdjuster(?)#translationAxis", "Translation axis")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, "vehicle.ropes.rope(?).baseParameterAdjuster(?)#translationRange", "Translation range")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_4, "vehicle.ropes.rope(?).baseParameterAdjuster(?)#minTargetParameters", "Min. target parameters")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_4, "vehicle.ropes.rope(?).baseParameterAdjuster(?)#maxTargetParameters", "Max. target parameters")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.ropes.rope(?).targetParameterAdjuster(?)#node", "Adjuster node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.ropes.rope(?).targetParameterAdjuster(?)#rotationAxis", "Rotation axis")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT_2, "vehicle.ropes.rope(?).targetParameterAdjuster(?)#rotationRange", "Rotation range")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.ropes.rope(?).targetParameterAdjuster(?)#translationAxis", "Translation axis")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, "vehicle.ropes.rope(?).targetParameterAdjuster(?)#translationRange", "Translation range")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_4, "vehicle.ropes.rope(?).targetParameterAdjuster(?)#minTargetParameters", "Min. target parameters")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_4, "vehicle.ropes.rope(?).targetParameterAdjuster(?)#maxTargetParameters", "Max. target parameters")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Ropes.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadAdjusterNode", Ropes.loadAdjusterNode)
  SpecializationUtil.registerFunction(vehicleType, "updateRopes", Ropes.updateRopes)
  SpecializationUtil.registerFunction(vehicleType, "updateAdjusterNodes", Ropes.updateAdjusterNodes)
end
function Ropes.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Ropes)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Ropes)
  SpecializationUtil.registerEventListener(vehicleType, "onPostUpdate", Ropes)
end
function Ropes:onLoad(savegame)
  if self.isClient then
    self.spec_ropes.ropes = {}
    while true do
      v4 = string.format("vehicle.ropes.rope(%d)", v3)
      v5 = v5:hasProperty(v4)
      if not v5 then
        break
      end
      v6 = v6:getValue(v4 .. "#baseNode", nil, self.components, self.i3dMappings)
      v6 = v6:getValue(v4 .. "#targetNode", nil, self.components, self.i3dMappings)
      v6 = v6:getValue(v4 .. "#baseParameters", nil, true)
      v6 = v6:getValue(v4 .. "#targetParameters", nil, true)
      setShaderParameter({baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.baseNode, "cv0", {baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.baseParameters[1], {baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.baseParameters[2], {baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.baseParameters[3], {baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.baseParameters[4], false)
      setShaderParameter({baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.baseNode, "cv1", 0, 0, 0, 0, false)
      v6, v7, v8 = localToLocal({baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.targetNode, {baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.baseNode, {baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.targetParameters[1], {baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.targetParameters[2], {baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.targetParameters[3])
      setShaderParameter({baseNode = v6, targetNode = v6, baseParameters = v6, targetParameters = v6}.baseNode, "cv3", v6, v7, v8, 0, false)
      while true do
        v10 = string.format("%s.baseParameterAdjuster(%d)", v4, v9)
        v11 = v11:hasProperty(v10)
        if not v11 then
          break
        end
        v12 = self:loadAdjusterNode({}, self.xmlFile, v10)
        if v12 then
          table.insert(v5.baseParameterAdjusters, {})
        end
      end
      v5.targetParameterAdjusters = {}
      while true do
        v10 = string.format("%s.targetParameterAdjuster(%d)", v4, v9)
        v11 = v11:hasProperty(v10)
        if not v11 then
          break
        end
        v12 = self:loadAdjusterNode({}, self.xmlFile, v10)
        if v12 then
          table.insert(v5.targetParameterAdjusters, {})
        end
      end
      table.insert(v2.ropes, v5)
    end
  end
  if self.isClient then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000024 -> L243
  end
  SpecializationUtil.removeEventListener(self, "onLoadFinished", Ropes)
  SpecializationUtil.removeEventListener(self, "onPostUpdate", Ropes)
end
function Ropes:onLoadFinished(savegame)
  self:updateRopes(9999)
end
function Ropes.onUpdate(v0, v1, v2, v3, v4)
  Ropes.onPostUpdate(v0, v1, v2, v3, v4)
end
function Ropes:onPostUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  self:updateRopes(dt)
end
function Ropes:loadAdjusterNode(adjusterNode, xmlFile, key)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#index", key .. "#node")
  local v4 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if v4 ~= nil then
    adjusterNode.node = v4
    local v5 = xmlFile:getValue(key .. "#rotationAxis", 1)
    adjusterNode.rotationAxis = v5
    v5 = xmlFile:getValue(key .. "#rotationRange", nil, true)
    adjusterNode.rotationRange = v5
    v5 = xmlFile:getValue(key .. "#translationAxis", 1)
    adjusterNode.translationAxis = v5
    v5 = xmlFile:getValue(key .. "#translationRange", nil, true)
    adjusterNode.translationRange = v5
    v5 = xmlFile:getValue(key .. "#minTargetParameters", nil, true)
    adjusterNode.minTargetParameters = v5
    if adjusterNode.minTargetParameters == nil then
      Logging.xmlWarning(self.xmlFile, "Missing minTargetParameters attribute in '%s'", key)
      return false
    end
    v5 = xmlFile:getValue(key .. "#maxTargetParameters", nil, true)
    adjusterNode.maxTargetParameters = v5
    if adjusterNode.maxTargetParameters == nil then
      Logging.xmlWarning(self.xmlFile, "Missing maxTargetParameters attribute in '%s'", key)
      return false
    end
    return true
  end
  Logging.xmlWarning(self.xmlFile, "Missing node attribute in '%s'", key)
  return false
end
function Ropes:updateRopes(dt)
  for v6, v7 in pairs(self.spec_ropes.ropes) do
    local v8, v9, v10 = self:updateAdjusterNodes(v7.baseParameterAdjusters)
    setShaderParameter(v7.baseNode, "cv0", v7.baseParameters[1] + v8, v7.baseParameters[2] + v9, v7.baseParameters[3] + v10, 0, false)
    local v11, v12, v13 = localToLocal(v7.targetNode, v7.baseNode, 0, 0, 0)
    setShaderParameter(v7.baseNode, "cv2", 0, 0, 0, 0, false)
    setShaderParameter(v7.baseNode, "cv3", v11, v12, v13, 0, false)
    v11, v12, v13 = self:updateAdjusterNodes(v7.targetParameterAdjusters)
    v11, v12, v13 = localToLocal(v7.targetNode, v7.baseNode, v7.targetParameters[1] + v11, v7.targetParameters[2] + v12, v7.targetParameters[3] + v13)
    setShaderParameter(v7.baseNode, "cv4", v11, v12, v13, 0, false)
  end
end
function Ropes.updateAdjusterNodes(v0, v1)
  for v8, v9 in pairs(v1) do
    if v9.rotationAxis ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L63
      local v11 = getRotation(v9.node)
      local v14 = math.min(1, ({}[v9.rotationAxis] - v9.rotationRange[1]) / (v9.rotationRange[2] - v9.rotationRange[1]))
      local v12 = math.max(...)
      local v13, v14, v15 = MathUtil.vector3ArrayLerp(v9.minTargetParameters, v9.maxTargetParameters, v12)
    else
      if not (v9.translationAxis ~= nil) then
        continue
      end
      if not (v9.translationRange ~= nil) then
        continue
      end
      v11 = getTranslation(v9.node)
      v14 = math.min(1, ({}[v9.translationAxis] - v9.translationRange[1]) / (v9.translationRange[2] - v9.translationRange[1]))
      v12 = math.max(...)
      v13, v14, v15 = MathUtil.vector3ArrayLerp(v9.minTargetParameters, v9.maxTargetParameters, v12)
    end
  end
  return v2, v3, v4
end
