-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableManureHeap = {}
function PlaceableManureHeap.prerequisitesPresent(v0)
  return true
end
function PlaceableManureHeap.registerOverwrittenFunctions(v0)
  SpecializationUtil.registerOverwrittenFunction(v0, "setOwnerFarmId", PlaceableManureHeap.setOwnerFarmId)
  SpecializationUtil.registerOverwrittenFunction(v0, "collectPickObjects", PlaceableManureHeap.collectPickObjects)
  SpecializationUtil.registerOverwrittenFunction(v0, "getCanBePlacedAt", PlaceableManureHeap.getCanBePlacedAt)
  SpecializationUtil.registerOverwrittenFunction(v0, "updateInfo", PlaceableManureHeap.updateInfo)
end
function PlaceableManureHeap.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", PlaceableManureHeap)
  SpecializationUtil.registerEventListener(v0, "onDelete", PlaceableManureHeap)
  SpecializationUtil.registerEventListener(v0, "onFinalizePlacement", PlaceableManureHeap)
  SpecializationUtil.registerEventListener(v0, "onReadStream", PlaceableManureHeap)
  SpecializationUtil.registerEventListener(v0, "onWriteStream", PlaceableManureHeap)
end
function PlaceableManureHeap:registerXMLPaths(v1)
  self:setXMLSpecializationType("ManureHeap")
  ManureHeap.registerXMLPaths(self, v1 .. ".manureHeap")
  self:register(XMLValueType.BOOL, v1 .. ".manureHeap#isExtension", "Is extension and can only be placed next to storages", true)
  LoadingStation.registerXMLPaths(self, v1 .. ".manureHeap.loadingStation")
  self:setXMLSpecializationType(XMLManager.XML_SPECIALIZATION_NONE)
end
function PlaceableManureHeap:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("ManureHeap")
  ManureHeap.registerSavegameXMLPaths(self, v1)
  self:setXMLSpecializationType(XMLManager.XML_SPECIALIZATION_NONE)
end
function PlaceableManureHeap.initSpecialization()
  v0:addSpecType("manureHeapCapacity", "shopListAttributeIconCapacity", PlaceableManureHeap.loadSpecValueCapacity, PlaceableManureHeap.getSpecValueCapacity, "placeable")
end
function PlaceableManureHeap:onLoad(v1)
  local v4 = LoadingStation.new(self.isServer, self.isClient)
  self.spec_manureHeap.loadingStation = v4
  v4 = v4:load(self.spec_manureHeap.components, self.xmlFile, "placeable.manureHeap.loadingStation", self.customEnvironment, self.i3dMappings, self.components[1].node)
  if not v4 then
    v4:delete()
    self.spec_manureHeap.loadingStation = nil
    return false
  end
  v2.loadingStation.owningPlaceable = self
  v2.loadingStation.hasStoragePerFarm = false
  v4 = ManureHeap.new(v2.isServer, self.isClient)
  v2.manureHeap = v4
  v4 = v4:load(v2.components, v3, "placeable.manureHeap", self.customEnvironment, self.i3dMappings, self.components[1].node)
  if not v4 then
    v4:delete()
    v2.manureHeap = nil
  end
  v4 = v3:getValue("placeable.manureHeap#isExtension", true)
  v2.isExtension = v4
  local v5 = v5:getText("fillType_manure")
  v2.infoFillLevel = {title = v5, text = ""}
end
function PlaceableManureHeap:onDelete()
  if self.spec_manureHeap.manureHeap ~= nil then
    local v3 = g_currentMission.storageSystem:hasStorage(self.spec_manureHeap.manureHeap)
    if v3 then
      g_currentMission.storageSystem:removeStorageFromUnloadingStations(self.spec_manureHeap.manureHeap, self.spec_manureHeap.manureHeap.unloadingStations)
      g_currentMission.storageSystem:removeStorageFromLoadingStations(self.spec_manureHeap.manureHeap, self.spec_manureHeap.manureHeap.loadingStations)
      g_currentMission.storageSystem:removeStorage(self.spec_manureHeap.manureHeap)
    end
    v3:delete()
    v1.manureHeap = nil
  end
  if v1.loadingStation ~= nil then
    v3 = v3:getIsFillTypeSupported(FillType.MANURE)
    if v3 then
      v3:removeManureLoadingStation(v1.loadingStation)
    end
    v2:removeLoadingStation(v1.loadingStation, self)
    v3:delete()
    v1.loadingStation = nil
  end
