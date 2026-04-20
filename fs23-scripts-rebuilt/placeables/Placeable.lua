-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Placeable = {}
source("dataS/scripts/placeables/PlaceableNameEvent.lua")
local Placeable_mt = Class(Placeable, Object)
InitStaticObjectClass(Placeable, "Placeable", ObjectIds.OBJECT_PLACEABLE)
Placeable.DEBUG_NETWORK = false
Placeable.DEBUG_NETWORK_UPDATE = false
Placeable.LOAD_STEP_CREATED = 0
Placeable.LOAD_STEP_PRE_LOAD = 1
Placeable.LOAD_STEP_AWAIT_I3D = 2
Placeable.LOAD_STEP_LOAD = 3
Placeable.LOAD_STEP_POST_LOAD = 4
Placeable.LOAD_STEP_AWAIT_SUB_I3D = 5
Placeable.LOAD_STEP_FINISHED = 6
Placeable.LOAD_STEP_SYNCHRONIZED = 7
Placeable.LOADING_STATE_OK = 1
Placeable.LOADING_STATE_ERROR = 2
Placeable.PROPERTY_STATE_NONE = 0
Placeable.PROPERTY_STATE_OWNED = 1
Placeable.PROPERTY_STATE_CONSTRUCTION_PREVIEW = 2
Placeable.SELL_AND_DELETE = 0
Placeable.SELL_AND_SPECTATOR_FARM = 1
Placeable.DESTRUCTION = {SELL = 1, PER_NODE = 2}
Placeable.UNDO_DURATION = 900000
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("placeable")
  Placeable.xmlSchema = v1
  v1 = XMLSchema.new("savegame_placeables")
  Placeable.xmlSchemaSavegame = v1
end)
function Placeable.registerEvents(placeableType)
  SpecializationUtil.registerEvent(placeableType, "onPreLoad")
  SpecializationUtil.registerEvent(placeableType, "onLoad")
  SpecializationUtil.registerEvent(placeableType, "onPostLoad")
  SpecializationUtil.registerEvent(placeableType, "onLoadFinished")
  SpecializationUtil.registerEvent(placeableType, "onPreDelete")
  SpecializationUtil.registerEvent(placeableType, "onDelete")
  SpecializationUtil.registerEvent(placeableType, "onSave")
  SpecializationUtil.registerEvent(placeableType, "onReadStream")
  SpecializationUtil.registerEvent(placeableType, "onWriteStream")
  SpecializationUtil.registerEvent(placeableType, "onReadUpdateStream")
  SpecializationUtil.registerEvent(placeableType, "onWriteUpdateStream")
  SpecializationUtil.registerEvent(placeableType, "onPreFinalizePlacement")
  SpecializationUtil.registerEvent(placeableType, "onFinalizePlacement")
  SpecializationUtil.registerEvent(placeableType, "onPostFinalizePlacement")
  SpecializationUtil.registerEvent(placeableType, "onUpdate")
  SpecializationUtil.registerEvent(placeableType, "onUpdateTick")
  SpecializationUtil.registerEvent(placeableType, "onDraw")
  SpecializationUtil.registerEvent(placeableType, "onHourChanged")
  SpecializationUtil.registerEvent(placeableType, "onMinuteChanged")
  SpecializationUtil.registerEvent(placeableType, "onDayChanged")
  SpecializationUtil.registerEvent(placeableType, "onPeriodChanged")
  SpecializationUtil.registerEvent(placeableType, "onWeatherChanged")
  SpecializationUtil.registerEvent(placeableType, "onFarmlandStateChanged")
  SpecializationUtil.registerEvent(placeableType, "onBuy")
  SpecializationUtil.registerEvent(placeableType, "onSell")
  SpecializationUtil.registerEvent(placeableType, "onOwnerChanged")
