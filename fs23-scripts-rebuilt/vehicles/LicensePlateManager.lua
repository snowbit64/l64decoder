-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LicensePlateManager = {PLATE_TYPE = {}}
LicensePlateManager.PLATE_TYPE.SQUARISH = 0
LicensePlateManager.PLATE_TYPE.ELONGATED = 1
LicensePlateManager.PLATE_POSITION = {NONE = 0, FRONT = 1, BACK = 2, ANY = 3}
LicensePlateManager.CHARACTER_TYPE = {NUMERICAL = 0, ALPHABETICAL = 1, SPECIAL = 2}
LicensePlateManager.PLACEMENT_OPTION = {NONE = 0, BOTH = 1, BACK_ONLY = 2}
LicensePlateManager.PLACEMENT_OPTION_TEXT = {[LicensePlateManager.PLACEMENT_OPTION.NONE] = "ui_licensePlatePlacementNone", [LicensePlateManager.PLACEMENT_OPTION.BOTH] = "ui_licensePlatePlacementBoth", [LicensePlateManager.PLACEMENT_OPTION.BACK_ONLY] = "ui_licensePlatePlacementBackOnly"}
LicensePlateManager.SEND_NUM_BITS_VARIATION = 4
LicensePlateManager.SEND_NUM_BITS_COLOR = 6
LicensePlateManager.SEND_NUM_BITS_CHARACTER = 8
LicensePlateManager.SEND_NUM_BITS_PLACEMENT = 2
LicensePlateManager.xmlSchema = nil
local LicensePlateManager_mt = Class(LicensePlateManager, AbstractManager)
function LicensePlateManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function LicensePlateManager:initDataStructures()
  self.licensePlates = {}
  self.colorConfigurations = {}
  self.licensePlatesAvailable = false
  self.sharedLoadRequestIds = {}
end
function LicensePlateManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  self.baseDirectory = baseDirectory
  LicensePlateManager.createLicensePlateXMLSchema()
  local v4 = getXMLString(xmlFile, "map.licensePlates#filename")
  if v4 ~= nil then
    v5 = Utils.getFilename(v4, baseDirectory)
    self.xmlFilename = v5
    v5 = XMLFile.load("mapLicensePlates", self.xmlFilename, LicensePlateManager.xmlSchema)
    self.licensePlateXML = v5
    if self.licensePlateXML ~= nil then
      self.xmlReferences = 0
      self:loadLicensePlatesFromXML(self.licensePlateXML, baseDirectory)
      if self.licensePlateXML ~= nil and self.xmlReferences == 0 then
        v5:delete()
        self.licensePlateXML = nil
      end
    end
  end
  return true
