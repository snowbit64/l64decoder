-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDischargeable = {}
function AIDischargeable.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Dischargeable, v0)
end
function AIDischargeable.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Dischargeable")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.dischargeable.dischargeNode(?)#allowAIDischarge", "Allows ai discharge", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.dischargeable.dischargeableConfigurations.dischargeableConfiguration(?).dischargeNode(?)#allowAIDischarge", "Allows ai discharge", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function AIDischargeable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getAIDischargeNodes", AIDischargeable.getAIDischargeNodes)
  SpecializationUtil.registerFunction(vehicleType, "getAIDischargeNodeZAlignedOffset", AIDischargeable.getAIDischargeNodeZAlignedOffset)
  SpecializationUtil.registerFunction(vehicleType, "getAICanStartDischarge", AIDischargeable.getAICanStartDischarge)
  SpecializationUtil.registerFunction(vehicleType, "startAIDischarge", AIDischargeable.startAIDischarge)
  SpecializationUtil.registerFunction(vehicleType, "stoppedAIDischarge", AIDischargeable.stoppedAIDischarge)
  SpecializationUtil.registerFunction(vehicleType, "finishedAIDischarge", AIDischargeable.finishedAIDischarge)
  SpecializationUtil.registerFunction(vehicleType, "getAIHasFinishedDischarge", AIDischargeable.getAIHasFinishedDischarge)
end
function AIDischargeable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDischargeNode", AIDischargeable.loadDischargeNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDischargeNodeAutomaticDischarge", AIDischargeable.getDischargeNodeAutomaticDischarge)
end
function AIDischargeable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoad", AIDischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AIDischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", AIDischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AIDischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onDischargeStateChanged", AIDischargeable)
end
function AIDischargeable:onPreLoad()
  self.spec_aiDischargeable.aiDischargeNodes = {}
end
function AIDischargeable:onLoad()
  self.spec_aiDischargeable.currentDischargeNode = nil
end
function AIDischargeable:onPostLoad()
  if self.spec_aiDischargeable.aiDischargeNodes ~= nil then
    for v5, v6 in ipairs(self.spec_aiDischargeable.aiDischargeNodes) do
      v6.inputAttacherJointOffsets = {}
      if self.getInputAttacherJoints ~= nil then
        local v8 = self:getInputAttacherJoints()
        for v10, v11 in ipairs(...) do
          local v12, v13, v14 = localToLocal(v6.node, v11.node, 0, 0, 0)
          table.insert(v6.inputAttacherJointOffsets, {v12, v13, v14})
        end
      end
      if not (self.getAIRootNode ~= nil) then
        continue
      end
      v7 = self:getAIRootNode()
      v9 = localToLocal(v6.node, v7, 0, 0, 0)
      v6.aiRootNodeOffsets = {}
    end
  end
end
function AIDischargeable:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_aiDischargeable.currentDischargeNode ~= nil and not self.spec_aiDischargeable.isAIDischargeRunning then
    local v6 = self:getAIHasFinishedDischarge(self.spec_aiDischargeable.currentDischargeNode)
    if v6 then
      self:finishedAIDischarge()
    end
  end
end
function AIDischargeable:loadDischargeNode(superFunc, xmlFile, key, entry)
  local v5 = superFunc(self, xmlFile, key, entry)
  if not v5 then
    return false
  end
  v5 = xmlFile:getValue(key .. "#allowAIDischarge", false)
  entry.allowAIDischarge = v5
  if entry.allowAIDischarge then
    for v10, v11 in ipairs(self.spec_aiDischargeable.aiDischargeNodes) do
      if not (v11.fillUnitIndex == entry.fillUnitIndex) then
        continue
      end
      break
    end
    if not v6 then
      table.insert(v5.aiDischargeNodes, entry)
    else
      Logging.xmlWarning(xmlFile, "Discharge node fill unit index already used for AI. Discharge node will be ignored for '%s'", key)
    end
  end
  return true
end
function AIDischargeable:getDischargeNodeAutomaticDischarge(v1, v2)
  if Platform.gameplay.automaticDischarge then
    local v3 = self:getIsAIActive()
    if v3 then
      return false
    end
  end
  v3 = v1(self, v2)
  return v3
end
function AIDischargeable:onDischargeStateChanged(state)
  if self.spec_aiDischargeable.currentDischargeNode ~= nil and self.spec_aiDischargeable.isAIDischargeRunning and state == Dischargeable.DISCHARGE_STATE_OFF then
    self:stoppedAIDischarge()
  end
end
function AIDischargeable:getAIDischargeNodes()
  return self.spec_aiDischargeable.aiDischargeNodes
end
function AIDischargeable:getAIDischargeNodeZAlignedOffset(dischargeNode, targetVehicle)
  if targetVehicle == self then
    return dischargeNode.aiRootNodeOffsets[1], dischargeNode.aiRootNodeOffsets[2], dischargeNode.aiRootNodeOffsets[3]
  end
  local index = self:getActiveInputAttacherJointDescIndex()
  local v9 = self:getAttacherVehicle()
  while targetVehicle ~= v9 do
    local v10 = v9:getAttacherJointDescFromObject(v8)
    local v11 = v9:getActiveInputAttacherJointDescIndex()
    local v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24 = unpack(v10.inputAttacherJointOffsets[v11])
    local v28 = v9:getAttacherVehicle()
  end
  v10 = targetVehicle:getAttacherJointDescFromObject(v8)
  local v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23 = unpack(v10.aiRootNodeOffset)
  return v12 + v21 * v5 + v18 * v6 + v15 * v7, v13 + v22 * v5 + v19 * v6 + v16 * v7, v14 + v23 * v5 + v20 * v6 + v17 * v7
end
function AIDischargeable:getAICanStartDischarge(dischargeNode)
  return self:getCanDischargeToObject(dischargeNode)
end
function AIDischargeable:startAIDischarge(dischargeNode, task)
  self.spec_aiDischargeable.currentDischargeNode = dischargeNode
  self.spec_aiDischargeable.task = task
  self.spec_aiDischargeable.isAIDischargeRunning = true
  self:setDischargeState(Dischargeable.DISCHARGE_STATE_OBJECT)
end
function AIDischargeable:stoppedAIDischarge()
  self.spec_aiDischargeable.isAIDischargeRunning = false
end
function AIDischargeable:finishedAIDischarge()
  if self.spec_aiDischargeable.task ~= nil then
    v2:finishedDischarge()
  end
  v1.currentDischargeNode = nil
  v1.task = nil
end
function AIDischargeable.getAIHasFinishedDischarge(v0, v1)
  return true
end