end
function Placeable.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "setOwnerFarmId", Placeable.setOwnerFarmId)
  SpecializationUtil.registerFunction(placeableType, "setLoadingStep", Placeable.setLoadingStep)
  SpecializationUtil.registerFunction(placeableType, "setLoadingState", Placeable.setLoadingState)
  SpecializationUtil.registerFunction(placeableType, "addToPhysics", Placeable.addToPhysics)
  SpecializationUtil.registerFunction(placeableType, "removeFromPhysics", Placeable.removeFromPhysics)
  SpecializationUtil.registerFunction(placeableType, "raiseLoadingCallback", Placeable.raiseLoadingCallback)
  SpecializationUtil.registerFunction(placeableType, "collectPickObjects", Placeable.collectPickObjects)
  SpecializationUtil.registerFunction(placeableType, "getNeedWeatherChanged", Placeable.getNeedWeatherChanged)
  SpecializationUtil.registerFunction(placeableType, "getNeedHourChanged", Placeable.getNeedHourChanged)
  SpecializationUtil.registerFunction(placeableType, "getNeedMinuteChanged", Placeable.getNeedMinuteChanged)
  SpecializationUtil.registerFunction(placeableType, "getNeedDayChanged", Placeable.getNeedDayChanged)
  SpecializationUtil.registerFunction(placeableType, "initPose", Placeable.initPose)
  SpecializationUtil.registerFunction(placeableType, "getName", Placeable.getName)
  SpecializationUtil.registerFunction(placeableType, "getImageFilename", Placeable.getImageFilename)
  SpecializationUtil.registerFunction(placeableType, "getCanBeRenamedByFarm", Placeable.getCanBeRenamedByFarm)
  SpecializationUtil.registerFunction(placeableType, "setName", Placeable.setName)
  SpecializationUtil.registerFunction(placeableType, "getPrice", Placeable.getPrice)
  SpecializationUtil.registerFunction(placeableType, "canBuy", Placeable.canBuy)
  SpecializationUtil.registerFunction(placeableType, "getCanBePlacedAt", Placeable.getCanBePlacedAt)
  SpecializationUtil.registerFunction(placeableType, "canBeSold", Placeable.canBeSold)
  SpecializationUtil.registerFunction(placeableType, "isMapBound", Placeable.isMapBound)
  SpecializationUtil.registerFunction(placeableType, "getDestructionMethod", Placeable.getDestructionMethod)
  SpecializationUtil.registerFunction(placeableType, "previewNodeDestructionNodes", Placeable.previewNodeDestructionNodes)
  SpecializationUtil.registerFunction(placeableType, "performNodeDestruction", Placeable.performNodeDestruction)
  SpecializationUtil.registerFunction(placeableType, "updateOwnership", Placeable.updateOwnership)
  SpecializationUtil.registerFunction(placeableType, "setOverlayColor", Placeable.setOverlayColor)
  SpecializationUtil.registerFunction(placeableType, "setOverlayColorNodes", Placeable.setOverlayColorNodes)
  SpecializationUtil.registerFunction(placeableType, "getDailyUpkeep", Placeable.getDailyUpkeep)
  SpecializationUtil.registerFunction(placeableType, "getSellPrice", Placeable.getSellPrice)
  SpecializationUtil.registerFunction(placeableType, "setPreviewPosition", Placeable.setPreviewPosition)
  SpecializationUtil.registerFunction(placeableType, "setPropertyState", Placeable.setPropertyState)
  SpecializationUtil.registerFunction(placeableType, "getPropertyState", Placeable.getPropertyState)
  SpecializationUtil.registerFunction(placeableType, "setVisibility", Placeable.setVisibility)
  SpecializationUtil.registerFunction(placeableType, "getIsSynchronized", Placeable.getIsSynchronized)
end
function Placeable.init()
  Placeable.xmlSchema:register(XMLValueType.STRING, "placeable" .. "#type", "Placeable type", nil, true)
  Placeable.xmlSchema:register(XMLValueType.STRING, "placeable" .. ".annotation", "Annotation", nil, false)
  Placeable.xmlSchema:register(XMLValueType.STRING, "placeable" .. ".base.filename", "Placeable i3d file", nil, true)
  Placeable.xmlSchema:register(XMLValueType.BOOL, "placeable" .. ".base.canBeRenamed", "Placeable can be renamed by player", false)
  Placeable.xmlSchema:register(XMLValueType.BOOL, "placeable" .. ".base.boughtWithFarmland", "Placeable is bough with farmland", false)
  Placeable.xmlSchema:register(XMLValueType.BOOL, "placeable" .. ".base.buysFarmland", "Placeable buys farmland it is placed on", false)
  Placeable.xmlSchema:register(XMLValueType.FLOAT, "placeable" .. ".base.buysFarmland#priceScale", "Price scale for the farmland price", 1)
  Placeable.xmlSchema:register(XMLValueType.BOOL, "placeable" .. ".base.canBeDeleted", "Placeable can be deleted by the player, set to false if it should be set farm 0 on sell instead", true)
  StoreManager.registerStoreDataXMLPaths(Placeable.xmlSchema, "placeable")
  I3DUtil.registerI3dMappingXMLPaths(Placeable.xmlSchema, "placeable")
  Placeable.xmlSchemaSavegame:register(XMLValueType.BOOL, "placeables#loadAnyFarmInSingleplayer", "Load any farm in singleplayer. Causes any placeable with any farmId to be loaded.", false)
  Placeable.xmlSchemaSavegame:register(XMLValueType.INT, "placeables#version", "Version of map placeables file")
  Placeable.xmlSchemaSavegame:register(XMLValueType.STRING, "placeables.placeable(?)" .. "#name", "Custom name set by player to be used instead of store item name")
  Placeable.xmlSchemaSavegame:register(XMLValueType.STRING, "placeables.placeable(?)" .. "#mapBoundId", "Map bound identifier (defines that a placeable is placed on a map directly, and with a unique ID)")
  Placeable.xmlSchemaSavegame:register(XMLValueType.STRING, "placeables.placeable(?)" .. ".customImage#filename", "Path to a custom image file")
  Placeable.xmlSchemaSavegame:register(XMLValueType.VECTOR_TRANS, "placeables.placeable(?)" .. "#position", "Position")
  Placeable.xmlSchemaSavegame:register(XMLValueType.VECTOR_ROT, "placeables.placeable(?)" .. "#rotation", "Rotation")
  Placeable.xmlSchemaSavegame:register(XMLValueType.STRING, "placeables.placeable(?)" .. "#filename", "Path to xml filename")
  Placeable.xmlSchemaSavegame:register(XMLValueType.FLOAT, "placeables.placeable(?)" .. "#age", "Age of placeable in months.", 0)
  Placeable.xmlSchemaSavegame:register(XMLValueType.FLOAT, "placeables.placeable(?)" .. "#price", "Price of placeable")
  Placeable.xmlSchemaSavegame:register(XMLValueType.INT, "placeables.placeable(?)" .. "#farmId", "Owner farmland", 0)
  Placeable.xmlSchemaSavegame:register(XMLValueType.INT, "placeables.placeable(?)" .. "#id", "Save id")
  Placeable.xmlSchemaSavegame:register(XMLValueType.BOOL, "placeables.placeable(?)" .. "#defaultFarmProperty", "Is property of default farm. Causes object to be removed on non-starter games.", false)
  Placeable.xmlSchemaSavegame:register(XMLValueType.STRING, "placeables.placeable(?)" .. "#modName", "Name of mod")
  Placeable.xmlSchemaSavegame:register(XMLValueType.INT, "placeables.placeable(?)" .. "#sinceVersion", "Version of xml file when this placeable was added. Will cause placeable to appear on older, existing saves")
  local v3 = v3:getSpecializations()
  for v5, v6 in pairs(...) do
    local v7 = ClassUtil.getClassObject(v6.className)
    if not (v7 ~= nil) then
      continue
    end
    local v8 = rawget(v7, "registerXMLPaths")
    if v8 then
      v7.registerXMLPaths(v0, "placeable")
    end
    v8 = rawget(v7, "registerSavegameXMLPaths")
    if not v8 then
      continue
    end
    v7.registerSavegameXMLPaths(v1, "placeables.placeable(?)" .. "." .. v5)
  end
  v2:addSpecType("placeableSlots", "shopListAttributeIconSlots", nil, Placeable.getSpecValueSlots, "placeable")