end
function PlaceableManureHeap:onFinalizePlacement()
  local v3 = self:getOwnerFarmId()
  if self.spec_manureHeap.loadingStation ~= nil and self.spec_manureHeap.manureHeap ~= nil then
    v4:register(true)
    g_currentMission.storageSystem:addLoadingStation(self.spec_manureHeap.loadingStation, self)
    v4:finalize()
    v4:register(true)
    v4:setOwnerFarmId(v3, true)
    g_currentMission.storageSystem:addStorage(self.spec_manureHeap.manureHeap)
    g_currentMission.storageSystem:addStorageToLoadingStation(self.spec_manureHeap.manureHeap, self.spec_manureHeap.loadingStation)
    local v4 = v4:getIsFillTypeSupported(FillType.MANURE)
    if v4 then
      v4:addManureLoadingStation(self.spec_manureHeap.loadingStation)
    end
    v4 = v2:getStorageExtensionsInRange(v1.loadingStation, v3)
    for v8, v9 in ipairs(v4) do
      if not (v1.loadingStation.sourceStorages[v9] == nil) then
        continue
      end
      v2:addStorageToLoadingStation(v9, v1.loadingStation)
    end
    v5 = v2:getExtendableUnloadingStationsInRange(v1.manureHeap, v3)
    v6 = v2:getExtendableLoadingStationsInRange(v1.manureHeap, v3)
    v2:addStorageToUnloadingStations(v1.manureHeap, v5)
    v2:addStorageToLoadingStations(v1.manureHeap, v6)
  end
end
function PlaceableManureHeap:onReadStream(v1, v2)
  if self.spec_manureHeap.loadingStation ~= nil and self.spec_manureHeap.manureHeap ~= nil then
    local v4 = NetworkUtil.readNodeObjectId(v1)
    v5:readStream(v1, v2)
    v5:finishRegisterObject(self.spec_manureHeap.loadingStation, v4)
    local v5 = NetworkUtil.readNodeObjectId(v1)
    v6:readStream(v1, v2)
    v6:finishRegisterObject(self.spec_manureHeap.manureHeap, v5)
  end
end
function PlaceableManureHeap:onWriteStream(v1, v2)
  if self.spec_manureHeap.loadingStation ~= nil and self.spec_manureHeap.manureHeap ~= nil then
    local v6 = NetworkUtil.getObjectId(self.spec_manureHeap.loadingStation)
    NetworkUtil.writeNodeObjectId(...)
    v4:writeStream(v1, v2)
    v4:registerObjectInStream(v2, self.spec_manureHeap.loadingStation)
    v6 = NetworkUtil.getObjectId(self.spec_manureHeap.manureHeap)
    NetworkUtil.writeNodeObjectId(...)
    v4:writeStream(v1, v2)
    v4:registerObjectInStream(v2, self.spec_manureHeap.manureHeap)
  end
end
function PlaceableManureHeap:loadFromXMLFile(v1, v2)
  if self.spec_manureHeap.manureHeap ~= nil then
    v4:loadFromXMLFile(v1, v2)
  end
end
function PlaceableManureHeap:saveToXMLFile(v1, v2, v3)
  if self.spec_manureHeap.manureHeap ~= nil then
    v5:saveToXMLFile(v1, v2, v3)
  end
end
function PlaceableManureHeap:setOwnerFarmId(v1, v2, v3)
  v1(self, v2, v3)
  if self.isServer and self.spec_manureHeap.manureHeap ~= nil then
    v5:setOwnerFarmId(v2, true)
  end
end
function PlaceableManureHeap:collectPickObjects(v1, v2)
  if self.spec_manureHeap.loadingStation ~= nil then
    for v7, v8 in ipairs(self.spec_manureHeap.loadingStation.loadTriggers) do
      if not (v2 == v8.triggerNode) then
        continue
      end
      return
    end
  end
  if v3.manureHeap ~= nil and v2 == v3.manureHeap.activationTriggerNode then
    return
  end
  v1(self, v2)
end
function PlaceableManureHeap:getCanBePlacedAt(v1, v2, v3, v4, v5)
  if self.spec_manureHeap.manureHeap == nil then
    return false
  end
  if v6.isExtension then
    local v8 = g_currentMission.storageSystem:getExtendableUnloadingStationsInRange(v6.manureHeap, v5, v2, v3, v4)
    if #v8 == 0 then
      local v10 = v10:getText("warning_manureHeapNotNearBarn")
      return false
    end
  end
  return v1(self, v2, v3, v4, v5)
end
function PlaceableManureHeap:updateInfo(v1, v2)
  v1(self, v2)
  if self.spec_manureHeap.manureHeap == nil then
    return
  end
  local v4 = v4:getFillLevel(v3.manureHeap.fillTypeIndex)
  local v6 = string.format("%d l", v4)
  v3.infoFillLevel.text = v6
  table.insert(v2, v3.infoFillLevel)
end
function PlaceableManureHeap:loadSpecValueCapacity(v1, v2)
  return self:getValue("placeable.manureHeap#capacity")
end
function PlaceableManureHeap:getSpecValueCapacity(v1)
  if self.specs.manureHeapCapacity == nil then
    return nil
  end
  return v2:formatVolume(self.specs.manureHeapCapacity)
end
