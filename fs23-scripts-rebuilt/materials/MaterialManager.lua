-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MaterialManager = {fontMaterialXMLSchema = nil, DEFAULT_FONT_MATERIAL_XML = "data/shared/alphabet/fonts.xml", FONT_CHARACTER_TYPE = {}}
MaterialManager.FONT_CHARACTER_TYPE.NUMERICAL = 0
MaterialManager.FONT_CHARACTER_TYPE.ALPHABETICAL = 1
MaterialManager.FONT_CHARACTER_TYPE.SPECIAL = 2
MaterialType = nil
local MaterialManager_mt = Class(MaterialManager, AbstractManager)
function MaterialManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  local v3 = XMLSchema.new("fontMaterials")
  MaterialManager.fontMaterialXMLSchema = v3
  MaterialManager.registerXMLPaths(MaterialManager.fontMaterialXMLSchema)
  return v1
end
function MaterialManager:initDataStructures()
  self.nameToIndex = {}
  self.materialTypes = {}
  self.materials = {}
  self.particleMaterials = {}
  self.modMaterialHoldersToLoad = {}
  self.fontMaterials = {}
  self.fontMaterialsByName = {}
  self.baseMaterials = {}
  self.baseMaterialsByName = {}
  self.loadedMaterialHolderNodes = {}
end
function MaterialManager:loadMapData(xmlFile, missionInfo, baseDirectory, finishedLoadingCallback, callbackTarget)
  local v7 = v7:superClass()
  v7.loadMapData(self)
  self:addMaterialType("fillplane")
  self:addMaterialType("icon")
  self:addMaterialType("unloading")
  self:addMaterialType("smoke")
  self:addMaterialType("straw")
  self:addMaterialType("chopper")
  self:addMaterialType("soil")
  self:addMaterialType("sprayer")
  self:addMaterialType("spreader")
  self:addMaterialType("pipe")
  self:addMaterialType("mower")
  self:addMaterialType("belt")
  self:addMaterialType("belt_cropDirt")
  self:addMaterialType("belt_cropClean")
  self:addMaterialType("leveler")
  self:addMaterialType("washer")
  self:addMaterialType("pickup")
  MaterialType = self.nameToIndex
  self.finishedLoadingCallback = finishedLoadingCallback
  self.callbackTarget = callbackTarget
  self:loadFontMaterialsXML(MaterialManager.DEFAULT_FONT_MATERIAL_XML, nil, self.baseDirectory)
  return true
end
function MaterialManager:unloadMapData()
  for v4, v5 in ipairs(self.loadedMaterialHolderNodes) do
    delete(v5)
  end
  for v4, v5 in ipairs(self.fontMaterials) do
    delete(v5.materialNode)
    if v5.materialNodeNoNormal ~= nil then
      delete(v5.materialNodeNoNormal)
    end
    if v5.characterShape ~= nil then
      delete(v5.characterShape)
    end
    if not (v5.sharedLoadRequestId ~= nil) then
      continue
    end
    v6:releaseSharedI3DFile(v5.sharedLoadRequestId)
  end
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function MaterialManager:addMaterialType(name)
  local v2 = ClassUtil.getIsValidIndexName(name)
  if not v2 then
    local v7 = tostring(name)
    print("Warning: '" .. v7 .. "' is not a valid name for a materialType. Ignoring it!")
    return nil
  end
  v2 = name:upper()
  if self.nameToIndex[v2] == nil then
    table.insert(self.materialTypes, v2)
    self.nameToIndex[v2] = #self.materialTypes
  end
end
function MaterialManager:getMaterialTypeByName(name)
  if name ~= nil then
    local v2 = name:upper()
    if self.nameToIndex[v2] ~= nil then
      return v2
    end
  end
  return nil
end
function MaterialManager:addBaseMaterial(materialName, materialId)
  local v4 = materialName:upper()
  self.baseMaterialsByName[v4] = materialId
  table.insert(self.baseMaterials, materialId)
