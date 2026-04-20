-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHusbandryAnimals = {}
function PlaceableHusbandryAnimals.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(PlaceableHusbandry, v0)
end
function PlaceableHusbandryAnimals.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onHusbandryAnimalsCreated")
  SpecializationUtil.registerEvent(v0, "onHusbandryAnimalsUpdate")
end
function PlaceableHusbandryAnimals.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "onExternalNavigationMeshLoaded", PlaceableHusbandryAnimals.onExternalNavigationMeshLoaded)
  SpecializationUtil.registerFunction(placeableType, "createHusbandry", PlaceableHusbandryAnimals.createHusbandry)
  SpecializationUtil.registerFunction(placeableType, "updateVisualAnimals", PlaceableHusbandryAnimals.updateVisualAnimals)
  SpecializationUtil.registerFunction(placeableType, "getNumOfFreeAnimalSlots", PlaceableHusbandryAnimals.getNumOfFreeAnimalSlots)
  SpecializationUtil.registerFunction(placeableType, "getNumOfAnimals", PlaceableHusbandryAnimals.getNumOfAnimals)
  SpecializationUtil.registerFunction(placeableType, "getMaxNumOfAnimals", PlaceableHusbandryAnimals.getMaxNumOfAnimals)
  SpecializationUtil.registerFunction(placeableType, "getNumOfClusters", PlaceableHusbandryAnimals.getNumOfClusters)
  SpecializationUtil.registerFunction(placeableType, "getSupportsAnimalSubType", PlaceableHusbandryAnimals.getSupportsAnimalSubType)
  SpecializationUtil.registerFunction(placeableType, "getClusters", PlaceableHusbandryAnimals.getClusters)
  SpecializationUtil.registerFunction(placeableType, "getCluster", PlaceableHusbandryAnimals.getCluster)
  SpecializationUtil.registerFunction(placeableType, "getClusterById", PlaceableHusbandryAnimals.getClusterById)
  SpecializationUtil.registerFunction(placeableType, "getClusterSystem", PlaceableHusbandryAnimals.getClusterSystem)
  SpecializationUtil.registerFunction(placeableType, "getAnimalTypeIndex", PlaceableHusbandryAnimals.getAnimalTypeIndex)
  SpecializationUtil.registerFunction(placeableType, "renameAnimal", PlaceableHusbandryAnimals.renameAnimal)
  SpecializationUtil.registerFunction(placeableType, "addCluster", PlaceableHusbandryAnimals.addCluster)
  SpecializationUtil.registerFunction(placeableType, "addAnimals", PlaceableHusbandryAnimals.addAnimals)
  SpecializationUtil.registerFunction(placeableType, "updatedClusters", PlaceableHusbandryAnimals.updatedClusters)
  SpecializationUtil.registerFunction(placeableType, "consoleCommandAddAnimals", PlaceableHusbandryAnimals.consoleCommandAddAnimals)
  SpecializationUtil.registerFunction(placeableType, "getAnimalSupportsRiding", PlaceableHusbandryAnimals.getAnimalSupportsRiding)
  SpecializationUtil.registerFunction(placeableType, "getAnimalCanBeRidden", PlaceableHusbandryAnimals.getAnimalCanBeRidden)
  SpecializationUtil.registerFunction(placeableType, "startRiding", PlaceableHusbandryAnimals.startRiding)
  SpecializationUtil.registerFunction(placeableType, "onLoadedRideable", PlaceableHusbandryAnimals.onLoadedRideable)
  SpecializationUtil.registerFunction(placeableType, "getIsInAnimalDeliveryArea", PlaceableHusbandryAnimals.getIsInAnimalDeliveryArea)
  SpecializationUtil.registerFunction(placeableType, "loadDeliveryArea", PlaceableHusbandryAnimals.loadDeliveryArea)
end
function PlaceableHusbandryAnimals.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getNeedDayChanged", PlaceableHusbandryAnimals.getNeedDayChanged)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableHusbandryAnimals.updateInfo)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateOutput", PlaceableHusbandryAnimals.updateOutput)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "canBeSold", PlaceableHusbandryAnimals.canBeSold)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getConditionInfos", PlaceableHusbandryAnimals.getConditionInfos)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getAnimalInfos", PlaceableHusbandryAnimals.getAnimalInfos)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getAnimalDescription", PlaceableHusbandryAnimals.getAnimalDescription)
end
function PlaceableHusbandryAnimals.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHusbandryAnimals)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHusbandryAnimals)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableHusbandryAnimals)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableHusbandryAnimals)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableHusbandryAnimals)
  SpecializationUtil.registerEventListener(placeableType, "onUpdate", PlaceableHusbandryAnimals)
  SpecializationUtil.registerEventListener(placeableType, "onPeriodChanged", PlaceableHusbandryAnimals)
  SpecializationUtil.registerEventListener(placeableType, "onDayChanged", PlaceableHusbandryAnimals)
