-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MaterialUtil = {}
function MaterialUtil.onCreateBaseMaterial(v0, v1)
  local v2 = getUserAttribute(v1, "materialName")
  if v2 == nil then
    local v8 = getName(v1)
    print("Warning: No material name given in '" .. v8 .. "' for MaterialUtil.onCreateBaseMaterial")
    return
  end
  local v6 = getMaterial(v1, 0)
  v3:addBaseMaterial(...)
end
function MaterialUtil.validateMaterialAttributes(v0, v1)
  local v2 = getUserAttribute(v0, "fillType")
  if v2 == nil then
    local v9 = getName(v0)
    print("Warning: No fillType given in '" .. v9 .. "' for " .. v1)
    return false
  end
  local v3 = v3:getFillTypeIndexByName(v2)
  if v3 == nil then
    local v10 = tostring(v2)
    print("Warning: Unknown fillType '" .. v10 .. "' for " .. v1)
    return false
  end
  local v4 = getUserAttribute(v0, "materialType")
  if v4 == nil then
    local v11 = getName(v0)
    print("Warning: No materialType given for '" .. v11 .. "' for " .. v1)
    return false
  end
  local v5 = v5:getMaterialTypeByName(v4)
  if v5 == nil then
    local v14 = getName(v0)
    print("Warning: Unknown materialType '" .. v4 .. "' given for '" .. v14 .. "' for " .. v1)
    return false
  end
  local v7 = getUserAttribute(v0, "materialIndex")
  local v6 = Utils.getNoNil(v7, 1)
  v7 = tonumber(v6)
  if v7 == nil then
    local v17 = getName(v0)
    print("Warning: Invalid materialIndex '" .. v6 .. "' for " .. v17 .. "-" .. v4 .. "!")
    return false
  end
  return true, v3, v5, v7
end
function MaterialUtil.onCreateMaterial(_, id)
  local v2, v3, v4, v5 = MaterialUtil.validateMaterialAttributes(id, "MaterialUtil.onCreateMaterial")
  if v2 then
    local v11 = getMaterial(id, 0)
    v6:addMaterial(...)
  end
end
function MaterialUtil.onCreateParticleMaterial(_, id)
  local v2, v3, v4, v5 = MaterialUtil.validateMaterialAttributes(id, "MaterialUtil.onCreateParticleMaterial")
  if v2 then
    local v11 = getMaterial(id, 0)
    v6:addParticleMaterial(...)
  end
end
function MaterialUtil.onCreateParticleSystem(_, id)
  local particleTypeName = getUserAttribute(id, "particleType")
  if particleTypeName == nil then
    local v5 = getName(id)
    Logging.warning(...)
    return
  end
  local v3 = v3:getParticleSystemTypeByName(particleTypeName)
  if v3 == nil then
    local v7 = getName(id)
    local v8 = table.concat(g_particleSystemManager.particleTypes, " ")
    Logging.warning(...)
    return
  end
  v5 = getUserAttribute(id, "defaultEmittingState")
  local v4 = Utils.getNoNil(v5, false)
  local v6 = getUserAttribute(id, "worldSpace")
  v5 = Utils.getNoNil(v6, true)
  v7 = getUserAttribute(id, "forceFullLifespan")
  v6 = Utils.getNoNil(v7, false)
  ParticleUtil.loadParticleSystemFromNode(id, {}, v4, v5, v6)
  v8:addParticleSystem(v3, {})
end
function MaterialUtil.loadBaseMaterialsFromXML(targetTable, xmlFile, baseKey, components, i3dMappings)
  xmlFile:iterate(baseKey, function(targetTable, xmlFile)
    local components = MaterialUtil.loadBaseMaterialFromXML(u0, xmlFile, {}, u1, u2)
    if components then
      table.insert(u3, {})
    end
  end)
