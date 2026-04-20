-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

XMLValueType = {BASE_TYPES = {}, TYPES = {}}
function XMLValueType.getXMLLocalization(v0, v1, v2, v3, v4)
  local v5 = v1:findLast("%.")
  local v6 = v1:sub(0, v5 - 1)
  local v10 = string.len(v1)
  local v7 = v1:sub(...)
  return XMLUtil.getXMLI18NValue(v0, v6, getXMLString, v7, v2, v3, v4)
end
function XMLValueType.getXMLAngle(v0, v1, v2)
  local v3 = getXMLFloat(v0, v1)
  if v3 ~= nil then
    return math.rad(v3)
  end
  if v2 == nil then
    return
  end
  v4 = math.rad(v2)
  return v4
end
function XMLValueType.getXMLTime(v0, v1, v2)
  local v3 = getXMLFloat(v0, v1)
  if v3 ~= nil then
    return v3 * 1000
  end
  if v2 == nil then
    return
  end
  return v2 * 1000
end
function XMLValueType.getXMLNode(v0, v1, v2, v3, v4)
  if v3 == nil then
    local v6 = v6:getFileByHandle(v0)
    Logging.xmlWarning(v6, "No components given for '%s'.", v1)
    printCallstack()
    return v2
  end
  v6 = type(v2)
  if v6 == "string" then
  end
  local v9 = getXMLString(v0, v1)
  local v6, v7 = I3DUtil.indexToObject(v3, v9 or v5, v4)
  return v6 or v2, v7
end
function XMLValueType.getXMLNodes(v0, v1, v2, v3, v4, v5)
  local v6 = type(v2)
  if v6 ~= "number" then
    -- cmp-jump LOP_JUMPXEQKS R6 aux=0x80000003 -> L17
  end
  -- goto L22  (LOP_JUMP +5)
  if v6 == "string" then
  end
  if v3 == nil then
    local v9 = v9:getFileByHandle(v0)
    Logging.xmlWarning(v9, "No components given for '%s'.", v1)
    printCallstack()
    if v5 then
      return v2
    end
    return unpack(v2)
  end
  local v10 = getXMLString(v0, v1)
  if (v10 or v7) ~= nil then
    v10 = (v10 or v7):split(" ")
    -- TODO: structure LOP_FORNPREP (pc 63, target 88)
    local v14 = I3DUtil.indexToObject(v3, v10[1], v4)
    if v14 == nil then
      Logging.xmlWarning(v0, "Unknown node '%s' in '%s'!", v10[1], v1)
    else
      table.insert({}, v14)
    end
    -- TODO: structure LOP_FORNLOOP (pc 87, target 64)
  end
  if #v8 == 0 then
    if v5 then
      return v2
    end
    v10 = unpack(v2)
    return v10
  end
  if v5 then
    return v8
  end
  v10 = unpack(v8)
  return v10
end
function XMLValueType.getVectorFromXML(v0, v1, v2)
  local v3 = getXMLString(v0, v1)
  if v3 == nil then
    local v4 = type(v2)
    if v4 == "string" then
    else
      v4 = type(v2)
      if v4 == "table" then
        v4 = unpack(v2)
        return v4
      end
    end
  end
  v4 = string.getVector(v3)
  return v4
end
function XMLValueType.getXMLVector2(xmlFile, path, default, packed)
  local v4, v5, v6 = XMLValueType.getVectorFromXML(xmlFile, path, default)
  if v4 ~= nil then
    if v5 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L26
    end
    local v8 = v8:getFileByHandle(xmlFile)
    Logging.xmlWarning(v8, "Invalid vector 2 for '%s'.", path)
    -- goto L35  (LOP_JUMP +9)
    if not packed then
      return v4, v5
    end
    return {v4, v5}
  end
  return nil
end
function XMLValueType.getXMLVector3(xmlFile, path, default, packed)
  local v4, v5, v6, v7 = XMLValueType.getVectorFromXML(xmlFile, path, default)
  if v4 ~= nil then
    if v5 ~= nil and v6 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L28
    end
    local v9 = v9:getFileByHandle(xmlFile)
    Logging.xmlWarning(v9, "Invalid vector 3 for '%s'.", path)
    -- goto L38  (LOP_JUMP +10)
    if not packed then
      return v4, v5, v6
    end
    return {v4, v5, v6}
  end
  return nil
