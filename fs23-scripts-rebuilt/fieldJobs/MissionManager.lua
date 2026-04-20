-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MissionManager = {CATEGORY_FIELD = 1, CATEGORY_TRANSPORT = 2, CATEGORY_GRASS_FIELD = 3, MAX_MISSIONS = 30, MAX_TRANSPORT_MISSIONS = 2, MAX_TRIES_PER_GENERATION = 10, MAX_MISSIONS_PER_GENERATION = 6, MISSION_GENERATION_INTERVAL = 14400000, ACTIVE_CONTRACT_LIMIT = 3, AI_PRICE_MULTIPLIER = 1}
local MissionManager_mt = Class(MissionManager, AbstractManager)
function MissionManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.pendingMissionVehicleFiles = {}
  v1.missionTypes = {}
  v1.missionTypeIdToType = {}
  v1.defaultMissionMapWidth = 512
  v1.defaultMissionMapHeight = 512
  v1.missionMapNumChannels = 4
  v1.numTransportTriggers = 0
  v1.transportTriggers = {}
  return v1
end
function MissionManager:initDataStructures()
  self.missions = {}
  self.nextMissionTypeId = 1
  self.missionVehicles = {}
  self.nextGeneratedMissionId = 1
  self.generationTimer = 0
  self.numTransportMissions = 0
  self.fieldToMission = {}
  self.missionMap = nil
  self.transportMissions = {}
  self.transportMissionNextStartTime = 0
  self.possibleTransportMissionsWeighted = {}
end
function MissionManager:loadMapData(xmlFile)
  local v3 = v3:superClass()
  v3.loadMapData(self)
  v3 = getXMLBool(xmlFile, "map.missionManager#enabled")
  local v2 = Utils.getNoNil(v3, true)
  if not v2 then
    Logging.xmlInfo(xmlFile, "MissionManager: Disabled missions according to configuration")
    return
  end
  self:createMissionMap()
  v3 = v3:getIsServer()
  if v3 then
    v3:addUpdateable(self)
    self.missionNextGenerationTime = g_currentMission.time
    local v4, v5, v6 = v4:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v7, v8, v9 = v7:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v10 = DensityMapModifier.new(v7, v8, v9, g_currentMission.terrainRootNode)
    self.fieldDataDmod = v10
    v10 = DensityMapFilter.new(v4, v5, v6)
    self.fieldDataFilter = v10
    v10:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  end
  v3 = getXMLString(xmlFile, "map.transportMissions#filename")
  if v3 ~= nil then
    v4 = Utils.getFilename(v3, g_currentMission.baseDirectory)
    if v4 ~= nil and v4 ~= "" then
      self:loadTransportMissions(v4)
    end
  end
  v4 = getXMLString(xmlFile, "map.missionVehicles#filename")
  if v4 ~= nil then
    v5 = Utils.getFilename(v4, g_currentMission.baseDirectory)
    if v5 ~= nil then
      self:loadMissionVehicles(v5, g_currentMission.baseDirectory)
    end
  end
  for v8, v9 in ipairs(self.pendingMissionVehicleFiles) do
    self:loadMissionVehicles(v9[1], v9[2])
  end
  v5 = v5:getIsServer()
  if v5 then
    for v8, v9 in ipairs(self.missionTypes) do
      if not (v9.category == MissionManager.CATEGORY_TRANSPORT) then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 165, target 175)
      table.insert(self.possibleTransportMissionsWeighted, v9)
      -- TODO: structure LOP_FORNLOOP (pc 174, target 166)
    end
  end
  v5:subscribe(MessageType.MISSION_DELETED, self.onMissionDeleted, self)
  if g_addTestCommands then
    addConsoleCommand("gsFieldGenerateMission", "Force generating a new mission for given field", "consoleGenerateFieldMission", self)
    addConsoleCommand("gsMissionLoadVehiclesAll", "Loading and unloading all field mission vehicles", "consoleLoadAllFieldMissionVehicles", self)
    addConsoleCommand("gsMissionLoadVehicles", "Load vehicles for a specific mission", "consoleLoadMissionVehicles", self)
    addConsoleCommand("gsMissionHarvestField", "Harvest a field and print the liters", "consoleHarvestField", self)
    addConsoleCommand("gsMissionTestHarvests", "Run an expansive tests for harvest missions", "consoleHarvestTests", self)
  end
