-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LicensePlate = {}
local LicensePlate_mt = Class(LicensePlate)
function LicensePlate.new(customMt)
  if not customMt then
  end
  v2(v3, v4)
  v1.variationIndex = 1
  v1.characters = ""
  v1.manager = g_licensePlateManager
  return v1
end
function LicensePlate:loadFromXML(node, filename, customEnvironment, xmlFile, key)
  local typeStr = xmlFile:getValue(key .. "#type", "ELONGATED")
  if typeStr ~= nil then
    self["type"] = LicensePlateManager.PLATE_TYPE[typeStr]
    if self["type"] ~= nil then
      self.node = node
      self.filename = filename
      local v7 = xmlFile:getValue(key .. "#width", 1)
      self.width = v7
      v7 = xmlFile:getValue(key .. "#height", 0.3)
      self.height = v7
      v7 = xmlFile:getValue(key .. ".font#size", 0.1)
      self.fontSize = v7
      v7 = xmlFile:getValue(key .. ".font#scaleX", 1)
      self.fontScaleX = v7
      v7 = xmlFile:getValue(key .. ".font#scaleY", 1)
      self.fontScaleY = v7
      self.widthOffsetLeft = 0
      self.widthOffsetRight = 0
      self.heightOffsetTop = 0
      self.heightOffsetBot = 0
      v7 = v7:getFont()
      self.font = v7
      if self.font == nil then
        Logging.error("LicensePlate: Unable to get font from LicensePlateManager, possibly not initialized/loaded yet")
        printCallstack()
        return false
      end
      v7 = v7:getFontMaxWidthRatio()
      self.fontMaxWidthRatio = v7
      self.variations = {}
      xmlFile:iterate(key .. ".variations.variation", function(self, node)
        xmlFile:iterate(node .. ".value", function(self, node)
          local customEnvironment = customEnvironment:getValue(node .. "#node")
          customEnvironment = I3DUtil.indexToObject(u2.node, {index = self, realIndex = u0 + 1, nodePath = customEnvironment}.nodePath)
          customEnvironment = customEnvironment:getValue(node .. "#nextSection", false)
          if {index = self, realIndex = u0 + 1, nodePath = customEnvironment, node = customEnvironment, nextSection = customEnvironment}.nodePath ~= nil and {index = self, realIndex = u0 + 1, nodePath = customEnvironment, node = customEnvironment, nextSection = customEnvironment}.node ~= nil then
            local customEnvironment, xmlFile, key = getTranslation({index = self, realIndex = u0 + 1, nodePath = customEnvironment, node = customEnvironment, nextSection = customEnvironment}.node)
            local typeStr = typeStr:getValue(node .. "#posX", customEnvironment)
            typeStr = typeStr:getValue(node .. "#posY", xmlFile)
            typeStr = typeStr:getValue(node .. "#posZ", key)
            typeStr = typeStr:getValue(node .. "#character")
            typeStr = typeStr:getValue(node .. "#numerical", false)
            typeStr = typeStr:getValue(node .. "#alphabetical", false)
            typeStr = typeStr:getValue(node .. "#special", false)
            if not {index = self, realIndex = u0 + 1, nodePath = customEnvironment, node = customEnvironment, nextSection = customEnvironment, posX = typeStr, posY = typeStr, posZ = typeStr, character = typeStr, numerical = typeStr, alphabetical = typeStr, special = typeStr}.numerical and not {index = self, realIndex = u0 + 1, nodePath = customEnvironment, node = customEnvironment, nextSection = customEnvironment, posX = typeStr, posY = typeStr, posZ = typeStr, character = typeStr, numerical = typeStr, alphabetical = typeStr, special = typeStr}.alphabetical and not {index = self, realIndex = u0 + 1, nodePath = customEnvironment, node = customEnvironment, nextSection = customEnvironment, posX = typeStr, posY = typeStr, posZ = typeStr, character = typeStr, numerical = typeStr, alphabetical = typeStr, special = typeStr}.special and {index = self, realIndex = u0 + 1, nodePath = customEnvironment, node = customEnvironment, nextSection = customEnvironment, posX = typeStr, posY = typeStr, posZ = typeStr, character = typeStr, numerical = typeStr, alphabetical = typeStr, special = typeStr}.character ~= nil then
            end
            typeStr = typeStr:getValue(v8, v9)
            filename.isStatic = typeStr
            if filename.character == nil then
            end
            typeStr = typeStr:getValue(v8, true)
            filename.locked = typeStr
            typeStr = typeStr:getFontMaxWidthRatio(filename.alphabetical, filename.numerical, filename.special)
            filename.maxWidthRatio = typeStr
            typeStr = typeStr:getValue(node .. "#position", "ANY")
            local v9 = typeStr:upper()
            if LicensePlateManager.PLATE_POSITION[v9] == nil then
              Logging.xmlError(u1, "Unknown position '%s' in '%s'", typeStr, node)
            end
            if not v7 then
            end
            filename.position = v8
            if not filename.isStatic then
              u0 = u0 + 1
            end
            table.insert(u3.values, filename)
          end
        end)
        xmlFile:iterate(node .. ".color", function(self, node)
          local customEnvironment = customEnvironment:getValue(node .. "#shaderParameter")
          customEnvironment = customEnvironment:getValue(node .. "#color", nil, true)
          if {shaderParameter = customEnvironment, color = customEnvironment}.shaderParameter ~= nil and {shaderParameter = customEnvironment, color = customEnvironment}.color ~= nil then
            table.insert(u1.colors, {shaderParameter = customEnvironment, color = customEnvironment})
          end
        end)
        if 0 < #{values = {}, colors = {}}.values then
          table.insert(u1.variations, {values = {}, colors = {}})
        end
      end)
      self.frame = {}
      local v8 = xmlFile:getValue(key .. ".frame#node")
      self.frame.node = v8
      v8 = xmlFile:getValue(key .. ".frame#widthOffset", 0)
      self.frame.widthOffset = v8
      v8 = xmlFile:getValue(key .. ".frame#heightOffsetTop", 0)
      self.frame.heightOffsetTop = v8
      v8 = xmlFile:getValue(key .. ".frame#heightOffsetBot", 0)
      self.frame.heightOffsetBot = v8
      if self.frame.node ~= nil then
        v7 = I3DUtil.indexToObject(self.node, self.frame.node)
        -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x80000000 -> L189
      end
      self.frame = nil
    else
      return false
    end
  end
  return true
