-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ProductionChainManager = {NUM_MAX_PRODUCTION_POINTS = 60}
local ProductionChainManager_mt = Class(ProductionChainManager, AbstractManager)
function ProductionChainManager.new(isServer, customMt)
  if not customMt then
  end
  local v2 = v2(v3)
  v2.isServer = isServer
  addConsoleCommand("gsProductionPointsList", "List all production points on map", "commandListProductionPoints", v2)
  addConsoleCommand("gsProductionPointsPrintAutoDeliverMapping", "Prints which fillTypes are required by which production points", "commandPrintAutoDeliverMapping", v2)
  addConsoleCommand("gsProductionPointSetOwner", "", "commandSetOwner", v2)
  addConsoleCommand("gsProductionPointSetProductionState", "", "commandSetProductionState", v2)
  addConsoleCommand("gsProductionPointSetOutputMode", "", "commandSetOutputMode", v2)
  addConsoleCommand("gsProductionPointSetFillLevel", "", "commandSetFillLevel", v2)
  if v2.isServer then
    v3:subscribe(MessageType.HOUR_CHANGED, v2.hourChanged, v2)
  end
  return v2
end
function ProductionChainManager:initDataStructures()
  self.productionPoints = {}
  self.reverseProductionPoint = {}
  self.farmIds = {}
  self.currentUpdateIndex = 1
  self.hourChangedDirty = false
  self.hourChangeUpdating = false
end
function ProductionChainManager:unloadMapData()
  removeConsoleCommand("gsProductionPointsList")
  removeConsoleCommand("gsProductionPointsPrintAutoDeliverMapping")
  removeConsoleCommand("gsProductionPointSetOwner")
  removeConsoleCommand("gsProductionPointSetProductionState")
  removeConsoleCommand("gsProductionPointSetOutputMode")
  removeConsoleCommand("gsProductionPointSetFillLevel")
  if self.isServer then
    v1:unsubscribe(MessageType.HOUR_CHANGED, self)
  end
  local v2 = v2:superClass()
  v2.unloadMapData(self)
end
function ProductionChainManager:addProductionPoint(productionPoint)
  if self.reverseProductionPoint[productionPoint] then
    local v4 = productionPoint:tableId()
    printf(...)
    return false
  end
  if ProductionChainManager.NUM_MAX_PRODUCTION_POINTS <= #self.productionPoints then
    printf("Maximum number of %i Production Points reached.", ProductionChainManager.NUM_MAX_PRODUCTION_POINTS)
    return false
  end
  if #self.productionPoints == 0 and self.isServer then
    farmId:addUpdateable(self)
  end
  self.reverseProductionPoint[productionPoint] = true
  table.insert(self.productionPoints, productionPoint)
  local farmId = productionPoint:getOwnerFarmId()
  if farmId ~= AccessHandler.EVERYONE then
    if not self.farmIds[farmId] then
      self.farmIds[farmId] = {}
    end
    self:addProductionPointToFarm(productionPoint, self.farmIds[farmId])
  end
  return true
end
function ProductionChainManager.addProductionPointToFarm(v0, v1, v2)
  if not v2.productionPoints then
    v2.productionPoints = {}
  end
  table.insert(v2.productionPoints, v1)
  if not v2.inputTypeToProductionPoints then
    v2.inputTypeToProductionPoints = {}
  end
  for v6 in pairs(v1.inputFillTypeIds) do
    if not v2.inputTypeToProductionPoints[v6] then
      v2.inputTypeToProductionPoints[v6] = {}
    end
    table.insert(v2.inputTypeToProductionPoints[v6], v1)
  end
end
function ProductionChainManager:removeProductionPoint(productionPoint)
  self.reverseProductionPoint[productionPoint] = nil
  local v2 = table.removeElement(self.productionPoints, productionPoint)
  if v2 then
    v2 = productionPoint:getOwnerFarmId()
    if v2 ~= AccessHandler.EVERYONE then
      local v4 = self:removeProductionPointFromFarm(productionPoint, self.farmIds[v2])
      self.farmIds[v2] = v4
    end
  end
  if #self.productionPoints == 0 and self.isServer then
    v2:removeUpdateable(self)
  end
