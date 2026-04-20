-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TensionBeltObject = {}
function TensionBeltObject.prerequisitesPresent(v0)
  return true
end
function TensionBeltObject.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("TensionBeltObject")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.tensionBeltObject#supportsTensionBelts", "Supports tension belts", true)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBeltObject.meshNodes.meshNode(?)#node", "Mesh node for tension belt calculation")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function TensionBeltObject.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getSupportsTensionBelts", TensionBeltObject.getSupportsTensionBelts)
  SpecializationUtil.registerFunction(vehicleType, "getMeshNodes", TensionBeltObject.getMeshNodes)
  SpecializationUtil.registerFunction(vehicleType, "getTensionBeltNodeId", TensionBeltObject.getTensionBeltNodeId)
end
function TensionBeltObject.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", TensionBeltObject)
end
function TensionBeltObject:onLoad(savegame)
  local v3 = v3:getValue("vehicle.tensionBeltObject#supportsTensionBelts", true)
  self.spec_tensionBeltObject.supportsTensionBelts = v3
  self.spec_tensionBeltObject.meshNodes = {}
  while true do
    v4 = string.format("vehicle.tensionBeltObject.meshNodes.meshNode(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v5 = v5:getValue(v4 .. "#node", nil, self.components, self.i3dMappings)
    if v5 ~= nil then
      v6 = getShapeIsCPUMesh(v5)
      if not v6 then
        v9 = v9:getString(v4 .. "#node")
        v10 = I3DUtil.getNodePath(v5)
        Logging.xmlWarning(...)
      end
      table.insert(v2.meshNodes, v5)
    end
  end
end
function TensionBeltObject:getSupportsTensionBelts()
  return self.spec_tensionBeltObject.supportsTensionBelts
end
function TensionBeltObject:getMeshNodes()
  return self.spec_tensionBeltObject.meshNodes
end
function TensionBeltObject:getTensionBeltNodeId()
  return self.components[1].node
end
