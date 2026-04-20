-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableProductionPoint = {}
function PlaceableProductionPoint.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(PlaceableInfoTrigger, v0)
end
function PlaceableProductionPoint.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onOutputFillTypesChanged")
  SpecializationUtil.registerEvent(v0, "onProductionStatusChanged")
end
function PlaceableProductionPoint.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "outputsChanged", PlaceableProductionPoint.outputsChanged)
  SpecializationUtil.registerFunction(placeableType, "productionStatusChanged", PlaceableProductionPoint.productionStatusChanged)
end
function PlaceableProductionPoint.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "setOwnerFarmId", PlaceableProductionPoint.setOwnerFarmId)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "collectPickObjects", PlaceableProductionPoint.collectPickObjects)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "canBuy", PlaceableProductionPoint.canBuy)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableProductionPoint.updateInfo)
end
function PlaceableProductionPoint.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableProductionPoint)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableProductionPoint)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableProductionPoint)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableProductionPoint)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableProductionPoint)
end
function PlaceableProductionPoint:registerXMLPaths(v1)
  self:setXMLSpecializationType("ProductionPoint")
  ProductionPoint.registerXMLPaths(self, v1 .. ".productionPoint")
  self:setXMLSpecializationType()
end
function PlaceableProductionPoint:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("ProductionPoint")
  ProductionPoint.registerSavegameXMLPaths(self, v1)
  self:setXMLSpecializationType()
end
function PlaceableProductionPoint.initSpecialization()
  v0:addSpecType("prodPointInputFillTypes", "shopListAttributeIconInput", ProductionPoint.loadSpecValueInputFillTypes, ProductionPoint.getSpecValueInputFillTypes, "placeable")
  v0:addSpecType("prodPointOutputFillTypes", "shopListAttributeIconOutput", ProductionPoint.loadSpecValueOutputFillTypes, ProductionPoint.getSpecValueOutputFillTypes, "placeable")
end
function PlaceableProductionPoint:onLoad(savegame)
  local v3 = ProductionPoint.new(self.isServer, self.isClient, self.baseDirectory)
  v3.owningPlaceable = self
  local v4 = v3:load(self.components, self.xmlFile, "placeable.productionPoint", self.customEnvironment, self.i3dMappings)
  if v4 then
    self.spec_productionPoint.productionPoint = v3
    return
  end
  v3:delete()
  self:setLoadingState(Placeable.LOADING_STATE_ERROR)
end
function PlaceableProductionPoint:onDelete()
  if self.spec_productionPoint.productionPoint ~= nil then
    v2:delete()
    self.spec_productionPoint.productionPoint = nil
  end
end
function PlaceableProductionPoint:onFinalizePlacement()
  if self.spec_productionPoint.productionPoint ~= nil then
    if self.getHasBuyingTrigger ~= nil then
      local v2 = self:getHasBuyingTrigger()
      if v2 then
        self.spec_productionPoint.productionPoint.useInteractionTriggerForBuying = false
      end
    end
    v2:register(true)
    local v4 = self:getOwnerFarmId()
    v2:setOwnerFarmId(...)
    v2:findStorageExtensions()
    v2:updateFxState()
  end
end
function PlaceableProductionPoint:updateInfo(superFunc, infoTable)
  v3:updateInfo(superFunc, infoTable)
end
function PlaceableProductionPoint.outputsChanged(v0, v1, v2)
  SpecializationUtil.raiseEvent(v0, "onOutputFillTypesChanged", v1, v2)
end
function PlaceableProductionPoint.productionStatusChanged(v0, v1, v2)
  SpecializationUtil.raiseEvent(v0, "onProductionStatusChanged", v1, v2)
end
function PlaceableProductionPoint:onReadStream(streamId, connection)
  if self.spec_productionPoint.productionPoint ~= nil then
    local productionPointId = NetworkUtil.readNodeObjectId(streamId)
    v5:readStream(streamId, connection)
    v5:finishRegisterObject(self.spec_productionPoint.productionPoint, productionPointId)
  end
end
function PlaceableProductionPoint:onWriteStream(streamId, connection)
  if self.spec_productionPoint.productionPoint ~= nil then
    local v6 = NetworkUtil.getObjectId(self.spec_productionPoint.productionPoint)
    NetworkUtil.writeNodeObjectId(...)
    v4:writeStream(streamId, connection)
    v4:registerObjectInStream(connection, self.spec_productionPoint.productionPoint)
  end
end
function PlaceableProductionPoint:loadFromXMLFile(xmlFile, key)
  if self.spec_productionPoint.productionPoint ~= nil then
    v4:loadFromXMLFile(xmlFile, key)
  end
end
function PlaceableProductionPoint:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_productionPoint.productionPoint ~= nil then
    v5:saveToXMLFile(xmlFile, key, usedModNames)
  end
end
function PlaceableProductionPoint:setOwnerFarmId(superFunc, farmId, noEventSend)
  superFunc(self, farmId, noEventSend)
  if self.spec_productionPoint.productionPoint ~= nil then
    v5:setOwnerFarmId(farmId)
  end
end
function PlaceableProductionPoint:collectPickObjects(superFunc, node)
  if self.spec_productionPoint.productionPoint.loadingStation ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 17, target 31)
    if node == self.spec_productionPoint.productionPoint.loadingStation.loadTriggers[1].triggerNode then
      return
    end
    -- TODO: structure LOP_FORNLOOP (pc 30, target 18)
  end
  -- TODO: structure LOP_FORNPREP (pc 40, target 54)
  if node == v3.productionPoint.unloadingStation.unloadTriggers[1].exactFillRootNode then
    return
  end
  -- TODO: structure LOP_FORNLOOP (pc 53, target 41)
  superFunc(self, node)
end
function PlaceableProductionPoint.canBuy(v0, v1)
  local v2 = v2:getHasFreeSlots()
  if not v2 then
    local v3 = v3:getText("warning_maxNumOfProdPointsReached")
    return false
  end
  v2 = v1(v0)
  return v2
end