end
function PlaceableHusbandryAnimals:registerXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.animals" .. ".navigation#rootNode", "Navigation mesh rootnode")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.animals" .. ".navigation#node", "Navigation mesh node")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.animals" .. ".navigation#filename", "Filename for an external navigation mesh")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.animals" .. ".navigation#nodePath", "Nodepath for an external navigation mesh")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.animals" .. "#type", "Animal type")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.animals" .. "#filename", "Animal configuration file")
  self:register(XMLValueType.FLOAT, v1 .. ".husbandry.animals" .. "#placementRaycastDistance", "Placement raycast distance", 2)
  self:register(XMLValueType.INT, v1 .. ".husbandry.animals" .. "#maxNumAnimals", "Max number of animals", 16)
  self:register(XMLValueType.INT, v1 .. ".husbandry.animals" .. "#maxNumVisualAnimals", "Max number of visual animals")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.animals" .. ".loadingTrigger#node", "Animal loading trigger")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.animals" .. ".deliveryAreas.deliveryArea(?)#startNode", "Animal delivery area start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.animals" .. ".deliveryAreas.deliveryArea(?)#widthNode", "Animal delivery area width node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.animals" .. ".deliveryAreas.deliveryArea(?)#heightNode", "Animal delivery area height node")
  self:setXMLSpecializationType()
end
function PlaceableHusbandryAnimals:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  AnimalClusterSystem.registerSavegameXMLPaths(self, v1 .. ".clusters")
  self:setXMLSpecializationType()
end
function PlaceableHusbandryAnimals.initSpecialization()
  v0:addSpecType("numberAnimals", "shopListAttributeIconCapacity", PlaceableHusbandryAnimals.loadSpecValueNumberAnimals, PlaceableHusbandryAnimals.getSpecValueNumberAnimals, "placeable")
  if g_isDevelopmentVersion then
    addConsoleCommand("gsHusbandryAddAnimals", "Add or remove animals from husbandry where player is currently located", "consoleCommandAddAnimals", PlaceableHusbandryAnimals)
  end
