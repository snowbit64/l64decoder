-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaleManager = {baleXMLSchema = nil, mapBalesXMLSchema = nil}
local BaleManager_mt = Class(BaleManager, AbstractManager)
function BaleManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  local v3 = XMLSchema.new("bale")
  BaleManager.baleXMLSchema = v3
  BaleManager.registerBaleXMLPaths(BaleManager.baleXMLSchema)
  v3 = XMLSchema.new("mapBales")
  BaleManager.mapBalesXMLSchema = v3
  BaleManager.registerMapBalesXMLPaths(BaleManager.mapBalesXMLSchema)
  return v1
end
function BaleManager:initDataStructures()
  self.bales = {}
  self.modBalesToLoad = {}
  self.fermentations = {}
end
function BaleManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  local v4 = getXMLString(xmlFile, "map.bales#filename")
  if v4 == nil then
    Logging.xmlInfo(xmlFile, "No bales xml defined in map")
    return false
  end
  v5 = Utils.getFilename(v4, baseDirectory)
  local v6 = XMLFile.load("TempBales", v5, BaleManager.mapBalesXMLSchema)
  if v6 ~= nil then
    self:loadBales(v6, baseDirectory)
    v6:delete()
  end
  -- TODO: structure LOP_FORNPREP (pc 52, target 94)
  local v11 = XMLFile.load("TempBale", self.modBalesToLoad[#self.modBalesToLoad].xmlFilename, BaleManager.baleXMLSchema)
  if v11 ~= nil then
    local v12 = self:loadBaleDataFromXML(self.modBalesToLoad[#self.modBalesToLoad], v11, self.modBalesToLoad[#self.modBalesToLoad].baseDirectory)
    if v12 then
      table.insert(self.bales, self.modBalesToLoad[#self.modBalesToLoad])
    end
    v11:delete()
  end
  table.remove(self.modBalesToLoad, v9)
  -- TODO: structure LOP_FORNLOOP (pc 93, target 53)
  for v10, v11 in ipairs(self.bales) do
    v12 = v12:loadSharedI3DFileAsync(v11.i3dFilename, false, true, self.baleLoaded, self, v11)
    v11.sharedLoadRequestId = v12
  end
  if g_addCheatCommands then
    addConsoleCommand("gsBaleAdd", "Adds a bale", "consoleCommandAddBale", self)
    addConsoleCommand("gsBaleList", "List available bale types", "consoleCommandListBales", self)
  end
  return true
end
function BaleManager.baleLoaded(v0, v1, v2, v3)
  if v1 ~= 0 then
    v3.sharedRoot = v1
    removeFromPhysics(v1)
  end
end
function BaleManager:unloadMapData()
  for v4, v5 in ipairs(self.bales) do
    if v5.sharedLoadRequestId ~= nil then
      v6:releaseSharedI3DFile(v5.sharedLoadRequestId)
      v5.sharedLoadRequestId = nil
    end
    if not (v5.sharedRoot ~= nil) then
      continue
    end
    delete(v5.sharedRoot)
    v5.sharedRoot = nil
  end
  if g_addCheatCommands then
    removeConsoleCommand("gsBaleAdd")
    removeConsoleCommand("gsBaleList")
  end
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function BaleManager.loadBales(v0, v1, v2)
  v1:iterate("map.bales.bale", function(v0, v1)
    v2:loadBaleFromXML(u1, v1, u2)
  end)
  return true
end
function BaleManager:loadBaleFromXML(xmlFile, key, baseDirectory)
  local v4 = type(xmlFile)
  if v4 ~= "table" then
    v4 = XMLFile.wrap(xmlFile)
  end
  v4 = xmlFile:getString(key .. "#filename")
  if v4 ~= nil then
    local v6 = Utils.getFilename(v4, baseDirectory)
    v6 = xmlFile:getBool(key .. "#isAvailable", true)
    v6 = XMLFile.load("TempBale", {xmlFilename = v6, isAvailable = v6}.xmlFilename, BaleManager.baleXMLSchema)
    if v6 ~= nil then
      local v7 = self:loadBaleDataFromXML({xmlFilename = v6, isAvailable = v6}, v6, baseDirectory)
      v6:delete()
      if v7 then
        table.insert(self.bales, {xmlFilename = v6, isAvailable = v6})
        return true
      end
    end
  end
  Logging.xmlError(xmlFile, "Failed to load bale from xml '%s'", key)
  return false
end
function BaleManager:loadModBaleFromXML(xmlFile, key, baseDirectory, customEnvironment)
  local v5 = type(xmlFile)
  if v5 ~= "table" then
    v5 = XMLFile.wrap(xmlFile)
  end
  v5 = xmlFile:getString(key .. "#filename")
  if v5 ~= nil then
    local v6 = Utils.getFilename(v5, baseDirectory)
    local v7 = xmlFile:getBool(key .. "#isAvailable", true)
    table.insert(self.modBalesToLoad, {xmlFilename = v6, baseDirectory = baseDirectory, customEnvironment = customEnvironment, isAvailable = v7})
    return true
  end
  Logging.xmlError(xmlFile, "Failed to load bale from xml '%s'", key)
  return false
end
function BaleManager.loadBaleDataFromXML(v0, v1, v2, v3)
  local v4 = v2:getValue("bale.filename")
  if v4 ~= nil then
    local v5 = Utils.getFilename(v4, v3)
    v1.i3dFilename = v5
    v5 = fileExists(v1.i3dFilename)
    if not v5 then
      Logging.xmlError(v2, "Bale i3d file could not be found '%s'", v1.i3dFilename)
      return false
    end
    v5 = v2:getValue("bale.size#isRoundbale", true)
    v1.isRoundbale = v5
    local v6 = v2:getValue("bale.size#width", 0)
    v5 = MathUtil.round(v6, 2)
    v1.width = v5
    v6 = v2:getValue("bale.size#height", 0)
    v5 = MathUtil.round(v6, 2)
    v1.height = v5
    v6 = v2:getValue("bale.size#length", 0)
    v5 = MathUtil.round(v6, 2)
    v1.length = v5
    v6 = v2:getValue("bale.size#diameter", 0)
    v5 = MathUtil.round(v6, 2)
    v1.diameter = v5
    if v1.isRoundbale then
    else
    end
    v5 = v2:getValue(v7, v8)
    v1.maxStackHeight = v5
    v5 = v2:getValue("bale.size#visualWidth", v1.width)
    v1.visualWidth = v5
    v5 = v2:getValue("bale.size#visualHeight", v1.height)
    v1.visualHeight = v5
    v5 = v2:getValue("bale.size#visualLength", v1.length)
    v1.visualLength = v5
    v5 = v2:getValue("bale.size#visualDiameter", v1.diameter)
    v1.visualDiameter = v5
    if v1.isRoundbale then
      if v1.diameter ~= 0 then
        -- cmp-jump LOP_JUMPXEQKN R5 aux=0x80000023 -> L141
      end
      Logging.xmlError(v2, "Missing size attributes for round bale. Requires width and diameter.")
      return false
    end
    if not v1.isRoundbale then
      if v1.width ~= 0 and v1.height ~= 0 then
        -- cmp-jump LOP_JUMPXEQKN R5 aux=0x80000023 -> L163
      end
      Logging.xmlError(v2, "Missing size attributes for square bale. Requires width, height and length.")
      return false
    end
    v1.fillTypes = {}
    v2:iterate("bale.fillTypes.fillType", function(v0, v1)
      local v2 = v2:getValue(v1 .. "#name")
      local v3 = v3:getFillTypeIndexByName(v2)
      if v3 ~= nil then
        local v5 = v5:getValue(v1 .. "#capacity", 0)
        table.insert(u1.fillTypes, {fillTypeIndex = v3, capacity = v5})
        return
      end
      Logging.xmlWarning(u0, "Unknown fill type '%s' for bale in '%s'", v2, v1)
    end)
  else
    Logging.xmlError(v2, "No i3D file defined in bale xml.")
    return false
  end
  return true
end
function BaleManager:update(dt)
  if g_server ~= nil and 0 < #self.fermentations then
    local v3 = v3:getEffectiveTimeScale()
    -- TODO: structure LOP_FORNPREP (pc 18, target 80)
    self.fermentations[#self.fermentations].time = self.fermentations[#self.fermentations].time + dt * v3
    if self.fermentations[#self.fermentations].maxTime <= self.fermentations[#self.fermentations].time then
      v8:onFermentationUpdate(1)
      v8:onFermentationEnd()
      table.remove(self.fermentations, #self.fermentations)
    else
      local v9 = math.floor(self.fermentations[#self.fermentations].time / self.fermentations[#self.fermentations].maxTime * 100)
      local v10 = math.floor(self.fermentations[#self.fermentations].percentageSend * 100)
      if v9 ~= v10 then
        v9:onFermentationUpdate(self.fermentations[#self.fermentations].time / self.fermentations[#self.fermentations].maxTime)
        self.fermentations[#self.fermentations].percentageSend = self.fermentations[#self.fermentations].time / self.fermentations[#self.fermentations].maxTime
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 79, target 19)
  end
end
function BaleManager:registerFermentation(bale, currentTime, maxTime)
  if not Platform.gameplay.hasBaleFermentation then
  end
  table.insert(self.fermentations, {bale = bale, time = currentTime, percentageSend = 0, maxTime = maxTime * g_currentMission.missionInfo.economicDifficulty})
end
function BaleManager:getFermentationTime(bale)
  -- TODO: structure LOP_FORNPREP (pc 5, target 20)
  if self.fermentations[1].bale == bale then
    return self.fermentations[1].time
  end
  -- TODO: structure LOP_FORNLOOP (pc 19, target 6)
  return 0
end
function BaleManager:removeFermentation(bale)
  -- TODO: structure LOP_FORNPREP (pc 5, target 20)
  if self.fermentations[#self.fermentations].bale == bale then
    table.remove(self.fermentations, #self.fermentations)
  end
  -- TODO: structure LOP_FORNLOOP (pc 19, target 6)
end
function BaleManager:getBaleIndex(fillTypeIndex, isRoundbale, width, height, length, diameter, customEnvironment)
  if customEnvironment ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 7, target 31)
    if self.bales[1].isAvailable and customEnvironment == self.bales[1].customEnvironment then
      local v12 = self:getIsBaleMatching(self.bales[1], fillTypeIndex, isRoundbale, width, height, length, diameter)
      if v12 then
        return 1
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 30, target 8)
  end
  -- TODO: structure LOP_FORNPREP (pc 36, target 60)
  if self.bales[1].isAvailable and self.bales[1].customEnvironment == nil then
    v12 = self:getIsBaleMatching(self.bales[1], fillTypeIndex, isRoundbale, width, height, length, diameter)
    if v12 then
      return 1
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 59, target 37)
  return nil
end
function BaleManager:getBaleInfoByXMLFilename(xmlFilename, useVisualInfomation)
  -- TODO: structure LOP_FORNPREP (pc 5, target 42)
  if self.bales[1].xmlFilename == xmlFilename then
    if useVisualInfomation == true then
      return self.bales[1].isRoundbale, self.bales[1].visualWidth, self.bales[1].visualHeight, self.bales[1].visualLength, self.bales[1].visualDiameter, self.bales[1].maxStackHeight
    end
    return v6.isRoundbale, v6.width, v6.height, v6.length, v6.diameter, v6.maxStackHeight
  end
  -- TODO: structure LOP_FORNLOOP (pc 41, target 6)
  return false, 0, 0, 0, 0, 1
end
function BaleManager.getIsBaleMatching(v0, v1, v2, v3, v4, v5, v6, v7)
  if v1.isRoundbale == v3 then
    -- TODO: structure LOP_FORNPREP (pc 10, target 21)
    if v1.fillTypes[1].fillTypeIndex == v2 then
    else
      -- TODO: structure LOP_FORNLOOP (pc 20, target 11)
    end
    if v8 then
      if v3 then
        if v4 ~= nil then
          local v11 = MathUtil.round(v4, 2)
          -- if v11 ~= v1.width then goto L50 end
        end
        if v7 ~= nil then
          v11 = MathUtil.round(v7, 2)
          if v11 ~= v1.diameter then
          end
        end
      else
        if v4 ~= nil then
          v11 = MathUtil.round(v4, 2)
          -- if v11 ~= v1.width then goto L90 end
        end
        if v5 ~= nil then
          v11 = MathUtil.round(v5, 2)
          -- if v11 ~= v1.height then goto L90 end
        end
        if v6 ~= nil then
          v11 = MathUtil.round(v6, 2)
          if v11 ~= v1.length then
          end
        end
      end
      if v9 then
        return true
      end
    end
  end
  return false
end
function BaleManager:getBaleXMLFilename(fillTypeIndex, isRoundbale, width, height, length, diameter, customEnvironment)
  local baleIndex = self:getBaleIndex(fillTypeIndex, isRoundbale, width, height, length, diameter, customEnvironment)
  if baleIndex ~= nil then
    return self.bales[baleIndex].xmlFilename, baleIndex
  end
  return nil
end
function BaleManager:getBaleCapacityByBaleIndex(baleIndex, fillTypeIndex)
  if baleIndex ~= nil and self.bales[baleIndex] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 12, target 27)
    if self.bales[baleIndex].fillTypes[1].fillTypeIndex == fillTypeIndex then
      return self.bales[baleIndex].fillTypes[1].capacity
    end
    -- TODO: structure LOP_FORNLOOP (pc 26, target 13)
  end
  return 0
end
function BaleManager:getPossibleCapacitiesForFillType(fillTypeIndex)
  for v6, v7 in ipairs(self.bales) do
    for v11, v12 in ipairs(v7.fillTypes) do
      if not (v12.fillTypeIndex == fillTypeIndex) then
        continue
      end
      table.insert(v2, v12.capacity)
    end
  end
  return v2
end
function BaleManager:consoleCommandAddBale(fillTypeName, isRoundbale, width, height, length, wrapState, modName)
  local v8 = v8:getIsServer()
  if not v8 then
    Logging.error("Command only allowed on server!")
    return
  end
  v8 = Utils.getNoNil(fillTypeName, "STRAW")
  v8 = Utils.stringToBoolean(isRoundbale)
  if width ~= nil then
    v8 = tonumber(width)
    -- if v8 then goto L30 end
  end
  if height ~= nil then
    v8 = tonumber(height)
    -- if v8 then goto L39 end
  end
  if length ~= nil then
    v8 = tonumber(length)
    -- if v8 then goto L48 end
  end
  if wrapState ~= nil then
    v8 = tonumber(wrapState)
    if v8 == nil then
      Logging.error("Invalid wrapState '%s'. Number expected", wrapState, "gsBaleAdd fillTypeName isRoundBale [width] [height/diameter] [length] [wrapState] [modName]")
      return
    end
  end
  v8 = tonumber(wrapState or 0)
  v8 = v8:getFillTypeIndexByName(fillTypeName)
  if v8 == nil then
    Logging.error("Invalid fillTypeName '%s' (e.g. STRAW). Use %s", fillTypeName, "gsBaleAdd fillTypeName isRoundBale [width] [height/diameter] [length] [wrapState] [modName]")
    return
  end
  local v9, v10 = self:getBaleXMLFilename(v8, isRoundbale, width, height, length, height, modName)
  if v9 == nil then
    Logging.error("Could not find bale for given size attributes! (%s)", "gsBaleAdd fillTypeName isRoundBale [width] [height/diameter] [length] [wrapState] [modName]")
    self:consoleCommandListBales()
    return
  end
  if g_currentMission.controlPlayer then
    -- cmp-jump LOP_JUMPXEQKNIL R17 aux=0x0 -> L197
    -- if not g_currentMission.player.isControlled then goto L197 end
    -- cmp-jump LOP_JUMPXEQKNIL R18 aux=0x0 -> L197
    -- cmp-jump LOP_JUMPXEQKN R18 aux=0x11 -> L197
    local v18, v19, v20 = getWorldTranslation(g_currentMission.player.rootNode)
    v18 = math.sin(g_currentMission.player.rotY)
    v18 = math.cos(g_currentMission.player.rotY)
  elseif g_currentMission.controlledVehicle ~= nil then
    local v17, v18, v19 = getWorldTranslation(g_currentMission.controlledVehicle.rootNode)
    v17, v18, v19 = localDirectionToWorld(g_currentMission.controlledVehicle.rootNode, 0, 0, 1)
  else
    v18 = getCamera()
    v17, v18, v19 = getWorldTranslation(...)
    v18 = getCamera()
    v17, v18, v19 = localDirectionToWorld(v18, 0, 0, -1)
  end
  v17 = MathUtil.getYRotationFromDirection(v14, v15)
  v18 = v18:getFarmId()
  if v18 ~= FarmManager.SPECTATOR_FARM_ID then
    -- if v18 then goto L219 end
  end
  v20 = v20:getIsServer()
  local v21 = v21:getIsClient()
  v19 = Bale.new(...)
  v20 = v19:loadFromConfigXML(v9, v11, v12, v13, 0, v17, 0)
  if v20 then
    v19:setFillType(v8, true)
    v19:setWrappingState(wrapState)
    v19:setOwnerFarmId(1, true)
    v19:register()
  end
  v20 = string.format("Created bale at (%.2f, %.2f, %.2f). For specific bales use: %s", v11, v12, v13, "gsBaleAdd fillTypeName isRoundBale [width] [height/diameter] [length] [wrapState] [modName]")
  return v20
end
function BaleManager:consoleCommandListBales()
  print("Available bale types:")
  for height, length in ipairs(self.bales) do
    local v9 = string.format("isRoundbale=%s", length.isRoundbale)
    table.insert(...)
    for v10, v11 in ipairs({"width", "height", "length", "diameter"}) do
      if not (length[v11] ~= nil) then
        continue
      end
      if not (length[v11] ~= 0) then
        continue
      end
      local v14 = string.format("%s=%s", v11, length[v11])
      table.insert(...)
    end
    v8 = table.concat(wrapState, "  ")
    log(...)
    for v11, v12 in ipairs(length.fillTypes) do
      local v15 = v15:getFillTypeNameByIndex(v12.fillTypeIndex)
      table.insert(...)
    end
    v10 = table.concat(modName, "  ")
    log(...)
  end
end
function BaleManager:registerBaleXMLPaths()
  self:register(XMLValueType.STRING, "bale.filename", "Path to i3d file")
  self:register(XMLValueType.BOOL, "bale.size#isRoundbale", "Bale is a roundbale", true)
  self:register(XMLValueType.FLOAT, "bale.size#width", "Bale Width", 0)
  self:register(XMLValueType.FLOAT, "bale.size#height", "Bale Height", 0)
  self:register(XMLValueType.FLOAT, "bale.size#length", "Bale Length", 0)
  self:register(XMLValueType.FLOAT, "bale.size#diameter", "Bale Diameter", 0)
  self:register(XMLValueType.INT, "bale.size#maxStackHeight", "Max. stack height for automatic spawning of bales", "2 or round bales and 3 for square bales")
  self:register(XMLValueType.FLOAT, "bale.size#visualWidth", "Bale Width (Real size of the visuals if different)", "Same as #width")
  self:register(XMLValueType.FLOAT, "bale.size#visualHeight", "Bale Height (Real size of the visuals if different)", "Same as #height")
  self:register(XMLValueType.FLOAT, "bale.size#visualLength", "Bale Length (Real size of the visuals if different)", "Same as #length")
  self:register(XMLValueType.FLOAT, "bale.size#visualDiameter", "Bale Diameter (Real size of the visuals if different)", "Same as #diameter")
  self:register(XMLValueType.NODE_INDEX, "bale.mountableObject#triggerNode", "Trigger node")
  self:register(XMLValueType.FLOAT, "bale.mountableObject#forceAcceleration", "Acceleration force", 4)
  self:register(XMLValueType.FLOAT, "bale.mountableObject#forceLimitScale", "Force limit scale", 1)
  self:register(XMLValueType.BOOL, "bale.mountableObject#axisFreeY", "Joint is free in Y direction", false)
  self:register(XMLValueType.BOOL, "bale.mountableObject#axisFreeX", "Joint is free in X direction", false)
  self:register(XMLValueType.STRING, "bale.uvId", "Specify that this bale model has a custom UV. This will result in baleWrapper to replace the bale if the UV is different to the defined one in the baleWrapper. So the baleWrapper will always use a bale with a UV that matches the wrapping texture.", "DEFAULT")
  self:register(XMLValueType.NODE_INDEX, "bale.baleMeshes.baleMesh(?)#node", "Path to mesh node")
  self:register(XMLValueType.BOOL, "bale.baleMeshes.baleMesh(?)#supportsWrapping", "Defines if the mesh is hidden while wrapping or not")
  self:register(XMLValueType.STRING, "bale.baleMeshes.baleMesh(?)#fillTypes", "If defined this mesh is only visible if any of this fillTypes is set")
  self:register(XMLValueType.BOOL, "bale.baleMeshes.baleMesh(?)#isTensionBeltMesh", "Defines if this mesh is detected for tension belt calculation", false)
  self:register(XMLValueType.STRING, "bale.fillTypes.fillType(?)#name", "Name of fill type")
  self:register(XMLValueType.FLOAT, "bale.fillTypes.fillType(?)#capacity", "Fill level of bale with this fill type")
  self:register(XMLValueType.FLOAT, "bale.fillTypes.fillType(?)#mass", "Mass of bale with this fill type", 500)
  self:register(XMLValueType.FLOAT, "bale.fillTypes.fillType(?)#forceAcceleration", "Force acceleration value of bale with this fill type", "bale.mountableObject#forceAcceleration")
  self:register(XMLValueType.BOOL, "bale.fillTypes.fillType(?)#supportsWrapping", "Wrapping is allowed while this type is used")
  self:register(XMLValueType.STRING, "bale.fillTypes.fillType(?).diffuse#filename", "Diffuse texture to apply to all mesh nodes")
  self:register(XMLValueType.STRING, "bale.fillTypes.fillType(?).normal#filename", "Normal texture to apply to all mesh nodes")
  self:register(XMLValueType.STRING, "bale.fillTypes.fillType(?).specular#filename", "Specular texture to apply to all mesh nodes")
  self:register(XMLValueType.STRING, "bale.fillTypes.fillType(?).alpha#filename", "Alpha texture to apply to all mesh nodes")
  self:register(XMLValueType.STRING, "bale.fillTypes.fillType(?).fermenting#outputFillType", "Output fill type after fermenting")
  self:register(XMLValueType.BOOL, "bale.fillTypes.fillType(?).fermenting#requiresWrapping", "Wrapping is required to start fermenting", true)
  self:register(XMLValueType.FLOAT, "bale.fillTypes.fillType(?).fermenting#time", "Fermenting time in ingame days which represent months", 1)
  self:register(XMLValueType.STRING, "bale.packedBale#singleBale", "Path to single bale xml filename")
  self:register(XMLValueType.NODE_INDEX, "bale.packedBale.singleBale(?)#node", "Single bale spawn node")
end
function BaleManager:registerMapBalesXMLPaths()
  self:register(XMLValueType.STRING, "map.bales.bale(?)#filename", "Path to bale xml")
  self:register(XMLValueType.STRING, "map.bales.bale(?)#isAvailable", "Bale is available for all balers to spawn")
end
local fillTypeName = BaleManager.new()
g_baleManager = v1
