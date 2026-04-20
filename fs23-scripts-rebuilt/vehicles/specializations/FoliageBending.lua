-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FoliageBending = {}
function FoliageBending.prerequisitesPresent(v0)
  return true
end
function FoliageBending.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("FoliageBending")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.foliageBending.bendingNode(?)#node", "Bending node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.foliageBending.bendingNode(?)#minX", "Min. width")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.foliageBending.bendingNode(?)#maxX", "Max. width")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.foliageBending.bendingNode(?)#minZ", "Min. length")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.foliageBending.bendingNode(?)#maxZ", "Max. length")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.foliageBending.bendingNode(?)#yOffset", "Y translation offset")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function FoliageBending.postInitSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("FoliageBending")
  local v2 = v2:getConfigurations()
  for v4, v5 in pairs(...) do
    local v6 = v6:getConfigurationAttribute(v4, "xmlKey")
    if v6 ~= nil then
    else
    end
    local v7 = string.format("vehicle%s.%sConfigurations.%sConfiguration(?)", v6, v4, v4)
    v0:setXMLSharedRegistration("foliageBendingModifier", v7)
    v0:register(XMLValueType.INT, v7 .. ".foliageBendingModifier(?)#index", "Bending node index")
    v0:register(XMLValueType.VECTOR_N, v7 .. ".foliageBendingModifier(?)#indices", "Bending node indices")
    v0:register(XMLValueType.FLOAT, v7 .. ".foliageBendingModifier(?)#minX", "Min. width")
    v0:register(XMLValueType.FLOAT, v7 .. ".foliageBendingModifier(?)#maxX", "Max. width")
    v0:register(XMLValueType.FLOAT, v7 .. ".foliageBendingModifier(?)#minZ", "Min. length")
    v0:register(XMLValueType.FLOAT, v7 .. ".foliageBendingModifier(?)#maxZ", "Max. length")
    v0:register(XMLValueType.FLOAT, v7 .. ".foliageBendingModifier(?)#yOffset", "Y translation offset")
    v0:register(XMLValueType.BOOL, v7 .. ".foliageBendingModifier(?)#isActive", "Bending node is active", true)
    v0:register(XMLValueType.BOOL, v7 .. ".foliageBendingModifier(?)#overwrite", "Overwrite the bending node values and do not use the max values", true)
    v0:setXMLSharedRegistration()
  end
  v0:setXMLSpecializationType()
end
function FoliageBending.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadBendingNodeFromXML", FoliageBending.loadBendingNodeFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadBendingNodeModifierFromXML", FoliageBending.loadBendingNodeModifierFromXML)
  SpecializationUtil.registerFunction(vehicleType, "activateBendingNodes", FoliageBending.activateBendingNodes)
  SpecializationUtil.registerFunction(vehicleType, "deactivateBendingNodes", FoliageBending.deactivateBendingNodes)
  SpecializationUtil.registerFunction(vehicleType, "getFoliageBendingNodeByIndex", FoliageBending.getFoliageBendingNodeByIndex)
  SpecializationUtil.registerFunction(vehicleType, "updateFoliageBendingAttributes", FoliageBending.updateFoliageBendingAttributes)
end
function FoliageBending.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", FoliageBending)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", FoliageBending)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", FoliageBending)
  SpecializationUtil.registerEventListener(vehicleType, "onActivate", FoliageBending)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", FoliageBending)
