-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSaleSystem = {MINIMUM_ITEM_VALUE = 10000, MAX_MULTIPLAYER_ITEMS = 20, MIN_MULTIPLAYER_ITEM_DURATION = 20, MAX_MULTIPLAYER_ITEM_DURATION = 40, MULTIPLAYER_ACCEPT_CHANCE = 0.8, MAX_GENERATED_ITEMS = 5, MIN_GENERATED_ITEM_DURATION = 20, MAX_GENERATED_ITEM_DURATION = 40, GENERATED_HOURLY_CHANCE = 3 / VehicleSaleSystem.MIN_GENERATED_ITEM_DURATION, BUYPRICE_FACTOR = 1.1}
local VehicleSaleSystem_mt = Class(VehicleSaleSystem)
function VehicleSaleSystem.new(mission)
  local v1 = setmetatable({}, u0)
  v1.mission = mission
  v1.items = {}
  v1.numGeneratedItems = 0
  v1.numMultiplayerItems = 0
  v1.isEnabled = Platform.gameplay.hasVehicleSales
  v1.nextFreeId = 1
  v1.freeIds = {}
  v2:subscribe(MessageType.HOUR_CHANGED, v1.onHourChanged, v1)
  return v1
end
function VehicleSaleSystem.delete(v0, v1)
  v2:unsubscribeAll(v0)