end
function ProductionChainManager.removeProductionPointFromFarm(v0, v1, v2)
  table.removeElement(v2.productionPoints, v1)
  for v7 in pairs(v1.inputFillTypeIds) do
    if not v3[v7] then
      continue
    end
    local v9 = table.removeElement(v3[v7], v1)
    if not v9 then
      log("Error: ProductionChainManager:removeProductionPoint(): Unable to remove production point from input type mapping")
    end
    if not (#v3[v7] == 0) then
      continue
    end
    v3[v7] = nil
  end
  if #v2.productionPoints == 0 then
  end
  return v2
end
function ProductionChainManager:getProductionPointsForFarmId(farmId)
  if self.farmIds[farmId] then
    -- if v0.farmIds[v1].productionPoints then goto L12 end
  end
  return {}
end
function ProductionChainManager:getNumOfProductionPoints()
  return #self.productionPoints
end
function ProductionChainManager:getHasFreeSlots()
  if #self.productionPoints >= ProductionChainManager.NUM_MAX_PRODUCTION_POINTS then
  end
  return true
end
function ProductionChainManager:update()
  if #self.productionPoints == 0 then
    return
  end
  if #self.productionPoints < self.currentUpdateIndex then
    self.currentUpdateIndex = 1
    if self.hourChangedDirty then
      self.hourChangeUpdating = true
      self.hourChangedDirty = false
    elseif self.hourChangeUpdating then
      self.hourChangeUpdating = false
      self:distributeGoods()
    end
  end
  if self.productionPoints[self.currentUpdateIndex] then
    self.productionPoints[self.currentUpdateIndex]:updateProduction()
    if self.hourChangeUpdating and self.isServer and self.productionPoints[self.currentUpdateIndex].isOwned then
      self.productionPoints[self.currentUpdateIndex]:claimProductionCosts()
      self.productionPoints[self.currentUpdateIndex]:directlySellOutputs()
      self.productionPoints[self.currentUpdateIndex]:updateBalaceDirectlySoldOutputs()
    end
  end
  self.currentUpdateIndex = self.currentUpdateIndex + 1
end
function ProductionChainManager:hourChanged()
  self.hourChangedDirty = true
end
function ProductionChainManager:distributeGoods()
  if not self.isServer then
    return
  end
  for v4, v5 in pairs(self.farmIds) do
    -- TODO: structure LOP_FORNPREP (pc 15, target 137)
    for v13 in pairs(v5.productionPoints[1].outputFillTypeIdsAutoDeliver) do
      local v15 = v15:getFillLevel(v13)
      if not (0 < v15) then
        continue
      end
      if not v5.inputTypeToProductionPoints[v13] then
      end
      -- TODO: structure LOP_FORNPREP (pc 44, target 55)
      local v21 = v21:getFreeCapacity(v13, true)
      -- TODO: structure LOP_FORNLOOP (pc 54, target 45)
      if not (0 < 0 + v21) then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 61, target 134)
      local v22 = v22:getFreeCapacity(v13, true)
      if 0 < v22 then
        local v23 = math.min(v22, v15 * v22 / (0 + v21))
        local v24 = calcDistanceFrom(v9.owningPlaceable.rootNode, v16[1].owningPlaceable.rootNode)
        v26:addMoney(-(v23 * v24 * ProductionPoint.DIRECT_DELIVERY_PRICE), v16[1].ownerFarmId, MoneyType.PRODUCTION_COSTS, true)
        local v29 = v29:getFillLevel(v13)
        v26:setFillLevel(v29 + v23, v13)
        v29 = v29:getFillLevel(v13)
        v26:setFillLevel(v29 - v23, v13)
      end
      -- TODO: structure LOP_FORNLOOP (pc 133, target 62)
    end
    -- TODO: structure LOP_FORNLOOP (pc 136, target 16)
  end
