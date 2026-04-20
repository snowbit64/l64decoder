-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableTrainSystem = {}
source("dataS/scripts/placeables/specializations/events/PlaceableTrainSystemRentEvent.lua")
source("dataS/scripts/placeables/specializations/events/PlaceableTrainSystemSellEvent.lua")
function PlaceableTrainSystem.prerequisitesPresent(specializations)
  return true
end
function PlaceableTrainSystem.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "createVehicles", PlaceableTrainSystem.createVehicles)
  SpecializationUtil.registerFunction(placeableType, "railroadVehicleLoaded", PlaceableTrainSystem.railroadVehicleLoaded)
  SpecializationUtil.registerFunction(placeableType, "finalizeTrain", PlaceableTrainSystem.finalizeTrain)
  SpecializationUtil.registerFunction(placeableType, "setIsTrainTabbable", PlaceableTrainSystem.setIsTrainTabbable)
  SpecializationUtil.registerFunction(placeableType, "getIsTrainInDriveableRange", PlaceableTrainSystem.getIsTrainInDriveableRange)
  SpecializationUtil.registerFunction(placeableType, "getSplineTime", PlaceableTrainSystem.getSplineTime)
  SpecializationUtil.registerFunction(placeableType, "setSplineTime", PlaceableTrainSystem.setSplineTime)
  SpecializationUtil.registerFunction(placeableType, "addSplinePositionUpdateListener", PlaceableTrainSystem.addSplinePositionUpdateListener)
  SpecializationUtil.registerFunction(placeableType, "removeSplinePositionUpdateListener", PlaceableTrainSystem.removeSplinePositionUpdateListener)
  SpecializationUtil.registerFunction(placeableType, "updateTrainPositionByLocomotiveSpeed", PlaceableTrainSystem.updateTrainPositionByLocomotiveSpeed)
  SpecializationUtil.registerFunction(placeableType, "updateTrainPositionByLocomotiveSplinePosition", PlaceableTrainSystem.updateTrainPositionByLocomotiveSplinePosition)
  SpecializationUtil.registerFunction(placeableType, "updateTrainLength", PlaceableTrainSystem.updateTrainLength)
  SpecializationUtil.registerFunction(placeableType, "toggleRent", PlaceableTrainSystem.toggleRent)
  SpecializationUtil.registerFunction(placeableType, "getCanBeRented", PlaceableTrainSystem.getCanBeRented)
  SpecializationUtil.registerFunction(placeableType, "rentRailroad", PlaceableTrainSystem.rentRailroad)
  SpecializationUtil.registerFunction(placeableType, "returnRailroad", PlaceableTrainSystem.returnRailroad)
  SpecializationUtil.registerFunction(placeableType, "onDeleteObject", PlaceableTrainSystem.onDeleteObject)
  SpecializationUtil.registerFunction(placeableType, "getIsRented", PlaceableTrainSystem.getIsRented)
  SpecializationUtil.registerFunction(placeableType, "getSplineLength", PlaceableTrainSystem.getSplineLength)
  SpecializationUtil.registerFunction(placeableType, "getElectricitySpline", PlaceableTrainSystem.getElectricitySpline)
  SpecializationUtil.registerFunction(placeableType, "getElectricitySplineLength", PlaceableTrainSystem.getElectricitySplineLength)
  SpecializationUtil.registerFunction(placeableType, "getLengthSplineTime", PlaceableTrainSystem.getLengthSplineTime)
  SpecializationUtil.registerFunction(placeableType, "getSpline", PlaceableTrainSystem.getSpline)
  SpecializationUtil.registerFunction(placeableType, "updateDriveableState", PlaceableTrainSystem.updateDriveableState)
  SpecializationUtil.registerFunction(placeableType, "gsIsTrainFilled", PlaceableTrainSystem.gsIsTrainFilled)
  SpecializationUtil.registerFunction(placeableType, "onSellGoodsQuestion", PlaceableTrainSystem.onSellGoodsQuestion)
  SpecializationUtil.registerFunction(placeableType, "sellGoods", PlaceableTrainSystem.sellGoods)
end
function PlaceableTrainSystem.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getNeedDayChanged", PlaceableTrainSystem.getNeedDayChanged)
end
function PlaceableTrainSystem.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableTrainSystem)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableTrainSystem)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableTrainSystem)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableTrainSystem)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableTrainSystem)
  SpecializationUtil.registerEventListener(placeableType, "onReadUpdateStream", PlaceableTrainSystem)
  SpecializationUtil.registerEventListener(placeableType, "onWriteUpdateStream", PlaceableTrainSystem)
  SpecializationUtil.registerEventListener(placeableType, "onUpdate", PlaceableTrainSystem)
  SpecializationUtil.registerEventListener(placeableType, "onDayChanged", PlaceableTrainSystem)