end
function PlaceableHusbandryAnimals:onLoad(savegame)
  local v5 = v5:getText("ui_horseHealth")
  self.spec_husbandryAnimals.infoHealth = {title = v5, text = ""}
  v5 = v5:getText("ui_numAnimals")
  self.spec_husbandryAnimals.infoNumAnimals = {title = v5, text = ""}
  self.spec_husbandryAnimals.updateVisuals = false
  local v4 = self.xmlFile:getValue("placeable.husbandry.animals#type")
  if v4 == nil then
    Logging.xmlError(self.xmlFile, "Missing animal type!")
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  v5 = v5:getTypeByName(v4)
  v2.animalType = v5
  if v2.animalType == nil then
    Logging.xmlError(v3, "Animal type '%s' not found!", v4)
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  v2.animalTypeIndex = v2.animalType.typeIndex
  v5 = v3:getValue("placeable.husbandry.animals.navigation#rootNode", nil, self.components, self.i3dMappings)
  v2.navigationMeshRootNode = v5
  v5 = v3:getValue("placeable.husbandry.animals.navigation#node", nil, self.components, self.i3dMappings)
  v2.navigationMesh = v5
  v5 = v3:getValue("placeable.husbandry.animals.navigation#filename", nil)
  if v5 ~= nil then
    local v6 = Utils.getFilename(v5, self.baseDirectory)
    v6 = self:createLoadingTask(v2)
    local v7 = v3:getValue("placeable.husbandry.animals.navigation#nodePath", "0")
    v2.navigationMeshNodePath = v7
    local v8 = v8:loadSharedI3DFileAsync(v6, true, false, self.onExternalNavigationMeshLoaded, self, {loadingTask = v6})
    v2.sharedLoadRequestId = v8
  end
  v6 = v3:getValue("placeable.husbandry.animals#placementRaycastDistance", 10)
  v2.placementRaycastDistance = v6
  v6 = v3:getValue("placeable.husbandry.animals#maxNumAnimals", 16)
  v2.maxNumAnimals = v6
  if v2.animalTypeIndex == AnimalType.HORSE then
    v6 = math.min(v2.maxNumAnimals, 16)
    v2.maxNumVisualAnimals = v6
    v6 = math.min(v2.maxNumAnimals, 16)
    v2.maxNumAnimals = v6
  else
    v6 = Utils.getPerformanceClassId()
    if not GS_PLATFORM_XBOX then
      -- if v6 ~= GS_PROFILE_LOW then goto L201 end
    end
    v2.maxNumVisualAnimals = 10
    -- goto L220  (LOP_JUMP +19)
    if GS_PROFILE_VERY_HIGH <= v6 then
      v2.maxNumVisualAnimals = 25
    elseif GS_PROFILE_HIGH <= v6 then
      v2.maxNumVisualAnimals = 20
    else
      v2.maxNumVisualAnimals = 16
    end
  end
  if 2 ^ AnimalCluster.NUM_BITS_NUM_ANIMALS - 1 < v2.maxNumAnimals then
    Logging.xmlWarning(v3, "Maximum number of animals reached! Maximum is '%d'!", 2 ^ AnimalCluster.NUM_BITS_NUM_ANIMALS - 1)
    v2.maxNumAnimals = 2 ^ AnimalCluster.NUM_BITS_NUM_ANIMALS - 1
  end
  if GS_IS_MOBILE_VERSION then
    v7 = math.min(v2.maxNumVisualAnimals, 8)
    v2.maxNumVisualAnimals = v7
  end
  v7 = v3:getValue("placeable.husbandry.animals#maxNumVisualAnimals")
  if v7 ~= nil then
    if v2.maxNumAnimals < v7 then
    end
    if v2.maxNumVisualAnimals < v7 then
    end
    v2.maxNumVisualAnimals = v7
  end
  v8 = AnimalClusterHusbandry.new(self, v4, v2.maxNumVisualAnimals)
  v2.clusterHusbandry = v8
  v8 = AnimalClusterSystem.new(self.isServer, self)
  v2.clusterSystem = v8
  v8:subscribe(AnimalClusterUpdateEvent, self.updatedClusters, self)
  v8 = v3:getValue("placeable.husbandry.animals.loadingTrigger#node", nil, self.components, self.i3dMappings)
  if v8 ~= nil then
    local v9 = AnimalLoadingTrigger.new(self.isServer, self.isClient)
    v2.animalLoadingTrigger = v9
    v9 = v9:load(v8, self)
    if not v9 then
      v9:delete()
    end
  end
  v2.deliveryAreas = {}
  v9:iterate("placeable.husbandry.animals.deliveryAreas.deliveryArea", function(self, savegame)
    local v3 = v3:loadDeliveryArea(u0.xmlFile, savegame, {})
    if v3 then
      table.insert(u1.deliveryAreas, {})
    end
  end)
  local v10 = v10:getText("statistic_productivity")
  v2.info = {title = v10, text = ""}
  if self.isServer then
    -- if g_isDevelopmentVersion then goto L367 end
  end
  removeConsoleCommand("gsHusbandryAddAnimals")
end
function PlaceableHusbandryAnimals:onDelete()
  v2:unsubscribe(AnimalClusterUpdateEvent, self)
  if self.spec_husbandryAnimals.clusterHusbandry ~= nil then
    v2:removeClusterHusbandry(self.spec_husbandryAnimals.clusterHusbandry)
    v2:delete()
    self.spec_husbandryAnimals.clusterHusbandry = nil
  end
  if savegame.animalLoadingTrigger ~= nil then
    v2:delete()
    savegame.animalLoadingTrigger = nil
  end
  if savegame.sharedLoadRequestId ~= nil then
    v2:releaseSharedI3DFile(savegame.sharedLoadRequestId)
  end
  v2:unregisterObjectToCallOnMissionStart(self)
end
function PlaceableHusbandryAnimals:onFinalizePlacement()
  self:createHusbandry()
  savegame:registerObjectToCallOnMissionStart(self)
end
function PlaceableHusbandryAnimals:onReadStream(streamId, connection)
  v4:readStream(streamId, connection)
