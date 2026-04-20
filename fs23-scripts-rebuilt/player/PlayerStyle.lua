-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStyle = {}
local PlayerStyle_mt = Class(PlayerStyle)
PlayerStyle.ATLAS_COLUMNS = 16
PlayerStyle.ATLAS_ROWS = 16
PlayerStyle.SEND_NUM_BITS = 7
function PlayerStyle.newRandomHelper()
  local style = PlayerStyle.new()
  local v3 = v3:getRandomHelperModel()
  style:loadConfigurationXML(...)
  return style
end
function PlayerStyle:newHelper()
  local v1 = PlayerStyle.new()
  v1:loadConfigurationXML(self.modelFilename)
  return v1
end
function PlayerStyle.defaultStyle()
  local style = PlayerStyle.new()
  style.xmlFilename = "dataS/character/humans/player/player01.xml"
  style.bottomConfig.selection = 1
  style.topConfig.selection = 4
  style.footwearConfig.selection = 1
  style.hairStyleConfig.selection = 2
  style.hairStyleConfig.color = 6
  style.faceConfig.selection = 1
  return style
end
function PlayerStyle.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.beardConfig = {items = {}, selection = 0, setter = v1.setBeard, listMappingGetter = v1.getPossibleBeards, color = 1, colorSetter = v1.setHairItemColor}
  v1.bottomConfig = {items = {}, selection = 0, setter = v1.setBottom, listMappingGetter = v1.getPossibleBottoms, color = 1, colorSetter = v1.setItemColor}
  v1.faceConfig = {items = {}, selection = 0, setter = v1.setFace, listMappingGetter = v1.getPossibleFaces, color = 1, colorSetter = v1.setItemColor}
  v1.footwearConfig = {items = {}, selection = 0, setter = v1.setFootwear, listMappingGetter = v1.getPossibleFootwear, color = 1, colorSetter = v1.setItemColor}
  v1.glassesConfig = {items = {}, selection = 0, setter = v1.setGlasses, listMappingGetter = v1.getPossibleGlasses, color = 1, colorSetter = v1.setItemColor}
  v1.glovesConfig = {items = {}, selection = 0, setter = v1.setGloves, listMappingGetter = v1.getPossibleGloves, color = 1, colorSetter = v1.setItemColor}
  v1.hairStyleConfig = {items = {}, selection = 0, setter = v1.setHairStyle, listMappingGetter = v1.getPossibleHairStyles, color = 1, colorSetter = v1.setHairItemColor}
  v1.headgearConfig = {items = {}, selection = 0, setter = v1.setHeadgear, listMappingGetter = v1.getPossibleHeadgear, color = 1, colorSetter = v1.setItemColor}
  v1.mustacheConfig = {items = {}, selection = 0, setter = v1.setMustache, listMappingGetter = v1.getPossibleMustaches, color = 1, colorSetter = v1.setHairItemColor}
  v1.onepieceConfig = {items = {}, selection = 0, setter = v1.setOnepiece, listMappingGetter = v1.getPossibleOnepieces, color = 1, colorSetter = v1.setItemColor}
  v1.topConfig = {items = {}, selection = 0, setter = v1.setTop, listMappingGetter = v1.getPossibleTops, color = 1, colorSetter = v1.setItemColor}
  v1.facegearConfig = {items = {}, selection = 0, setter = v1.setFacegear, listMappingGetter = nil, color = 1, colorSetter = nil}
  v1.beardConfig.color = v1.hairStyleConfig.color
  v1.mustacheConfig.color = v1.hairStyleConfig.color
  v1.faceConfig.selection = 1
  v1.hairStyleConfig.selection = 2
  v1.disabledOptionsForSelection = {}
  v1.presets = {}
  v1.isConfigurationLoaded = false
  return v1
end
function PlayerStyle.delete(v0)
end
function PlayerStyle:copyFrom(other)
  if other == self then
    return
  end
  self.xmlFilename = other.xmlFilename
  self.filename = other.filename
  self.atlasFilename = other.atlasFilename
  self.attachPoints = other.attachPoints
  if other.beardConfig ~= nil then
    local v3 = table.copy(other.beardConfig)
    self.beardConfig = v3
  end
  if other.bottomConfig ~= nil then
    v3 = table.copy(other.bottomConfig)
    self.bottomConfig = v3
  end
  if other.faceConfig ~= nil then
    v3 = table.copy(other.faceConfig)
    self.faceConfig = v3
  end
  if other.footwearConfig ~= nil then
    v3 = table.copy(other.footwearConfig)
    self.footwearConfig = v3
  end
  if other.glassesConfig ~= nil then
    v3 = table.copy(other.glassesConfig)
    self.glassesConfig = v3
  end
  if other.glovesConfig ~= nil then
    v3 = table.copy(other.glovesConfig)
    self.glovesConfig = v3
  end
  if other.hairStyleConfig ~= nil then
    v3 = table.copy(other.hairStyleConfig)
    self.hairStyleConfig = v3
  end
  if other.headgearConfig ~= nil then
    v3 = table.copy(other.headgearConfig)
    self.headgearConfig = v3
  end
  if other.mustacheConfig ~= nil then
    v3 = table.copy(other.mustacheConfig)
    self.mustacheConfig = v3
  end
  if other.onepieceConfig ~= nil then
    v3 = table.copy(other.onepieceConfig)
    self.onepieceConfig = v3
  end
  if other.topConfig ~= nil then
    v3 = table.copy(other.topConfig)
    self.topConfig = v3
  end
  if other.facegearConfig ~= nil then
    v3 = table.copy(other.facegearConfig)
    self.facegearConfig = v3
  end
  self.beardConfig.color = self.hairStyleConfig.color
  self.mustacheConfig.color = self.hairStyleConfig.color
  if other.isConfigurationLoaded then
    self.faceNeutralDiffuseColor = other.faceNeutralDiffuseColor
    self.bodyParts = other.bodyParts
    self.bodyPartIndexByName = other.bodyPartIndexByName
    self.hatHairstyleIndex = other.hatHairstyleIndex
    self.presets = other.presets
    self.isConfigurationLoaded = true
    self:updateDisabledOptions()
    return
  end
  self.isConfigurationLoaded = false