end
function LicensePlateManager:unloadMapData()
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  v4:delete()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  if self.sharedLoadRequestIds ~= nil then
    for v4, v5 in ipairs(self.sharedLoadRequestIds) do
      v6:releaseSharedI3DFile(v5)
    end
    self.sharedLoadRequestIds = nil
  end
  if self.licensePlateXML ~= nil then
    v1:delete()
    self.licensePlateXML = nil
  end
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function LicensePlateManager:loadLicensePlatesFromXML(xmlFile, baseDirectory)
  local v3, v4 = Utils.getModNameAndBaseDirectory(baseDirectory)
  local v5 = xmlFile:getValue("licensePlates.font#name", "GENERIC")
  self.fontName = v5
  self.customEnvironment = v3
  xmlFile:iterate("licensePlates.licensePlate", function(self, xmlFile)
    local baseDirectory = baseDirectory:getValue(xmlFile .. "#filename")
    if baseDirectory ~= nil then
      u1.xmlReferences = u1.xmlReferences + 1
      local v3 = Utils.getFilename(baseDirectory, u2)
      local v4 = v4:loadSharedI3DFileAsync(v3, false, false, u1.licensePlateI3DFileLoaded, u1, {filename = v3, xmlFile = u0, plateKey = xmlFile, customEnvironment = u3})
      table.insert(u1.sharedLoadRequestIds, v4)
      return
    end
    Logging.xmlError(u0, "Missing filename for license plate '%s'", xmlFile)
  end)
  v5 = xmlFile:getValue("licensePlates.colorConfigurations#shaderParameter", "colorMat0")
  self.shaderParameterPlate = v5
  v5 = xmlFile:getValue("licensePlates.colorConfigurations#shaderParameterCharacters", "colorScale")
  self.shaderParameterCharacters = v5
  v5 = xmlFile:getValue("licensePlates.colorConfigurations#useDefaultColors", false)
  self.useDefaultColors = v5
  v5 = xmlFile:getValue("licensePlates.colorConfigurations#defaultColorIndex")
  self.defaultColorIndex = v5
  v5 = xmlFile:getValue("licensePlates.colorConfigurations#defaultColorMaxBrightness", 0.55)
  self.defaultColorMaxBrightness = v5
  xmlFile:iterate("licensePlates.colorConfigurations.colorConfiguration", function(self, xmlFile)
    local baseDirectory = baseDirectory:getValue(xmlFile .. "#name", "", u1.customEnvironment, false)
    local v3 = v3:getValue(xmlFile .. "#color", nil, true)
    local v4 = v4:getValue(xmlFile .. "#isDefault", false)
    if v3 ~= nil then
      if v4 then
        u2 = self
      end
      table.insert(u1.colorConfigurations, {name = baseDirectory, color = v3, isDefault = v4})
    end
  end)
  if self.defaultColorIndex ~= nil then
    self.defaultColorIndex = self.defaultColorIndex + #self.colorConfigurations
  else
    self.defaultColorIndex = 1
  end
  self.colors = {}
  -- TODO: structure LOP_FORNPREP (pc 89, target 101)
  table.insert(self.colors, self.colorConfigurations[1])
  -- TODO: structure LOP_FORNLOOP (pc 100, target 90)
  if self.useDefaultColors then
    -- TODO: structure LOP_FORNPREP (pc 109, target 197)
    local v11 = v11:convertText(g_vehicleColors[1].name)
    if g_vehicleColors[1].r ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L159
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L159
    elseif g_vehicleColors[1].brandColor ~= nil then
      v11 = v11:getBrandColorByName(g_vehicleColors[1].brandColor)
    end
    v11 = MathUtil.getBrightnessFromColor(v10.color[1], v10.color[2], v10.color[3])
    if v11 < self.defaultColorMaxBrightness then
      table.insert(self.colors, v10)
    end
    -- TODO: structure LOP_FORNLOOP (pc 196, target 110)
  end
  self.defaultPlacementIndex = LicensePlateManager.PLACEMENT_OPTION.BOTH
  local placementStr = xmlFile:getValue("licensePlates.placement#defaultType")
  if placementStr ~= nil then
    local v9 = placementStr:upper()
    if not LicensePlateManager.PLACEMENT_OPTION[v9] then
    end
    self.defaultPlacementIndex = v7
  end
end
function LicensePlateManager:licensePlateI3DFileLoaded(i3dNode, failedReason, args)
  if i3dNode ~= nil and i3dNode ~= 0 then
    local v8 = args.xmlFile:getValue(args.plateKey .. "#node", nil, i3dNode)
    if v8 ~= nil then
      unlink(v8)
      local licensePlate = LicensePlate.new()
      local v10 = licensePlate:loadFromXML(v8, args.filename, args.customEnvironment, args.xmlFile, args.plateKey)
      if v10 then
        table.insert(self.licensePlates, licensePlate)
      end
    end
    delete(i3dNode)
  end
  self.xmlReferences = self.xmlReferences - 1
  if self.xmlReferences == 0 then
    v5:delete()
    if 0 >= #self.licensePlates then
    end
    self.licensePlatesAvailable = true
    if v5 == self.licensePlateXML then
      self.licensePlateXML = nil
    end
  end
