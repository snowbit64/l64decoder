-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleLoadingUtil = {VEHICLE_LOAD_OK = 1, VEHICLE_LOAD_ERROR = 2, VEHICLE_LOAD_DELAYED = 3, VEHICLE_LOAD_NO_SPACE = 4}
function VehicleLoadingUtil.loadVehicle(filename, location, save, price, propertyState, ownerFarmId, configurations, savegameData, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments, registerVehicle, forceServer)
  if asyncCallbackFunction == nil then
    print("Error: loadVehicle only supports async loading but asyncCallbackFunction is missing!")
    return nil
  end
  if g_currentMission ~= nil then
    -- if not g_currentMission.cancelLoading then goto L27 end
  end
  asyncCallbackFunction(asyncCallbackObject, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, asyncCallbackArguments)
  return
  local v13 = Utils.getNoNil(registerVehicle, true)
  if v13 then
    v13 = v13:getIsServer()
    if not v13 then
      print("Error: loadVehicle is only allowed on a server")
      printCallstack()
      asyncCallbackFunction(asyncCallbackObject, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, asyncCallbackArguments)
      return
    end
  end
  if configurations == nil then
  end
  if savegameData ~= nil and savegameData.xmlFile ~= 0 then
    v13:iterate(savegameData.key .. ".configuration", function(filename, location)
      local save = save:getValue(location .. "#name")
      local price = price:getValue(location .. "#id")
      local ownerFarmId = ConfigurationUtil.getConfigIdBySaveId(u2, save, price)
      u1[save] = ownerFarmId
    end)
  end
  v13 = v13:getItemByXMLFilename(filename)
  if v13 == nil then
    printf("Error: loadVehicle can only load existing store items, no store item for xml filename '%s'", filename)
    printCallstack()
    asyncCallbackFunction(asyncCallbackObject, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, asyncCallbackArguments)
    return
  end
  if v13.bundleInfo ~= nil then
    savegameData.useNewPosition = true
    if v13.bundleInfo.bundleItems[1] ~= nil then
      if location.x ~= nil and location.y ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R18 aux=0x80000000 -> L207
      end
      local v18 = StoreItemUtil.getSizeValues(v14.xmlFilename, "vehicle", v14.rotationOffset[2])
      local v20 = v20:getResetPlaces()
      local v19, v20, v21, v22, v23, v24 = PlacementUtil.getPlace(v20, v18, g_currentMission.usedLoadPlaces, true, false, true)
      if v19 ~= nil then
        location.x = v19
        location.y = v20
        location.z = v21
        local v25 = MathUtil.getYRotationFromDirection(v22.dirPerpX, v22.dirPerpZ)
        location.yRot = v25
        PlacementUtil.markPlaceUsed(g_currentMission.usedLoadPlaces, v22, v23)
      else
        asyncCallbackFunction(asyncCallbackObject, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, asyncCallbackArguments)
        return
      end
      while true do
        v18 = v18:hasProperty(savegameData.key .. ".configuration(0)")
        if not v18 then
          break
        end
        v18:removeProperty(savegameData.key .. ".configuration(0)")
        continue
        break
      end
      for v21, v22 in ipairs(v13.bundleInfo.bundleItems) do
        v24, v25 = MathUtil.getDirectionFromYRotation(location.yRot or 0)
        for v30, v31 in pairs(v22.item.configurations) do
          if not (configurations ~= nil) then
            continue
          end
          if not (configurations[v30] ~= nil) then
            continue
          end
          v26[v30] = configurations[v30]
        end
        VehicleLoadingUtil.loadVehicle(v22.xmlFilename, v23, save, price, propertyState, ownerFarmId, v26, savegameData, v17, asyncCallbackObject, {}, registerVehicle, forceServer)
      end
    else
      asyncCallbackFunction(asyncCallbackObject, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, asyncCallbackArguments)
    end
    return
  end
  local v14 = XMLFile.load("loadVehicleXml", filename, Vehicle.xmlSchema)
  if v14 == nil then
    printf("Error: loadVehicle can not load vehicle xml filename '%s'", filename)
    printCallstack()
    asyncCallbackFunction(asyncCallbackObject, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, asyncCallbackArguments)
    return
  end
  local v15 = v14:getValue("vehicle#type")
  v14:delete()
  if configurations ~= nil and configurations.vehicleType ~= nil then
    local v16 = v16:getItemByXMLFilename(filename)
    if v16.configurations ~= nil and v16.configurations.vehicleType then
    end
  end
  if v15 == nil then
    print("Error loadVehicle: invalid vehicle config file '" .. filename .. "', no type specified")
    asyncCallbackFunction(asyncCallbackObject, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, asyncCallbackArguments)
    return
  end
  v16 = v16:getTypeByName(v15)
  local v17, v18 = Utils.getModNameAndBaseDirectory(filename)
  if v17 ~= nil then
    if g_modIsLoaded[v17] ~= nil then
      -- if g_modIsLoaded[v17] then goto L493 end
    end
    print("Error: Mod '" .. v17 .. "' of vehicle '" .. filename .. "'")
    print("       is not loaded. This vehicle will not be loaded.")
    asyncCallbackFunction(asyncCallbackObject, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, asyncCallbackArguments)
    return
    if v16 == nil then
      v19 = v19:getTypeByName(v17 .. "." .. v15)
    end
  end
  if v16 == nil then
    print("Error loadVehicle: unknown type '" .. v15 .. "' in '" .. filename .. "'")
    asyncCallbackFunction(asyncCallbackObject, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, asyncCallbackArguments)
    return
  end
  v19 = ClassUtil.getClassObject(v16.className)
  if v19 == nil then
    print("Error loadVehicle: unknown vehicle class '" .. v16.className .. "' in '" .. filename .. "'")
    asyncCallbackFunction(asyncCallbackObject, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, asyncCallbackArguments)
    return
  end
  v20 = Utils.getNoNil(forceServer, false)
  if not v20 then
    v21 = v21:getIsServer()
  end
  if not forceServer then
    v22 = v22:getIsClient()
  end
  v20 = v20(v21, v22)
  if savegameData ~= nil then
  end
  v20:load(v21, VehicleLoadingUtil.loadVehicleFinished, nil, {asyncCallbackFunction = asyncCallbackFunction, asyncCallbackObject = asyncCallbackObject, asyncCallbackArguments = asyncCallbackArguments, registerVehicle = registerVehicle})
