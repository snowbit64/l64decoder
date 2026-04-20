-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ProductionPoint = {NO_PALLET_SPACE_COOLDOWN = 15000, DIRECT_SELL_PRICE_FACTOR = 0.9, DIRECT_DELIVERY_PRICE = 0.000035000000000000004, OUTPUT_MODE = {}}
ProductionPoint.OUTPUT_MODE.KEEP = 0
ProductionPoint.OUTPUT_MODE.DIRECT_SELL = 1
ProductionPoint.OUTPUT_MODE.AUTO_DELIVER = 2
ProductionPoint.OUTPUT_MODE_NUM_BITS = 2
ProductionPoint.PROD_STATUS = {INACTIVE = 0, RUNNING = 1, MISSING_INPUTS = 2, NO_OUTPUT_SPACE = 3}
ProductionPoint.PROD_STATUS_NUM_BITS = 2
{}[ProductionPoint.PROD_STATUS.INACTIVE] = "ui_production_status_inactive"
{}[ProductionPoint.PROD_STATUS.RUNNING] = "ui_production_status_running"
{}[ProductionPoint.PROD_STATUS.MISSING_INPUTS] = "ui_production_status_materialsMissing"
{}[ProductionPoint.PROD_STATUS.NO_OUTPUT_SPACE] = "ui_production_status_outOfSpace"
ProductionPoint.PROD_STATUS_TO_L10N = {}
local ProductionPoint_mt = Class(ProductionPoint, Object)
function ProductionPoint:registerXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#name", "Name of the Production Point", "unnamed production point")
  self:register(XMLValueType.BOOL, v1 .. ".productions#sharedThroughputCapacity", "Productions slow each other down if active at the same time", true)
  self:register(XMLValueType.STRING, v1 .. ".productions.production(?)#id", "Unique string used for identifying the production", nil, true)
  self:register(XMLValueType.L10N_STRING, v1 .. ".productions.production(?)#name", "Name of the production used inside the UI", "unnamed production")
  self:register(XMLValueType.STRING, v1 .. ".productions.production(?)#params", "Optional parameters formatted into #name")
  self:register(XMLValueType.FLOAT, v1 .. ".productions.production(?)#cyclesPerMonth", "Number of performed production cycles per ingame month (divided by the number of enabled productions, unless sharedThroughputCapacity is set to false)", 1440)
  self:register(XMLValueType.FLOAT, v1 .. ".productions.production(?)#cyclesPerHour", "Number of production cycles per ingame hour per day (==month) (divided by the number of enabled productions, unless sharedThroughputCapacity is set to false)", 60)
  self:register(XMLValueType.FLOAT, v1 .. ".productions.production(?)#cyclesPerMinute", "Number of performed production cycles per ingame minute (divided by the number of enabled productions)", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".productions.production(?)#costsPerActiveMonth", "Costs per ingame hour if this production is enabled per ingame month (regardless of whether it is producing or not)", 1440)
  self:register(XMLValueType.FLOAT, v1 .. ".productions.production(?)#costsPerActiveHour", "Costs per ingame hour if this production is enabled per day (==month) (regardless of whether it is producing or not)", 60)
  self:register(XMLValueType.FLOAT, v1 .. ".productions.production(?)#costsPerActiveMinute", "Costs per ingame minute if this production is enabled (regardless of whether it is producing or not)", 1)
  self:register(XMLValueType.STRING, v1 .. ".productions.production(?).inputs.input(?)#fillType", "Input fillType", nil, true)
  self:register(XMLValueType.FLOAT, v1 .. ".productions.production(?).inputs.input(?)#amount", "Used amount per cycle", 1)
  self:register(XMLValueType.STRING, v1 .. ".productions.production(?).outputs.output(?)#fillType", "Output fillType", nil, true)
  self:register(XMLValueType.FLOAT, v1 .. ".productions.production(?).outputs.output(?)#amount", "Produced amount per cycle", 1)
  self:register(XMLValueType.BOOL, v1 .. ".productions.production(?).outputs.output(?)#sellDirectly", "Directly sell produced amount", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".playerTrigger#node", "", "")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "active")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "idle")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".productions.production(?).sounds", "active")
  AnimationManager.registerAnimationNodesXMLPaths(self, v1 .. ".animationNodes")
  AnimationManager.registerAnimationNodesXMLPaths(self, v1 .. ".productions.production(?).animationNodes")
  EffectManager.registerEffectXMLPaths(self, v1 .. ".effectNodes")
  EffectManager.registerEffectXMLPaths(self, v1 .. ".productions.production(?).effectNodes")
  SellingStation.registerXMLPaths(self, v1 .. ".sellingStation")
  LoadingStation.registerXMLPaths(self, v1 .. ".loadingStation")
  PalletSpawner.registerXMLPaths(self, v1 .. ".palletSpawner")
  Storage.registerXMLPaths(self, v1 .. ".storage")
end
function ProductionPoint:registerSavegameXMLPaths(v1)
  self:register(XMLValueType.INT, v1 .. "#palletSpawnCooldown", "remaining cooldown duration of pallet spawner")
  self:register(XMLValueType.FLOAT, v1 .. "#productionCostsToClaim", "production costs yet to be claimed from the owning player")
  self:register(XMLValueType.STRING, v1 .. ".directSellFillType(?)", "fillType currently configured to be directly sold")
  self:register(XMLValueType.STRING, v1 .. ".autoDeliverFillType(?)", "fillType currently configured to be automatically delivered")
  self:register(XMLValueType.STRING, v1 .. ".production(?)#id", "Unique id of the production")
  self:register(XMLValueType.BOOL, v1 .. ".production(?)#isEnabled", "State of the production")
  Storage.registerSavegameXMLPaths(self, v1 .. ".storage")
end
InitStaticObjectClass(ProductionPoint, "ProductionPoint", ObjectIds.OBJECT_PRODUCTION_POINT)
function ProductionPoint.new(isServer, isClient, baseDirectory, customMt)
  if not customMt then
  end
  local v4 = v4(v5, v6, v7)
  v4.baseDirectory = baseDirectory
  v4.owningPlaceable = nil
  v4.isOwned = false
  v4.mission = g_currentMission
  v4.activeProductions = {}
  local v7 = v7:getEffectiveTimeScale()
  v4.minuteFactorTimescaled = v7 / 1000 / 60
  v4.waitingForPalletToSpawn = false
  v4.palletSpawnCooldown = 0
  v4.palletLimitReached = false
  local v5 = v4:getNextDirtyFlag()
  v4.dirtyFlag = v5
  v4.inputFillLevels = {}
  v4.productionCostsToClaim = 0
  v4.soldFillTypesToPayOut = {}
  v5 = ProductionPointActivatable.new(v4)
  v4.activatable = v5
  v5:subscribe(MessageType.TIMESCALE_CHANGED, v4.onTimescaleChanged, v4)
  v7 = v7:getText("infohud_activeProductions")
  v7 = v7:getText("infohud_noActiveProduction")
  v7 = v7:getText("ui_productions_buildingStorage")
  v7 = v7:getText("infohud_storageIsEmpty")
  v7 = v7:getText("infohud_tooManyPallets")
  v4.infoTables = {activeProds = {title = v7, accentuate = true}, noActiveProd = {title = v7, accentuate = true}, storage = {title = v7, accentuate = true}, storageEmpty = {title = "-", text = v7}, palletLimitReached = {title = v7, accentuate = true}}
  return v4