end
function LicensePlateManager:getAreLicensePlatesAvailable()
  if self.licensePlatesAvailable then
    local xmlFile = xmlFile:getFontMaterial(self.fontName, self.customEnvironment)
  end
  return xmlFile
end
function LicensePlateManager:getLicensePlate(preferedType, includeFrame)
  -- TODO: structure LOP_FORNPREP (pc 8, target 20)
  if self.licensePlates[1]["type"] == preferedType then
  end
  -- TODO: structure LOP_FORNLOOP (pc 19, target 9)
  if v3 ~= nil then
    return v3:clone(includeFrame)
  end
end
function LicensePlateManager.getLicensePlateValues(v0, xmlFile, baseDirectory)
  if xmlFile.variations[baseDirectory] ~= nil then
    return xmlFile.variations[baseDirectory].values
  end
end
function LicensePlateManager:getRandomLicensePlateData()
  if self.licensePlates[1] ~= nil then
    local baseDirectory = self.licensePlates[1]:getRandomCharacters(1)
    local v5 = self:getDefaultPlacementIndex()
    return {variation = 1, characters = baseDirectory, colorIndex = self.defaultColorIndex, placementIndex = v5}
  end
  local v3 = self:getDefaultPlacementIndex()
  return {variation = 1, characters = nil, colorIndex = nil, placementIndex = v3}
end
function LicensePlateManager:getAvailableColors()
  return self.colors, self.defaultColorIndex
end
function LicensePlateManager:getDefaultPlacementIndex()
  return self.defaultPlacementIndex
end
function LicensePlateManager:getFont()
  return xmlFile:getFontMaterial(self.fontName, self.customEnvironment)
end
function LicensePlateManager.readLicensePlateData(streamId, connection)
  local valid = streamReadBool(streamId)
  if valid then
    local v4 = streamReadUIntN(streamId, LicensePlateManager.SEND_NUM_BITS_VARIATION)
    v4 = streamReadUIntN(streamId, LicensePlateManager.SEND_NUM_BITS_COLOR)
    v4 = streamReadUIntN(streamId, LicensePlateManager.SEND_NUM_BITS_PLACEMENT)
    v4 = v4:getFont()
    local v5 = streamReadUIntN(streamId, LicensePlateManager.SEND_NUM_BITS_CHARACTER)
    -- TODO: structure LOP_FORNPREP (pc 68, target 90)
    local v9 = streamReadUIntN(streamId, LicensePlateManager.SEND_NUM_BITS_CHARACTER)
    local v10 = v4:getCharacterByCharacterIndex(v9)
    table.insert({variation = 1, characters = nil, colorIndex = nil, placementIndex = 1, variation = v4, colorIndex = v4, placementIndex = v4, characters = {}}.characters, v10)
    -- TODO: structure LOP_FORNLOOP (pc 89, target 69)
  end
  return baseDirectory