end
function PlaceableTrainSystem:registerXMLPaths(v1)
  self:setXMLSpecializationType("Train")
  self:register(XMLValueType.FLOAT, v1 .. ".trainSystem.rent#pricePerHour", "Rent price per real time hour", 0)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".trainSystem.spline#node", "Spline node")
  self:register(XMLValueType.FLOAT, v1 .. ".trainSystem.spline#splineYOffset", "Spline Y offset", 0)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".trainSystem.drivingRange#startNode", "Start of range node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".trainSystem.drivingRange#endNode", "End of range node")
  self:register(XMLValueType.STRING, v1 .. ".trainSystem.drivingRange#sellingStationId", "Map bound id of selling station")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".trainSystem.electricitySpline#node", "Electricity spline")
  self:register(XMLValueType.FLOAT, v1 .. ".trainSystem.electricitySpline#splineYOffset", "Electricity spline Y offset", 0)
  self:register(XMLValueType.STRING, v1 .. ".trainSystem.train.vehicle(?)#xmlFilename", "XMl filename")
  RailroadCrossing.registerXMLPaths(self, v1 .. ".trainSystem.railroadCrossings.railroadCrossing(?)")
  RailroadCaller.registerXMLPaths(self, v1 .. ".trainSystem.railroadCallers.railroadCaller(?)")
  self:setXMLSpecializationType()
end
function PlaceableTrainSystem:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Train")
  self:register(XMLValueType.FLOAT, v1 .. "#splineTime", "Current spline time")
  self:register(XMLValueType.BOOL, v1 .. "#isRented", "Is train rented")
  self:register(XMLValueType.INT, v1 .. "#rentFarmId", "Train is rented by farm")
  self:register(XMLValueType.FLOAT, v1 .. "#currentPrice", "Current pending rent price")
  self:register(XMLValueType.INT, v1 .. ".railroadVehicle(?)#vehicleId", "Vehicle id")
  self:register(XMLValueType.INT, v1 .. ".railroadObjects(?)#index", "Object index")
  self:setXMLSpecializationType()
