-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TypedMotionPathEffect = {}
local TypedMotionPathEffect_mt = Class(TypedMotionPathEffect, MotionPathEffect)
function TypedMotionPathEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.fruitTypeIndex = FruitType.UNKNOWN
  v1.fillTypeIndex = FillType.UNKNOWN
  v1.growthState = 0
  return v1
end
function TypedMotionPathEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = xmlFile:getValue(key .. "#meshType")
  self.meshType = v6
  v6 = xmlFile:getValue(key .. "#materialType")
  self.materialType = v6
  v6 = xmlFile:getValue(key .. "#forcedFillType")
  v7 = v7:getFillTypeIndexByName(v6)
  if v7 ~= nil then
    self.forcedFillType = v7
    self.fillTypeIndex = v7
  end
  local forcedFruitTypeName = xmlFile:getValue(key .. "#forcedFruitType")
  local v9 = v9:getFruitTypeByName(forcedFruitTypeName)
  if v9 ~= nil then
    self.forcedFruitType = v9.index
    self.fruitTypeIndex = v9.index
  end
  local v10 = xmlFile:getValue(key .. "#forcedGrowthState")
  self.forcedGrowthState = v10
  if self.forcedGrowthState ~= nil then
    self.growthState = self.forcedGrowthState
  end
  v10 = xmlFile:getValue(key .. "#requiredFillType")
  local v11 = v11:getFillTypeIndexByName(v10)
  if v11 ~= nil then
    self.requiredFillType = v11
  end
  v11 = xmlFile:getValue(key .. "#requiredFruitType")
  local v12 = v12:getFruitTypeByName(v11)
  if v12 ~= nil then
    self.requiredFruitType = v12.index
  end
  v12 = xmlFile:getValue(key .. "#requiredGrowthState")
  self.requiredGrowthState = v12
  return true
end
function TypedMotionPathEffect:setFruitType(fruitTypeIndex, growthState)
  if fruitTypeIndex == self.fruitTypeIndex then
    -- if v2 == v0.growthState then goto L43 end
  end
  if self.forcedFruitType == nil then
    if self.requiredFruitType ~= nil then
      -- if v0.requiredFruitType ~= v1 then goto L24 end
    end
    self.fruitTypeIndex = fruitTypeIndex
  end
  if self.forcedGrowthState == nil then
    if self.requiredGrowthState ~= nil then
      -- if v0.requiredGrowthState ~= v2 then goto L39 end
    end
    self.growthState = growthState
  end
  if v3 then
    self:loadSharedMotionPathEffect()
  end
end
function TypedMotionPathEffect:setFillType(fillTypeIndex, growthState)
  if not fillTypeIndex then
  end
  if not growthState then
  end
  if fillTypeIndex == self.fillTypeIndex then
    -- if v3 == v0.growthState then goto L55 end
  end
  if self.forcedFillType == nil then
    if self.requiredFillType ~= nil then
      -- if v0.requiredFillType ~= v1 then goto L34 end
    end
    self.fillTypeIndex = fillTypeIndex
  end
  if growthState ~= nil and self.forcedGrowthState == nil then
    if self.requiredGrowthState ~= nil then
      -- if v0.requiredGrowthState ~= v2 then goto L51 end
    end
    self.growthState = growthState
  end
  if v3 then
    self:loadSharedMotionPathEffect()
  end
end
function TypedMotionPathEffect:getIsSharedEffectMatching(sharedEffect, alternativeCheck)
  local v4 = v4:superClass()
  local v3 = v4.getIsSharedEffectMatching(self, sharedEffect, alternativeCheck)
  if not v3 then
    return false
  end
  v3 = self:getIsEffectSpecificDataMatching(sharedEffect, alternativeCheck)
  if not v3 then
    return false
  end
  return true
end
function TypedMotionPathEffect:getIsEffectMeshMatching(effectMesh, alternativeCheck)
  local v4 = v4:superClass()
  local v3 = v4.getIsEffectMeshMatching(self, effectMesh, alternativeCheck)
  if not v3 then
    return false
  end
  if effectMesh.meshType ~= self.meshType then
    return false
  end
  v3 = self:getIsEffectSpecificDataMatching(effectMesh, alternativeCheck)
  if not v3 then
    return false
  end
  return true
end
function TypedMotionPathEffect:getIsEffectMaterialMatching(effectMaterial, alternativeCheck)
  local v4 = v4:superClass()
  local v3 = v4.getIsEffectMaterialMatching(self, effectMaterial, alternativeCheck)
  if not v3 then
    return false
  end
  if effectMaterial.materialType ~= self.materialType then
    return false
  end
  v3 = self:getIsEffectSpecificDataMatching(effectMaterial, alternativeCheck)
  if not v3 then
    return false
  end
  return true
end
function TypedMotionPathEffect:getEffectMatchingString()
  local v2 = v2:superClass()
  local v1 = v2.getEffectMatchingString(self)
  if self.materialType ~= nil then
    local v3 = string.format(", materialType '%s'", self.materialType)
  end
  if self.meshType ~= nil then
    v3 = string.format(", meshType '%s'", self.meshType)
  end
  if self.fruitTypeIndex ~= nil then
    local v5 = v5:getFruitTypeNameByIndex(self.fruitTypeIndex)
    v3 = string.format(...)
  end
  if self.growthState ~= nil then
    v3 = string.format(", growthState '%s'", self.growthState)
  end
  if self.fillTypeIndex ~= nil then
    v5 = v5:getFillTypeNameByIndex(self.fillTypeIndex)
    v3 = string.format(...)
  end
  return v1
