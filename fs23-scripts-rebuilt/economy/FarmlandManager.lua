-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmlandManager = {NO_OWNER_FARM_ID = 0}
if GS_IS_MOBILE_VERSION then
else
end
FarmlandManager_mt.NOT_BUYABLE_FARM_ID = v1
local FarmlandManager_mt = Class(FarmlandManager, AbstractManager)
function FarmlandManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function FarmlandManager:initDataStructures()
  self.farmlands = {}
  self.sortedFarmlandIds = {}
  self.farmlandMapping = {}
  self.localMap = nil
  self.localMapWidth = 0
  self.localMapHeight = 0
  self.numberOfBits = 8
  self.stateChangeListener = {}
end
function FarmlandManager:loadMapData(xmlFile)
  local v3 = v3:superClass()
  v3.loadMapData(self)
  return XMLUtil.loadDataFromMapXML(xmlFile, "farmlands", g_currentMission.baseDirectory, self, self.loadFarmlandData)
end
function FarmlandManager:loadFarmlandData(xmlFile)
  local v3 = getXMLString(xmlFile, "map.farmlands#densityMapFilename")
  local v2 = Utils.getFilename(v3, g_currentMission.baseDirectory)
  local v4 = getXMLInt(xmlFile, "map.farmlands#numChannels")
  v3 = Utils.getNoNil(v4, 8)
  self.numberOfBits = v3
  v4 = getXMLFloat(xmlFile, "map.farmlands#pricePerHa")
  v3 = Utils.getNoNil(v4, 60000)
  self.pricePerHa = v3
  FarmlandManager.NOT_BUYABLE_FARM_ID = 2 ^ self.numberOfBits - 1
  v3 = createBitVectorMap("FarmlandMap")
  self.localMap = v3
  v3 = loadBitVectorMapFromFile(self.localMap, v2, self.numberOfBits)
  if not v3 then
    Logging.xmlWarning(xmlFile, "Loading farmland file '%s' failed!", v2)
    return false
  end
  local v4, v5 = getBitVectorMapSize(self.localMap)
  self.localMapWidth = v4
  self.localMapHeight = v5
  -- TODO: structure LOP_FORNPREP (pc 85, target 159)
  for v14 = 0, self.localMapHeight - 1 do
    local v15 = getBitVectorMapPoint(self.localMap, v11, v14, 0, self.numberOfBits)
    if 0 < v15 then
      if self.farmlandMapping[v15] == nil then
        v4[v15] = 0
        v5[v15] = {sumPosX = 0, sumPosZ = 0}
        self.farmlandMapping[v15] = FarmlandManager.NO_OWNER_FARM_ID
        local v16 = math.max(v15, v7)
      end
      v4[v15] = v4[v15] + 1
      v5[v15].sumPosX = v5[v15].sumPosX + v11 - 0.5
      v5[v15].sumPosZ = v5[v15].sumPosZ + v14 - 0.5
    else
    end
    -- TODO: structure LOP_FORNLOOP (pc 157, target 92)
  end
  if v8 then
    Logging.xmlWarning(xmlFile, "Farmland-Id was not set for all pixels in farmland-infoLayer!")
  end
  while true do
    v11 = string.format("map.farmlands.farmland(%d)", v10)
    v12 = hasXMLProperty(xmlFile, v11)
    if not v12 then
      break
    end
    v12 = Farmland.new()
    v13 = v12:load(xmlFile, v11)
    if v13 then
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x80000000 -> L243
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L243
      self.farmlands[v12.id] = v12
      table.insert(self.sortedFarmlandIds, v12.id)
      if v9 and g_currentMission.missionInfo.hasInitiallyOwnedFarmlands then
      end
      -- if not v13 then goto L288 end
      v14 = v14:getIsServer()
      -- if not v14 then goto L288 end
      -- if not v12.defaultFarmProperty then goto L288 end
      self:setLandOwnership(v12.id, FarmManager.SINGLEPLAYER_FARM_ID)
    else
      if self.farmlandMapping[v12.id] == nil then
        v21 = tostring(v12.id)
        Logging.xmlError(xmlFile, "Farmland-Id " .. v21 .. " not defined in farmland ownership file '" .. v2 .. "'. Skipping farmland definition!")
      end
      if self.farmlands[v12.id] ~= nil then
        v19 = tostring(v12.id)
        Logging.xmlError(xmlFile, "Farmland-id '" .. v19 .. "' already exists! Ignore it!")
      end
      v12:delete()
    end
  end
  for v14, v15 in pairs(self.farmlandMapping) do
    if not (v14 ~= FarmlandManager.NOT_BUYABLE_FARM_ID) then
      continue
    end
    if not (self.farmlands[v14] == nil) then
      continue
    end
    local v22 = tostring(v14)
    Logging.xmlError(xmlFile, "Farmland-Id " .. v22 .. " not defined in farmland xml file!")
  end
  for v16, v17 in pairs(self.farmlands) do
    local v18 = MathUtil.areaToHa(v4[v16], v12)
    v17:setArea(v18)
    v21:setFarmlandIndicatorPosition((v5[v16].sumPosX / v4[v16] - self.localMapWidth * 0.5) * v11, (v5[v16].sumPosZ / v4[v16] - self.localMapHeight * 0.5) * v11)
  end
  v13:subscribe(MessageType.FARM_DELETED, self.farmDestroyed, self)
  v13 = v13:getIsServer()
  if v13 and g_addCheatCommands then
    addConsoleCommand("gsFarmlandBuy", "Buys farmland with given id", "consoleCommandBuyFarmland", self)
    addConsoleCommand("gsFarmlandBuyAll", "Buys all farmlands", "consoleCommandBuyAllFarmlands", self)
    addConsoleCommand("gsFarmlandSell", "Sells farmland with given id", "consoleCommandSellFarmland", self)
    addConsoleCommand("gsFarmlandSellAll", "Sells all farmlands", "consoleCommandSellAllFarmlands", self)
    addConsoleCommand("gsFarmlandShow", "Show farmlands", "consoleCommandShowFarmlands", self)
  end
  return true
