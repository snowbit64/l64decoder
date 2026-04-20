-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TipOccluder = {}
function TipOccluder.prerequisitesPresent(v0)
  return true
end
function TipOccluder.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("TipOccluder")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tipOccluder.occlusionArea(?)#start", "Start node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tipOccluder.occlusionArea(?)#width", "Width node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tipOccluder.occlusionArea(?)#height", "Height node")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function TipOccluder.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getTipOcclusionAreas", TipOccluder.getTipOcclusionAreas)
  SpecializationUtil.registerFunction(vehicleType, "getWheelsWithTipOcclisionAreaGroupId", TipOccluder.getWheelsWithTipOcclisionAreaGroupId)
  SpecializationUtil.registerFunction(vehicleType, "getRequiresTipOcclusionArea", TipOccluder.getRequiresTipOcclusionArea)
end
function TipOccluder.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "finalizeWheel", TipOccluder.finalizeWheel)
end
function TipOccluder.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", TipOccluder)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", TipOccluder)
end
function TipOccluder:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.tipOcclusionAreas.tipOcclusionArea", "vehicle.tipOccluder.occlusionArea")
  self.spec_tipOccluder.tipOcclusionAreas = {}
  while true do
    v4 = string.format("vehicle.tipOccluder.occlusionArea(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = v6:getValue(v4 .. "#start", nil, self.components, self.i3dMappings)
    v6 = v6:getValue(v4 .. "#width", nil, self.components, self.i3dMappings)
    v6 = v6:getValue(v4 .. "#height", nil, self.components, self.i3dMappings)
    if {start = v6, width = v6, height = v6}.start ~= nil and {start = v6, width = v6, height = v6}.width ~= nil and {start = v6, width = v6, height = v6}.height ~= nil then
      table.insert(v2.tipOcclusionAreas, {start = v6, width = v6, height = v6})
    end
  end
  v2.createdTipOcclusionAreaGroupIds = {}
end
function TipOccluder:getTipOcclusionAreas()
  return self.spec_tipOccluder.tipOcclusionAreas
end
function TipOccluder.getWheelsWithTipOcclisionAreaGroupId(v0, v1, v2)
  for v7, v8 in pairs(v1) do
    if not (v8.tipOcclusionAreaGroupId == v2) then
      continue
    end
    table.insert(v3, v8)
  end
  return v3
end
function TipOccluder:onPostLoad()
  local v1 = self:getRequiresTipOcclusionArea()
  if v1 and #self.spec_tipOccluder.tipOcclusionAreas == 0 then
    Logging.xmlDevWarning(self.xmlFile, "No TipOcclusionArea defined")
  end
end
function TipOccluder.getRequiresTipOcclusionArea(v0)
  return false
end
function TipOccluder:finalizeWheel(superFunc, wheel, parentWheel)
  superFunc(self, wheel, parentWheel)
  if wheel.tipOcclusionAreaGroupId ~= nil then
    for v11, v12 in pairs(self.spec_tipOccluder.createdTipOcclusionAreaGroupIds) do
      if not (v11 == wheel.tipOcclusionAreaGroupId) then
        continue
      end
      break
    end
    if v6 then
      v9 = string.format("tipOcclusionAreaGroupId%d", wheel.tipOcclusionAreaGroupId)
      v8 = createTransformGroup(...)
      v10 = string.format("tipOcclusionAreaGroupId%d", wheel.tipOcclusionAreaGroupId)
      v9 = createTransformGroup(...)
      v11 = string.format("tipOcclusionAreaGroupId%d", wheel.tipOcclusionAreaGroupId)
      v10 = createTransformGroup(...)
      link(v5, v8)
      link(v5, v9)
      link(v5, v10)
      table.insert(v4.tipOcclusionAreas, {start = v8, width = v9, height = v10})
      v4.createdTipOcclusionAreaGroupIds[wheel.tipOcclusionAreaGroupId] = {start = v8, width = v9, height = v10}
    end
    if v7 ~= nil then
      local v14 = self:getWheels()
      v12 = self:getWheelsWithTipOcclisionAreaGroupId(v14, wheel.tipOcclusionAreaGroupId)
      table.insert(v12, wheel)
      link(v12[#v12].node, v7.start)
      link(v12[#v12].node, v7.width)
      link(v12[#v12].node, v7.height)
      for v17, v18 in pairs(v12) do
        local v19, v20, v21 = localToLocal(v18.driveNode, v13, v18.wheelShapeWidth - 0.5 * v18.width, 0, -v18.radius)
        local v22 = math.max(v19, v8)
        v22 = math.min(v21, v11)
        local v22, v23, v24 = localToLocal(v18.driveNode, v13, -v18.wheelShapeWidth + 0.5 * v18.width, 0, v18.radius)
        v22 = math.min(v22, v9)
        v22 = math.max(v24, v10)
      end
      setTranslation(v7.start, v8, 0, v11)
      setTranslation(v7.width, v9, 0, v11)
      setTranslation(v7.height, v8, 0, v10)
    end
  end
end