end
function TypedMotionPathEffect:getIsEffectSpecificDataMatching(target, alternativeCheck)
  if target.fruitTypes ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 10, target 20)
    if target.fruitTypes[1] == self.fruitTypeIndex then
    end
    -- TODO: structure LOP_FORNLOOP (pc 19, target 11)
    if not v3 then
      return false
    end
  end
  if target.growthStates ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 33, target 43)
    if target.growthStates[1] == self.growthState then
    end
    -- TODO: structure LOP_FORNLOOP (pc 42, target 34)
    -- if v3 then goto L50 end
    return false
  elseif not alternativeCheck then
    return false
  end
  if target.fillTypes ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 60, target 70)
    if target.fillTypes[1] == self.fillTypeIndex then
    end
    -- TODO: structure LOP_FORNLOOP (pc 69, target 61)
    if not v3 then
      return false
    end
  end
  return true
end
function TypedMotionPathEffect:loadEffectMaterialFromXML(target, alternativeCheck)
  MotionPathEffect.loadEffectMaterialFromXML(self, target, alternativeCheck)
  TypedMotionPathEffect.loadEffectSpecificDataFromXML(self, target, alternativeCheck)
  local v3 = target:getValue(alternativeCheck .. "#materialType")
  self.materialType = v3
end
function TypedMotionPathEffect:loadEffectMeshFromXML(target, alternativeCheck)
  MotionPathEffect.loadEffectMeshFromXML(self, target, alternativeCheck)
  TypedMotionPathEffect.loadEffectSpecificDataFromXML(self, target, alternativeCheck)
  local v3 = target:getValue(alternativeCheck .. "#meshType")
  self.meshType = v3
end
function TypedMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
  MotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
  TypedMotionPathEffect.loadEffectSpecificDataFromXML(motionPathEffect, xmlFile, key)
end
function TypedMotionPathEffect:loadEffectSpecificDataFromXML(target, alternativeCheck)
  local v3 = target:getValue(alternativeCheck .. "#fruitTypes")
  if v3 ~= nil then
    self.fruitTypes = {}
    local v4 = v3:split(" ")
    -- TODO: structure LOP_FORNPREP (pc 19, target 38)
    local v8 = v8:getFruitTypeByName(v4[1])
    if v8 ~= nil then
      table.insert(self.fruitTypes, v8.index)
    end
    -- TODO: structure LOP_FORNLOOP (pc 37, target 20)
  end
  v4 = target:getValue(alternativeCheck .. "#growthStates", nil, true)
  self.growthStates = v4
  if #self.growthStates == 0 then
    self.growthStates = nil
  end
  v4 = target:getValue(alternativeCheck .. "#fillTypes")
  if v4 ~= nil then
    self.fillTypes = {}
    local v5 = v4:split(" ")
    -- TODO: structure LOP_FORNPREP (pc 75, target 95)
    local v9 = v9:getFillTypeIndexByName(v5[1])
    if v9 ~= FillType.UNKNOWN then
      table.insert(self.fillTypes, v9)
    end
    -- TODO: structure LOP_FORNLOOP (pc 94, target 76)
  end
end
function TypedMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
  MotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectSpecificDataXMLPaths(schema, basePath)
end
function TypedMotionPathEffect:registerEffectMeshXMLPaths(target)
  MotionPathEffect.registerEffectMeshXMLPaths(self, target)
  TypedMotionPathEffect.registerEffectSpecificDataXMLPaths(self, target)
  self:register(XMLValueType.STRING, target .. "#meshType", "(TypedMotionPathEffect) Mesh Type")
end
function TypedMotionPathEffect:registerEffectMaterialXMLPaths(target)
  MotionPathEffect.registerEffectMaterialXMLPaths(self, target)
  TypedMotionPathEffect.registerEffectSpecificDataXMLPaths(self, target)
  self:register(XMLValueType.STRING, target .. "#materialType", "(TypedMotionPathEffect) Material Type")
end
function TypedMotionPathEffect:registerEffectSpecificDataXMLPaths(target)
  self:register(XMLValueType.STRING, target .. "#fruitTypes", "(TypedMotionPathEffect) Fruit Type Names")
  self:register(XMLValueType.VECTOR_N, target .. "#growthStates", "(TypedMotionPathEffect) All harvesting states of fruit type")
  self:register(XMLValueType.STRING, target .. "#fillTypes", "(TypedMotionPathEffect) Fill Type Names")
end
function TypedMotionPathEffect:registerEffectXMLPaths(target)
  MotionPathEffect.registerEffectXMLPaths(self, target)
  self:register(XMLValueType.STRING, target .. "#meshType", "(TypedMotionPathEffect) Mesh Type")
  self:register(XMLValueType.STRING, target .. "#materialType", "(TypedMotionPathEffect) Material Type")
  self:register(XMLValueType.STRING, target .. "#forcedFillType", "(TypedMotionPathEffect) Forced fill type that is always applied")
  self:register(XMLValueType.STRING, target .. "#forcedFruitType", "(TypedMotionPathEffect) Forced fruit type that is always applied")
  self:register(XMLValueType.INT, target .. "#forcedGrowthState", "(TypedMotionPathEffect) Forced growth state that is always applied")
  self:register(XMLValueType.STRING, target .. "#requiredFillType", "(TypedMotionPathEffect) Effect will only be used for this fill type")
  self:register(XMLValueType.STRING, target .. "#requiredFruitType", "(TypedMotionPathEffect) Effect will only be used for this fruit type")
  self:register(XMLValueType.INT, target .. "#requiredGrowthState", "(TypedMotionPathEffect) Effect will only be used for this growth state")
end