end
function FarmlandManager:unloadMapData()
  removeConsoleCommand("gsFarmlandBuy")
  removeConsoleCommand("gsFarmlandBuyAll")
  removeConsoleCommand("gsFarmlandSell")
  removeConsoleCommand("gsFarmlandSellAll")
  removeConsoleCommand("gsFarmlandShow")
  v1:unsubscribeAll(self)
  if self.localMap ~= nil then
    delete(self.localMap)
    self.localMap = nil
  end
  if self.farmlands ~= nil then
    for v4, v5 in pairs(self.farmlands) do
      v5:delete()
    end
  end
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function FarmlandManager:saveToXMLFile(xmlFilename)
  local xmlFile = createXMLFile("farmlandsXML", xmlFilename, "farmlands")
  if xmlFile ~= nil then
    for v7, v8 in pairs(self.farmlandMapping) do
      local v9 = string.format("farmlands.farmland(%d)", v3)
      setXMLInt(xmlFile, v9 .. "#id", v7)
      local v13 = Utils.getNoNil(v8, FarmlandManager.NO_OWNER_FARM_ID)
      setXMLInt(...)
    end
    saveXMLFile(xmlFile)
    delete(xmlFile)
    return true
  end
  return false
end
function FarmlandManager:loadFromXMLFile(xmlFilename)
  if xmlFilename == nil then
    return false
  end
  local xmlFile = loadXMLFile("farmlandXML", xmlFilename)
  if xmlFile == 0 then
    return false
  end
  while true do
    v4 = string.format("farmlands.farmland(%d)", v3)
    v5 = getXMLInt(xmlFile, v4 .. "#id")
    if not (v5 ~= nil) then
      break
    end
    v6 = getXMLInt(xmlFile, v4 .. "#farmId")
    if FarmlandManager.NO_OWNER_FARM_ID < v6 then
      self:setLandOwnership(v5, v6)
    end
  end
  delete(xmlFile)
  v4:mergeFarmlandsForSingleplayer()
  return true
end
function FarmlandManager.delete(v0)
end
function FarmlandManager:getLocalMap()
  return self.localMap
end
function FarmlandManager:getIsOwnedByFarmAtWorldPosition(farmId, worldPosX, worldPosZ)
  if farmId ~= FarmlandManager.NO_OWNER_FARM_ID then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L10
  end
  return false
  local farmlandId = self:getFarmlandIdAtWorldPosition(worldPosX, worldPosZ)
  if self.farmlandMapping[farmlandId] ~= farmId then
  end
  return true
end
function FarmlandManager:getCanAccessLandAtWorldPosition(farmId, worldPosX, worldPosZ)
  if farmId ~= FarmlandManager.NO_OWNER_FARM_ID then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L10
  end
  return false
  local farmlandId = self:getFarmlandIdAtWorldPosition(worldPosX, worldPosZ)
  if self.farmlandMapping[farmlandId] == farmId then
    return true
  end
  return v6:canFarmAccessOtherId(farmId, v5)