end
function Placeable.postInit()
end
function Placeable.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.finishedLoading = false
  v3.rootNode = nil
  v3.i3dMappings = {}
  v3.components = {}
  v3.loadingState = Placeable.LOADING_STATE_OK
  v3.loadingStep = Placeable.LOAD_STEP_CREATED
  v3.isDeleting = false
  v3.isDeleted = false
  v3.isLoadedFromSavegame = false
  v3.loadingTasks = {}
  v3.readyForFinishLoading = false
  v3.propertyState = Placeable.PROPERTY_STATE_OWNED
  v3.age = 0
  v3.price = 0
  v3.farmlandId = 0
  v3.pickObjects = {}
  v3.undoTimer = 0
  v3.mapBoundId = nil
  v3.synchronizedConnections = {}
  return v3
end
function Placeable:load(placeableData, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  self.asyncData = {callback = asyncCallbackFunction, object = asyncCallbackObject, arguments = asyncCallbackArguments}
  if asyncCallbackFunction == nil then
    self:onLoadingError("Missing asyncCallbackFunction. Placeable only supports async loading!")
    return
  end
  local v5, v6 = Utils.getModNameAndBaseDirectory(placeableData.filename)
  self:setLoadingStep(Placeable.LOAD_STEP_PRE_LOAD)
  self.configFileName = placeableData.filename
  self.baseDirectory = v6
  self.customEnvironment = v5
  self.typeName = placeableData.typeName
  local v7 = v7:getTypeByName(self.typeName)
  if v7 == nil then
    self:onLoadingError("Unable to find placeable type '%s'", self.typeName)
    return
  end
  self["type"] = v7
  self.specializations = v7.specializations
  self.specializationNames = v7.specializationNames
  self.specializationsByName = v7.specializationsByName
  local v8 = table.copy(v7.eventListeners, 2)
  self.eventListeners = v8
  v8 = XMLFile.load("placeableXml", placeableData.filename, Placeable.xmlSchema)
  self.xmlFile = v8
  self.savegame = placeableData.savegame
  self.position = {x = placeableData.posX, y = placeableData.posY, z = placeableData.posZ}
  self.rotation = {x = placeableData.rotX, y = placeableData.rotY, z = placeableData.rotZ}
  if placeableData.ownerFarmId ~= nil then
    self:setOwnerFarmId(placeableData.ownerFarmId, true)
  end
  v8 = v8:getItemByXMLFilename(self.configFileName)
  self.storeItem = v8
  if self.storeItem ~= nil then
    v8 = v8:getBrandByIndex(self.storeItem.brandIndex)
    self.brand = v8
    if self.price ~= 0 then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L188
    end
    v8 = StoreItemUtil.getDefaultPrice(self.storeItem)
    self.price = v8
  else
    self:onLoadingError("Missing storeItem for placable '%s'", self.configFileName)
    return
  end
  self.customImageFilename = nil
  for v11, v12 in pairs(v7.functions) do
    self[v11] = v12
  end
  -- TODO: structure LOP_FORNPREP (pc 205, target 233)
  if self["spec_" .. self.specializationNames[1]] ~= nil then
    self:onLoadingError("The placeable specialization '%s' could not be added because variable '%s' already exists!", self.specializationNames[1], "spec_" .. self.specializationNames[1])
    return
  end
  v12 = setmetatable({}, {__index = self})
  self[v11] = v12
  -- TODO: structure LOP_FORNLOOP (pc 232, target 206)
  SpecializationUtil.raiseEvent(self, "onPreLoad", self.savegame)
  if self.loadingState ~= Placeable.LOADING_STATE_OK then
    self:onLoadingError("Placeable pre-loading failed!")
    return
  end
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.filename", "placeable.base.filename")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.dayNightObjects", "Visiblity Condition-Tab in GIANTS Editor / Exporter")
  v8 = v8:getValue("placeable.base.filename")
  self.i3dFilename = v8
  if self.i3dFilename == nil then
    self:onLoadingError("Placeable filename missing!")
    return
  end
  v8 = v8:getValue("placeable.base.canBeRenamed", false)
  self.canBeRenamed = v8
  v8 = v8:getValue("placeable.base.boughtWithFarmland", false)
  self.boughtWithFarmland = v8
  v8 = v8:getValue("placeable.base.buysFarmland", false)
  self.buysFarmland = v8
  v8 = v8:getValue("placeable.base.buysFarmland#priceScale", 1)
  self.buysFarmlandPriceScale = v8
  v8 = v8:getValue("placeable.base.canBeDeleted", true)
  self.canBeDeleted = v8
  if self.storeItem.showInStore and not self.canBeDeleted then
    self:onLoadingError("Store item can be manually placed (showInStore.showInStore) but not deleted by the player (base.canBeDeleted=false)! Only use this option for preplaced placeables")
    return
  end
  self:setLoadingStep(Placeable.LOAD_STEP_AWAIT_I3D)
  v8 = Utils.getFilename(self.i3dFilename, v6)
  self.i3dFilename = v8
  v8 = v8:loadSharedI3DFileAsync(self.i3dFilename, true, false, self.loadI3dFinished, self, nil)
  self.sharedLoadRequestId = v8
