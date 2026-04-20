-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LivestockTrailer = {}
function LivestockTrailer.initSpecialization()
  v0:addSpecType("numAnimalsCow", "shopListAttributeIconCow", LivestockTrailer.loadSpecValueNumberAnimalsCow, LivestockTrailer.getSpecValueNumberAnimalsCow, "vehicle")
  v0:addSpecType("numAnimalsPig", "shopListAttributeIconPig", LivestockTrailer.loadSpecValueNumberAnimalsPig, LivestockTrailer.getSpecValueNumberAnimalsPig, "vehicle")
  v0:addSpecType("numAnimalsSheep", "shopListAttributeIconSheep", LivestockTrailer.loadSpecValueNumberAnimalsSheep, LivestockTrailer.getSpecValueNumberAnimalsSheep, "vehicle")
  v0:addSpecType("numAnimalsHorse", "shopListAttributeIconHorse", LivestockTrailer.loadSpecValueNumberAnimalsHorse, LivestockTrailer.getSpecValueNumberAnimalsHorse, "vehicle")
  Vehicle.xmlSchema:setXMLSpecializationType("LivestockTrailer")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.livestockTrailer.animal(?)#type", "Animal type name")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.livestockTrailer.animal(?)#node", "Animal node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.livestockTrailer.animal(?)#numSlots", "Number of slots")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.livestockTrailer.loadTrigger#node", "Load trigger node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.livestockTrailer.spawnPlaces.spawnPlace(?)#node", "Unload spawn places")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.livestockTrailer.spawnPlaces.spawnPlace(?)#width", "Unloading width", 15)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).livestockTrailer#animalType", "Animal type name")
  AnimalClusterSystem.registerSavegameXMLPaths(Vehicle.xmlSchemaSavegame, "vehicles.vehicle(?).livestockTrailer")
end
function LivestockTrailer.prerequisitesPresent(specializations)
  return true
end
function LivestockTrailer.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentAnimalType", LivestockTrailer.getCurrentAnimalType)
  SpecializationUtil.registerFunction(vehicleType, "getSupportsAnimalType", LivestockTrailer.getSupportsAnimalType)
  SpecializationUtil.registerFunction(vehicleType, "getSupportsAnimalSubType", LivestockTrailer.getSupportsAnimalSubType)
  SpecializationUtil.registerFunction(vehicleType, "setLoadingTrigger", LivestockTrailer.setLoadingTrigger)
  SpecializationUtil.registerFunction(vehicleType, "getLoadingTrigger", LivestockTrailer.getLoadingTrigger)
  SpecializationUtil.registerFunction(vehicleType, "updateAnimals", LivestockTrailer.updateAnimals)
  SpecializationUtil.registerFunction(vehicleType, "updatedClusters", LivestockTrailer.updatedClusters)
  SpecializationUtil.registerFunction(vehicleType, "clearAnimals", LivestockTrailer.clearAnimals)
  SpecializationUtil.registerFunction(vehicleType, "addAnimals", LivestockTrailer.addAnimals)
  SpecializationUtil.registerFunction(vehicleType, "addCluster", LivestockTrailer.addCluster)
  SpecializationUtil.registerFunction(vehicleType, "getClusters", LivestockTrailer.getClusters)
  SpecializationUtil.registerFunction(vehicleType, "getRideablesInTrigger", LivestockTrailer.getRideablesInTrigger)
  SpecializationUtil.registerFunction(vehicleType, "getClusterById", LivestockTrailer.getClusterById)
  SpecializationUtil.registerFunction(vehicleType, "getClusterSystem", LivestockTrailer.getClusterSystem)
  SpecializationUtil.registerFunction(vehicleType, "getNumOfAnimals", LivestockTrailer.getNumOfAnimals)
  SpecializationUtil.registerFunction(vehicleType, "getMaxNumOfAnimals", LivestockTrailer.getMaxNumOfAnimals)
  SpecializationUtil.registerFunction(vehicleType, "getNumOfFreeAnimalSlots", LivestockTrailer.getNumOfFreeAnimalSlots)
  SpecializationUtil.registerFunction(vehicleType, "onAnimalLoaded", LivestockTrailer.onAnimalLoaded)
  SpecializationUtil.registerFunction(vehicleType, "onAnimalLoadTriggerCallback", LivestockTrailer.onAnimalLoadTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "getAnimalUnloadPlaces", LivestockTrailer.getAnimalUnloadPlaces)
  SpecializationUtil.registerFunction(vehicleType, "setAnimalScreenController", LivestockTrailer.setAnimalScreenController)
  SpecializationUtil.registerFunction(vehicleType, "onAnimalRideableDeleted", LivestockTrailer.onAnimalRideableDeleted)