end
function ProductionPoint:load(components, xmlFile, key, customEnv, i3dMappings)
  self.node = components[1].node
  local v6 = xmlFile:getValue(key .. "#name")
  if v6 then
    local v7 = v7:convertText(v6, customEnv)
  end
  self.name = v7
  self.productions = {}
  self.productionsIdToObj = {}
  self.inputFillTypeIds = {}
  self.inputFillTypeIdsArray = {}
  self.outputFillTypeIds = {}
  self.outputFillTypeIdsArray = {}
  self.outputFillTypeIdsDirectSell = {}
  self.outputFillTypeIdsAutoDeliver = {}
  self.outputFillTypeIdsToPallets = {}
  v7 = xmlFile:getValue(key .. ".productions#sharedThroughputCapacity", true)
  self.sharedThroughputCapacity = v7
  xmlFile:iterate(key .. ".productions.production", function(self, components)
    local key = key:getValue(components .. "#id")
    key = key:getValue(components .. "#name", nil, u1, false)
    key = key:getValue(components .. "#params")
    if key ~= nil then
      local customEnv = key:split("|")
      -- TODO: structure LOP_FORNPREP (pc 40, target 50)
      local v7 = v7:convertText(customEnv[1], u1)
      customEnv[1] = v7
      -- TODO: structure LOP_FORNLOOP (pc 49, target 41)
      local v6 = unpack(customEnv)
      customEnv = string.format(...)
    end
    if not xmlFile.id then
      Logging.xmlError(u0, "missing id for production '%s'", xmlFile.name or self)
      return false
    end
    -- TODO: structure LOP_FORNPREP (pc 79, target 96)
    if u2[1] == xmlFile.id then
      Logging.xmlError(u0, "production id '%s' already in use", xmlFile.id)
      return false
    end
    -- TODO: structure LOP_FORNLOOP (pc 95, target 80)
    table.insert(u2, xmlFile.id)
    customEnv = customEnv:getValue(components .. "#cyclesPerMonth")
    local i3dMappings = i3dMappings:getValue(components .. "#cyclesPerHour")
    v6 = v6:getValue(components .. "#cyclesPerMinute")
    if customEnv then
      -- if v4 / 60 / 24 then goto L135 end
    end
    if i3dMappings then
      -- if v5 / 60 then goto L135 end
    end
    if not v6 then
    end
    xmlFile.cyclesPerMinute = v7
    if not i3dMappings then
    end
    xmlFile.cyclesPerHour = v7
    if not customEnv then
    end
    xmlFile.cyclesPerMonth = v7
    v7 = v7:getValue(components .. "#costsPerActiveMinute")
    local v8 = v8:getValue(components .. "#costsPerActiveHour")
    local v9 = v9:getValue(components .. "#costsPerActiveMonth")
    if v9 then
      -- if v9 / 60 / 24 then goto L182 end
    end
    if v8 then
      -- if v8 / 60 then goto L182 end
    end
    if not v7 then
    end
    xmlFile.costsPerActiveMinute = v10
    if not v8 then
    end
    xmlFile.costsPerActiveHour = v10
    if not v9 then
    end
    xmlFile.costsPerActiveMonth = v10
    xmlFile.status = ProductionPoint.PROD_STATUS.INACTIVE
    xmlFile.inputs = {}
    v10:iterate(components .. ".inputs.input", function(self, components)
      local key = key:getValue(components .. "#fillType")
      local customEnv = customEnv:getFillTypeIndexByName(key)
      if {["type"] = customEnv}["type"] == nil then
        Logging.xmlError(u0, "Unable to load fillType '%s' for '%s'", key, components)
        return
      end
      u1.inputFillTypeIds[xmlFile["type"]] = true
      table.addElement(u1.inputFillTypeIdsArray, xmlFile["type"])
      customEnv = customEnv:getValue(components .. "#amount", 1)
      xmlFile.amount = customEnv
      table.insert(u2.inputs, xmlFile)
    end)
    if #xmlFile.inputs == 0 then
      Logging.xmlError(u0, "No inputs for production '%s'", components)
      return
    end
    xmlFile.outputs = {}
    xmlFile.primaryProductFillType = nil
    v11:iterate(components .. ".outputs.output", function(self, components)
      local key = key:getValue(components .. "#fillType")
      local customEnv = customEnv:getFillTypeIndexByName(key)
      if {["type"] = customEnv}["type"] == nil then
        Logging.xmlError(u0, "Unable to load fillType '%s' for '%s'", key, components)
        return
      end
      customEnv = customEnv:getValue(components .. "#sellDirectly", false)
      xmlFile.sellDirectly = customEnv
      if not xmlFile.sellDirectly then
        u1.outputFillTypeIds[xmlFile["type"]] = true
        table.addElement(u1.outputFillTypeIdsArray, xmlFile["type"])
      else
        u1.soldFillTypesToPayOut[xmlFile["type"]] = 0
      end
      customEnv = customEnv:getValue(components .. "#amount", 1)
      xmlFile.amount = customEnv
      table.insert(u2.outputs, xmlFile)
      if u3 < xmlFile.amount then
        u2.primaryProductFillType = xmlFile["type"]
        u3 = xmlFile.amount
      end
    end)
    if #xmlFile.outputs == 0 then
      Logging.xmlError(u0, "No outputs for production '%s'", components)
    end
    if u3.isClient then
      xmlFile.samples = {}
      local v12 = v12:loadSampleFromXML(u0, components .. ".sounds", "active", u3.baseDirectory, u4, 1, AudioGroup.ENVIRONMENT, u5, nil)
      xmlFile.samples.active = v12
      local v11 = v11:loadAnimations(u0, components .. ".animationNodes", u4, u3, u5)
      xmlFile.animationNodes = v11
      v11 = v11:loadEffect(u0, components .. ".effectNodes", u4, u3, u5)
      xmlFile.effects = v11
      v11:setFillType(xmlFile.effects, FillType.UNKNOWN)
    end
    if u3.productionsIdToObj[xmlFile.id] ~= nil then
      Logging.xmlError(u0, "Error: production id '%s' already used", xmlFile.id)
      return false
    end
    u3.productionsIdToObj[xmlFile.id] = xmlFile
    table.insert(u3.productions, xmlFile)
    return true
  end)
  if #self.productions == 0 then
    Logging.xmlError(xmlFile, "No valid productions defined")
  end
  if self.owningPlaceable == nil then
    print("Error: ProductionPoint.owningPlaceable was not set before load()")
    return false
  end
  local v8 = xmlFile:getValue(key .. ".playerTrigger#node", nil, components, i3dMappings)
  self.interactionTriggerNode = v8
  if self.interactionTriggerNode ~= nil then
    self.useInteractionTriggerForBuying = true
    addTrigger(self.interactionTriggerNode, "interactionTriggerCallback", self)
  end
  if self.isClient then
    self.samples = {}
    local v9 = v9:loadSampleFromXML(xmlFile, key .. ".sounds", "idle", self.baseDirectory, components, 1, AudioGroup.ENVIRONMENT, i3dMappings, nil)
    self.samples.idle = v9
    v9 = v9:loadSampleFromXML(xmlFile, key .. ".sounds", "active", self.baseDirectory, components, 1, AudioGroup.ENVIRONMENT, i3dMappings, nil)
    self.samples.active = v9
    v8 = v8:loadAnimations(xmlFile, key .. ".animationNodes", components, self, i3dMappings)
    self.animationNodes = v8
    v8 = v8:loadEffect(xmlFile, key .. ".effectNodes", components, self, i3dMappings)
    self.effects = v8
    v8:setFillType(self.effects, FillType.UNKNOWN)
  end
  v8 = SellingStation.new(self.isServer, self.isClient)
  self.unloadingStation = v8
  v8:load(components, xmlFile, key .. ".sellingStation", self.customEnvironment, i3dMappings, components[1].node)
  local v10 = v10:getOwnerFarmId()
  if v10 == AccessHandler.EVERYONE then
  end
  v8.storeSoldGoods = true
  v10 = v10:getOwnerFarmId()
  if v10 == AccessHandler.EVERYONE then
  end
  v8.skipSell = true
  function self.unloadingStation.getIsFillAllowedFromFarm(self, farmId)
    return xmlFile:canFarmAccess(farmId, u0.owningPlaceable)
  end
  v8:register(true)
  v9 = xmlFile:hasProperty(key .. ".loadingStation")
  if v9 then
    v9 = LoadingStation.new(self.isServer, self.isClient)
    self.loadingStation = v9
    v9 = v9:load(components, xmlFile, key .. ".loadingStation", self.customEnvironment, i3dMappings, components[1].node)
    if not v9 then
      Logging.xmlError(xmlFile, "Unable to load loading station %s", key .. ".loadingStation")
      return false
    end
    function self.loadingStation.hasFarmAccessToStorage(self, farmId)
      local key = key:getOwnerFarmId()
      if farmId ~= key then
      end
      return true
    end
    self.loadingStation.owningPlaceable = self.owningPlaceable
    v9:register(true)
  end
  v10 = xmlFile:hasProperty(key .. ".palletSpawner")
  if v10 then
    v10 = PalletSpawner.new(self.baseDirectory)
    self.palletSpawner = v10
    v10 = v10:load(components, xmlFile, key .. ".palletSpawner", self.customEnvironment, i3dMappings)
    if not v10 then
      Logging.xmlError(xmlFile, "Unable to load pallet spawner %s", key .. ".palletSpawner")
      return false
    end
  end
  if self.loadingStation == nil and self.palletSpawner == nil then
    Logging.xmlError(xmlFile, "No loading station or pallet spawner for production point")
    return false
  end
  if self.palletSpawner ~= nil then
    local v11 = v11:getSupportedFillTypes()
    for v13, v14 in pairs(...) do
      if not self.outputFillTypeIds[v13] then
        continue
      end
      self.outputFillTypeIdsToPallets[v13] = v14
    end
  end
  v10 = Storage.new(self.isServer, self.isClient)
  self.storage = v10
  v10:load(components, xmlFile, key .. ".storage", i3dMappings)
  v10:register(true)
  if self.loadingStation ~= nil then
    v10 = v10:addSourceStorage(self.storage)
    if not v10 then
      Logging.xmlWarning(xmlFile, "Unable to add source storage ")
    end
    v10:addLoadingStation(self.loadingStation, self.owningPlaceable)
  end
  if self.unloadingStation.storeSoldGoods then
    v10:addTargetStorage(self.storage)
  end
  for v13 in pairs(self.inputFillTypeIds) do
    local v15 = v15:getIsFillTypeSupported(v13)
    if not not v15 then
      continue
    end
    v15 = v15:getFillTypeNameByIndex(v13)
    Logging.xmlWarning(xmlFile, "Input filltype '%s' is not supported by unloading station", v15)
  end
  for v13 in pairs(self.outputFillTypeIds) do
    if self.loadingStation ~= nil then
      v15 = v15:getIsFillTypeSupported(v13)
      if not not v15 then
        continue
      end
    end
    if not (self.outputFillTypeIdsToPallets[v13] == nil) then
      continue
    end
    v15 = v15:getFillTypeNameByIndex(v13)
    Logging.xmlWarning(xmlFile, "Output filltype '%s' is not supported by loading station or pallet spawner", v15)
  end
  self.unloadingStation.owningPlaceable = self.owningPlaceable
  v10:addUnloadingStation(self.unloadingStation, self.owningPlaceable)
  v10:addSellingStation(self.unloadingStation)
  -- TODO: structure LOP_FORNPREP (pc 568, target 644)
  -- TODO: structure LOP_FORNPREP (pc 577, target 606)
  local v18 = v18:getIsFillTypeSupported(self.productions[1].inputs[1]["type"])
  if not v18 then
    local v21 = v21:getFillTypeNameByIndex(self.productions[1].inputs[1]["type"])
    Logging.xmlError(xmlFile, "production point storage does not support fillType '%s' used as in input in production '%s'", v21, self.productions[1].name)
    return false
  end
  -- TODO: structure LOP_FORNLOOP (pc 605, target 578)
  for v16 = 1, #v13.outputs do
    if not v13.outputs[v16].sellDirectly then
      v18 = v18:getIsFillTypeSupported(v13.outputs[v16]["type"])
      if not v18 then
        v21 = v21:getFillTypeNameByIndex(v13.outputs[v16]["type"])
        Logging.xmlError(xmlFile, "production point storage does not support fillType '%s' used as an output in production '%s'", v21, v13.name)
        return false
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 642, target 612)
  end
  v11 = v11:getSupportedFillTypes()
  for v13, v14 in pairs(...) do
    if not not self.inputFillTypeIds[v13] then
      continue
    end
    if not not self.outputFillTypeIds[v13] then
      continue
    end
    v18 = v18:getFillTypeNameByIndex(v13)
    Logging.xmlWarning(...)
  end
  return true
