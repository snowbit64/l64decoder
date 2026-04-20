-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MultipleItemPurchase = {}
function MultipleItemPurchase.initSpecialization()
  local v3 = v3:getText("configuration_buyableBaleAmount")
  v0:addConfigurationType("multipleItemPurchaseAmount", v3, nil, nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("MultipleItemPurchase")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.multipleItemPurchase#filename", "Item filename")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.multipleItemPurchase#isVehicle", "Is Loading a vehicle (false=Bale)", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.multipleItemPurchase#fillType", "Bale fill type", "STRAW")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.multipleItemPurchase#baleIsWrapped", "Bale is wrapped", false)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.multipleItemPurchase.offsets.offset(?)#offset", "Offset")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.multipleItemPurchase.offsets.offset(?)#amount", "Amount of items to activate offset")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.multipleItemPurchase.itemPositions.itemPosition(?)#position", "Bale position")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.multipleItemPurchase.itemPositions.itemPosition(?)#rotation", "Bale rotation")
  Vehicle.xmlSchema:setXMLSpecializationType(XMLManager.XML_SPECIALIZATION_NONE)
end
function MultipleItemPurchase.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(FillUnit, v0)
end
function MultipleItemPurchase.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadItemAtPosition", MultipleItemPurchase.loadItemAtPosition)
  SpecializationUtil.registerFunction(vehicleType, "onFinishLoadingVehicle", MultipleItemPurchase.onFinishLoadingVehicle)
end
function MultipleItemPurchase.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getTotalMass", MultipleItemPurchase.getTotalMass)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitCapacity", MultipleItemPurchase.getFillUnitCapacity)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setVisibility", MultipleItemPurchase.setVisibility)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addToPhysics", MultipleItemPurchase.addToPhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeFromPhysics", MultipleItemPurchase.removeFromPhysics)
end
function MultipleItemPurchase.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", MultipleItemPurchase)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoadFinished", MultipleItemPurchase)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", MultipleItemPurchase)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", MultipleItemPurchase)
end
function MultipleItemPurchase:onLoad(savegame)
  self.spec_multipleItemPurchase.loadedBales = {}
  self.spec_multipleItemPurchase.loadedVehicles = {}
  local v4 = v4:getValue("vehicle.multipleItemPurchase#filename")
  local v3 = Utils.getFilename(v4, self.baseDirectory)
  self.spec_multipleItemPurchase.itemFilename = v3
  v3 = v3:getValue("vehicle.multipleItemPurchase#isVehicle", false)
  self.spec_multipleItemPurchase.isVehicle = v3
  v3 = v3:getValue("vehicle.multipleItemPurchase#fillType", "STRAW")
  v4 = v4:getFillTypeIndexByName(v3)
  self.spec_multipleItemPurchase.baleFillTypeIndex = v4
  v4 = v4:getValue("vehicle.multipleItemPurchase#baleIsWrapped", false)
  self.spec_multipleItemPurchase.baleIsWrapped = v4
  while true do
    v6 = string.format("vehicle.multipleItemPurchase.offsets.offset(%d)", v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = v7:getValue(v6 .. "#offset", nil, true)
    v8 = v8:getValue(v6 .. "#amount")
    if v8 <= self.configurations.multipleItemPurchaseAmount then
    end
  end
  v2.positions = {}
  while true do
    v6 = string.format("vehicle.multipleItemPurchase.itemPositions.itemPosition(%d)", v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = v7:getValue(v6 .. "#position", nil, true)
    v8 = v8:getValue(v6 .. "#rotation", nil, true)
    if v7 ~= nil and v8 ~= nil then
      if v4 ~= nil then
        v7[1] = v7[1] + v4[1]
        v7[2] = v7[2] + v4[2]
        v7[3] = v7[3] + v4[3]
      end
      table.insert(v2.positions, {position = v7, rotation = v8})
    end
  end
  if not self.isServer then
    SpecializationUtil.removeEventListener(self, "onUpdate", MultipleItemPurchase)
  end
end
function MultipleItemPurchase:onPreLoadFinished(savegame)
  for v6, v7 in ipairs(self.spec_multipleItemPurchase.positions) do
    if not (v6 <= self.configurations.multipleItemPurchaseAmount) then
      continue
    end
    self:loadItemAtPosition(v7)
  end
end
function MultipleItemPurchase:loadItemAtPosition(position)
  if not self.isServer then
    -- if v0.propertyState ~= Vehicle.PROPERTY_STATE_SHOP_CONFIG then goto L191 end
  end
  local v5 = unpack(position.position)
  local v3, v4, v5 = localToWorld(...)
  local v8 = unpack(position.rotation)
  local v6, v7, v8 = localRotationToWorld(...)
  if not v2.isVehicle then
    local baleObject = Bale.new(self.isServer, self.isClient)
    local v10 = baleObject:loadFromConfigXML(v2.itemFilename, v3, v4, v5, v6, v7, v8)
    -- if not v10 then goto L191 end
    baleObject:setFillType(v2.baleFillTypeIndex, true)
    local v12 = self:getActiveFarm()
    baleObject:setOwnerFarmId(v12, true)
    if self.propertyState ~= Vehicle.PROPERTY_STATE_SHOP_CONFIG then
      baleObject:register()
    end
    if v2.baleIsWrapped then
      baleObject:setWrappingState(1)
      if self.configurations.baseColor ~= nil then
        v10 = ConfigurationUtil.getColorByConfigId(self, "baseColor", self.configurations.baseColor)
        local v13 = unpack(v10)
        baleObject:setColor(...)
      end
    end
    setPairCollision(self.components[1].node, baleObject.nodeId, false)
    table.insert(v2.loadedBales, baleObject)
    return
  end
  self.subLoadingTasksFinished = false
  self.numPendingSubLoadingTasks = self.numPendingSubLoadingTasks + 1
  if self.propertyState == Vehicle.PROPERTY_STATE_SHOP_CONFIG then
  end
  if self.propertyState ~= Vehicle.PROPERTY_STATE_SHOP_CONFIG then
  end
  local v18 = self:getActiveFarm()
  VehicleLoadingUtil.loadVehicle(v2.itemFilename, baleObject, true, 0, self.propertyState, v18, nil, nil, self.onFinishLoadingVehicle, self, nil, v10, true)
end
function MultipleItemPurchase:onFinishLoadingVehicle(vehicle, vehicleLoadState)
  if vehicleLoadState == VehicleLoadingUtil.VEHICLE_LOAD_OK then
    table.insert(self.spec_multipleItemPurchase.loadedVehicles, vehicle)
  end
  self.numPendingSubLoadingTasks = self.numPendingSubLoadingTasks - 1
  if self.numPendingSubLoadingTasks ~= 0 then
  end
  self.subLoadingTasksFinished = true
  if not self.isDeleted and not self.isDeleting and self.syncVehicleLoadingFinished then
    self:tryFinishLoading()
  end
end
function MultipleItemPurchase:onDelete()
  if self.propertyState ~= Vehicle.PROPERTY_STATE_SHOP_CONFIG and g_iconGenerator == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L42
  end
  if self.spec_multipleItemPurchase.loadedBales ~= nil then
    for v5, v6 in ipairs(self.spec_multipleItemPurchase.loadedBales) do
      v6:delete()
    end
    for v5, v6 in ipairs(v1.loadedVehicles) do
      v6:delete()
    end
  end
end
function MultipleItemPurchase:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.propertyState ~= Vehicle.PROPERTY_STATE_SHOP_CONFIG then
    v5:removeVehicle(self)
  end
end
function MultipleItemPurchase:getTotalMass(superFunc, onlyGivenVehicle)
  if self.propertyState == Vehicle.PROPERTY_STATE_SHOP_CONFIG then
    for v8, v9 in ipairs(self.spec_multipleItemPurchase.loadedBales) do
      local v10 = v9:getMass()
    end
    for v8, v9 in ipairs(v4.loadedVehicles) do
      v10 = v9:getTotalMass()
    end
    return v3
  end
  return 0
end
function MultipleItemPurchase:getFillUnitCapacity(superFunc, fillUnitIndex)
  if self.propertyState == Vehicle.PROPERTY_STATE_SHOP_CONFIG then
    for v8, v9 in ipairs(self.spec_multipleItemPurchase.loadedBales) do
      local v10 = v9:getFillLevel()
    end
    for v8, v9 in ipairs(v4.loadedVehicles) do
      if not (v9.getFillUnitCapacity ~= nil) then
        continue
      end
      v10 = v9:getFillUnitCapacity(1)
    end
    return v3
  end
  return 0
end
function MultipleItemPurchase:setVisibility(superFunc, state)
  for v7, v8 in ipairs(self.spec_multipleItemPurchase.loadedVehicles) do
    v8:setVisibility(state)
  end
  superFunc(self, state)
end
function MultipleItemPurchase.addToPhysics(v0, v1)
end
function MultipleItemPurchase:removeFromPhysics(superFunc)
  for v6, v7 in ipairs(self.spec_multipleItemPurchase.loadedBales) do
    v7:removeFromPhysics()
  end
  for v6, v7 in ipairs(v2.loadedVehicles) do
    v7:removeFromPhysics()
  end
  superFunc(self)
end
