-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

XMLUtil = {}
function XMLUtil.getXMLI18NValue(v0, v1, v2, v3, v4, v5, v6)
  if v5 ~= nil then
  end
  if v3 ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000004 -> L15
  end
  -- goto L18  (LOP_JUMP +3)
  local v8 = v2(v0, v1 .. ".en" .. "." .. "")
  if v8 == nil then
    local v9 = v2(v0, v1 .. "." .. "" .. ".en")
    if v9 == nil then
      v9 = v2(v0, v1 .. ".de" .. "." .. "")
      if v9 == nil then
        v9 = v2(v0, v1 .. "." .. "" .. ".de")
        if v9 == nil then
          v9 = v2(v0, v1 .. "." .. "")
          if v9 ~= nil then
            local v10 = type(v9)
            if v10 == "string" then
              v10 = v9:sub(1, 6)
              -- cmp-jump LOP_JUMPXEQKS R10 aux=0x8000000c -> L88
              local v12 = v9:sub(7)
              v10 = v7:getText(...)
            else
            end
          end
          if v8 == nil then
            v10 = v7:hasText(v4)
            if v10 then
              v10 = v7:getText(v4)
            end
          end
        end
      end
    end
  end
  if v8 == nil then
    if v6 ~= nil then
      -- if not v6 then goto L117 end
    end
    print("Error: loading xml I18N item, missing 'en' or global value of attribute '" .. v1 .. v3 .. "'")
    return nil
  end
  v9 = getXMLString(v0, v1 .. "." .. g_languageShort .. v3)
  if v9 == nil then
    v10 = getXMLString(v0, v1 .. v3 .. "." .. g_languageShort)
    if v10 == nil then
    end
  end
  return v9
end
function XMLUtil:checkDeprecatedXMLElements(v1, v2, v3, v4)
  if v3 ~= nil then
    local v7 = self:getString(v1)
    -- if v7 ~= v3 then goto L36 end
    v7 = string.format(" with value '%s'", v3)
  else
    v7 = self:getString(v1)
    if v7 == nil then
      v7 = self:hasProperty(v1)
      -- if not v7 then goto L36 end
      v7 = v1:find("#")
      -- if v7 then goto L36 end
      -- if v4 then goto L36 end
    end
  end
  if v5 then
    if v2 ~= nil then
      Logging.xmlWarning(self, "'%s'%s is not supported anymore, use '%s' instead!", v1, v6, v2)
      return
    end
    Logging.xmlWarning(self, "'%s'%s is not supported anymore!", v1, v6)
  end
end
function XMLUtil.checkDeprecatedUserAttribute(v0, v1, v2, v3)
  local v4 = getUserAttribute(v0, v1)
  if v4 ~= nil then
    local v7 = getName(v0)
    Logging.warning(...)
    if v2 ~= nil then
      v7 = v2:getFilename()
      Logging.warning(...)
    end
  end
end
function XMLUtil:getValueFromXMLFileOrUserAttribute(v1, v2, v3)
  local v5 = type(v3)
  if v5 == "number" then
    v5 = getUserAttribute(v3, v2)
  end
  if v4 == nil and self ~= nil then
    v5 = self:getValue(v1 .. "#" .. v2)
  end
  return v4
end
function XMLUtil.getXMLStringWithDefault(v0, v1, v2, v3, v4)
  local v5 = getXMLString(v0, v1 .. "#" .. v4)
  if not v5 and v2 then
    local v6 = getXMLString(v0, v2 .. "#" .. v4)
  end
  if v3 then
    v6 = getXMLString(v0, v3 .. "#" .. v4)
  end
  return v5
end
function XMLUtil.getXMLIntWithDefault(v0, v1, v2, v3, v4)
  local v5 = getXMLInt(v0, v1 .. "#" .. v4)
  if not v5 and v2 then
    local v6 = getXMLInt(v0, v2 .. "#" .. v4)
  end
  if v3 then
    v6 = getXMLInt(v0, v3 .. "#" .. v4)
  end
  return v5
end
function XMLUtil.getXMLFloatWithDefault(v0, v1, v2, v3, v4)
  local v5 = getXMLFloat(v0, v1 .. "#" .. v4)
  if not v5 and v2 then
    local v6 = getXMLFloat(v0, v2 .. "#" .. v4)
  end
  if v3 then
    v6 = getXMLFloat(v0, v3 .. "#" .. v4)
  end
  return v5
end
function XMLUtil:getXMLOverwrittenValue(v1, v2, v3, v4, ...)
  if v1 ~= nil then
    local v6 = getXMLString(self.handle, v1 .. v2)
    if v6 == "-" then
      return nil
    end
    v6 = self:getValue(...)
  end
  return v5
end
function XMLUtil.loadDataFromMapXML(v0, v1, v2, v3, v4, ...)
  local v7 = string.format("map.%s#filename", v1)
  local v5 = getXMLString(...)
  if v5 ~= nil then
    v7 = Utils.getFilename(v5, v2)
    local v8 = loadXMLFile("mapDataXML", v7)
    if v8 == 0 then
      return false
    end
  end
  v7 = v4(...)
  if v6 ~= v0 then
    delete(v6)
  end
  return v7
end
