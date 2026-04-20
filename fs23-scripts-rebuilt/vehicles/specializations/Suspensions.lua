-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Suspensions = {DEFAULT_MAX_UPDATE_DISTANCE = 40}
function Suspensions.prerequisitesPresent(v0)
  return true
end
function Suspensions.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Suspensions")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.suspensions.suspension(?)#node", "Suspension node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.suspensions.suspension(?)#useCharacterTorso", "Use character torso instead of node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.suspensions.suspension(?)#weight", "Weight in kg", 500)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.suspensions.suspension(?)#minRotation", "Min. rotation")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.suspensions.suspension(?)#maxRotation", "Max. rotation")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.suspensions.suspension(?)#startTranslationOffset", "Custom translation offset")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.suspensions.suspension(?)#minTranslation", "Min. translation")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.suspensions.suspension(?)#maxTranslation", "Max. translation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.suspensions.suspension(?)#maxVelocityDifference", "Max. velocity difference", 0.1)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, "vehicle.suspensions.suspension(?)#suspensionParametersX", "Suspension parameters X", "0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, "vehicle.suspensions.suspension(?)#suspensionParametersY", "Suspension parameters Y", "0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, "vehicle.suspensions.suspension(?)#suspensionParametersZ", "Suspension parameters Z", "0 0")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.suspensions.suspension(?)#inverseMovement", "Invert movement", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.suspensions.suspension(?)#serverOnly", "Suspension is only calculated on server side", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.suspensions#maxUpdateDistance", "Max. distance to vehicle root to update suspension nodes", Suspensions.DEFAULT_MAX_UPDATE_DISTANCE)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Suspensions.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getSuspensionNodeFromIndex", Suspensions.getSuspensionNodeFromIndex)
  SpecializationUtil.registerFunction(vehicleType, "getIsSuspensionNodeActive", Suspensions.getIsSuspensionNodeActive)
  SpecializationUtil.registerFunction(vehicleType, "setSuspensionNodeCharacter", Suspensions.setSuspensionNodeCharacter)
end
function Suspensions.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Suspensions)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Suspensions)
  SpecializationUtil.registerEventListener(vehicleType, "onEnterVehicle", Suspensions)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", Suspensions)
  SpecializationUtil.registerEventListener(vehicleType, "onVehicleCharacterChanged", Suspensions)
end
function Suspensions:onLoad(savegame)
  if self.isClient then
    self.spec_suspensions.suspensionNodes = {}
    while true do
      v4 = string.format("vehicle.suspensions.suspension(%d)", v3)
      v5 = v5:hasProperty(v4)
      if not v5 then
        break
      end
      v6 = v6:getValue(v4 .. "#node", nil, self.components, self.i3dMappings)
      if {node = v6, refNodeOffset = {0, 0, 0}}.node ~= nil then
        v6 = self:getParentComponent({node = v6, refNodeOffset = {0, 0, 0}}.node)
        if v6 ~= nil then
          v8 = localToLocal({node = v6, refNodeOffset = {0, 0, 0}, component = v6}.node, v6, 0, 0, 0)
        end
      end
      v6 = v6:getValue(v4 .. "#useCharacterTorso", false)
      v5.useCharacterTorso = v6
      if v5.node ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L98
      end
      if v5.useCharacterTorso then
        v6 = v6:getValue(v4 .. "#weight", 500)
        v5.weight = v6
        v6 = v6:getValue(v4 .. "#minRotation", nil, true)
        v5.minRotation = v6
        v6 = v6:getValue(v4 .. "#maxRotation", nil, true)
        v5.maxRotation = v6
        if v5.minRotation ~= nil and v5.maxRotation == nil then
        end
        v5.isRotational = v6
        if not v5.isRotational and not v5.useCharacterTorso then
          v7 = getTranslation(v5.node)
          v5.baseTranslation = {}
          v6 = v6:getValue(v4 .. "#startTranslationOffset", "0 0 0", true)
          v5.startTranslationOffset = v6
          v5.baseTranslation[1] = v5.baseTranslation[1] + v5.startTranslationOffset[1]
          v5.baseTranslation[2] = v5.baseTranslation[2] + v5.startTranslationOffset[2]
          v5.baseTranslation[3] = v5.baseTranslation[3] + v5.startTranslationOffset[3]
          v6 = v6:getValue(v4 .. "#minTranslation", nil, true)
          v5.minTranslation = v6
          v6 = v6:getValue(v4 .. "#maxTranslation", nil, true)
          v5.maxTranslation = v6
        end
        v6 = v6:getValue(v4 .. "#maxVelocityDifference", 0.1)
        v5.maxVelocityDifference = v6
        v6 = v6:getValue(v4 .. "#suspensionParametersX", "0 0", true)
        v7 = v7:getValue(v4 .. "#suspensionParametersY", "0 0", true)
        v8 = v8:getValue(v4 .. "#suspensionParametersZ", "0 0", true)
        v5.suspensionParameters = {[1] = {}, [2] = {}, [3] = {}}
        -- TODO: structure LOP_FORNPREP (pc 292, target 312)
        v5.suspensionParameters[1][1] = v6[1] * 1000
        v5.suspensionParameters[2][1] = v7[1] * 1000
        v5.suspensionParameters[3][1] = v8[1] * 1000
        -- TODO: structure LOP_FORNLOOP (pc 311, target 293)
        v9 = v9:getValue(v4 .. "#inverseMovement", false)
        v5.inverseMovement = v9
        v9 = v9:getValue(v4 .. "#serverOnly", false)
        v5.serverOnly = v9
        v5.lastRefNodePosition = nil
        v5.lastRefNodeVelocity = nil
        v5.curRotation = {0, 0, 0}
        v5.curRotationSpeed = {0, 0, 0}
        v5.curTranslation = {0, 0, 0}
        v5.curTranslationSpeed = {0, 0, 0}
        v5.curAcc = {0, 0, 0}
      end
      if v5.serverOnly then
        -- if not v0.isServer then goto L399 end
      end
      table.insert(v2.suspensionNodes, v5)
    end
    v4 = v4:getValue("vehicle.suspensions#maxUpdateDistance", Suspensions.DEFAULT_MAX_UPDATE_DISTANCE)
    v2.maxUpdateDistance = v4
    if 0 < #v2.suspensionNodes then
      v2.suspensionAvailable = true
    end
    if not Platform.gameplay.allowSuspensionNodes then
      v4 = v4:hasProperty("vehicle.suspensions")
      if v4 then
        Logging.xmlWarning(self.xmlFile, "Suspension nodes are not allowed on this platform")
        v2.suspensionAvailable = false
        v2.suspensionNodes = {}
      end
    end
  end
  if not self.spec_suspensions.suspensionAvailable then
    SpecializationUtil.removeEventListener(self, "onUpdate", Suspensions)
    SpecializationUtil.removeEventListener(self, "onEnterVehicle", Suspensions)
    SpecializationUtil.removeEventListener(self, "onLeaveVehicle", Suspensions)
    SpecializationUtil.removeEventListener(self, "onVehicleCharacterChanged", Suspensions)
  end