end
function Placeable:loadI3dFinished(i3dNode, failedReason, args)
  self:setLoadingState(Placeable.LOADING_STATE_OK)
  self:setLoadingStep(Placeable.LOAD_STEP_LOAD)
  self:removeFromPhysics()
  if i3dNode == 0 then
    self:onLoadingError("Placeable i3d loading failed!!")
    return
  end
  self.rootNode = i3dNode
  local v5 = getRootNode()
  link(v5, i3dNode)
  I3DUtil.loadI3DComponents(i3dNode, self.components)
  if #self.components == 0 then
    self:onLoadingError("Unable to get placeable components")
    return
  end
  I3DUtil.loadI3DMapping(self.xmlFile, "placeable", self.components, self.i3dMappings)
  self:initPose()
  SpecializationUtil.raiseEvent(self, "onLoad", self.savegame)
  if self.loadingState ~= Placeable.LOADING_STATE_OK then
    self:onLoadingError("Placeable loading failed!")
    return
  end
  self:setLoadingStep(Placeable.LOAD_STEP_POST_LOAD)
  SpecializationUtil.raiseEvent(self, "onPostLoad", self.savegame)
  if self.loadingState ~= Placeable.LOADING_STATE_OK then
    self:onLoadingError("Placeable post-loading failed!")
    return
  end
  self:setVisibility(false)
  if #self.loadingTasks == 0 then
    self:onFinishedLoading()
    return
  end
  self.readyForFinishLoading = true
  self:setLoadingStep(Placeable.LOAD_STEP_AWAIT_SUB_I3D)
end
function Placeable:onFinishedLoading()
  self:setVisibility(true)
  if self.isServer and self.savegame ~= nil then
    local v1 = v1:getValue(self.savegame.key .. "#id")
    self.currentSavegameId = v1
    self.isLoadingFromSavegameXML = true
    for v4, v5 in pairs(self.specializations) do
      if not (v5.loadFromXMLFile ~= nil) then
        continue
      end
      v5.loadFromXMLFile(self, self.savegame.xmlFile, self.savegame.key .. "." .. self.specializationNames[v4], self.savegame.reset)
    end
    self.isLoadingFromSavegameXML = false
    v1 = v1:getValue(self.savegame.key .. "#mapBoundId", self.mapBoundId)
    self.mapBoundId = v1
    v1 = v1:getValue(self.savegame.key .. ".customImage#filename", self.customImageFilename)
    self.customImageFilename = v1
    if self.customImageFilename ~= nil then
      v1 = NetworkUtil.convertFromNetworkFilename(self.customImageFilename)
      self.customImageFilename = v1
    end
    v1 = v1:getValue(self.savegame.key .. "#name")
    self.rawName = v1
    if self.rawName ~= nil then
      v1 = v1:convertText(self.rawName)
      self.name = v1
    end
    v1 = v1:getValue(self.savegame.key .. "#age", 0)
    self.age = v1
    v1 = v1:getValue(self.savegame.key .. "#price", self.price)
    self.price = v1
    if not self.savegame.ignoreFarmId then
      v3 = v3:getValue(self.savegame.key .. "#farmId", AccessHandler.EVERYONE)
      self:setOwnerFarmId(v3, true)
    end
    self.isLoadedFromSavegame = true
  end
  self:setLoadingStep(Placeable.LOAD_STEP_FINISHED)
  SpecializationUtil.raiseEvent(self, "onLoadFinished", self.savegame)
  if self.isLoadedFromSavegame then
    self:finalizePlacement()
  end
  if self.isServer then
    self:setLoadingStep(Placeable.LOAD_STEP_SYNCHRONIZED)
  end
  self.finishedLoading = true
  self:raiseLoadingCallback()
  self.savegame = nil