end
function MaterialUtil:loadBaseMaterialFromXML(v1, v2, v3, v4)
  local v5 = self:getValue(v1 .. "#name")
  if v5 == nil then
    Logging.xmlWarning(self, "Missing material name for base material '%s'", v1)
    return false
  end
  local v6 = ClassUtil.getIsValidIndexName(v5)
  if not v6 then
    Logging.xmlWarning(self, "Given material name '%s' is not valid for material '%s'", v5, v1)
    return false
  end
  v6 = self:getValue(v1 .. "#baseNode", nil, v3, v4)
  if v6 == nil then
    Logging.xmlWarning(self, "Missing baseNode for base material '%s'", v1)
    return false
  end
  local v7 = getHasClassId(v6, ClassIds.SHAPE)
  if not v7 then
    local v10 = getName(v6)
    Logging.xmlWarning(self, "Material baseNode '%s' is not a shape '%s'", v10, v1)
    return false
  end
  v2.name = v5
  v2.baseNode = v6
  v7 = getMaterial(v6, 0)
  v2.materialId = v7
  v2.nameToShaderParameter = {}
  v2.shaderParameters = {}
  while true do
    v8 = string.format("%s.shaderParameter(%d)", v1, v7)
    v9 = self:hasProperty(v8)
    if not v9 then
      break
    end
    v10 = MaterialUtil.loadBaseMaterialParameterFromXML(self, v8, {}, v2.baseNode)
    if v10 then
      if v2.nameToShaderParameter[{}.name] == nil then
        v2.nameToShaderParameter[{}.name] = {}
        table.insert(v2.shaderParameters, {})
      else
        Logging.xmlWarning(self, "shaderParameter '%s' already defined for material '%s'!", {}.name, v1)
      end
    end
  end
  if #v2.shaderParameters == 0 then
    Logging.xmlWarning(self, "Missing shaderParameters for base material '%s'", v1)
    return false
  end
  return true
end
function MaterialUtil:loadBaseMaterialParameterFromXML(v1, v2, v3)
  local v4 = self:getValue(v1 .. "#name")
  if v4 == nil then
    Logging.xmlWarning(self, "Missing shader parameter name for base material '%s'", v1)
    return false
  end
  local v5 = ClassUtil.getIsValidIndexName(v4)
  if not v5 then
    Logging.xmlWarning(self, "Given shader parameter name '%s' is not valid for base material '%s'", v4, v1)
    return false
  end
  v5 = v5:loadColorAndMaterialFromXML(self, v3, v4, v1)
  if v5 == nil then
    Logging.xmlWarning(self, "Failed to load shader parameter value or material for base material '%s'", v1)
    return false
  end
  v2.name = v4
  v2.value = v5
  return true
end
function MaterialUtil.applyBaseMaterial(node, material)
  local v2 = getHasClassId(node, ClassIds.SHAPE)
  if v2 then
    v2 = getMaterial(node, 0)
    if material.materialId == v2 then
      -- TODO: structure LOP_FORNPREP (pc 21, target 67)
      local v7 = getHasShaderParameter(node, material.shaderParameters[#material.shaderParameters].name)
      if v7 then
        setShaderParameter(node, material.shaderParameters[#material.shaderParameters].name, material.shaderParameters[#material.shaderParameters].value[1], material.shaderParameters[#material.shaderParameters].value[2], material.shaderParameters[#material.shaderParameters].value[3], material.shaderParameters[#material.shaderParameters].value[4], false)
      else
        Logging.warning("ShaderParameter '%s' not found for material '%s'!", material.shaderParameters[#material.shaderParameters].name, material.name)
        table.remove(material.shaderParameters, #material.shaderParameters)
      end
      -- TODO: structure LOP_FORNLOOP (pc 66, target 22)
    end
  end
  v2 = getNumOfChildren(node)
  if 0 < v2 then
    -- TODO: structure LOP_FORNPREP (pc 77, target 90)
    v7 = getChildAt(node, 0)
    MaterialUtil.applyBaseMaterial(v7, material)
    -- TODO: structure LOP_FORNLOOP (pc 89, target 78)
  end
end
function MaterialUtil:registerBaseMaterialXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "(?)#name", "Material name")
  self:register(XMLValueType.NODE_INDEX, v1 .. "(?)#baseNode", "Material base node")
  self:register(XMLValueType.STRING, v1 .. "(?).shaderParameter(?)#name", "Shader parameter name")
  self:register(XMLValueType.COLOR, v1 .. "(?).shaderParameter(?)#value", "Color value")
  self:register(XMLValueType.INT, v1 .. "(?).shaderParameter(?)#material", "Material value")
end