end
function XMLValueType.getXMLVector4(xmlFile, path, default, packed)
  local v4, v5, v6, v7, v8 = XMLValueType.getVectorFromXML(xmlFile, path, default)
  if v4 ~= nil then
    if v5 ~= nil and v6 ~= nil and v7 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L30
    end
    local v10 = v10:getFileByHandle(xmlFile)
    Logging.xmlWarning(v10, "Invalid vector 4 for '%s'.", path)
    -- goto L41  (LOP_JUMP +11)
    if not packed then
      return v4, v5, v6, v7
    end
    return {v4, v5, v6, v7}
  end
  return nil
end
function XMLValueType.getXMLVectorN(xmlFile, path, default, packed)
  if not packed then
    return XMLValueType.getVectorFromXML(xmlFile, path, default)
  end
  local v5 = XMLValueType.getVectorFromXML(xmlFile, path, default)
  return {}
end
function XMLValueType.getXMLVector3Angle(xmlFile, path, default, packed)
  local v4 = type(default)
  if v4 == "table" then
    -- TODO: structure LOP_FORNPREP (pc 10, target 18)
    local v7 = math.deg(default[1])
    default[1] = v7
    -- TODO: structure LOP_FORNLOOP (pc 17, target 11)
  end
  local v4, v5, v6 = XMLValueType.getVectorFromXML(xmlFile, path, default)
  if v4 ~= nil then
    if v5 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L44
    end
    local v8 = v8:getFileByHandle(xmlFile)
    Logging.xmlWarning(v8, "Invalid vector 3 for '%s'.", path)
    -- goto L81  (LOP_JUMP +37)
    if not packed then
      v7 = math.rad(v4)
      v8 = math.rad(v5)
      local v9 = math.rad(v6)
      return v7
    end
    v8 = math.rad(v4)
    v9 = math.rad(v5)
    local v10 = math.rad(v6)
    return {}
  end
  return nil
end
function XMLValueType.getXMLVector2Angle(xmlFile, path, default, packed)
  local v4 = type(default)
  if v4 == "table" then
    -- TODO: structure LOP_FORNPREP (pc 10, target 18)
    local v7 = math.deg(default[1])
    default[1] = v7
    -- TODO: structure LOP_FORNLOOP (pc 17, target 11)
  end
  local v4, v5 = XMLValueType.getVectorFromXML(xmlFile, path, default)
  if v4 ~= nil then
    if v5 == nil then
      v7 = v7:getFileByHandle(xmlFile)
      Logging.xmlWarning(v7, "Invalid vector 2 for '%s'.", path)
    else
      if not packed then
        local v6 = math.rad(v4)
        v7 = math.rad(v5)
        return v6
      end
      v7 = math.rad(v4)
      local v8 = math.rad(v5)
      return {}
    end
  end
  return nil
end
function XMLValueType.getXMLColor(xmlFile, path, default, packed)
  local colorStr = getXMLString(xmlFile, path)
  if colorStr == nil then
    local v5 = type(default)
    if v5 == "string" then
    else
      return default
    end
  end
  v5 = v5:getBrandColorByName(colorStr)
  if v5 == nil then
    local v7 = string.getVector(colorStr)
    if #{} < 3 then
      if colorStr ~= nil then
        v7 = v7:getFileByHandle(xmlFile)
        Logging.xmlWarning(v7, "Invalid color value '%s' in '%s'.", colorStr, path)
      end
      local v6 = type(default)
      if v6 == "string" then
        v7 = string.getVector(default)
        -- if #{} >= 3 then goto L81 end
        return nil
      elseif default ~= nil then
      else
        return nil
      end
    end
    if v5[4] == nil then
      v5[4] = 0
    end
  end
  if packed then
    return v5
  end
  v6 = unpack(v5)
  return v6
end
function XMLValueType.setXMLAngle(xmlFile, path, value)
  local v6 = math.deg(value or 0)
  setXMLFloat(...)
end
function XMLValueType.setXMLTime(xmlFile, path, value)
  setXMLFloat(xmlFile, path, (value or 0) / 1000)
