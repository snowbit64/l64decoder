-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PalletSpawner = {RESULT_NO_SPACE = 0, RESULT_SUCCESS = 1, RESULT_ERROR_LOADING_PALLET = 2, PALLET_ALREADY_PRESENT = 3, NO_PALLET_FOR_FILLTYPE = 4, PALLET_LIMITED_REACHED = 5}
local PalletSpawner_mt = Class(PalletSpawner)
function PalletSpawner.new(baseDirectory, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.baseDirectory = baseDirectory
  v2.spawnQueue = {}
  v2.currentObjectToSpawn = nil
  if Platform.gameplay.hasDynamicPallets then
  else
  end
  v2.spawnOffsetY = v3
  return v2
end
function PalletSpawner:load(components, xmlFile, key, customEnv, i3dMappings)
  local v6 = xmlFile:getValue(key .. "#node", components[1].node, components, i3dMappings)
  self.rootNode = v6
  self.spawnPlaces = {}
  self.fillTypeToSpawnPlaces = {}
  xmlFile:iterate(key .. ".spawnPlaces.spawnPlace", function(self, components)
    local xmlFile = PlacementUtil.loadPlaceFromXML(u0, components, u1, u2)
    local customEnv = customEnv:getValue(components .. "#fillTypeCategories")
    local i3dMappings = i3dMappings:getValue(components .. "#fillTypes")
    if customEnv ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L42
      local v13 = v13:getFilename()
      local v6 = v6:getFillTypesByCategoryNames(customEnv, "Warning: Palletspawner '" .. v13 .. "' has invalid fillTypeCategory '%s'.")
    elseif customEnv == nil and i3dMappings ~= nil then
      v13 = v13:getFilename()
      v6 = v6:getFillTypesByNames(i3dMappings, "Warning: Palletspawner '" .. v13 .. "' has invalid fillType '%s'.")
    end
    if key ~= nil then
      u3 = true
      for v9, v10 in ipairs(key) do
        if u4.fillTypeToSpawnPlaces[v10] == nil then
          u4.fillTypeToSpawnPlaces[v10] = {}
        end
        table.insert(u4.fillTypeToSpawnPlaces[v10], xmlFile)
      end
      return
    end
    table.insert(u4.spawnPlaces, xmlFile)
  end)
  if #self.spawnPlaces == 0 and not false then
    Logging.xmlError(xmlFile, "No spawn place(s) defined for pallet spawner %s%s", key, ".spawnPlaces")
    return false
  end
  self.pallets = {}
  self.fillTypeIdToPallet = {}
  for v10, v11 in pairs(g_fillTypeManager.indexToFillType) do
    if not v11.palletFilename then
      continue
    end
    self:loadPalletFromFilename(v11.palletFilename, v10)
  end
  xmlFile:iterate(key .. ".pallets.pallet", function(self, components)
    local key = key:getValue(components .. "#filename")
    local xmlFile = Utils.getFilename(key, u1.baseDirectory)
    key:loadPalletFromFilename(xmlFile)
  end)
  return true
end
function PalletSpawner.delete(v0)
end
function PalletSpawner:loadPalletFromFilename(palletFilename, limitFillTypeId)
  if palletFilename ~= nil then
    local customEnv = StoreItemUtil.getSizeValues(palletFilename, "vehicle", 0, {})
    customEnv = XMLFile.load("palletXmlFilename", palletFilename, Vehicle.xmlSchema)
    local i3dMappings = FillUnit.getFillTypeNamesFromXML(customEnv)
    local v6 = FillUnit.getCapacityFromXml(customEnv)
    customEnv:delete()
    v6 = v6:getFillTypesByCategoryNames(i3dMappings.fillTypeCategoryNames)
    local v7 = v7:getFillTypesByNames(i3dMappings.fillTypeNames)
    -- TODO: structure LOP_FORNPREP (pc 53, target 62)
    table.insert(v6, v7[1])
    -- TODO: structure LOP_FORNLOOP (pc 61, target 54)
    -- TODO: structure LOP_FORNPREP (pc 66, target 77)
    if limitFillTypeId ~= nil then
      -- if v2 ~= v6[1] then goto L76 end
    end
    self.fillTypeIdToPallet[v12] = key
    -- TODO: structure LOP_FORNLOOP (pc 76, target 67)
    if true then
      table.insert(self.pallets, key)
      return key
    end
  end
  return nil
end
function PalletSpawner:getSupportedFillTypes()
  return self.fillTypeIdToPallet
end
function PalletSpawner:spawnPallet(farmId, fillTypeId, callback, callbackTarget)
  local i3dMappings = i3dMappings:getCanAddLimitedObjects(SlotSystem.LIMITED_OBJECT_PALLET, 1)
  if not i3dMappings then
    callback(callbackTarget, nil, PalletSpawner.PALLET_LIMITED_REACHED)
    return
  end
  if self.fillTypeIdToPallet[fillTypeId] ~= nil then
    table.insert(self.spawnQueue, {pallet = self.fillTypeIdToPallet[fillTypeId], fillType = fillTypeId, farmId = farmId, callback = callback, callbackTarget = callbackTarget})
    v6:addUpdateable(self)
    return
  end
  Logging.devError("PalletSpawner: no pallet for fillTypeId", fillTypeId)
  callback(callbackTarget, nil, PalletSpawner.NO_PALLET_FOR_FILLTYPE, fillTypeId)
end
function PalletSpawner:getOrSpawnPallet(farmId, fillTypeId, callback, callbackTarget)
  self.foundExistingPallet = nil
  self.getOrSpawnPalletFilltype = fillTypeId
  if not self.fillTypeToSpawnPlaces[fillTypeId] then
  end
  -- TODO: structure LOP_FORNPREP (pc 14, target 68)
  overlapBox(i3dMappings[1].startX + i3dMappings[1].width / 2 * i3dMappings[1].dirX, i3dMappings[1].startY + i3dMappings[1].width / 2 * i3dMappings[1].dirY, i3dMappings[1].startZ + i3dMappings[1].width / 2 * i3dMappings[1].dirZ, i3dMappings[1].rotX, i3dMappings[1].rotY, i3dMappings[1].rotZ, i3dMappings[1].width / 2, 1, 1, "onFindExistingPallet", self, CollisionMask.VEHICLE, true, false, true)
  -- TODO: structure LOP_FORNLOOP (pc 67, target 15)
  if self.foundExistingPallet ~= nil then
    callback(callbackTarget, self.foundExistingPallet, PalletSpawner.PALLET_ALREADY_PRESENT, fillTypeId)
    return
  end
  self:spawnPallet(farmId, fillTypeId, callback, callbackTarget)
end
function PalletSpawner:getAllPallets(fillTypeId, callbackFunc, callbackTarget)
  self.getAllPalletsFoundPallets = {}
  self.getAllPalletsFilltype = fillTypeId
  if not self.fillTypeToSpawnPlaces[fillTypeId] then
  end
  -- TODO: structure LOP_FORNPREP (pc 15, target 69)
  overlapBox(customEnv[1].startX + customEnv[1].width / 2 * customEnv[1].dirX, customEnv[1].startY + customEnv[1].width / 2 * customEnv[1].dirY, customEnv[1].startZ + customEnv[1].width / 2 * customEnv[1].dirZ, customEnv[1].rotX, customEnv[1].rotY, customEnv[1].rotZ, customEnv[1].width / 2, 1, 1, "onFindPallet", self, CollisionMask.VEHICLE, true, false, true)
  -- TODO: structure LOP_FORNLOOP (pc 68, target 16)
  local v7 = table.toList(self.getAllPalletsFoundPallets)
  callbackFunc(...)
end
function PalletSpawner:update(dt)
  if 0 < #self.spawnQueue then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L47
    self.currentObjectToSpawn = self.spawnQueue[1]
    if not self.fillTypeToSpawnPlaces[self.currentObjectToSpawn.fillType] then
    end
    key:getPlaceAsync(xmlFile, self.currentObjectToSpawn.pallet.size, self.onSpawnSearchFinished, self)
    return
  end
  xmlFile:removeUpdateable(self)
end
function PalletSpawner:onSpawnSearchFinished(location)
  if location ~= nil then
    local terrainHeight = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, location.x, 0, location.z)
    local i3dMappings = math.max(terrainHeight, location.y)
    location.y = i3dMappings + self.spawnOffsetY
    VehicleLoadingUtil.loadVehicle(self.currentObjectToSpawn.pallet.filename, location, true, 0, Vehicle.PROPERTY_STATE_OWNED, self.currentObjectToSpawn.farmId, nil, nil, self.onFinishLoadingPallet, self)
    return
  end
  xmlFile.callback(xmlFile.callbackTarget, nil, PalletSpawner.RESULT_NO_SPACE)
  self.currentObjectToSpawn = nil
  table.remove(self.spawnQueue, 1)