end
function MaterialManager:getBaseMaterialByName(materialName)
  if materialName ~= nil then
    local v4 = materialName:upper()
    return self.baseMaterialsByName[v4]
  end
  return nil
end
function MaterialManager:addMaterial(fillTypeIndex, materialType, materialIndex, materialId)
  self:addMaterialToTarget(self.materials, fillTypeIndex, materialType, materialIndex, materialId)
end
function MaterialManager:addParticleMaterial(fillTypeIndex, materialType, materialIndex, materialId)
  self:addMaterialToTarget(self.particleMaterials, fillTypeIndex, materialType, materialIndex, materialId)
end
function MaterialManager.addMaterialToTarget(v0, v1, v2, v3, v4, v5)
  if v2 ~= nil and v3 ~= nil and v4 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L10
  end
  return nil
  if v1[v2] == nil then
    v1[v2] = {}
  end
  if v1[v2][v3] == nil then
    v1[v2][v3] = {}
  end
  if g_showDevelopmentWarnings and v6[v3][v4] ~= nil then
    local v8 = v8:getFillTypeByIndex(v2)
    local v11 = tostring(v3)
    local v12 = tostring(v8.name)
    Logging.devWarning(...)
  end
  v7[v4] = v5
end
function MaterialManager:getMaterial(fillType, materialTypeName, materialIndex)
  return self:getMaterialFromTarget(self.materials, fillType, materialTypeName, materialIndex)
end
function MaterialManager:getParticleMaterial(fillType, materialTypeName, materialIndex)
  return self:getMaterialFromTarget(self.particleMaterials, fillType, materialTypeName, materialIndex)
end
function MaterialManager:getMaterialFromTarget(target, fillType, materialTypeName, materialIndex)
  if fillType ~= nil and materialTypeName ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L8
  end
  return nil
  local materialType = self:getMaterialTypeByName(materialTypeName)
  if materialType == nil then
    return nil
  end
  if target[fillType] == nil then
    return nil
  end
  if v6[materialType] == nil then
    return nil
  end
  return v7[materialIndex]
end
function MaterialManager:addModMaterialHolder(filename)
  self.modMaterialHoldersToLoad[filename] = filename
end
function MaterialManager:loadModMaterialHolders()
  for v4, v5 in pairs(self.modMaterialHoldersToLoad) do
    v6:loadI3DFileAsync(v4, true, true, MaterialManager.materialHolderLoaded, self, nil)
  end
end
function MaterialManager:materialHolderLoaded(i3dNode, failedReason, args)
  local v7 = getNumOfChildren(i3dNode)
  -- TODO: structure LOP_FORNPREP (pc 7, target 26)
  v7 = getChildAt(i3dNode, v7 - 1)
  unlink(v7)
  table.insert(self.loadedMaterialHolderNodes, v7)
  -- TODO: structure LOP_FORNLOOP (pc 25, target 8)
  delete(i3dNode)
end
function MaterialManager:getFontMaterial(materialName, customEnvironment)
  if customEnvironment ~= nil and customEnvironment ~= "" and self.fontMaterialsByName[customEnvironment .. "." .. materialName] ~= nil then
    return self.fontMaterialsByName[customEnvironment .. "." .. materialName]
  end
  return self.fontMaterialsByName[materialName]