end
function PlaceableTrainSystem:onLoad(savegame)
  self.spec_trainSystem.splineTime = -1
  self.spec_trainSystem.splineTimeSent = self.spec_trainSystem.splineTime
  self.spec_trainSystem.splineEndTime = 0
  self.spec_trainSystem.trainLengthSplineTime = 0
  self.spec_trainSystem.splinePositionUpdateListener = {}
  self.spec_trainSystem.startSplineTime = self.spec_trainSystem.startSplineTime or 0
  self.spec_trainSystem.railroadVehicles = {}
  self.spec_trainSystem.trainLength = 0
  local v3 = self:getNextDirtyFlag()
  self.spec_trainSystem.dirtyFlag = v3
  v3 = self:getNextDirtyFlag()
  self.spec_trainSystem.stationDirtyFlag = v3
  v3 = InterpolationTime.new(1.2)
  self.spec_trainSystem.networkTimeInterpolator = v3
  v3 = InterpolatorValue.new(0)
  self.spec_trainSystem.networkSplineTimeInterpolator = v3
  self.spec_trainSystem.isRented = false
  self.spec_trainSystem.rentFarmId = FarmManager.SPECTATOR_FARM_ID
  self.spec_trainSystem.lastRentFarmId = FarmManager.SPECTATOR_FARM_ID
  self.spec_trainSystem.currentPrice = 0
  v3 = v3:getValue("placeable.trainSystem.rent#pricePerHour", 0)
  self.spec_trainSystem.rentPricePerHour = v3
  self.spec_trainSystem.rentPricePerMS = self.spec_trainSystem.rentPricePerHour / 60 / 60 / 1000
  self.spec_trainSystem.rootLocomotive = nil
  v3 = v3:getValue("placeable.trainSystem.spline#node", nil, self.components, self.i3dMappings)
  self.spec_trainSystem.spline = v3
  if self.spec_trainSystem.spline == nil then
    Logging.xmlError(self.xmlFile, "Missing spline node!")
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  local v4 = getGeometry(v2.spline)
  v3 = getHasClassId(v4, ClassIds.SPLINE)
  if not v3 then
    Logging.xmlError(self.xmlFile, "Given node is not a spline!")
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  v3 = getIsSplineClosed(v2.spline)
  if not v3 then
    Logging.xmlError(self.xmlFile, "Train spline is not closed. Open splines are not supported!")
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  v3 = getSplineLength(v2.spline)
  v2.splineLength = v3
  v3 = v3:getValue("placeable.trainSystem.spline#splineYOffset", 0)
  v2.splineYOffset = v3
  v2.splineDriveRange = {0, 1}
  v3 = v3:getValue("placeable.trainSystem.drivingRange#startNode", nil, self.components, self.i3dMappings)
  v2.drivingRangeStart = v3
  v3 = v3:getValue("placeable.trainSystem.drivingRange#endNode", nil, self.components, self.i3dMappings)
  v2.drivingRangeEnd = v3
  v3 = v3:getValue("placeable.trainSystem.drivingRange#sellingStationId")
  v2.drivingRangeSellingStationId = v3
  v3 = v3:getText("ui_infoTrainDrive")
  v2.textDriveInfo = v3
  v3 = v3:getText("ui_questionTrainSellGoods")
  v2.textSellQuestion = v3
  v2.hasLimitedRange = false
  if v2.drivingRangeStart ~= nil and v2.drivingRangeEnd ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 251, target 293)
    local v8, v9, v10 = getSplinePosition(v2.spline, 0)
    local v11, v12, v13 = getWorldTranslation(v2.drivingRangeStart)
    local v14 = MathUtil.vector3Length(v8 - v11, v9 - v12, v10 - v13)
    if v14 < math.huge then
      v2.splineDriveRange[1] = 0
    end
    local v15, v16, v17 = getWorldTranslation(v2.drivingRangeEnd)
    local v18 = MathUtil.vector3Length(v8 - v15, v9 - v16, v10 - v17)
    if v18 < v4 then
      v2.splineDriveRange[2] = v7
    end
    -- TODO: structure LOP_FORNLOOP (pc 292, target 252)
    if v2.splineDriveRange[2] < v2.splineDriveRange[1] then
      v2.splineDriveRange[2] = v2.splineDriveRange[1]
      v2.splineDriveRange[1] = v2.splineDriveRange[2]
    end
    v2.hasLimitedRange = true
  end
  v2.sellingStationPlaceable = nil
  v2.sellingStationPlaceableId = nil
  v2.sellingStation = nil
  v2.showDialog = 0
  v2.showDialogDelay = 0
  v2.lastIsInDriveableRange = true
  v2.lastSplineTime = 0
  v3 = v3:getValue("placeable.trainSystem.electricitySpline#node", nil, self.components, self.i3dMappings)
  v2.electricitySpline = v3
  if v2.electricitySpline ~= nil then
    v4 = getGeometry(v2.electricitySpline)
    v3 = getHasClassId(v4, ClassIds.SPLINE)
    if v3 then
      v3 = getIsSplineClosed(v2.electricitySpline)
      if v3 then
        local v3, v4, v5 = getSplinePosition(v2.spline, 0)
        local v6, v7, v8 = getSplinePosition(v2.spline, 0)
        v9 = MathUtil.vector2Length(v3 - v6, v5 - v8)
        if v9 < 5 then
          v9 = getSplineLength(v2.electricitySpline)
          v2.electricitySplineLength = v9
          v9 = v9:getValue("placeable.trainSystem.electricitySpline#splineYOffset", 0)
          v2.electricitySplineYOffset = v9
          -- goto L437  (LOP_JUMP +29)
        end
        Logging.xmlError(self.xmlFile, "Railroad and electricity spline should almost start at the same x and z positions. Ignoring electricity spline!")
        v2.electricitySpline = nil
        -- goto L437  (LOP_JUMP +19)
      end
      Logging.xmlError(self.xmlFile, "Railroad electricity spline has to be closed. Ignoring electricity spline!")
      v2.electricitySpline = nil
    else
      Logging.xmlError(self.xmlFile, "Given electricitySpline node is not a spline. Ignoring electricity spline!")
      v2.electricitySpline = nil
    end
  end
  v2.vehiclesToLoad = {}
  if self.isServer then
    v3:iterate("placeable.trainSystem.train.vehicle", function(self, savegame)
      local v2 = v2:getValue(savegame .. "#xmlFilename")
      if v2 ~= nil then
        table.insert(u1.vehiclesToLoad, v2)
      end
    end)
  end
  v2.railroadObjects = {}
  v2.railroadCrossings = {}
  v3:iterate("placeable.trainSystem.railroadCrossings.railroadCrossing", function(self, savegame)
    local v2 = RailroadCrossing.new(u0.isServer, u0.isClient, u0, u0.rootNode)
    local v3 = v2:loadFromXML(u0.xmlFile, savegame, u0.components, u0.i3dMappings)
    if v3 then
      table.insert(u1.railroadCrossings, v2)
      table.insert(u1.railroadObjects, v2)
      return
    end
    v2:delete()
  end)
  v2.railroadCallers = {}
  v3:iterate("placeable.trainSystem.railroadCallers.railroadCaller", function(self, savegame)
    local v2 = RailroadCaller.new(u0.isServer, u0.isClient, u0, u0.rootNode)
    local v3 = v2:loadFromXML(u0.xmlFile, savegame, u0.components, u0.i3dMappings)
    if v3 then
      table.insert(u1.railroadCallers, v2)
      table.insert(u1.railroadObjects, v2)
    end
  end)
  -- TODO: structure LOP_FORNPREP (pc 489, target 533)
  v6, v7, v8 = getSplinePosition(v2.spline, 0)
  for v12, v13 in ipairs(v2.railroadObjects) do
    v14, v15, v16 = getWorldTranslation(v13.rootNode)
    v17 = MathUtil.vector3Length(v6 - v14, v7 - v15, v8 - v16)
    if v13.nearestDistance == nil then
      v13.nearestDistance = v17
      v13.nearestTime = v5
    else
      if not (v17 < v13.nearestDistance) then
        continue
      end
      v13.nearestDistance = v17
      v13.nearestTime = v5
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 532, target 490)
  v2.lastVehicle = nil
  v2.numVehiclesToLoad = 0