end
function ProductionChainManager.updateBalance(v0)
end
function ProductionChainManager:commandListProductionPoints()
  if 0 < #self.productionPoints then
    print("available production points:")
    -- TODO: structure LOP_FORNPREP (pc 15, target 31)
    local v9 = self.productionPoints[1]:toString()
    local v6 = string.format(...)
    print(...)
    -- TODO: structure LOP_FORNLOOP (pc 30, target 16)
    return string.format("listed %i production points", #self.productionPoints)
  end
  return "no productions points available"
end
function ProductionChainManager:commandPrintAutoDeliverMapping()
  print("AutoDeliverMapping")
  for v4, v5 in pairs(self.farmIds) do
    printf("  Farm %i", v4)
    for v9, v10 in pairs(v5.inputTypeToProductionPoints) do
      local v14 = v14:getFillTypeNameByIndex(v9)
      local v12 = string.format(...)
      print(...)
      for v14, v15 in pairs(v10) do
        local v19 = v15:toString()
        local v17 = string.format(...)
        print(...)
      end
    end
  end
end
function ProductionChainManager:commandSetOwner(ppIdentifier, farmId)
  local productionPoints = self:getProductionPointsFromString(ppIdentifier)
  local v4 = tonumber(farmId)
  if productionPoints == false then
    return "Error: no production point given\n" .. "Usage: gsProductionPointSetOwner ppIdentifier farmId"
  end
  if farmId == nil then
    return "Error: no farmId given\n" .. "Usage: gsProductionPointSetOwner ppIdentifier farmId"
  end
  v4 = table.copy(productionPoints)
  for v7, v8 in pairs(v4) do
    v8:setOwnerFarmId(farmId, true)
  end
end
function ProductionChainManager:commandSetProductionState(ppIdentifier, productionIdentifier, state)
  local productionPoints = self:getProductionPointsFromString(ppIdentifier)
  local v5 = Utils.stringToBoolean(state)
  if productionPoints == false then
    return "Error: no production point given\n" .. "Usage: gsProductionPointSetProductionState ppIdentifier productionIdentifier|all state"
  end
  if productionIdentifier == nil then
    return "Error: no production identifier given\n" .. "Usage: gsProductionPointSetProductionState ppIdentifier productionIdentifier|all state"
  end
  if state == nil then
    return "Error: no valid state given\n" .. "Usage: gsProductionPointSetProductionState ppIdentifier productionIdentifier|all state"
  end
  for v9, v10 in pairs(productionPoints) do
    local v11 = productionIdentifier:lower()
    if v11 == "all" then
      for v14, v15 in pairs(v10.productions) do
        table.insert(v5, {v10, v15})
      end
    else
      if not v10.productionsIdToObj[productionIdentifier] then
        continue
      end
      table.insert(v5, {v10, v10.productionsIdToObj[productionIdentifier]})
    end
  end
  if #v5 == 0 then
    v6 = string.format("Error: no productions found for identifier '%s'\n%s", productionIdentifier, "Usage: gsProductionPointSetProductionState ppIdentifier productionIdentifier|all state")
    return v6
  end
  for v9, v10 in pairs(v5) do
    v10[1]:setProductionState(v10[2].id, state)
    local v16 = v10[1]:getName()
    local v17 = v10[1]:tableId()
    v14 = string.format("%s (%s): %s = %s", v16, v17, v10[2].id, state)
    print(...)
  end
end
function ProductionChainManager:commandSetOutputMode(ppIdentifier, outputFillTypeIdentifier, mode)
  local productionPoints = self:getProductionPointsFromString(ppIdentifier)
  if productionPoints == false then
    return "Error: no production point given\n" .. "Usage: gsProductionPointSetOutputMode ppIdentifier outputFillType|all outputMode"
  end
  if not outputFillTypeIdentifier then
    return "Error: Missing argument outputFillType.\n" .. "Usage: gsProductionPointSetOutputMode ppIdentifier outputFillType|all outputMode"
  end
  local v8 = tonumber(mode)
  local v6 = table.hasElement(...)
  if not v6 then
    local v9 = v4()
    v6 = string.format(...)
    return v6
  end
  v6 = outputFillTypeIdentifier:lower()
  if v6 ~= "all" then
    v6 = v6:getFillTypeIndexByName(outputFillTypeIdentifier)
    for v10, v11 in pairs(productionPoints) do
      if not v11.outputFillTypeIds[v6] then
        continue
      end
      v11:setOutputDistributionMode(v6, mode)
    end
    return
  end
  for v9, v10 in pairs(productionPoints) do
    for v14 in pairs(v10.outputFillTypeIds) do
      v10:setOutputDistributionMode(v14, mode)
    end
  end
end
function ProductionChainManager:commandSetFillLevel(ppIdentifier, fillTypeIdentifier, fillLevel)
  local productionPoints = self:getProductionPointsFromString(ppIdentifier)
  if productionPoints == false then
    return "Error: no production point given\n" .. "Usage: gsProductionPointSetFillLevel ppIdentifier fillTypeName|all fillLevel"
  end
  local v5 = v5:getFillTypeIndexByName(fillTypeIdentifier)
  if fillTypeIdentifier then
    local v6 = fillTypeIdentifier:lower()
    -- cmp-jump LOP_JUMPXEQKS R6 aux=0x7 -> L27
    -- if v5 then goto L27 end
  end
  return "Error: no valid fillType given\n" .. "Usage: gsProductionPointSetFillLevel ppIdentifier fillTypeName|all fillLevel"
  v6 = tonumber(fillLevel)
  if not v6 then
    return "Error: no fillLevel given\n" .. "Usage: gsProductionPointSetFillLevel ppIdentifier fillTypeName|all fillLevel"
  end
  for v10, v11 in pairs(productionPoints) do
    local v12 = fillTypeIdentifier:lower()
    if v12 ~= "all" then
      if not v5 then
        continue
      end
      v12 = v12:getIsFillTypeSupported(v5)
      if not v12 then
        continue
      end
      v12:setFillLevel(fillLevel, v5)
    else
      local v13 = v13:getSupportedFillTypes()
      for v15 in pairs(...) do
        v17:setFillLevel(fillLevel, v15)
      end
    end
  end
  v7 = string.format("Filled %i storage spaces", v6)
  return v7
end
function ProductionChainManager:consoleCommandToggleProdPointDebug()
  self.debugEnabled = not self.debugEnabled
  if g_currentMission ~= nil then
    for v4, v5 in pairs(self.productionPoints) do
      if self.debugEnabled then
        v6:addDrawable(v5)
      else
        v6:removeDrawable(v5)
      end
    end
  end
  v3 = tostring(self.debugEnabled)
  return "ProductionChainManager.debugEnabled=" .. v3
end
function ProductionChainManager:getProductionPointsFromString(identificationString)
  if identificationString then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000000 -> L5
  end
  return false
  local v3 = identificationString:lower()
  if v3 == "all" then
    return self.productionPoints
  end
  local v5 = tonumber(identificationString)
  if not self.productionPoints[v5] then
    local v4 = string.len(identificationString)
    if 4 <= v4 then
      for v7, v8 in pairs(self.productionPoints) do
        local v10 = v8:tableId()
        local v9 = string.find(v10, identificationString)
        if not v9 then
          continue
        end
        if v3 == nil then
        else
          v10 = string.format("Error: Multiple production points for index/identifier '%s'. Please provide a longer identifier.", identificationString)
          print(...)
          self:commandListProductionPoints()
          return false
        end
      end
    end
  end
  if not v3 then
    v5 = string.format("Error: No Production Point for index/identifier '%s'", identificationString)
    print(...)
    self:commandListProductionPoints()
    return false
  end
  table.insert(v2, v3)
  return v2
end