end
function PalletSpawner:onFinishLoadingPallet(vehicle, vehicleLoadState)
  if vehicleLoadState == VehicleLoadingUtil.VEHICLE_LOAD_OK then
    -- if PalletSpawner.RESULT_SUCCESS then goto L15 end
  end
  key.callback(key.callbackTarget, vehicle, PalletSpawner.RESULT_ERROR_LOADING_PALLET, key.fillType)
  self.currentObjectToSpawn = nil
  table.remove(self.spawnQueue, 1)
end
function PalletSpawner:onFindExistingPallet(node)
  if g_currentMission.nodeToObject[node] ~= nil and g_currentMission.nodeToObject[node].isa ~= nil then
    local key = g_currentMission.nodeToObject[node]:isa(Vehicle)
    if key and g_currentMission.nodeToObject[node].isPallet then
      key = g_currentMission.nodeToObject[node]:getFillUnitSupportsFillType(1, self.getOrSpawnPalletFilltype)
      if key then
        key = g_currentMission.nodeToObject[node]:getFillUnitFreeCapacity(1, self.getOrSpawnPalletFilltype)
        if 0 < key then
          self.foundExistingPallet = g_currentMission.nodeToObject[node]
          return false
        end
      end
    end
  end
end
function PalletSpawner:onFindPallet(node)
  if g_currentMission.nodeToObject[node] ~= nil and g_currentMission.nodeToObject[node].isa ~= nil then
    local key = g_currentMission.nodeToObject[node]:isa(Vehicle)
    if key and g_currentMission.nodeToObject[node].isPallet then
      key = g_currentMission.nodeToObject[node]:getFillUnitFillType(1)
      if key == self.getAllPalletsFilltype then
        self.getAllPalletsFoundPallets[g_currentMission.nodeToObject[node]] = true
      end
    end
  end
end
function PalletSpawner:registerXMLPaths(components)
  self:register(XMLValueType.NODE_INDEX, components .. "#node", "root node")
  self:register(XMLValueType.STRING, components .. ".spawnPlaces.spawnPlace(?)#fillTypes", "Supported filltypes for this spawnPlace")
  self:register(XMLValueType.STRING, components .. ".spawnPlaces.spawnPlace(?)#fillTypeCategories", "Supported filltype categories for this spawnPlace")
  PlacementUtil.registerXMLPaths(self, components)
  self:register(XMLValueType.STRING, components .. ".pallets.pallet(?)#filename", "Path to pallet xml file")
end