end
function XMLValueType.setXMLNode(xmlFile, path, value)
  local packed = entityExists(value)
  if packed then
    local v6 = getName(value)
    setXMLString(...)
  end
end
function XMLValueType.setXMLNodes(xmlFile, path, ...)
  for v6, v7 in ipairs({}) do
    if 1 < v6 then
    end
    local v8 = entityExists(v7)
    if not v8 then
      continue
    end
    v8 = getName(v7)
  end
  setXMLString(xmlFile, path, default)
end
function XMLValueType.setVectorInXML(xmlFile, path, vector)
  local v6 = table.concat(vector, " ")
  setXMLString(...)
end
function XMLValueType.setXMLVector2(xmlFile, path, ...)
  XMLValueType.setVectorInXML(xmlFile, path, {})
end
function XMLValueType.setXMLVector3(xmlFile, path, ...)
  XMLValueType.setVectorInXML(xmlFile, path, {})
end
function XMLValueType.setXMLVector4(xmlFile, path, ...)
  XMLValueType.setVectorInXML(xmlFile, path, {})
end
function XMLValueType.setXMLVectorN(xmlFile, path, ...)
  XMLValueType.setVectorInXML(xmlFile, path, {})
end
function XMLValueType.setXMLVector3Angle(xmlFile, path, ...)
  -- TODO: structure LOP_FORNPREP (pc 9, target 17)
  local v6 = math.deg({}[1])
  {}[1] = v6
  -- TODO: structure LOP_FORNLOOP (pc 16, target 10)
  XMLValueType.setVectorInXML(xmlFile, path, {})
end
function XMLValueType.setXMLVector2Angle(xmlFile, path, ...)
  -- TODO: structure LOP_FORNPREP (pc 9, target 17)
  local v6 = math.deg({}[1])
  {}[1] = v6
  -- TODO: structure LOP_FORNLOOP (pc 16, target 10)
  XMLValueType.setVectorInXML(xmlFile, path, {})
end
function XMLValueType.setXMLColor(xmlFile, path, ...)
  XMLValueType.setVectorInXML(xmlFile, path, {})