end
function MissionManager.loadTransportMissions(v0, v1)
  local v2 = XMLFile.load("TransportMissions", v1)
  if not v2 then
    Logging.error("(%s) File could not be opened", v1)
    return false
  end
  v2:iterate("transportMissions.mission", function(v0, v1)
    local v3 = v3:getFloat(v1 .. "#rewardScale", 1)
    v3 = v3:getString(v1 .. "#name")
    v3 = v3:getString(v1 .. "#title")
    v3 = v3:getString(v1 .. ".description")
    v3 = v3:getInt(v1 .. "#npcIndex")
    local v5 = v5:getInt(v1 .. "#npcIndex")
    v3 = v3:getNPCByIndex(...)
    local v4 = v4:getRandomIndex()
    if v3 ~= nil then
    end
    local v6 = v6:getString(v1 .. "#npcName")
    v4 = v4:getNPCByName(...)
    if v4 ~= nil then
      v2.npcIndex = v4.index
    end
    if v2.name == nil then
      Logging.error("Transport mission definition requires name")
      return
    end
    v2.pickupTriggers = {}
    v2.dropoffTriggers = {}
    v2.objects = {}
    v4:iterate(v1 .. ".pickupTrigger", function(v0, v1)
      local v2 = v2:getString(v1 .. "#index")
      if v2 == nil then
        Logging.error("(%s) Pickup trigger requires valid index", u1)
        return
      end
      local v6 = v6:getFloat(v1 .. "#rewardScale", 1)
      v6 = v6:getString(v1 .. "#title")
      table.insert(u2.pickupTriggers, {index = v2, rewardScale = v6, title = v6})
    end)
    v4:iterate(v1 .. ".dropoffTrigger", function(v0, v1)
      local v2 = v2:getString(v1 .. "#index")
      if v2 == nil then
        Logging.error("(%s) Dropoff trigger requires valid index", u1)
        return
      end
      local v6 = v6:getFloat(v1 .. "#rewardScale", 1)
      v6 = v6:getString(v1 .. "#title")
      table.insert(u2.dropoffTriggers, {index = v2, rewardScale = v6, title = v6})
    end)
    v4:iterate(v1 .. ".object", function(v0, v1)
      local v3 = v3:getString(v1 .. "#filename")
      local v2 = Utils.getFilename(v3, g_currentMission.baseDirectory)
      if v2 == nil then
        Logging.error("(%s) Object requires valid filename", u1)
        return
      end
      local v7 = v7:getInt(v1 .. "#min", 1)
      local v6 = math.max(v7, 1)
      v7 = v7:getInt(v1 .. "#max", 1)
      v6 = math.min(v7, 6)
      v6 = v6:getFloat(v1 .. "#rewardScale", 1)
      v7 = v7:getString(v1 .. "#size", "1 1 1")
      v6 = string.getVectorN(v7, 3)
      v7 = v7:getString(v1 .. "#offset", "0 0 0")
      v6 = string.getVectorN(v7, 3)
      v6 = v6:getString(v1 .. "#title")
      table.insert(u2.objects, {filename = v2, min = v6, max = v6, rewardScale = v6, size = v6, offset = v6, title = v6})
    end)
    table.insert(u2.transportMissions, v2)
  end)
  v2:delete()
  return true
end
function MissionManager:addPendingMissionVehiclesFile(filename, baseDirectory)
  table.insert(self.pendingMissionVehicleFiles, {filename, baseDirectory})
end
function MissionManager.loadMissionVehicles(v0, v1, v2)
  local v3 = XMLFile.load("MissionVehicles", v1)
  if v3 == nil then
    return false
  end
  v3:iterate("missionVehicles.mission", function(v0, v1)
    local v2 = v2:getString(v1 .. "#type")
    if v2 == nil then
      Logging.error("(%s) Property type must exist on each mission", u1)
      return false
    end
    if u2.missionVehicles[v2] == nil then
      u2.missionVehicles[v2] = {}
    end
    v4:iterate(v1 .. ".group", function(v0, v1)
      local v2 = v2:getString(v1 .. "#fieldSize", "medium")
      local v3 = v3:getFloat(v1 .. "#rewardScale", 1)
      local v6 = v6:getString(v1 .. "#variant")
      v6:iterate(v1 .. ".vehicle", function(v0, v1)
        local v3 = v3:getString(v1 .. "#filename")
        local v2 = Utils.getFilename(v3, u1)
        if v2 == nil then
          Logging.error("(%s) Property filename must exist on each vehicle", u2)
          return
        end
        v3 = v3:getItemByXMLFilename(v2)
        if v3 == nil then
          Logging.error("%s: Unable to load store item for '%s'", u2, v2)
          return
        end
        v5:iterate(v1 .. ".configuration", function(v0, v1)
          local v2 = v2:getString(v1 .. "#name")
          local v3 = v3:getInt(v1 .. "#id")
          if v2 ~= nil and v3 ~= nil then
            u1[v2] = v3
          end
        end)
        table.insert(u3, {filename = v2, configurations = {}})
      end)
      if u3[v2] == nil then
        u3[v2] = {}
      end
      table.insert(u3[v2], v5)
      v6 = table.getn(u3[v2])
      v5.identifier = v6
    end)
  end)
  v3:delete()
  return true