end
function VehicleLoadingUtil.loadVehicleFinished(_, vehicle, vehicleLoadState, arguments)
  if arguments.registerVehicle and vehicle ~= nil then
    vehicle:register()
  end
  v4(v5, vehicle, vehicleLoadState, v6)
end
function VehicleLoadingUtil.loadVehiclesFromListAdd(list, filename, x, yOffset, z, yRot, save, varName, varObject, ownerFarmId, configurations)
  local v14 = Utils.getNoNil(ownerFarmId, AccessHandler.EVERYONE)
  v14 = Utils.getNoNil(configurations, {})
  table.insert(list, {filename = filename, location = {x = x, z = z, yOffset = yOffset, yRot = yRot}, save = save, varName = varName, varObject = varObject, ownerFarmId = v14, configurations = v14})
end
function VehicleLoadingUtil:loadVehiclesFromList(v1, v2, v3)
  if #self ~= 0 then
    -- if not g_currentMission.cancelLoading then goto L11 end
  end
  v1(v2, v3)
  return
  VehicleLoadingUtil.loadVehicle(self[1].filename, self[1].location, self[1].save, 0, Vehicle.PROPERTY_STATE_NONE, self[1].ownerFarmId, self[1].configurations, nil, VehicleLoadingUtil.loadVehiclesFromListFinished, nil, {asyncCallbackFunction = v1, asyncCallbackObject = v2, asyncCallbackArguments = v3, list = self})
end
function VehicleLoadingUtil.loadVehiclesFromListFinished(_, vehicle, vehicleLoadState, arguments)
  if vehicle == nil then
    arguments.asyncCallbackFunction(arguments.asyncCallbackObject, vehicleLoadState, arguments.asyncCallbackArguments)
    return
  end
  if v7[1].varObject ~= nil and v7[1].varName ~= nil then
    v7[1].varObject[v7[1].varName] = vehicle
  end
  table.remove(v7, 1)
  if #v7 ~= 0 then
    -- if not g_currentMission.cancelLoading then goto L46 end
  end
  v4(v5, v6)
  return
  VehicleLoadingUtil.loadVehicle(v7[1].filename, v7[1].location, v7[1].save, 0, Vehicle.PROPERTY_STATE_NONE, v7[1].ownerFarmId, v7[1].configurations, nil, VehicleLoadingUtil.loadVehiclesFromListFinished, nil, arguments)
