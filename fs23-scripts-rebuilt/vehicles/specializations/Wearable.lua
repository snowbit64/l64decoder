-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/WearableRepairEvent.lua")
source("dataS/scripts/vehicles/specializations/events/WearableRepaintEvent.lua")
Wearable = {SEND_NUM_BITS = 6, SEND_MAX_VALUE = 2 ^ Wearable.SEND_NUM_BITS - 1, SEND_THRESHOLD = 1 / Wearable.SEND_MAX_VALUE}
function Wearable.prerequisitesPresent(specializations)
  return true
end
function Wearable.initSpecialization()
  if Platform.gameplay.hasVehicleDamage then
    v0:addSpecType("wearable", "shopListAttributeIconCondition", Wearable.loadSpecValueCondition, Wearable.getSpecValueCondition, "vehicle")
  end
  Vehicle.xmlSchema:setXMLSpecializationType("Wearable")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wearable#wearDuration", "Duration until fully worn (minutes)", 600)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wearable#workMultiplier", "Multiplier while working", 20)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wearable#fieldMultiplier", "Multiplier while on field", 2)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.wearable#showOnHud", "Show the damage on the hud", true)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).wearable.wearNode(?)#amount", "Wear amount")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).wearable#damage", "Damage amount")
end
function Wearable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "addAllSubWearableNodes", Wearable.addAllSubWearableNodes)
  SpecializationUtil.registerFunction(vehicleType, "addDamageAmount", Wearable.addDamageAmount)
  SpecializationUtil.registerFunction(vehicleType, "addToGlobalWearableNode", Wearable.addToGlobalWearableNode)
  SpecializationUtil.registerFunction(vehicleType, "addToLocalWearableNode", Wearable.addToLocalWearableNode)
  SpecializationUtil.registerFunction(vehicleType, "addWearableNodes", Wearable.addWearableNodes)
  SpecializationUtil.registerFunction(vehicleType, "addWearAmount", Wearable.addWearAmount)
  SpecializationUtil.registerFunction(vehicleType, "getDamageAmount", Wearable.getDamageAmount)
  SpecializationUtil.registerFunction(vehicleType, "getDamageShowOnHud", Wearable.getDamageShowOnHud)
  SpecializationUtil.registerFunction(vehicleType, "getNodeWearAmount", Wearable.getNodeWearAmount)
  SpecializationUtil.registerFunction(vehicleType, "getUsageCausesDamage", Wearable.getUsageCausesDamage)
  SpecializationUtil.registerFunction(vehicleType, "getUsageCausesWear", Wearable.getUsageCausesWear)
  SpecializationUtil.registerFunction(vehicleType, "getWearMultiplier", Wearable.getWearMultiplier)
  SpecializationUtil.registerFunction(vehicleType, "getWearTotalAmount", Wearable.getWearTotalAmount)
  SpecializationUtil.registerFunction(vehicleType, "getWorkWearMultiplier", Wearable.getWorkWearMultiplier)
  SpecializationUtil.registerFunction(vehicleType, "removeWearableNode", Wearable.removeWearableNode)
  SpecializationUtil.registerFunction(vehicleType, "repaintVehicle", Wearable.repaintVehicle)
  SpecializationUtil.registerFunction(vehicleType, "repairVehicle", Wearable.repairVehicle)
  SpecializationUtil.registerFunction(vehicleType, "setDamageAmount", Wearable.setDamageAmount)
  SpecializationUtil.registerFunction(vehicleType, "setNodeWearAmount", Wearable.setNodeWearAmount)
  SpecializationUtil.registerFunction(vehicleType, "updateDamageAmount", Wearable.updateDamageAmount)
  SpecializationUtil.registerFunction(vehicleType, "updateWearAmount", Wearable.updateWearAmount)
  SpecializationUtil.registerFunction(vehicleType, "validateWearableNode", Wearable.validateWearableNode)
