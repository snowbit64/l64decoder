-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableGreenhouse = {GROWTH_INTERVAL_SECONDS_MIN = 300, GROWTH_INTERVAL_SECONDS_MAX = 480, WATERING_INTERVAL_SECONDS_MIN = 240, WATERING_INTERVAL_SECONDS_MAX = 360, WATERING_DURATION_SECONDS = 10}
function PlaceableGreenhouse.getRandomGrowthInterval()
  local v1 = math.random(PlaceableGreenhouse.GROWTH_INTERVAL_SECONDS_MIN, PlaceableGreenhouse.GROWTH_INTERVAL_SECONDS_MAX)
  local v4 = math.random(50)
  return v1 * (1000 + v4)
end
function PlaceableGreenhouse.getRandomWateringInterval()
  local v1 = math.random(PlaceableGreenhouse.WATERING_INTERVAL_SECONDS_MIN, PlaceableGreenhouse.WATERING_INTERVAL_SECONDS_MAX)
  local v4 = math.random(50)
  return v1 * (1000 + v4)
end
PlaceableGreenhouse.plantXmlSchema = nil
function PlaceableGreenhouse.prerequisitesPresent(specializations)
  return true
end
function PlaceableGreenhouse.initSpecialization()
  local v0 = XMLSchema.new("greenhousePlant")
  v0:register(XMLValueType.STRING, "greenhousePlant.i3dFilename", "i3d file of plant")
  v0:register(XMLValueType.NODE_INDEX, "greenhousePlant.stages.growing(?)#node", "Growing mesh")
  v0:register(XMLValueType.NODE_INDEX, "greenhousePlant.stages.withered#node", "Withered mesh")
  PlaceableGreenhouse.plantXmlSchema = v0
end
function PlaceableGreenhouse.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "loadPlantFromXml", PlaceableGreenhouse.loadPlantFromXml)
  SpecializationUtil.registerFunction(placeableType, "plantI3DLoadedCallback", PlaceableGreenhouse.plantI3DLoadedCallback)
  SpecializationUtil.registerFunction(placeableType, "addPlantPlace", PlaceableGreenhouse.addPlantPlace)
  SpecializationUtil.registerFunction(placeableType, "updatePlantDistribution", PlaceableGreenhouse.updatePlantDistribution)
  SpecializationUtil.registerFunction(placeableType, "setPlantAtPlace", PlaceableGreenhouse.setPlantAtPlace)
  SpecializationUtil.registerFunction(placeableType, "updatePlantsStage", PlaceableGreenhouse.updatePlantsStage)
end
function PlaceableGreenhouse.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableGreenhouse)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableGreenhouse)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableGreenhouse)
  SpecializationUtil.registerEventListener(placeableType, "onOutputFillTypesChanged", PlaceableGreenhouse)
  SpecializationUtil.registerEventListener(placeableType, "onProductionStatusChanged", PlaceableGreenhouse)
  SpecializationUtil.registerEventListener(placeableType, "onUpdate", PlaceableGreenhouse)
end
function PlaceableGreenhouse:registerXMLPaths(v1)
  self:setXMLSpecializationType("Greenhouse")
  self:register(XMLValueType.STRING, v1 .. ".greenhouse.plants.plant(?)#fillType", "FillType of plant")
  self:register(XMLValueType.STRING, v1 .. ".greenhouse.plants.plant(?)#xmlFilename", "xml file of greenhouse plant")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".greenhouse.plantSpaces.space(?)#node", "node where plant is placed")
  self:register(XMLValueType.BOOL, v1 .. ".greenhouse.plantSpaces.space(?)#useRandomYRot", "node is randomly rotated on the y axis", true)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".greenhouse.plantSpaces.spacesParent(?)#node", "parent node of nodes where plants are placed")
  self:register(XMLValueType.BOOL, v1 .. ".greenhouse.plantSpaces.spacesParent(?)#useRandomYRot", "node is randomly rotated on the y axis", true)
  SoundManager.registerSampleXMLPaths(self, v1 .. ".greenhouse.sounds", "watering")
  EffectManager.registerEffectXMLPaths(self, v1 .. ".greenhouse.effectNodes")
  self:setXMLSpecializationType()