end
function LicensePlate:delete()
  delete(self.node)
end
function LicensePlate:clone(includeFrame)
  local licensePlateClone = LicensePlate.new()
  local v3 = clone(self.node, false, false, false)
  licensePlateClone.node = v3
  licensePlateClone["type"] = self["type"]
  licensePlateClone.filename = self.filename
  licensePlateClone.width = self.width
  licensePlateClone.height = self.height
  licensePlateClone.fontSize = self.fontSize
  licensePlateClone.fontScaleX = self.fontScaleX
  licensePlateClone.fontScaleY = self.fontScaleY
  licensePlateClone.rawWidth = self.width
  licensePlateClone.rawHeight = self.height
  licensePlateClone.widthOffsetLeft = 0
  licensePlateClone.widthOffsetRight = 0
  licensePlateClone.heightOffsetTop = 0
  licensePlateClone.heightOffsetBot = 0
  licensePlateClone.font = self.font
  licensePlateClone.fontMaxWidthRatio = self.fontMaxWidthRatio
  v3 = table.copy(self.variations, math.huge)
  licensePlateClone.variations = v3
  -- TODO: structure LOP_FORNPREP (pc 85, target 109)
  for v9 = 1, #licensePlateClone.variations[1].values do
    local v11 = I3DUtil.indexToObject(licensePlateClone.node, v6.values[v9].nodePath)
    v6.values[v9].node = v11
    -- TODO: structure LOP_FORNLOOP (pc 107, target 95)
  end
  v3 = table.copy(self.frame, math.huge)
  licensePlateClone.frame = v3
  if licensePlateClone.frame ~= nil then
    if includeFrame ~= true then
    end
    v3 = I3DUtil.indexToObject(licensePlateClone.node, licensePlateClone.frame.node)
    if v3 ~= nil then
      setVisibility(v3, true)
      if true then
        licensePlateClone.width = licensePlateClone.width + 2 * licensePlateClone.frame.widthOffset
        licensePlateClone.height = licensePlateClone.height + licensePlateClone.frame.heightOffsetTop + licensePlateClone.frame.heightOffsetBot
        licensePlateClone.widthOffsetLeft = licensePlateClone.frame.widthOffset
        licensePlateClone.widthOffsetRight = licensePlateClone.frame.widthOffset
        licensePlateClone.heightOffsetTop = licensePlateClone.frame.heightOffsetTop
        licensePlateClone.heightOffsetBot = licensePlateClone.frame.heightOffsetBot
      end
    end
  end
  licensePlateClone:setVariation(self.variationIndex)
  return licensePlateClone