end
function MaterialManager:loadFontMaterialsXML(xmlFilename, customEnvironment, baseDirectory)
  local v4 = XMLFile.load("TempFonts", xmlFilename, MaterialManager.fontMaterialXMLSchema)
  if v4 ~= nil then
    v4.references = 0
    v4:iterate("fonts.font", function(self, xmlFilename)
      local customEnvironment = customEnvironment:getValue(xmlFilename .. "#name")
      local baseDirectory = baseDirectory:getValue(xmlFilename .. "#filename")
      local v4 = v4:getValue(xmlFilename .. "#node")
      local v5 = v5:getValue(xmlFilename .. "#noNormalNode")
      local v6 = v6:getValue(xmlFilename .. "#characterShape")
      if customEnvironment ~= nil and baseDirectory ~= nil and v4 ~= nil then
        if u1 ~= nil and u1 ~= "" then
        end
        u0.references = u0.references + 1
        local v8 = Utils.getFilename(baseDirectory, u2)
        local v9 = v9:loadSharedI3DFileAsync(v8, false, false, u3.fontMaterialLoaded, u3, {xmlFile = u0, key = xmlFilename, font = {name = customEnvironment, node = v4, noNormalNode = v5, characterShapePath = v6}})
      end
    end)
  end
  if v4 ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x80000009 -> L49
  end
  if v4 ~= nil then
    v4:delete()
  end
  if self.finishedLoadingCallback ~= nil then
    self.finishedLoadingCallback(self.callbackTarget)
    self.finishedLoadingCallback = nil
    self.callbackTarget = nil
  end