end
function PlaceableGreenhouse:onLoad(savegame)
  self.spec_greenhouse.filltypeIdToPlant = {}
  self.spec_greenhouse.plantPlaces = {}
  self.spec_greenhouse.activeFilltypes = {}
  self.spec_greenhouse.hasWater = true
  self.xmlFile:iterate("placeable.greenhouse" .. ".plants.plant", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#fillType")
    local v3 = v3:getFillTypeIndexByName(v2)
    if v3 ~= nil then
      local v4 = v4:getValue(savegame .. "#xmlFilename")
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L51
      local v5 = Utils.getFilename(v4, u1.baseDirectory)
      v5 = v5:loadPlantFromXml(v5)
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L51
      u2.filltypeIdToPlant[v3] = v5
      return
    end
    Logging.xmlWarning(u0, "Unknown fillType '%s' for plant '%s'", v2, savegame)
  end)
  self.xmlFile:iterate("placeable.greenhouse" .. ".plantSpaces.space", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    local v3 = v3:getValue(savegame .. "#useRandomYRot", true)
    if v2 ~= nil then
      v4:addPlantPlace(v2, v3)
    end
  end)
  self.xmlFile:iterate("placeable.greenhouse" .. ".plantSpaces.spacesParent", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    local v3 = v3:getValue(savegame .. "#useRandomYRot", true)
    local v4 = getNumOfChildren(v2)
    if 0 < v4 then
      -- TODO: structure LOP_FORNPREP (pc 36, target 55)
      local v10 = getChildAt(v2, 0)
      v8:addPlantPlace(v10, v3)
      -- TODO: structure LOP_FORNLOOP (pc 47, target 37)
      return
    end
    Logging.xmlWarning(u1, "No i3d child nodes for '%s'", savegame)
  end)
  if self.isClient then
    self.spec_greenhouse.samples = {}
    local v5 = v5:loadSampleFromXML(self.xmlFile, "placeable.greenhouse" .. ".sounds", "watering", self.baseDirectory, self.components, 1, AudioGroup.ENVIRONMENT, self.i3dMappings, nil)
    self.spec_greenhouse.samples.watering = v5
    local v4 = v4:loadEffect(self.xmlFile, "placeable.greenhouse" .. ".effectNodes", self.components, self, self.i3dMappings)
    self.spec_greenhouse.effects = v4
  end
  v5 = PlaceableGreenhouse.getRandomGrowthInterval()
  v4 = Timer.new(...)
  v2.growthTimer = v4
  v4:setFinishCallback(function(self)
    local v3 = PlaceableGreenhouse.getRandomGrowthInterval()
    self:setDuration(...)
    savegame:updatePlantsStage()
  end)
  v5 = PlaceableGreenhouse.getRandomWateringInterval()
  v4 = Timer.new(...)
  v2.wateringTimer = v4
  v4:setFinishCallback(function(self)
    if u0.hasWater then
      savegame:startEffects(u0.effects)
      savegame:playSample(u0.samples.watering)
      Timer.createOneshot(PlaceableGreenhouse.WATERING_DURATION_SECONDS * 1000, function()
        self:stopEffects(u0.effects)
        self:stopSample(u0.samples.watering)
      end)
      self:start()
    end
  end)
end
function PlaceableGreenhouse:addPlantPlace(node, useRandomYRot)
  local v4 = Utils.getNoNil(useRandomYRot, true)
  if v4 then
    local v9 = math.random()
    setRotation(node, 0, v9 * math.pi * 2, 0)
  end
  table.insert(v3.plantPlaces, {node = node, fillType = nil, stage = nil})
end
function PlaceableGreenhouse:loadPlantFromXml(xmlFilename)
  local v3 = XMLFile.load("plantXml", xmlFilename, PlaceableGreenhouse.plantXmlSchema)
  if v3 ~= nil then
    local v4 = v3:getValue("greenhousePlant.i3dFilename")
    if v4 ~= nil then
      local v5 = Utils.getFilename(v4, self.baseDirectory)
      v5 = self:createLoadingTask()
      local v7 = v7:loadSharedI3DFileAsync({i3dFilename = "", i3dNode = nil, stages = {growing = {}, first = nil, last = nil, withered = nil}, i3dFilename = v5}.i3dFilename, false, false, self.plantI3DLoadedCallback, self, {plant = {i3dFilename = "", i3dNode = nil, stages = {growing = {}, first = nil, last = nil, withered = nil}, i3dFilename = v5}, plantXmlFile = v3, loadingTask = v5})
    end
  end
  return v2