end
function FarmlandManager:getFarmlandOwner(farmlandId)
  if farmlandId ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L12
  end
  return FarmlandManager.NO_OWNER_FARM_ID
  return self.farmlandMapping[farmlandId]
end
function FarmlandManager:getFarmlandIdAtWorldPosition(worldPosX, worldPosZ)
  local v3, v4 = self:convertWorldToLocalPosition(worldPosX, worldPosZ)
  return getBitVectorMapPoint(self.localMap, v3, v4, 0, self.numberOfBits)
end
function FarmlandManager:getFarmlandAtWorldPosition(worldPosX, worldPosZ)
  local farmlandId = self:getFarmlandIdAtWorldPosition(worldPosX, worldPosZ)
  return self.farmlands[farmlandId]
end
function FarmlandManager:getOwnerIdAtWorldPosition(worldPosX, worldPosZ)
  local farmlandId = self:getFarmlandIdAtWorldPosition(worldPosX, worldPosZ)
  return self:getFarmlandOwner(farmlandId)
end
function FarmlandManager:getIsValidFarmlandId(farmlandId)
  if farmlandId ~= nil and farmlandId ~= 0 then
    -- if v1 >= 0 then goto L9 end
  end
  return false
  local v2 = self:getFarmlandById(farmlandId)
  if v2 == nil then
    return false
  end
  return true
end
function FarmlandManager:setLandOwnership(farmlandId, farmId)
  local v3 = self:getIsValidFarmlandId(farmlandId)
  if not v3 then
    return false
  end
  if farmId ~= nil and farmId >= FarmlandManager.NO_OWNER_FARM_ID then
    -- if v2 ~= FarmlandManager.NOT_BUYABLE_FARM_ID then goto L23 end
  end
  return false
  v3 = self:getFarmlandById(farmlandId)
  if v3 == nil then
    Logging.warning("Farmland id %d not defined in map!", farmlandId)
    return false
  end
  self.farmlandMapping[farmlandId] = farmId
  if farmId == FarmlandManager.NO_OWNER_FARM_ID then
  end
  v3.isOwned = true
  for v7, v8 in pairs(self.stateChangeListener) do
    v8:onFarmlandStateChanged(farmlandId, farmId)
  end
  return true
end
function FarmlandManager:getFarmlandById(farmlandId)
  return self.farmlands[farmlandId]
end
function FarmlandManager:getFarmlands()
  return self.farmlands
end
function FarmlandManager:getPricePerHa()
  return self.pricePerHa
end
function FarmlandManager:getOwnedFarmlandIdsByFarmId(id)
  for v6, v7 in pairs(self.farmlandMapping) do
    if not (v7 == id) then
      continue
    end
    table.insert(v2, v6)
  end
  return v2