end
function MissionManager:unloadMapData()
  v1:unsubscribeAll(self)
  v1:removeUpdateable(self)
  self.numTransportTriggers = 0
  self.transportTriggers = {}
  self.fieldDataDmod = nil
  self.fieldDataFilter = nil
  self.fieldToMission = {}
  self.possibleTransportMissionsWeighted = {}
  self:destroyMissionMap()
  if g_addTestCommands then
    removeConsoleCommand("gsFieldGenerateMission")
    removeConsoleCommand("gsMissionLoadVehiclesAll")
    removeConsoleCommand("gsMissionLoadVehicles")
    removeConsoleCommand("gsMissionHarvestField")
    removeConsoleCommand("gsMissionTestHarvests")
  end
  local v2 = v2:superClass()
  v2.unloadMapData(self)
end
function MissionManager:saveToXMLFile(xmlFilename)
  local xmlFile = createXMLFile("missionXML", xmlFilename, "missions")
  if xmlFile ~= nil then
    for v6, v7 in ipairs(self.missions) do
      local v8 = string.format("missions.mission(%d)", v6 - 1)
      setXMLString(xmlFile, v8 .. "#type", v7["type"].name)
      if v7.activeMissionId ~= nil then
        setXMLInt(xmlFile, v8 .. "#activeId", v7.activeMissionId)
      end
      v7:saveToXMLFile(xmlFile, v8)
    end
    saveXMLFile(xmlFile)
    delete(xmlFile)
  end
  return false
end
function MissionManager:loadFromXMLFile(xmlFilename)
  if xmlFilename == nil then
    return false
  end
  local xmlFile = loadXMLFile("missionsXML", xmlFilename)
  if xmlFile == 0 then
    return false
  end
  while true do
    v4 = string.format("missions.mission(%d)", v3)
    v5 = hasXMLProperty(xmlFile, v4)
    if not v5 then
      break
    end
    v5 = getXMLString(xmlFile, v4 .. "#type")
    v6 = self:getMissionType(v5)
    if v6 ~= nil then
      if g_client == nil then
      end
      v7 = v7(v8, true)
      v7["type"] = v6
      v8 = getXMLInt(xmlFile, v4 .. "#activeId")
      v7.activeMissionId = v8
      self:assignGenerationTime(v7)
      v8 = v7:loadFromXMLFile(xmlFile, v4)
      if not v8 then
        v7:delete()
        -- goto L124  (LOP_JUMP +49)
      end
      if v7.field ~= nil then
        self.fieldToMission[v7.field.fieldId] = v7
      end
      if v7["type"].category == MissionManager.CATEGORY_TRANSPORT then
        self.numTransportMissions = self.numTransportMissions + 1
      end
      v7:register()
      table.insert(self.missions, v7)
    else
      v12 = tostring(v6)
      print("Warning: Mission type '" .. v12 .. "' not found!")
    end
  end
  if 0 < #self.missions then
    for v7, v8 in pairs(g_currentMission.vehicles) do
      if not (v8.activeMissionId ~= nil) then
        continue
      end
      local v9 = self:getMissionForActiveMissionId(v8.activeMissionId)
      if not (v9 ~= nil) then
        continue
      end
      if not (v9.vehicles ~= nil) then
        continue
      end
      table.insert(v9.vehicles, v8)
    end
  end
  delete(xmlFile)
  return true
end
function MissionManager.delete(v0)
end
function MissionManager:update(dt)
  local v2 = v2:getIsServer()
  if v2 and not GS_IS_MOBILE_VERSION then
    local v5 = v5:getEffectiveTimeScale()
    self.generationTimer = self.generationTimer - v5 * dt
    self:updateMissions(dt)
    if #self.missions < MissionManager.MAX_MISSIONS and self.generationTimer < 0 then
      self:generateMissions(dt)
      self.generationTimer = MissionManager.MISSION_GENERATION_INTERVAL
    end
  end
end
function MissionManager:registerMissionType(classObject, name, category, priority)
  if classObject ~= nil and name ~= nil then
    if not category then
    end
    v6.category = v7
    local v7 = math.floor(priority or 1)
    v6.priority = v7
    v6.typeId = v5
    table.insert(self.missionTypes, v6)
    self.nextMissionTypeId = self.nextMissionTypeId + 1
    self.missionTypeIdToType[v5] = v6
  end
end
function MissionManager:unregisterMissionType(name)
  if name ~= nil then
    for v5, v6 in ipairs(self.missionTypes) do
      if not (v6.name == name) then
        continue
      end
      table.remove(self.missionType, v5)
      return
    end
  end
end
function MissionManager:getMissionType(name)
  for v5, v6 in ipairs(self.missionTypes) do
    if not (v6.name == name) then
      continue
    end
    return v6
  end
  return nil
end
function MissionManager:getMissionTypeById(id)
  return self.missionTypeIdToType[id]
end
function MissionManager:getTransportMissionConfig(name)
  for v5, v6 in pairs(self.transportMissions) do
    if not (v6.name == name) then
      continue
    end
    return v6
  end
  return nil