end
function Placeable:onLoadingError(msg, ...)
  if self.xmlFile ~= nil then
    Logging.xmlError(...)
    v2:delete()
    self.xmlFile = nil
  else
    Logging.error(...)
  end
  self:setLoadingState(Placeable.LOADING_STATE_ERROR)
  self:raiseLoadingCallback()
end
function Placeable:createLoadingTask(target)
  table.insert(self.loadingTasks, {target = target})
  return {target = target}
end
function Placeable:finishLoadingTask(task)
  for v5, v6 in ipairs(self.loadingTasks) do
    if not (v6 == task) then
      continue
    end
    table.remove(self.loadingTasks, v5)
    break
  end
  if self.readyForFinishLoading and #self.loadingTasks == 0 then
    self:onFinishedLoading()
  end
end
function Placeable:raiseLoadingCallback()
  if self.asyncData ~= nil and self.asyncData.callback ~= nil then
    self.asyncData.callback(self.asyncData.object, self, self.loadingState, self.asyncData.arguments)
  end
  self.asyncData = nil
end
function Placeable:initPose()
  setTranslation(self.rootNode, self.position.x, self.position.y, self.position.z)
  setRotation(self.rootNode, self.rotation.x, self.rotation.y, self.rotation.z)
end
function Placeable:finalizePlacement()
  SpecializationUtil.raiseEvent(self, "onPreFinalizePlacement")
  self:addToPhysics()
  v1:addPlaceable(self)
  v1:addOwnedItem(self)
  self:collectPickObjects(self.rootNode)
  for v4, v5 in pairs(self.pickObjects) do
    v6:addNodeObject(v5, self)
  end
  v1, v2, v3 = getWorldTranslation(self.rootNode)
  v4 = v4:getFarmlandIdAtWorldPosition(v1, v3)
  self.farmlandId = v4
  if self.boughtWithFarmland then
    if self.isServer then
      self:updateOwnership()
    end
    v4:addStateChangeListener(self)
  end
  SpecializationUtil.raiseEvent(self, "onFinalizePlacement")
  SpecializationUtil.raiseEvent(self, "onPostFinalizePlacement")
  v4 = self:getNeedWeatherChanged()
  if v4 then
    v4:subscribe(MessageType.WEATHER_CHANGED, self.weatherChanged, self)
  end
  v4 = self:getNeedHourChanged()
  if v4 then
    v4:subscribe(MessageType.HOUR_CHANGED, self.hourChanged, self)
  end
  v4 = self:getNeedMinuteChanged()
  if v4 then
    v4:subscribe(MessageType.MINUTE_CHANGED, self.minuteChanged, self)
  end
  v4 = self:getNeedDayChanged()
  if v4 then
    v4:subscribe(MessageType.DAY_CHANGED, self.dayChanged, self)
  end
  v4:subscribe(MessageType.PERIOD_CHANGED, self.periodChanged, self)
  local v7 = self:getOwnerFarmId()
  v4:publish(...)
end
function Placeable:delete()
  if self.isDeleted then
    Logging.devError("Trying to delete a already deleted placeable")
    printCallstack()
    return
  end
  v1:unsubscribeAll(self)
  self.isDeleting = true
  SpecializationUtil.raiseEvent(self, "onPreDelete")
  v1:removePlaceableToDelete(self)
  v1:removePlaceable(self)
  v1:removeOwnedItem(self)
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  for v4, v5 in pairs(self.pickObjects) do
    v6:removeNodeObject(v5)
  end
  SpecializationUtil.raiseEvent(self, "onDelete")
  if self.boughtWithFarmland and self.isServer then
    v1:removeStateChangeListener(self)
  end
  if self.rootNode ~= nil then
    delete(self.rootNode)
    self.rootNode = nil
  end
  if self.xmlFile ~= nil then
    v1:delete()
    self.xmlFile = nil
  end
  self.isDeleting = false
  self.isDeleted = true
  v2 = v2:superClass()
  v2.delete(self)
end
function Placeable:readStream(streamId, connection, objectId)
  local v5 = v5:superClass()
  v5.readStream(self, streamId, connection, objectId)
  v5 = streamReadString(streamId)
  local v4 = NetworkUtil.convertFromNetworkFilename(...)
  v5 = streamReadString(streamId)
  if v4 ~= nil then
    local v7 = streamReadFloat32(streamId)
    v7 = streamReadFloat32(streamId)
    v7 = streamReadFloat32(streamId)
    v7 = NetworkUtil.readCompressedAngle(streamId)
    v7 = NetworkUtil.readCompressedAngle(streamId)
    v7 = NetworkUtil.readCompressedAngle(streamId)
    if self.configFileName ~= nil then
    end
    if true then
      self:load(v6, function(self, streamId, connection, objectId)
        if connection == Placeable.LOADING_STATE_OK then
          v4:onObjectFinishedAsyncLoading(u0)
          return
        end
        Logging.error("Failed to load placeable on client")
        if streamId ~= nil then
          streamId:delete()
        end
        printCallstack()
        return
      end)
    end
  end
end
function Placeable:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v5 = NetworkUtil.convertToNetworkFilename(self.configFileName)
  streamWriteString(...)
  streamWriteString(streamId, self.typeName)
  local v3, v4, v5 = getTranslation(self.rootNode)
  local v6, v7, v8 = getRotation(self.rootNode)
  streamWriteFloat32(streamId, v3)
  streamWriteFloat32(streamId, v4)
  streamWriteFloat32(streamId, v5)
  NetworkUtil.writeCompressedAngle(streamId, v6)
  NetworkUtil.writeCompressedAngle(streamId, v7)
  NetworkUtil.writeCompressedAngle(streamId, v8)