end
function ProductionPoint:findStorageExtensions()
  if self.unloadingStation ~= nil then
    local v5 = self:getOwnerFarmId()
    local v2 = g_currentMission.storageSystem:getStorageExtensionsInRange(...)
    if v2 ~= nil then
      for v6, v7 in ipairs(v2) do
        if not (self.unloadingStation.targetStorages[v7] == nil) then
          continue
        end
        v1:addStorageToUnloadingStation(v7, self.unloadingStation)
      end
    end
  end
  if self.loadingStation ~= nil then
    v5 = self:getOwnerFarmId()
    v2 = v1:getStorageExtensionsInRange(...)
    if v2 ~= nil then
      for v6, v7 in ipairs(v2) do
        if not (self.loadingStation.sourceStorages[v7] == nil) then
          continue
        end
        v1:addStorageToLoadingStation(v7, self.loadingStation)
      end
    end
    v3 = v3:getIsFillTypeSupported(FillType.LIQUIDMANURE)
    if not v3 then
      v3 = v3:getIsFillTypeSupported(FillType.DIGESTATE)
      -- if not v3 then goto L93 end
    end
    v3:addLiquidManureLoadingStation(self.loadingStation)
  end
end
function ProductionPoint:delete()
  v1:unsubscribeAll(self)
  v1:removeActivatable(self.activatable)
  self.activatable = nil
  v1:removeProductionPoint(self)
  if self.interactionTriggerNode ~= nil then
    removeTrigger(self.interactionTriggerNode)
    self.interactionTriggerNode = nil
  end
  if self.samples ~= nil then
    v1:deleteSamples(self.samples)
    self.samples = nil
  end
  if self.animationNodes ~= nil then
    v1:deleteAnimations(self.animationNodes)
  end
  if self.effects ~= nil then
    v1:deleteEffects(self.effects)
  end
  if self.loadingStation ~= nil then
    v1:removeLoadingStation(self.loadingStation, self.owningPlaceable)
    local v1 = v1:getIsFillTypeSupported(FillType.LIQUIDMANURE)
    if not v1 then
      v1 = v1:getIsFillTypeSupported(FillType.DIGESTATE)
      -- if not v1 then goto L108 end
    end
    v1:removeLiquidManureLoadingStation(self.loadingStation)
    v1:delete()
  end
  if self.unloadingStation ~= nil then
    v1:removeUnloadingStation(self.unloadingStation, self.owningPlaceable)
    v1:removeSellingStation(self.unloadingStation)
    v1:delete()
  end
  if self.palletSpawner ~= nil then
    v1:delete()
  end
  if self.storage ~= nil then
    v1:delete()
  end
  -- TODO: structure LOP_FORNPREP (pc 161, target 190)
  v5:deleteSamples(self.productions[1].samples)
  self.productions[1].samples = nil
  v5:deleteAnimations(self.productions[1].animationNodes)
  v5:deleteEffects(self.productions[1].effects)
  -- TODO: structure LOP_FORNLOOP (pc 189, target 162)
  local v2 = v2:superClass()
  v2.delete(self)