end
function PlayerStyle:copyMinimalFrom(other)
  if other == self then
    return
  end
  self.xmlFilename = other.xmlFilename
  self.isConfigurationLoaded = false
  if other.beardConfig ~= nil then
    self.beardConfig.selection = other.beardConfig.selection
    self.beardConfig.color = other.beardConfig.color
  end
  if other.bottomConfig ~= nil then
    self.bottomConfig.selection = other.bottomConfig.selection
    self.bottomConfig.color = other.bottomConfig.color
  end
  if other.faceConfig ~= nil then
    self.faceConfig.selection = other.faceConfig.selection
    self.faceConfig.color = other.faceConfig.color
  end
  if other.footwearConfig ~= nil then
    self.footwearConfig.selection = other.footwearConfig.selection
    self.footwearConfig.color = other.footwearConfig.color
  end
  if other.glassesConfig ~= nil then
    self.glassesConfig.selection = other.glassesConfig.selection
    self.glassesConfig.color = other.glassesConfig.color
  end
  if other.glovesConfig ~= nil then
    self.glovesConfig.selection = other.glovesConfig.selection
    self.glovesConfig.color = other.glovesConfig.color
  end
  if other.hairStyleConfig ~= nil then
    self.hairStyleConfig.selection = other.hairStyleConfig.selection
    self.hairStyleConfig.color = other.hairStyleConfig.color
  end
  if other.headgearConfig ~= nil then
    self.headgearConfig.selection = other.headgearConfig.selection
    self.headgearConfig.color = other.headgearConfig.color
  end
  if other.mustacheConfig ~= nil then
    self.mustacheConfig.selection = other.mustacheConfig.selection
    self.mustacheConfig.color = other.mustacheConfig.color
  end
  if other.onepieceConfig ~= nil then
    self.onepieceConfig.selection = other.onepieceConfig.selection
    self.onepieceConfig.color = other.onepieceConfig.color
  end
  if other.topConfig ~= nil then
    self.topConfig.selection = other.topConfig.selection
    self.topConfig.color = other.topConfig.color
  end
  if other.facegearConfig ~= nil then
    self.facegearConfig.selection = other.facegearConfig.selection
    self.facegearConfig.color = other.facegearConfig.color
  end
  self.beardConfig.color = self.hairStyleConfig.color
  self.mustacheConfig.color = self.hairStyleConfig.color
end
function PlayerStyle:loadConfigurationXML(xmlFilename)
  local xmlFile = XMLFile.load("player", xmlFilename)
  if xmlFile == nil then
    Logging.error("Player config does not exist at %s. Loading default instead", xmlFilename)
    local v3 = XMLFile.load("player", "dataS/character/humans/player/player01.xml")
    if v3 == nil then
      Logging.fatal("Default player config does not exist at %s", "dataS/character/humans/player/player01.xml")
    end
  end
  self.xmlFilename = xmlFilename
  local v4 = xmlFile:getString("player.filename")
  self.filename = v4
  v4 = xmlFile:getString("player.character.playerStyle#atlas")
  self.atlasFilename = v4
  local v5 = xmlFile:getInt("player.character.thirdPerson#skeleton")
  self.skeletonRootIndex = v5 or 0
  self.attachPoints = {}
  xmlFile:iterate("player.character.playerStyle" .. ".attachPoints.attachPoint", function(self, xmlFilename)
    local xmlFile = xmlFile:getString(xmlFilename .. "#name")
    local v5 = v5:getString(xmlFilename .. "#node")
    local v3 = v3:parseIndex(...)
    u1.attachPoints[xmlFile] = v3
  end)
  if self.faceConfig.selection ~= 0 and self.faceConfig.items[self.faceConfig.selection] ~= nil then
  end
  self.faceConfig.items = {}
  self.facesByName = {}
  xmlFile:iterate("player.character.playerStyle" .. ".faces.face", function(self, xmlFilename)
    local xmlFile = xmlFile:getString(xmlFilename .. "#node")
    local v3 = v3:getString(xmlFilename .. "#name")
    local v5 = v5:getString(xmlFilename .. "#skinColor")
    local v4 = string.getVectorN(v5, 3)
    v5 = v5:getInt(xmlFilename .. "#uvSlot")
    local v6 = v6:getString(xmlFilename .. "#filename")
    local v8 = v8:getString(xmlFilename .. "#attachPoint")
    if u1.attachPoints[v8 or ""] == nil then
      Logging.xmlError(u0, "Attach point with name '%s' does not exist for %s", v8 or "", v3)
      return
    end
    table.insert(u1.faceConfig.items, {index = xmlFile, name = v3, skinColor = v4, uvSlot = v5, numColors = 0, filename = v6, attachNode = v8})
    if u1.facesByName[v3] ~= nil then
      Logging.devError("Wardrobe face name '%s' already used", v3)
    end
    u1.facesByName[v3] = #u1.faceConfig.items
    if v3 == u2 then
      u1.faceConfig.selection = #u1.faceConfig.items
    end
  end)
  v5 = xmlFile:getString("player.character.playerStyle" .. ".faces#neutralDiffuse")
  v4 = string.getVectorN(v5, 3)
  self.faceNeutralDiffuseColor = v4
  self.bodyParts = {}
  self.bodyPartIndexByName = {}
  xmlFile:iterate("player.character.playerStyle" .. ".bodyParts.bodyPart", function(self, xmlFilename)
    local v4 = v4:getString(xmlFilename .. "#node")
    local xmlFile = xmlFile:parseIndex(...)
    local v3 = v3:getString(xmlFilename .. "#name")
    table.insert(u0.bodyParts, {index = xmlFile, name = v3})
    if u0.bodyPartIndexByName[v3] ~= nil then
      Logging.devError("Wardrobe body part name '%s' already used", v3)
    end
    u0.bodyPartIndexByName[v3] = #u0.bodyParts
  end)
  self:loadColors(xmlFile, "player.character.playerStyle" .. ".colors.hair.color", "hairColors")
  self:loadColors(xmlFile, "player.character.playerStyle" .. ".colors.clothing.color", "defaultClothingColors")
  v4 = self:loadClothing(xmlFile, "player.character.playerStyle" .. ".tops", "top", "topConfig", true)
  v5 = self:loadClothing(xmlFile, "player.character.playerStyle" .. ".bottoms", "bottom", "bottomConfig", true)
  local v6 = self:loadClothing(xmlFile, "player.character.playerStyle" .. ".footwear", "footwear", "footwearConfig", true)
  local v7 = self:loadClothing(xmlFile, "player.character.playerStyle" .. ".gloves", "glove", "glovesConfig", true)
  local v8 = self:loadClothing(xmlFile, "player.character.playerStyle" .. ".glasses", "glasses", "glassesConfig")
  local v9 = self:loadClothing(xmlFile, "player.character.playerStyle" .. ".onepieces", "onepiece", "onepieceConfig", true)
  local v10 = self:loadClothing(xmlFile, "player.character.playerStyle" .. ".facegear", "facegear", "facegearConfig", true, false, true)
  local v11 = self:loadClothing(xmlFile, "player.character.playerStyle" .. ".headgear", "headgear", "headgearConfig", true, false, false, true)
  self:loadClothing(xmlFile, "player.character.playerStyle" .. ".hairStyles", "hairStyle", "hairStyleConfig", true, true, nil, nil, true)
  self:loadClothing(xmlFile, "player.character.playerStyle" .. ".beards", "beard", "beardConfig", true, true, true)
  self:loadClothing(xmlFile, "player.character.playerStyle" .. ".mustaches", "mustache", "mustacheConfig", true, true, true)
  self.presets = {}
  xmlFile:iterate("player.character.playerStyle" .. ".presets.preset", function(self, xmlFilename)
    local xmlFile = xmlFile:getString(xmlFilename .. "#text")
    local v3 = v3:getString(xmlFilename .. "#name")
    local v5 = v5:getString(xmlFilename .. "#brand")
    if v5 ~= nil and g_brandManager ~= nil then
      local v6 = v6:getBrandByName(v5)
      if v6 ~= nil then
      end
    end
    if u1[v3] ~= nil then
      Logging.devError("Wardrobe preset name '%s' already used", v3)
    end
    local v7 = v7:getInt(xmlFilename .. "#uvSlot")
    v7 = v7:getString(xmlFilename .. "#extraContentId")
    v7 = v7:getBool(xmlFilename .. "#isSelectable", true)
    u1[v3] = {name = v3, text = xmlFile, uvSlot = v7, brand = v4, brandName = v5, extraContentId = v7, isSelectable = v7}
    local v8 = v8:getString(xmlFilename .. ".face#name")
    if v8 ~= nil then
    end
    local v11 = v11:getString(xmlFilename .. ".top#name")
    local v9 = v7(...)
    v6.top = v9
    v11 = v11:getString(xmlFilename .. ".bottom#name")
    v9 = v7(...)
    v6.bottom = v9
    v11 = v11:getString(xmlFilename .. ".onepiece#name")
    v9 = v7(...)
    v6.onepiece = v9
    v11 = v11:getString(xmlFilename .. ".glasses#name")
    v9 = v7(...)
    v6.glasses = v9
    v11 = v11:getString(xmlFilename .. ".gloves#name")
    v9 = v7(...)
    v6.gloves = v9
    v11 = v11:getString(xmlFilename .. ".headgear#name")
    v9 = v7(...)
    v6.headgear = v9
    v11 = v11:getString(xmlFilename .. ".footwear#name")
    v9 = v7(...)
    v6.footwear = v9
    v11 = v11:getString(xmlFilename .. ".facegear#name")
    v9 = v7(...)
    v6.facegear = v9
    table.insert(u2.presets, v6)
  end)
  self.isConfigurationLoaded = true
  xmlFile:delete()