end
function LicensePlate:updateData(variationIndex, position, characters, validate)
  if variationIndex ~= self.variationIndex then
    self:setVariation(variationIndex)
  end
  if validate == true then
    local v5 = self:validateLicensePlateCharacters(characters)
  end
  self.characters = characters
  if self.variations[self.variationIndex] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 30, target 124)
    if self.variations[self.variationIndex].values[1].node ~= nil then
      setTranslation(self.variations[self.variationIndex].values[1].node, self.variations[self.variationIndex].values[1].posX, self.variations[self.variationIndex].values[1].posY, self.variations[self.variationIndex].values[1].posZ)
      if self.variations[self.variationIndex].values[1].position ~= LicensePlateManager.PLATE_POSITION.ANY then
        -- if v0.variations[v0.variationIndex].values[1].position ~= v2 then goto L68 end
      end
      if v10.position == LicensePlateManager.PLATE_POSITION.NONE then
      end
      if not v10.locked then
        local v13 = characters:sub(v6, v6)
      end
      if not v10.isStatic then
        -- cmp-jump LOP_JUMPXEQKS R12 aux=0x17 -> L102
        -- cmp-jump LOP_JUMPXEQKS R12 aux=0x18 -> L102
        -- if not v11 then goto L102 end
        v13:updateSingleCharacter(v10.singleCharacter, v12)
        setVisibility(v10.node, true)
      elseif v10.isStatic then
        -- if not v11 then goto L113 end
        setVisibility(v10.node, true)
      else
        setVisibility(v10.node, false)
      end
      if not v10.isStatic then
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 123, target 31)
  end
end
function LicensePlate:setVariation(variationIndex)
  if self.variations[variationIndex] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 15, target 42)
    if not self.variations[self.variationIndex].values[1].isStatic then
      local v11 = getNumOfChildren(self.variations[self.variationIndex].values[1].node)
      -- TODO: structure LOP_FORNPREP (pc 30, target 41)
      local v12 = getChildAt(self.variations[self.variationIndex].values[1].node, 1 - 1)
      delete(...)
      -- TODO: structure LOP_FORNLOOP (pc 40, target 31)
    end
    -- TODO: structure LOP_FORNLOOP (pc 41, target 16)
    self.variationIndex = variationIndex
    -- TODO: structure LOP_FORNPREP (pc 49, target 83)
    if not position.values[1].isStatic then
      local v8 = v8:createSingleCharacter(position.values[1].node, self.fontSize, {0, 0, 0, 1}, nil, 0, self.fontScaleX, self.fontScaleY, 0)
      position.values[1].singleCharacter = v8
    end
    -- TODO: structure LOP_FORNLOOP (pc 82, target 50)
    -- TODO: structure LOP_FORNPREP (pc 88, target 109)
    I3DUtil.setShaderParameterRec(self.node, position.colors[1].shaderParameter, position.colors[1].color[1], position.colors[1].color[2], position.colors[1].color[3])
    -- TODO: structure LOP_FORNLOOP (pc 108, target 89)
  end
end
function LicensePlate:getFontSize()
  return self.fontSize * self.fontMaxWidthRatio, self.fontSize