end
function Placeable:postReadStream(streamId, connection)
  self:finalizePlacement()
  if Placeable.DEBUG_NETWORK then
    print("-------------------------------------------------------------")
    print(self.configFileName)
    for v6, v7 in ipairs(self.eventListeners.onReadStream) do
      local v8 = ClassUtil.getClassName(v7)
      local startBits = streamGetReadOffset(streamId)
      v7.onReadStream(self, streamId, connection)
      local v17 = tostring(v8)
      v17 = streamGetReadOffset(streamId)
      print("  " .. v17 .. " read " .. v17 - startBits .. " bits")
    end
  else
    SpecializationUtil.raiseEvent(self, "onReadStream", streamId, connection)
  end
  v3 = streamReadBool(streamId)
  if v3 then
    v5 = streamReadString(streamId)
    self:setName(v5, true)
  end
  v3 = streamReadBool(streamId)
  if v3 then
    v4 = streamReadString(streamId)
    v3 = NetworkUtil.convertFromNetworkFilename(...)
    self.customImageFilename = v3
  end
  self:setLoadingStep(Placeable.LOAD_STEP_SYNCHRONIZED)
  self:raiseActive()
end
function Placeable:postWriteStream(streamId, connection)
  if Placeable.DEBUG_NETWORK then
    print("-------------------------------------------------------------")
    print(self.configFileName)
    for v6, v7 in ipairs(self.eventListeners.onWriteStream) do
      local v8 = ClassUtil.getClassName(v7)
      local startBits = streamGetWriteOffset(streamId)
      v7.onWriteStream(self, streamId, connection)
      local v17 = tostring(v8)
      v17 = streamGetWriteOffset(streamId)
      print("  " .. v17 .. " Wrote " .. v17 - startBits .. " bits")
    end
  else
    SpecializationUtil.raiseEvent(self, "onWriteStream", streamId, connection)
  end
  if self.name == nil then
  end
  v3 = v3(v4, true)
  if v3 then
    streamWriteString(streamId, self.name)
  end
  if self.customImageFilename == nil then
  end
  v3 = v3(v4, true)
  if v3 then
    v5 = NetworkUtil.convertToNetworkFilename(self.customImageFilename)
    streamWriteString(...)
  end
end
function Placeable:readUpdateStream(streamId, timestamp, connection)
  if Placeable.DEBUG_NETWORK_UPDATE then
    print("-------------------------------------------------------------")
    print(self.configFileName)
    for v7, v8 in ipairs(self.eventListeners.onReadUpdateStream) do
      local v9 = ClassUtil.getClassName(v8)
      local startBits = streamGetReadOffset(streamId)
      v8.onReadUpdateStream(self, streamId, timestamp, connection)
      local v18 = tostring(v9)
      v18 = streamGetReadOffset(streamId)
      print("  " .. v18 .. " read " .. v18 - startBits .. " bits")
    end
    return
  end
  SpecializationUtil.raiseEvent(self, "onReadUpdateStream", streamId, timestamp, connection)
end
function Placeable:writeUpdateStream(streamId, connection, dirtyMask)
  if Placeable.DEBUG_NETWORK_UPDATE then
    print("-------------------------------------------------------------")
    print(self.configFileName)
    for v7, v8 in ipairs(self.eventListeners.onWriteUpdateStream) do
      local v9 = ClassUtil.getClassName(v8)
      local startBits = streamGetWriteOffset(streamId)
      v8.onWriteUpdateStream(self, streamId, connection, dirtyMask)
      local v18 = tostring(v9)
      v18 = streamGetWriteOffset(streamId)
      print("  " .. v18 .. " Wrote " .. v18 - startBits .. " bits")
    end
    return
  end
  SpecializationUtil.raiseEvent(self, "onWriteUpdateStream", streamId, connection, dirtyMask)
end
function Placeable:saveToXMLFile(xmlFile, key, usedModNames)
  local v4, v5, v6 = getTranslation(self.rootNode)
  local v7, v8, v9 = getRotation(self.rootNode)
  xmlFile:setValue(key .. "#id", self.currentSavegameId)
  local v14 = NetworkUtil.convertToNetworkFilename(self.configFileName)
  local v13 = HTMLUtil.encodeToHTML(...)
  xmlFile:setValue(...)
  xmlFile:setValue(key .. "#position", v4, v5, v6)
  xmlFile:setValue(key .. "#rotation", v7, v8, v9)
  xmlFile:setValue(key .. "#age", self.age)
  xmlFile:setValue(key .. "#price", self.price)
  v14 = self:getOwnerFarmId()
  xmlFile:setValue(key .. "#farmId", v14 or 1)
  if self.canBeRenamed and self.name ~= nil then
    local v10 = v10:trim()
    if v10 ~= "" then
      xmlFile:setValue(key .. "#name", self.name)
      if self.rawName ~= nil then
        local v11 = v11:convertText(self.rawName)
        if self.name == v11 then
          xmlFile:setValue(key .. "#name", self.rawName)
        end
      end
    end
  end
  if self.mapBoundId ~= nil then
    xmlFile:setValue(key .. "#mapBoundId", self.mapBoundId)
  end
  if self.customImageFilename ~= nil then
    v14 = NetworkUtil.convertToNetworkFilename(self.customImageFilename)
    v13 = HTMLUtil.encodeToHTML(...)
    xmlFile:setValue(...)
  end
  for v13, v14 in pairs(self.specializations) do
    if not (v14.saveToXMLFile ~= nil) then
      continue
    end
    v14.saveToXMLFile(self, xmlFile, key .. "." .. self.specializationNames[v13], usedModNames)
  end