end
function VehicleLoadingUtil:loadVehiclesAtPlace(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
  local v11 = StoreItemUtil.getSizeValues(self.xmlFilename, "vehicle", self.rotation, v3)
  local v13, v14, v15, v16, v17, v18 = PlacementUtil.getPlace(v1, v11, v2, true, false, true)
  if v13 == nil then
    VehicleLoadingUtil.loadVehiclesAtPlaceFinished(v10.targetOwner, {asyncCallbackFunction = v8, asyncCallbackObject = v9, asyncCallbackArguments = v10}, VehicleLoadingUtil.VEHICLE_LOAD_NO_SPACE)
    return
  end
  local v19 = MathUtil.getYRotationFromDirection(v16.dirPerpX, v16.dirPerpZ)
  if self.bundleInfo ~= nil then
    for v24, v25 in pairs(self.bundleInfo.bundleItems) do
      for v30, v31 in pairs(v3) do
        if not (v25.item.configurations[v30] ~= nil) then
          continue
        end
        v26[v30] = v31
      end
      table.insert(v20, {xmlFilename = v25.xmlFilename, x = v13, z = v15, yRot = v19, yOffset = v18, offset = v25.offset, rotation = 0, rotationOffset = v25.rotationOffset, price = v25.price, propertyState = v5, ownerFarmId = v6, configurations = v26})
    end
  else
    table.insert({}, {xmlFilename = self.xmlFilename, x = v13, z = v15, yRot = v19 + self.rotation, yOffset = v18, offset = {0, 0, 0}, rotation = 0, price = v4, propertyState = v5, ownerFarmId = v6, configurations = v3})
  end
  v12.storeItem = self
  v12.loadedVehicles = {}
  v12.vehicles = v20
  v12.loadedVehicleIndex = 0
  v12.usedPlaces = v2
  v12.place = v16
  v12.width = v17
  v12.licensePlateData = v10.licensePlateData
  v12.saleItem = v7
  v21 = VehicleLoadingUtil.loadVehiclesAtPlaceStep(v10.targetOwner, v12)
  if not v21 then
    VehicleLoadingUtil.loadVehiclesAtPlaceFinished(v10.targetOwner, v12, VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
  end
end
function VehicleLoadingUtil.loadVehiclesAtPlaceStep(targetOwner, vehiclesToLoad)
  if vehiclesToLoad.loadedVehicleIndex + 1 <= #vehiclesToLoad.vehicles then
    if vehiclesToLoad.vehicles[vehiclesToLoad.loadedVehicleIndex + 1].rotationOffset ~= nil then
    end
    local v11, v12 = MathUtil.getDirectionFromYRotation(v4.yRot)
    local v13, v14 = MathUtil.getDirectionFromYRotation(v4.yRot + math.pi / 2)
    VehicleLoadingUtil.loadVehicle(v4.xmlFilename, {x = v5 + v13 * v4.offset[1] + v11 * v4.offset[3], z = v7 + v14 * v4.offset[1] + v12 * v4.offset[3], yOffset = v6, xRot = v8, yRot = v9, zRot = v10}, true, v4.price, v4.propertyState, v4.ownerFarmId, v4.configurations, nil, VehicleLoadingUtil.loadVehiclesAtPlaceStepFinished, nil, {targetOwner = targetOwner, vehiclesToLoad = vehiclesToLoad})
    return true
  end
  return false
end
function VehicleLoadingUtil.loadVehiclesAtPlaceStepFinished(_, vehicle, vehicleLoadState, arguments)
  if vehicle ~= nil then
    arguments.vehiclesToLoad.loadedVehicleIndex = arguments.vehiclesToLoad.loadedVehicleIndex + 1
    table.insert(arguments.vehiclesToLoad.loadedVehicles, vehicle)
    if vehicle.setLicensePlatesData ~= nil and vehicle.getHasLicensePlates ~= nil then
      local v6 = vehicle:getHasLicensePlates()
      if v6 then
        vehicle:setLicensePlatesData(arguments.vehiclesToLoad.licensePlateData)
      end
    end
    if v5.saleItem ~= nil then
      v6:setVehicleState(vehicle, v5.saleItem)
    end
    v6 = VehicleLoadingUtil.loadVehiclesAtPlaceStep(v4, v5)
    -- if v6 then goto L79 end
    VehicleLoadingUtil.loadVehiclesAtPlaceFinished(v4, v5, VehicleLoadingUtil.VEHICLE_LOAD_OK)
    return
  end
  VehicleLoadingUtil.loadVehiclesAtPlaceFinished(v4, v5, VehicleLoadingUtil.VEHICLE_LOAD_NO_SPACE)
end
function VehicleLoadingUtil.loadVehiclesAtPlaceFinished(targetOwner, vehiclesToLoad, code)
  if code == VehicleLoadingUtil.VEHICLE_LOAD_OK then
    if vehiclesToLoad.storeItem.bundleInfo ~= nil then
      for v8, v9 in pairs(vehiclesToLoad.storeItem.bundleInfo.attacherInfo) do
        v3[v9.bundleElement0]:attachImplement(v3[v9.bundleElement1], v9.inputAttacherJointIndex, v9.attacherJointIndex, true, nil, nil, true)
        table.insert(v4, {vehiclesToLoad = v3[v9.bundleElement0], code = v3[v9.bundleElement1], input = v9.inputAttacherJointIndex, attacher = v9.attacherJointIndex})
      end
      if g_server ~= nil then
        v7 = VehicleBundleAttachEvent.new(v4)
        v5:broadcastEvent(v7, nil, nil, g_currentMission)
      end
    end
    PlacementUtil.markPlaceUsed(vehiclesToLoad.usedPlaces, vehiclesToLoad.place, vehiclesToLoad.width)
  end
  if vehiclesToLoad.asyncCallbackFunction ~= nil then
    vehiclesToLoad.asyncCallbackFunction(vehiclesToLoad.asyncCallbackObject, code, vehiclesToLoad.asyncCallbackArguments)
  end
end
function VehicleLoadingUtil.loadVehiclesFromSavegame(xmlFilename, resetVehicles, missionInfo, missionDynamicInfo, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  local v7 = XMLFile.load("VehiclesXML", xmlFilename, Vehicle.xmlSchemaSavegame)
  local v9 = VehicleLoadingUtil.loadVehiclesFromSavegameStep({xmlFile = v7, xmlFilename = xmlFilename, resetVehicles = resetVehicles, missionInfo = missionInfo, missionDynamicInfo = missionDynamicInfo, index = 0, vehiclesById = {}, asyncCallbackFunction = asyncCallbackFunction, asyncCallbackObject = asyncCallbackObject, asyncCallbackArguments = asyncCallbackArguments})
  if not v9 then
    VehicleLoadingUtil.loadVehiclesFromSavegameFinished({xmlFile = v7, xmlFilename = xmlFilename, resetVehicles = resetVehicles, missionInfo = missionInfo, missionDynamicInfo = missionDynamicInfo, index = 0, vehiclesById = {}, asyncCallbackFunction = asyncCallbackFunction, asyncCallbackObject = asyncCallbackObject, asyncCallbackArguments = asyncCallbackArguments})
  end
end
function VehicleLoadingUtil:loadVehiclesFromSavegameStep()
  if g_currentMission.cancelLoading then
    return false
  end
  local v4 = self.xmlFile:getValue("vehicles#loadAnyFarmInSingleplayer", false)
  while true do
    self.index = self.index + 1
    v6 = string.format("vehicles.vehicle(%d)", self.index)
    v7 = v1:hasProperty(v6)
    if not v7 then
      return false
    end
    v7 = v1:getValue(v6 .. "#modName")
    v8 = v1:getValue(v6 .. "#filename")
    v9 = v1:getValue(v6 .. "#defaultFarmProperty", false)
    v10 = v1:getValue(v6 .. "#farmId")
    if v9 and v2.isCompetitiveMultiplayer then
      v12 = v12:getFarmById(v10)
      if v12 == nil then
      end
    end
    if v9 and v2.loadDefaultFarm and not v3.isMultiplayer and v10 ~= FarmManager.SINGLEPLAYER_FARM_ID then
    end
    if not v2.isValid and not not v9 and not v12 then
    end
    if v7 ~= nil and not g_modIsLoaded[v7] then
      continue
    end
    if not (v8 ~= nil) then
      continue
    end
    if not v13 then
      continue
    end
    if v12 and v4 and v10 ~= FarmManager.SINGLEPLAYER_FARM_ID then
      v1:setValue(v6 .. "#farmId", FarmManager.SINGLEPLAYER_FARM_ID)
    end
    v14 = NetworkUtil.convertFromNetworkFilename(v8)
    v14 = v14:getItemByXMLFilename(v14)
    if not (v14 ~= nil) then
      continue
    end
    v15 = v15:hasEnoughSlots(v14)
    if v15 then
      self.key = v6
      VehicleLoadingUtil.loadVehicle(v14, {x = 0, z = 0}, true, 0, Vehicle.PROPERTY_STATE_NONE, AccessHandler.EVERYONE, nil, {xmlFile = v1, key = v6, resetVehicles = self.resetVehicles}, VehicleLoadingUtil.loadVehiclesFromSavegameStepFinished, nil, self)
      return true
    end
    v15:addMoney(v14.price, v10, MoneyType.SHOP_VEHICLE_SELL, true)
    Logging.warning("Too many slots in use. Selling vehicle '%s' for '%d'", v8, v14.price)
  end
end
function VehicleLoadingUtil.loadVehiclesFromSavegameStepFinished(_, vehicle, vehicleLoadState, loadingData)
  if g_currentMission ~= nil then
    -- if not g_currentMission.cancelLoading then goto L14 end
  end
  VehicleLoadingUtil.loadVehiclesFromSavegameFinished(loadingData)
  return
  if vehicle ~= nil then
    if vehicleLoadState == VehicleLoadingUtil.VEHICLE_LOAD_ERROR then
      print("Warning: corrupt savegame, vehicle " .. vehicle.configFileName .. " could not be loaded")
      v4:removeVehicle(vehicle)
    elseif vehicleLoadState == VehicleLoadingUtil.VEHICLE_LOAD_DELAYED then
      v4:addVehicleToSpawn(loadingData.xmlFilename, loadingData.key)
      v4:removeVehicle(vehicle)
    else
      if vehicle.currentSavegameId ~= nil then
        loadingData.vehiclesById[vehicle.currentSavegameId] = vehicle
      end
    end
  end
  local v4 = VehicleLoadingUtil.loadVehiclesFromSavegameStep(loadingData)
  if not v4 then
    VehicleLoadingUtil.loadVehiclesFromSavegameFinished(loadingData)
  end
end
function VehicleLoadingUtil.loadVehiclesFromSavegameFinished(loadingData)
  vehicle:addTask(function()
    if g_currentMission ~= nil and not g_currentMission.cancelLoading and not u0.resetVehicles then
      while true do
        vehicleLoadState = string.format("vehicles.attachments(%d)", vehicle)
        loadingData = loadingData:hasProperty(vehicleLoadState)
        if not loadingData then
          break
        end
        loadingData = loadingData:getValue(vehicleLoadState .. "#rootVehicleId")
        if loadingData ~= nil and u0.vehiclesById[loadingData] ~= nil and u0.vehiclesById[loadingData].loadAttachmentsFromXMLFile ~= nil then
          u0.vehiclesById[loadingData]:loadAttachmentsFromXMLFile(u0.xmlFile, vehicleLoadState, u0.vehiclesById)
          loadingData[u0.vehiclesById[loadingData]] = true
        end
      end
      for v5, v6 in pairs(loadingData) do
        v5:loadAttachmentsFinished()
      end
    end
    u0.asyncCallbackFunction(u0.asyncCallbackObject, u0.asyncCallbackArguments, u0.vehiclesById)
    loadingData:delete()
  end)
end
function VehicleLoadingUtil:loadVehicleFromSavegameXML(vehicle, vehicleLoadState, loadingData, v4, v5, v6, v7, v8)
  if self == nil then
    v6(v7, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, v8)
    return VehicleLoadingUtil.VEHICLE_LOAD_ERROR
  end
  local v9 = self:getValue(vehicle .. "#filename")
  if v9 == nil then
    v6(v7, nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, v8)
    return VehicleLoadingUtil.VEHICLE_LOAD_ERROR
  end
  local v10 = NetworkUtil.convertFromNetworkFilename(v9)
  if v5 == nil then
  end
  local v10, v11 = VehicleLoadingUtil.loadVehicle(v9, {yOffset = 0}, true, 0, Vehicle.PROPERTY_STATE_NONE, AccessHandler.EVERYONE, nil, {xmlFile = self, key = vehicle, resetVehicles = vehicleLoadState, keepPosition = v5}, v6, v7, v8)
  if v10 == nil then
    return VehicleLoadingUtil.VEHICLE_LOAD_ERROR
  end
  if v11 == VehicleLoadingUtil.VEHICLE_LOAD_ERROR then
    v12:removeVehicle(v10)
    return VehicleLoadingUtil.VEHICLE_LOAD_ERROR
  end
  if v11 == VehicleLoadingUtil.VEHICLE_LOAD_DELAYED then
    v12:removeVehicle(v10)
    if loadingData and v4 ~= nil then
      v12:addVehicleToSpawn(v4, vehicle)
      return VehicleLoadingUtil.VEHICLE_LOAD_DELAYED
    end
    if loadingData then
      local v12 = VehicleLoadingUtil.loadVehicleFromSavegameXML(self, vehicle, true, true, v4, false, v6, v7, v8)
      return VehicleLoadingUtil.VEHICLE_LOAD_DELAYED, v12
    end
    return VehicleLoadingUtil.VEHICLE_LOAD_ERROR
  end
  return v11, v10
end
function VehicleLoadingUtil:saveVehiclesToSavegameXML(vehicle, vehicleLoadState, loadingData)
  if g_isDevelopmentVersion then
    self:setString(vehicle .. "#xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance")
    self:setString(vehicle .. "#xsi:noNamespaceSchemaLocation", "D:/code/lsim2022/bin/shared/xml/schema/savegame_vehicles.xsd")
  end
  for v9, v10 in pairs(vehicleLoadState) do
    if not v10.isVehicleSaved then
      continue
    end
    local v11 = string.format("%s.vehicle(%d)", vehicle, v5 - 1)
    v4[v10] = v10.currentSavegameId
    if v10.customEnvironment ~= nil then
      if loadingData ~= nil then
        loadingData[v10.customEnvironment] = v10.customEnvironment
      end
      self:setValue(v11 .. "#modName", v12)
    end
    local v17 = NetworkUtil.convertToNetworkFilename(v10.configFileName)
    local v16 = HTMLUtil.encodeToHTML(...)
    self:setValue(...)
    v10:saveToXMLFile(self, v11, loadingData)
  end
  for v10, v11 in pairs(vehicleLoadState) do
    if not v11.isVehicleSaved then
      continue
    end
    if not (v11.saveAttachmentsToXMLFile ~= nil) then
      continue
    end
    local v15 = string.format("%s.attachments(%d)", vehicle, v6)
    local v12 = v11:saveAttachmentsToXMLFile(self, v15, v4)
    if not v12 then
      continue
    end
  end
  return v4
end
function VehicleLoadingUtil.setSaveIds(vehicles)
  for v5, v6 in ipairs(vehicles) do
    if not v6.isVehicleSaved then
      continue
    end
    v6.currentSavegameId = vehicle
  end
end
function VehicleLoadingUtil.save(xmlFileName, usedModNames)
  local vehicleLoadState = XMLFile.create("vehicleXMLFile", xmlFileName, "vehicles", Vehicle.xmlSchemaSavegame)
  if vehicleLoadState ~= nil then
    VehicleLoadingUtil.saveVehiclesToSavegameXML(vehicleLoadState, "vehicles", g_currentMission.vehicles, usedModNames)
    vehicleLoadState:save()
    vehicleLoadState:delete()
  end
end