end
function Suspensions:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.currentUpdateDistance < self.spec_suspensions.maxUpdateDistance then
    for v10, v11 in ipairs(self.spec_suspensions.suspensionNodes) do
      if v11.node ~= nil then
        local v12 = entityExists(v11.node)
        -- if not v12 then goto L406 end
        v11.curAcc[1] = 0
        v11.curAcc[2] = 0
        v11.curAcc[3] = 0
        v12 = self:getIsSuspensionNodeActive(v11)
        if v12 then
          local v14 = unpack(v11.refNodeOffset)
          local v12, v13, v14 = localToWorld(...)
          if v11.lastRefNodePosition == nil then
            v11.lastRefNodePosition = {v12, v13, v14}
            v11.lastRefNodeVelocity = {0, 0, 0}
          end
          if v11.inverseMovement then
          else
          end
          local v19, v20, v21 = unpack(v11.lastRefNodeVelocity)
          local v23 = getParent(v11.node)
          local v22, v23, v24 = worldDirectionToLocal(v23, (v12 - v11.lastRefNodePosition[1]) / v6 * v15 - v19, (v13 - v11.lastRefNodePosition[2]) / v6 * v15 - v20, (v14 - v11.lastRefNodePosition[3]) / v6 * v15 - v21)
          local v25 = MathUtil.clamp(v22, -v11.maxVelocityDifference, v11.maxVelocityDifference)
          v25 = MathUtil.clamp(v23, -v11.maxVelocityDifference, v11.maxVelocityDifference)
          v25 = MathUtil.clamp(v24, -v11.maxVelocityDifference, v11.maxVelocityDifference)
          if v11.isRotational then
            if v11.useCharacterTorso then
              local v28, v29, v30 = MathUtil.crossProduct(v25 / v6, v25 / v6, v25 / v6, 1, 0, 0)
              v11.curAcc[1] = v28
              v11.curAcc[2] = v29
              v11.curAcc[3] = v30
              -- goto L208  (LOP_JUMP +34)
            end
            v28, v29, v30 = MathUtil.crossProduct(v22 / v6, v23 / v6, v24 / v6, 0, 1, 0)
            v11.curAcc[1] = v28
            v11.curAcc[2] = v29
            v11.curAcc[3] = v30
          else
            v11.curAcc[1] = -v25 / v6
            v11.curAcc[2] = -v25 / v6
            v11.curAcc[3] = -v25 / v6
          end
          v11.lastRefNodePosition[1] = v12
          v11.lastRefNodePosition[2] = v13
          v11.lastRefNodePosition[3] = v14
          v11.lastRefNodeVelocity[1] = v16
          v11.lastRefNodeVelocity[2] = v17
          v11.lastRefNodeVelocity[3] = v18
        end
        -- TODO: structure LOP_FORNPREP (pc 229, target 352)
        if 0 < v11.suspensionParameters[1][1] and 0 < v11.suspensionParameters[1][2] then
          if v11.isRotational then
            local v27 = MathUtil.clamp(v11.curRotation[1] + (v11.curRotationSpeed[1] + v6 * (v11.weight * v11.curAcc[1] - v11.suspensionParameters[1][1] * v11.curRotation[1] - v11.suspensionParameters[1][2] * v11.curRotationSpeed[1] + v6 * -v11.suspensionParameters[1][1] * v11.curRotationSpeed[1]) / v11.weight / (1 - (-v11.suspensionParameters[1][2] + v6 * -v11.suspensionParameters[1][1]) * v6 / v11.weight)) * v6, v11.minRotation[1], v11.maxRotation[1])
            v11.curRotationSpeed[1] = (v27 - v11.curRotation[1]) / v6
            v11.curRotation[1] = v27
          else
            v27 = MathUtil.clamp(v11.curTranslation[1] + (v11.curTranslationSpeed[1] + v6 * (v11.weight * v11.curAcc[1] - v11.suspensionParameters[1][1] * v11.curTranslation[1] - v11.suspensionParameters[1][2] * v11.curTranslationSpeed[1] + v6 * -v11.suspensionParameters[1][1] * v11.curTranslationSpeed[1]) / v11.weight / (1 - (-v11.suspensionParameters[1][2] + v6 * -v11.suspensionParameters[1][1]) * v6 / v11.weight)) * v6, v11.minTranslation[1], v11.maxTranslation[1])
            v11.curTranslationSpeed[1] = (v27 - v11.curTranslation[1]) / v6
            v11.curTranslation[1] = v27
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 351, target 230)
        if v11.isRotational then
          setRotation(v11.node, v11.curRotation[1], v11.curRotation[2], v11.curRotation[3])
        else
          setTranslation(v11.node, v11.baseTranslation[1] + v11.curTranslation[1], v11.baseTranslation[2] + v11.curTranslation[2], v11.baseTranslation[3] + v11.curTranslation[3])
        end
        if not (self.setMovingToolDirty ~= nil) then
          continue
        end
        self:setMovingToolDirty(v11.node)
      else
        if not (v11.node ~= nil) then
          continue
        end
        Logging.xmlError(self.xmlFile, "Failed to update suspension node %d. Node does not exist anymore!", v11.node)
        v11.node = nil
      end
    end
  end