end
function FarmlandManager:convertWorldToLocalPosition(worldPosX, worldPosZ)
  local v4 = math.floor(self.localMapWidth * (worldPosX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize)
  local v5 = math.floor(self.localMapHeight * (worldPosZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize)
  return v4
end
function FarmlandManager:farmDestroyed(farmId)
  local v3 = self:getFarmlands()
  for v5, v6 in pairs(...) do
    local v7 = self:getFarmlandOwner(v6.id)
    if not (v7 == farmId) then
      continue
    end
    self:setLandOwnership(v6.id, FarmlandManager.NO_OWNER_FARM_ID)
  end
end
function FarmlandManager:addStateChangeListener(listener)
  if listener ~= nil and listener.onFarmlandStateChanged ~= nil then
    self.stateChangeListener[listener] = listener
  end
end
function FarmlandManager:removeStateChangeListener(listener)
  if listener ~= nil then
    self.stateChangeListener[listener] = nil
  end
end
function FarmlandManager.consoleCommandBuyFarmland(v0, v1)
  local v2 = v2:getIsServer()
  if not v2 then
    -- if not g_currentMission.isMasterUser then goto L44 end
  end
  v2 = v2:getIsClient()
  if v2 then
    v2 = tonumber(v1)
    if v2 == nil then
      return "Invalid farmland id. Use gsFarmlandBuy <farmlandId>"
    end
    local v3 = v3:getServerConnection()
    local v5 = FarmlandStateEvent.new(v1, g_currentMission.player.farmId, 0)
    v3:sendEvent(...)
    return "Bought farmland " .. v1
  end
  return "Command not allowed"
end
function FarmlandManager.consoleCommandBuyAllFarmlands(v0)
  local v1 = v1:getIsServer()
  if not v1 then
    -- if not g_currentMission.isMasterUser then goto L44 end
  end
  v1 = v1:getIsClient()
  if v1 then
    local v3 = v3:getFarmlands()
    for v5, v6 in pairs(...) do
      local v7 = v7:getServerConnection()
      local v9 = FarmlandStateEvent.new(v5, v1, 0)
      v7:sendEvent(...)
    end
    return "Bought all farmlands"
  end
  return "Command not allowed"
end
function FarmlandManager.consoleCommandSellFarmland(v0, v1)
  local v2 = v2:getIsServer()
  if not v2 then
    -- if not g_currentMission.isMasterUser then goto L45 end
  end
  v2 = v2:getIsClient()
  if v2 then
    v2 = tonumber(v1)
    if v2 == nil then
      return "Invalid farmland id. Use gsFarmlandSell <farmlandId>"
    end
    v2 = v2:getServerConnection()
    local v4 = FarmlandStateEvent.new(v1, FarmlandManager.NO_OWNER_FARM_ID, 0)
    v2:sendEvent(...)
    return "Sold farmland " .. v1
  end
  return "Command not allowed"
end
function FarmlandManager.consoleCommandSellAllFarmlands(v0)
  local v1 = v1:getIsServer()
  if not v1 then
    -- if not g_currentMission.isMasterUser then goto L45 end
  end
  v1 = v1:getIsClient()
  if v1 then
    local v2 = v2:getFarmlands()
    for v4, v5 in pairs(...) do
      local v6 = v6:getServerConnection()
      local v8 = FarmlandStateEvent.new(v4, FarmlandManager.NO_OWNER_FARM_ID, 0)
      v6:sendEvent(...)
    end
    return "Sold all farmlands"
  end
  return "Command not allowed"
end
function FarmlandManager.consoleCommandShowFarmlands(v0)
  local v1 = v1:getHasDrawable(v0)
  if not v1 then
    v1:addDrawable(v0)
    return "showFarmlands = true\nUse F5 to enter debug mode for enabling overlay"
  end
  v1:removeDrawable(v0)
  return "showFarmlands = false"
end
function FarmlandManager:draw()
  local v2 = getCamera(0)
  local v1, v2, v3 = getWorldTranslation(...)
  if g_currentMission.controlledVehicle ~= nil then
    if g_currentMission.controlledVehicle.selectedImplement ~= nil then
    end
    local v5, v6, v7 = getWorldTranslation(v4.components[1].node)
  end
  v7 = math.floor((v1 + g_currentMission.terrainSize / 2) * self.localMapWidth / g_currentMission.terrainSize)
  local v8 = math.floor((v3 + g_currentMission.terrainSize / 2) * self.localMapWidth / g_currentMission.terrainSize)
  local v9 = math.max(v7 - 25, 0)
  local v10 = math.max(v8 - 25, 0)
  local v11 = math.min(v7 + 25, self.localMapWidth - 1)
  local v12 = math.min(v8 + 25, self.localMapWidth - 1)
  -- TODO: structure LOP_FORNPREP (pc 94, target 142)
  for v19 = v9, v11 do
    local v22 = getBitVectorMapPoint(self.localMap, v19, v16, 0, self.numberOfBits)
    if self.farmlands[v22] then
      local v21 = DebugUtil.getDebugColor(self.farmlands[v22].id)
      v13[self.farmlands[v22]] = v21
      DebugUtil.drawDebugAreaRectangleFilled(v19 * v5 - v4, 0, v16 * v5 - v4, v19 * v5 - v4 + v5, 0, v16 * v5 - v4, v19 * v5 - v4, 0, v16 * v5 - v4 + v5, true, v21[1], v21[2], v21[3], 0.15)
    end
    -- TODO: structure LOP_FORNLOOP (pc 140, target 99)
  end
  local v15 = next(v13)
  if v15 ~= nil then
    for v18, v19 in pairs(v13) do
      if v18.defaultFarmProperty then
      else
      end
      local v24 = self:getFarmlandOwner(v18.id)
      v21 = string.format("Farmland %d | Owner: %s | Area: %.3fha | Price: %d%s", v18.id, v24, v18.areaInHa, v18.price, v20)
      setTextColor(v19[1], v19[2], v19[3], 1)
      renderText(0.3, 0.97 - v14 * 0.015, 0.015, v21)
      setTextColor(1, 1, 1, 1)
    end
    return
  end
  renderText(0.3, 0.97 - v14 * 0.015, 0.015, "No farmlands defined in vicinity")
end
local v1 = FarmlandManager.new()
g_farmlandManager = v1