end
function PlaceableHusbandryAnimals:onWriteStream(streamId, connection)
  v4:writeStream(streamId, connection)
end
function PlaceableHusbandryAnimals:saveToXMLFile(xmlFile, key, usedModNames)
  v5:saveToXMLFile(xmlFile, key .. ".clusters", usedModNames)
end
function PlaceableHusbandryAnimals:loadFromXMLFile(xmlFile, key)
  v4:loadFromXMLFile(xmlFile, key .. ".clusters")
end
function PlaceableHusbandryAnimals:onUpdate(dt)
  if self.isServer then
    v3:update(dt)
  end
  if v2.clusterHusbandry ~= nil then
    v3:update(dt)
  end
  if v2.updateVisuals then
    self:updateVisualAnimals()
    v2.updateVisuals = false
  end
  local v3 = v3:getNeedsUpdate()
  if v3 then
    self:raiseActive()
  end
end
function PlaceableHusbandryAnimals:onExternalNavigationMeshLoaded(node, failedReason, args)
  if node ~= 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L17
  end
  self:finishLoadingTask(v5)
  Logging.error("Missing navigation mesh in external navigation mesh file!")
  return
  local v6 = I3DUtil.indexToObject(node, v4.navigationMeshNodePath)
  v4.navigationMesh = v6
  link(v4.navigationMeshRootNode, v4.navigationMesh)
  delete(node)
  self:finishLoadingTask(v5)
end
function PlaceableHusbandryAnimals:createHusbandry()
  if self.spec_husbandryAnimals.navigationMesh == nil then
    Logging.error("Navigation mesh node not defined for animal husbandry!")
    return
  end
  local v2 = getHasClassId(savegame.navigationMesh, ClassIds.NAVIGATION_MESH)
  if not v2 then
    local v4 = getName(savegame.navigationMesh)
    Logging.error(...)
    return
  end
  if g_currentMission.missionDynamicInfo.isMultiplayer then
  end
  local v3 = Utils.getFilename(savegame.animalType.configFilename, savegame.baseDirectory)
  v4 = v4:create(v3, savegame.navigationMesh, savegame.placementRaycastDistance, v2)
  if v4 ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R4 aux=0x80000020 -> L65
  end
  Logging.error("Could not create animal husbandry!")
  return
  if v4 ~= nil then
    v5:addClusterHusbandry(savegame.clusterHusbandry)
  end
  SpecializationUtil.raiseEvent(self, "onHusbandryAnimalsCreated", v4)
end
function PlaceableHusbandryAnimals:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  local v6 = v6:getClusters()
  if 0 < #v6 then
    for v11, v12 in ipairs(v6) do
    end
  end
  v9 = string.format("%d", v5)
  v3.infoNumAnimals.text = v9
  v9 = string.format("%d %%", v4)
  v3.infoHealth.text = v9
  table.insert(infoTable, v3.infoNumAnimals)
  table.insert(infoTable, v3.infoHealth)
end
function PlaceableHusbandryAnimals.getNeedDayChanged(v0, savegame)
  return true
end
function PlaceableHusbandryAnimals:onMissionStarted()
  self:updateVisualAnimals()
end
function PlaceableHusbandryAnimals:updateVisualAnimals()
  local v2 = v2:getClusters()
  v3:setClusters(v2)
  self:raiseActive()
end
function PlaceableHusbandryAnimals:getAnimalTypeIndex()
  return self.spec_husbandryAnimals.animalTypeIndex
end
function PlaceableHusbandryAnimals:updateOutput(superFunc, foodFactor, productionFactor, globalProductionFactor)
  if self.isServer then
    local v6 = v6:getClusters()
    for v10, v11 in ipairs(v6) do
      v11:updateHealth(foodFactor)
    end
    self:raiseActive()
  end
  superFunc(self, foodFactor, productionFactor, globalProductionFactor)