end
function Wearable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getVehicleDamage", Wearable.getVehicleDamage)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getRepairPrice", Wearable.getRepairPrice)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getRepaintPrice", Wearable.getRepaintPrice)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "showInfo", Wearable.showInfo)
end
function Wearable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Wearable)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Wearable)
  if not GS_IS_MOBILE_VERSION then
    SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Wearable)
    SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Wearable)
    SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Wearable)
    SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Wearable)
    SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Wearable)
  end
end
function Wearable:onLoad(savegame)
  self.spec_wearable.wearableNodes = {}
  self.spec_wearable.wearableNodesByIndex = {}
  self:addToLocalWearableNode(nil, Wearable.updateWearAmount, nil, nil)
  local v5 = v5:getValue("vehicle.wearable#wearDuration", 600)
  self.spec_wearable.wearDuration = v5 * 60 * 1000
  if self.spec_wearable.wearDuration ~= 0 then
    self.spec_wearable.wearDuration = 1 / self.spec_wearable.wearDuration
  end
  v2.totalAmount = 0
  v2.damage = 0
  v2.damageByCurve = 0
  v2.damageSent = 0
  local v3 = v3:getValue("vehicle.wearable#workMultiplier", 20)
  v2.workMultiplier = v3
  v3 = v3:getValue("vehicle.wearable#fieldMultiplier", 2)
  v2.fieldMultiplier = v3
  v3 = v3:getValue("vehicle.wearable#showOnHud", true)
  v2.showOnHud = v3
  v3 = self:getNextDirtyFlag()
  v2.dirtyFlag = v3
end
function Wearable:onLoadFinished(savegame)
  if savegame ~= nil then
    local v3 = v3:getValue(savegame.key .. ".wearable#damage", 0)
    self.spec_wearable.damage = v3
    local v4 = math.max(self.spec_wearable.damage - 0.3, 0)
    self.spec_wearable.damageByCurve = v4 / 0.7
  end
  if v2.wearableNodes ~= nil then
    for v6, v7 in pairs(self.components) do
      self:addAllSubWearableNodes(v7.node)
    end
    if savegame ~= nil then
      for v6, v7 in ipairs(v2.wearableNodes) do
        local v8 = string.format("%s.wearable.wearNode(%d)", savegame.key, v6 - 1)
        local v9 = v9:getValue(v8 .. "#amount", 0)
        self:setNodeWearAmount(v7, v9, true)
      end
      return
    end
    for v6, v7 in ipairs(v2.wearableNodes) do
      self:setNodeWearAmount(v7, 0, true)
    end
  end
end
function Wearable:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#damage", self.spec_wearable.damage)
  if self.spec_wearable.wearableNodes ~= nil then
    for v8, v9 in ipairs(self.spec_wearable.wearableNodes) do
      local v10 = string.format("%s.wearNode(%d)", key, v8 - 1)
      local v14 = self:getNodeWearAmount(v9)
      xmlFile:setValue(...)
    end
  end
end
function Wearable:onReadStream(streamId, connection)
  local v7 = streamReadUIntN(streamId, Wearable.SEND_NUM_BITS)
  self:setDamageAmount(v7 / Wearable.SEND_MAX_VALUE, true)
  if self.spec_wearable.wearableNodes ~= nil then
    for v7, v8 in ipairs(self.spec_wearable.wearableNodes) do
      local v10 = streamReadUIntN(streamId, Wearable.SEND_NUM_BITS)
      self:setNodeWearAmount(v8, v10 / Wearable.SEND_MAX_VALUE, true)
    end
  end
end
function Wearable:onWriteStream(streamId, connection)
  local v6 = math.floor(self.spec_wearable.damage * Wearable.SEND_MAX_VALUE + 0.5)
  streamWriteUIntN(streamId, v6, Wearable.SEND_NUM_BITS)
  if self.spec_wearable.wearableNodes ~= nil then
    for v7, v8 in ipairs(self.spec_wearable.wearableNodes) do
      local v14 = self:getNodeWearAmount(v8)
      local v11 = math.floor(v14 * Wearable.SEND_MAX_VALUE + 0.5)
      streamWriteUIntN(streamId, v11, Wearable.SEND_NUM_BITS)
    end
  end
