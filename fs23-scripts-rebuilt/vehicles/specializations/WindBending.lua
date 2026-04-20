-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WindBending = {}
function WindBending.prerequisitesPresent(v0)
  return true
end
function WindBending.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("WindBending")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.windBending.windBendingNodes.windBendingNode(?)#node", "Shader node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.windBending.windBendingNodes.windBendingNode(?)#decalNode", "Extra node that gets the exact same shader parameters")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.windBending.windBendingNodes.windBendingNode(?)#speedReferenceNode", "Reference node to calculate speed of wind")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.windBending.windBendingNodes.windBendingNode(?)#maxBending", "Bending in meters", 0.15)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.windBending.windBendingNodes.windBendingNode(?)#maxBendingNeg", "Negative bending in meters (used if the vehicle drives in reverse)", "same as #maxBending")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.windBending.windBendingNodes.windBendingNode(?)#maxBendingSpeed", "Speed at which max bending state is reached in kmph", 20)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function WindBending.registerFunctions(v0)
end
function WindBending.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", WindBending)
  SpecializationUtil.registerEventListener(v0, "onUpdate", WindBending)
end
function WindBending:onLoad(v1)
  if self.isClient then
    self.spec_windBending.windBending = {}
    v3:iterate("vehicle.windBending.windBendingNodes.windBendingNode", function(self, v1)
      local v3 = v3:getValue(v1 .. "#node", nil, u0.components, u0.i3dMappings)
      if {node = v3}.node ~= nil then
        v3 = getHasClassId({node = v3}.node, ClassIds.SHAPE)
        if v3 then
          v3 = getHasShaderParameter({node = v3}.node, "directionBend")
          if v3 then
            v3 = v3:getValue(v1 .. "#speedReferenceNode", {node = v3}.node, u0.components, u0.i3dMappings)
            v3 = v3:getParentComponent({node = v3, speedReferenceNode = v3}.speedReferenceNode)
            v3 = v3:getValue(v1 .. "#maxBending", 0.15)
            v3 = v3:getValue(v1 .. "#maxBendingNeg", {node = v3, speedReferenceNode = v3, parentComponent = v3, maxBending = v3}.maxBending)
            v3 = v3:getValue(v1 .. "#maxBendingSpeed", 20)
            v3 = v3:getValue(v1 .. "#decalNode", nil, u0.components, u0.i3dMappings)
            table.insert(u1.windBending, {node = v3, speedReferenceNode = v3, parentComponent = v3, maxBending = v3, maxBendingNeg = v3, maxBendingSpeed = v3, decalNode = v3, lastPosition = nil})
            return
          end
        end
        Logging.xmlError(u0.xmlFile, "Unable to load wind bending node from xml. Node has not shader parameter 'directionBend'. '%s'", v1)
        return
      end
      Logging.xmlError(u0.xmlFile, "Unable to load wind bending node from xml. Node not found. '%s'", v1)
    end)
  end
  if self.isClient then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000006 -> L33
  end
  SpecializationUtil.removeEventListener(self, "onUpdate", WindBending)
end
function WindBending:onUpdate(v1, v2, v3, v4)
  local v6 = self:getLastSpeed()
  -- TODO: structure LOP_FORNPREP (pc 10, target 135)
  local v11, v12, v13 = localToWorld(self.spec_windBending.windBending[1].speedReferenceNode, 0, 0, 0)
  if self.spec_windBending.windBending[1].lastPosition == nil then
    self.spec_windBending.windBending[1].lastPosition = {v11, v12, v13}
  end
  if (v11 - v10.lastPosition[1]) * 10 == 0 and (v12 - v10.lastPosition[2]) * 10 == 0 then
    -- cmp-jump LOP_JUMPXEQKN R16 aux=0x8 -> L125
  end
  local v18 = getParent(v10.node)
  local v17, v18, v19 = worldDirectionToLocal(v18, v14, v15, v16)
  v17, v18, v19 = MathUtil.vector3Normalize(v17, v18, v19)
  if 0 <= self.movingDirection then
    -- if v10.maxBending then goto L89 end
  end
  v19:setPrevShaderParameter(v10.node, "directionBend", v14, v15, v16, v10.maxBendingNeg * v6 / v10.maxBendingSpeed, false, "prevDirectionBend")
  if v10.decalNode ~= nil then
    v19:setPrevShaderParameter(v10.decalNode, "directionBend", v14, v15, v16, v10.maxBendingNeg * v6 / v10.maxBendingSpeed, false, "prevDirectionBend")
  end
  v10.lastPosition[1] = v11
  v10.lastPosition[2] = v12
  v10.lastPosition[3] = v13
  -- TODO: structure LOP_FORNLOOP (pc 134, target 11)
end