end
function PlayerStyle:loadClothing(xmlFile, rootKey, itemKey, configName, isColorable, isHair, isFaceSpecific, isHeadgear, resetToOne)
  if self[configName].selection ~= 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L28
    -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L28
  else
  end
  v10.selection = 0
  if resetToOne then
    v10.selection = 1
  end
  v10.items = {}
  xmlFile:iterate(rootKey .. "." .. itemKey, function(self, xmlFile)
    local rootKey = rootKey:getString(xmlFile .. "#node")
    local itemKey = itemKey:getString(xmlFile .. "#node2")
    local configName = configName:getString(xmlFile .. "#name")
    local isColorable = isColorable:getString(xmlFile .. "#text")
    local isHair = isHair:getString(xmlFile .. "#extent")
    local isFaceSpecific = isFaceSpecific:getBool(xmlFile .. "#hidden")
    local isHeadgear = isHeadgear:getInt(xmlFile .. "#uvSlot")
    local resetToOne = resetToOne:getString(xmlFile .. "#extraContentId")
    local v10 = v10:getBool(xmlFile .. "#hideGlasses", false)
    local v11 = v11:getBool(xmlFile .. "#isForestryItem", false)
    local v13 = v13:getString(xmlFile .. "#brand")
    if v13 ~= nil and g_brandManager ~= nil then
      local emptyUVSlot = emptyUVSlot:getBrandByName(v13)
      if emptyUVSlot ~= nil then
      end
    end
    emptyUVSlot = emptyUVSlot:getString(xmlFile .. "#filename")
    local v16 = v16:getString(xmlFile .. "#attachPoint")
    if u1.attachPoints[v16 or ""] == nil then
      Logging.xmlError(u0, "Attach point with name '%s' does not exist for %s", v16 or "", configName)
      return
    end
    if u3 then
      local v18 = v18:getBool(xmlFile .. "#forHat")
      if {filename = emptyUVSlot, index = rootKey, index2 = itemKey, attachNode = v16, name = configName, text = isColorable, extent = isHair, hidden = isFaceSpecific or false, hiddenBodyParts = {}, disabledOptions = {}, uvSlot = isHeadgear, itemIndex = #u2.items + 1, hideGlasses = v10, brand = v12, brandName = v13, extraContentId = resetToOne, isForestryItem = v11, forHat = v18}.forHat then
        u1.hatHairstyleIndex = #u2.items + 1
      end
    end
    if u4 then
      v18 = v18:getString(xmlFile .. "#face")
      if v18 ~= nil then
        v17.face = u1.facesByName[v18]
      end
      local v19 = v19:hasProperty(xmlFile .. ".transform")
      if v19 then
        v17.transforms = {}
        v19:iterate(xmlFile .. ".transform", function(self, xmlFile)
          local isColorable = isColorable:getString(xmlFile .. "#face")
          local itemKey = itemKey:getVector(xmlFile .. "#translation")
          itemKey = itemKey:getVector(xmlFile .. "#rotation")
          itemKey = itemKey:getVector(xmlFile .. "#scale")
          u2.transforms[{face = u0.facesByName[isColorable], translation = itemKey, rotation = itemKey, scale = itemKey}.face] = {face = u0.facesByName[isColorable], translation = itemKey, rotation = itemKey, scale = itemKey}
        end)
      end
    end
    v18 = v18:getInt(xmlFile .. "#colorable", 0)
    v17.numColors = v18
    if 1 <= v17.numColors then
      v18 = v18:hasProperty(xmlFile .. ".colors")
      if v18 then
        v17.colors = {}
        v18:iterate(xmlFile .. ".colors.color", function(self, xmlFile)
          local itemKey = itemKey:getString(xmlFile .. "#primary")
          local rootKey = string.getVectorN(itemKey, 4)
          local configName = configName:getString(xmlFile .. "#secondary")
          itemKey = string.getVectorN(configName, 4)
          table.insert(u1.colors, {primary = rootKey, secondary = itemKey})
        end)
      else
        v17.colors = u1.defaultClothingColors
      end
      v18 = v18:getVector(xmlFile .. "#defaultPrimary", 4)
      if v18 ~= nil then
        for v23, v24 in ipairs(v17.colors) do
          local v25 = table.equals(v24.primary, v18)
          if not v25 then
            continue
          end
          break
        end
        if v19 == 0 then
          Logging.xmlWarning(u0, "Item %s has no valid default color. The color must exist in its palette.", configName)
        else
          v17.defaultColor = v19
        end
      end
    end
    if u3 then
      v17.numColors = 1
      v17.colors = u1.hairColors
    end
    v18:iterate(xmlFile .. ".hidesBodypart", function(self, xmlFile)
      local rootKey = rootKey:getString(xmlFile .. "#name")
      if rootKey ~= nil and u1.bodyPartIndexByName[rootKey] ~= nil then
        table.insert(u2.hiddenBodyParts, u1.bodyPartIndexByName[rootKey])
      end
    end)
    v18:iterate(xmlFile .. ".disablesOption", function(self, xmlFile)
      local rootKey = rootKey:getString(xmlFile .. "#name")
      if rootKey ~= nil then
        u1.disabledOptions[rootKey] = rootKey
      end
    end)
    v18:iterate(xmlFile .. ".extent", function(self, xmlFile)
      if not u0.extents then
      end
      rootKey.extents = itemKey
      local rootKey = rootKey:getString(xmlFile .. "#node")
      local itemKey = itemKey:getString(xmlFile .. "#type")
      u0.extents[itemKey] = rootKey
    end)
    v18 = v18:getString(xmlFile .. ".belt#node")
    v17.belt = v18
    v18 = v18:getBool(xmlFile .. "#beltHidden")
    v17.beltHidden = v18
    if u5[configName] ~= nil then
      Logging.devError("Wardrobe config name '%s' already used", configName)
    end
    table.insert(u2.items, v17)
    u5[configName] = #u2.items
    if configName == u6 then
      u2.selection = #u2.items
    end
  end)
  local emptyUVSlot = xmlFile:getInt(rootKey .. "#nullUVSlot")
  if emptyUVSlot ~= nil then
    v10.items[0] = {uvSlot = emptyUVSlot, numColors = 0}
  end
  if v10.selection ~= 0 then
    -- cmp-jump LOP_JUMPXEQKN R15 aux=0x8000000b -> L114
    -- if not v9 then goto L114 end
  end
  if v11 == nil and v12 ~= 0 then
    if v10.items[0] ~= nil then
    end
    local v17 = math.max(v12 or 0, v15)
    local v16 = math.min(v17, #v10.items)
    v10.selection = v16
  end
  return v13
end
function PlayerStyle:parseIndex(index)
  if index == nil then
    return nil
  end
  local v2 = index:sub(1, 2)
  if v2 == self.skeletonRootIndex .. "|" then
    local v3 = index:sub(3)
    return {isSkeleton = true, path = v3}
  end
  v3 = index:sub(3)
  return {isSkeleton = false, path = v3}
end
function PlayerStyle:loadColors(xmlFile, rootKey, listName)
  self[listName] = {}
  xmlFile:iterate(rootKey, function(self, xmlFile)
    local listName = listName:getString(xmlFile .. "#primary")
    local rootKey = string.getVectorN(listName, 4)
    local v4 = v4:getString(xmlFile .. "#secondary")
    listName = string.getVectorN(v4, 4)
    if rootKey ~= nil then
      table.insert(u1[u2], {primary = rootKey, secondary = listName})
      v4 = v4:getBool(xmlFile .. "#default")
      if v4 then
        u1[u2].default = #u1[u2]
      end
    end
  end)
end
function PlayerStyle:saveToXMLFile(xmlFile, key)
  xmlFile:setString(key .. "#filename", self.xmlFilename)
  self:loadConfigurationIfRequired()
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("beardConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("bottomConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("faceConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("footwearConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("glassesConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("glovesConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("hairStyleConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("headgearConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("mustacheConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("onepieceConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("topConfig")
  function(self)
    v3:removeProperty(u2 .. "#" .. self)
    v3:removeProperty(u2 .. "#" .. self .. "Id")
    v3:removeProperty(u2 .. "#" .. self .. "Color")
    if u0[self].selection ~= 0 then
      v4:setString(u2 .. "#" .. self .. "Id", u0[self].items[u0[self].selection].name)
    end
    if key ~= 0 and u0[self].color ~= nil then
      v3:setInt(u2 .. "#" .. self .. "Color", u0[self].color)
    end
  end("facegearConfig")
end
function PlayerStyle:loadFromXMLFile(xmlFile, key)
  local v3 = xmlFile:getString(key .. "#filename")
  self.xmlFilename = v3
  self:loadConfigurationIfRequired()
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("beardConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("bottomConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("faceConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("footwearConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("glassesConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("glovesConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("hairStyleConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("headgearConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("mustacheConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("onepieceConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("topConfig")
  function(self)
    local xmlFile = xmlFile:getString(u1 .. "#" .. self .. "Id")
    if xmlFile ~= nil then
      for v6, v7 in ipairs(u2[self].items) do
        if not (v7.name == xmlFile) then
          continue
        end
        break
      end
    end
    if key == 0 then
      v3 = v3:getInt(u1 .. "#" .. self, u2[self].selection)
    end
    u2[self].selection = key
    if key ~= 0 then
      v4 = v4:getInt(u1 .. "#" .. self .. "Color", u2[self].color)
      u2[self].color = v4
    end
  end("facegearConfig")
  self.beardConfig.color = self.hairStyleConfig.color
  self.mustacheConfig.color = self.hairStyleConfig.color
end
function PlayerStyle:readStream(streamId, connection)
  local v4 = streamReadString(streamId)
  local v3 = NetworkUtil.convertFromNetworkFilename(...)
  self.xmlFilename = v3
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.beardConfig.selection = v4
  local v6 = self:readStreamColor(streamId)
  self.beardConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.bottomConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.bottomConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.faceConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.faceConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.footwearConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.footwearConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.glassesConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.glassesConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.glovesConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.glovesConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.hairStyleConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.hairStyleConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.headgearConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.headgearConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.mustacheConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.mustacheConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.onepieceConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.onepieceConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.topConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.topConfig.color = v6
  v4 = streamReadUIntN(streamId, PlayerStyle.SEND_NUM_BITS)
  self.facegearConfig.selection = v4
  v6 = self:readStreamColor(streamId)
  self.facegearConfig.color = v6
end
function PlayerStyle:writeStream(streamId, connection)
  local v5 = NetworkUtil.convertToNetworkFilename(self.xmlFilename)
  streamWriteString(...)
  streamWriteUIntN(streamId, self.beardConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.beardConfig.color)
  streamWriteUIntN(streamId, self.bottomConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.bottomConfig.color)
  streamWriteUIntN(streamId, self.faceConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.faceConfig.color)
  streamWriteUIntN(streamId, self.footwearConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.footwearConfig.color)
  streamWriteUIntN(streamId, self.glassesConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.glassesConfig.color)
  streamWriteUIntN(streamId, self.glovesConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.glovesConfig.color)
  streamWriteUIntN(streamId, self.hairStyleConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.hairStyleConfig.color)
  streamWriteUIntN(streamId, self.headgearConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.headgearConfig.color)
  streamWriteUIntN(streamId, self.mustacheConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.mustacheConfig.color)
  streamWriteUIntN(streamId, self.onepieceConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.onepieceConfig.color)
  streamWriteUIntN(streamId, self.topConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.topConfig.color)
  streamWriteUIntN(streamId, self.facegearConfig.selection, PlayerStyle.SEND_NUM_BITS)
  self:writeStreamColor(streamId, self.facegearConfig.color)
end
function PlayerStyle.readStreamColor(v0, v1)
  return streamReadUIntN(v1, PlayerStyle.SEND_NUM_BITS)
end
function PlayerStyle.writeStreamColor(v0, v1, v2)
  streamWriteUIntN(v1, v2 or 1, PlayerStyle.SEND_NUM_BITS)
end
function PlayerStyle:loadConfigurationIfRequired()
  if not self.isConfigurationLoaded then
    self:loadConfigurationXML(self.xmlFilename)
  end
end
function PlayerStyle:getRequiredNodeFiles()
  if self.xmlFilename == nil then
    return {}
  end
  self:loadConfigurationIfRequired()
  if self.beardConfig.items[self.beardConfig.selection] ~= nil and self.beardConfig.items[self.beardConfig.selection].filename ~= nil then
    table.insert(v1, self.beardConfig.items[self.beardConfig.selection].filename)
  end
  if self.bottomConfig.items[self.bottomConfig.selection] ~= nil and self.bottomConfig.items[self.bottomConfig.selection].filename ~= nil then
    table.insert(v1, self.bottomConfig.items[self.bottomConfig.selection].filename)
  end
  if self.faceConfig.items[self.faceConfig.selection] ~= nil and self.faceConfig.items[self.faceConfig.selection].filename ~= nil then
    table.insert(v1, self.faceConfig.items[self.faceConfig.selection].filename)
  end
  if self.footwearConfig.items[self.footwearConfig.selection] ~= nil and self.footwearConfig.items[self.footwearConfig.selection].filename ~= nil then
    table.insert(v1, self.footwearConfig.items[self.footwearConfig.selection].filename)
  end
  if self.glassesConfig.items[self.glassesConfig.selection] ~= nil and self.glassesConfig.items[self.glassesConfig.selection].filename ~= nil then
    table.insert(v1, self.glassesConfig.items[self.glassesConfig.selection].filename)
  end
  if self.glovesConfig.items[self.glovesConfig.selection] ~= nil and self.glovesConfig.items[self.glovesConfig.selection].filename ~= nil then
    table.insert(v1, self.glovesConfig.items[self.glovesConfig.selection].filename)
  end
  if self.hairStyleConfig.items[self.hairStyleConfig.selection] ~= nil and self.hairStyleConfig.items[self.hairStyleConfig.selection].filename ~= nil then
    table.insert(v1, self.hairStyleConfig.items[self.hairStyleConfig.selection].filename)
  end
  if self.headgearConfig.items[self.headgearConfig.selection] ~= nil and self.headgearConfig.items[self.headgearConfig.selection].filename ~= nil then
    table.insert(v1, self.headgearConfig.items[self.headgearConfig.selection].filename)
  end
  if self.mustacheConfig.items[self.mustacheConfig.selection] ~= nil and self.mustacheConfig.items[self.mustacheConfig.selection].filename ~= nil then
    table.insert(v1, self.mustacheConfig.items[self.mustacheConfig.selection].filename)
  end
  if self.onepieceConfig.items[self.onepieceConfig.selection] ~= nil and self.onepieceConfig.items[self.onepieceConfig.selection].filename ~= nil then
    table.insert(v1, self.onepieceConfig.items[self.onepieceConfig.selection].filename)
  end
  if self.topConfig.items[self.topConfig.selection] ~= nil and self.topConfig.items[self.topConfig.selection].filename ~= nil then
    table.insert(v1, self.topConfig.items[self.topConfig.selection].filename)
  end
  if self.facegearConfig.items[self.facegearConfig.selection] ~= nil and self.facegearConfig.items[self.facegearConfig.selection].filename ~= nil then
    table.insert(v1, self.facegearConfig.items[self.facegearConfig.selection].filename)
  end
  if self.headgearConfig.selection == 0 then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x14 -> L310
    -- if not v0.onepieceConfig.items[v0.onepieceConfig.selection].disabledOptions.headgear then goto L310 end
  end
  if self.hatHairstyleIndex ~= nil then
    table.insert(v1, self.hairStyleConfig.items[self.hatHairstyleIndex].filename)
  end
  return v1
end
function PlayerStyle:apply(skeleton, mesh, hideBody, models)
  self:loadConfigurationIfRequired()
  if #self.faceConfig.items == 0 then
    return
  end
  for v10, v11 in pairs(self.attachPoints) do
    if v11 == nil then
    elseif v11.isSkeleton then
      local v12 = I3DUtil.indexToObject(skeleton, v11.path)
    else
      v12 = I3DUtil.indexToObject(mesh, v11.path)
      -- goto L43  (LOP_JUMP +0)
    end
    local v16 = getNumOfChildren(v12)
    -- TODO: structure LOP_FORNPREP (pc 50, target 60)
    local v17 = getChildAt(v12, v16 - 1)
    delete(...)
    -- TODO: structure LOP_FORNLOOP (pc 59, target 51)
  end
  if self.faceConfig.selection ~= 0 then
    v7, v8, v9 = unpack(self.faceConfig.items[self.faceConfig.selection].skinColor)
    for v13, v14 in ipairs(self.bodyParts) do
      if v14.index == nil then
      elseif v14.index.isSkeleton then
        v17 = I3DUtil.indexToObject(skeleton, v14.index.path)
      else
        v17 = I3DUtil.indexToObject(mesh, v14.index.path)
        -- goto L114  (LOP_JUMP +0)
      end
      setVisibility(v15, not hideBody)
      setShaderParameter(v15, "colorScaleR", v7, v8, v9, 1, false)
    end
    v12 = math.max(self.faceConfig.selection, 1)
    if models[self.faceConfig.items[v12].filename] == nil then
    else
      v13 = clone(models[self.faceConfig.items[v12].filename], false, false, false)
    end
    if v11 == nil then
      print_r(models)
      printCallstack()
      return
    end
    v12 = I3DUtil.indexToObject(v11, v10.index)
    v13 = getChildAt(v11, 0)
    if v10.attachNode == nil then
    elseif v10.attachNode.isSkeleton then
      v17 = I3DUtil.indexToObject(skeleton, v10.attachNode.path)
    else
      v17 = I3DUtil.indexToObject(mesh, v10.attachNode.path)
      -- goto L209  (LOP_JUMP +0)
    end
    v14(v15, v12)
    v17 = getNumOfChildren(v12)
    -- TODO: structure LOP_FORNPREP (pc 218, target 248)
    v17 = getChildAt(v12, 0)
    setShapeBones(v17, skeleton, v13, true)
    local v18 = getHasShaderParameter(v17, "sssColor")
    if v18 then
      setShaderParameter(v17, "colorScaleR", v7, v8, v9, 1, false)
    end
    -- TODO: structure LOP_FORNLOOP (pc 247, target 219)
    delete(v11)
  end
  if self.topConfig.selection ~= 0 then
    if self.glovesConfig.selection ~= 0 then
      -- if v0.glovesConfig.items[v0.glovesConfig.selection].extent then goto L295 end
    end
    v10 = v10(v11, "hands")
    v8(v10, self.topConfig.items[self.topConfig.selection], self.topConfig.color)
  end
  if self.bottomConfig.selection ~= 0 then
    if self.footwearConfig.selection ~= 0 then
      -- if v0.footwearConfig.items[v0.footwearConfig.selection].extent then goto L348 end
    end
    v11 = v11(v12, "low")
    v8(v11, self.bottomConfig.items[self.bottomConfig.selection], self.bottomConfig.color)
  end
  if self.footwearConfig.selection ~= 0 then
    if self.bottomConfig.selection ~= 0 then
    end
    if self.onepieceConfig.selection ~= 0 then
    end
    v13 = v7(self.footwearConfig.items[self.footwearConfig.selection], v11)
    v8(v13, self.footwearConfig.items[self.footwearConfig.selection], self.footwearConfig.color)
  end
  if self.glovesConfig.selection ~= 0 then
    v12 = v7(self.glovesConfig.items[self.glovesConfig.selection])
    v8(v12, self.glovesConfig.items[self.glovesConfig.selection], self.glovesConfig.color)
  end
  if self.headgearConfig.selection ~= 0 then
    v13 = v7(self.headgearConfig.items[self.headgearConfig.selection])
    v8(v13, self.headgearConfig.items[self.headgearConfig.selection], self.headgearConfig.color)
    if self.headgearConfig.items[self.headgearConfig.selection].hideGlasses then
    end
  end
  if self.glassesConfig.selection ~= 0 and not v11 then
    v7(self.glassesConfig.items[self.glassesConfig.selection])
  end
  if self.hairStyleConfig.selection ~= 0 then
    if self.headgearConfig.selection == 0 then
      -- cmp-jump LOP_JUMPXEQKN R12 aux=0x3 -> L558
      -- if not v0.onepieceConfig.items[v0.onepieceConfig.selection].disabledOptions.headgear then goto L558 end
    end
    if self.hatHairstyleIndex ~= nil then
      v13, v14 = v7(self.hairStyleConfig.items[self.hatHairstyleIndex])
      v9(v13, self.hairStyleConfig.items[self.hatHairstyleIndex])
      v9(v14, self.hairStyleConfig.items[self.hatHairstyleIndex])
    else
      v13, v14 = v7(self.hairStyleConfig.items[self.hairStyleConfig.selection])
      v9(v13, self.hairStyleConfig.items[self.hairStyleConfig.selection])
      v9(v14, self.hairStyleConfig.items[self.hairStyleConfig.selection])
    end
  end
  if self.facegearConfig.selection ~= 0 then
    v7(self.facegearConfig.items[self.facegearConfig.selection])
  else
    if self.mustacheConfig.selection ~= 0 then
      -- TODO: structure LOP_FORNPREP (pc 612, target 653)
      if self.mustacheConfig.items[self.mustacheConfig.selection].face ~= nil and self.mustacheConfig.items[self.mustacheConfig.selection].face ~= self.faceConfig.selection then
        -- cmp-jump LOP_JUMPXEQKN R16 aux=0x80000003 -> L652
        -- cmp-jump LOP_JUMPXEQKN R16 aux=0x8000000c -> L652
      end
      v16, v17 = v7(v15)
      v9(v16, v15)
      v9(v17, v15)
      -- goto L653  (LOP_JUMP +1)
      -- TODO: structure LOP_FORNLOOP (pc 652, target 613)
    end
    if self.beardConfig.selection ~= 0 then
      -- TODO: structure LOP_FORNPREP (pc 669, target 710)
      if self.beardConfig.items[self.beardConfig.selection].face ~= nil and self.beardConfig.items[self.beardConfig.selection].face ~= self.faceConfig.selection then
        -- cmp-jump LOP_JUMPXEQKN R16 aux=0x80000003 -> L709
        -- cmp-jump LOP_JUMPXEQKN R16 aux=0x8000000c -> L709
      end
      v16, v17 = v7(v15)
      v9(v16, v15)
      v9(v17, v15)
      -- goto L710  (LOP_JUMP +1)
      -- TODO: structure LOP_FORNLOOP (pc 709, target 670)
    end
  end
  if self.onepieceConfig.selection ~= 0 then
    if self.glovesConfig.selection ~= 0 then
      -- if v0.glovesConfig.items[v0.glovesConfig.selection].extent then goto L745 end
    end
    if self.footwearConfig.selection ~= 0 then
      -- if v0.footwearConfig.items[v0.footwearConfig.selection].extent then goto L764 end
    end
    v12 = v12(v13, v14, "low")
    v8(v12, self.onepieceConfig.items[self.onepieceConfig.selection], self.onepieceConfig.color)
  end
  if self.topConfig.selection == 0 then
    -- cmp-jump LOP_JUMPXEQKN R12 aux=0x80000003 -> L847
    -- cmp-jump LOP_JUMPXEQKN R12 aux=0x80000003 -> L847
  end
  if self.bottomConfig.selection ~= 0 then
    if self.topConfig.selection ~= 0 then
    end
    if v12.belt ~= nil then
      v14 = I3DUtil.indexToObject(v10, v12.belt)
      setVisibility(v14, not v13)
    end
  end
end
function PlayerStyle:setFace(faceIndex)
  if faceIndex ~= self.faceConfig.selection then
    self.faceConfig.selection = faceIndex
  end
end
function PlayerStyle:setHairStyle(hairStyleIndex)
  self.hairStyleConfig.selection = hairStyleIndex
end
function PlayerStyle:setBeard(beardIndex)
  self.beardConfig.selection = beardIndex
end
function PlayerStyle:setMustache(mustacheIndex)
  self.mustacheConfig.selection = mustacheIndex
end
function PlayerStyle:setHeadgear(headgearIndex, force)
  if self.headgearConfig.selection == headgearIndex then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000001 -> L34
  end
  self.headgearConfig.selection = headgearIndex
  if self.headgearConfig.items[headgearIndex] ~= nil and 1 <= self.headgearConfig.items[headgearIndex].numColors and self.headgearConfig.items[headgearIndex].defaultColor ~= nil then
    self.headgearConfig.color = self.headgearConfig.items[headgearIndex].defaultColor
  end
end
function PlayerStyle:setTop(topIndex, force)
  if topIndex == self.topConfig.selection then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000001 -> L34
  end
  self.topConfig.selection = topIndex
  if self.topConfig.items[topIndex] ~= nil and 1 <= self.topConfig.items[topIndex].numColors and self.topConfig.items[topIndex].defaultColor ~= nil then
    self.topConfig.color = self.topConfig.items[topIndex].defaultColor
  end
end
function PlayerStyle:setBottom(bottomIndex, force)
  if self.bottomConfig.selection == bottomIndex then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000001 -> L34
  end
  self.bottomConfig.selection = bottomIndex
  if self.bottomConfig.items[bottomIndex] ~= nil and 1 <= self.bottomConfig.items[bottomIndex].numColors and self.bottomConfig.items[bottomIndex].defaultColor ~= nil then
    self.bottomConfig.color = self.bottomConfig.items[bottomIndex].defaultColor
  end
end
function PlayerStyle:setFootwear(footwearIndex, force)
  if self.footwearConfig.selection == footwearIndex then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000001 -> L34
  end
  self.footwearConfig.selection = footwearIndex
  if self.footwearConfig.items[footwearIndex] ~= nil and 1 <= self.footwearConfig.items[footwearIndex].numColors and self.footwearConfig.items[footwearIndex].defaultColor ~= nil then
    self.footwearConfig.color = self.footwearConfig.items[footwearIndex].defaultColor
  end
end
function PlayerStyle:setGloves(glovesIndex, force)
  if self.glovesConfig.selection == glovesIndex then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000001 -> L34
  end
  self.glovesConfig.selection = glovesIndex
  if self.glovesConfig.items[glovesIndex] ~= nil and 1 <= self.glovesConfig.items[glovesIndex].numColors and self.glovesConfig.items[glovesIndex].defaultColor ~= nil then
    self.glovesConfig.color = self.glovesConfig.items[glovesIndex].defaultColor
  end
end
function PlayerStyle:setGlasses(glassesIndex, force)
  self.glassesConfig.selection = glassesIndex
end
function PlayerStyle:setFacegear(facegearIndex, force)
  self.facegearConfig.selection = facegearIndex
end
function PlayerStyle:setOnepiece(onepieceIndex, force)
  if self.onepieceConfig.selection == onepieceIndex then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000001 -> L90
  end
  self.onepieceConfig.selection = onepieceIndex
  if onepieceIndex == 0 then
    if self.topConfig.selection == 0 then
      self:setTop(1)
    end
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000002 -> L87
    self:setBottom(1)
  else
    for v8, v9 in pairs(self.onepieceConfig.items[onepieceIndex].disabledOptions) do
      if v8 == "tops" then
        self.topConfig.selection = 0
      elseif v8 == "bottoms" then
        self.bottomConfig.selection = 0
      else
        if not (v8 == "headgear") then
          continue
        end
        self.headgearConfig.selection = 0
      end
    end
    if 1 <= hideBody.numColors and hideBody.defaultColor ~= nil then
      self.onepieceConfig.color = hideBody.defaultColor
    end
  end
  self:updateDisabledOptions()
end
function PlayerStyle:setPreset(preset, force)
  if preset == nil then
    self.disabledOptionsForSelection = {}
    return
  end
  self:setOnepiece(preset.onepiece or 0, force)
  if preset.face ~= nil then
    self:setFace(preset.face)
  end
  if preset.top ~= nil then
    self:setTop(preset.top, force)
  elseif self.disabledOptionsForSelection.tops then
    self:setTop(0)
  end
  if preset.glasses ~= nil then
    self:setGlasses(preset.glasses, force)
  elseif self.disabledOptionsForSelection.glasses then
    self:setGlasses(0)
  end
  if preset.bottom ~= nil then
    self:setBottom(preset.bottom, force)
  elseif self.disabledOptionsForSelection.bottoms then
    self:setBottom(0)
  end
  if preset.footwear ~= nil then
    self:setFootwear(preset.footwear, force)
  elseif self.disabledOptionsForSelection.footwear then
    self:setFootwear(0)
  end
  if preset.headgear ~= nil then
    self:setHeadgear(preset.headgear, force)
  elseif self.disabledOptionsForSelection.headgear then
    self:setHeadgear(0)
  end
  if preset.gloves ~= nil then
    self:setGloves(preset.gloves, force)
  elseif self.disabledOptionsForSelection.gloves then
    self:setGloves(0)
  end
  if preset.facegear ~= nil then
    self:setFacegear(preset.facegear, force)
  elseif self.disabledOptionsForSelection.facegear then
    self:setFacegear(0)
  end
  self:updateDisabledOptions()
end
function PlayerStyle:setHairItemColor(item, colorIndex)
  self.hairStyleConfig.color = colorIndex
  self.beardConfig.color = colorIndex
  self.mustacheConfig.color = colorIndex
end
function PlayerStyle.setItemColor(v0, preset, force)
  preset.color = force
end
function PlayerStyle:getPossibleFaces()
  for v5, v6 in ipairs(self.faceConfig.items) do
    table.insert(preset, v5)
  end
  return preset
end
function PlayerStyle:getPossibleHairStyles()
  for v5, v6 in ipairs(self.hairStyleConfig.items) do
    if not not v6.forHat then
      continue
    end
    table.insert(preset, v5)
  end
  return preset
end
function PlayerStyle:getPossibleHeadgear()
  if not self.disabledOptionsForSelection.headgear then
    for v5, v6 in ipairs(self.headgearConfig.items) do
      if not not v6.hidden then
        continue
      end
      table.insert(preset, v5)
    end
  end
  return preset
end
function PlayerStyle:getPossibleTops()
  if not self.disabledOptionsForSelection.tops and self.onepieceConfig.selection == 0 then
    for v5, v6 in ipairs(self.topConfig.items) do
      table.insert(preset, v5)
    end
  end
  return preset
end
function PlayerStyle:getPossibleBottoms()
  if not self.disabledOptionsForSelection.bottoms and self.onepieceConfig.selection == 0 then
    for v5, v6 in ipairs(self.bottomConfig.items) do
      table.insert(preset, v5)
    end
  end
  return preset
end
function PlayerStyle:getPossibleGloves()
  if not self.disabledOptionsForSelection.gloves then
    for v5, v6 in ipairs(self.glovesConfig.items) do
      if not not v6.hidden then
        continue
      end
      table.insert(preset, v5)
    end
  end
  return preset
end
function PlayerStyle:getPossibleFootwear()
  if not self.disabledOptionsForSelection.footwear then
    for v5, v6 in ipairs(self.footwearConfig.items) do
      table.insert(preset, v5)
    end
  end
  return preset
end
function PlayerStyle:getPossibleGlasses()
  for v5, v6 in ipairs(self.glassesConfig.items) do
    if self.disabledOptionsForSelection.glasses and not (self.glassesConfig.selection == v5) then
      continue
    end
    table.insert(preset, v5)
  end
  return preset
end
function PlayerStyle:getPossibleOnepieces()
  for v5, v6 in ipairs(self.onepieceConfig.items) do
    if self.disabledOptionsForSelection.onepiece and not (self.onepieceConfig.selection == v5) then
      continue
    end
    table.insert(preset, v5)
  end
  return preset
end
function PlayerStyle:getPossibleBeards()
  for v5, v6 in ipairs(self.beardConfig.items) do
    if not not self.disabledOptionsForSelection.beards then
      continue
    end
    if v6.face ~= nil and not (v6.face == self.faceConfig.selection) then
      continue
    end
    table.insert(preset, v5)
  end
  return preset
end
function PlayerStyle:getPossibleMustaches()
  for v5, v6 in ipairs(self.mustacheConfig.items) do
    if not not self.disabledOptionsForSelection.mustaches then
      continue
    end
    if v6.face ~= nil and not (v6.face == self.faceConfig.selection) then
      continue
    end
    table.insert(preset, v5)
  end
  return preset
end
function PlayerStyle:getPresets()
  return self.presets
end
function PlayerStyle:getPresetByName(presetName)
  for v5, v6 in ipairs(self.presets) do
    if not (v6.name == presetName) then
      continue
    end
    return v6
  end
  return nil
end
function PlayerStyle:getDisabledOptionsForPreset()
  return self.disabledOptionsForSelection
end
function PlayerStyle:buildPreset()
  return {xmlFilename = self.xmlFilename, face = self.faceConfig.selection, top = self.topConfig.selection, bottom = self.bottomConfig.selection, footwear = self.footwearConfig.selection, gloves = self.glovesConfig.selection, glasses = self.glassesConfig.selection, headgear = self.headgearConfig.selection, hairStyle = self.hairStyleConfig.selection, onepiece = self.onepieceConfig.selection, facegear = self.facegearConfig.selection, mustache = self.mustacheConfig.selection, beard = self.beardConfig.selection}
end
function PlayerStyle:updateDisabledOptions()
  if self.onepieceConfig.selection == 0 then
    self.disabledOptionsForSelection = {}
    return
  end
  self.disabledOptionsForSelection = self.onepieceConfig.items[self.onepieceConfig.selection].disabledOptions
end
function PlayerStyle:convertSkinColorToScreenColor(r, g, b)
  return r * self.faceNeutralDiffuseColor[1], g * self.faceNeutralDiffuseColor[2], b * self.faceNeutralDiffuseColor[3]
end
function PlayerStyle:getIsMale()
  return preset:getIsPlayerModelMaleForFilename(self.xmlFilename)
end
function PlayerStyle:getIsPresetUsed(preset)
  if preset.face ~= nil then
    -- if v1.face ~= v0.faceConfig.selection then goto L119 end
  end
  if preset.top ~= nil then
    -- if v1.top ~= v0.topConfig.selection then goto L119 end
  end
  if preset.bottom ~= nil then
    -- if v1.bottom ~= v0.bottomConfig.selection then goto L119 end
  end
  if preset.footwear ~= nil then
    -- if v1.footwear ~= v0.footwearConfig.selection then goto L119 end
  end
  if preset.gloves ~= nil then
    -- if v1.gloves ~= v0.glovesConfig.selection then goto L119 end
  end
  if preset.glasses ~= nil then
    -- if v1.glasses ~= v0.glassesConfig.selection then goto L119 end
  end
  if preset.headgear ~= nil then
    -- if v1.headgear ~= v0.headgearConfig.selection then goto L119 end
  end
  if preset.onepiece ~= nil then
    -- if v1.onepiece ~= v0.onepieceConfig.selection then goto L119 end
  end
  if preset.facegear ~= nil and preset.facegear ~= self.facegearConfig.selection then
  end
  return force
end
function PlayerStyle.getSlotUVs(v0, preset)
  if preset ~= 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L5
  end
  local force = math.floor((1 - 1) / PlayerStyle.ATLAS_ROWS)
  local v6 = GuiUtils.getNormalizedValues(force / PlayerStyle.ATLAS_COLUMNS .. " " .. (1 - 1) % PlayerStyle.ATLAS_ROWS / PlayerStyle.ATLAS_ROWS .. " " .. 1 / PlayerStyle.ATLAS_COLUMNS .. " " .. 1 / PlayerStyle.ATLAS_ROWS, {PlayerStyle.ATLAS_COLUMNS, PlayerStyle.ATLAS_ROWS})
  return v6[1], 1 - v6[2] - v6[4], v6[1], 1 - v6[2], v6[1] + v6[3], 1 - v6[2] - v6[4], v6[1] + v6[3], 1 - v6[2]
end
function PlayerStyle:print()
  log(" ", "beardConfig", ":", self.beardConfig.selection, "(", #self.beardConfig.items, "items )")
  log(" ", "bottomConfig", ":", self.bottomConfig.selection, "(", #self.bottomConfig.items, "items )")
  log(" ", "faceConfig", ":", self.faceConfig.selection, "(", #self.faceConfig.items, "items )")
  log(" ", "footwearConfig", ":", self.footwearConfig.selection, "(", #self.footwearConfig.items, "items )")
  log(" ", "glassesConfig", ":", self.glassesConfig.selection, "(", #self.glassesConfig.items, "items )")
  log(" ", "glovesConfig", ":", self.glovesConfig.selection, "(", #self.glovesConfig.items, "items )")
  log(" ", "hairStyleConfig", ":", self.hairStyleConfig.selection, "(", #self.hairStyleConfig.items, "items )")
  log(" ", "headgearConfig", ":", self.headgearConfig.selection, "(", #self.headgearConfig.items, "items )")
  log(" ", "mustacheConfig", ":", self.mustacheConfig.selection, "(", #self.mustacheConfig.items, "items )")
  log(" ", "onepieceConfig", ":", self.onepieceConfig.selection, "(", #self.onepieceConfig.items, "items )")
  log(" ", "topConfig", ":", self.topConfig.selection, "(", #self.topConfig.items, "items )")
  log(" ", "facegearConfig", ":", self.facegearConfig.selection, "(", #self.facegearConfig.items, "items )")
end
function PlayerStyle:isValid()
  if self.footwearConfig.selection == 0 and 0 < self.onepieceConfig.selection then
    self:loadConfigurationIfRequired()
  end
  if 0 < self.hairStyleConfig.selection and 0 < self.faceConfig.selection then
    if 0 >= self.footwearConfig.selection then
      -- if 0 >= v0.onepieceConfig.selection then goto L88 end
      -- if not v0.onepieceConfig.items[v0.onepieceConfig.selection].disabledOptions.footwear then goto L88 end
    end
    if 0 >= self.topConfig.selection then
      -- if 0 >= v0.onepieceConfig.selection then goto L88 end
    end
    if 0 >= self.bottomConfig.selection then
      -- if 0 >= v0.onepieceConfig.selection then goto L88 end
    end
    return true
  end
  Logging.warning("A player style was invalid and has been replaced by the default player setup.")
  return false
end