end
function PlaceableTrainSystem:onDelete()
  if self.spec_trainSystem.railroadObjects ~= nil then
    for v5, v6 in ipairs(self.spec_trainSystem.railroadObjects) do
      v6:delete()
    end
  end
  if v1.railroadVehicles ~= nil then
    for v5, v6 in ipairs(v1.railroadVehicles) do
      v6.trainSystem = nil
    end
  end
  v2:removeTrainSystem(self)
end
function PlaceableTrainSystem:onFinalizePlacement()
  if self.spec_trainSystem.railroadCrossings ~= nil then
    for v5, v6 in ipairs(self.spec_trainSystem.railroadCrossings) do
      v6:findBlockingPositions()
    end
  end
  for v5, v6 in ipairs(v1.railroadObjects) do
    if v6.setSplineTimeByPosition ~= nil then
      v6:setSplineTimeByPosition(v6.nearestTime, v1.splineLength)
    end
    if not (v6.onSplinePositionTimeUpdate ~= nil) then
      continue
    end
    v6:onSplinePositionTimeUpdate(v1.splineTime, v1.splineEndTime)
  end
  v2:addTrainSystem(self)
  if g_currentMission.isMissionStarted then
    self:createVehicles()
    return
  end
  v2:subscribeOneshot(MessageType.LOADED_ALL_SAVEGAME_VEHICLES, self.createVehicles, self)
end
function PlaceableTrainSystem:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    self.spec_trainSystem.railroadVehicleIds = {}
    local numVehicles = streamReadInt8(streamId)
    -- TODO: structure LOP_FORNPREP (pc 17, target 26)
    local v9 = NetworkUtil.readNodeObjectId(streamId)
    self.spec_trainSystem.railroadVehicleIds[1] = v9
    -- TODO: structure LOP_FORNLOOP (pc 25, target 18)
    local v5 = streamReadFloat32(streamId)
    v6:setValue(v5)
    v6:reset()
    self.spec_trainSystem.splineTime = v5
    for v9, v10 in ipairs(self.spec_trainSystem.railroadObjects) do
      if not (v10.readStream ~= nil) then
        continue
      end
      v10:readStream(streamId, connection)
    end
    v6 = streamReadBool(streamId)
    v3.isRented = v6
    v6 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    v3.rentFarmId = v6
    v6 = NetworkUtil.readNodeObjectId(streamId)
    v3.sellingStationPlaceableId = v6
    self:raiseActive()
  end