end
function ProductionPoint:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    local v6 = streamReadUInt8(streamId)
    -- TODO: structure LOP_FORNPREP (pc 22, target 39)
    local v8 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
    self:setOutputDistributionMode(v8, ProductionPoint.OUTPUT_MODE.DIRECT_SELL)
    -- TODO: structure LOP_FORNLOOP (pc 38, target 23)
    v6 = streamReadUInt8(streamId)
    -- TODO: structure LOP_FORNPREP (pc 46, target 63)
    v8 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
    self:setOutputDistributionMode(v8, ProductionPoint.OUTPUT_MODE.AUTO_DELIVER)
    -- TODO: structure LOP_FORNLOOP (pc 62, target 47)
    v3 = NetworkUtil.readNodeObjectId(streamId)
    v4:readStream(streamId, connection)
    v4:finishRegisterObject(self.unloadingStation, v3)
    if self.loadingStation ~= nil then
      v4 = NetworkUtil.readNodeObjectId(streamId)
      v5:readStream(streamId, connection)
      v5:finishRegisterObject(self.loadingStation, v4)
    end
    v4 = NetworkUtil.readNodeObjectId(streamId)
    v5:readStream(streamId, connection)
    v5:finishRegisterObject(self.storage, v4)
    v8 = streamReadUInt8(streamId)
    -- TODO: structure LOP_FORNPREP (pc 131, target 154)
    v8 = streamReadString(streamId)
    self:setProductionState(v8, true)
    local v12 = streamReadUIntN(streamId, ProductionPoint.PROD_STATUS_NUM_BITS)
    self:setProductionStatus(...)
    -- TODO: structure LOP_FORNLOOP (pc 153, target 132)
    local v5 = streamReadBool(streamId)
    self.palletLimitReached = v5
  end
