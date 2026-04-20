-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SnowSystem = {MAX_HEIGHT = 0.5, MIN_LAYER_HEIGHT = 0.06, MAX_MS_PER_FRAME = 1, MAX_MS_PER_FRAME_SLEEPING = 3, DELTA_REMOVE_ALL = -100}
local SnowSystem_mt = Class(SnowSystem)
function SnowSystem.new(mission, isServer, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.mission = mission
  v3.isServer = isServer
  v3.updater = nil
  v3.updateQueue = {}
  v3.height = 0
  v3.exactHeight = 0
  v3.snowShaderValue = 0
  v3.vehicleWakeUpIndex = 0
  v3.vehicleWakeUpDelay = 500
  v3.vehicleWakeUpTimer = 0
  v3.itemWakeUpIndex = 0
  v3.itemWakeUpDelay = 100
  v3.itemWakeUpTimer = 0
  setSharedShaderParameter(Shader.PARAM_SHARED_SNOW, 0)
  if v3.isServer then
    v4:subscribe(MessageType.SLEEPING, v3.onSleepChanged, v3)
  end
  return v3
end
function SnowSystem.delete(v0)
  v1:unsubscribeAll(v0)
  if g_addCheatCommands then
    removeConsoleCommand("gsSnowAdd")
    removeConsoleCommand("gsSnowSet")
    removeConsoleCommand("gsSnowReset")
    removeConsoleCommand("gsSnowShaderSet")
    removeConsoleCommand("gsSnowAddSalt")
  end
end
function SnowSystem:loadMapData(xmlFile, missionInfo, baseDirectory)
  self.missionInfo = missionInfo
  self.environment = self.mission.environment
  self.indoorMask = self.mission.indoorMask
  if g_addCheatCommands then
    local v4 = v4:getIsServer()
    if v4 then
      addConsoleCommand("gsSnowAdd", "Add snow", "consoleCommandAddSnow", self)
      addConsoleCommand("gsSnowSet", "Set snow", "consoleCommandSetSnow", self)
      addConsoleCommand("gsSnowReset", "Reset snow", "consoleCommandResetSnow", self)
      addConsoleCommand("gsSnowShaderSet", "Force snow shader value for map objects", "consoleCommandSetSnowShader", self)
      addConsoleCommand("gsSnowAddSalt", "Salt around player", "consoleCommandSalt", self)
    end
  end
end
function SnowSystem:loadFromXMLFile(filename)
  setDensityMapHeightUpdateApplyFinishedCallback(self.updater, "onApplicationFinished", self)
  local xmlFile = XMLFile.load("environment", filename)
  if xmlFile ~= nil then
    local v4 = xmlFile:getFloat("environment.snow#physicalHeight", self.height)
    local v3 = MathUtil.round(v4, 2)
    self.height = v3
    v3 = xmlFile:getFloat("environment.snow#height", self.exactHeight)
    self.exactHeight = v3
    xmlFile:iterate("environment.snow.queue.delta", function(self, filename)
      local xmlFile = xmlFile:getFloat(filename)
      table.insert(u1.updateQueue, xmlFile)
    end)
    v3 = xmlFile:getFloat("environment.snow.queue#current")
    self.currentApplyingDelta = v3
    xmlFile:delete()
  end
  if g_currentMission.environment.weather.snowHeight == 0 and self.exactHeight ~= 0 then
    Logging.info("Weather indicates there must be no snow, snow system disagrees. Resetting snow.")
    self:setSnowHeight(0)
  end
  self:updateSnowShader()
end
function SnowSystem:saveToXMLFile(file, key)
  local xmlFile = XMLFile.wrap(file)
  xmlFile:setFloat(key .. "#physicalHeight", self.height)
  xmlFile:setFloat(key .. "#height", self.exactHeight)
  if self.currentApplyingDelta ~= nil then
    xmlFile:setFloat(key .. ".queue#current", self.currentApplyingDelta)
  end
  xmlFile:setSortedTable("environment.snow.queue.delta", self.updateQueue, function(self, file)
    key:setFloat(self, file)
  end)
  xmlFile:delete()
end
function SnowSystem:saveState(directory)
  saveDensityMapHeightUpdaterStateToFile(self.updater, directory .. "/snow_state.xml")
end
function SnowSystem:onTerrainLoad(terrainRootNode)
  local v3 = v3:getDensityMapHeightTypeIndexByFillTypeIndex(FillType.SNOW)
  self.snowHeightTypeIndex = v3
  local v7 = getDensityMapHeightFirstChannel(self.mission.terrainDetailHeightId)
  local v8 = getDensityMapHeightNumChannels(self.mission.terrainDetailHeightId)
  local v5 = DensityMapModifier.new(...)
  {height = {}}.height.modifierHeight = v5
  v5 = DensityMapFilter.new({height = {}}.height.modifierHeight)
  {height = {}}.height.filterHeight = v5
  v5 = DensityMapFilter.new(self.mission.terrainDetailHeightId, g_densityMapHeightManager.heightTypeFirstChannel, g_densityMapHeightManager.heightTypeNumChannels)
  {height = {}}.height.filterType = v5
  v5 = DensityMapFilter.new(self.mission.terrainDetailHeightId, g_densityMapHeightManager.heightTypeFirstChannel, g_densityMapHeightManager.heightTypeNumChannels)
  {height = {}}.height.filterSnowType = v5
  v4:setValueCompareParams(DensityValueCompareType.EQUAL, self.snowHeightTypeIndex)
  v5 = DensityMapModifier.new(self.mission.terrainDetailHeightId, g_densityMapHeightManager.heightTypeFirstChannel, g_densityMapHeightManager.heightTypeNumChannels)
  {height = {}, fillType = {}}.fillType.modifierType = v5
  v7 = getDensityMapHeightFirstChannel(self.mission.terrainDetailHeightId)
  v8 = getDensityMapHeightNumChannels(self.mission.terrainDetailHeightId)
  v5 = DensityMapFilter.new(...)
  {height = {}, fillType = {}}.fillType.filterHeight = v5
  v5 = DensityMapFilter.new({height = {}, fillType = {}}.fillType.modifierType)
  {height = {}, fillType = {}}.fillType.filterType = v5
  local v4, v5, v6 = v4:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
  v8 = DensityMapModifier.new(v4, v5, v6, self.mission.terrainRootNode)
  {height = {}, fillType = {}, sprayLevel = {}}.sprayLevel.modifier = v8
  self.modifiers = {height = {}, fillType = {}, sprayLevel = {}}
  self.layerHeight = 1 / g_densityMapHeightManager.heightToDensityValue
  if self.isServer then
    self.updater = g_densityMapHeightManager.terrainDetailHeightUpdater
    setDensityMapHeightUpdateType(self.updater, self.snowHeightTypeIndex)
    setDensityMapHeightUpdateApplyMaxTimePerFrame(self.updater, SnowSystem.MAX_MS_PER_FRAME)
    v7 = v7:hasMask()
    if v7 then
      local v7, v8, v9 = v7:getDensityMapData()
      setDensityMapHeightUpdateApplyBlockMask(self.updater, v7, v8, v9)
    end
    if self.missionInfo.isValid and self.missionInfo.densityMapRevision == g_densityMapRevision then
      loadDensityMapHeightUpdaterStateFromFile(self.updater, self.missionInfo.savegameDirectory .. "/snow_state.xml")
    end
  end
end
function SnowSystem:update(dt)
  if 0 < self.vehicleWakeUpIndex then
    self.vehicleWakeUpTimer = self.vehicleWakeUpTimer + dt
    if self.vehicleWakeUpDelay < self.vehicleWakeUpTimer then
      if self.mission.vehicles[self.vehicleWakeUpIndex] == nil then
        self.vehicleWakeUpIndex = 0
      else
        self.mission.vehicles[self.vehicleWakeUpIndex]:wakeUp()
        self.vehicleWakeUpIndex = self.vehicleWakeUpIndex + 1
      end
      self.vehicleWakeUpTimer = 0
    end
  end
  if 0 < self.itemWakeUpIndex then
    self.itemWakeUpTimer = self.itemWakeUpTimer + dt
    if self.itemWakeUpDelay < self.itemWakeUpTimer then
      if self.mission.itemSystem.sortedItemsToSave[self.itemWakeUpIndex] == nil then
        self.itemWakeUpIndex = 0
      else
        if self.mission.itemSystem.sortedItemsToSave[self.itemWakeUpIndex].item.wakeUp ~= nil then
          v3:wakeUp()
        end
        self.itemWakeUpIndex = self.itemWakeUpIndex + 1
      end
      self.itemWakeUpTimer = 0
    end
  end
end
function SnowSystem:applySnow(delta)
  if not self.isServer then
    return
  end
  if self.currentApplyingDelta ~= nil then
    if 0 < #self.updateQueue then
      if self.updateQueue[#self.updateQueue] <= SnowSystem.DELTA_REMOVE_ALL then
        -- if v1 >= 0 then goto L40 end
      else
        self.updateQueue[#self.updateQueue] = self.updateQueue[#self.updateQueue] + delta
      end
    end
    -- if v2 then goto L53 end
    self.updateQueue[#self.updateQueue + 1] = delta
    return
  end
  self:startApplication(delta)
end
function SnowSystem:startApplication(delta)
  local v2, v3, v4 = v2:getDensityMapData()
  if delta < 0 then
  end
  self.currentApplyingDelta = delta
  if delta < 0 then
  end
  local v18 = self:getMaxUpdateTime()
  applyDensityMapHeightUpdate(...)
end
function SnowSystem:onApplicationFinished()
  self.currentApplyingDelta = nil
  if 0 < self.currentApplyingDelta then
    self:removeSnowUnderObjects(self.currentApplyingDelta)
  else
    self:onHeightChanged(self.currentApplyingDelta)
  end
  if 0 < #self.updateQueue then
    table.remove(self.updateQueue, 1)
    self:startApplication(self.updateQueue[1])
  end
end
function SnowSystem:onHeightChanged(delta)
  self.vehicleWakeUpIndex = 1
  self.itemWakeUpIndex = 1
  local v5 = math.max(self.height / SnowSystem.MAX_HEIGHT, 0)
  local v6 = math.max(self.height, 0)
  v2:publish(...)
end
function SnowSystem:removeSnowUnderObjects(delta)
  for v5, v6 in pairs(self.mission.itemSystem.itemsToSave) do
    if not (v6.item.doDensityMapItemAreaUpdate ~= nil) then
      continue
    end
    v7:doDensityMapItemAreaUpdate(self.removeSnow, self, delta / self.layerHeight)
  end
  for v5, v6 in pairs(self.mission.vehicles) do
    if not (v6.spec_wheels ~= nil) then
      continue
    end
    for v10, v11 in pairs(v6.spec_wheels.wheels) do
      local v13 = math.min(0.5, 0.5 * v11.width)
      local v14, v15, v16 = localToLocal(v11.driveNode, v11.repr, 0, 0, 0)
      local v17, v18, v19 = localToWorld(v11.repr, v14 + 0.5 * v11.width, 0, v16 - v13)
      local v20, v21, v22 = localToWorld(v11.repr, v14 - 0.5 * v11.width, 0, v16 - v13)
      local v23, v24, v25 = localToWorld(v11.repr, v14 + 0.5 * v11.width, 0, v16 + v13)
      self:removeSnow(v17, v19, v20, v22, v23, v25, delta / self.layerHeight)
    end
  end
  self:onHeightChanged(delta)
end
function SnowSystem:saltArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  self.modifiers.height.modifierHeight:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  self.modifiers.height.filterType:setValueCompareParams(DensityValueCompareType.EQUAL, self.snowHeightTypeIndex)
  self.modifiers.height.filterHeight:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
  local v11, v12, v13 = self.modifiers.height.modifierHeight:executeSet(0, self.modifiers.height.filterType, self.modifiers.height.filterHeight)
  self.modifiers.sprayLevel.modifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  self.modifiers.sprayLevel.modifier:executeSet(0)
  if v11 ~= 0 then
    self.modifiers.fillType.modifierType:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    self.modifiers.height.filterHeight:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    self.modifiers.fillType.modifierType:executeSet(0, self.modifiers.height.filterHeight)
  end
  return v12, v13
end
function SnowSystem:getSnowHeightAtArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  self.modifiers.height.modifierHeight:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  self.modifiers.height.filterType:setValueCompareParams(DensityValueCompareType.EQUAL, self.snowHeightTypeIndex)
  local v10, v11, v12 = self.modifiers.height.modifierHeight:executeGet(self.modifiers.height.filterType)
  if v11 == 0 then
    return 0
  end
  return v10 / v11 * self.layerHeight
end
function SnowSystem:setSnowHeightAtArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, height)
  local layers = math.floor(height / self.layerHeight)
  if 0 < layers then
    self.modifiers.fillType.modifierType:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    self.modifiers.fillType.filterHeight:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    self.modifiers.fillType.modifierType:executeSet(self.snowHeightTypeIndex, self.modifiers.fillType.filterHeight)
  end
  self.modifiers.height.modifierHeight:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  self.modifiers.height.filterType:setValueCompareParams(DensityValueCompareType.EQUAL, self.snowHeightTypeIndex)
  self.modifiers.height.modifierHeight:executeSet(layers, self.modifiers.height.filterType)
  if layers == 0 then
    self.modifiers.fillType.modifierType:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    self.modifiers.fillType.filterHeight:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    self.modifiers.fillType.modifierType:executeSet(0, self.modifiers.fillType.filterHeight)
  end
end
function SnowSystem:removeSnow(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, layers)
  self.modifiers.height.modifierHeight:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  self.modifiers.height.filterType:setValueCompareParams(DensityValueCompareType.EQUAL, self.snowHeightTypeIndex)
  local v11 = self.modifiers.height.modifierHeight:executeAdd(-layers, self.modifiers.height.filterType)
  if v11 ~= 0 then
    self.modifiers.fillType.modifierType:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    self.modifiers.fillType.filterHeight:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    self.modifiers.fillType.modifierType:executeSet(0, self.modifiers.fillType.filterHeight)
  end
end
function SnowSystem:setSnowHeight(height)
  local v2 = MathUtil.clamp(height, -4.02, SnowSystem.MAX_HEIGHT)
  v2 = math.max(v2, 0)
  self.exactHeight = v2
  if self.height == v2 then
    return
  end
  if self.height < 0 then
    -- if 0 >= v1 then goto L36 end
    self.height = 0
  elseif self.height < 0 and self.height < height then
    self.height = height
  end
  if self.isServer then
    if self.layerHeight == nil then
      return
    end
    v2 = math.abs(height - self.height)
    if self.layerHeight <= v2 then
      self:applySnow(height - self.height)
      self.height = self.height + height - self.height
    end
  end
  self:updateSnowShader()
end
function SnowSystem:updateSnowShader()
  self.snowShaderValue = self.exactHeight / self.layerHeight
  if not self.debug_forcedSnowShaderValue then
  end
  height(v2, v3)
end
function SnowSystem:getSnowShaderValue()
  if not self.debug_forcedSnowShaderValue then
  end
  return height
end
function SnowSystem:removeAll()
  if 0 >= self.height then
    -- if 0 >= v0.exactHeight then goto L26 end
  end
  self:applySnow(SnowSystem.DELTA_REMOVE_ALL)
  self.height = 0
  self.exactHeight = 0
  self:updateSnowShader()
end
function SnowSystem:getHeight()
  return self.height
end
function SnowSystem.getMaxUpdateTime(v0)
  if g_sleepManager.isSleeping then
    return SnowSystem.MAX_MS_PER_FRAME_SLEEPING
  end
  return SnowSystem.MAX_MS_PER_FRAME
end
function SnowSystem:onSleepChanged(isSleeping)
  local v4 = self:getMaxUpdateTime()
  setDensityMapHeightUpdateApplyMaxTimePerFrame(...)
end
function SnowSystem:consoleCommandAddSnow(layers)
  if layers ~= nil then
    local v2 = tonumber(layers)
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L10
  end
  return "Usage: gsSnowAdd layers"
  v2 = tonumber(layers)
  self:setSnowHeight(self.height + v2 * self.layerHeight)
  return string.format("New height is %.3f", self.height + v2 * self.layerHeight)
end
function SnowSystem:consoleCommandSetSnow(height)
  if height ~= nil then
    local v2 = tonumber(height)
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L10
  end
  return "Usage: gsSnowSet height"
  v2 = tonumber(height)
  self:setSnowHeight(v2)
  v2 = string.format("New height is %.3f", v2)
  return v2
end
function SnowSystem:consoleCommandResetSnow()
  self:removeAll()
end
function SnowSystem:consoleCommandSetSnowShader(snowShaderValue)
  local v2 = tonumber(snowShaderValue)
  self.debug_forcedSnowShaderValue = v2
  self:updateSnowShader()
  local v4 = tostring(self.debug_forcedSnowShaderValue)
  if self.debug_forcedSnowShaderValue ~= nil then
    return "forcedSnowShaderValue=" .. v4 .. "\nUse gsSnowShaderSet without parameter to use weather again"
  end
  return v2 .. "\nUsing value from weather simulation"
end
function SnowSystem:consoleCommandSalt(radius)
  local v2 = tonumber(radius)
  local v3 = getCamera(0)
  local v2, v3, v4 = getWorldTranslation(...)
  self:saltArea(v2 - (v2 or 5), v4 - (v2 or 5), v2 + (v2 or 5), v4 - (v2 or 5), v2 - (v2 or 5), v4 + (v2 or 5))
end