end
function MissionManager:getTransportMissionConfigById(id)
  for v5, v6 in pairs(self.transportMissions) do
    if not (v6.id == id) then
      continue
    end
    return v6
  end
  return nil
end
function MissionManager:hasFarmReachedMissionLimit(farmId)
  for v6, v7 in ipairs(self.missions) do
    if not (v7.farmId == farmId) then
      continue
    end
    if v7.status ~= AbstractMission.STATUS_RUNNING and not (v7.status == AbstractMission.STATUS_FINISHED) then
      continue
    end
  end
  if MissionManager.ACTIVE_CONTRACT_LIMIT > v2 then
  end
  return true
end
function MissionManager:startMission(mission, farmId, spawnVehicles)
  if farmId == FarmManager.SPECTATOR_FARM_ID then
    return
  end
  local v4 = self:hasFarmReachedMissionLimit(farmId)
  if v4 then
    return
  end
  if mission.activeMissionId then
    return
  end
  v4 = v4:getIsServer()
  if v4 then
    v4 = self:canMissionStillRun(mission)
    if not v4 then
      mission:delete()
      return
    end
    v4 = self:getFreeActiveMissionId()
    mission.activeMissionId = v4
    if mission.activeMissionId == 0 then
      return
    end
    mission.farmId = farmId
    v4 = mission:start(spawnVehicles)
    if v4 then
      v4:publish(MissionStartedEvent, mission)
      return
    end
    mission:delete()
    return
  end
  v4 = v4:getServerConnection()
  local v6 = MissionStartEvent.new(mission, farmId, spawnVehicles)
  v4:sendEvent(...)
end
function MissionManager.cancelMission(v0, v1)
  local v2 = v2:getIsServer()
  if v2 then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L31
    -- if v1.status == AbstractMission.STATUS_FINISHED then goto L31 end
    v1:finish(false)
    return
  end
  v2 = v2:getServerConnection()
  local v4 = MissionCancelEvent.new(v1)
  v2:sendEvent(...)
end
function MissionManager:cancelMissionOnField(field)
  if field.currentMission ~= nil then
    v2:delete()
    field.currentMission = nil
    return
  end
  if self.fieldToMission[field.fieldId] ~= nil then
    self.fieldToMission[field.fieldId]:delete()
  end
end
function MissionManager:onMissionDeleted(mission)
  self:deleteMission(mission)
end
function MissionManager:deleteMission(mission)
  if mission.field ~= nil then
    self.fieldToMission[mission.field.fieldId] = nil
  end
  if mission["type"].category == MissionManager.CATEGORY_TRANSPORT then
    self.numTransportMissions = self.numTransportMissions - 1
  end
  self:removeMissionFromList(mission)
end
function MissionManager.removeMissionFromList(v0, v1)
  table.removeElement(g_missionManager.missions, v1)
end
function MissionManager.dismissMission(v0, v1)
  local v2 = v2:getIsServer()
  if v2 then
    v1:dismiss()
    local v4 = MissionDismissEvent.new(v1)
    v2:broadcastEvent(...)
    v1:delete()
    v2:publish(MissionDismissEvent, v1)
    return
  end
  v2 = v2:getServerConnection()
  v4 = MissionDismissEvent.new(v1)
  v2:sendEvent(...)
end
function MissionManager:getActiveMissions()
  return table.ifilter(self.missions, function(self)
    if self.status ~= AbstractMission.STATUS_RUNNING then
    end
    return true
  end)
end
function MissionManager:getIsAnyMissionActive()
  local v3 = self:getActiveMissions()
  local v2 = table.getn(...)
  if 0 >= v2 then
  end
  return true
end
function MissionManager:getMissionsList(farmId)
  return table.ifilter(self.missions, function(self)
    if self.farmId ~= nil and self.farmId ~= u0 then
    end
    return farmId
  end)
end
function MissionManager:getFieldData(field)
  if self.fieldDataDmod == nil then
    local v3, v4, v5 = v3:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v6, v7, v8 = v6:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v9 = DensityMapModifier.new(v6, v7, v8, g_currentMission.terrainRootNode)
    self.fieldDataDmod = v9
    v9 = DensityMapFilter.new(v3, v4, v5)
    self.fieldDataFilter = v9
    v9:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  end
  local v2, v3 = FieldUtil.getMeasurementPositionOfField(field)
  v4:setParallelogramWorldCoords(v2 - 1, v3 - 1, 2, 0, 0, 2, DensityCoordType.POINT_VECTOR_VECTOR)
  v4, v5, v6 = v4:executeGet(self.fieldDataFilter)
  if 0.5 >= v4 / v5 then
  end
  v8 = FieldUtil.getSprayFactor(field)
  v9 = FieldUtil.getPlowFactor(field)
  local limeFactor = FieldUtil.getLimeFactor(field)
  local weedFactor = FieldUtil.getWeedFactor(field)
  local maxWeedState = FieldUtil.getMaxWeedState(field)
  local stubbleFactor = FieldUtil.getStubbleFactor(field)
  local rollerFactor = FieldUtil.getRollerFactor(field)
  return true, v8, v9, limeFactor, weedFactor, maxWeedState, stubbleFactor, rollerFactor