end
function XMLValueType.registerBaseType(name, content)
  XMLValueType.BASE_TYPES[#XMLValueType.BASE_TYPES + 1] = {name = name, content = content}
end
XMLValueType.registerBaseType("HYPHEN", "<xs:restriction base=\"xs:string\">\n            <xs:pattern value=\"-\"/>\n        </xs:restriction>")
XMLValueType.registerBaseType("FLOAT_OR_HYPHEN", "<xs:union memberTypes=\"xs:float g_hyphen\"/>")
XMLValueType.registerBaseType("VECTOR_FLOAT", "<xs:list itemType=\"g_float_or_hyphen\"/>")
function XMLValueType:register(path, default, packed, colorStr, v5, v6, v7, v8, v9)
  XMLValueType.TYPES[#XMLValueType.TYPES + 1] = {name = self, description = path, get = default, set = packed, isBasicFunction = colorStr, luaType = v5, defaultStr = v6, xsdBase = v7, xsdPattern = v8, luaPattern = v9}
  local v12 = self:upper()
  XMLValueType[v12] = #XMLValueType.TYPES
  return #XMLValueType.TYPES
end
local path = XMLValueType.register("STRING", "String", getXMLString, setXMLString, true, "string", "string", "xs:string")
XMLValueType.STRING = path
path = XMLValueType.register("L10N_STRING", "String or l10n key", XMLValueType.getXMLLocalization, setXMLString, false, "string", "string", "xs:string")
XMLValueType.L10N_STRING = path
path = XMLValueType.register("FLOAT", "Float", getXMLFloat, setXMLFloat, true, "number", "float", "xs:float")
XMLValueType.FLOAT = path
path = XMLValueType.register("ANGLE", "Angle", XMLValueType.getXMLAngle, XMLValueType.setXMLAngle, false, "number", "angle", "xs:float")
XMLValueType.ANGLE = path
path = XMLValueType.register("TIME", "Time in seconds", XMLValueType.getXMLTime, XMLValueType.setXMLTime, false, "number", "time", "xs:float")
XMLValueType.TIME = path
path = XMLValueType.register("INT", "Integer", getXMLInt, setXMLInt, true, "number", "integer", "xs:integer")
XMLValueType.INT = path
path = XMLValueType.register("BOOL", "Boolean", getXMLBool, setXMLBool, true, "boolean", "boolean", "xs:string", "true|false", {true, false})
XMLValueType.BOOL = path
path = XMLValueType.register("NODE_INDEX", "Index to i3d node or i3d mapping identifier", XMLValueType.getXMLNode, XMLValueType.setXMLNode, false, "string", "node", "xs:string", nil, {})
XMLValueType.NODE_INDEX = path
path = XMLValueType.register("NODE_INDICES", "List of indices to i3d nodes or i3d mapping identifiers", XMLValueType.getXMLNodes, XMLValueType.setXMLNodes, false, "string", "node", "xs:string", nil, {})
XMLValueType.NODE_INDICES = path
path = XMLValueType.register("VECTOR_2", "Multiple values (x, y)", XMLValueType.getXMLVector2, XMLValueType.setXMLVector2, false, "string", "x y", "g_vector_float", "\\S+ \\S+", "(%-?%d*%.?%d+%s%-?%d*%.?%d+)")
XMLValueType.VECTOR_2 = path
path = XMLValueType.register("VECTOR_3", "Multiple values (x, y, z)", XMLValueType.getXMLVector3, XMLValueType.setXMLVector3, false, "string", "x y z", "g_vector_float", "\\S+ \\S+ \\S+", "(%-?%d*%.?%d+%s%-?%d*%.?%d+%s%-?%d*%.?%d+)")
XMLValueType.VECTOR_3 = path
path = XMLValueType.register("VECTOR_4", "Multiple values (x, y, z, w)", XMLValueType.getXMLVector4, XMLValueType.setXMLVector4, false, "string", "x y z w", "g_vector_float", "\\S+ \\S+ \\S+ \\S+", "(%-?%d*%.?%d+%s%-?%d*%.?%d+%s%-?%d*%.?%d+%s%-?%d*%.?%d+)")
XMLValueType.VECTOR_4 = path
path = XMLValueType.register("VECTOR_N", "Multiple values", XMLValueType.getXMLVectorN, XMLValueType.setXMLVectorN, false, "string", "1 2 .. n", "g_vector_float")
XMLValueType.VECTOR_N = path
path = XMLValueType.register("VECTOR_TRANS", "Translation values (x, y, z)", XMLValueType.getXMLVector3, XMLValueType.setXMLVector3, false, "string", "x y z", "g_vector_float", "\\S+ \\S+ \\S+", "(%-?%d*%.?%d+%s%-?%d*%.?%d+%s%-?%d*%.?%d+)")
XMLValueType.VECTOR_TRANS = path
path = XMLValueType.register("VECTOR_ROT", "Rotation values (x, y, z)", XMLValueType.getXMLVector3Angle, XMLValueType.setXMLVector3Angle, false, "string", "x y z", "g_vector_float", "\\S+ \\S+ \\S+", "(%-?%d*%.?%d+%s%-?%d*%.?%d+%s%-?%d*%.?%d+)")
XMLValueType.VECTOR_ROT = path
path = XMLValueType.register("VECTOR_ROT_2", "Rotation values (x, y)", XMLValueType.getXMLVector2Angle, XMLValueType.setXMLVector2Angle, false, "string", "x y", "g_vector_float", "\\S+ \\S+", "(%-?%d*%.?%d+%s%-?%d*%.?%d+)")
XMLValueType.VECTOR_ROT_2 = path
path = XMLValueType.register("VECTOR_SCALE", "Scale values (x, y, z)", XMLValueType.getXMLVector3, XMLValueType.setXMLVector3, false, "string", "x y z", "g_vector_float", "\\S+ \\S+ \\S+", "(%d*%.?%d+%s%d*%.?%d+%s%d*%.?%d+)")
XMLValueType.VECTOR_SCALE = path
path = XMLValueType.register("COLOR", "Color values (r, g, b) or brand color id", XMLValueType.getXMLColor, XMLValueType.setXMLColor, false, "string", "r g b", "xs:string")
XMLValueType.COLOR = v1