end
function VehicleSaleSystem:loadFromXMLFile(xmlFilename)
  if not self.isEnabled then
    return true
  end
  local xmlFile = XMLFile.loadIfExists("vehicleSaleXML", xmlFilename)
  if xmlFile == nil then
    self:generateInitialSales()
    return false
  end
  xmlFile:iterate("sales.item", function(self, xmlFilename)
    local v3 = v3:getInt(xmlFilename .. "#timeLeft")
    v3 = v3:getBool(xmlFilename .. "#isGenerated")
    v3 = v3:getString(xmlFilename .. "#xmlFilename")
    v3 = v3:getInt(xmlFilename .. "#age")
    v3 = v3:getInt(xmlFilename .. "#price")
    v3 = v3:getFloat(xmlFilename .. "#damage")
    v3 = v3:getFloat(xmlFilename .. "#wear")
    local v4 = v4:getFloat(xmlFilename .. "#operatingTime")
    v3 = v3:getItemByXMLFilename({id = #u0.items + 1, timeLeft = v3, isGenerated = v3, xmlFilename = v3, boughtConfigurations = {}, age = v3, price = v3, damage = v3, wear = v3, operatingTime = v4 * 1000}.xmlFilename)
    if v3 == nil then
      Logging.xmlWarning(u1, "Store item for sale item '%s' could not be found, ignoring this item", {id = #u0.items + 1, timeLeft = v3, isGenerated = v3, xmlFilename = v3, boughtConfigurations = {}, age = v3, price = v3, damage = v3, wear = v3, operatingTime = v4 * 1000}.xmlFilename)
      return
    end
    v4:iterate(xmlFilename .. ".boughtConfiguration", function(self, xmlFilename)
      local xmlFile = xmlFile:getString(xmlFilename .. "#name")
      local v3 = v3:getString(xmlFilename .. "#id")
      if u1.configurations[xmlFile] == nil then
        return
      end
      for v8, v9 in ipairs(u1.configurations[xmlFile]) do
        if not (v9.saveId == v3) then
          continue
        end
        break
      end
      if v4 ~= nil then
        if u2.boughtConfigurations[xmlFile] == nil then
          u2.boughtConfigurations[xmlFile] = {}
        end
        u2.boughtConfigurations[xmlFile][v4] = true
      end
    end)
    if xmlFile.isGenerated then
      u0.numGeneratedItems = u0.numGeneratedItems + 1
    else
      u0.numMultiplayerItems = u0.numMultiplayerItems + 1
    end
    table.insert(u0.items, xmlFile)
  end)
  self.nextFreeId = #self.items + 1
  xmlFile:delete()
  return true
end
function VehicleSaleSystem:saveToXMLFile(xmlFilename)
  if not self.isEnabled then
    return
  end
  local xmlFile = XMLFile.create("vehicleSaleXML", xmlFilename, "sales")
  if xmlFile == nil then
    return
  end
  xmlFile:setSortedTable("sales.item", self.items, function(self, xmlFilename, xmlFile)
    v3:setInt(self .. "#timeLeft", xmlFilename.timeLeft)
    v3:setBool(self .. "#isGenerated", xmlFilename.isGenerated)
    v3:setString(self .. "#xmlFilename", xmlFilename.xmlFilename)
    v3:setInt(self .. "#age", xmlFilename.age)
    v3:setInt(self .. "#price", xmlFilename.price)
    v3:setFloat(self .. "#damage", xmlFilename.damage)
    v3:setFloat(self .. "#wear", xmlFilename.wear)
    v3:setFloat(self .. "#operatingTime", xmlFilename.operatingTime / 1000)
    local v3 = v3:getItemByXMLFilename(xmlFilename.xmlFilename)
    for v8, v9 in pairs(xmlFilename.boughtConfigurations) do
      for v13, v14 in pairs(v9) do
        if v3.configurations[v8] ~= nil then
          -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x0 -> L135
          local v15 = string.format("%s.boughtConfiguration(%d)", self, v4)
          v16:setString(v15 .. "#name", v8)
          local v19 = tostring(v3.configurations[v8][v13].saveId)
          v16:setString(...)
        else
          Logging.warning("Configuration '%s' on %s has invalid id %s (is bought but does not exist)", v8, v3.xmlFilename, v13)
        end
      end
    end
  end)
  xmlFile:save()
  xmlFile:delete()
  return true
end
function VehicleSaleSystem:sendAllToClient(connection)
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  local v7 = VehicleSaleAddEvent.new(self.items[1])
  connection:sendEvent(...)
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
end
function VehicleSaleSystem:generateInitialSales()
  -- TODO: structure LOP_FORNPREP (pc 7, target 18)
  local randomVehicle = self:generateRandomVehicle()
  if randomVehicle ~= nil then
    self:addSale(randomVehicle)
  end
  -- TODO: structure LOP_FORNLOOP (pc 17, target 8)
end
function VehicleSaleSystem:getItems()
  return self.items
end
function VehicleSaleSystem:getSaleById(id)
  for v5, v6 in ipairs(self.items) do
    if not (v6.id == id) then
      continue
    end
    return v6
  end
  return nil
end
function VehicleSaleSystem:getFreeId()
  if 0 < #self.freeIds then
    return table.pop(self.freeIds)
  end
  self.nextFreeId = self.nextFreeId + 1
  return self.nextFreeId
end
function VehicleSaleSystem:onHourChanged()
  if self.isEnabled then
    local v1 = v1:getIsServer()
    -- if v1 then goto L10 end
  end
  return
  if self.numGeneratedItems < VehicleSaleSystem.MAX_GENERATED_ITEMS then
    v1 = math.random()
    if v1 < VehicleSaleSystem.GENERATED_HOURLY_CHANCE then
      v1 = self:generateRandomVehicle()
      if v1 ~= nil then
        self:addSale(v1)
      end
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 41, target 70)
  self.items[#self.items].timeLeft = self.items[#self.items].timeLeft - 1
  local v5 = v5:getItemByXMLFilename(self.items[#self.items].xmlFilename)
  if self.items[#self.items].timeLeft > 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L69
  end
  self:removeSale(v4, v3)
  -- TODO: structure LOP_FORNLOOP (pc 69, target 42)
end
function VehicleSaleSystem:addSale(item, noEventSend)
  table.insert(self.items, item)
  if self.isEnabled then
    local v3 = v3:getIsServer()
    if v3 then
      v3 = self:getFreeId()
      item.id = v3
      if item.isGenerated then
        self.numGeneratedItems = self.numGeneratedItems + 1
      else
        self.numMultiplayerItems = self.numMultiplayerItems + 1
      end
      if not noEventSend then
        local v5 = VehicleSaleAddEvent.new(item)
        v3:broadcastEvent(...)
      end
    end
  end
  v3:publish(MessageType.VEHICLE_SALES_CHANGED)
end
function VehicleSaleSystem:removeSale(item, index, noEventSend)
  if item == nil then
    return
  end
  if index == nil then
    for v7, v8 in ipairs(self.items) do
      if not (item == v8) then
        continue
      end
      break
    end
  end
  if index == nil then
    return
  end
  table.remove(self.items, index)
  v4 = v4:getIsServer()
  if v4 then
    table.push(self.freeIds, item.id)
    if item.isGenerated then
      self.numGeneratedItems = self.numGeneratedItems - 1
    else
      self.numMultiplayerItems = self.numMultiplayerItems - 1
    end
    if not noEventSend then
      v6 = VehicleSaleRemoveEvent.new(item.id)
      v4:broadcastEvent(...)
    end
  end
  v4:publish(MessageType.VEHICLE_SALES_CHANGED)
end
function VehicleSaleSystem:removeSaleWithId(saleItemId)
  -- TODO: structure LOP_FORNPREP (pc 5, target 21)
  if self.items[1].id == saleItemId then
    table.remove(self.items, 1)
  else
    -- TODO: structure LOP_FORNLOOP (pc 20, target 6)
  end
  v2:publish(MessageType.VEHICLE_SALES_CHANGED)
end
function VehicleSaleSystem.generateRandomVehicle(v0)
  local v1 = v1:getItems()
  -- TODO: structure LOP_FORNPREP (pc 9, target 39)
  local v6 = math.random(1, #v1)
  local v8 = StoreItemUtil.getIsVehicle(v1[v6])
  if v8 then
    -- if not v1[v6].showInStore then goto L38 end
    -- if VehicleSaleSystem.MINIMUM_ITEM_VALUE > v1[v6].price then goto L38 end
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L38
  else
    -- TODO: structure LOP_FORNLOOP (pc 38, target 10)
  end
  if v2 == nil then
    return nil
  end
  StoreItemUtil.loadSpecsFromXML(v2)
  if v2.configurations ~= nil then
    for v7, v8 in pairs(v2.configurations) do
      if not (1 < #v8) then
        continue
      end
      for v13, v14 in ipairs(v2.configurationSets) do
        if not (v14.configurations[v7] ~= nil) then
          continue
        end
        break
      end
      if not not v9 then
        continue
      end
      v10 = math.random()
      if not (v10 < 0.1) then
        continue
      end
      v10 = math.random(1, #v8)
      {}[v10] = true
      v3[v7] = {}
    end
  end
  for v7, v8 in ipairs(v2.configurationSets) do
    local v9 = math.random()
    if not (v9 < 0.1) then
      continue
    end
    for v12, v13 in pairs(v8.configurations) do
      if v3[v12] == nil then
        v3[v12] = {}
      end
      v3[v12][v13] = true
    end
  end
  v4 = math.random(6, 40)
  v7 = math.random()
  v8 = math.random()
  v13 = math.random()
  v8 = StoreItemUtil.getDefaultPrice(v2, v3)
  v9 = Wearable.calculateRepairPrice(v8, v7 * 0.4 + 0.2, v4)
  v10 = Wearable.calculateRepaintPrice(v8, v8 * 0.8 + 0.2)
  v11 = Vehicle.calculateSellPrice(v2, v4, v4 * (v13 * 0.8 + 0.5) * 60 * 60 * 1000, v8, v9, v10)
  v13 = math.random(VehicleSaleSystem.MIN_GENERATED_ITEM_DURATION, VehicleSaleSystem.MAX_GENERATED_ITEM_DURATION)
  return {timeLeft = v13, isGenerated = true, xmlFilename = v2.xmlFilename, boughtConfigurations = v3, age = v4, price = v11, damage = v7 * 0.4 + 0.2, wear = v8 * 0.8 + 0.2, operatingTime = v4 * (v13 * 0.8 + 0.5) * 60 * 60 * 1000}
end
function VehicleSaleSystem:onVehicleWillSell(vehicle)
  local v2 = v2:getItemByXMLFilename(vehicle.configFileName)
  if self.isEnabled and self.mission.missionDynamicInfo.isMultiplayer and self.numMultiplayerItems < VehicleSaleSystem.MAX_MULTIPLAYER_ITEMS then
    local v3 = math.random()
    if v3 < VehicleSaleSystem.MULTIPLAYER_ACCEPT_CHANCE and VehicleSaleSystem.MINIMUM_ITEM_VALUE <= v2.price then
      local v4 = math.random(VehicleSaleSystem.MIN_MULTIPLAYER_ITEM_DURATION, VehicleSaleSystem.MAX_MULTIPLAYER_ITEM_DURATION)
      v4 = table.copy(vehicle.boughtConfigurations, 3)
      local v5 = vehicle:getSellPrice()
      if vehicle.getDamageAmount ~= nil then
        v4 = vehicle:getDamageAmount()
      end
      if vehicle.getWearTotalAmount ~= nil then
        v4 = vehicle:getWearTotalAmount()
        v3.wear = v4
      end
      self:addSale(v3)
    end
  end
end
function VehicleSaleSystem:onVehicleBought(saleItem)
  self:removeSale(saleItem)
end
function VehicleSaleSystem:setVehicleState(vehicle, saleItem, noEventSend)
  if saleItem ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L5
  end
  return
  local v4 = v4:getIsServer()
  if v4 then
    if vehicle.addDamageAmount ~= nil then
      vehicle:addDamageAmount(saleItem.damage, true)
    end
    if vehicle.addWearAmount ~= nil then
      vehicle:addWearAmount(saleItem.wear, true)
    end
  end
  vehicle.operatingTime = saleItem.operatingTime
  vehicle.age = saleItem.age
  for v7, v8 in pairs(saleItem.boughtConfigurations) do
    for v12, v13 in ipairs(v8) do
      ConfigurationUtil.addBoughtConfiguration(vehicle, v7, v12)
    end
  end
  if not noEventSend then
    v6 = VehicleSaleSetEvent.new(vehicle, saleItem)
    v4:broadcastEvent(v6, false, nil, vehicle, true, nil, true)
  end
end