end
function PlaceableHusbandryAnimals:onPeriodChanged()
  if self.isServer then
    local v2 = v2:getClusters()
    local totalNumAnimals = self:getNumOfAnimals()
    local v4 = math.max(self.spec_husbandryAnimals.maxNumAnimals - totalNumAnimals, 0)
    for v8, v9 in ipairs(v2) do
      v9:onPeriodChanged()
      local v10 = v9:updateReproduction()
      if not (0 < v10) then
        continue
      end
      local v11 = math.min(v4, v10)
      if not (0 < v11) then
        continue
      end
      local v13 = v9:getSubTypeIndex()
      v11 = v11:createClusterFromSubTypeIndex(...)
      v11.numAnimals = v11
      v12:addPendingAddCluster(v11)
      local v14 = v9:getSubTypeIndex()
      local v12 = v12:getSubTypeByIndex(...)
      v13 = v13:getTypeByIndex(v12.typeIndex)
      if not (v13.statsBreedingName ~= nil) then
        continue
      end
      local v16 = self:getOwnerFarmId()
      v14:updateFarmStats(v16, v13.statsBreedingName, v11.numAnimals)
    end
    self:raiseActive()
  end
end
function PlaceableHusbandryAnimals:onDayChanged()
  if self.isServer then
    local v2 = v2:getClusters()
    for v6, v7 in ipairs(v2) do
      v7:onDayChanged()
    end
  end
end
function PlaceableHusbandryAnimals:getNumOfAnimals()
  local v3 = v3:getClusters()
  for v7, v8 in ipairs(v3) do
  end
  return v2
end
function PlaceableHusbandryAnimals:getMaxNumOfAnimals()
  return self.spec_husbandryAnimals.maxNumAnimals
end
function PlaceableHusbandryAnimals:getNumOfFreeAnimalSlots()
  local totalNumAnimals = self:getNumOfAnimals()
  return math.max(self.spec_husbandryAnimals.maxNumAnimals - totalNumAnimals, 0)
end
function PlaceableHusbandryAnimals:getSupportsAnimalSubType(subTypeIndex)
  local v4 = g_currentMission.animalSystem:getSubTypeByIndex(subTypeIndex)
  if self.spec_husbandryAnimals.animalTypeIndex ~= v4.typeIndex then
  end
  return true
end
function PlaceableHusbandryAnimals:getNumOfClusters()
  local v2 = v2:getClusters()
  return #v2
end
function PlaceableHusbandryAnimals:getClusters()
  return v2:getClusters()
end
function PlaceableHusbandryAnimals:getCluster(index)
  return v3:getCluster(index)
end
function PlaceableHusbandryAnimals:getClusterById(id)
  return v3:getClusterById(id)
end
function PlaceableHusbandryAnimals:addCluster(cluster)
  if cluster ~= nil then
    v3:addPendingAddCluster(cluster)
    self:raiseActive()
  end
end
function PlaceableHusbandryAnimals:addAnimals(subTypeIndex, numAnimals, age)
  local v4 = v4:createClusterFromSubTypeIndex(subTypeIndex)
  local v5 = v4:getSupportsMerging()
  if v5 then
    v4.numAnimals = numAnimals
    v4.age = age
    v4.subTypeIndex = subTypeIndex
    self:addCluster(v4)
    return
  end
  -- TODO: structure LOP_FORNPREP (pc 24, target 42)
  local v8 = v8:createClusterFromSubTypeIndex(subTypeIndex)
  v8.numAnimals = 1
  v8.age = age
  self:addCluster(v8)
  -- TODO: structure LOP_FORNLOOP (pc 41, target 25)
end
function PlaceableHusbandryAnimals:getClusterSystem()
  return self.spec_husbandryAnimals.clusterSystem
end
function PlaceableHusbandryAnimals:updatedClusters(husbandry)
  if husbandry == self then
    local v3 = v3:getClusters()
    SpecializationUtil.raiseEvent(self, "onHusbandryAnimalsUpdate", v3)
    v4:publish(MessageType.HUSBANDRY_ANIMALS_CHANGED, self)
    self.spec_husbandryAnimals.updateVisuals = true
    self:raiseActive()
  end
end
function PlaceableHusbandryAnimals:renameAnimal(clusterId, name, noEventSend)
  AnimalNameEvent.sendEvent(self, clusterId, name, noEventSend)
  local v5 = v5:getClusterById(clusterId)
  if v5 ~= nil then
    v5:setName(name)
  end
end
function PlaceableHusbandryAnimals:getAnimalSupportsRiding(clusterId)
  local v3 = v3:getClusterById(clusterId)
  if v3 ~= nil then
    local v4 = v3:getRidableFilename()
    if v4 ~= nil then
      return true
    end
  end
  return false
end
function PlaceableHusbandryAnimals:getAnimalCanBeRidden(clusterId)
  local v4 = self:getOwnerFarmId()
  return v2:getCanAddRideable(...)