end
function LicensePlate:setColorIndex(colorIndex)
  local position, characters = position:getAvailableColors()
  if position[colorIndex] ~= nil then
    self:setColor(position[colorIndex].color[1], position[colorIndex].color[2], position[colorIndex].color[3])
  end
end
function LicensePlate:getColor(colorIndex)
  local position, characters = position:getAvailableColors()
  if position[colorIndex] ~= nil then
    return position[colorIndex].color
  end
end
function LicensePlate:setColor(r, g, b)
  I3DUtil.setShaderParameterRec(self.node, g_licensePlateManager.shaderParameterPlate, r, g, b)
  -- TODO: structure LOP_FORNPREP (pc 15, target 47)
  for v9 = 1, #self.variations[1].values do
    if self.variations[v6].values[v9].node ~= nil then
      I3DUtil.setShaderParameterRec(self.variations[v6].values[v9].node, g_licensePlateManager.shaderParameterCharacters, r, g, b)
    end
    -- TODO: structure LOP_FORNLOOP (pc 45, target 25)
  end
end
function LicensePlate:getRandomCharacters(variationIndex)
  if self.variations[variationIndex] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 13, target 120)
    if not self.variations[variationIndex].values[1].isStatic then
      if self.variations[variationIndex].values[1].character == nil then
        local v9 = math.random()
        if self.variations[variationIndex].values[1].alphabetical then
        elseif self.variations[variationIndex].values[1].numerical then
        else
          if self.variations[variationIndex].values[1].special then
          end
        end
        if v10 ~= nil and 0 < #v10 then
          local v12 = math.floor(v9 * #v10)
          local v11 = math.max(v12, 1)
          if v8.numerical and characters and v11 == 1 and 1 < #v10 then
          end
          table.insert(position, v10[v11].value)
          -- goto L119  (LOP_JUMP +16)
        end
        table.insert(position, "0")
      else
        table.insert({}, self.variations[variationIndex].values[1].character)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 119, target 14)
  end
  return position
end
function LicensePlate:validateLicensePlateCharacters(characters)
  local validate = type(characters)
  if validate ~= "table" then
  end
  if true then
    local v5 = table.concat(characters, "")
  else
    v5 = characters:len()
  end
  local v6 = filterText(position, false, false)
  -- TODO: structure LOP_FORNPREP (pc 39, target 119)
  local v9 = v6:sub(1, 1)
  if characters then
  else
    local v11 = characters:sub(1, 1)
  end
  if v9 ~= v10 and v5.values[v8] ~= nil then
    if v5.values[v8].alphabetical then
    elseif v5.values[v8].numerical then
    else
      if v5.values[v8].special then
      end
    end
    if characters then
      characters[v8] = v12[1].value
    else
      local v16 = position:sub(1, v8 - 1)
      local v15 = position:sub(v8 + 1)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 118, target 40)
  return characters
end
function LicensePlate:changeCharacter(variationIndex, currentCharacters, valueIndex, direction)
  if self.variations[variationIndex] ~= nil then
    if self.variations[variationIndex].values[valueIndex].alphabetical then
      table.insert({}, self.font.charactersByType[MaterialManager.FONT_CHARACTER_TYPE.ALPHABETICAL])
    end
    if v6.numerical then
      table.insert(v8, self.font.charactersByType[MaterialManager.FONT_CHARACTER_TYPE.NUMERICAL])
    end
    if v6.special then
      table.insert(v8, self.font.charactersByType[MaterialManager.FONT_CHARACTER_TYPE.SPECIAL])
    end
    -- TODO: structure LOP_FORNPREP (pc 66, target 107)
    for v17 = 1, #v8[1] do
      if v14[v17].value == v7 then
        if #v14 < v17 + direction then
          if v8[v13 + 1] ~= nil then
            -- goto L105  (LOP_JUMP +17)
          end
        elseif v17 + direction < 1 then
          if v8[v13 - 1] ~= nil then
            -- goto L105  (LOP_JUMP +4)
          end
        else
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 105, target 72)
    end
    if v9 ~= nil and v9[v10] ~= nil then
      currentCharacters[v6.realIndex] = v9[v10].value
    end
  end
  return currentCharacters