end
function PlaceableTrainSystem:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    streamWriteInt8(streamId, #self.spec_trainSystem.railroadVehicles)
    -- TODO: structure LOP_FORNPREP (pc 17, target 26)
    NetworkUtil.writeNodeObject(streamId, self.spec_trainSystem.railroadVehicles[1])
    -- TODO: structure LOP_FORNLOOP (pc 25, target 18)
    streamWriteFloat32(streamId, self.spec_trainSystem.splineTimeSent)
    for v8, v9 in ipairs(self.spec_trainSystem.railroadObjects) do
      if not (v9.writeStream ~= nil) then
        continue
      end
      v9:writeStream(streamId, connection)
    end
    streamWriteBool(streamId, v3.isRented)
    streamWriteUIntN(streamId, v3.rentFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    NetworkUtil.writeNodeObject(streamId, v3.sellingStationPlaceable)
  end
end
function PlaceableTrainSystem:onReadUpdateStream(streamId, timestamp, connection)
  local v5 = connection:getIsServer()
  if v5 then
    v5 = streamReadBool(streamId)
    if v5 then
      v5 = streamReadFloat32(streamId)
      v6:startNewPhaseNetwork()
      v6:setTargetValue(v5)
      for v9, v10 in ipairs(self.spec_trainSystem.railroadObjects) do
        if not (v10.readUpdateStream ~= nil) then
          continue
        end
        v10:readUpdateStream(streamId, timestamp, connection)
      end
    end
    v5 = streamReadBool(streamId)
    if v5 then
      v5 = NetworkUtil.readNodeObjectId(streamId)
      v4.sellingStationPlaceableId = v5
    end
  end
end
function PlaceableTrainSystem:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v5 = connection:getIsServer()
  if not v5 then
    local v8 = bitAND(dirtyMask, self.spec_trainSystem.dirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    if v5 then
      streamWriteFloat32(streamId, v4.splineTimeSent)
      for v8, v9 in ipairs(v4.railroadObjects) do
        if not (v9.writeUpdateStream ~= nil) then
          continue
        end
        v9:writeUpdateStream(streamId, connection, dirtyMask)
      end
    end
    v8 = bitAND(dirtyMask, v4.stationDirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    if v5 then
      NetworkUtil.writeNodeObject(streamId, v4.sellingStationPlaceable)
    end
  end
end
function PlaceableTrainSystem:loadFromXMLFile(xmlFile, key)
  xmlFile:iterate(key .. ".railroadObjects", function(self, xmlFile)
    local key = key:getValue(xmlFile .. "#index")
    if key ~= nil and u1.railroadObjects[key] ~= nil then
      u1.railroadObjects[key]:loadFromXMLFile(u0, xmlFile)
    end
  end)
  local v4 = xmlFile:getValue(key .. "#isRented", self.spec_trainSystem.isRented)
  self.spec_trainSystem.isRented = v4
  v4 = xmlFile:getValue(key .. "#rentFarmId", self.spec_trainSystem.rentFarmId)
  self.spec_trainSystem.rentFarmId = v4
  self.spec_trainSystem.lastRentFarmId = self.spec_trainSystem.rentFarmId
  v4 = xmlFile:getValue(key .. "#currentPrice", self.spec_trainSystem.currentPrice)
  self.spec_trainSystem.currentPrice = v4
  local v6 = xmlFile:getValue(key .. "#splineTime")
  v4 = SplineUtil.getValidSplineTime(v6 or 0)
  self.spec_trainSystem.startSplineTime = v4
  self.spec_trainSystem.vehicleIdsToLoad = {}
  while true do
    v5 = string.format("%s.railroadVehicle(%d)", key, v4)
    v6 = xmlFile:hasProperty(v5)
    if not v6 then
      break
    end
    v6 = xmlFile:getValue(v5 .. "#vehicleId")
    if v6 ~= nil then
      table.insert(v3.vehicleIdsToLoad, v6)
    end
  end
end
function PlaceableTrainSystem:saveToXMLFile(xmlFile, key, usedModNames)
  local v8 = SplineUtil.getValidSplineTime(self.spec_trainSystem.splineTime)
  xmlFile:setValue(...)
  for v8, v9 in ipairs(self.spec_trainSystem.railroadVehicles) do
    local v10 = string.format("%s.railroadVehicle(%d)", key, v8 - 1)
    xmlFile:setValue(v10 .. "#vehicleId", v9.currentSavegameId or 0)
  end
  for v8, v9 in ipairs(v4.railroadObjects) do
    v10 = string.format("%s.railroadObjects(%d)", key, v8 - 1)
    if not (v9.saveToXMLFile ~= nil) then
      continue
    end
    xmlFile:setValue(v10 .. "#index", v8)
    v9.saveToXMLFile(xmlFile, v10, usedModNames)
  end
  xmlFile:setValue(key .. "#isRented", v4.isRented)
  xmlFile:setValue(key .. "#rentFarmId", v4.rentFarmId)
  xmlFile:setValue(key .. "#currentPrice", v4.currentPrice)
end
function PlaceableTrainSystem:onUpdate(dt)
  if not self.finishedFirstUpdate then
    if self.spec_trainSystem.isRented then
      local v6 = v6:getFarmId()
      if v6 ~= self.spec_trainSystem.rentFarmId then
      end
    end
    self:setIsTrainTabbable(v5)
    self.finishedFirstUpdate = true
  end
  for v6, v7 in ipairs(v2.railroadObjects) do
    if not (v7.update ~= nil) then
      continue
    end
    v7:update(dt)
  end
  if v2.isRented then
    v2.currentPrice = v2.currentPrice + v2.rentPricePerMS * dt
  end
  if not self.isServer and self.isClient then
    if v2.railroadVehicleIds ~= nil then
      for v7, v8 in pairs(v2.railroadVehicleIds) do
        local v9 = NetworkUtil.getObject(v8)
        if v9 ~= nil then
          local v10 = v9:getIsSynchronized()
          if not not v10 then
            continue
          end
        end
      end
      if v3 then
        v2.rootLocomotive = nil
        for v7, v8 in pairs(v2.railroadVehicleIds) do
          v9 = NetworkUtil.getObject(v8)
          if v9 ~= nil then
            v9:setTrainSystem(self)
            local v12 = v9:getFrontToBackDistance()
            v2.trainLength = v2.trainLength + v12
            v2.trainLengthSplineTime = v2.trainLength / v2.splineLength
            table.insert(v2.railroadVehicles, v7, v9)
            if v2.rootLocomotive == nil and v9.startAutomatedTrainTravel ~= nil then
              v2.rootLocomotive = v9
            end
          end
          v2.railroadVehicleIds[v7] = nil
        end
        v4 = next(v2.railroadVehicleIds)
        if v4 == nil then
          v2.railroadVehicleIds = nil
          if v2.isRented then
            v7 = v7:getFarmId()
            if v7 ~= v2.rentFarmId then
            end
          end
          self:setIsTrainTabbable(v6)
        end
      end
    end
    v3:update(dt)
    v3 = v3:getAlpha()
    v4 = v4:getInterpolatedValue(v3)
    v5 = SplineUtil.getValidSplineTime(v4)
    self:updateTrainPositionByLocomotiveSplinePosition(v5)
  end
  if v2.hasLimitedRange then
    if v2.sellingStationPlaceable == nil and v2.drivingRangeSellingStationId ~= nil then
      for v6, v7 in pairs(g_currentMission.placeableSystem.placeables) do
        if not (v7.mapBoundId == v2.drivingRangeSellingStationId) then
          continue
        end
        if not (v7.spec_sellingStation ~= nil) then
          continue
        end
        v2.sellingStationPlaceable = v7
        v2.sellingStation = v7.spec_sellingStation.sellingStation
        self:raiseDirtyFlags(v2.stationDirtyFlag)
      end
      v2.drivingRangeSellingStationId = nil
    end
    if v2.sellingStationPlaceable == nil and v2.sellingStationPlaceableId ~= nil then
      v3 = NetworkUtil.getObject(v2.sellingStationPlaceableId)
      if v3 ~= nil and v3.spec_sellingStation ~= nil then
        v2.sellingStationPlaceable = v3
        v2.sellingStation = v3.spec_sellingStation.sellingStation
      end
    end
    if 0 < v2.showDialogDelay then
      v2.showDialogDelay = v2.showDialogDelay - dt
      if v2.showDialogDelay <= 0 then
        if v2.sellingStationPlaceable ~= nil then
          v4 = v4:getName()
        end
        v4 = string.format(v2.textDriveInfo, v3)
        v5 = string.format(v2.textSellQuestion, v3)
        if v2.showDialog == 2 then
          YesNoDialog.show(self.onSellGoodsQuestion, self, v4 .. "\n\n" .. v5)
        else
          InfoDialog.show(v4)
        end
        v2.showDialog = 0
      end
    end
  end
  self:raiseActive()
end
function PlaceableTrainSystem:createVehicles()
  if self.spec_trainSystem.vehicleIdsToLoad ~= nil then
    -- if 0 >= #v0.spec_trainSystem.vehicleIdsToLoad then goto L49 end
    for v5, v6 in ipairs(self.spec_trainSystem.vehicleIdsToLoad) do
      if not (g_currentMission.savegameIdToVehicle[v6] ~= nil) then
        continue
      end
      if g_currentMission.savegameIdToVehicle[v6].setTrainSystem == nil then
      else
        g_currentMission.savegameIdToVehicle[v6]:setTrainSystem(self)
        g_currentMission.savegameIdToVehicle[v6].trainVehicleIndex = v5
        table.insert(v1.railroadVehicles, g_currentMission.savegameIdToVehicle[v6])
      end
    end
    self:finalizeTrain(false)
  else
    for v5, v6 in ipairs(self.spec_trainSystem.vehiclesToLoad) do
      local v7 = Utils.getFilename(v6, v1.baseDirectory)
      v1.numVehiclesToLoad = v1.numVehiclesToLoad + 1
      VehicleLoadingUtil.loadVehicle(v7, {x = 0, z = 0, yOffset = 0}, true, 0, Vehicle.PROPERTY_STATE_NONE, AccessHandler.EVERYONE, nil, nil, v1.railroadVehicleLoaded, self, {filename = v7, vehicleIndex = v5})
    end
  end
  v1.vehiclesToLoad = {}
end
function PlaceableTrainSystem:railroadVehicleLoaded(vehicle, vehicleLoadState, args)
  if vehicle ~= nil then
    -- if v2 ~= VehicleLoadingUtil.VEHICLE_LOAD_OK then goto L27 end
    vehicle:setTrainSystem(self)
    vehicle.trainVehicleIndex = args.vehicleIndex
    table.insert(self.spec_trainSystem.railroadVehicles, vehicle)
  else
    Logging.warning("(%s) Could not create trainsystem vehicle!", args.filename)
  end
  v6.numVehiclesToLoad = v6.numVehiclesToLoad - 1
  if v6.numVehiclesToLoad == 0 and #v6.vehiclesToLoad == 0 then
    self:finalizeTrain(true)
  end
end
function PlaceableTrainSystem:finalizeTrain(attachVehicles)
  table.sort(self.spec_trainSystem.railroadVehicles, function(self, attachVehicles)
    if self.trainVehicleIndex >= attachVehicles.trainVehicleIndex then
    end
    return true
  end)
  self.spec_trainSystem.rootLocomotive = nil
  for v7, v8 in ipairs(self.spec_trainSystem.railroadVehicles) do
    v8:addDeleteListener(self)
    if v2.rootLocomotive == nil and v8.startAutomatedTrainTravel ~= nil then
      v2.rootLocomotive = v8
    end
    if attachVehicles and v3 ~= nil then
      v3:attachImplement(v8, 1, 1, true)
    end
  end
  self:updateTrainLength(v2.startSplineTime)
  if v2.isRented then
    v7 = v7:getFarmId()
    if v7 ~= v2.rentFarmId then
    end
  end
  self:setIsTrainTabbable(v6)
end
function PlaceableTrainSystem:setIsTrainTabbable(isTabbable)
  if isTabbable then
    local v3 = v3:getValue("isTrainTabbable")
  end
  if v2.hasLimitedRange and v3 then
  end
  for v6, v7 in ipairs(v2.railroadVehicles) do
    if not (v7.setIsTabbable ~= nil) then
      continue
    end
    v7:setIsTabbable(isTabbable)
  end
end
function PlaceableTrainSystem:getIsTrainInDriveableRange()
  return self.spec_trainSystem.lastIsInDriveableRange
end
function PlaceableTrainSystem:getSplineTime()
  return self.spec_trainSystem.splineTime
end
function PlaceableTrainSystem:setSplineTime(startTime, endTime)
  if startTime ~= self.spec_trainSystem.splineTime then
    if self.spec_trainSystem.hasLimitedRange then
      self:updateDriveableState(startTime)
    end
    local t1 = SplineUtil.getValidSplineTime(startTime)
    for v8, v9 in ipairs(v3.railroadVehicles) do
      local v10 = v9:alignToSplineTime(v3.spline, v3.splineYOffset, t1)
    end
    for v8, v9 in ipairs(v3.splinePositionUpdateListener) do
      v9:onSplinePositionTimeUpdate(startTime, endTime)
    end
    v3.splineTime = startTime
    v3.splineEndTime = endTime
    if self.isServer then
      v6 = math.abs(v3.splineTime - v3.splineTimeSent)
      if 0.02 / v3.splineLength < v6 then
        v3.splineTimeSent = v3.splineTime
        self:raiseDirtyFlags(v3.dirtyFlag)
      end
    end
  end
end
function PlaceableTrainSystem:addSplinePositionUpdateListener(listener)
  if listener ~= nil then
    table.addElement(self.spec_trainSystem.splinePositionUpdateListener, listener)
  end
end
function PlaceableTrainSystem:removeSplinePositionUpdateListener(listener)
  if listener ~= nil then
    table.removeElement(self.spec_trainSystem.splinePositionUpdateListener, listener)
  end
end
function PlaceableTrainSystem:updateTrainPositionByLocomotiveSpeed(dt, speed)
  local v7 = self:getSplineTime()
  self:setSplineTime(v7 + speed * dt / 1000 / self.spec_trainSystem.splineLength, v7 + speed * dt / 1000 / self.spec_trainSystem.splineLength - self.spec_trainSystem.trainLengthSplineTime)
end
function PlaceableTrainSystem:updateTrainPositionByLocomotiveSplinePosition(splinePosition)
  self:setSplineTime(splinePosition, splinePosition - self.spec_trainSystem.trainLengthSplineTime)
end
function PlaceableTrainSystem:updateTrainLength(splinePosition)
  for v6, v7 in ipairs(self.spec_trainSystem.railroadVehicles) do
    local v10 = v7:getFrontToBackDistance()
    v2.trainLength = v2.trainLength + v10
  end
  v2.trainLengthSplineTime = v2.trainLength / v2.splineLength
  self:updateTrainPositionByLocomotiveSplinePosition(splinePosition)
end
function PlaceableTrainSystem:toggleRent(farmId, position)
  if self.spec_trainSystem.isRented then
    -- if v0.spec_trainSystem.rentFarmId ~= v1 then goto L19 end
    self:returnRailroad()
    return
  end
  self:rentRailroad(farmId, position, false)
end
function PlaceableTrainSystem:rentRailroad(farmId, position, noEventSend)
  self.spec_trainSystem.isRented = true
  self.spec_trainSystem.rentFarmId = farmId
  self.spec_trainSystem.lastRentFarmId = farmId
  v5:setRequestedSplinePosition(position)
  for v8, v9 in ipairs(self.spec_trainSystem.railroadVehicles) do
    v9:setOwnerFarmId(v4.rentFarmId, true)
  end
  v8 = v8:getFarmId()
  if v8 ~= farmId then
  end
  self:setIsTrainTabbable(true)
  PlaceableTrainSystemRentEvent.sendEvent(self, true, farmId, position, noEventSend)
end
function PlaceableTrainSystem:returnRailroad(noEventSend)
  self.spec_trainSystem.isRented = false
  if self.isServer then
    if 0 < self.spec_trainSystem.currentPrice then
      v3:addMoney(-self.spec_trainSystem.currentPrice, self.spec_trainSystem.rentFarmId, MoneyType.LEASING_COSTS, true)
      v3:showMoneyChange(MoneyType.LEASING_COSTS, nil, false, self.spec_trainSystem.rentFarmId)
      self.spec_trainSystem.currentPrice = 0
    end
    v3:startAutomatedTrainTravel()
  end
  v2.rentFarmId = FarmManager.SPECTATOR_FARM_ID
  for v6, v7 in ipairs(v2.railroadVehicles) do
    v7:setOwnerFarmId(v2.rentFarmId, true)
  end
  self:setIsTrainTabbable(false)
  PlaceableTrainSystemRentEvent.sendEvent(self, false, nil, nil, noEventSend)
end
function PlaceableTrainSystem:onDayChanged()
  if self.isServer and 0 < self.spec_trainSystem.currentPrice then
    v2:addMoney(-self.spec_trainSystem.currentPrice, self.spec_trainSystem.rentFarmId, MoneyType.LEASING_COSTS, true)
    v2:showMoneyChange(MoneyType.LEASING_COSTS, nil, false, self.spec_trainSystem.rentFarmId)
    self.spec_trainSystem.currentPrice = 0
  end
end
function PlaceableTrainSystem:getIsRented()
  return self.spec_trainSystem.isRented
end
function PlaceableTrainSystem:getCanBeRented(farmId)
  if self.spec_trainSystem.isRented and self.spec_trainSystem.rentFarmId ~= farmId then
    return false
  end
  return true
end
function PlaceableTrainSystem:onDeleteObject(object)
  local v3 = table.removeElement(self.spec_trainSystem.railroadVehicles, object)
  if v3 then
    self:updateTrainLength(self.spec_trainSystem.splineTime)
  end
end
function PlaceableTrainSystem:getSplineLength()
  return self.spec_trainSystem.splineLength
end
function PlaceableTrainSystem:getElectricitySpline()
  return self.spec_trainSystem.electricitySpline
end
function PlaceableTrainSystem:getElectricitySplineLength()
  return self.spec_trainSystem.electricitySplineLength or 0
end
function PlaceableTrainSystem.getNeedDayChanged(v0, v1)
  return true
end
function PlaceableTrainSystem:getLengthSplineTime()
  return self.spec_trainSystem.trainLengthSplineTime
end
function PlaceableTrainSystem:getSpline()
  return self.spec_trainSystem.spline
end
function PlaceableTrainSystem:updateDriveableState(newSplineTime)
  if self.spec_trainSystem.splineDriveRange[1] <= newSplineTime % 1 and newSplineTime % 1 > self.spec_trainSystem.splineDriveRange[2] then
  end
  if v3 ~= v2.lastIsInDriveableRange then
    v2.lastIsInDriveableRange = v3
    if not v3 then
      for v7, v8 in ipairs(v2.railroadVehicles) do
        if self.isClient and v8.getIsEntered ~= nil then
          local v9 = v8:getIsEntered()
          if v9 then
            v9:onLeaveVehicle()
            v2.showDialogDelay = 100
            v2.showDialog = 1
            v9 = self:gsIsTrainFilled()
            if v9 then
              v2.showDialog = 2
            end
          end
        end
        if not self.isServer then
          continue
        end
        if not (v8.spec_locomotive ~= nil) then
          continue
        end
        if not (v8.spec_locomotive.state ~= Locomotive.STATE_AUTOMATIC_TRAVEL_ACTIVE) then
          continue
        end
        if not (v8.spec_locomotive.state ~= Locomotive.STATE_REQUESTED_POSITION) then
          continue
        end
        if not (v8.spec_locomotive.state ~= Locomotive.STATE_REQUESTED_POSITION_BRAKING) then
          continue
        end
        v8:setLocomotiveState(Locomotive.STATE_AUTOMATIC_TRAVEL_ACTIVE)
        local v10 = self:gsIsTrainFilled()
        if not v10 and v2.isRented then
          self:returnRailroad()
        end
        if v2.splineTime < newSplineTime then
          v9.sellingDirection = 1
        else
          v9.sellingDirection = -1
        end
      end
    elseif self.isServer then
      for v7, v8 in ipairs(v2.railroadVehicles) do
        if not (v8.spec_locomotive ~= nil) then
          continue
        end
        v10 = v8:getIsReadyForAutomatedTrainTravel()
        if not v10 then
          if not (v8.spec_locomotive.state == Locomotive.STATE_AUTOMATIC_TRAVEL_ACTIVE) then
            continue
          end
          v8:setLocomotiveState(Locomotive.STATE_MANUAL_TRAVEL_INACTIVE)
          v8.spec_locomotive.sellingDirection = 1
        else
          if not (v8.spec_locomotive.sellingDirection ~= nil) then
            continue
          end
          if not (v8.spec_locomotive.sellingDirection < 0) then
            continue
          end
          v8.spec_locomotive.sellingDirection = 1
          v8:setLocomotiveState(Locomotive.STATE_MANUAL_TRAVEL_INACTIVE)
        end
      end
    end
    if v2.isRented then
      v7 = v7:getFarmId()
      if v7 ~= v2.rentFarmId then
      end
    end
    self:setIsTrainTabbable(v6)
  end
end
function PlaceableTrainSystem:gsIsTrainFilled()
  for v5, v6 in ipairs(self.spec_trainSystem.railroadVehicles) do
    if not (v6.getFillUnits ~= nil) then
      continue
    end
    local v7 = v6:getFillUnits()
    for v11, v12 in ipairs(v7) do
      if not (0 < v12.fillLevel) then
        continue
      end
      return true
    end
  end
  return false
end
function PlaceableTrainSystem.onSellGoodsQuestion(v0, newSplineTime)
  if newSplineTime then
    local v2 = v2:getServerConnection()
    local v4 = PlaceableTrainSystemSellEvent.new(v0)
    v2:sendEvent(...)
  end
end
function PlaceableTrainSystem:sellGoods()
  if self.spec_trainSystem.sellingStation ~= nil and self.spec_trainSystem.rentFarmId ~= 0 then
    for v6, v7 in ipairs(self.spec_trainSystem.railroadVehicles) do
      if not (v7.getFillUnits ~= nil) then
        continue
      end
      local v8 = v7:getFillUnits()
      for v12, v13 in ipairs(v8) do
        local v14 = v14:addFillLevelFromTool(newSplineTime.rentFarmId, v13.fillLevel, v13.fillType, nil, ToolType.UNDEFINED)
        local v17 = v7:getOwnerFarmId()
        v7:addFillUnitFillLevel(v17, v12, -v14, v13.fillType, ToolType.UNDEFINED, nil)
      end
    end
    if 0 < v2 and newSplineTime.isRented then
      self:returnRailroad()
    end
  end
end