end
function FoliageBending:onLoad(savegame)
  self.spec_foliageBending.bendingNodes = {}
  while true do
    v4 = string.format("vehicle.foliageBending.bendingNode(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadBendingNodeFromXML(self.xmlFile, v4, {})
    if v6 then
      table.insert(v2.bendingNodes, {})
    end
  end
end
function FoliageBending:onPostLoad(savegame)
  local v4 = v4:getConfigurations()
  for v6, v7 in pairs(...) do
    local v8 = v8:getConfigurationAttribute(v6, "xmlKey")
    if v8 ~= nil then
    else
    end
    while true do
      v10 = string.format("vehicle%s.%sConfigurations.%sConfiguration(%d)", v8, v6, v6, v9)
      v11 = v11:hasProperty(v10)
      if not v11 then
        break
      end
      if self.configurations[v6] ~= nil and self.configurations[v6] == v9 + 1 then
        while true do
          v12 = string.format("%s.foliageBendingModifier(%d)", v10, v11)
          v13 = v13:hasProperty(v12)
          if not v13 then
            break
          end
          self:loadBendingNodeModifierFromXML(self.xmlFile, v12)
        end
      end
    end
  end
  if v2.bendingModifiers ~= nil then
    for v6, v7 in ipairs(v2.bendingModifiers) do
      -- TODO: structure LOP_FORNPREP (pc 93, target 228)
      if v2.bendingNodes[v7.indices[1]] ~= nil then
        if v7.overwrite then
          if not v7.minX then
          end
          v12.minX = v13
          if not v7.maxX then
          end
          v12.maxX = v13
          if not v7.minZ then
          end
          v12.minZ = v13
          if not v7.maxZ then
          end
          v12.maxZ = v13
          if not v7.yOffset then
          end
          v12.yOffset = v13
        else
          if not v7.minX then
          end
          v13 = math.min(v14, v15)
          v12.minX = v13
          if not v7.maxX then
          end
          v13 = math.max(v14, v15)
          v12.maxX = v13
          if not v7.minZ then
          end
          v13 = math.min(v14, v15)
          v12.minZ = v13
          if not v7.maxZ then
          end
          v13 = math.max(v14, v15)
          v12.maxZ = v13
          if not v7.yOffset then
          end
          v13 = math.max(v14, v15)
          v12.yOffset = v13
        end
        -- if v7.isActive then goto L227 end
        v12.isActive = false
      else
        Logging.xmlWarning(self.xmlFile, "Undefined bendingNode index '%d' for bending modifier '%s'!", v7.indices[1], v7.key)
      end
      -- TODO: structure LOP_FORNLOOP (pc 227, target 94)
    end
    v2.bendingModifiers = nil
  end
end
function FoliageBending:onDelete()
  self:deactivateBendingNodes()
end
function FoliageBending:loadBendingNodeFromXML(xmlFile, key, bendingNode)
  local v4 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if v4 == nil then
  end
  bendingNode.node = v4
  bendingNode.key = key
  local v5 = xmlFile:getValue(key .. "#minX", -1)
  bendingNode.minX = v5
  v5 = xmlFile:getValue(key .. "#maxX", 1)
  bendingNode.maxX = v5
  v5 = xmlFile:getValue(key .. "#minZ", -1)
  bendingNode.minZ = v5
  v5 = xmlFile:getValue(key .. "#maxZ", 1)
  bendingNode.maxZ = v5
  v5 = xmlFile:getValue(key .. "#yOffset", 0)
  bendingNode.yOffset = v5
  bendingNode.isActive = true
  return true
end
function FoliageBending:loadBendingNodeModifierFromXML(xmlFile, key)
  local v4 = xmlFile:getValue(key .. "#index")
  v4 = xmlFile:getValue(key .. "#indices", nil, true)
  if {index = v4, indices = v4}.index == nil and {index = v4, indices = v4}.indices == nil then
    Logging.xmlWarning(self.xmlFile, "Missing bending node index for bending modifier '%s'", key)
    return
  end
  if v3.index ~= nil then
    table.insert(v3.indices, v3.index)
  end
  v4 = xmlFile:getValue(key .. "#minX")
  v3.minX = v4
  v4 = xmlFile:getValue(key .. "#maxX")
  v3.maxX = v4
  v4 = xmlFile:getValue(key .. "#minZ")
  v3.minZ = v4
  v4 = xmlFile:getValue(key .. "#maxZ")
  v3.maxZ = v4
  v4 = xmlFile:getValue(key .. "#yOffset")
  v3.yOffset = v4
  v4 = xmlFile:getValue(key .. "#isActive", true)
  v3.isActive = v4
  v4 = xmlFile:getValue(key .. "#overwrite", true)
  v3.overwrite = v4
  if self.spec_foliageBending.bendingModifiers == nil then
    self.spec_foliageBending.bendingModifiers = {}
  end
  table.insert(v4.bendingModifiers, v3)
end
function FoliageBending:activateBendingNodes()
  for v5, v6 in ipairs(self.spec_foliageBending.bendingNodes) do
    if not v6.isActive then
      continue
    end
    if not (v6.id == nil) then
      continue
    end
    if not g_currentMission.foliageBendingSystem then
      continue
    end
    local v7 = v7:createRectangle(v6.minX, v6.maxX, v6.minZ, v6.maxZ, v6.yOffset, v6.node)
    v6.id = v7
  end
end
function FoliageBending:deactivateBendingNodes()
  if self.spec_foliageBending.bendingNodes ~= nil then
    for v5, v6 in ipairs(self.spec_foliageBending.bendingNodes) do
      if not (v6.id ~= nil) then
        continue
      end
      v7:destroyObject(v6.id)
      v6.id = nil
    end
  end
end
function FoliageBending:getFoliageBendingNodeByIndex(index)
  return self.spec_foliageBending.bendingNodes[index]
end
function FoliageBending:updateFoliageBendingAttributes(index)
  local bendingNode = self:getFoliageBendingNodeByIndex(index)
  if bendingNode ~= nil and bendingNode.id ~= nil then
    v3:setRectangleAttributes(bendingNode.id, bendingNode.minX, bendingNode.maxX, bendingNode.minZ, bendingNode.maxZ, bendingNode.yOffset)
  end
end
function FoliageBending:onActivate()
  self:activateBendingNodes()
end
function FoliageBending:onDeactivate()
  self:deactivateBendingNodes()
end