end
function MissionManager:canMissionStillRun(mission)
  if mission.field == nil then
    return true
  end
  local v3, v4, v5, v6, v7, v8, v9, v10 = self:getFieldData(v2)
  local v11, v12, v13, v14 = mission["type"].classObject.canRunOnField(v2, v4, v3, v5, v6, v8, v9, v10)
  if v11 then
    mission.sprayFactor = v4
    mission.fieldSpraySet = v3
    mission.fieldPlowFactor = v5
    mission.fieldState = v12
    mission.growthState = v13
    mission.limeFactor = v6
    mission.weedFactor = v7
    mission.weedState = v14
    mission.stubbleFactor = v9
  end
  return v11
end
function MissionManager:addTransportMissionTrigger(trigger)
  self.transportTriggers[trigger.index] = trigger
  self.numTransportTriggers = self.numTransportTriggers + 1
end
function MissionManager:removeTransportMissionTrigger(trigger)
  if trigger ~= nil then
    self.transportTriggers[trigger.index] = nil
    self.numTransportTriggers = self.numTransportTriggers - 1
  end
end
function MissionManager:updateMissions(dt)
  for v5, v6 in ipairs(self.missions) do
    if not (v6.timeLeft ~= nil) then
      continue
    end
    local v10 = v10:getEffectiveTimeScale()
    v6.timeLeft = v6.timeLeft - dt * v10
  end
  for v5, v6 in ipairs(self.missions) do
    local v7 = v6:getIsAvailable()
    if not not v7 then
      continue
    end
    if not (v6.status == AbstractMission.STATUS_STOPPED) then
      continue
    end
    v6:delete()
    return
  end
end
function MissionManager:generateMissions(dt)
  -- TODO: structure LOP_FORNPREP (pc 16, target 25)
  table.insert({}, 1)
  -- TODO: structure LOP_FORNLOOP (pc 24, target 17)
  Utils.shuffle({})
  for v9, v10 in ipairs({}) do
    if not (self.fieldToMission[g_fieldManager.fields[v10].fieldId] == nil) then
      continue
    end
    if not g_fieldManager.fields[v10].fieldMissionAllowed then
      continue
    end
    local v12 = self:generateNewFieldMission(g_fieldManager.fields[v10])
    if v12 ~= nil then
      v12:register()
      table.insert(self.missions, v12)
      self.fieldToMission[g_fieldManager.fields[v10].fieldId] = v12
      if not (v3 - 1 > 0) then
        break
      end
    end
    if not (v2 - 1 > 0) then
      break
    end
  end
  v6 = table.getn(self.transportMissions)
  if 0 < v6 and self.numTransportMissions < MissionManager.MAX_TRANSPORT_MISSIONS then
    Utils.shuffle(self.possibleTransportMissionsWeighted)
    for v9, v10 in pairs(self.possibleTransportMissionsWeighted) do
      local v11 = v10.classObject.canRun()
      if not v11 then
        continue
      end
      if g_client == nil then
      end
      v12 = v12(v13, true)
      v12["type"] = v10
      local v13 = v12:init()
      if v13 then
        self:assignGenerationTime(v12)
        v12:register()
        self.numTransportMissions = self.numTransportMissions + 1
        table.insert(self.missions, v12)
        break
      else
        v12:delete()
      end
    end
  end
  if v4 then
    v6:publish(MessageType.MISSION_GENERATED)
  end
end
function MissionManager:generateNewFieldMission(field)
  if not field.fieldMissionAllowed then
    return nil
  end
  if field.currentMission == nil then
    local v2 = field:getIsAIActive()
    -- if v2 then goto L15 end
  end
  return nil
  if field.fruitType == FruitType.GRASS then
  end
  local v3, v4, v5, v6, v7, v8, v9, v10 = self:getFieldData(field)
  for v14, v15 in ipairs(self.missionTypes) do
    if not (v15.category == v2) then
      continue
    end
    local v16, v17, v18, v19, v20 = v15.classObject.canRunOnField(field, v4, v3, v5, v6, v8, v9, v10)
    if not v16 then
      continue
    end
    if g_client == nil then
    end
    local v21 = v21(v22, true)
    v21["type"] = v15
    local v22 = v21:init(field, v4, v3, v5, v17, v18, v6, v7, v19, v9, v10, v20)
    if v22 then
      self:assignGenerationTime(v21)
      return v21
    end
    v21:delete()
  end
  return nil
end
function MissionManager:assignGenerationTime(mission)
  mission.generationTime = self.nextGeneratedMissionId
  self.nextGeneratedMissionId = self.nextGeneratedMissionId + 1
