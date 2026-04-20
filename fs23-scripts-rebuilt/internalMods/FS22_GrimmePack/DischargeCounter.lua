-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DischargeCounter = {}
function DischargeCounter.prerequisitesPresent(specializations)
  return SpecializationUtil.hasSpecialization(Dischargeable, specializations)
end
function DischargeCounter.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("DischargeCounter")
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.dischargeable.dischargeNode(?).dashboards", "dischargeCounter | targetFilled | targetFilling")
  Vehicle.xmlSchema:setXMLSpecializationType()
  local v5 = string.format("vehicles.vehicle(?).%s.dischargeNode(?)#dischargeCounter", u0)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, v5, "dischargeCounter")
end
function DischargeCounter.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDischargeNode", DischargeCounter.loadDischargeNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischarge", DischargeCounter.handleDischarge)
end
function DischargeCounter.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", DischargeCounter)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", DischargeCounter)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", DischargeCounter)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", DischargeCounter)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", DischargeCounter)
end
function DischargeCounter:onPostLoad(savegame)
  if savegame ~= nil and not savegame.resetVehicles then
    for v6, v7 in ipairs(self.spec_dischargeable.dischargeNodes) do
      local v9 = v9:getValue(savegame.key .. "." .. u0 .. ".dischargeNode(" .. v6 - 1 .. ")#dischargeCounter")
      local v8 = Utils.getNoNil(v9, v7.dischargeCounter)
      v7.dischargeCounter = v8
    end
  end
end
function DischargeCounter:saveToXMLFile(xmlFile, key, usedModNames)
  for v8, v9 in ipairs(self.spec_dischargeable.dischargeNodes) do
    xmlFile:setValue(key .. ".dischargeNode(" .. v8 - 1 .. ")#dischargeCounter", v9.dischargeCounter)
  end
end
function DischargeCounter:onReadStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_dischargeable.dischargeNodes) do
    local v9 = streamReadFloat32(streamId)
    v8.dischargeCounter = v9
  end
end
function DischargeCounter:onWriteStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_dischargeable.dischargeNodes) do
    streamWriteFloat32(streamId, v8.dischargeCounter or 0)
  end
end
function DischargeCounter:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      for v8, v9 in ipairs(self.spec_dischargeable.dischargeNodes) do
        local v10 = streamReadFloat32(streamId)
        v9.dischargeCounter = v10
      end
    end
  end
end
function DischargeCounter:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_dischargeable.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      for v8, v9 in ipairs(v4.dischargeNodes) do
        streamWriteFloat32(streamId, v9.dischargeCounter or 0)
      end
    end
  end
end
function DischargeCounter:loadDischargeNode(superFunc, xmlFile, key, entry)
  local v5 = superFunc(self, xmlFile, key, entry)
  if not v5 then
    return false
  end
  entry.dischargeCounter = 0
  entry.targetFilled = false
  entry.targetIsFilledFunc = function()
    if u0.dischargeObject ~= nil and u0.dischargeObject.getFillUnitFreeCapacity ~= nil then
      local xmlFile = xmlFile:getFillUnitFreeCapacity(u0.dischargeFillUnitIndex)
      if xmlFile ~= 0 then
      end
      self.targetFilled = true
    end
    return u0.targetFilled
  end
  entry.targetIsFillingFunc = function()
    local superFunc = u0.targetIsFilledFunc()
    return not superFunc
  end
  if self.loadDashboardsFromXML ~= nil then
    self:loadDashboardsFromXML(self.xmlFile, key .. ".dashboards", {valueTypeToLoad = "dischargeCounter", valueObject = entry, valueFunc = "dischargeCounter"})
    self:loadDashboardsFromXML(self.xmlFile, key .. ".dashboards", {valueTypeToLoad = "targetFilled", valueObject = entry, valueFunc = "targetIsFilledFunc"})
    self:loadDashboardsFromXML(self.xmlFile, key .. ".dashboards", {valueTypeToLoad = "targetFilling", valueObject = entry, valueFunc = "targetIsFillingFunc"})
  end
  return true
end
function DischargeCounter:handleDischarge(superFunc, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
  superFunc(self, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
  dischargeNode.dischargeCounter = dischargeNode.dischargeCounter - dischargedLiters
  if self.spec_dashboard ~= nil then
    self:updateDashboards(self.spec_dashboard.dashboards, 9999, true)
  end
  self:raiseDirtyFlags(self.spec_dischargeable.dirtyFlag)
end