end
function LicensePlate:getFormattedString()
  if self.characters == "" then
    return nil
  end
  if self.variations[self.variationIndex] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 19, target 48)
    if not self.variations[self.variationIndex].values[1].isStatic then
      local v8 = v8:sub(1, 1)
      if (v8 or "") ~= "_" then
        if self.variations[self.variationIndex].values[1].nextSection then
        else
        end
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 47, target 20)
  end
  return variationIndex
end
function LicensePlate:registerXMLPaths(variationIndex)
  self:register(XMLValueType.STRING, variationIndex .. "#filename", "License plate i3d filename")
  self:register(XMLValueType.NODE_INDEX, variationIndex .. "#node", "License plate node")
  self:register(XMLValueType.STRING, variationIndex .. "#type", "License plate type 'SQUARISH' or 'ELONGATED'", "ELONGATED")
  self:register(XMLValueType.FLOAT, variationIndex .. "#width", "Width of license plate", 1)
  self:register(XMLValueType.FLOAT, variationIndex .. "#height", "Height of license plate", 0.2)
  self:register(XMLValueType.FLOAT, variationIndex .. ".font#size", "Size of font", 0.1)
  self:register(XMLValueType.FLOAT, variationIndex .. ".font#scaleX", "Additional scaling of font X", 1)
  self:register(XMLValueType.FLOAT, variationIndex .. ".font#scaleY", "Additional scaling of font Y", 1)
  self:register(XMLValueType.STRING, variationIndex .. ".variations.variation(?).value(?)#node", "Value mesh index")
  self:register(XMLValueType.FLOAT, variationIndex .. ".variations.variation(?).value(?)#posX", "X translation of value node")
  self:register(XMLValueType.FLOAT, variationIndex .. ".variations.variation(?).value(?)#posY", "Y translation of value node")
  self:register(XMLValueType.FLOAT, variationIndex .. ".variations.variation(?).value(?)#posZ", "Z translation of value node")
  self:register(XMLValueType.BOOL, variationIndex .. ".variations.variation(?).value(?)#nextSection", "Is start character for next section", false)
  self:register(XMLValueType.STRING, variationIndex .. ".variations.variation(?).value(?)#character", "Pre defined character of node")
  self:register(XMLValueType.BOOL, variationIndex .. ".variations.variation(?).value(?)#numerical", "Node supports numeric characters", false)
  self:register(XMLValueType.BOOL, variationIndex .. ".variations.variation(?).value(?)#alphabetical", "Node supports alphabetical characters", false)
  self:register(XMLValueType.BOOL, variationIndex .. ".variations.variation(?).value(?)#special", "Node supports special characters", false)
  self:register(XMLValueType.BOOL, variationIndex .. ".variations.variation(?).value(?)#isStatic", "Node is only static without applying of characters", "is static if 'numerical' and 'alphabetical' are both on false and no fixed character is given")
  self:register(XMLValueType.BOOL, variationIndex .. ".variations.variation(?).value(?)#locked", "Character value can not be changed", "locked when character is defined")
  self:register(XMLValueType.STRING, variationIndex .. ".variations.variation(?).value(?)#position", "Value will be hidden of position differs from placement position", "ANY")
  self:register(XMLValueType.STRING, variationIndex .. ".variations.variation(?).color(?)#shaderParameter", "Shader parameter to set")
  self:register(XMLValueType.COLOR, variationIndex .. ".variations.variation(?).color(?)#color", "Color to apply on shader parameter")
  self:register(XMLValueType.STRING, variationIndex .. ".frame#node", "Frame node that can be toggled")
  self:register(XMLValueType.FLOAT, variationIndex .. ".frame#widthOffset", "Width of frame on each side", 0)
  self:register(XMLValueType.FLOAT, variationIndex .. ".frame#heightOffsetTop", "Height of frame on top", 0)
  self:register(XMLValueType.FLOAT, variationIndex .. ".frame#heightOffsetBot", "Height of frame at bottom", 0)
end