end
function MissionManager:getRandomVehicleGroup(missionType, fieldSize, variant)
  if self.missionVehicles[missionType] == nil then
    return nil, 1
  end
  if v4[fieldSize] == nil then
    return nil, 1
  end
  local v6 = table.ifilter(v5, function(self)
    if u0 ~= nil and self.variant ~= u0 then
    end
    return missionType
  end)
  local v7 = table.getRandomElement(v6)
  if v7 == nil then
    return nil, 1
  end
  return v7.vehicles, v7.identifier
end
function MissionManager:getVehicleGroupFromIdentifier(missionType, fieldSize, identifier)
  if self.missionVehicles[missionType] == nil then
    return nil, 1
  end
  if v4[fieldSize] == nil then
    return nil, 1
  end
  if v5[identifier] == nil then
    return nil, 1
  end
  return v6.vehicles, v6.rewardScale
end
function MissionManager:getFreeActiveMissionId()
  -- TODO: structure LOP_FORNPREP (pc 6, target 15)
  local v4 = self:getMissionForActiveMissionId(1)
  if v4 == nil then
    return 1
  end
  -- TODO: structure LOP_FORNLOOP (pc 14, target 7)
  return 0
end
function MissionManager:validateMissionOnField(field, event, canRunCheck)
  if self.fieldToMission[field.fieldId] == nil then
    return
  end
  local v5 = v4:validate(event)
  if not v5 then
    v5 = v4:delete()
    return v5
  end
  if canRunCheck then
    v5 = self:canMissionStillRun(v4)
    if not v5 then
      v4:delete()
    end
  end
end
function MissionManager:createMissionMap()
  local v1 = createBitVectorMap("MissionAccessMap")
  self.missionMap = v1
  loadBitVectorMapNew(self.missionMap, self.defaultMissionMapWidth, self.defaultMissionMapHeight, self.missionMapNumChannels, false)
  local v1, v2 = getBitVectorMapSize(self.missionMap)
  self.missionMapWidth = v1
  self.missionMapHeight = v2
  v1 = v1:getIsServer()
  if v1 then
    v1:setGrowthMask(self.missionMap, 0, self.missionMapNumChannels)
  end
end
function MissionManager:destroyMissionMap()
  local v1 = v1:getIsServer()
  if v1 and self.growthSystem ~= nil then
    v1:resetGrowthMask()
  end
  if self.missionMap ~= nil then
    delete(self.missionMap)
    self.missionMap = nil
  end
end
function MissionManager:setMissionMapForMission(mission, value)
  local v6 = getNumOfChildren(mission.field.fieldDimensions)
  -- TODO: structure LOP_FORNPREP (pc 10, target 76)
  v6 = getChildAt(mission.field.fieldDimensions, 0)
  local v7 = getChildAt(v6, 0)
  local v8 = getChildAt(v6, 1)
  local v9, v10, v11 = getWorldTranslation(v7)
  local v12, v13, v14 = getWorldTranslation(v6)
  local v15, v16, v17 = getWorldTranslation(v8)
  local v18, v19 = self:convertWorldToAccessPosition(v9, v11)
  local v20, v21 = self:convertWorldToAccessPosition(v12, v14)
  v20, v21 = self:convertWorldToAccessPosition(v15, v17)
  setBitVectorMapParallelogram(self.missionMap, v18, v19, v20 - v18, v21 - v19, v20 - v18, v21 - v19, 0, self.missionMapNumChannels, value)
  -- TODO: structure LOP_FORNLOOP (pc 75, target 11)
end
function MissionManager:addMissionToMissionMap(mission)
  if self.missionMap ~= nil then
    self:setMissionMapForMission(mission, mission.activeMissionId)
  end
end
function MissionManager:removeMissionFromMissionMap(mission)
  if self.missionMap ~= nil then
    self:setMissionMapForMission(mission, 0)
  end