end
function PlaceableHusbandryAnimals:startRiding(clusterId, player)
  if not self.isServer then
    local v3 = v3:getServerConnection()
    local v5 = AnimalRidingEvent.new(self, clusterId, player)
    v3:sendEvent(...)
    return
  end
  local v4 = v4:getClusterById(clusterId)
  if v4 ~= nil then
    local v5, v6, v7, v8, v9, v10 = v5:getAnimalPosition(clusterId)
    if v5 ~= nil then
      local farmId = self:getOwnerFarmId()
      local v12 = v4:getRidableFilename()
      VehicleLoadingUtil.loadVehicle(v12, {x = v5, z = v7, yRot = v9}, true, 0, Vehicle.PROPERTY_STATE_OWNED, farmId, nil, nil, self.onLoadedRideable, self, {player = player, cluster = v4})
    end
  end
end
function PlaceableHusbandryAnimals:onLoadedRideable(rideableVehicle, vehicleLoadState, arguments)
  if rideableVehicle == nil then
    return
  end
  if vehicleLoadState ~= VehicleLoadingUtil.VEHICLE_LOAD_OK then
    rideableVehicle:delete()
    return
  end
  local v5 = arguments.cluster:clone()
  v5:changeNumAnimals(1)
  rideableVehicle:setCluster(v5)
  rideableVehicle:setPlayerToEnter(arguments.player)
  arguments.cluster:changeNumAnimals(-1)
  v7:updateNow()
end
function PlaceableHusbandryAnimals:loadDeliveryArea(xmlFile, key, area)
  local v4 = xmlFile:getValue(key .. "#startNode", nil, self.components, self.i3dMappings)
  if v4 == nil then
    Logging.xmlWarning(xmlFile, "Delivery area start node not defined for '%s'", key)
    return false
  end
  local v5 = xmlFile:getValue(key .. "#widthNode", nil, self.components, self.i3dMappings)
  if v5 == nil then
    Logging.xmlWarning(xmlFile, "Delivery area width node not defined for '%s'", key)
    return false
  end
  local v6 = xmlFile:getValue(key .. "#heightNode", nil, self.components, self.i3dMappings)
  if v6 == nil then
    Logging.xmlWarning(xmlFile, "Delivery area height node not defined for '%s'", key)
    return false
  end
  area.start = v4
  area.width = v5
  area.height = v6
  return true
end
function PlaceableHusbandryAnimals:getIsInAnimalDeliveryArea(x, z)
  for v7, v8 in ipairs(self.spec_husbandryAnimals.deliveryAreas) do
    local v9, v10, v11 = getWorldTranslation(v8.start)
    local v12, v13, v14 = getWorldTranslation(v8.width)
    local v15, v16, v17 = getWorldTranslation(v8.height)
    local v18 = MathUtil.isPointInParallelogram(x, z, v9, v11, v12 - v9, v14 - v11, v15 - v9, v17 - v11)
    if not v18 then
      continue
    end
    return true
  end
  if #v3.deliveryAreas == 0 then
    v4, v5, v6 = getWorldTranslation(self.rootNode)
    v7 = MathUtil.vector2Length(v4 - x, v6 - z)
    if v7 < 30 then
      return true
    end
  end
  return false
end
function PlaceableHusbandryAnimals:loadSpecValueNumberAnimals(savegame, v2)
  local v4 = self:hasProperty("placeable.husbandry.animals")
  if v4 then
    v4 = self:getInt("placeable.husbandry.animals#maxNumAnimals", 16)
    local v5 = self:getString("placeable.husbandry.animals#type")
  end
  return v3
end
function PlaceableHusbandryAnimals:getSpecValueNumberAnimals(savegame)
  if self.specs.numberAnimals == nil then
    return nil
  end
  local v4 = v4:getTypeIndexByName(v2.animalTypeName)
  if v4 == AnimalType.COW then
  elseif v4 == AnimalType.SHEEP then
  else
    if v4 == AnimalType.HORSE then
    elseif v4 == AnimalType.PIG then
    else
      if v4 == AnimalType.CHICKEN then
      end
    end
  end
  return v2.maxNumAnimals, v3
end
function PlaceableHusbandryAnimals:canBeSold(superFunc)
  local v2 = self:getNumOfAnimals()
  if 0 < v2 then
    local v3 = v3:getText("info_husbandryNotEmpty")
    return false
  end
  v2 = superFunc(self)
  return v2