end
function Suspensions:getSuspensionNodeFromIndex(suspensionIndex)
  if self.spec_suspensions.suspensionAvailable then
    return self.spec_suspensions.suspensionNodes[suspensionIndex]
  end
end
function Suspensions.getIsSuspensionNodeActive(v0, v1)
  if v1.node ~= nil and v1.component == nil then
  end
  return v2
end
function Suspensions:setSuspensionNodeCharacter(suspensionNode, character)
  if suspensionNode.useCharacterTorso then
    suspensionNode.node = character.thirdPersonSuspensionNode
    if suspensionNode.node ~= nil then
      local v3 = self:getParentComponent(suspensionNode.node)
      if v3 ~= nil then
        local v5 = localToLocal(character.characterNode, v3, 0, 0, 0)
        suspensionNode.refNodeOffset = {}
        suspensionNode.component = v3
      end
    end
  end
end
function Suspensions:onEnterVehicle(isControlling)
  if self.getVehicleCharacter ~= nil then
    local vehicleCharacter = self:getVehicleCharacter()
    if vehicleCharacter ~= nil then
      for v7, v8 in ipairs(self.spec_suspensions.suspensionNodes) do
        self:setSuspensionNodeCharacter(v8, vehicleCharacter)
      end
    end
  end
end
function Suspensions:onLeaveVehicle()
  for v5, v6 in ipairs(self.spec_suspensions.suspensionNodes) do
    if not v6.useCharacterTorso then
      continue
    end
    v6.node = nil
  end
end
function Suspensions:onVehicleCharacterChanged(character)
  for v6, v7 in ipairs(self.spec_suspensions.suspensionNodes) do
    self:setSuspensionNodeCharacter(v7, character)
  end
end
function Suspensions:getSuspensionModfier()
  if 2 <= #self.spec_suspensions.suspensionNodes and not self.spec_suspensions.suspensionNodes[2].useCharacterTorso and not self.spec_suspensions.suspensionNodes[2].isRotational then
  end
  if v1.suspensionNodes[v2] ~= nil and not v1.suspensionNodes[v2].isRotational then
    return v1.suspensionNodes[v2].curTranslation[2]
  end
  return 0
end
v0:registerModifierType("SUSPENSION", Suspensions.getSuspensionModfier)