end
function LicensePlateManager.writeLicensePlateData(streamId, connection, licensePlateData)
  if licensePlateData ~= nil and licensePlateData.variation ~= nil and licensePlateData.characters ~= nil and licensePlateData.colorIndex ~= nil and licensePlateData.placementIndex == nil then
  end
  local v3 = v3(v4, v5)
  if v3 then
    streamWriteUIntN(streamId, licensePlateData.variation, LicensePlateManager.SEND_NUM_BITS_VARIATION)
    streamWriteUIntN(streamId, licensePlateData.colorIndex, LicensePlateManager.SEND_NUM_BITS_COLOR)
    streamWriteUIntN(streamId, licensePlateData.placementIndex, LicensePlateManager.SEND_NUM_BITS_PLACEMENT)
    v3 = v3:getFont()
    streamWriteUIntN(streamId, #licensePlateData.characters, LicensePlateManager.SEND_NUM_BITS_CHARACTER)
    -- TODO: structure LOP_FORNPREP (pc 80, target 97)
    local v7 = v3:getCharacterIndexByCharacter(licensePlateData.characters[1])
    streamWriteUIntN(streamId, v7, LicensePlateManager.SEND_NUM_BITS_CHARACTER)
    -- TODO: structure LOP_FORNLOOP (pc 96, target 81)
  end
end
function LicensePlateManager:loadLicensePlateDataFromXML(xmlFile, baseDirectory)
  local v3 = self:hasProperty(xmlFile .. "#variation")
  if v3 then
    if baseDirectory then
      local v5 = self:getString(xmlFile .. "#configuration")
    else
      local placementStr = self:getString(xmlFile .. "#configuration")
      v5 = NetworkUtil.convertFromNetworkFilename(...)
    end
    v5 = self:getInt(xmlFile .. "#variation")
    v4.variation = v5
    v5 = self:getInt(xmlFile .. "#color")
    v4.colorIndex = v5
    v5 = self:getInt(xmlFile .. "#placement")
    v4.placementIndex = v5
    v5 = v5:getFont()
    v4.characters = {}
    placementStr = self:getString(xmlFile .. "#characters")
    local v7 = placementStr:len()
    -- TODO: structure LOP_FORNPREP (pc 75, target 88)
    local v13 = placementStr:sub(1, 1)
    table.insert(...)
    -- TODO: structure LOP_FORNLOOP (pc 87, target 76)
    return v4
  end
  return nil
end
function LicensePlateManager:saveLicensePlateDataToXML(xmlFile, baseDirectory, v3)
  if baseDirectory ~= nil and baseDirectory.variation ~= nil and baseDirectory.characters ~= nil and baseDirectory.colorIndex ~= nil and baseDirectory.placementIndex == nil then
  end
  if v4 then
    self:setInt(xmlFile .. "#variation", baseDirectory.variation)
    self:setInt(xmlFile .. "#color", baseDirectory.colorIndex)
    self:setInt(xmlFile .. "#placement", baseDirectory.placementIndex)
    local v8 = table.concat(baseDirectory.characters, "")
    self:setString(...)
    if v3 then
      self:setString(xmlFile .. "#configuration", baseDirectory.xmlFilename)
      return
    end
    v8 = NetworkUtil.convertToNetworkFilename(baseDirectory.xmlFilename)
    self:setString(...)
  end
end
function LicensePlateManager.createLicensePlateXMLSchema()
  if LicensePlateManager.xmlSchema == nil then
    local schema = XMLSchema.new("mapLicensePlates")
    LicensePlate.registerXMLPaths(schema, "licensePlates.licensePlate(?)")
    schema:register(XMLValueType.STRING, "licensePlates.font#name", "License plate font name", "GENERIC")
    schema:register(XMLValueType.STRING, "licensePlates.colorConfigurations#shaderParameter", "Color shader parameter", "colorMat0")
    schema:register(XMLValueType.STRING, "licensePlates.colorConfigurations#shaderParameterCharacters", "Color shader parameter of characters", "colorSale")
    schema:register(XMLValueType.BOOL, "licensePlates.colorConfigurations#useDefaultColors", "License plate can be colored with all available default colors", false)
    schema:register(XMLValueType.INT, "licensePlates.colorConfigurations#defaultColorIndex", "Default selected color")
    schema:register(XMLValueType.FLOAT, "licensePlates.colorConfigurations#defaultColorMaxBrightness", "Default colors with higher brightness will be skipped", 0.55)
    schema:register(XMLValueType.L10N_STRING, "licensePlates.colorConfigurations.colorConfiguration(?)#name", "Name of color to display")
    schema:register(XMLValueType.COLOR, "licensePlates.colorConfigurations.colorConfiguration(?)#color", "Color values")
    schema:register(XMLValueType.BOOL, "licensePlates.colorConfigurations.colorConfiguration(?)#isDefault", "Color is default selected")
    schema:register(XMLValueType.STRING, "licensePlates.placement#defaultType", "Default type of placement (none/both/back_only)", "both")
    LicensePlateManager.xmlSchema = schema
  end
end
local xmlFile = LicensePlateManager.new()
g_licensePlateManager = v1