end
function MissionManager:convertWorldToAccessPosition(x, z)
  local v4 = math.floor(self.missionMapWidth * (x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize)
  local v5 = math.floor(self.missionMapHeight * (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize)
  return v4
end
function MissionManager:getMissionMapValue(x, z)
  if self.missionMap == nil then
    return 0
  end
  local v3, v4 = self:convertWorldToAccessPosition(x, z)
  return getBitVectorMapPoint(self.missionMap, v3, v4, 0, self.missionMapNumChannels)
end
function MissionManager:getMissionForActiveMissionId(activeMissionId)
  for v5, v6 in ipairs(self.missions) do
    if not (v6.activeMissionId == activeMissionId) then
      continue
    end
    return v6
  end
  return nil
end
function MissionManager:getIsMissionWorkAllowed(farmId, x, z, workAreaType)
  local mission = self:getMissionAtWorldPosition(x, z)
  if mission ~= nil and mission.farmId == farmId then
    if workAreaType ~= nil then
      -- if not v5.workAreaTypes[v4] then goto L19 end
    end
    return true
  end
  return false
end
function MissionManager:getMissionAtWorldPosition(x, z)
  local missionId = self:getMissionMapValue(x, z)
  if 0 < missionId then
    return self:getMissionForActiveMissionId(missionId)
  end
  return nil
end
function MissionManager:consoleGenerateFieldMission(fieldId)
  local v2 = tonumber(fieldId)
  v2 = v2:getFieldByIndex(v2)
  if v2 == nil then
    return "Error: Field not found"
  end
  v3:cancelMissionOnField(v2)
  local v3 = self:generateNewFieldMission(v2)
  if v3 == nil then
    return "Error: Could not generate a mission"
  end
  v3:register()
  table.insert(self.missions, v3)
  self.fieldToMission[v2.fieldId] = v3
  for v8, v9 in pairs(v3.vehiclesToLoad) do
    table.insert(v4, v9.filename)
    for v13, v14 in pairs(v9.configurations) do
      local v17 = string.format("  %s: %d", v13, v14)
      table.insert(...)
    end
  end
  v8 = table.concat(v4, "\n")
  v5 = string.format(...)
  return v5
end
function MissionManager:consoleLoadMissionVehicles(missionTypeName, fieldSize, groupIndex)
  if self.missionVehicles[missionTypeName or ""] == nil then
    local v7 = tostring(missionTypeName)
    return string.format("No mission vehicles for mission type '%s' found. %s", v7, "gsMissionLoadVehicles <missionType> <groupIndex>")
  end
  if v4[fieldSize] == nil then
    local v8 = tostring(fieldSize)
    return string.format("No group for field size '%s' found. %s", v8, "gsMissionLoadVehicles <missionType> <groupIndex>")
  end
  v6 = tonumber(groupIndex)
  if v5[v6] == nil then
    local v9 = tostring(v6)
    v7 = string.format("No vehicles for group index '%s' found. %s", v9, "gsMissionLoadVehicles <missionType> <groupIndex>")
    return v7
  end
  for v12, v13 in ipairs(v6.vehicles) do
    table.insert(v8, v13)
  end
  self:consoleLoadMissionNextVehicle(nil, nil, v8)
end
function MissionManager.consoleLoadMissionNextVehicle(v0, v1, v2, v3)
  local v4 = table.remove(v3, 1)
  if v4 == nil then
    print("Loaded all vehicles for mission type")
    return
  end
  local v6 = v6:getItemByXMLFilename(v4.filename)
  if v6 == nil then
    Logging.error("Trying to load invalid store item '%s' for mission.", v4.filename)
    return false
  end
  v7:addTask(function()
    local v0 = StoreItemUtil.getSizeValues(u0.xmlFilename, "vehicle", u0.rotation, u1.configurations)
    local v3, v4, v5, v6, v7, v8 = PlacementUtil.getPlace(g_currentMission.storeSpawnPlaces, v0, g_currentMission.usedStorePlaces)
    if v3 == nil then
      Logging.error("No space for vehicle '%s'.", u2)
      return false
    end
    local v9 = MathUtil.getYRotationFromDirection(v6.dirPerpX, v6.dirPerpZ)
    PlacementUtil.markPlaceUsed(v2, v6, v7)
    VehicleLoadingUtil.loadVehicle(u2, {x = v3, z = v5, yOffset = 0, yRot = v9 + u0.rotation}, true, 0, Vehicle.PROPERTY_STATE_OWNED, g_currentMission.player.farmId, u1.configurations, nil, u3.consoleLoadMissionNextVehicle, u3, u4)
  end)
end
function MissionManager:consoleLoadAllFieldMissionVehicles()
  for v5, v6 in pairs(self.missionVehicles) do
    for v10, v11 in pairs(v6) do
      for v15, v16 in pairs(v11) do
        for v20, v21 in pairs(v16.vehicles) do
          table.insert(v1, {filename = v21.filename, configurations = v21.configurations})
        end
      end
    end
  end
  printf("%d vehicles to load", #v1)
  self:loadNextVehicle(nil, nil, {vehiclesToLoad = v1})
end
function MissionManager:loadNextVehicle(previousVehicle, vehicleLoadState, arguments)
  if previousVehicle ~= nil and vehicleLoadState ~= VehicleLoadingUtil.VEHICLE_LOAD_OK then
    Logging.error("loading '%s'", previousVehicle.configFileName)
  end
  if previousVehicle ~= nil then
    v4:removeVehicle(previousVehicle)
  end
  if #arguments.vehiclesToLoad == 0 then
    log("finishied loading all mission vehicles")
    return
  end
  local v5 = table.remove(v4, 1)
  local v7 = v7:getItemByXMLFilename(v5.filename)
  if v7 == nil then
    Logging.error("Trying to load invalid store item '%s' for mission.", v5.filename)
  end
  local v8 = StoreItemUtil.getSizeValues(v7.xmlFilename, "vehicle", v7.rotation, v5.configurations)
  local v11, v12, v13, v14, v15, v16 = PlacementUtil.getPlace(g_currentMission.storeSpawnPlaces, v8, g_currentMission.usedStorePlaces)
  local v17 = MathUtil.getYRotationFromDirection(v14.dirPerpX, v14.dirPerpZ)
  VehicleLoadingUtil.loadVehicle(v6, {x = v11, z = v13, yOffset = 0, yRot = v17 + v7.rotation}, true, 0, Vehicle.PROPERTY_STATE_MISSION, self.farmId, v5.configurations, nil, self.loadNextVehicle, self, arguments)
  PlacementUtil.markPlaceUsed(g_currentMission.usedStorePlaces, v14, v15)
  printf("loading vehicle %s, %d left", v6, #v4)
end
function MissionManager.testHarvestField(v0, v1)
  local v3 = getNumOfChildren(v1.fieldDimensions)
  -- TODO: structure LOP_FORNPREP (pc 9, target 68)
  local v7 = getChildAt(v1.fieldDimensions, 1 - 1)
  local v8 = getChildAt(v7, 0)
  local v9 = getChildAt(v7, 1)
  local v10, v11, v12 = getWorldTranslation(v8)
  local v13, v14, v15 = getWorldTranslation(v7)
  local v16, v17, v18 = getWorldTranslation(v9)
  local v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30 = FSDensityMapUtil.cutFruitArea(v1.fruitType, v10, v12, v13, v15, v16, v18, true, false, nil)
  local v31 = v31:getHarvestScaleMultiplier(v1.fruitType, v21, v22, v23, v24, v25, v26)
  -- TODO: structure LOP_FORNLOOP (pc 67, target 10)
  local v4 = v4:getFruitTypeByIndex(v1.fruitType)
  v8 = v8:getFruitPixelsToSqm()
  return (0 + v19 * v31) * v8 * v4.literPerSqm
end
function MissionManager:consoleHarvestField(fieldId)
  local v2 = tonumber(fieldId)
  v2 = v2:getFieldByIndex(v2)
  if v2 == nil then
    return "Field not found"
  end
  if self.fieldToMission[fieldId] == nil then
    return "No harvest mission to compare to"
  end
  if v3["type"].name ~= "harvest" and v3["type"].name ~= "mow_bale" then
    return "No harvest mission to compare to"
  end
  local v6 = v3:getMaxCutLiters()
  log(...)
  log("Field area in m2", v2.fieldArea * 10000)
  local v4 = self:testHarvestField(v2)
  log("Liters", v4)
  if v3["type"].name == "mow_bale" then
    log("It is a baling mission. Expected number of bales:", v3.expectedLiters / 4000, v3.expectedLiters / 4000 * 0.95 * 0.95)
    local v10 = math.floor(v4 / 4000)
    log(...)
  end
end
function MissionManager:consoleHarvestTests(fieldId)
  if fieldId ~= nil then
    local v2 = tonumber(fieldId)
  end
  for v7, v8 in pairs(g_fieldManager.fields) do
    if not v8.fieldMissionAllowed then
      continue
    end
    local v9 = v8:getIsAIActive()
    if not v9 then
      continue
    end
    if fieldId ~= nil and not (v8.fieldId == fieldId) then
      continue
    end
    for v12, v13 in ipairs(g_fieldManager.availableFruitTypeIndices) do
      local v14 = v14:getFruitTypeByIndex(v13)
      if not (v13 ~= FruitType.POTATO) then
        continue
      end
      if not (v13 ~= FruitType.SUGARBEET) then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 51, target 179)
      for v20 = 0, 5 do
        for v23 = 0, 1 do
          for v26 = 0, 3 do
            for v29 = 0, 2 do
              for v32 = 0, 1 do
                v33:setFieldFruit(v8, v14, v17, 1, v29, v23, v20, v26, v32)
                v33:cancelMissionOnField(v8)
                local v33 = self:generateNewFieldMission(v8)
                if v33 ~= nil and v33["type"].name == "harvest" then
                  v33:register()
                  table.insert(self.missions, v33)
                  self.fieldToMission[v8.fieldId] = v33
                  local v34 = self:testHarvestField(v8)
                  local v35 = v33:getMaxCutLiters()
                  if v34 < v35 * 0.95 then
                    log("Error: Found wrong field setup. Field", v8.fieldId, "expected", v35, "got", v34, "for", v14.name, v17, 1, v29, v23, v20, v26, false)
                  else
                    log("OK: Found correct field setup. Field", v8.fieldId, "expected", v35, "got", v34, "for", v14.name, v17, 1, v29, v23, v20, v26, false)
                  end
                end
                -- TODO: structure LOP_FORNLOOP (pc 173, target 72)
              end
            end
          end
        end
      end
    end
  end
  log("Total harvests:", v2)
  log("Total failed:", v3)
end
local v1 = MissionManager.new()
g_missionManager = v1
