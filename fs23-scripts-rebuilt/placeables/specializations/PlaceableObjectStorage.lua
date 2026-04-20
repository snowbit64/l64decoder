-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableObjectStorage = {}
source("dataS/scripts/placeables/specializations/events/PlaceableObjectStorageErrorEvent.lua")
source("dataS/scripts/placeables/specializations/events/PlaceableObjectStorageStoreEvent.lua")
source("dataS/scripts/placeables/specializations/events/PlaceableObjectStorageUnloadEvent.lua")
PlaceableObjectStorage.COLLISION_MASK = CollisionFlag.VEHICLE + CollisionFlag.DYNAMIC_OBJECT + CollisionFlag.TREE + CollisionFlag.PLAYER
PlaceableObjectStorage.NUM_BITS_OBJECT_INFO = 8
PlaceableObjectStorage.NUM_BITS_AMOUNT = 16
PlaceableObjectStorage.MAX_HUD_INFO_ENTRIES = 10
function PlaceableObjectStorage.prerequisitesPresent(specializations)
  return true
end
function PlaceableObjectStorage.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "canBeSold", PlaceableObjectStorage.canBeSold)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableObjectStorage.updateInfo)
end
function PlaceableObjectStorage.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "getObjectStorageSupportsFillType", PlaceableObjectStorage.getObjectStorageSupportsFillType)
  SpecializationUtil.registerFunction(placeableType, "getObjectStorageSupportsObject", PlaceableObjectStorage.getObjectStorageSupportsObject)
  SpecializationUtil.registerFunction(placeableType, "getObjectStorageCanStoreObject", PlaceableObjectStorage.getObjectStorageCanStoreObject)
  SpecializationUtil.registerFunction(placeableType, "getIsBaleSupportedByUnloadTrigger", PlaceableObjectStorage.getIsBaleSupportedByUnloadTrigger)
  SpecializationUtil.registerFunction(placeableType, "addObjectToObjectStorage", PlaceableObjectStorage.addObjectToObjectStorage)
  SpecializationUtil.registerFunction(placeableType, "addAbstactObjectToObjectStorage", PlaceableObjectStorage.addAbstactObjectToObjectStorage)
  SpecializationUtil.registerFunction(placeableType, "removeAbstractObjectsFromStorage", PlaceableObjectStorage.removeAbstractObjectsFromStorage)
  SpecializationUtil.registerFunction(placeableType, "spawnNextObjectStorageObject", PlaceableObjectStorage.spawnNextObjectStorageObject)
  SpecializationUtil.registerFunction(placeableType, "removeAbstractObjectFromStorage", PlaceableObjectStorage.removeAbstractObjectFromStorage)
  SpecializationUtil.registerFunction(placeableType, "setObjectStorageObjectInfosDirty", PlaceableObjectStorage.setObjectStorageObjectInfosDirty)
  SpecializationUtil.registerFunction(placeableType, "updateDirtyObjectStorageObjectInfos", PlaceableObjectStorage.updateDirtyObjectStorageObjectInfos)
  SpecializationUtil.registerFunction(placeableType, "updateObjectStorageObjectInfos", PlaceableObjectStorage.updateObjectStorageObjectInfos)
  SpecializationUtil.registerFunction(placeableType, "getObjectStorageObjectInfos", PlaceableObjectStorage.getObjectStorageObjectInfos)
  SpecializationUtil.registerFunction(placeableType, "updateObjectStorageVisualAreas", PlaceableObjectStorage.updateObjectStorageVisualAreas)
  SpecializationUtil.registerFunction(placeableType, "getHasPendingManualStoreObjects", PlaceableObjectStorage.getHasPendingManualStoreObjects)
  SpecializationUtil.registerFunction(placeableType, "storePendingManualObjects", PlaceableObjectStorage.storePendingManualObjects)
  SpecializationUtil.registerFunction(placeableType, "updateManualStoreActivatable", PlaceableObjectStorage.updateManualStoreActivatable)
  SpecializationUtil.registerFunction(placeableType, "onObjectStoragePlayerTriggerCallback", PlaceableObjectStorage.onObjectStoragePlayerTriggerCallback)
  SpecializationUtil.registerFunction(placeableType, "onObjectStorageObjectTriggerCallback", PlaceableObjectStorage.onObjectStorageObjectTriggerCallback)
  SpecializationUtil.registerFunction(placeableType, "onObjectStorageSpawnOverlapCallback", PlaceableObjectStorage.onObjectStorageSpawnOverlapCallback)
end
function PlaceableObjectStorage.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableObjectStorage)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableObjectStorage)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableObjectStorage)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableObjectStorage)
  SpecializationUtil.registerEventListener(placeableType, "onReadUpdateStream", PlaceableObjectStorage)
  SpecializationUtil.registerEventListener(placeableType, "onWriteUpdateStream", PlaceableObjectStorage)
  SpecializationUtil.registerEventListener(placeableType, "onUpdate", PlaceableObjectStorage)
end
function PlaceableObjectStorage:registerXMLPaths(v1)
  self:setXMLSpecializationType("ObjectStorage")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".objectStorage.playerTrigger#node", "Player trigger node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".objectStorage.objectTrigger#node", "Object trigger node")
  self:register(XMLValueType.STRING, v1 .. ".objectStorage#fillTypeCategories", "List of supported fill type categories (if no fill types defined, all are allowed)")
  self:register(XMLValueType.STRING, v1 .. ".objectStorage#fillTypes", "List of supported fill types (if no fill types defined, all are allowed)")
  self:register(XMLValueType.BOOL, v1 .. ".objectStorage#supportsBales", "Bales can be stored", true)
  self:register(XMLValueType.BOOL, v1 .. ".objectStorage#supportsPallets", "Pallets can be stored", true)
  self:register(XMLValueType.INT, v1 .. ".objectStorage#capacity", "Max. capacity", 250)
  self:register(XMLValueType.FLOAT, v1 .. ".objectStorage#maxLength", "Max. length of objects to store", "unlimited")
  self:register(XMLValueType.FLOAT, v1 .. ".objectStorage#maxHeight", "Max. height of objects to store", "unlimited")
  self:register(XMLValueType.FLOAT, v1 .. ".objectStorage#maxWidth", "Max. width of objects to store", "unlimited")
  self:register(XMLValueType.INT, v1 .. ".objectStorage#maxUnloadAmount", "Max. amount of objects that can be unloaded at a time", 25)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".objectStorage.spawnAreas.spawnArea(?)#startNode", "Start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".objectStorage.spawnAreas.spawnArea(?)#endNode", "End node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".objectStorage.storageAreas.storageArea(?)#startNode", "Start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".objectStorage.storageAreas.storageArea(?)#endNode", "End node")
  self:setXMLSpecializationType()
end
function PlaceableObjectStorage:registerSavegameXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".object(?)#className", "Object class name")
  for v5, v6 in pairs(PlaceableObjectStorage.ABSTRACT_OBJECTS) do
    v6.registerXMLPaths(self, v1 .. ".object(?)")
  end
end
function PlaceableObjectStorage:onLoad(savegame)
  local v3 = v3:getValue("placeable.objectStorage.playerTrigger#node", nil, self.components, self.i3dMappings)
  self.spec_objectStorage.playerTriggerNode = v3
  if self.spec_objectStorage.playerTriggerNode ~= nil then
    addTrigger(self.spec_objectStorage.playerTriggerNode, "onObjectStoragePlayerTriggerCallback", self)
  else
    Logging.xmlWarning(self.xmlFile, "Missing player trigger for object storage")
  end
  if self.isServer then
    v3 = v3:getValue("placeable.objectStorage.objectTrigger#node", nil, self.components, self.i3dMappings)
    v2.objectTriggerNode = v3
    if v2.objectTriggerNode ~= nil then
      addTrigger(v2.objectTriggerNode, "onObjectStorageObjectTriggerCallback", self)
    else
      Logging.xmlWarning(self.xmlFile, "Missing object trigger for object storage")
    end
  end
  v3 = v3:getFillTypesFromXML(self.xmlFile, "placeable.objectStorage#fillTypeCategories", "placeable.objectStorage#fillTypes", false)
  v2.supportedFillTypes = v3
  v3 = v3:getValue("placeable.objectStorage#supportsBales", true)
  v2.supportsBales = v3
  v3 = v3:getValue("placeable.objectStorage#supportsPallets", true)
  v2.supportsPallets = v3
  v3 = v3:getValue("placeable.objectStorage#capacity", 250)
  v2.capacity = v3
  v3 = v3:getValue("placeable.objectStorage#maxLength", math.huge)
  v2.maxLength = v3
  v3 = v3:getValue("placeable.objectStorage#maxHeight", math.huge)
  v2.maxHeight = v3
  v3 = v3:getValue("placeable.objectStorage#maxWidth", math.huge)
  v2.maxWidth = v3
  v3 = v3:getValue("placeable.objectStorage#maxUnloadAmount", 25)
  v2.maxUnloadAmount = v3
  v2.objectSpawn = {isActive = false, connection = nil, objectInfoIndex = 1, numObjectsToSpawn = 0, overlapIsActive = false, overlapObjectCount = 0, nextSpawnPosition = {0, 0, 0}, spawnAreaIndex = 1, spawnAreaData = {0, 0, 0, 0, 0, 1}, spawnedObjects = {}, area = {}}
  v3:iterate("placeable.objectStorage.spawnAreas.spawnArea", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#startNode", nil, u0.components, u0.i3dMappings)
    v3 = v3:getValue(savegame .. "#endNode", nil, u0.components, u0.i3dMappings)
    if {startNode = v3, endNode = v3}.startNode ~= nil and {startNode = v3, endNode = v3}.endNode ~= nil then
      local v4, v5, v6 = localToLocal({startNode = v3, endNode = v3}.endNode, {startNode = v3, endNode = v3}.startNode, 0, 0, 0)
      table.insert(u1.objectSpawn.area, {startNode = v3, endNode = v3, sizeX = v4, sizeZ = v6})
      return
    end
    Logging.xmlWarning(u0.xmlFile, "Incomplete spawn area definition in '%s'", savegame)
  end)
  v2.storageArea = {}
  local v4 = createTransformGroup("storageAreaSpawnNode")
  v2.storageArea.spawnNode = v4
  link(self.rootNode, v2.storageArea.spawnNode)
  v2.storageArea.spawnAreaIndex = 1
  v2.storageArea.spawnAreaData = {0, 0, 0, 0, 0, 1}
  v2.storageArea.area = {}
  v3:iterate("placeable.objectStorage.storageAreas.storageArea", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#startNode", nil, u0.components, u0.i3dMappings)
    v3 = v3:getValue(savegame .. "#endNode", nil, u0.components, u0.i3dMappings)
    if {startNode = v3, endNode = v3}.startNode ~= nil and {startNode = v3, endNode = v3}.endNode ~= nil then
      local v4, v5, v6 = localToLocal({startNode = v3, endNode = v3}.endNode, {startNode = v3, endNode = v3}.startNode, 0, 0, 0)
      table.insert(u1.storageArea.area, {startNode = v3, endNode = v3, sizeX = v4, sizeZ = v6})
      return
    end
    Logging.xmlWarning(u0.xmlFile, "Incomplete spawn area definition in '%s'", savegame)
  end)
  v2.storedObjects = {}
  v2.objectInfos = {}
  v2.pendingObjects = {}
  v2.lastPendingManualObjectsState = false
  v2.numStoredObjects = 0
  v2.objectInfosUpdateTimer = 0
  v2.pendingVisualAreaUpdates = {}
  v2.texts = {}
  v4 = v4:getText("info_objectStorageNotEmpty")
  v2.texts.warningNotEmpty = v4
  v4 = v4:getText("ui_silos_totalCapacity")
  v2.texts.totalCapacity = v4
  v4 = v4:getText("helpLine_IconOverview_Others")
  v2.texts.otherElements = v4
  v3 = PlaceableObjectStorageActivatable.new(self)
  v2.activatable = v3
  v3 = PlaceableObjectStorageManualStoreActivatable.new(self)
  v2.manualStoreActivatable = v3
  v3 = self:getNextDirtyFlag()
  v2.dirtyFlag = v3