end
function MaterialManager:fontMaterialLoaded(i3dNode, failedReason, arguments, loadingId)
  if i3dNode ~= 0 then
    local v8 = I3DUtil.indexToObject(i3dNode, arguments.font.node)
    if v8 ~= nil then
      local v9 = getMaterial(v8, 0)
      arguments.font.materialId = v9
      arguments.font.materialNode = v8
      if arguments.font.noNormalNode ~= nil then
        v9 = I3DUtil.indexToObject(i3dNode, arguments.font.noNormalNode)
        arguments.font.materialNodeNoNormal = v9
        v9 = getMaterial(arguments.font.materialNodeNoNormal, 0)
        arguments.font.materialIdNoNormal = v9
      end
      if v7.characterShapePath ~= nil then
        v9 = I3DUtil.indexToObject(i3dNode, v7.characterShapePath)
        v7.characterShape = v9
      end
      unlink(v7.materialNodeNoNormal)
      unlink(v7.characterShape)
      unlink(v8)
      v9 = v5:getValue(v6 .. ".spacing#x", 0)
      v7.spacingX = v9
      v9 = v5:getValue(v6 .. ".spacing#y", 0)
      v7.spacingY = v9
      v9 = v5:getValue(v6 .. ".spacing#charToChar", 0.05)
      v7.charToCharSpace = v9
      v7.characters = {}
      v7.charactersByType = {[MaterialManager.FONT_CHARACTER_TYPE.NUMERICAL] = {}, [MaterialManager.FONT_CHARACTER_TYPE.ALPHABETICAL] = {}, [MaterialManager.FONT_CHARACTER_TYPE.SPECIAL] = {}}
      v5:iterate(v6 .. ".character", function(self, i3dNode)
        local arguments = arguments:getValue(i3dNode .. "#uvIndex", 0)
        arguments = arguments:getValue(i3dNode .. "#value")
        arguments = arguments:getValue(i3dNode .. "#type", "alphabetical")
        local v6 = arguments:upper()
        if not MaterialManager.FONT_CHARACTER_TYPE[v6] then
        end
        failedReason["type"] = loadingId
        local v5 = v5:getValue(i3dNode .. "#spacingX", u1.spacingX)
        local loadingId = math.max(v5, 0.0001)
        failedReason.spacingX = loadingId
        v5 = v5:getValue(i3dNode .. "#spacingY", u1.spacingY)
        loadingId = math.max(v5, 0.0001)
        failedReason.spacingY = loadingId
        loadingId = loadingId:getValue(i3dNode .. "#offsetX", 0)
        failedReason.offsetX = loadingId
        loadingId = loadingId:getValue(i3dNode .. "#offsetY", 0)
        failedReason.offsetY = loadingId
        v5 = v5:getValue(i3dNode .. "#realSpacingX", failedReason.spacingX)
        loadingId = math.max(v5, 0.0001)
        failedReason.realSpacingX = loadingId
        if failedReason.value ~= nil then
          table.insert(u1.characters, failedReason)
          table.insert(u1.charactersByType[failedReason["type"]], failedReason)
        end
      end)
      v7.getCharacterIndexByCharacter = function(self, i3dNode)
        -- TODO: structure LOP_FORNPREP (pc 6, target 23)
        local v5 = v5:lower()
        local v6 = i3dNode:lower()
        if v5 == v6 then
          return 1
        end
        -- TODO: structure LOP_FORNLOOP (pc 22, target 7)
        return 1
      end
      v7.getCharacterByCharacterIndex = function(self, i3dNode)
        if u0.characters[i3dNode] ~= nil then
          return u0.characters[i3dNode].value
        end
        return "0"
      end
      v7.assignFontMaterialToNode = function(self, i3dNode, failedReason)
        if i3dNode ~= nil then
          if failedReason == false then
          end
          setMaterial(i3dNode, arguments, 0)
          setShaderParameter(i3dNode, "spacing", u0.spacingX, u0.spacingY, 0, 0, false)
        end
      end
      v7.setFontCharacter = function(self, i3dNode, failedReason, arguments, loadingId)
        if i3dNode ~= nil then
          if loadingId ~= nil then
            if failedReason == " " then
              v5:setFontCharacterColor(i3dNode, loadingId[1], loadingId[2], loadingId[3])
            else
              v5:setFontCharacterColor(i3dNode, arguments[1], arguments[2], arguments[3])
            end
          end
          -- TODO: structure LOP_FORNPREP (pc 31, target 43)
          if u0.characters[1].value == failedReason then
          else
            -- TODO: structure LOP_FORNLOOP (pc 42, target 32)
          end
          if v5 == nil then
            -- TODO: structure LOP_FORNPREP (pc 51, target 69)
            local v10 = v10:lower()
            local v11 = failedReason:lower()
            if v10 == v11 then
            else
              -- TODO: structure LOP_FORNLOOP (pc 68, target 52)
            end
          end
          if v5 ~= nil then
            setVisibility(i3dNode, true)
            setShaderParameter(i3dNode, "index", v5.uvIndex, 0, 0, 0, false)
            if not v5.spacingX then
            end
            if not v5.spacingY then
            end
            v6(v7, v8, v9, v10, 0, 0, false)
            return v5
          end
          setVisibility(i3dNode, false)
          return v5
        end
      end
      v7.setFontCharacterColor = function(self, i3dNode, failedReason, arguments, loadingId, v5, v6)
        if i3dNode ~= nil then
          local v7, v8, v9, v10 = getShaderParameter(i3dNode, "colorScale")
          setShaderParameter(i3dNode, "colorScale", failedReason or v7, arguments or v8, loadingId or v9, v5 or v10, false)
          if v6 ~= nil then
            local v11, v12, v13, v14 = getShaderParameter(i3dNode, "lightControl")
            setShaderParameter(i3dNode, "lightControl", v6 or v11, 0, 0, 0, false)
          end
        end
      end
      v7.createCharacterLine = function(self, i3dNode, failedReason, arguments, loadingId, v5, v6, v7, v8, v9, v10, v11)
        if u0.characterShape ~= nil then
          if not v9 then
          end
          v12.textAlignment = v13
          v12.fontThickness = ((v11 or 1) - 1) / 8 + 1
          v12.textColor = loadingId
          v12.hiddenColor = v5
          v12.textEmissiveScale = v6 or 0
          v12.hiddenAlpha = v10 or 0
          local v13 = createTransformGroup("characterLine")
          v12.rootNode = v13
          link(i3dNode, v12.rootNode)
          -- TODO: structure LOP_FORNPREP (pc 57, target 127)
          local v16 = clone(u0.characterShape, false, false, false)
          link(v12.rootNode, v16)
          v17:assignFontMaterialToNode(v16)
          setShaderParameter(v16, "alphaErosion", 1 - v12.fontThickness, 0, 0, 0, false)
          if v12.textColor ~= nil then
          end
          v20:setFontCharacterColor(v16, v17, v18, v19, 1, v12.textEmissiveScale)
          table.insert(v12.characters, v16)
          -- TODO: structure LOP_FORNLOOP (pc 126, target 58)
          v13:updateCharacterLine(v12, "")
          return v12
        end
        Logging.error("Could not create characters from font '%s'. No source character mesh found!", u0.name)
      end
      v7.updateCharacterLine = function(self, i3dNode, failedReason)
        if i3dNode ~= nil then
          local v5 = failedReason:len()
          -- TODO: structure LOP_FORNPREP (pc 12, target 113)
          local v11 = failedReason:sub(v5 - 1 - 1, v5 - 1 - 1)
          v11 = v11:setFontCharacter(i3dNode.characters[1], v11 or " ", i3dNode.textColor, i3dNode.hiddenColor)
          if v11 ~= nil then
          end
          setScale(v9, i3dNode.textSize * (1 - v14 * 2) / (1 - v15 * 2) * i3dNode.scaleX, i3dNode.textSize * i3dNode.scaleY, 1)
          setTranslation(v9, loadingId - (i3dNode.textSize * (1 - v14 * 2) / (1 - v15 * 2) * i3dNode.scaleX + i3dNode.textSize * u0.charToCharSpace * v14 / v16) * 0.5 + (i3dNode.textSize * (1 - v14 * 2) / (1 - v15 * 2) * i3dNode.scaleX + i3dNode.textSize * u0.charToCharSpace * v14 / v16) * v12, i3dNode.textSize * i3dNode.scaleY * 0.5 + i3dNode.textSize * i3dNode.scaleY * v13, 0)
          if v10 ~= " " and v10 ~= "" then
          end
          -- TODO: structure LOP_FORNLOOP (pc 112, target 13)
          if i3dNode.textAlignment == RenderText.ALIGN_LEFT then
            setTranslation(i3dNode.rootNode, -arguments, 0, 0)
            return
          end
          if i3dNode.textAlignment == RenderText.ALIGN_CENTER then
            setTranslation(i3dNode.rootNode, -arguments * 0.5, 0, 0)
            return
          end
          setTranslation(i3dNode.rootNode, 0, 0, 0)
        end
      end
      v7.createSingleCharacter = function(self, i3dNode, failedReason, arguments, loadingId, v5, v6, v7, v8)
        if u0.characterShape ~= nil then
          local v10 = clone(u0.characterShape, false, false, false)
          link(i3dNode, {textSize = failedReason or 1, scaleX = v6 or 1, scaleY = v7 or 1, textColor = arguments, hiddenColor = loadingId, textEmissiveScale = v5 or 0, hiddenAlpha = v8 or 0, charNode = v10}.charNode)
          setTranslation({textSize = failedReason or 1, scaleX = v6 or 1, scaleY = v7 or 1, textColor = arguments, hiddenColor = loadingId, textEmissiveScale = v5 or 0, hiddenAlpha = v8 or 0, charNode = v10}.charNode, 0, 0, 0)
          setRotation({textSize = failedReason or 1, scaleX = v6 or 1, scaleY = v7 or 1, textColor = arguments, hiddenColor = loadingId, textEmissiveScale = v5 or 0, hiddenAlpha = v8 or 0, charNode = v10}.charNode, 0, 0, 0)
          v10:assignFontMaterialToNode({textSize = failedReason or 1, scaleX = v6 or 1, scaleY = v7 or 1, textColor = arguments, hiddenColor = loadingId, textEmissiveScale = v5 or 0, hiddenAlpha = v8 or 0, charNode = v10}.charNode)
          if {textSize = failedReason or 1, scaleX = v6 or 1, scaleY = v7 or 1, textColor = arguments, hiddenColor = loadingId, textEmissiveScale = v5 or 0, hiddenAlpha = v8 or 0, charNode = v10}.textColor ~= nil then
          end
          v13:setFontCharacterColor(v9.charNode, v10, v11, v12, 1, v9.textEmissiveScale)
          v13:updateSingleCharacter(v9, "")
          return v9
        end
        Logging.error("Could not create characters from font '%s'. No source character mesh found!", u0.name)
      end
      v7.updateSingleCharacter = function(self, i3dNode, failedReason)
        if i3dNode ~= nil then
          local arguments = arguments:setFontCharacter(i3dNode.charNode, failedReason, i3dNode.textColor, i3dNode.hiddenColor)
          if arguments ~= nil then
          end
          setScale(i3dNode.charNode, i3dNode.textSize * (1 - v6 * 2) / (1 - v7 * 2) * i3dNode.scaleX, i3dNode.textSize * i3dNode.scaleY, 1)
          setTranslation(i3dNode.charNode, i3dNode.textSize * i3dNode.scaleY * loadingId, i3dNode.textSize * i3dNode.scaleY * v5, 0)
        end
      end
      v7.getFontMaxWidthRatio = function(self, i3dNode, failedReason, arguments)
        -- TODO: structure LOP_FORNPREP (pc 7, target 76)
        if u0.characters[1]["type"] == MaterialManager.FONT_CHARACTER_TYPE.ALPHABETICAL then
          -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000000 -> L48
        end
        if v8["type"] == MaterialManager.FONT_CHARACTER_TYPE.NUMERICAL then
          -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L48
        end
        if v8["type"] == MaterialManager.FONT_CHARACTER_TYPE.SPECIAL and arguments ~= false then
          if not v8.spacingX then
          end
          if not v8.spacingY then
          end
          local v12 = math.max((1 - v9 * 2) / (1 - v10 * 2), loadingId)
        end
        -- TODO: structure LOP_FORNLOOP (pc 75, target 8)
        return loadingId
      end
      table.insert(self.fontMaterials, v7)
      self.fontMaterialsByName[v7.name] = v7
    end
    delete(i3dNode)
  end
  v5.references = v5.references - 1
  if v5.references == 0 then
    v5:delete()
    if self.finishedLoadingCallback ~= nil then
      self.finishedLoadingCallback(self.callbackTarget)
      self.finishedLoadingCallback = nil
      self.callbackTarget = nil
    end
  end