end
function ProductionPoint:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    local v5 = table.size(self.outputFillTypeIdsDirectSell)
    streamWriteUInt8(...)
    for v6 in pairs(self.outputFillTypeIdsDirectSell) do
      streamWriteUIntN(streamId, v6, FillTypeManager.SEND_NUM_BITS)
    end
    v5 = table.size(self.outputFillTypeIdsAutoDeliver)
    streamWriteUInt8(...)
    for v6 in pairs(self.outputFillTypeIdsAutoDeliver) do
      streamWriteUIntN(streamId, v6, FillTypeManager.SEND_NUM_BITS)
    end
    v5 = NetworkUtil.getObjectId(self.unloadingStation)
    NetworkUtil.writeNodeObjectId(...)
    v3:writeStream(streamId, connection)
    v3:registerObjectInStream(connection, self.unloadingStation)
    if self.loadingStation ~= nil then
      v5 = NetworkUtil.getObjectId(self.loadingStation)
      NetworkUtil.writeNodeObjectId(...)
      v3:writeStream(streamId, connection)
      v3:registerObjectInStream(connection, self.loadingStation)
    end
    v5 = NetworkUtil.getObjectId(self.storage)
    NetworkUtil.writeNodeObjectId(...)
    v3:writeStream(streamId, connection)
    v3:registerObjectInStream(connection, self.storage)
    streamWriteUInt8(streamId, #self.activeProductions)
    -- TODO: structure LOP_FORNPREP (pc 151, target 172)
    streamWriteString(streamId, self.activeProductions[1].id)
    streamWriteUIntN(streamId, self.activeProductions[1].status, ProductionPoint.PROD_STATUS_NUM_BITS)
    -- TODO: structure LOP_FORNLOOP (pc 171, target 152)
    streamWriteBool(streamId, self.palletLimitReached)
  end
end
function ProductionPoint:readUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    self.palletLimitReached = v4
  end
end
function ProductionPoint:writeUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    streamWriteBool(streamId, self.palletLimitReached)
  end
end
function ProductionPoint:setOwnerFarmId(farmId, noEventSend)
  if self.isServer then
    self:claimProductionCosts()
  end
  v3:removeProductionPoint(self)
  local v4 = v4:superClass()
  v4.setOwnerFarmId(self, farmId, noEventSend)
  if farmId == AccessHandler.EVERYONE then
  end
  self.isOwned = true
  if not self.isOwned then
    for v6, v7 in pairs(self.productions) do
      self:setProductionState(v7.id, true)
    end
  end
  if self.unloadingStation ~= nil then
    self.unloadingStation.storeSoldGoods = self.isOwned
    self.unloadingStation.skipSell = self.isOwned
    v3:setOwnerFarmId(farmId)
    if self.unloadingStation.storeSoldGoods then
      v3:addTargetStorage(self.storage)
    else
      v3:removeTargetStorage(self.storage)
    end
  end
  if self.loadingStation ~= nil then
    v3:setOwnerFarmId(farmId)
  end
  if self.storage ~= nil then
    v3:setOwnerFarmId(farmId)
  end
  v3:addProductionPoint(self)
end
function ProductionPoint:palletSpawnRequestCallback(pallet, status, fillType)
  self.waitingForPalletToSpawn = false
  if pallet ~= nil and pallet.addFillUnitFillLevel and fillType ~= nil then
    if self.palletLimitReached then
      self.palletLimitReached = false
      self:raiseDirtyFlags(self.dirtyFlag)
    end
    local v4 = pallet:getFirstValidFillUnitToFill(fillType)
    if v4 then
      local v7 = self:getOwnerFarmId()
      local v9 = v9:getFillLevel(fillType)
      local v5 = pallet:addFillUnitFillLevel(v7, v4, v9, fillType, ToolType.UNDEFINED)
      -- if 0 >= v5 then goto L108 end
      v9 = v9:getFillLevel(fillType)
      v6:setFillLevel(v9 - v5, fillType)
      return
    end
    v7 = v7:getFillTypeNameByIndex(fillType)
    printf("Error: No fillUnitIndex for fillType %s found, pallet:", v7, pallet.xmlFile.filename)
    return
  end
  self.palletSpawnCooldown = g_time + ProductionPoint.NO_PALLET_SPACE_COOLDOWN
  if status == PalletSpawner.PALLET_LIMITED_REACHED then
    -- if v0.palletLimitReached then goto L108 end
    self.palletLimitReached = true
    self:raiseDirtyFlags(self.dirtyFlag)
    return
  end
  v4 = next(self.outputFillTypeIdsToPallets, self.lastPalletFillTypeId)
  self.lastPalletFillTypeId = v4
end
function ProductionPoint:updateFxState()
  if self.isClient then
    if 0 < #self.activeProductions then
      v1:stopSample(self.samples.idle)
      local v1 = v1:getIsSamplePlaying(self.samples.active)
      if not v1 then
        v1:playSample(self.samples.active)
      end
      v1:startAnimations(self.animationNodes)
      v1:startEffects(self.effects)
      return
    end
    v1:stopSample(self.samples.active)
    v1 = v1:getIsSamplePlaying(self.samples.idle)
    if not v1 then
      v1:playSample(self.samples.idle)
    end
    v1:stopAnimations(self.animationNodes)
    v1:stopEffects(self.effects)
  end
end
function ProductionPoint.update(v0, v1)
end
function ProductionPoint:updateProduction()
  if self.lastUpdatedTime == nil then
    self.lastUpdatedTime = g_time
    return
  end
  local dt = MathUtil.clamp(g_time - self.lastUpdatedTime, 0, 30000)
  if 0 < #self.activeProductions then
    -- TODO: structure LOP_FORNPREP (pc 36, target 329)
    -- TODO: structure LOP_FORNPREP (pc 53, target 113)
    local v18 = self:getFillLevel(self.activeProductions[1].inputs[1]["type"])
    self.inputFillLevels[self.activeProductions[1].inputs[1]] = v18
    if self.isOwned then
      -- if v18 >= v0.activeProductions[1].inputs[1].amount * v0.activeProductions[1].cyclesPerMinute * v1 / 60000 * g_currentMission.environment.timeAdjustment then goto L112 end
      -- if v0.activeProductions[1].status == ProductionPoint.PROD_STATUS.MISSING_INPUTS then goto L113 end
      self.activeProductions[1].status = ProductionPoint.PROD_STATUS.MISSING_INPUTS
      v19:productionStatusChanged(self.activeProductions[1], ProductionPoint.PROD_STATUS.MISSING_INPUTS)
      self:setProductionStatus(self.activeProductions[1].id, self.activeProductions[1].status)
    else
      -- TODO: structure LOP_FORNLOOP (pc 112, target 54)
    end
    if v12 and self.isOwned then
      -- TODO: structure LOP_FORNPREP (pc 122, target 169)
      if not v9.outputs[1].sellDirectly then
        v18 = v18:getFreeCapacity(v9.outputs[1]["type"])
        -- if v18 >= v9.outputs[1].amount * v10 then goto L168 end
        -- if v9.status == ProductionPoint.PROD_STATUS.NO_OUTPUT_SPACE then goto L169 end
        v9.status = ProductionPoint.PROD_STATUS.NO_OUTPUT_SPACE
        self:setProductionStatus(v9.id, v9.status)
      else
        -- TODO: structure LOP_FORNLOOP (pc 168, target 123)
      end
    end
    if self.isOwned then
      self.productionCostsToClaim = self.productionCostsToClaim + v9.costsPerActiveMinute * v4
    end
    if self.isOwned then
      -- if not v12 then goto L328 end
      -- if not v13 then goto L328 end
    end
    if self.sharedThroughputCapacity then
      -- if v3 then goto L191 end
    end
    -- TODO: structure LOP_FORNPREP (pc 197, target 237)
    if self.loadingStation ~= nil then
      v19:removeFillLevel(v9.inputs[1]["type"], v9.inputs[1].amount * v10 / 1, self.ownerFarmId)
    elseif self.inputFillLevels[v9.inputs[1]] and 0 < self.inputFillLevels[v9.inputs[1]] then
      v20:setFillLevel(self.inputFillLevels[v9.inputs[1]] - v9.inputs[1].amount * v10 / 1, v9.inputs[1]["type"])
    end
    -- TODO: structure LOP_FORNLOOP (pc 236, target 198)
    if self.isOwned then
      -- TODO: structure LOP_FORNPREP (pc 245, target 289)
      if v9.outputs[1].sellDirectly then
        -- if not v0.isServer then goto L288 end
        self.soldFillTypesToPayOut[v9.outputs[1]["type"]] = self.soldFillTypesToPayOut[v9.outputs[1]["type"]] + v9.outputs[1].amount * v14
      else
        local v19 = v19:getFillLevel(v9.outputs[1]["type"])
        v20:setFillLevel(v19 + v9.outputs[1].amount * v14, v9.outputs[1]["type"])
      end
      -- TODO: structure LOP_FORNLOOP (pc 288, target 246)
    end
    if v9.status ~= ProductionPoint.PROD_STATUS.RUNNING then
      v9.status = ProductionPoint.PROD_STATUS.RUNNING
      v15:productionStatusChanged(v9, v9.status)
      ProductionPointProductionStatusEvent.sendEvent(self, v9.id, v9.status)
    end
    table.clear(self.inputFillLevels)
    -- TODO: structure LOP_FORNLOOP (pc 328, target 37)
  end
  if self.isServer and self.isOwned and self.palletSpawnCooldown < g_time and not self.waitingForPalletToSpawn then
    while true do
      if self.lastPalletFillTypeId ~= nil and self.outputFillTypeIdsDirectSell[self.lastPalletFillTypeId] == nil and self.outputFillTypeIdsAutoDeliver[self.lastPalletFillTypeId] == nil then
        v6 = v6:getFillLevel(self.lastPalletFillTypeId)
        if 0 < v6 and self.outputFillTypeIdsToPallets[self.lastPalletFillTypeId] and self.outputFillTypeIdsToPallets[self.lastPalletFillTypeId].capacity <= v6 then
          break
        end
      end
      v6 = next(self.outputFillTypeIdsToPallets, self.lastPalletFillTypeId)
      self.lastPalletFillTypeId = v6
      if not (self.lastPalletFillTypeId ~= nil) then
        break
      end
    end
    if v4 ~= nil then
      self.waitingForPalletToSpawn = true
      local v7 = self:getOwnerFarmId()
      v5:spawnPallet(v7, v4, self.palletSpawnRequestCallback, self)
    end
  end
  self.lastUpdatedTime = g_time
end
function ProductionPoint.updateTick(v0, dt)
end
function ProductionPoint:draw()
  if not self.mission.controlledVehicle then
  end
  if not v2.rootNode and not self.mission.player then
  end
  local v2, v3, v4 = getWorldTranslation(dt)
  local v5, v6, v7 = getWorldTranslation(self.node)
  local v8 = MathUtil.vector3Length(v2 - v5, v3 - v6, v4 - v7)
  if v8 < 40 then
    local v14 = self:getName()
    local v15 = self:tableId()
    local v12 = string.format("PP %s (%s); ownerFarmId: %s; isOwned: %s", v14, v15, self.ownerFarmId, self.isOwned)
    table.insert(...)
    -- TODO: structure LOP_FORNPREP (pc 63, target 167)
    local v20 = table.hasElement(self.activeProductions, self.productions[1])
    local v16 = string.format(...)
    table.insert(...)
    -- TODO: structure LOP_FORNPREP (pc 91, target 114)
    local v22 = v22:getFillTypeNameByIndex(self.productions[1].inputs[1]["type"])
    v20 = string.format("    i: %s: %.2f", v22, self.productions[1].inputs[1].amount)
    table.insert(...)
    -- TODO: structure LOP_FORNLOOP (pc 113, target 92)
    for v16 = 1, #self.productions[1].outputs do
      v22 = v22:getFillTypeNameByIndex(v13.outputs[v16]["type"])
      if self.outputFillTypeIdsDirectSell[v13.outputs[v16]["type"]] ~= true then
      end
      local v24 = v24(true)
      if self.outputFillTypeIdsAutoDeliver[v17["type"]] ~= true then
      end
      local v25 = v25(true)
      v20 = v20(...)
      table.insert(...)
      -- TODO: structure LOP_FORNLOOP (pc 165, target 120)
    end
    v12 = string.format("productionCostsToClaim : %.1f", self.productionCostsToClaim)
    table.insert(...)
    v12 = string.format("waitingForPalletToSpawn: %s", self.waitingForPalletToSpawn)
    table.insert(...)
    if g_time < self.palletSpawnCooldown then
      v12 = string.format("palletSpawnCooldown: %.1f s", (self.palletSpawnCooldown - g_time) / 1000)
      table.insert(...)
    end
    local v11 = table.concat(v9, "\n")
    self.debugTextElem.text = v11
    v10:update()
    v10:addFrameElement(self.debugTextElem)
    v10:draw()
  end
end
function ProductionPoint:onTimescaleChanged()
  local v3 = v3:getEffectiveTimeScale()
  self.minuteFactorTimescaled = v3 / 1000 / 60
end
function ProductionPoint:claimProductionCosts()
  if self.isOwned and self.isServer and 0 < self.productionCostsToClaim then
    dt:addMoney(-self.productionCostsToClaim, self.ownerFarmId, MoneyType.PRODUCTION_COSTS, true)
  end
  self.productionCostsToClaim = 0
end
function ProductionPoint:updateBalaceDirectlySoldOutputs()
  if self.isOwned and self.isServer then
    for v4, v5 in pairs(self.soldFillTypesToPayOut) do
      local v7 = v7:getIsFillTypeInCategory(v4, "PRODUCT")
      if v7 then
      else
        v7 = v7:getIsFillTypeInCategory(v4, "PRODUCT_BGA")
        if v7 then
        end
      end
      local v10 = v10:getPricePerLiter(v4)
      v7:addMoney(v5 * v10, self.ownerFarmId, v6, true)
      self.soldFillTypesToPayOut[v4] = 0
    end
  end
end
function ProductionPoint:directlySellOutputs()
  for v4 in pairs(self.outputFillTypeIdsDirectSell) do
    local v6 = v6:getFillLevel(v4)
    if not (0 < v6) then
      continue
    end
    local v9 = v9:getPricePerLiter(v4)
    v8:addMoney(ProductionPoint.DIRECT_SELL_PRICE_FACTOR * v6 * v9, self.ownerFarmId, MoneyType.SOLD_PRODUCTS, true)
    v8:setFillLevel(0, v4)
  end
end
function ProductionPoint:loadFromXMLFile(xmlFile, key)
  local v3 = xmlFile:getValue(key .. "#palletSpawnCooldown")
  if v3 then
    self.palletSpawnCooldown = g_time + v3
  end
  local v4 = xmlFile:getValue(key .. "#productionCostsToClaim")
  if not v4 then
  end
  self.productionCostsToClaim = v4
  if self.owningPlaceable.ownerFarmId == AccessHandler.EVERYONE then
    -- TODO: structure LOP_FORNPREP (pc 36, target 47)
    self:setProductionState(self.productions[1].id, true)
    -- TODO: structure LOP_FORNLOOP (pc 46, target 37)
  end
  xmlFile:iterate(key .. ".production", function(self, xmlFile)
    local key = key:getValue(xmlFile .. "#id")
    local v3 = v3:getValue(xmlFile .. "#isEnabled")
    if u1.productionsIdToObj[key] == nil then
      Logging.xmlWarning(u0, "Unknown production id '%s'", key)
      return
    end
    v4:setProductionState(key, v3)
  end)
  xmlFile:iterate(key .. ".directSellFillType", function(self, xmlFile)
    local v4 = v4:getValue(xmlFile)
    local key = key:getFillTypeIndexByName(...)
    if key then
      v3:setOutputDistributionMode(key, ProductionPoint.OUTPUT_MODE.DIRECT_SELL)
    end
  end)
  xmlFile:iterate(key .. ".autoDeliverFillType", function(self, xmlFile)
    local v4 = v4:getValue(xmlFile)
    local key = key:getFillTypeIndexByName(...)
    if key then
      v3:setOutputDistributionMode(key, ProductionPoint.OUTPUT_MODE.AUTO_DELIVER)
    end
  end)
  v4 = v4:loadFromXMLFile(xmlFile, key .. ".storage")
  if not v4 then
    return false
  end
  return true
end
function ProductionPoint:saveToXMLFile(xmlFile, key, usedModNames)
  if g_time < self.palletSpawnCooldown then
    xmlFile:setValue(key .. "#palletSpawnCooldown", self.palletSpawnCooldown - g_time)
  end
  if self.productionCostsToClaim ~= 0 then
    xmlFile:setValue(key .. "#productionCostsToClaim", self.productionCostsToClaim)
  end
  -- TODO: structure LOP_FORNPREP (pc 35, target 62)
  local v9 = string.format("%s.production(%i)", key, 0)
  xmlFile:setValue(v9 .. "#id", self.activeProductions[1].id)
  xmlFile:setValue(v9 .. "#isEnabled", true)
  -- TODO: structure LOP_FORNLOOP (pc 61, target 36)
  xmlFile:setTable(key .. ".directSellFillType", self.outputFillTypeIdsDirectSell, function(self, xmlFile, key)
    local usedModNames = usedModNames:getFillTypeNameByIndex(key)
    v4:setValue(self, usedModNames)
  end)
  xmlFile:setTable(key .. ".autoDeliverFillType", self.outputFillTypeIdsAutoDeliver, function(self, xmlFile, key)
    local usedModNames = usedModNames:getFillTypeNameByIndex(key)
    v4:setValue(self, usedModNames)
  end)
  v5:saveToXMLFile(xmlFile, key .. ".storage", usedModNames)
end
function ProductionPoint:getName()
  if not self.name then
    local dt = dt:getName()
  end
  return dt
end
function ProductionPoint:setProductionState(productionId, state, noEventSend)
  if self.productionsIdToObj[productionId] ~= nil then
    if state then
      local v5 = table.hasElement(self.activeProductions, self.productionsIdToObj[productionId])
      if not v5 then
        self.productionsIdToObj[productionId].status = ProductionPoint.PROD_STATUS.RUNNING
        table.insert(self.activeProductions, self.productionsIdToObj[productionId])
      end
      -- if not v0.isClient then goto L92 end
      v5:playSamples(v4.samples)
      v5:startAnimations(v4.animationNodes)
      v5:startEffects(v4.effects)
    else
      table.removeElement(self.activeProductions, self.productionsIdToObj[productionId])
      self.productionsIdToObj[productionId].status = ProductionPoint.PROD_STATUS.INACTIVE
      if self.isClient then
        v5:stopSamples(self.productionsIdToObj[productionId].samples)
        v5:stopAnimations(self.productionsIdToObj[productionId].animationNodes)
        v5:stopEffects(self.productionsIdToObj[productionId].effects)
      end
    end
    v5:outputsChanged(v4.outputs, state)
    ProductionPointProductionStateEvent.sendEvent(self, productionId, state, noEventSend)
  else
    local v6 = string.format("Error: setProductionState(): unknown productionId '%s'", productionId)
    log(...)
  end
  if self.isClient then
    self:updateFxState()
  end
end
function ProductionPoint:getIsProductionEnabled(productionId)
  return table.hasElement(self.activeProductions, self.productionsIdToObj[productionId])
end
function ProductionPoint:updateInfo(dt, v2)
  dt(self, v2)
  local v5 = self:getOwnerFarmId()
  local v3 = v3:getFarmById(...)
  local v7 = v7:getText("fieldInfo_ownedBy")
  table.insert(v2, {title = v7, text = v3.name})
  if 0 < #self.activeProductions then
    table.insert(v2, self.infoTables.activeProds)
    -- TODO: structure LOP_FORNPREP (pc 53, target 105)
    if not self.activeProductions[1].name then
      local v8 = v8:getFillTypeTitleByIndex(self.activeProductions[1].primaryProductFillType)
    end
    local v16 = self:getProductionStatus(v4.id)
    local v12 = v12:getText(ProductionPoint.PROD_STATUS_TO_L10N[v16])
    table.insert(v2, {title = v8, text = v12})
    -- TODO: structure LOP_FORNLOOP (pc 93, target 54)
  else
    table.insert(v2, self.infoTables.noActiveProd)
  end
  table.insert(v2, self.infoTables.storage)
  -- TODO: structure LOP_FORNPREP (pc 123, target 161)
  local v10 = self:getFillLevel(self.inputFillTypeIdsArray[1])
  if 1 < v10 then
    local v13 = v13:getFillTypeTitleByIndex(self.inputFillTypeIdsArray[1])
    v13 = v13:formatVolume(v10, 0)
    table.insert(v2, {title = v13, text = v13})
  end
  -- TODO: structure LOP_FORNLOOP (pc 160, target 124)
  -- TODO: structure LOP_FORNPREP (pc 166, target 204)
  v10 = self:getFillLevel(self.outputFillTypeIdsArray[1])
  if 1 < v10 then
    v13 = v13:getFillTypeTitleByIndex(self.outputFillTypeIdsArray[1])
    v13 = v13:formatVolume(v10, 0)
    table.insert(v2, {title = v13, text = v13})
  end
  -- TODO: structure LOP_FORNLOOP (pc 203, target 167)
  if not v6 then
    table.insert(v2, self.infoTables.storageEmpty)
  end
  if self.palletLimitReached then
    table.insert(v2, self.infoTables.palletLimitReached)
  end
end
function ProductionPoint:getProductionStatus(productionId)
  return self.productionsIdToObj[productionId].status
end
function ProductionPoint:setOutputDistributionMode(outputFillTypeId, mode, noEventSend)
  if self.outputFillTypeIds[outputFillTypeId] == nil then
    local v6 = v6:getFillTypeNameByIndex(outputFillTypeId)
    printf(...)
    return
  end
  local v4 = tonumber(mode)
  self.outputFillTypeIdsDirectSell[outputFillTypeId] = nil
  self.outputFillTypeIdsAutoDeliver[outputFillTypeId] = nil
  if v4 == ProductionPoint.OUTPUT_MODE.DIRECT_SELL then
    self.outputFillTypeIdsDirectSell[outputFillTypeId] = true
  elseif v4 == ProductionPoint.OUTPUT_MODE.AUTO_DELIVER then
    self.outputFillTypeIdsAutoDeliver[outputFillTypeId] = true
  else
    if v4 ~= ProductionPoint.OUTPUT_MODE.KEEP then
      printf("Error: setOutputDistribution(): Undefined mode '%s'", v4)
      return
    end
  end
  ProductionPointOutputModeEvent.sendEvent(self, outputFillTypeId, mode, noEventSend)
end
function ProductionPoint:setProductionStatus(productionId, status, noEventSend)
  local v4 = tonumber(status)
  self.productionsIdToObj[productionId].status = v4
  ProductionPointProductionStatusEvent.sendEvent(self, productionId, v4, noEventSend)
end
function ProductionPoint:getOutputDistributionMode(outputFillTypeId)
  if self.outputFillTypeIdsDirectSell[outputFillTypeId] ~= nil then
    return ProductionPoint.OUTPUT_MODE.DIRECT_SELL
  end
  if self.outputFillTypeIdsAutoDeliver[outputFillTypeId] ~= nil then
    return ProductionPoint.OUTPUT_MODE.AUTO_DELIVER
  end
  return ProductionPoint.OUTPUT_MODE.KEEP
end
function ProductionPoint:toggleOutputDistributionMode(outputFillTypeId)
  if self.outputFillTypeIds[outputFillTypeId] ~= nil then
    local curMode = self:getOutputDistributionMode(outputFillTypeId)
    local noEventSend = table.hasElement(ProductionPoint.OUTPUT_MODE, curMode + 1)
    if noEventSend then
      self:setOutputDistributionMode(outputFillTypeId, curMode + 1)
      return
    end
    self:setOutputDistributionMode(outputFillTypeId, 0)
  end
end
function ProductionPoint:getFillLevel(fillTypeId)
  if self.outputFillTypeIds[fillTypeId] ~= nil then
    if self.loadingStation ~= nil then
      return mode:getFillLevel(fillTypeId, self.ownerFarmId)
    end
    mode = mode:getFillLevel(fillTypeId)
    return mode
  end
  if self.inputFillTypeIds[fillTypeId] ~= nil then
    mode = mode:getFillLevel(fillTypeId, self.ownerFarmId)
    return mode
  end
  return 0
end
function ProductionPoint:getCapacity(fillTypeId)
  if self.outputFillTypeIds[fillTypeId] ~= nil then
    return mode:getCapacity(fillTypeId)
  end
  if self.inputFillTypeIds[fillTypeId] ~= nil then
    mode = mode:getCapacity(fillTypeId, self.ownerFarmId)
    return mode
  end
  return 0
end
function ProductionPoint.tableId(v0)
  local outputFillTypeId = tostring(v0)
  outputFillTypeId = outputFillTypeId:sub(10)
  return outputFillTypeId
end
function ProductionPoint:toString()
  local v4 = self:getName()
  local v8 = self:getName()
  local v7 = string.len(...)
  local noEventSend = string.rep(" ", 25 - v7)
  local v5 = self:tableId()
  return string.format("PP %s (%s): productions:(%i/%i) - owner: %i", v4 .. noEventSend, v5, #self.activeProductions, #self.productions, self.ownerFarmId)
end
function ProductionPoint:loadSpecValueInputFillTypes(outputFillTypeId, mode)
  self:iterate("placeable.productionPoint.productions.production", function(self, outputFillTypeId)
    mode:iterate(outputFillTypeId .. ".inputs.input", function(self, outputFillTypeId)
      local mode = mode:getValue(outputFillTypeId .. "#fillType")
      if not u1 then
      end
      u1 = noEventSend
      u1[mode] = true
    end)
  end)
  return nil
end
function ProductionPoint:getSpecValueInputFillTypes(outputFillTypeId)
  if self.specs.prodPointInputFillTypes == nil then
    return nil
  end
  local v4 = table.concatKeys(self.specs.prodPointInputFillTypes, " ")
  return mode:getFillTypesByNames(...)
end
function ProductionPoint:loadSpecValueOutputFillTypes(outputFillTypeId, mode)
  self:iterate("placeable.productionPoint.productions.production", function(self, outputFillTypeId)
    mode:iterate(outputFillTypeId .. ".outputs.output", function(self, outputFillTypeId)
      local mode = mode:getValue(outputFillTypeId .. "#fillType")
      if not u1 then
      end
      u1 = noEventSend
      u1[mode] = true
    end)
  end)
  return nil
end
function ProductionPoint:getSpecValueOutputFillTypes(outputFillTypeId)
  if self.specs.prodPointOutputFillTypes == nil then
    return nil
  end
  local v4 = table.concatKeys(self.specs.prodPointOutputFillTypes, " ")
  return mode:getFillTypesByNames(...)
end
function ProductionPoint:interactionTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if not onEnter then
    -- if not v4 then goto L55 end
  end
  if self.mission.player and self.mission.player.rootNode == otherId then
    if onEnter then
      if Platform.gameplay.autoActivateTrigger then
        local v7 = v7:getIsActivatable()
        if v7 then
          v7:run()
          return
        end
      end
      v7:updateText()
      v7:addActivatable(self.activatable)
    end
    if onLeave then
      v7:removeActivatable(self.activatable)
    end
  end
end
function ProductionPoint.openMenu(v0)
  outputFillTypeId:showGui("InGameMenu")
  outputFillTypeId:publish(MessageType.GUI_INGAME_OPEN_PRODUCTION_SCREEN, v0)
end
function ProductionPoint:buyRequest()
  local outputFillTypeId = outputFillTypeId:getIsRunning()
  if outputFillTypeId then
    local v4 = v4:getText("tour_text_feature_deactivated")
    outputFillTypeId:showInfoDialog({text = v4})
    return
  end
  outputFillTypeId = outputFillTypeId:getItemByXMLFilename(self.owningPlaceable.configFileName)
  local mode = mode:getBuyPrice(outputFillTypeId)
  if not mode then
    mode = mode:getPrice()
  end
  if self.owningPlaceable.buysFarmland and self.owningPlaceable.farmlandId ~= nil then
    local noEventSend = noEventSend:getFarmlandById(self.owningPlaceable.farmlandId)
    if noEventSend ~= nil then
      v4 = v4:getFarmlandOwner(self.owningPlaceable.farmlandId)
      local v5 = v5:getFarmId()
      if v4 ~= v5 then
      end
    end
  end
  local v10 = v10:getText("dialog_buyBuildingFor")
  local v11 = self:getName()
  local v12 = v12:formatMoney(mode, 0, true)
  local v9 = string.format(...)
  YesNoDialog.show(...)
end
ProductionPointActivatable = {}
local outputFillTypeId = Class(ProductionPointActivatable)
function ProductionPointActivatable:new()
  local outputFillTypeId = setmetatable({}, u0)
  outputFillTypeId.productionPoint = self
  outputFillTypeId.mission = self.mission
  outputFillTypeId:updateText()
  return outputFillTypeId
end
function ProductionPointActivatable:updateText()
  if not self.productionPoint.isOwned and self.productionPoint.useInteractionTriggerForBuying then
    local outputFillTypeId = outputFillTypeId:getText("action_buyProductionPoint")
    self.activateText = outputFillTypeId
    return
  end
  outputFillTypeId = outputFillTypeId:getText("action_manageProductionPoint")
  self.activateText = outputFillTypeId
end
function ProductionPointActivatable:getIsActivatable()
  local noEventSend = noEventSend:getFarmId()
  return outputFillTypeId:canFarmAccess(noEventSend, self.productionPoint)
end
function ProductionPointActivatable:run()
  local outputFillTypeId = outputFillTypeId:getOwnerFarmId()
  if outputFillTypeId == AccessHandler.EVERYONE and self.productionPoint.useInteractionTriggerForBuying then
    mode:buyRequest()
    return
  end
  local mode = mode:getFarmId()
  if outputFillTypeId == mode then
    mode:openMenu()
  end
end
function ProductionPointActivatable:getDistance(x, y, z)
  if self.productionPoint.interactionTriggerNode ~= nil and self.productionPoint.isOwned and not self.productionPoint.useInteractionTriggerForBuying then
    local v4, v5, v6 = getWorldTranslation(self.productionPoint.interactionTriggerNode)
    return MathUtil.vector3Length(x - v4, y - v5, z - v6)
  end
  return math.huge
end