end
function Placeable:setPropertyState(state)
  self.propertyState = state
end
function Placeable:getPropertyState()
  return self.propertyState
end
function Placeable:setVisibility(state)
  for v5, v6 in pairs(self.components) do
    setVisibility(v6.node, state)
  end
end
function Placeable:getIsSynchronized()
  if self.loadingStep ~= Placeable.LOAD_STEP_SYNCHRONIZED then
  end
  return true
end
function Placeable.getNeedsSaving(v0)
  return true
end
function Placeable.update(v0, v1)
  SpecializationUtil.raiseEvent(v0, "onUpdate", v1)
end
function Placeable.updateTick(v0, v1)
  SpecializationUtil.raiseEvent(v0, "onUpdateTick", v1)
end
function Placeable.draw(v0)
  SpecializationUtil.raiseEvent(v0, "onDraw")
end
function Placeable:getName()
  if not self.name and self.storeItem then
  end
  return v1
end
function Placeable:getImageFilename()
  if not self.customImageFilename then
  end
  return v1
end
function Placeable:getCanBeRenamedByFarm(farmId)
  if self.canBeRenamed then
    local v3 = self:getOwnerFarmId()
    if v3 ~= farmId then
    end
  end
  return v2
end
function Placeable:setName(name, noEventSend)
  if self.canBeRenamed then
    if name then
      local v3 = name:trim()
      if v3 == "" then
        return false
      end
    end
    PlaceableNameEvent.sendEvent(self, name, noEventSend)
    self.name = name
    v3:publish(MessageType.UNLOADING_STATIONS_CHANGED)
    v3:publish(MessageType.LOADING_STATIONS_CHANGED)
    return true
  end
  return false
end
function Placeable.onBuy(v0)
  SpecializationUtil.raiseEvent(v0, "onBuy")
end
function Placeable:onSell()
  local v4 = self:getOwnerFarmId()
  v1:publish(...)
  SpecializationUtil.raiseEvent(self, "onSell")
end
function Placeable:getPrice()
  return self.price
end
function Placeable:canBuy()
  if self.storeItem.maxItemCount == nil then
    return true
  end
  local v6 = v6:getFarmId()
  local v3 = v3:getNumOfItems(...)
  if v3 < v1.maxItemCount then
    return true
  end
  return false
end
function Placeable.getCanBePlacedAt(v0, v1, v2, v3, v4)
  return true, nil
end
function Placeable.canBeSold(v0)
  return true, nil
end
function Placeable:isMapBound()
  if self.mapBoundId == nil then
  end
  return true
end
function Placeable.getDestructionMethod(v0)
  return Placeable.DESTRUCTION.SELL
end
function Placeable.previewNodeDestructionNodes(v0, v1)
  return nil
end
function Placeable.performNodeDestruction(v0, v1)
  return false
end
function Placeable:onFarmlandStateChanged(farmlandId, farmId)
  if self.boughtWithFarmland and farmlandId == self.farmlandId then
    self:updateOwnership()
  end
end
function Placeable.onOwnerChanged(v0)
end
function Placeable:setOwnerFarmId(farmId, noEventSend)
  if self.buysFarmland then
    v3:setLandOwnership(self.farmlandId, farmId)
  end
  local v4 = v4:superClass()
  v4.setOwnerFarmId(self, farmId, noEventSend)
  if Placeable.LOAD_STEP_LOAD < self.loadingStep then
    SpecializationUtil.raiseEvent(self, "onOwnerChanged")
  end
  if self.propertyState ~= Placeable.PROPERTY_STATE_CONSTRUCTION_PREVIEW then
    v3:removeOwnedItem(self)
    v3:addOwnedItem(self)
  end
end
function Placeable:updateOwnership()
  if not self.isServer then
    return
  end
  local v1 = v1:getItemByXMLFilename(self.configFileName)
  if v1 == nil then
    Logging.error("Missing storeItem for placable '%s'", self.configFileName)
    return
  end
  local v2 = v2:getFarmlandOwner(self.farmlandId)
  if v1.canBeSold then
    -- if not v0.boughtWithFarmland then goto L39 end
  end
  if v2 == FarmlandManager.NO_OWNER_FARM_ID then
  end
  if self.ownerFarmId ~= v2 then
    self:setOwnerFarmId(v2)
  end
end
function Placeable:setLoadingState(loadingState)
  if loadingState ~= Placeable.LOADING_STATE_OK then
    -- if v1 ~= Placeable.LOADING_STATE_ERROR then goto L15 end
  end
  self.loadingState = loadingState
  return
  printCallstack()
  Logging.error("Invalid loading state '%s'!", loadingState)