end
function MaterialManager:registerXMLPaths()
  self:register(XMLValueType.STRING, "fonts.font(?)#name", "Name if font")
  self:register(XMLValueType.STRING, "fonts.font(?)#filename", "Path to i3d file")
  self:register(XMLValueType.STRING, "fonts.font(?)#node", "Path to material node")
  self:register(XMLValueType.STRING, "fonts.font(?)#characterShape", "Path to character mesh")
  self:register(XMLValueType.STRING, "fonts.font(?)#noNormalNode", "Path to material node without normal map")
  self:register(XMLValueType.FLOAT, "fonts.font(?).spacing#x", "X Spacing", 0)
  self:register(XMLValueType.FLOAT, "fonts.font(?).spacing#y", "Y Spacing", 0)
  self:register(XMLValueType.FLOAT, "fonts.font(?).spacing#charToChar", "Spacing from character to character in percentage", 0.1)
  self:register(XMLValueType.INT, "fonts.font(?).character(?)#uvIndex", "Index on uv map", 0)
  self:register(XMLValueType.STRING, "fonts.font(?).character(?)#value", "Character value")
  self:register(XMLValueType.STRING, "fonts.font(?).character(?)#type", "Character type", "alphabetical")
  self:register(XMLValueType.FLOAT, "fonts.font(?).character(?)#spacingX", "Custom spacing X")
  self:register(XMLValueType.FLOAT, "fonts.font(?).character(?)#spacingY", "Custom spacing Y")
  self:register(XMLValueType.FLOAT, "fonts.font(?).character(?)#offsetX", "Custom X offset for created char lines (percentage)", 0)
  self:register(XMLValueType.FLOAT, "fonts.font(?).character(?)#offsetY", "Custom Y offset for created char lines (percentage)", 0)
  self:register(XMLValueType.FLOAT, "fonts.font(?).character(?)#realSpacingX", "Real spacing from border to visual beginning")
end
local v1 = MaterialManager.new()
g_materialManager = v1