end
function LivestockTrailer.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAdditionalComponentMass", LivestockTrailer.getAdditionalComponentMass)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getSellPrice", LivestockTrailer.getSellPrice)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "dayChanged", LivestockTrailer.dayChanged)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "periodChanged", LivestockTrailer.periodChanged)
end
function LivestockTrailer.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", LivestockTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", LivestockTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", LivestockTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", LivestockTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", LivestockTrailer)
end
function LivestockTrailer:onLoad(savegame)
  self.spec_livestockTrailer.animalPlaces = {}
  self.spec_livestockTrailer.animalTypeIndexToPlaces = {}
  while true do
    v4 = string.format("vehicle.livestockTrailer.animal(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = v6:getValue(v4 .. "#type")
    v7 = v7:getTypeIndexByName(v6)
    if v7 == nil then
      Logging.xmlWarning(self.xmlFile, "Animal type '%s' could not be found!", v6)
      break
    end
    v5.animalTypeIndex = v7
    v5.slots = {}
    v8 = v8:getValue(v4 .. "#node", nil, self.components, self.i3dMappings)
    v10 = v10:getValue(v4 .. "#numSlots", 0)
    v9 = math.abs(...)
    v10 = getNumOfChildren(v8)
    if v10 < v9 then
      Logging.xmlWarning(self.xmlFile, "numSlots is greater than available children for '%s'", v4)
      v10 = getNumOfChildren(v8)
    end
    -- TODO: structure LOP_FORNPREP (pc 105, target 127)
    v13 = getChildAt(v8, 0)
    table.insert(v5.slots, {linkNode = v13, loadedMesh = nil, place = v5})
    -- TODO: structure LOP_FORNLOOP (pc 126, target 106)
    table.insert(v2.animalPlaces, v5)
    v2.animalTypeIndexToPlaces[v5.animalTypeIndex] = v5
  end
  v4 = v4:getValue("vehicle.livestockTrailer.loadTrigger#node", nil, self.components, self.i3dMappings)
  if v4 ~= nil then
    addTrigger(v4, "onAnimalLoadTriggerCallback", self)
    v2.triggerNode = v4
  end
  v2.rideablesInTrigger = {}
  v2.spawnPlaces = {}
  v5:iterate("vehicle.livestockTrailer.spawnPlaces.spawnPlace", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    local v3 = v3:getValue(savegame .. "#width", 5)
    if v2 ~= nil then
      table.insert(u1.spawnPlaces, {node = v2, width = v3})
    end
  end)
  if 0 >= #v2.spawnPlaces then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L209
  end
  v5 = LivestockTrailerActivatable.new(self)
  v2.activatable = v5
  if g_currentMission ~= nil then
    v5:addActivatable(v2.activatable)
  end
  v5 = AnimalClusterSystem.new(self.isServer, self)
  v2.clusterSystem = v5
  v5:subscribe(AnimalClusterUpdateEvent, self.updatedClusters, self)
  v2.loadingTrigger = nil
  v2.animalScreenController = nil
  if g_currentMission ~= nil then
    v5:addLivestockTrailer(self)
  end
end
function LivestockTrailer:onLoadFinished(savegame)
  if savegame ~= nil and not savegame.resetVehicles then
    v5:loadFromXMLFile(savegame.xmlFile, savegame.key .. ".livestockTrailer")
    v5:updateNow()
  end
end
function LivestockTrailer:onDelete()
  self:clearAnimals()
  v1:unsubscribe(AnimalClusterUpdateEvent, self)
  if g_currentMission ~= nil then
    v1:removeLivestockTrailer(self)
  end
  if self.spec_livestockTrailer.triggerNode ~= nil then
    removeTrigger(self.spec_livestockTrailer.triggerNode)
  end
  if v1.activatable ~= nil then
    v2:removeActivatable(v1.activatable)
  end
  if v1.loadingTrigger ~= nil then
    v2:setLoadingTrailer(nil)
  end
end
function LivestockTrailer:saveToXMLFile(xmlFile, key, usedModNames)
  v5:saveToXMLFile(xmlFile, key, usedModNames)
end
function LivestockTrailer:onReadStream(streamId, connection)
  v4:readStream(streamId, connection)
end
function LivestockTrailer:onWriteStream(streamId, connection)
  v4:writeStream(streamId, connection)
end
function LivestockTrailer:getSupportsAnimalType(animalTypeIndex)
  if self.spec_livestockTrailer.animalTypeIndexToPlaces[animalTypeIndex] == nil then
  end
  return true
end
function LivestockTrailer:getSupportsAnimalSubType(subTypeIndex)
  local v3 = g_currentMission.animalSystem:getSubTypeByIndex(subTypeIndex)
  local v4 = g_currentMission.animalSystem:getTypeByIndex(v3.typeIndex)
  return self:getSupportsAnimalType(v4.typeIndex)
end
function LivestockTrailer:getCurrentAnimalType()
  local v2 = v2:getClusters()
  if #v2 == 0 then
    return nil
  end
  local v4 = v4:getSubTypeIndex()
  local v5 = g_currentMission.animalSystem:getSubTypeByIndex(v4)
  return g_currentMission.animalSystem:getTypeByIndex(v5.typeIndex)
end
function LivestockTrailer:setLoadingTrigger(trigger)
  self.spec_livestockTrailer.loadingTrigger = trigger
end
function LivestockTrailer:getLoadingTrigger()
  return self.spec_livestockTrailer.loadingTrigger
end
function LivestockTrailer:setAnimalScreenController(controller)
  self.spec_livestockTrailer.animalScreenController = controller
end
function LivestockTrailer:addAnimals(subTypeIndex, numAnimals, age)
  local v4 = v4:createClusterFromSubTypeIndex(subTypeIndex)
  local v5 = v4:getSupportsMerging()
  if v5 then
    v4.numAnimals = numAnimals
    v4.age = age
    self:addCluster(v4)
    return
  end
  -- TODO: structure LOP_FORNPREP (pc 22, target 43)
  if 1 < 1 then
    local v8 = v8:createClusterFromSubTypeIndex(subTypeIndex)
  end
  v4.numAnimals = 1
  v4.age = age
  self:addCluster(v4)
  -- TODO: structure LOP_FORNLOOP (pc 42, target 23)
end
function LivestockTrailer:addCluster(cluster)
  v3:addPendingAddCluster(cluster)
  v3:updateNow()
end
function LivestockTrailer:getClusters()
  return v2:getClusters()
end
function LivestockTrailer:getRideablesInTrigger()
  return self.spec_livestockTrailer.rideablesInTrigger
end
function LivestockTrailer:getClusterById(id)
  return v3:getClusterById(id)
end
function LivestockTrailer:getClusterSystem()
  return self.spec_livestockTrailer.clusterSystem
end
function LivestockTrailer:getNumOfAnimals()
  local v2 = v2:getClusters()
  if #v2 == 0 then
    return 0
  end
  local v3 = v3:getSubTypeIndex()
  local v4 = v4:getSubTypeByIndex(v3)
  return v1.animalTypeIndexToPlaces[v4.typeIndex].usedSlots or 0
end
function LivestockTrailer:getMaxNumOfAnimals(animalType)
  local currentAnimalType = self:getCurrentAnimalType()
  if animalType == nil and currentAnimalType == nil then
    return 0
  end
  if currentAnimalType ~= nil and animalType ~= currentAnimalType then
    return 0
  end
  local v4 = self:getSupportsAnimalType((animalType or currentAnimalType).typeIndex)
  if not v4 then
    return 0
  end
  return #v2.animalTypeIndexToPlaces[animalType.typeIndex].slots
end
function LivestockTrailer:getNumOfFreeAnimalSlots(subTypeIndex)
  local v3 = g_currentMission.animalSystem:getSubTypeByIndex(subTypeIndex)
  local v4 = g_currentMission.animalSystem:getTypeByIndex(v3.typeIndex)
  local used = self:getNumOfAnimals()
  local v6 = self:getMaxNumOfAnimals(v4)
  return v6 - used
end
function LivestockTrailer:updatedClusters(trailer)
  if trailer == self then
    self:updateAnimals()
    self:setMassDirty()
  end
end
function LivestockTrailer:updateAnimals()
  self:clearAnimals()
  local v3 = v3:getClusters()
  local animalType = self:getCurrentAnimalType()
  if animalType ~= nil then
    self.spec_livestockTrailer.animalTypeIndexToPlaces[animalType.typeIndex].usedSlots = 0
    for v9, v10 in ipairs(v3) do
      local v14 = v10:getNumAnimals()
      -- TODO: structure LOP_FORNPREP (pc 35, target 85)
      v5.slots[v2].meshLoadingInProgress = true
      local v17 = v10:getSubTypeIndex()
      local v18 = v10:getAge()
      local v15 = v15:getVisualByAge(...)
      v5.slots[v2].filename = v15.visualAnimal.filenamePosed
      v18 = v18:loadSharedI3DFileAsync(v15.visualAnimal.filenamePosed, false, false, self.onAnimalLoaded, self, {slot = v5.slots[v2], visual = v15})
      v5.slots[v2].sharedLoadRequestId = v18
      v5.usedSlots = v5.usedSlots + 1
      -- TODO: structure LOP_FORNLOOP (pc 84, target 36)
    end
  end
end
function LivestockTrailer:clearAnimals()
  if self.spec_livestockTrailer.animalTypeIndexToPlaces ~= nil then
    for v5, v6 in pairs(self.spec_livestockTrailer.animalTypeIndexToPlaces) do
      for v10, v11 in ipairs(v6.slots) do
        if v11.sharedLoadRequestId ~= nil then
          v12:releaseSharedI3DFile(v11.sharedLoadRequestId)
          v11.sharedLoadRequestId = nil
        end
        if not (v11.loadedMesh ~= nil) then
          continue
        end
        delete(v11.loadedMesh)
        v11.loadedMesh = nil
      end
    end
  end
end
function LivestockTrailer.onAnimalLoaded(v0, v1, v2, v3)
  if v1 ~= 0 then
    link(v3.slot.linkNode, v1)
    v3.slot.loadedMesh = v1
    v3.slot.meshLoadingInProgress = false
    I3DUtil.setShaderParameterRec(v1, "atlasInvSizeAndOffsetUV", 1 / v3.visual.visualAnimal.variations[1].numTilesU, 1 / v3.visual.visualAnimal.variations[1].numTilesV, v3.visual.visualAnimal.variations[1].tileUIndex / v3.visual.visualAnimal.variations[1].numTilesU, v3.visual.visualAnimal.variations[1].tileVIndex / v3.visual.visualAnimal.variations[1].numTilesV, false)
    I3DUtil.setShaderParameterRec(v1, "RDT", nil, 0, nil, nil, false)
  end
end
function LivestockTrailer:getAdditionalComponentMass(superFunc, component)
  local additionalMass = superFunc(self, component)
  local v5 = v5:getClusters()
  for v9, v10 in ipairs(v5) do
    local v11 = v10:getSubTypeIndex()
    local v12 = v12:getSubTypeByIndex(v11)
    local v14 = v14:getFillTypeByIndex(v12.fillTypeIndex)
    local v17 = v10:getNumAnimals()
  end
  return additionalMass
end
function LivestockTrailer:getSellPrice(superFunc)
  local sellPrice = superFunc(self)
  local v4 = v4:getClusters()
  for v8, v9 in ipairs(v4) do
    local v11 = v9:getSellPrice()
    local v12 = v9:getNumAnimals()
  end
  return sellPrice
end
function LivestockTrailer:dayChanged(superFunc)
  superFunc(self)
  local v3 = v3:getClusters()
  for v7, v8 in ipairs(v3) do
    v8:onDayChanged()
  end
end
function LivestockTrailer:periodChanged(superFunc)
  superFunc(self)
  local v3 = v3:getClusters()
  for v7, v8 in ipairs(v3) do
    v8:onPeriodChanged()
  end
end
function LivestockTrailer:onAnimalLoadTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if not onEnter then
    -- if not v4 then goto L61 end
  end
  if g_currentMission.nodeToObject[otherId] ~= nil and g_currentMission.nodeToObject[otherId].spec_rideable ~= nil then
    local v8 = g_currentMission.nodeToObject[otherId]:getCluster()
    if v8 ~= nil then
      local v9 = v8:getSubTypeIndex()
      local v10 = self:getSupportsAnimalSubType(v9)
      if v10 then
        if onEnter then
          table.addElement(self.spec_livestockTrailer.rideablesInTrigger, g_currentMission.nodeToObject[otherId])
          g_currentMission.nodeToObject[otherId]:addDeleteListener(self, "onAnimalRideableDeleted")
        else
          table.removeElement(self.spec_livestockTrailer.rideablesInTrigger, g_currentMission.nodeToObject[otherId])
          g_currentMission.nodeToObject[otherId]:removeDeleteListener(self, "onAnimalRideableDeleted")
        end
        if v6.animalScreenController ~= nil then
          v10:onAnimalsChanged(self, nil)
        end
      end
    end
  end
end
function LivestockTrailer:onAnimalRideableDeleted(rideable)
  table.removeElement(self.spec_livestockTrailer.rideablesInTrigger, rideable)
  if self.spec_livestockTrailer.animalScreenController ~= nil then
    v3:onAnimalsChanged(self, nil)
  end
end
function LivestockTrailer:getAnimalUnloadPlaces()
  for v6, v7 in ipairs(self.spec_livestockTrailer.spawnPlaces) do
    local v9, v10, v11 = getWorldTranslation(v7.node)
    local v13, v14, v15 = getWorldRotation(v7.node)
    v13, v14, v15 = localDirectionToWorld(v7.node, 1, 0, 0)
    v13, v14, v15 = localDirectionToWorld(v7.node, 0, 0, 1)
    table.insert(v2, {startX = v9, startY = v10, startZ = v11, rotX = v13, rotY = v14, rotZ = v15, dirX = v13, dirY = v14, dirZ = v15, dirPerpX = v13, dirPerpY = v14, dirPerpZ = v15, yOffset = 1, maxWidth = math.huge, maxLength = math.huge, maxHeight = math.huge, width = v7.width})
  end
  return v2
end
function LivestockTrailer:loadSpecValueNumberAnimals(v1, v2, v3)
  local v6 = self:getRootName()
  while true do
    v7 = string.format("%s.livestockTrailer.animal(%d)", v6, v5)
    v8 = self:hasProperty(v7)
    if not v8 then
      break
    end
    v8 = self:getValue(v7 .. "#type")
    if v8 ~= nil then
      v9 = string.lower(v8)
      v10 = string.lower(v3)
      if v9 == v10 then
        v9 = self:getValue(v7 .. "#numSlots", 0)
        return v9
      end
    end
  end
  return v4
end
function LivestockTrailer.loadSpecValueNumberAnimalsCow(xmlFile, customEnvironment, baseDir)
  return LivestockTrailer.loadSpecValueNumberAnimals(xmlFile, customEnvironment, baseDir, "cow")
end
function LivestockTrailer.loadSpecValueNumberAnimalsPig(xmlFile, customEnvironment, baseDir)
  return LivestockTrailer.loadSpecValueNumberAnimals(xmlFile, customEnvironment, baseDir, "pig")
end
function LivestockTrailer.loadSpecValueNumberAnimalsSheep(xmlFile, customEnvironment, baseDir)
  return LivestockTrailer.loadSpecValueNumberAnimals(xmlFile, customEnvironment, baseDir, "sheep")
end
function LivestockTrailer.loadSpecValueNumberAnimalsHorse(xmlFile, customEnvironment, baseDir)
  return LivestockTrailer.loadSpecValueNumberAnimals(xmlFile, customEnvironment, baseDir, "horse")
end
function LivestockTrailer:getSpecValueNumberAnimals(v1, v2)
  if self.specs[v2] == nil then
    return nil
  end
  local v6 = v6:getText("unit_pieces")
  return string.format(...)
end
function LivestockTrailer.getSpecValueNumberAnimalsCow(storeItem, realItem)
  return LivestockTrailer.getSpecValueNumberAnimals(storeItem, realItem, "numAnimalsCow")
end
function LivestockTrailer.getSpecValueNumberAnimalsPig(storeItem, realItem)
  return LivestockTrailer.getSpecValueNumberAnimals(storeItem, realItem, "numAnimalsPig")
end
function LivestockTrailer.getSpecValueNumberAnimalsSheep(storeItem, realItem)
  return LivestockTrailer.getSpecValueNumberAnimals(storeItem, realItem, "numAnimalsSheep")
end
function LivestockTrailer.getSpecValueNumberAnimalsHorse(storeItem, realItem)
  return LivestockTrailer.getSpecValueNumberAnimals(storeItem, realItem, "numAnimalsHorse")
end
LivestockTrailerActivatable = {}
local LivestockTrailerActivatable_mt = Class(LivestockTrailerActivatable)
function LivestockTrailerActivatable.new(livestockTrailer)
  setmetatable({}, u0)
  local v2 = v2:getText("action_openLivestockTrailerMenu")
  return {livestockTrailer = livestockTrailer, activateText = v2}
end
function LivestockTrailerActivatable:getIsActivatable()
  local v1 = v1:getLoadingTrigger()
  if v1 ~= nil then
    return false
  end
  v1 = v1:getRideablesInTrigger()
  if 0 >= #v1 then
    local v2 = v2:getNumOfAnimals()
    -- if 0 >= v2 then goto L49 end
  end
  v2 = v2:getIsActiveForInput(true)
  if v2 then
    return true
  end
  for v5, v6 in ipairs(v1) do
    local v7 = v6:getIsActiveForInput(true)
    if not v7 then
      continue
    end
    return true
  end
  return false
end
function LivestockTrailerActivatable:run()
  local controller = AnimalScreenTrailer.new(self.livestockTrailer)
  controller:init()
  v2:setController(controller)
  v2:showGui("AnimalScreen")
end