end
function Placeable:collectPickObjects(node)
  local v2 = getRigidBodyType(node)
  if v2 ~= RigidBodyType.NONE then
    table.insert(self.pickObjects, node)
  end
  v2 = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 23, target 33)
  local v8 = getChildAt(node, 1 - 1)
  self:collectPickObjects(...)
  -- TODO: structure LOP_FORNLOOP (pc 32, target 24)
end
function Placeable:setLoadingStep(loadingStep)
  if loadingStep ~= Placeable.LOAD_STEP_CREATED and loadingStep ~= Placeable.LOAD_STEP_PRE_LOAD and loadingStep ~= Placeable.LOAD_STEP_AWAIT_I3D and loadingStep ~= Placeable.LOAD_STEP_LOAD and loadingStep ~= Placeable.LOAD_STEP_POST_LOAD and loadingStep ~= Placeable.LOAD_STEP_AWAIT_SUB_I3D and loadingStep ~= Placeable.LOAD_STEP_FINISHED then
    -- if v1 ~= Placeable.LOAD_STEP_SYNCHRONIZED then goto L51 end
  end
  self.loadingStep = loadingStep
  return
  printCallstack()
  Logging.error("Invalid loading step '%s'!", loadingStep)
end
function Placeable:setOverlayColor(r, g, b, alpha)
  if self.overlayColorNodes == nil then
    self.overlayColorNodes = {}
    self:setOverlayColorNodes(self.rootNode, self.overlayColorNodes)
  end
  -- TODO: structure LOP_FORNPREP (pc 20, target 34)
  setShaderParameter(self.overlayColorNodes[1], "placeableColorScale", r, g, b, alpha, false)
  -- TODO: structure LOP_FORNLOOP (pc 33, target 21)
end
function Placeable:setOverlayColorNodes(node, nodeTable)
  local v3 = getHasClassId(node, ClassIds.SHAPE)
  if v3 then
    v3 = getHasShaderParameter(node, "placeableColorScale")
    if v3 then
      nodeTable[#nodeTable + 1] = node
    end
  end
  v3 = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 23, target 34)
  local v9 = getChildAt(node, 0)
  self:setOverlayColorNodes(v9, nodeTable)
  -- TODO: structure LOP_FORNLOOP (pc 33, target 24)
end
function Placeable:getDailyUpkeep()
  if self.storeItem.lifetime ~= nil and self.storeItem.lifetime ~= 0 then
    local v3 = math.min(self.age / self.storeItem.lifetime, 1)
  end
  local v4 = StoreItemUtil.getDailyUpkeep(v1, nil)
  return v4 * v2
end
function Placeable:getSellPrice()
  if g_time - Placeable.UNDO_DURATION < self.undoTimer and g_currentMission.lastConstructionScreenOpenTime < self.undoTimer and 0 < g_currentMission.lastConstructionScreenOpenTime then
    return self.price, true
  end
  if self.storeItem.lifetime ~= nil and self.storeItem.lifetime ~= 0 then
    local v6 = math.min(self.age / self.storeItem.lifetime, 1)
    local v3 = math.exp(-3.5 * v6)
  end
  v6 = math.max(v1, 0.05)
  v3 = math.floor(self.price * v6)
  return v3
end
function Placeable:getSellAction()
  local v2 = v2:getFarmlandOwner(self.farmlandId)
  if v2 ~= FarmManager.SPECTATOR_FARM_ID then
  end
  v2 = self:isMapBound()
  if v2 then
    if not true then
      -- if v0.canBeDeleted then goto L26 end
    end
    return Placeable.SELL_AND_SPECTATOR_FARM
  end
  return Placeable.SELL_AND_DELETE
end
function Placeable:addToPhysics()
  if self.rootNode ~= nil then
    addToPhysics(self.rootNode)
  end
end
function Placeable:removeFromPhysics()
  if self.rootNode ~= nil then
    removeFromPhysics(self.rootNode)
  end
end
function Placeable:setPreviewPosition(x, y, z, rotX, rotY, rotZ)
  setWorldTranslation(self.rootNode, x, y, z)
  setRotation(self.rootNode, 0, rotY, 0)
end
function Placeable.getNeedWeatherChanged(v0)
  return false
end
function Placeable.weatherChanged(v0)
  SpecializationUtil.raiseEvent(v0, "onWeatherChanged")
end
function Placeable.getNeedHourChanged(v0)
  return false
end
function Placeable.hourChanged(v0, v1)
  SpecializationUtil.raiseEvent(v0, "onHourChanged", v1)
end
function Placeable.getNeedMinuteChanged(v0)
  return false
end
function Placeable.minuteChanged(v0, v1)
  SpecializationUtil.raiseEvent(v0, "onMinuteChanged", v1)
end
function Placeable.getNeedDayChanged(v0)
  return false
end
function Placeable.dayChanged(v0, v1)
  SpecializationUtil.raiseEvent(v0, "onDayChanged", v1)
end
function Placeable:periodChanged(period)
  self.age = self.age + 1
  SpecializationUtil.raiseEvent(self, "onPeriodChanged", period)
end
function Placeable.getSpecValueSlots(storeItem, realItem)
  local v2 = v2:getNumOfItems(storeItem)
  if v2 ~= 0 then
  end
  local v4 = v4:getStoreItemSlotUsage(v6, true)
  v4 = string.format("%0d $SLOTS$", v4 * -1)
  return v4
end