end
function Wearable:onReadUpdateStream(streamId, timestamp, connection)
  local v5 = connection:getIsServer()
  if v5 then
    v5 = streamReadBool(streamId)
    if v5 then
      local v8 = streamReadUIntN(streamId, Wearable.SEND_NUM_BITS)
      self:setDamageAmount(v8 / Wearable.SEND_MAX_VALUE, true)
      if self.spec_wearable.wearableNodes ~= nil then
        for v8, v9 in ipairs(self.spec_wearable.wearableNodes) do
          local v11 = streamReadUIntN(streamId, Wearable.SEND_NUM_BITS)
          self:setNodeWearAmount(v9, v11 / Wearable.SEND_MAX_VALUE, true)
        end
      end
    end
  end
end
function Wearable:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v5 = connection:getIsServer()
  if not v5 then
    local v8 = bitAND(dirtyMask, self.spec_wearable.dirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    if v5 then
      local v7 = math.floor(v4.damage * Wearable.SEND_MAX_VALUE + 0.5)
      streamWriteUIntN(streamId, v7, Wearable.SEND_NUM_BITS)
      if v4.wearableNodes ~= nil then
        for v8, v9 in ipairs(v4.wearableNodes) do
          local v15 = self:getNodeWearAmount(v9)
          local v12 = math.floor(v15 * Wearable.SEND_MAX_VALUE + 0.5)
          streamWriteUIntN(streamId, v12, Wearable.SEND_NUM_BITS)
        end
      end
    end
  end
end
function Wearable:onUpdateTick(dt, isActive, isActiveForInput, isSelected)
  if self.spec_wearable.wearableNodes ~= nil and self.isServer then
    local changeAmount = self:updateDamageAmount(dt)
    if changeAmount ~= 0 then
      self:setDamageAmount(self.spec_wearable.damage + changeAmount)
    end
    for v10, v11 in ipairs(v5.wearableNodes) do
      local v12 = v11.updateFunc(self, v11, dt)
      if not (v12 ~= 0) then
        continue
      end
      local v17 = self:getNodeWearAmount(v11)
      self:setNodeWearAmount(v11, v17 + v12)
    end
  end
end
function Wearable:setDamageAmount(amount, force)
  local v5 = math.max(amount, 0)
  local v4 = math.min(v5, 1)
  self.spec_wearable.damage = v4
  v5 = math.max(self.spec_wearable.damage - 0.3, 0)
  self.spec_wearable.damageByCurve = v5 / 0.7
  v5 = math.abs(self.spec_wearable.damageSent - self.spec_wearable.damage)
  if Wearable.SEND_THRESHOLD >= v5 then
    -- if not v2 then goto L58 end
  end
  if self.isServer then
    self:raiseDirtyFlags(v3.dirtyFlag)
    v3.damageSent = v3.damage
  end
end
function Wearable:updateWearAmount(nodeData, dt)
  local v4 = self:getUsageCausesWear()
  if v4 then
    local v7 = self:getWearMultiplier(nodeData)
    return dt * self.spec_wearable.wearDuration * v7 * 0.5
  end
  return 0
end
function Wearable:updateDamageAmount(dt)
  local v3 = self:getUsageCausesDamage()
  if v3 then
    if self.lifetime ~= nil and self.lifetime ~= 0 then
      local v6 = math.min(self.age / self.lifetime, 1)
      local v8 = math.min(self.operatingTime / 3600000 / self.lifetime * EconomyManager.LIFETIME_OPERATINGTIME_RATIO, 1)
    end
    return dt * v2.wearDuration * 0.35 * v3
  end
  return 0
end
function Wearable.getUsageCausesWear(v0)
  return true
end
function Wearable:getUsageCausesDamage()
  if self.spec_motorized == nil then
    local v1 = getIsSleeping(self.rootNode)
    if v1 then
      return false
    end
  end
  if self.isActive and self.propertyState == Vehicle.PROPERTY_STATE_MISSION then
  end
  return v1
end
function Wearable:addWearAmount(wearAmount, force)
  if self.spec_wearable.wearableNodes ~= nil then
    for v7, v8 in ipairs(self.spec_wearable.wearableNodes) do
      local v13 = self:getNodeWearAmount(v8)
      self:setNodeWearAmount(v8, v13 + wearAmount, force)
    end
  end
end
function Wearable:addDamageAmount(amount, force)
  self:setDamageAmount(self.spec_wearable.damage + amount, force)
end
function Wearable:setNodeWearAmount(nodeData, wearAmount, force)
  local v5 = MathUtil.clamp(wearAmount, 0, 1)
  nodeData.wearAmount = v5
  local v6 = math.abs(nodeData.wearAmountSent - nodeData.wearAmount)
  if Wearable.SEND_THRESHOLD >= v6 then
    -- if not v3 then goto L91 end
  end
  for v9, v10 in pairs(nodeData.nodes) do
    local v11, v12, v13, v14 = getShaderParameter(v10, "RDT")
    setShaderParameter(v10, "RDT", nodeData.wearAmount, v12, 0, v14, false)
  end
  if self.isServer then
    self:raiseDirtyFlags(v4.dirtyFlag)
    nodeData.wearAmountSent = nodeData.wearAmount
  end
  v4.totalAmount = 0
  -- TODO: structure LOP_FORNPREP (pc 71, target 83)
  v4.totalAmount = v4.totalAmount + v4.wearableNodes[1].wearAmount
  -- TODO: structure LOP_FORNLOOP (pc 82, target 72)
  v4.totalAmount = v4.totalAmount / #v4.wearableNodes
end
function Wearable.getNodeWearAmount(v0, v1)
  return v1.wearAmount
end
function Wearable:getWearTotalAmount()
  return self.spec_wearable.totalAmount
end
function Wearable:getDamageAmount()
  return self.spec_wearable.damage
end
function Wearable:getDamageShowOnHud()
  return self.spec_wearable.showOnHud
end
function Wearable:repairVehicle()
  if self.isServer then
    local v4 = self:getRepairPrice()
    v4 = self:getOwnerFarmId()
    v1:addMoney(-v4, v4, MoneyType.VEHICLE_REPAIR, true, true)
    self:setDamageAmount(0)
    self:raiseDirtyFlags(self.spec_wearable.dirtyFlag)
    local v3 = self:getOwnerFarmId()
    local v1, v2 = v1:updateFarmStats(v3, "repairVehicleCount", 1)
    if v1 ~= nil then
      v3:tryUnlock("VehicleRepairFirst", v1)
      v3:tryUnlock("VehicleRepair", v1)
    end
  end
end
function Wearable:repaintVehicle()
  if self.isServer then
    local v4 = self:getRepaintPrice()
    v4 = self:getOwnerFarmId()
    v1:addMoney(-v4, v4, MoneyType.VEHICLE_REPAIR, true, true)
    for v5, v6 in ipairs(self.spec_wearable.wearableNodes) do
      self:setNodeWearAmount(v6, 0, true)
    end
    self:raiseDirtyFlags(v1.dirtyFlag)
    v4 = self:getOwnerFarmId()
    v2, v3 = v2:updateFarmStats(v4, "repaintVehicleCount", 1)
    if v2 ~= nil then
      v4:tryUnlock("VehicleRepaint", v2)
    end
  end
end
function Wearable:getRepairPrice(superFunc)
  local v3 = superFunc(self)
  local v5 = self:getPrice()
  local v4 = Wearable.calculateRepairPrice(v5, self.spec_wearable.damage)
  return v3 + v4
end
function Wearable.calculateRepairPrice(price, damage)
  local v4 = math.pow(damage, 1.5)
  return price * v4 * 0.09
end
function Wearable:getRepaintPrice(superFunc)
  local v3 = superFunc(self)
  local v5 = self:getPrice()
  local v6 = self:getWearTotalAmount()
  local v4 = Wearable.calculateRepaintPrice(...)
  return v3 + v4
end
function Wearable:showInfo(superFunc, box)
  if 0.01 < self.spec_wearable.damage then
    local v6 = v6:getText("infohud_damage")
    local v7 = string.format("%d %%", self.spec_wearable.damage * 100)
    box:addLine(...)
  end
  superFunc(self, box)
end
function Wearable.calculateRepaintPrice(price, wear)
  local v4 = math.sqrt(wear / 100)
  return price * v4 * 2
end
function Wearable:getVehicleDamage(superFunc)
  local v4 = superFunc(self)
  return math.min(v4 + self.spec_wearable.damageByCurve, 1)
end
function Wearable:addAllSubWearableNodes(rootNode)
  if rootNode ~= nil then
    I3DUtil.getNodesByShaderParam(rootNode, "RDT", {})
    self:addWearableNodes({})
  end
end
function Wearable:addWearableNodes(nodes)
  for v5, v6 in pairs(nodes) do
    local v7, v8, v9, v10 = self:validateWearableNode(v6)
    if v7 then
      self:addToGlobalWearableNode(v6)
    else
      if not (v8 ~= nil) then
        continue
      end
      self:addToLocalWearableNode(v6, v8, v9, v10)
    end
  end
end
function Wearable.validateWearableNode(v0, v1)
  return true, nil
end
function Wearable:addToGlobalWearableNode(node)
  if self.spec_wearable.wearableNodes[1] ~= nil then
    table.insert(self.spec_wearable.wearableNodes[1].nodes, node)
  end
end
function Wearable:addToLocalWearableNode(node, updateFunc, customIndex, extraParams)
  if customIndex ~= nil then
    if self.spec_wearable.wearableNodesByIndex[customIndex] ~= nil then
      table.insert(self.spec_wearable.wearableNodesByIndex[customIndex].nodes, node)
      return
    end
    v5.wearableNodesByIndex[customIndex] = v6
  end
  v6.nodes = {node}
  v6.updateFunc = updateFunc
  v6.wearAmount = 0
  v6.wearAmountSent = 0
  if extraParams ~= nil then
    for v10, v11 in pairs(extraParams) do
      v6[v10] = v11
    end
  end
  table.insert(v5.wearableNodes, v6)
end
function Wearable:removeWearableNode(node)
  if self.spec_wearable.wearableNodes ~= nil and node ~= nil then
    for v6, v7 in ipairs(self.spec_wearable.wearableNodes) do
      v7.nodes[node] = nil
    end
  end
end
function Wearable:getWearMultiplier()
  local v3 = self:getLastSpeed()
  if v3 < 1 then
  end
  v3 = self:getIsOnField()
  if v3 then
  end
  return v2
end
function Wearable:getWorkWearMultiplier()
  return self.spec_wearable.workMultiplier
end
function Wearable:updateDebugValues(values)
  local changedAmount = self:updateDamageAmount(3600000)
  local v10 = self:getDamageAmount()
  local v7 = string.format(...)
  table.insert(values, {name = "Damage", value = v7})
  if self.spec_wearable.wearableNodes ~= nil and self.isServer then
    for v7, v8 in ipairs(self.spec_wearable.wearableNodes) do
      local v9 = v8.updateFunc(self, v8, 3600000)
      local v15 = self:getNodeWearAmount(v8)
      local v12 = string.format(...)
      table.insert(values, {name = "WearableNode" .. v7, value = v12})
    end
  end
end
function Wearable.loadSpecValueCondition(xmlFile, customEnvironment, baseDir)
  return nil
end
function Wearable.getSpecValueCondition(storeItem, realItem)
  if realItem == nil then
    return nil
  end
  local v5 = realItem:getDamageAmount()
  return string.format("%d%%", v5 * 100)
end