end
function PlaceableGreenhouse:plantI3DLoadedCallback(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    I3DUtil.loadI3DComponents(i3dNode, {})
    I3DUtil.loadI3DMapping(args.plantXmlFile, i3dNode, {}, {})
    args.plant.i3dNode = i3dNode
    args.plantXmlFile:iterate("greenhousePlant.stages.growing", function(self, i3dNode)
      local failedReason = failedReason:getValue(i3dNode .. "#node", nil, u1)
      if failedReason ~= nil then
        local args = getChildIndex(failedReason)
        table.insert(u2.stages.growing, args)
      end
    end)
    args.plant.stages.first = args.plant.stages.growing[1]
    args.plant.stages.last = args.plant.stages.growing[#args.plant.stages.growing]
    local v9 = args.plantXmlFile:getValue("greenhousePlant.stages.withered#node", nil, args.plant.i3dNode)
    if v9 ~= nil then
      local v11 = getChildIndex(v9)
      args.plant.stages.withered = v11
    end
  end
  v5:delete()
  self:finishLoadingTask(v6)
end
function PlaceableGreenhouse:onDelete()
  if self.spec_greenhouse.growthTimer ~= nil then
    v2:delete()
  end
  if v1.wateringTimer ~= nil then
    v2:delete()
  end
  if v1.filltypeIdToPlant ~= nil then
    for v5, v6 in pairs(v1.filltypeIdToPlant) do
      if v6.sharedLoadRequestId ~= nil then
        v7:releaseSharedI3DFile(v6.sharedLoadRequestId)
      end
      if not (v6.i3dNode ~= nil) then
        continue
      end
      delete(v6.i3dNode)
      v6.i3dNode = nil
    end
  end
  v2:deleteEffects(v1.effects)
  v2:deleteSamples(v1.samples)
end
function PlaceableGreenhouse:onFinalizePlacement()
  self.plantDistributionDirty = true
  v1:start()
end
function PlaceableGreenhouse:onUpdate()
  if self.plantDistributionDirty then
    self:updatePlantDistribution()
  end
end
function PlaceableGreenhouse:onOutputFillTypesChanged(outputs, state)
  for v7, v8 in pairs(outputs) do
    if state then
      if not (v3.filltypeIdToPlant[v8["type"]] ~= nil) then
        continue
      end
      v3.activeFilltypes[v8["type"]] = true
    else
      v3.activeFilltypes[v8["type"]] = nil
    end
  end
  v4 = self:getIsSynchronized()
  if v4 then
    self.plantDistributionDirty = true
  end
  self:raiseActive()
end
function PlaceableGreenhouse:onProductionStatusChanged(production, status)
  if status ~= ProductionPoint.PROD_STATUS.MISSING_INPUTS then
  end
  if v3.hasWater ~= not true then
    v3.hasWater = not true
    self:updatePlantsStage()
  end
  if v4 then
    local v5 = next(v3.activeFilltypes)
    if v5 ~= nil then
      v5:startIfNotRunning()
      return
    end
  end
  v5:stop()
end
function PlaceableGreenhouse:updatePlantDistribution()
  local v2 = table.size(self.spec_greenhouse.activeFilltypes)
  local v4 = table.toList(self.spec_greenhouse.activeFilltypes)
  -- TODO: structure LOP_FORNPREP (pc 18, target 31)
  self:setPlantAtPlace(v4[1 % v2 + 1], self.spec_greenhouse.plantPlaces[1])
  -- TODO: structure LOP_FORNLOOP (pc 30, target 19)
  self.plantDistributionDirty = false
  self:updatePlantsStage()
end
function PlaceableGreenhouse:setPlantAtPlace(fillType, plantPlace)
  if plantPlace.fillType ~= fillType then
    if plantPlace.fillType ~= nil then
      local v7 = getNumOfChildren(plantPlace.node)
      -- TODO: structure LOP_FORNPREP (pc 18, target 30)
      v7 = getChildAt(plantPlace.node, v7 - 1)
      delete(v7)
      -- TODO: structure LOP_FORNLOOP (pc 29, target 19)
      plantPlace.fillType = nil
    end
    if v3.filltypeIdToPlant[fillType] ~= nil then
      local v6 = getChildAt(v3.filltypeIdToPlant[fillType].i3dNode, 0)
      local v5 = clone(v6, false, false, false)
      local v9 = getNumOfChildren(v5)
      -- TODO: structure LOP_FORNPREP (pc 57, target 71)
      v9 = getChildAt(v5, v9 - 1)
      link(plantPlace.node, v9, 0)
      -- TODO: structure LOP_FORNLOOP (pc 70, target 58)
      plantPlace.fillType = fillType
      plantPlace.stage = nil
      delete(v5)
    end
  end
end
function PlaceableGreenhouse:updatePlantsStage()
  local v2 = table.size(self.spec_greenhouse.activeFilltypes)
  if v2 == 0 then
    return
  end
  if not v1.hasWater then
    v2:stop()
  else
    v2:start()
  end
  -- TODO: structure LOP_FORNPREP (pc 29, target 100)
  if not v1.hasWater then
  else
    if v1.plantPlaces[1].stage then
      -- if v1.plantPlaces[1].stage + 1 then goto L58 end
    end
    if v6.stages.last < v6.stages.first then
    end
  end
  if v5.stage ~= v7 then
    local v11 = getNumOfChildren(v5.node)
    -- TODO: structure LOP_FORNPREP (pc 81, target 97)
    v11 = getChildAt(v5.node, 0)
    if 0 ~= v7 then
    end
    v12(v13, true)
    -- TODO: structure LOP_FORNLOOP (pc 96, target 82)
    v5.stage = v7
  end
  -- TODO: structure LOP_FORNLOOP (pc 99, target 30)
end