end
function PlaceableObjectStorage:loadFromXMLFile(xmlFile, key)
  xmlFile:iterate(key .. ".object", function(self, xmlFile)
    local key = key:getValue(xmlFile .. "#className")
    if key ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L30
      PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_CLASS_NAME[key].loadFromXMLFile(u1, u0, xmlFile)
      return
    end
    Logging.xmlWarning(u0, "Unable to find object class '%s' for stored object in '%s'", key, xmlFile)
  end)
  self:setObjectStorageObjectInfosDirty()
end
function PlaceableObjectStorage:saveToXMLFile(xmlFile, key, usedModNames)
  -- TODO: structure LOP_FORNPREP (pc 7, target 32)
  local v9 = string.format("%s.object(%d)", key, 1 - 1)
  xmlFile:setValue(v9 .. "#className", self.spec_objectStorage.storedObjects[1].REFERENCE_CLASS_NAME)
  self.spec_objectStorage.storedObjects[1]:saveToXMLFile(self, xmlFile, v9)
  -- TODO: structure LOP_FORNLOOP (pc 31, target 8)
end
function PlaceableObjectStorage:onDelete()
  if self.spec_objectStorage.playerTriggerNode ~= nil then
    removeTrigger(self.spec_objectStorage.playerTriggerNode)
  end
  if v1.objectTriggerNode ~= nil then
    removeTrigger(v1.objectTriggerNode)
  end
  -- TODO: structure LOP_FORNPREP (pc 25, target 37)
  v5:delete()
  v1.storedObjects[#v1.storedObjects] = nil
  -- TODO: structure LOP_FORNLOOP (pc 36, target 26)
  v1.numStoredObjects = 0
  for v5, v6 in pairs(v1.pendingObjects) do
    v5:removeDeleteListener(self, PlaceableObjectStorage.onPendingObjectDelete)
    v1.pendingObjects[v5] = nil
  end
  v2:removeActivatable(v1.activatable)
  v2:removeActivatable(v1.manualStoreActivatable)
end
function PlaceableObjectStorage:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    self.spec_objectStorage.objectInfos = {}
    local numObjectInfos = streamReadUIntN(streamId, PlaceableObjectStorage.NUM_BITS_OBJECT_INFO)
    -- TODO: structure LOP_FORNPREP (pc 21, target 64)
    local v9 = streamReadUIntN(streamId, PlaceableObjectStorage.NUM_BITS_AMOUNT)
    v9 = streamReadUIntN(streamId, 2)
    local v12 = PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_ID[v9].readStream(streamId, connection)
    table.insert(self.spec_objectStorage.objectInfos, {numObjects = v9, objects = {}})
    -- TODO: structure LOP_FORNLOOP (pc 63, target 22)
    self.spec_objectStorage.numStoredObjects = 0
    -- TODO: structure LOP_FORNPREP (pc 72, target 84)
    self.spec_objectStorage.numStoredObjects = self.spec_objectStorage.numStoredObjects + self.spec_objectStorage.objectInfos[1].numObjects
    -- TODO: structure LOP_FORNLOOP (pc 83, target 73)
    self:updateObjectStorageVisualAreas()
  end
end
function PlaceableObjectStorage:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    streamWriteUIntN(streamId, #self.spec_objectStorage.objectInfos, PlaceableObjectStorage.NUM_BITS_OBJECT_INFO)
    -- TODO: structure LOP_FORNPREP (pc 20, target 51)
    streamWriteUIntN(streamId, self.spec_objectStorage.objectInfos[1].numObjects, PlaceableObjectStorage.NUM_BITS_AMOUNT)
    streamWriteUIntN(streamId, self.spec_objectStorage.objectInfos[1].objects[1].ABSTRACT_OBJECT_ID, 2)
    v9:writeStream(streamId, connection)
    -- TODO: structure LOP_FORNLOOP (pc 50, target 21)
  end
end
function PlaceableObjectStorage:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      PlaceableObjectStorage.onReadStream(self, streamId, connection)
    end
    local v5 = streamReadBool(streamId)
    if v5 then
      v5:addActivatable(self.spec_objectStorage.manualStoreActivatable)
      return
    end
    v5:removeActivatable(v4.manualStoreActivatable)
  end
end
function PlaceableObjectStorage:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.spec_objectStorage.dirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      PlaceableObjectStorage.onWriteStream(self, streamId, connection)
    end
    local v6 = self:getHasPendingManualStoreObjects()
    streamWriteBool(...)
  end
end
function PlaceableObjectStorage:onUpdate(dt)
  if self.isServer then
    if self.spec_objectStorage.objectSpawn.isActive then
      if not self.spec_objectStorage.objectSpawn.overlapIsActive then
        if self.spec_objectStorage.objectSpawn.overlapObjectCount == 0 then
          local v6, v7, v8, v9, v10, v11, v12 = self.spec_objectStorage.objectInfos[self.spec_objectStorage.objectSpawn.objectInfoIndex].objects[1]:getSpawnInfo()
          local v13, v14, v15 = localToWorld(self.spec_objectStorage.objectSpawn.area[self.spec_objectStorage.objectSpawn.spawnAreaIndex].startNode, self.spec_objectStorage.objectSpawn.nextSpawnPosition[1] + v6, self.spec_objectStorage.objectSpawn.nextSpawnPosition[2] + v7, self.spec_objectStorage.objectSpawn.nextSpawnPosition[3] + v8)
          local v16, v17, v18 = getWorldRotation(self.spec_objectStorage.objectSpawn.area[self.spec_objectStorage.objectSpawn.spawnAreaIndex].startNode)
          if self.spec_objectStorage.objectInfos[self.spec_objectStorage.objectSpawn.objectInfoIndex].objects[1] ~= nil then
            self:removeAbstractObjectFromStorage(self.spec_objectStorage.objectInfos[self.spec_objectStorage.objectSpawn.objectInfoIndex].objects[1], v13, v14, v15, v16, v17, v18)
            table.remove(self.spec_objectStorage.objectInfos[self.spec_objectStorage.objectSpawn.objectInfoIndex].objects, 1)
          end
          v2.objectSpawn.numObjectsToSpawn = v2.objectSpawn.numObjectsToSpawn - 1
        end
        if v2.objectSpawn.overlapObjectCount ~= 0 then
        end
        self:spawnNextObjectStorageObject(true)
      end
      self:raiseActive()
    end
    for v6, v7 in pairs(v2.pendingObjects) do
      v8, v9 = self:getObjectStorageCanStoreObject(v6, true)
      if v8 then
        self:addObjectToObjectStorage(v6)
        self:setObjectStorageObjectInfosDirty()
        v2.pendingObjects[v6] = nil
        v6:removeDeleteListener(self, PlaceableObjectStorage.onPendingObjectDelete)
        self:updateManualStoreActivatable()
      else
        self:raiseActive()
      end
    end
  end
  if 0 < v2.objectInfosUpdateTimer then
    v2.objectInfosUpdateTimer = v2.objectInfosUpdateTimer - dt
    if v2.objectInfosUpdateTimer <= 0 then
      self:updateObjectStorageObjectInfos()
      self:updateObjectStorageVisualAreas()
      self:raiseDirtyFlags(v2.dirtyFlag)
      v2.objectInfosUpdateTimer = 0
    end
    self:raiseActive()
  end
  -- TODO: structure LOP_FORNPREP (pc 189, target 208)
  v7 = v2.pendingVisualAreaUpdates[#v2.pendingVisualAreaUpdates].spawnNextObjectInfo()
  if not v7 then
    table.remove(v2.pendingVisualAreaUpdates, #v2.pendingVisualAreaUpdates)
  else
    self:raiseActive()
  end
  -- TODO: structure LOP_FORNLOOP (pc 207, target 190)
end
function PlaceableObjectStorage:getObjectStorageSupportsFillType(fillTypeIndex)
  if fillTypeIndex ~= nil then
    -- if v1 ~= FillType.UNKNOWN then goto L16 end
  end
  if #v2.supportedFillTypes ~= 0 then
  end
  return true
  if #v2.supportedFillTypes ~= 0 then
  end
  -- TODO: structure LOP_FORNPREP (pc 28, target 36)
  if fillTypeIndex == v2.supportedFillTypes[1] then
  end
  -- TODO: structure LOP_FORNLOOP (pc 35, target 29)
  if not v3 then
    return false
  end
  return true
end
function PlaceableObjectStorage:getObjectStorageSupportsObject(object)
  local v5 = ClassUtil.getClassNameByObject(object)
  if PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_CLASS_NAME[v5] ~= nil then
    local v4 = PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_CLASS_NAME[v5].isObjectSupported(self, object)
    if not v4 then
      return false
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 26, target 38)
  local v7 = v7:getRealObject()
  if object == v7 then
    return false
  end
  -- TODO: structure LOP_FORNLOOP (pc 37, target 27)
  return true
end
function PlaceableObjectStorage:getObjectStorageCanStoreObject(v1, v2)
  if self.spec_objectStorage.objectSpawn.isActive then
    return false
  end
  if v3.capacity <= #v3.storedObjects then
    return false, PlaceableObjectStorageErrorEvent.ERROR_STORAGE_IS_FULL
  end
  local v6 = ClassUtil.getClassNameByObject(v1)
  if PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_CLASS_NAME[v6] ~= nil then
    local v5 = PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_CLASS_NAME[v6].canStoreObject(self, v1)
    if not v5 then
      return false
    end
    if v2 then
      v5 = v4.canStoreObjectAutomatically(self, v1)
      if not v5 then
        return false
      end
    end
  end
  return true
end
function PlaceableObjectStorage:getIsBaleSupportedByUnloadTrigger(bale)
  return self:getObjectStorageSupportsObject(bale)
end
function PlaceableObjectStorage:addObjectToObjectStorage(object, loadedFromSavegame)
  local v5 = ClassUtil.getClassNameByObject(object)
  if PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_CLASS_NAME[v5] ~= nil then
    local v4 = PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_CLASS_NAME[v5].new()
    v4:addToStorage(self, object, loadedFromSavegame)
    self:addAbstactObjectToObjectStorage(v4)
  end
end
function PlaceableObjectStorage:addAbstactObjectToObjectStorage(abstractObject)
  table.insert(self.spec_objectStorage.storedObjects, abstractObject)
  self.spec_objectStorage.numStoredObjects = #self.spec_objectStorage.storedObjects
end
function PlaceableObjectStorage:removeAbstractObjectsFromStorage(objectInfoIndex, amount, connection)
  if not self.spec_objectStorage.objectSpawn.isActive then
    if self.spec_objectStorage.objectInfosUpdateTimer ~= 0 then
      return
    end
    if v4.objectInfos[objectInfoIndex] ~= nil then
      -- if v4.objectInfos[v1].numObjects >= v2 then goto L25 end
    end
    return
    v4.objectSpawn.isActive = true
    v4.objectSpawn.connection = connection
    v4.objectSpawn.objectInfoIndex = objectInfoIndex
    v4.objectSpawn.numObjectsToSpawn = amount
    v4.objectSpawn.overlapIsActive = false
    v4.objectSpawn.overlapObjectCount = 0
    v4.objectSpawn.spawnAreaIndex = 1
    v4.objectSpawn.spawnAreaData[1] = 0
    v4.objectSpawn.spawnAreaData[2] = 0
    v4.objectSpawn.spawnAreaData[3] = 0
    v4.objectSpawn.spawnAreaData[4] = 0
    v4.objectSpawn.spawnAreaData[5] = 0
    v4.objectSpawn.spawnAreaData[6] = math.huge
    -- TODO: structure LOP_FORNPREP (pc 101, target 109)
    v4.objectSpawn.spawnedObjects[#v4.objectSpawn.spawnedObjects] = nil
    -- TODO: structure LOP_FORNLOOP (pc 108, target 102)
    self:spawnNextObjectStorageObject()
  end
end
function PlaceableObjectStorage:getNextSpawnAreaAndOffset(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
  if self[v1] ~= nil then
    if self[v1].sizeX <= v7 then
      return PlaceableObjectStorage.getNextSpawnAreaAndOffset(self, v1 + 1, 0, 0, 0, v10, math.huge, false)
    end
    if v13.sizeZ <= v9 then
      v14 = PlaceableObjectStorage.getNextSpawnAreaAndOffset(self, v1 + 1, 0, 0, 0, v10, math.huge, false)
      return v14
    end
    if v11 < v10 then
      -- cmp-jump LOP_JUMPXEQKB R12 aux=0x0 -> L54
    else
    end
    v14 = math.max(v6, v4 + v9 * 0.5)
    if v13.sizeZ < v14 then
      v14 = PlaceableObjectStorage.getNextSpawnAreaAndOffset(self, v1, v5, v3, 0, v5, 0, v7, v8, v9, v10, math.huge, v12)
      return v14
    end
    v14 = math.max(v5, v2 + v7 * 0.5)
    if v13.sizeX < v2 then
      v14 = PlaceableObjectStorage.getNextSpawnAreaAndOffset(self, v1 + 1, 0, 0, 0, v10, math.huge, false)
      return v14
    end
    return v1, v2, v3, v4, v2 - v7 * 0.5, 0, v4 + v9 * 0.5, v5, v6, v11
  end
  return nil
end
function PlaceableObjectStorage:spawnNextObjectStorageObject(lastSuccess)
  if 0 < self.spec_objectStorage.objectSpawn.numObjectsToSpawn then
    local v6, v7 = self.spec_objectStorage.objectInfos[self.spec_objectStorage.objectSpawn.objectInfoIndex].objects[1]:getLimitedObjectId()
    if v6 ~= nil then
      local v8 = v8:getCanAddLimitedObjects(v6, 1)
      -- if not v8 then goto L195 end
    end
    local v8, v9, v10, v11, v12, v13, v14 = v5:getSpawnInfo()
    local v15, v16, v17, v18, v19, v20, v21, v22, v23, v24 = PlaceableObjectStorage.getNextSpawnAreaAndOffset(v2.objectSpawn.area, v2.objectSpawn.spawnAreaIndex, v2.objectSpawn.spawnAreaData[1], v2.objectSpawn.spawnAreaData[2], v2.objectSpawn.spawnAreaData[3], v2.objectSpawn.spawnAreaData[4], v2.objectSpawn.spawnAreaData[5], v11, v12, v13, v14, v2.objectSpawn.spawnAreaData[6], lastSuccess)
    if v15 ~= nil then
      v2.objectSpawn.spawnAreaIndex = v15
      v2.objectSpawn.spawnAreaData[1] = v19
      v2.objectSpawn.spawnAreaData[2] = v20
      v2.objectSpawn.spawnAreaData[3] = v21
      v2.objectSpawn.spawnAreaData[4] = v22
      v2.objectSpawn.spawnAreaData[5] = v23
      v2.objectSpawn.spawnAreaData[6] = v24
      local v26, v27, v28 = localToWorld(v2.objectSpawn.area[v2.objectSpawn.spawnAreaIndex].startNode, v16, v17 + v12 * 0.5, v18)
      local v29, v30, v31 = getWorldRotation(v2.objectSpawn.area[v2.objectSpawn.spawnAreaIndex].startNode)
      v2.objectSpawn.nextSpawnPosition[1] = v16
      v2.objectSpawn.nextSpawnPosition[2] = v17
      v2.objectSpawn.nextSpawnPosition[3] = v18
      v2.objectSpawn.overlapIsActive = true
      v2.objectSpawn.overlapObjectCount = 0
      overlapBox(v26, v27, v28, v29, v30, v31, v11 * 0.5, v12 * 0.5, v13 * 0.5, "onObjectStorageSpawnOverlapCallback", self, PlaceableObjectStorage.COLLISION_MASK, true, false, true, true)
      self:raiseActive()
      return
      -- goto L196  (LOP_JUMP +1)
    end
  end
  if v2.objectSpawn.isActive then
    if 0 < v2.objectSpawn.numObjectsToSpawn and v2.objectSpawn.connection ~= nil and g_server ~= nil then
      if not v3 then
      end
      v6 = v6(v7, v8)
      v4:sendEvent(...)
    end
    v2.objectSpawn.isActive = false
    v2.objectSpawn.connection = nil
    v2.objectSpawn.objectInfoIndex = 1
    v2.objectSpawn.numObjectsToSpawn = 0
    -- TODO: structure LOP_FORNPREP (pc 260, target 268)
    v2.objectSpawn.spawnedObjects[#v2.objectSpawn.spawnedObjects] = nil
    -- TODO: structure LOP_FORNLOOP (pc 267, target 261)
    self:setObjectStorageObjectInfosDirty()
  end
end
function PlaceableObjectStorage:removeAbstractObjectFromStorage(abstractObject, x, y, z, rx, ry, rz)
  -- TODO: structure LOP_FORNPREP (pc 7, target 34)
  if self.spec_objectStorage.storedObjects[1] == abstractObject then
    table.remove(self.spec_objectStorage.storedObjects, 1)
    abstractObject:removeFromStorage(self, x, y, z, rx, ry, rz, PlaceableObjectStorage.onObjectFromStorageSpawned)
  end
  -- TODO: structure LOP_FORNLOOP (pc 33, target 8)
  v8.numStoredObjects = #v8.storedObjects
end
function PlaceableObjectStorage:onObjectFromStorageSpawned(spawnedObject)
  if self.spec_objectStorage.objectSpawn.isActive then
    table.insert(self.spec_objectStorage.objectSpawn.spawnedObjects, spawnedObject)
  end
end
function PlaceableObjectStorage:setObjectStorageObjectInfosDirty()
  self.spec_objectStorage.objectInfosUpdateTimer = 1000
  self:raiseActive()
end
function PlaceableObjectStorage:updateDirtyObjectStorageObjectInfos()
  if 0 < self.spec_objectStorage.objectInfosUpdateTimer then
    self:updateObjectStorageObjectInfos()
  end
end
function PlaceableObjectStorage:updateObjectStorageObjectInfos()
  -- TODO: structure LOP_FORNPREP (pc 9, target 62)
  -- TODO: structure LOP_FORNPREP (pc 17, target 41)
  local v12 = self.spec_objectStorage.storedObjects[1]:getIsIdentical({}[1].objects[1])
  if v12 then
    table.insert({}[1].objects, self.spec_objectStorage.storedObjects[1])
    {}[1].numObjects = #{}[1].objects
  end
  -- TODO: structure LOP_FORNLOOP (pc 40, target 18)
  if not v7 then
    table.insert(v2, {objects = {v6}, numObjects = 1})
  end
  -- TODO: structure LOP_FORNLOOP (pc 61, target 10)
  table.sort(v2, function(self, v1)
    local v2, v3, v4, v5, v6, v7, v8 = v2:getSpawnInfo()
    local v9, v10, v11, v12, v13, v14, v15 = v9:getSpawnInfo()
    if v5 >= v12 then
    end
    return true
  end)
  v1.objectInfos = v2
end
function PlaceableObjectStorage:getObjectStorageObjectInfos()
  return self.spec_objectStorage.objectInfos
end
function PlaceableObjectStorage:updateObjectStorageVisualAreas()
  local v4 = createTransformGroup("storageAreaSpawnNode")
  self.spec_objectStorage.storageArea.spawnNode = v4
  link(self.rootNode, self.spec_objectStorage.storageArea.spawnNode)
  setVisibility(self.spec_objectStorage.storageArea.spawnNode, false)
  self.spec_objectStorage.storageArea.spawnAreaIndex = 1
  self.spec_objectStorage.storageArea.spawnAreaData[1] = 0
  self.spec_objectStorage.storageArea.spawnAreaData[2] = 0
  self.spec_objectStorage.storageArea.spawnAreaData[3] = 0
  self.spec_objectStorage.storageArea.spawnAreaData[4] = 0
  self.spec_objectStorage.storageArea.spawnAreaData[5] = 0
  self.spec_objectStorage.storageArea.spawnAreaData[6] = math.huge
  -- TODO: structure LOP_FORNPREP (pc 74, target 212)
  self.spec_objectStorage.objectInfos[1].visualSpawnInfos = {}
  self.spec_objectStorage.storageArea.spawnAreaData[6] = math.huge
  local v10, v11, v12, v13, v14, v15, v16 = self.spec_objectStorage.objectInfos[1].objects[1]:getSpawnInfo()
  -- TODO: structure LOP_FORNPREP (pc 97, target 197)
  local v20, v21, v22, v23, v24, v25, v26, v27, v28, v29 = PlaceableObjectStorage.getNextSpawnAreaAndOffset(self.spec_objectStorage.storageArea.area, self.spec_objectStorage.storageArea.spawnAreaIndex, self.spec_objectStorage.storageArea.spawnAreaData[1], self.spec_objectStorage.storageArea.spawnAreaData[2], self.spec_objectStorage.storageArea.spawnAreaData[3], self.spec_objectStorage.storageArea.spawnAreaData[4], self.spec_objectStorage.storageArea.spawnAreaData[5], v13, v14, v15, v16, self.spec_objectStorage.storageArea.spawnAreaData[6], true)
  if v20 ~= nil then
    self.spec_objectStorage.storageArea.spawnAreaIndex = v20
    self.spec_objectStorage.storageArea.spawnAreaData[1] = v24
    self.spec_objectStorage.storageArea.spawnAreaData[2] = v25
    self.spec_objectStorage.storageArea.spawnAreaData[3] = v26
    self.spec_objectStorage.storageArea.spawnAreaData[4] = v27
    self.spec_objectStorage.storageArea.spawnAreaData[5] = v28
    self.spec_objectStorage.storageArea.spawnAreaData[6] = v29
    local v31, v32, v33 = localToLocal(self.spec_objectStorage.storageArea.area[self.spec_objectStorage.storageArea.spawnAreaIndex].startNode, self.spec_objectStorage.storageArea.spawnNode, v21 + v10, v22 + v11, v23 + v12)
    local v34, v35, v36 = localRotationToLocal(self.spec_objectStorage.storageArea.area[self.spec_objectStorage.storageArea.spawnAreaIndex].startNode, self.spec_objectStorage.storageArea.spawnNode, 0, 0, 0)
    table.insert(self.spec_objectStorage.objectInfos[1].visualSpawnInfos, {self.spec_objectStorage.storageArea.spawnNode, v31, v32, v33, v34, v35, v36})
  end
  -- TODO: structure LOP_FORNLOOP (pc 196, target 98)
  if 0 < #v8.visualSpawnInfos then
    table.insert(v4.objectInfosToSpawn, v8)
  end
  -- TODO: structure LOP_FORNLOOP (pc 211, target 75)
  local v5 = v4.spawnNextObjectInfo()
  if v5 then
    table.insert(v1.pendingVisualAreaUpdates, v4)
    self:raiseActive()
  end
end
function PlaceableObjectStorage:getHasPendingManualStoreObjects()
  for v5, v6 in pairs(self.spec_objectStorage.pendingObjects) do
    if not (0 < v6) then
      continue
    end
    local v7, v8 = self:getObjectStorageCanStoreObject(v5, true)
    if not not v7 then
      continue
    end
    local v9, v10 = self:getObjectStorageCanStoreObject(v5, false)
    if not v9 then
      continue
    end
    return true
  end
  return false
end
function PlaceableObjectStorage:storePendingManualObjects()
  for v5, v6 in pairs(self.spec_objectStorage.pendingObjects) do
    if not (0 < v6) then
      continue
    end
    local v7, v8 = self:getObjectStorageCanStoreObject(v5, true)
    if not not v7 then
      continue
    end
    local v9, v10 = self:getObjectStorageCanStoreObject(v5, false)
    if not v9 then
      continue
    end
    self:addObjectToObjectStorage(v5, false)
    self:setObjectStorageObjectInfosDirty()
    v1.pendingObjects[v5] = nil
    v5:removeDeleteListener(self, PlaceableObjectStorage.onPendingObjectDelete)
  end
  self:updateManualStoreActivatable()
end
function PlaceableObjectStorage:updateManualStoreActivatable()
  local v2 = self:getHasPendingManualStoreObjects()
  if v2 ~= self.spec_objectStorage.lastPendingManualObjectsState then
    self.spec_objectStorage.lastPendingManualObjectsState = v2
    if v2 then
      v3:addActivatable(self.spec_objectStorage.manualStoreActivatable)
    else
      v3:removeActivatable(self.spec_objectStorage.manualStoreActivatable)
    end
    self:raiseDirtyFlags(v1.dirtyFlag)
  end
end
function PlaceableObjectStorage:onObjectStoragePlayerTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
    if onEnter then
      v7:addActivatable(self.spec_objectStorage.activatable)
      return
    end
    if onLeave then
      v7:removeActivatable(v6.activatable)
    end
  end
end
function PlaceableObjectStorage:onPendingObjectDelete(object)
  if self.spec_objectStorage.pendingObjects[object] ~= nil then
    self.spec_objectStorage.pendingObjects[object] = nil
  end
end
function PlaceableObjectStorage:onObjectStorageObjectTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if onEnter then
    local v6 = v6:getNodeObject(otherId)
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L149
    local v7 = self:getObjectStorageSupportsObject(v6)
    if v7 then
      local v7, v8 = self:getObjectStorageCanStoreObject(v6, true)
      if v7 then
        self:addObjectToObjectStorage(v6, false)
        self:setObjectStorageObjectInfosDirty()
      else
        if v8 ~= nil and g_server ~= nil then
          local v11 = PlaceableObjectStorageErrorEvent.new(self, v8)
          v9:broadcastEvent(v11, true, nil, self)
        end
        self.spec_objectStorage.pendingObjects[v6] = (self.spec_objectStorage.pendingObjects[v6] or 0) + 1
        v6:addDeleteListener(self, PlaceableObjectStorage.onPendingObjectDelete)
        self:updateManualStoreActivatable()
        self:raiseActive()
      end
    end
    v7 = v6:isa(Vehicle)
    -- if not v7 then goto L149 end
    v7 = SpecializationUtil.hasSpecialization(BaleLoader, v6.specializations)
    -- if not v7 then goto L149 end
    v6:addBaleUnloadTrigger(self)
    return
  end
  if onLeave then
    v6 = v6:getNodeObject(otherId)
    if v6 ~= nil then
      self.spec_objectStorage.pendingObjects[v6] = (self.spec_objectStorage.pendingObjects[v6] or 0) - 1
      if self.spec_objectStorage.pendingObjects[v6] <= 0 then
        self.spec_objectStorage.pendingObjects[v6] = nil
        v6:removeDeleteListener(self, PlaceableObjectStorage.onPendingObjectDelete)
      end
      self:updateManualStoreActivatable()
      v8 = v6:isa(Vehicle)
      if v8 then
        v8 = SpecializationUtil.hasSpecialization(BaleLoader, v6.specializations)
        if v8 then
          v6:removeBaleUnloadTrigger(self)
        end
      end
    end
  end
end
function PlaceableObjectStorage:onObjectStorageSpawnOverlapCallback(objectId)
  self.spec_objectStorage.objectSpawn.overlapIsActive = false
  if objectId ~= 0 then
    local v3 = getHasTrigger(objectId)
    if not v3 then
      v3 = v3:getNodeObject(objectId)
      if v3 ~= nil then
        -- TODO: structure LOP_FORNPREP (pc 29, target 39)
        if v3 == self.spec_objectStorage.objectSpawn.spawnedObjects[1] then
          return
        end
        -- TODO: structure LOP_FORNLOOP (pc 38, target 30)
      end
      v2.objectSpawn.overlapObjectCount = v2.objectSpawn.overlapObjectCount + 1
    end
  end
end
function PlaceableObjectStorage:canBeSold(superFunc)
  if 0 < #self.spec_objectStorage.objectInfos then
    return true, self.spec_objectStorage.texts.warningNotEmpty
  end
  return superFunc(self)
end
function PlaceableObjectStorage:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  local v7 = string.format("%d / %d", self.spec_objectStorage.numStoredObjects, self.spec_objectStorage.capacity)
  table.insert(infoTable, {title = self.spec_objectStorage.texts.totalCapacity, text = v7})
  local v8 = math.min(#self.spec_objectStorage.objectInfos, PlaceableObjectStorage.MAX_HUD_INFO_ENTRIES)
  -- TODO: structure LOP_FORNPREP (pc 45, target 95)
  if self.spec_objectStorage.objectInfos[1].objects[1] ~= nil then
    local v9 = v9:getDialogText()
    local v10 = string.len(v9)
    if 32 < v10 then
      local v12 = string.sub(v9, 0, 32)
    end
    local v13 = tostring(v8.numObjects)
    table.insert(infoTable, {title = v9, text = v13})
  end
  -- TODO: structure LOP_FORNLOOP (pc 94, target 46)
  if PlaceableObjectStorage.MAX_HUD_INFO_ENTRIES < v4 then
    -- TODO: structure LOP_FORNPREP (pc 109, target 117)
    -- TODO: structure LOP_FORNLOOP (pc 116, target 110)
    v9 = tostring(0 + v3.objectInfos[PlaceableObjectStorage.MAX_HUD_INFO_ENTRIES + 1].numObjects)
    table.insert(infoTable, {title = v3.texts.otherElements, text = v9})
  end
end
PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_CLASS_NAME = {}
PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_ID = {}
PlaceableObjectStorage.ABSTRACT_OBJECTS = {}
function PlaceableObjectStorage:addAbstractObjectClass()
  PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_CLASS_NAME[self.REFERENCE_CLASS_NAME] = self
  table.insert(PlaceableObjectStorage.ABSTRACT_OBJECTS, self)
  self.ABSTRACT_OBJECT_ID = #PlaceableObjectStorage.ABSTRACT_OBJECTS
  PlaceableObjectStorage.ABSTRACT_OBJECTS_BY_ID[self.ABSTRACT_OBJECT_ID] = self
end
local v1 = Class({})
PlaceableObjectStorage.addAbstractObjectClass({REFERENCE_CLASS_NAME = "Bale", registerXMLPaths = function(v0, v1)
  Bale.registerSavegameXMLPaths(v0, v1)
end, new = function()
  setmetatable({}, u0)
  return {}
end, delete = function(self)
  if self.baleObject ~= nil then
    v1:delete()
  end
end, isObjectSupported = function(self, v1)
  if not self.spec_objectStorage.supportsBales then
    return false
  end
  if v1.isMissionBale then
    return false
  end
  local v4 = v1:getFillType()
  local v2 = self:getObjectStorageSupportsFillType(...)
  if not v2 then
    return false
  end
  return true
end, canStoreObject = function(self, v1)
  local v2, v3, v4, v5, v6, PlaceableObjectStorageActivatable_mt = v2:getBaleInfoByXMLFilename(v1.xmlFilename)
  if self.spec_objectStorage.maxLength >= (v5 or v6) and self.spec_objectStorage.maxHeight >= (v4 or v6) then
    -- if v0.spec_objectStorage.maxWidth >= v3 then goto L29 end
  end
  return false
  if v1.dynamicMountType ~= MountableObject.MOUNT_TYPE_NONE and v1.mountObject ~= nil and v1.mountObject.startAutomaticBaleUnloading ~= nil then
    return false
  end
  return true
end, canStoreObjectAutomatically = function(v0, v1)
  if v1.dynamicMountType ~= MountableObject.MOUNT_TYPE_NONE then
    return false
  end
  return true
end, addToStorage = function(self, v1, v2, v3)
  if v2.isFermenting then
    local v4, v5, v6 = getWorldTranslation(v1.rootNode)
    local PlaceableObjectStorageActivatable_mt, v8, v9 = getWorldRotation(v1.rootNode)
    if not v3 then
      local v10 = v2:getBaleAttributes()
      v2:delete()
      local v11 = Bale.new(v1.isServer, v1.isClient)
      local v12 = v11:loadFromConfigXML(v10.xmlFilename, v4, v5, v6, PlaceableObjectStorageActivatable_mt, v8, v9)
      if v12 then
        v11:applyBaleAttributes(v10)
        removeFromPhysics(v11.nodeId)
        setVisibility(v11.nodeId, false)
        v12:removeItemToSave(v11)
      end
      self.baleObject = v11
      -- goto L110  (LOP_JUMP +47)
    end
    removeFromPhysics(v2.nodeId)
    setVisibility(v2.nodeId, false)
    setWorldTranslation(v2.nodeId, v4, v5, v6)
    setWorldRotation(v2.nodeId, PlaceableObjectStorageActivatable_mt, v8, v9)
    v2:unregister()
    v10:removeItemToSave(v2)
    self.baleObject = v2
  else
    v4 = v2:getBaleAttributes()
    self.baleAttributes = v4
    v2:delete()
  end
  v6 = v1:getOwnerFarmId()
  v4:updateFarmStats(v6, "storedBales", 1)
end, removeFromStorage = function(self, v1, v2, v3, v4, v5, v6, PlaceableObjectStorageActivatable_mt, v8)
  if self.baleObject ~= nil then
    addToPhysics(self.baleObject.nodeId)
    setVisibility(self.baleObject.nodeId, true)
    local v10, v11, v12, v13 = mathEulerToQuaternion(v5, v6, PlaceableObjectStorageActivatable_mt)
    v14:setLocalPositionQuaternion(v2, v3, v4, v10, v11, v12, v13, true)
    v14:register()
    v14:addItemToSave(self.baleObject)
  else
    v10 = Bale.new(v1.isServer, v1.isClient)
    v10 = v10:loadFromConfigXML(self.baleAttributes.xmlFilename, v2, v3, v4, v5, v6, PlaceableObjectStorageActivatable_mt)
    if v10 then
      v10:applyBaleAttributes(self.baleAttributes)
      v10:register()
    end
  end
  if v9.isRoundbale then
    removeFromPhysics(v9.nodeId)
    rotateAboutLocalAxis(v9.nodeId, math.pi * 0.5, 1, 0, 0)
    addToPhysics(v9.nodeId)
  end
  v12 = v1:getOwnerFarmId()
  v10:updateFarmStats(v12, "storedBales", -1)
  v8(v1, v9)
end, readStream = function(v0, v1)
  local v2 = u0.new()
  v2.baleAttributes = {}
  local v5 = streamReadString(v0)
  local v4 = NetworkUtil.convertFromNetworkFilename(...)
  v2.baleAttributes.xmlFilename = v4
  v4 = streamReadFloat32(v0)
  v2.baleAttributes.fillLevel = v4
  v4 = streamReadUIntN(v0, FillTypeManager.SEND_NUM_BITS)
  v2.baleAttributes.fillType = v4
  v5 = streamReadBool(v0)
  if v5 then
  else
  end
  v3.wrappingState = v4
  return v2
end, writeStream = function(self, v1, v2)
  if self.baleObject ~= nil then
    local v5 = NetworkUtil.convertToNetworkFilename(self.baleObject.xmlFilename)
    streamWriteString(...)
    v5 = v5:getFillLevel()
    streamWriteFloat32(...)
    v5 = v5:getFillType()
    streamWriteUIntN(v1, v5, FillTypeManager.SEND_NUM_BITS)
    if self.baleObject.wrappingState == 0 then
    end
    v3(v4, true)
    return
  end
  v5 = NetworkUtil.convertToNetworkFilename(self.baleAttributes.xmlFilename)
  streamWriteString(...)
  streamWriteFloat32(v1, self.baleAttributes.fillLevel)
  streamWriteUIntN(v1, self.baleAttributes.fillType, FillTypeManager.SEND_NUM_BITS)
  if self.baleAttributes.wrappingState == 0 then
  end
  v3(v4, true)
end, getRealObject = function(self)
  return self.baleObject
end, getIsIdentical = function(self, v1)
  if self.REFERENCE_CLASS_NAME ~= v1.REFERENCE_CLASS_NAME then
    return false
  end
  if self.baleObject ~= nil and v1.baleObject ~= nil then
    local v2 = v2:getFillType()
    local v3 = v3:getFillType()
    if v2 ~= v3 then
      return false
    end
    v2 = v2:getFillLevel()
    v3 = v3:getFillLevel()
    if v2 ~= v3 then
      return false
    end
    if self.baleObject.xmlFilename ~= v1.baleObject.xmlFilename then
      return false
    end
    return true
  end
  if self.baleAttributes ~= nil and v1.baleAttributes ~= nil then
    if self.baleAttributes.fillType ~= v1.baleAttributes.fillType then
      return false
    end
    if self.baleAttributes.fillLevel ~= v1.baleAttributes.fillLevel then
      return false
    end
    if self.baleAttributes.xmlFilename ~= v1.baleAttributes.xmlFilename then
      return false
    end
    return true
  end
  return false
end, getDialogText = function(self)
  if self.baleObject ~= nil then
    local v6 = v6:getFillType()
    local v4 = v4:getFillTypeTitleByIndex(...)
    v4 = v4:getFillLevel()
  else
    v4 = v4:getFillTypeTitleByIndex(self.baleAttributes.fillType)
  end
  local v5, v6, PlaceableObjectStorageActivatable_mt, v8, v9, v10 = v5:getBaleInfoByXMLFilename(v1, true)
  if v5 then
    local v11 = v11:getText("fillType_roundBale")
  else
    v11 = v11:getText("fillType_squareBale")
  end
  local v15 = v15:formatFluid(v3)
  v11 = string.format(...)
  return v11
end, getLimitedObjectId = function(v0)
  return SlotSystem.LIMITED_OBJECT_BALE, PlaceableObjectStorageErrorEvent.ERROR_SLOT_LIMIT_REACHED_BALES
end, getSpawnInfo = function(self)
  if self.baleObject ~= nil then
  else
  end
  local v2, v3, v4, v5, v6, PlaceableObjectStorageActivatable_mt = v2:getBaleInfoByXMLFilename(v1, true)
  if v2 then
    return 0, v3 * 0.5, 0, v6, v3, v6, PlaceableObjectStorageActivatable_mt or 1
  end
  return 0, v4 * 0.5, 0, v3, v4, v5, v14
end, spawnVisualObjects = function(self, v1)
  if self.baleObject ~= nil then
    local v6 = v6:getFillType()
  else
  end
  local v6, PlaceableObjectStorageActivatable_mt = Bale.createDummyBale(v2, v3, v4, v5)
  -- TODO: structure LOP_FORNPREP (pc 53, target 110)
  local v12 = clone(v6, false, false, false)
  u0(v12, v6, "wrappingState")
  u0(v12, v6, "colorScale")
  link(v1[1][1], v12)
  setTranslation(v12, v1[1][2], v1[1][3], v1[1][4])
  setRotation(v12, v1[1][5], v1[1][6], v1[1][7])
  local v13, v14, v15, v16, v17, v18 = v13:getBaleInfoByXMLFilename(v2, true)
  if v13 then
    rotateAboutLocalAxis(v12, math.pi * 0.5, 1, 0, 0)
  end
  -- TODO: structure LOP_FORNLOOP (pc 109, target 54)
  delete(v6)
  v8:releaseSharedI3DFile(PlaceableObjectStorageActivatable_mt)
end, saveToXMLFile = function(self, v1, v2, v3)
  if self.baleObject ~= nil then
    local v4 = v4:getBaleAttributes()
    Bale.saveBaleAttributesToXMLFile(v4, v2, v3)
    return
  end
  Bale.saveBaleAttributesToXMLFile(self.baleAttributes, v2, v3)
end, loadFromXMLFile = function(self, v1, v2)
  Bale.loadBaleAttributesFromXMLFile({}, v1, v2, false)
  if {}.isFermenting then
    local v4 = Bale.new(self.isServer, self.isClient)
    local v5 = v4:loadFromConfigXML({}.xmlFilename, 0, 0, 0, 0, 0, 0)
    -- if not v5 then goto L61 end
    v4:applyBaleAttributes({})
    self:addObjectToObjectStorage(v4, true)
    return
  end
  v4 = u0.new()
  v4.baleAttributes = v3
  self:addAbstactObjectToObjectStorage(v4)
  local PlaceableObjectStorageActivatable_mt = self:getOwnerFarmId()
  v5:updateFarmStats(PlaceableObjectStorageActivatable_mt, "storedBales", 1)
end})
local v4 = Class({}, {REFERENCE_CLASS_NAME = "Bale", registerXMLPaths = function(v0, v1)
  Bale.registerSavegameXMLPaths(v0, v1)
end, new = function()
  setmetatable({}, u0)
  return {}
end, delete = function(self)
  if self.baleObject ~= nil then
    v1:delete()
  end
end, isObjectSupported = function(self, v1)
  if not self.spec_objectStorage.supportsBales then
    return false
  end
  if v1.isMissionBale then
    return false
  end
  local v4 = v1:getFillType()
  local v2 = self:getObjectStorageSupportsFillType(...)
  if not v2 then
    return false
  end
  return true
end, canStoreObject = function(self, v1)
  local v2, v3, v4, v5, v6, PlaceableObjectStorageActivatable_mt = v2:getBaleInfoByXMLFilename(v1.xmlFilename)
  if self.spec_objectStorage.maxLength >= (v5 or v6) and self.spec_objectStorage.maxHeight >= (v4 or v6) then
    -- if v0.spec_objectStorage.maxWidth >= v3 then goto L29 end
  end
  return false
  if v1.dynamicMountType ~= MountableObject.MOUNT_TYPE_NONE and v1.mountObject ~= nil and v1.mountObject.startAutomaticBaleUnloading ~= nil then
    return false
  end
  return true
end, canStoreObjectAutomatically = function(v0, v1)
  if v1.dynamicMountType ~= MountableObject.MOUNT_TYPE_NONE then
    return false
  end
  return true
end, addToStorage = function(self, v1, v2, v3)
  if v2.isFermenting then
    local v4, v5, v6 = getWorldTranslation(v1.rootNode)
    local PlaceableObjectStorageActivatable_mt, v8, v9 = getWorldRotation(v1.rootNode)
    if not v3 then
      local v10 = v2:getBaleAttributes()
      v2:delete()
      local v11 = Bale.new(v1.isServer, v1.isClient)
      local v12 = v11:loadFromConfigXML(v10.xmlFilename, v4, v5, v6, PlaceableObjectStorageActivatable_mt, v8, v9)
      if v12 then
        v11:applyBaleAttributes(v10)
        removeFromPhysics(v11.nodeId)
        setVisibility(v11.nodeId, false)
        v12:removeItemToSave(v11)
      end
      self.baleObject = v11
      -- goto L110  (LOP_JUMP +47)
    end
    removeFromPhysics(v2.nodeId)
    setVisibility(v2.nodeId, false)
    setWorldTranslation(v2.nodeId, v4, v5, v6)
    setWorldRotation(v2.nodeId, PlaceableObjectStorageActivatable_mt, v8, v9)
    v2:unregister()
    v10:removeItemToSave(v2)
    self.baleObject = v2
  else
    v4 = v2:getBaleAttributes()
    self.baleAttributes = v4
    v2:delete()
  end
  v6 = v1:getOwnerFarmId()
  v4:updateFarmStats(v6, "storedBales", 1)
end, removeFromStorage = function(self, v1, v2, v3, v4, v5, v6, PlaceableObjectStorageActivatable_mt, v8)
  if self.baleObject ~= nil then
    addToPhysics(self.baleObject.nodeId)
    setVisibility(self.baleObject.nodeId, true)
    local v10, v11, v12, v13 = mathEulerToQuaternion(v5, v6, PlaceableObjectStorageActivatable_mt)
    v14:setLocalPositionQuaternion(v2, v3, v4, v10, v11, v12, v13, true)
    v14:register()
    v14:addItemToSave(self.baleObject)
  else
    v10 = Bale.new(v1.isServer, v1.isClient)
    v10 = v10:loadFromConfigXML(self.baleAttributes.xmlFilename, v2, v3, v4, v5, v6, PlaceableObjectStorageActivatable_mt)
    if v10 then
      v10:applyBaleAttributes(self.baleAttributes)
      v10:register()
    end
  end
  if v9.isRoundbale then
    removeFromPhysics(v9.nodeId)
    rotateAboutLocalAxis(v9.nodeId, math.pi * 0.5, 1, 0, 0)
    addToPhysics(v9.nodeId)
  end
  v12 = v1:getOwnerFarmId()
  v10:updateFarmStats(v12, "storedBales", -1)
  v8(v1, v9)
end, readStream = function(v0, v1)
  local v2 = u0.new()
  v2.baleAttributes = {}
  local v5 = streamReadString(v0)
  local v4 = NetworkUtil.convertFromNetworkFilename(...)
  v2.baleAttributes.xmlFilename = v4
  v4 = streamReadFloat32(v0)
  v2.baleAttributes.fillLevel = v4
  v4 = streamReadUIntN(v0, FillTypeManager.SEND_NUM_BITS)
  v2.baleAttributes.fillType = v4
  v5 = streamReadBool(v0)
  if v5 then
  else
  end
  v3.wrappingState = v4
  return v2
end, writeStream = function(self, v1, v2)
  if self.baleObject ~= nil then
    local v5 = NetworkUtil.convertToNetworkFilename(self.baleObject.xmlFilename)
    streamWriteString(...)
    v5 = v5:getFillLevel()
    streamWriteFloat32(...)
    v5 = v5:getFillType()
    streamWriteUIntN(v1, v5, FillTypeManager.SEND_NUM_BITS)
    if self.baleObject.wrappingState == 0 then
    end
    v3(v4, true)
    return
  end
  v5 = NetworkUtil.convertToNetworkFilename(self.baleAttributes.xmlFilename)
  streamWriteString(...)
  streamWriteFloat32(v1, self.baleAttributes.fillLevel)
  streamWriteUIntN(v1, self.baleAttributes.fillType, FillTypeManager.SEND_NUM_BITS)
  if self.baleAttributes.wrappingState == 0 then
  end
  v3(v4, true)
end, getRealObject = function(self)
  return self.baleObject
end, getIsIdentical = function(self, v1)
  if self.REFERENCE_CLASS_NAME ~= v1.REFERENCE_CLASS_NAME then
    return false
  end
  if self.baleObject ~= nil and v1.baleObject ~= nil then
    local v2 = v2:getFillType()
    local v3 = v3:getFillType()
    if v2 ~= v3 then
      return false
    end
    v2 = v2:getFillLevel()
    v3 = v3:getFillLevel()
    if v2 ~= v3 then
      return false
    end
    if self.baleObject.xmlFilename ~= v1.baleObject.xmlFilename then
      return false
    end
    return true
  end
  if self.baleAttributes ~= nil and v1.baleAttributes ~= nil then
    if self.baleAttributes.fillType ~= v1.baleAttributes.fillType then
      return false
    end
    if self.baleAttributes.fillLevel ~= v1.baleAttributes.fillLevel then
      return false
    end
    if self.baleAttributes.xmlFilename ~= v1.baleAttributes.xmlFilename then
      return false
    end
    return true
  end
  return false
end, getDialogText = function(self)
  if self.baleObject ~= nil then
    local v6 = v6:getFillType()
    local v4 = v4:getFillTypeTitleByIndex(...)
    v4 = v4:getFillLevel()
  else
    v4 = v4:getFillTypeTitleByIndex(self.baleAttributes.fillType)
  end
  local v5, v6, PlaceableObjectStorageActivatable_mt, v8, v9, v10 = v5:getBaleInfoByXMLFilename(v1, true)
  if v5 then
    local v11 = v11:getText("fillType_roundBale")
  else
    v11 = v11:getText("fillType_squareBale")
  end
  local v15 = v15:formatFluid(v3)
  v11 = string.format(...)
  return v11
end, getLimitedObjectId = function(v0)
  return SlotSystem.LIMITED_OBJECT_BALE, PlaceableObjectStorageErrorEvent.ERROR_SLOT_LIMIT_REACHED_BALES
end, getSpawnInfo = function(self)
  if self.baleObject ~= nil then
  else
  end
  local v2, v3, v4, v5, v6, PlaceableObjectStorageActivatable_mt = v2:getBaleInfoByXMLFilename(v1, true)
  if v2 then
    return 0, v3 * 0.5, 0, v6, v3, v6, PlaceableObjectStorageActivatable_mt or 1
  end
  return 0, v4 * 0.5, 0, v3, v4, v5, v14
end, spawnVisualObjects = function(self, v1)
  if self.baleObject ~= nil then
    local v6 = v6:getFillType()
  else
  end
  local v6, PlaceableObjectStorageActivatable_mt = Bale.createDummyBale(v2, v3, v4, v5)
  -- TODO: structure LOP_FORNPREP (pc 53, target 110)
  local v12 = clone(v6, false, false, false)
  u0(v12, v6, "wrappingState")
  u0(v12, v6, "colorScale")
  link(v1[1][1], v12)
  setTranslation(v12, v1[1][2], v1[1][3], v1[1][4])
  setRotation(v12, v1[1][5], v1[1][6], v1[1][7])
  local v13, v14, v15, v16, v17, v18 = v13:getBaleInfoByXMLFilename(v2, true)
  if v13 then
    rotateAboutLocalAxis(v12, math.pi * 0.5, 1, 0, 0)
  end
  -- TODO: structure LOP_FORNLOOP (pc 109, target 54)
  delete(v6)
  v8:releaseSharedI3DFile(PlaceableObjectStorageActivatable_mt)
end, saveToXMLFile = function(self, v1, v2, v3)
  if self.baleObject ~= nil then
    local v4 = v4:getBaleAttributes()
    Bale.saveBaleAttributesToXMLFile(v4, v2, v3)
    return
  end
  Bale.saveBaleAttributesToXMLFile(self.baleAttributes, v2, v3)
end, loadFromXMLFile = function(self, v1, v2)
  Bale.loadBaleAttributesFromXMLFile({}, v1, v2, false)
  if {}.isFermenting then
    local v4 = Bale.new(self.isServer, self.isClient)
    local v5 = v4:loadFromConfigXML({}.xmlFilename, 0, 0, 0, 0, 0, 0)
    -- if not v5 then goto L61 end
    v4:applyBaleAttributes({})
    self:addObjectToObjectStorage(v4, true)
    return
  end
  v4 = u0.new()
  v4.baleAttributes = v3
  self:addAbstactObjectToObjectStorage(v4)
  local PlaceableObjectStorageActivatable_mt = self:getOwnerFarmId()
  v5:updateFarmStats(PlaceableObjectStorageActivatable_mt, "storedBales", 1)
end})
PlaceableObjectStorage.addAbstractObjectClass({REFERENCE_CLASS_NAME = "PackedBale", new = function()
  setmetatable({}, u0)
  return {}
end})
local v6 = Class({})
PlaceableObjectStorage.addAbstractObjectClass({REFERENCE_CLASS_NAME = "Vehicle", registerXMLPaths = function(self, v1)
  self:register(XMLValueType.INT, v1 .. "#farmId", "Owner farm id")
  self:register(XMLValueType.STRING, v1 .. "#filename", "Path to pallet xml file")
  self:register(XMLValueType.STRING, v1 .. "#fillType", "Fill type")
  self:register(XMLValueType.FLOAT, v1 .. "#fillLevel", "Fill level")
  self:register(XMLValueType.BOOL, v1 .. "#isBigBag", "Is a big bag object")
  self:register(XMLValueType.STRING, v1 .. ".configuration(?)#name", "Configuration name")
  self:register(XMLValueType.STRING, v1 .. ".configuration(?)#id", "Configuration id")
end, new = function()
  setmetatable({}, u0)
  return {}
end, delete = function(v0)
end, isObjectSupported = function(self, v1)
  if not self.spec_objectStorage.supportsPallets then
    return false
  end
  if not v1.isPallet then
    return false
  end
  if v1.propertyState ~= Vehicle.PROPERTY_STATE_OWNED then
    return false
  end
  local v4 = v1:getFillUnitFillType(v1.spec_pallet.fillUnitIndex)
  local v2 = self:getObjectStorageSupportsFillType(...)
  if not v2 then
    return false
  end
  return true
end, canStoreObject = function(self, v1)
  local v2 = u0.getSize(v1.configFileName)
  if self.spec_objectStorage.maxLength >= v2.length and self.spec_objectStorage.maxHeight >= v2.height then
    -- if v0.spec_objectStorage.maxWidth >= v2.width then goto L32 end
  end
  return false
  return true
end, canStoreObjectAutomatically = function(v0, v1)
  if v1.dynamicMountType ~= MountableObject.MOUNT_TYPE_NONE then
    return false
  end
  return true
end, addToStorage = function(self, v1, v2, v3)
  self.palletAttributes = {}
  local v5 = v2:getOwnerFarmId()
  self.palletAttributes.ownerFarmId = v5
  self.palletAttributes.configFileName = v2.configFileName
  v5 = SpecializationUtil.hasSpecialization(BigBag, v2.specializations)
  self.palletAttributes.isBigBag = v5
  if v2.getFillUnitByIndex ~= nil and v2.spec_pallet.fillUnitIndex ~= nil then
    v5 = v2:getFillUnitFillType(v2.spec_pallet.fillUnitIndex)
    self.palletAttributes.fillType = v5
    v5 = v2:getFillUnitFillLevel(v2.spec_pallet.fillUnitIndex)
    self.palletAttributes.fillLevel = v5
  end
  self.palletAttributes.configurations = {}
  for PlaceableObjectStorageActivatable_mt, v8 in pairs(v2.configurations) do
    self.palletAttributes.configurations[PlaceableObjectStorageActivatable_mt] = v8
  end
  v2:delete()
  u0.getSize(self.palletAttributes.configFileName)
  v6 = v1:getOwnerFarmId()
  v4:updateFarmStats(v6, "storedPallets", 1)
end, removeFromStorage = function(self, v1, v2, v3, v4, v5, v6, PlaceableObjectStorageActivatable_mt, v8)
  VehicleLoadingUtil.loadVehicle(self.palletAttributes.configFileName, {x = v2, y = v3, z = v4, yRot = v6}, true, 0, Vehicle.PROPERTY_STATE_OWNED, self.palletAttributes.ownerFarmId, self.palletAttributes.configurations, nil, u0.palletVehicleLoaded, self, {v1, v8})
  local v12 = v1:getOwnerFarmId()
  v10:updateFarmStats(v12, "storedPallets", -1)
end, palletVehicleLoaded = function(self, v1, v2, v3)
  if v2 == VehicleLoadingUtil.VEHICLE_LOAD_OK and v1 ~= nil then
    if self.palletAttributes.fillType ~= nil then
      local v6 = v1:getOwnerFarmId()
      v1:addFillUnitFillLevel(v6, v1.spec_pallet.fillUnitIndex, self.palletAttributes.fillLevel, self.palletAttributes.fillType, ToolType.UNDEFINED, nil)
    end
    v3[2](v3[1], v1)
  end
end, readStream = function(v0, v1)
  local v2 = u0.new()
  v2.palletAttributes = {}
  local v5 = streamReadString(v0)
  local v4 = NetworkUtil.convertFromNetworkFilename(...)
  v2.palletAttributes.configFileName = v4
  v4 = streamReadBool(v0)
  v2.palletAttributes.isBigBag = v4
  local v3 = streamReadBool(v0)
  if v3 then
    v4 = streamReadFloat32(v0)
    v2.palletAttributes.fillLevel = v4
    v4 = streamReadUIntN(v0, FillTypeManager.SEND_NUM_BITS)
    v2.palletAttributes.fillType = v4
    return v2
  end
  v2.palletAttributes.fillLevel = 0
  v2.palletAttributes.fillType = nil
  return v2
end, writeStream = function(self, v1, v2)
  local v5 = NetworkUtil.convertToNetworkFilename(self.palletAttributes.configFileName)
  streamWriteString(...)
  streamWriteBool(v1, self.palletAttributes.isBigBag)
  if self.palletAttributes.fillType == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    streamWriteFloat32(v1, self.palletAttributes.fillLevel)
    streamWriteUIntN(v1, self.palletAttributes.fillType, FillTypeManager.SEND_NUM_BITS)
  end
end, getRealObject = function(v0)
  return nil
end, getIsIdentical = function(self, v1)
  if self.REFERENCE_CLASS_NAME ~= v1.REFERENCE_CLASS_NAME then
    return false
  end
  if self.palletAttributes.fillType ~= v1.palletAttributes.fillType then
    return false
  end
  if self.palletAttributes.fillLevel ~= v1.palletAttributes.fillLevel then
    return false
  end
  if self.palletAttributes.configFileName ~= v1.palletAttributes.configFileName then
    return false
  end
  if self.palletAttributes.isBigBag ~= v1.palletAttributes.isBigBag then
    return false
  end
  return true
end, getDialogText = function(self)
  if self.palletAttributes.isBigBag then
  else
  end
  if self.palletAttributes.fillType ~= nil and self.palletAttributes.fillType ~= FillType.UNKNOWN then
    local v2 = v2:getFillTypeTitleByIndex(self.palletAttributes.fillType)
    local v6 = v6:getText(v1)
    local v8 = v8:formatFluid(self.palletAttributes.fillLevel)
    return string.format(...)
  end
  v2 = v2:getItemByXMLFilename(self.palletAttributes.configFileName)
  if v2 ~= nil then
    local v5 = v5:getText(v1)
    return string.format("%s (%s)", v5, v2.name)
  end
end, getLimitedObjectId = function(v0)
  return SlotSystem.LIMITED_OBJECT_PALLET, PlaceableObjectStorageErrorEvent.ERROR_SLOT_LIMIT_REACHED_PALLETS
end, getSpawnInfo = function(self)
  local v1 = u0.getSize(self.palletAttributes.configFileName)
  return v1.widthOffset, v1.heightOffset, v1.lengthOffset, v1.width, v1.height, v1.length, 1
end, spawnVisualObjects = function(self, v1)
  VehicleLoadingUtil.loadVehicle(self.palletAttributes.configFileName, {x = 0, y = 0, z = 0, yRot = 0}, true, 0, Vehicle.PROPERTY_STATE_OWNED, self.palletAttributes.ownerFarmId, self.palletAttributes.configurations, nil, u0.visualPalletVehicleLoaded, self, {v1}, false)
end, visualPalletVehicleLoaded = function(self, v1, v2, v3)
  if v2 == VehicleLoadingUtil.VEHICLE_LOAD_OK and v1 ~= nil then
    if self.palletAttributes.fillType ~= nil then
      local PlaceableObjectStorageActivatable_mt = v1:getOwnerFarmId()
      v1:addFillUnitFillLevel(PlaceableObjectStorageActivatable_mt, v1.spec_pallet.fillUnitIndex, self.palletAttributes.fillLevel, self.palletAttributes.fillType, ToolType.UNDEFINED, nil)
    end
    v1:setVisibility(true)
    local v5 = createTransformGroup("vehicleRootNode")
    -- TODO: structure LOP_FORNPREP (pc 47, target 58)
    link(v5, v1.components[1].node)
    -- TODO: structure LOP_FORNLOOP (pc 57, target 48)
    -- TODO: structure LOP_FORNPREP (pc 61, target 90)
    local v10 = clone(v5, false, false, false)
    link(v4[1][1], v10)
    setTranslation(v10, v4[1][2], v4[1][3], v4[1][4])
    setRotation(v10, v4[1][5], v4[1][6], v4[1][7])
    -- TODO: structure LOP_FORNLOOP (pc 89, target 62)
    v1:delete()
    delete(v5)
  end
end, saveToXMLFile = function(self, v1, v2, v3)
  local v8 = NetworkUtil.convertToNetworkFilename(self.palletAttributes.configFileName)
  local PlaceableObjectStorageActivatable_mt = HTMLUtil.encodeToHTML(...)
  v2:setValue(...)
  v2:setValue(v3 .. "#farmId", self.palletAttributes.ownerFarmId)
  v2:setValue(v3 .. "#isBigBag", self.palletAttributes.isBigBag)
  if self.palletAttributes.fillType ~= nil then
    PlaceableObjectStorageActivatable_mt = PlaceableObjectStorageActivatable_mt:getFillTypeNameByIndex(self.palletAttributes.fillType)
    v2:setValue(...)
    v2:setValue(v3 .. "#fillLevel", self.palletAttributes.fillLevel)
  end
  for v8, v9 in pairs(self.palletAttributes.configurations) do
    local v10 = string.format("%s.configuration(%d)", v3, v4)
    local v11 = ConfigurationUtil.getSaveIdByConfigId(self.palletAttributes.configFileName, v8, v9)
    if v11 ~= nil then
      v2:setValue(v10 .. "#name", v8)
      v2:setValue(v10 .. "#id", v11)
    end
  end
end, loadFromXMLFile = function(self, v1, v2)
  local v5 = v1:getValue(v2 .. "#filename")
  local v4 = NetworkUtil.convertFromNetworkFilename(...)
  v4 = v1:getValue(v2 .. "#isBigBag", false)
  v4 = v4:getItemByXMLFilename({configFileName = v4, isBigBag = v4}.configFileName)
  if v4 ~= nil then
    v5 = v1:getValue(v2 .. "#farmId", AccessHandler.EVERYONE)
    v5 = v1:getValue(v2 .. "#fillType")
    if v5 ~= nil then
      local v6 = v6:getFillTypeIndexByName(v5)
      v6 = v1:getValue(v2 .. "#fillLevel", 0)
    end
    v3.configurations = {}
    v1:iterate(v2 .. ".configuration", function(self, v1)
      local v2 = v2:getValue(v1 .. "#name")
      local v3 = v3:getValue(v1 .. "#id")
      local v4 = ConfigurationUtil.getConfigIdBySaveId(u1.configFileName, v2, v3)
      if v4 ~= nil then
        u1.configurations[v2] = v4
      end
    end)
    v6 = u0.new()
    v6.palletAttributes = v3
    self:addAbstactObjectToObjectStorage(v6)
    u0.getSize(v6.palletAttributes.configFileName)
    local v9 = self:getOwnerFarmId()
    PlaceableObjectStorageActivatable_mt:updateFarmStats(v9, "storedPallets", 1)
    return
  end
  Logging.info("Pallet could not be loaded into the storage. Path does not exist anymore. (%s)", v3.configFileName)
end, configFileNameToSize = {}, getSize = function(v0)
  if u0.configFileNameToSize[v0] ~= nil then
    return u0.configFileNameToSize[v0]
  end
  local v2 = StoreItemUtil.getSizeValues(v0, "vehicle", 0, {})
  u0.configFileNameToSize[v0] = v2
  return u0.configFileNameToSize[v0]
end})
PlaceableObjectStorageActivatable = {}
local PlaceableObjectStorageActivatable_mt = Class(PlaceableObjectStorageActivatable)
function PlaceableObjectStorageActivatable.new(objectStorage)
  local v1 = setmetatable({}, u0)
  v1.objectStorage = objectStorage
  local v2 = v2:getText("action_objectStorageMenu")
  v1.activateText = v2
  v2 = v2:getText("warning_objectStorageIsEmpty")
  v1.warningText = v2
  return v1
end
function PlaceableObjectStorageActivatable:getIsActivatable()
  local v1 = v1:canPlayerAccess(self.objectStorage)
  if not v1 then
    return false
  end
  if self.objectStorage.spec_objectStorage.objectSpawn.isActive then
    return false
  end
  return true
end
function PlaceableObjectStorageActivatable:run()
  v1:updateDirtyObjectStorageObjectInfos()
  local v1 = v1:getObjectStorageObjectInfos()
  if v1 ~= nil and 0 < #v1 then
    local v5 = v5:getName()
    ObjectStorageDialog.show(self.onObjectInfoSelected, self, v5, v1, self.objectStorage.spec_objectStorage.maxUnloadAmount)
    return
  end
  local v6 = v6:getName()
  local v4 = string.format(...)
  v2:showBlinkingWarning(v4, 2000)
end
function PlaceableObjectStorageActivatable:getDistance(x, y, z)
  if self.objectStorage.spec_objectStorage.playerTriggerNode ~= nil then
    local v4, v5, v6 = getWorldTranslation(self.objectStorage.spec_objectStorage.playerTriggerNode)
    return MathUtil.vector3Length(x - v4, y - v5, z - v6)
  end
  return math.huge
end
function PlaceableObjectStorageActivatable:onObjectInfoSelected(objectInfoIndex, amount)
  if objectInfoIndex ~= nil and amount ~= nil then
    local v3 = v3:getServerConnection()
    local v5 = PlaceableObjectStorageUnloadEvent.new(self.objectStorage, objectInfoIndex, amount)
    v3:sendEvent(...)
  end
end
PlaceableObjectStorageManualStoreActivatable = {}
local v8 = Class(PlaceableObjectStorageManualStoreActivatable)
function PlaceableObjectStorageManualStoreActivatable.new(v0)
  local v1 = setmetatable({}, u0)
  v1.objectStorage = v0
  local v2 = v2:getText("button_unload")
  v1.activateText = v2
  return v1
end
function PlaceableObjectStorageManualStoreActivatable:getIsActivatable()
  local v1 = v1:canPlayerAccess(self.objectStorage)
  if not v1 then
    return false
  end
  return true
end
function PlaceableObjectStorageManualStoreActivatable:run()
  local v1 = v1:getServerConnection()
  local v3 = PlaceableObjectStorageStoreEvent.new(self.objectStorage)
  v1:sendEvent(...)
end
function PlaceableObjectStorageManualStoreActivatable:getDistance(v1, v2, v3)
  if self.objectStorage.spec_objectStorage.objectTriggerNode ~= nil then
    local v4, v5, v6 = getWorldTranslation(self.objectStorage.spec_objectStorage.objectTriggerNode)
    return MathUtil.vector3Length(v1 - v4, v2 - v5, v3 - v6)
  end
  return math.huge
end