end
function PlaceableHusbandryAnimals:getConditionInfos(superFunc)
  local infos = superFunc(self)
  local animalTypeIndex = self:getAnimalTypeIndex()
  if animalTypeIndex ~= AnimalType.HORSE and animalTypeIndex ~= AnimalType.PIG then
    local productivity = self:getGlobalProductionFactor()
    self.spec_husbandryAnimals.info.value = productivity
    self.spec_husbandryAnimals.info.ratio = productivity
    local v9 = v9:formatNumber(productivity * 100, 0)
    local v7 = string.format(...)
    self.spec_husbandryAnimals.info.valueText = v7
    table.insert(infos, self.spec_husbandryAnimals.info)
  end
  return infos
end
function PlaceableHusbandryAnimals.getAnimalInfos(v0, savegame, v2)
  local v3 = savegame(v0)
  v2:addInfos(v3)
  return v3
end
function PlaceableHusbandryAnimals.getAnimalDescription(v0, savegame, v2)
  local v3 = savegame(v0, v2)
  local v7 = v2:getAge()
  local v4 = v4:getVisualByAge(...)
  return v3 .. v4.store.description
end
function PlaceableHusbandryAnimals.consoleCommandAddAnimals(_, numAnimals, subTypeIndex)
  local v4 = getCamera(0)
  local v3, v4, v5 = getWorldTranslation(...)
  raycastAll(v3, v4 + 100, v5, 0, -1, 0, "consoleCommandAddAnimalsRaycastCallback", 110, PlaceableHusbandryAnimals)
  PlaceableHusbandryAnimals.consoleCommandCurrentHusbandry = nil
  if PlaceableHusbandryAnimals.consoleCommandCurrentHusbandry == nil then
    return "Error: No husbandry found. Enter a husbandry with the player first"
  end
  local v8 = tonumber(numAnimals)
  v8 = tonumber(subTypeIndex)
  if 0 < (v8 or 0) then
    v8 = v6:getNumOfFreeAnimalSlots()
    if v8 == 0 then
      return "Error: Husbandry is full"
    end
    local v10 = v6:getNumOfFreeAnimalSlots()
    v8 = math.min(...)
    v8 = tonumber(subTypeIndex)
    if v7.animalType.subTypes[v8 or 1] ~= nil then
      local v9 = v9:createClusterFromSubTypeIndex(v7.animalType.subTypes[v8 or 1])
      v9.numAnimals = v8
      v10:addPendingAddCluster(v9)
      v6:raiseActive()
      return "Added " .. v8 .. " animal(s)"
    end
    return "Error: Invalid subtype index\n" .. "Usage: gsHusbandryAddAnimals numAnimals [subTypeIndex]\nUse negative number to remove animals"
  end
  if numAnimals < 0 then
    v10 = v6:getClusters()
    for v12, v13 in pairs(...) do
      if subTypeIndex ~= nil then
        local v14 = v13:getSubTypeIndex()
        -- if v14 ~= v2 then goto L125 end
      end
      v14 = v13:changeNumAnimals(v8)
      if not (0 > v14) then
        break
      end
    end
    if numAnimals ~= v8 then
      v11 = math.abs(numAnimals - v8)
      v9 = string.format(...)
      return v9
    end
    if subTypeIndex ~= nil then
      return "Error: Husbandry has no animals of subtype " .. subTypeIndex
    end
    return "Error: Husbandry has no animals"
  end
  return "Error: Invalid number of animals\n" .. "Usage: gsHusbandryAddAnimals numAnimals [subTypeIndex]\nUse negative number to remove animals"
end
function PlaceableHusbandryAnimals.consoleCommandAddAnimalsRaycastCallback(_, actorId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  if actorId ~= 0 and g_currentMission.nodeToObject[actorId] ~= nil then
    local v13 = g_currentMission.nodeToObject[actorId]:isa(Placeable)
    if v13 then
      v13 = SpecializationUtil.hasSpecialization(PlaceableHusbandryAnimals, g_currentMission.nodeToObject[actorId].specializations)
      if v13 then
        PlaceableHusbandryAnimals.consoleCommandCurrentHusbandry = g_currentMission.nodeToObject[actorId]
        return true
      end
    end
  end
  if isLast then
    PlaceableHusbandryAnimals.consoleCommandCurrentHusbandry = nil
  end
  return false
end
