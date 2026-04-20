-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

XMLSchema = {XML_SPECIALIZATION_NONE = "none", XML_SHARED_NONE = "none"}
local XMLSchema_mt = Class(XMLSchema)
function XMLSchema.new(name)
  local v1 = setmetatable({}, u0)
  v1.name = name
  v1.paths = {}
  v1.orderedPaths = {}
  v1.delayedRegistrationPaths = {}
  v1.delayedRegistrationFuncs = {}
  v1.delayedRegistrationSharedSchemas = {}
  v1.xmlSpecializationType = XMLSchema.XML_SPECIALIZATION_NONE
  v1.sharedRegistrationName = XMLSchema.XML_SHARED_NONE
  v1.sharedRegistrationBase = ""
  v1.subSchemas = {}
  v1.hasSubSchemas = false
  v1.subSchemaIdentifier = nil
  v1.rootNodeName = nil
  v2:addSchema(v1)
  return v1
end
function XMLSchema:register(valueTypeId, path, description, defaultValue, isRequired)
  if path ~= nil then
    local v6 = path:find("%.%.")
    if v6 then
      Logging.error("Invalid xml path given: %s", path)
      printCallstack()
      return
    end
    if self.rootNodeName ~= nil then
      v6 = path:find("%.")
      local v8 = path:sub(v6)
    end
    if self.paths[path] == nil then
      if valueTypeId == nil then
        Logging.error("Unable to register xml path '%s'. Unknown value type", path)
        printCallstack()
        return
      end
      v6.defaultValue = defaultValue
      if isRequired == nil then
      end
      v6.isRequired = isRequired
      v6.specializations = {self.xmlSpecializationType}
      v6.sharedName = self.sharedRegistrationName
      v6.sharedBase = self.sharedRegistrationBase
      self.paths[path] = v6
      table.insert(self.orderedPaths, v6)
    else
      -- TODO: structure LOP_FORNPREP (pc 99, target 110)
      if self.paths[path].specializations[1] == self.xmlSpecializationType then
      else
        -- TODO: structure LOP_FORNLOOP (pc 109, target 100)
      end
      if v7 then
        table.insert(v6.specializations, self.xmlSpecializationType)
      end
    end
    if #self.orderedPaths == 1 then
      v8 = path:split(".")
      local v7 = v7:split("#")
      self:registerInheritancePaths(v7[1])
    end
    self:updateSubSchemas(self.register, valueTypeId, path, description, defaultValue, isRequired)
    return
  end
  v8 = tostring(path)
  Logging.error(...)
  printCallstack()
end
function XMLSchema:setRootNodeName(rootNodeName)
  self.rootNodeName = rootNodeName
end
function XMLSchema:replaceRootName(path)
  if self.rootNodeName ~= nil then
    local start = path:find("%.")
    local v5 = path:sub(start)
    return self.rootNodeName .. v5
  end
  return path
end
function XMLSchema:setXMLSpecializationType(specializationType)
  if not specializationType then
  end
  self.xmlSpecializationType = v2
  self:updateSubSchemas(self.setXMLSpecializationType, specializationType)
end
function XMLSchema:setXMLSharedRegistration(sharedRegistrationName, sharedRegistrationBase)
  if sharedRegistrationBase ~= nil and self.rootNodeName ~= nil then
    local start = sharedRegistrationBase:find("%.")
    local v5 = sharedRegistrationBase:sub(start)
  end
  if not sharedRegistrationName then
  end
  self.sharedRegistrationName = start
  self.sharedRegistrationBase = sharedRegistrationBase or ""
  self:updateSubSchemas(self.setXMLSharedRegistration, sharedRegistrationName, sharedRegistrationBase)
end
function XMLSchema:addDelayedRegistrationPath(basePath, name)
  table.insert(self.delayedRegistrationPaths, {basePath = basePath, name = name, sharedName = self.sharedRegistrationName, sharedBase = self.sharedRegistrationBase})
  for v6, v7 in ipairs(self.delayedRegistrationFuncs) do
    if not (v7.name == name) then
      continue
    end
    v7.func(self, basePath)
  end
  self:updateSubSchemas(self.addDelayedRegistrationPath, basePath, name)
end
function XMLSchema:addDelayedRegistrationFunc(name, func, isSub)
  for v7, v8 in ipairs(self.delayedRegistrationPaths) do
    if not (v8.name == name) then
      continue
    end
    self:setXMLSharedRegistration(v8.sharedName, v8.sharedBase)
    func(self, v8.basePath)
    self:setXMLSharedRegistration(self.sharedRegistrationName, self.sharedRegistrationBase)
  end
  if not isSub then
    table.insert(self.delayedRegistrationFuncs, {name = name, func = func})
  end
  self:updateSubSchemas(self.addDelayedRegistrationFunc, name, func)
  -- TODO: structure LOP_FORNPREP (pc 58, target 69)
  self.delayedRegistrationSharedSchemas[1]:addDelayedRegistrationFunc(name, func, true)
  -- TODO: structure LOP_FORNLOOP (pc 68, target 59)
end
function XMLSchema:shareDelayedRegistrationFuncs(parentSchema)
  self.delayedRegistrationFuncs = parentSchema.delayedRegistrationFuncs
  table.insert(parentSchema.delayedRegistrationSharedSchemas, self)
  self:updateSubSchemas(self.shareDelayedRegistrationFuncs, parentSchema)
end
function XMLSchema:addSubSchema(xmlSchema, identifier)
  if xmlSchema ~= nil and identifier ~= nil then
    table.insert(self.subSchemas, {identifier = identifier, xmlSchema = xmlSchema})
    self.hasSubSchemas = true
  end
end
function XMLSchema:setSubSchemaIdentifier(identifier)
  self.subSchemaIdentifier = identifier
end
function XMLSchema:updateSubSchemas(func, ...)
  if self.hasSubSchemas then
    -- TODO: structure LOP_FORNPREP (pc 9, target 25)
    if self.subSchemas[1].identifier == self.subSchemaIdentifier then
      func(...)
    end
    -- TODO: structure LOP_FORNLOOP (pc 24, target 10)
  end
end
function XMLSchema:registerInheritancePaths(rootName)
  self:register(XMLValueType.STRING, rootName .. ".parentFile#xmlFilename", "Remove vehicle if unit empty")
  self:register(XMLValueType.STRING, rootName .. ".parentFile.attributes.remove(?)#path", "Path to remove from parent xml")
  self:register(XMLValueType.STRING, rootName .. ".parentFile.attributes.set(?)#path", "Path change in parent xml")
  self:register(XMLValueType.STRING, rootName .. ".parentFile.attributes.set(?)#value", "Target value to set in parent file")
  self:register(XMLValueType.STRING, rootName .. ".parentFile.attributes.clearList(?)#path", "List to clear but keep one item")
  self:register(XMLValueType.INT, rootName .. ".parentFile.attributes.clearList(?)#keepIndex", "Index of list to keep")
end
function XMLSchema:generateSchema()
  local v2 = string.format("Generating Schema for '%s'. Num. paths: %d", self.name, #self.orderedPaths)
  log(...)
  table.sort(self.orderedPaths, function(self, v1)
    local v3 = v3:lower()
    local v4 = v4:lower()
    if v3 >= v4 then
    end
    return true
  end)
  for v5, v6 in ipairs(self.orderedPaths) do
    local v9 = v6.path:split(".")
    local v11 = v11:find("#")
    if v11 ~= nil then
      v11 = v11:split("#")
      if #v11 == 2 then
        v9[#v9] = v11[1]
        table.insert(v9, v11[2])
      end
    end
    -- TODO: structure LOP_FORNPREP (pc 69, target 212)
    local v15 = v9[1]:gsub("%(%?%)", "")
    if not v10 and 1 >= #v9 then
    end
    if v14 ~= v15 then
    end
    for v23, v24 in ipairs(v8) do
      if not (v24.tag == v15) then
        continue
      end
      if not v24.allowSubElements then
        continue
      end
      break
    end
    if not v18 then
      if v6.sharedName ~= XMLSchema.XML_SHARED_NONE then
        v21 = v21:split(".")
        -- TODO: structure LOP_FORNPREP (pc 124, target 139)
        local v25 = v25:gsub("%(%?%)", "")
        if v25 == v15 then
        else
          -- TODO: structure LOP_FORNLOOP (pc 138, target 125)
        end
      end
      table.insert(v8, {tag = v15, children = {}, allowSubElements = v16, hasMultipleElements = v17, sharedName = v20})
    elseif v6.sharedName ~= XMLSchema.XML_SHARED_NONE and v19.sharedName == XMLSchema.XML_SHARED_NONE then
      v21 = v21:split(".")
      -- TODO: structure LOP_FORNPREP (pc 187, target 199)
      v25 = v25:gsub("%(%?%)", "")
      if v25 == v15 then
      else
        -- TODO: structure LOP_FORNLOOP (pc 198, target 188)
      end
      if v20 then
        v19.sharedName = v6.sharedName
      end
    end
    if v13 == #v9 then
      v19.data = v6
    end
    -- TODO: structure LOP_FORNLOOP (pc 211, target 70)
  end
  table.insert({}, (nil or "") .. "<?xml version=\"1.0\" encoding=\"UTF-8\" ?>")
  table.insert({}, (nil or "") .. "<xs:schema xmlns:xs=\"http://www.w3.org/2001/XMLSchema\">")
  table.insert({}, (nil or "") .. "</xs:schema>")
  for v12, v13 in ipairs(XMLValueType.BASE_TYPES) do
    local v14, v15 = v8(v5, v6, v13.name, v13.description, true, nil, nil, v13.content)
  end
  for v12, v13 in ipairs(XMLValueType.TYPES) do
    v14, v15 = v8(v5, v6, v13.name, v13.description, false, v13.xsdBase, v13.xsdPattern)
  end
  self.checkForSharedNames = function(self, v1)
    if self.sharedName == XMLSchema.XML_SHARED_NONE then
      -- if not v1 then goto L56 end
    end
    if 0 < #self.children then
      for v5, v6 in ipairs(self.children) do
        if v6.sharedName ~= XMLSchema.XML_SHARED_NONE then
          local v7 = u0.checkForSharedNames(v6, true)
          -- if v7 then goto L38 end
        end
        return false
        if not (v6.data ~= nil) then
          continue
        end
        if not (v6.data.sharedName == XMLSchema.XML_SHARED_NONE) then
          continue
        end
        return false
      end
    end
    return true
  end
  self.addElement = function(self, v1, v2, v3, v4, v5, v6, v7)
    if not v5 then
      if v3.sharedName ~= XMLSchema.XML_SHARED_NONE and not v7 then
        local v9 = u0.checkForSharedNames(v3)
        if v9 then
        else
        end
      end
      if not v8 then
        if 0 < #v3.children then
          if v3.hasMultipleElements then
          end
          if v4 then
          end
          local v12 = string.format("<xs:element name=\"%s\"%s%s>", v2, v9, v10)
          if self ~= nil then
            table.insert(u1, self, (v1 or "") .. v12)
            u2 = self
          else
            table.insert(u1, (v1 or "") .. v12)
            u2 = #u1
          end
          -- goto L262  (LOP_JUMP +188)
        end
        if XMLValueType.TYPES[v3.data.valueTypeId] == nil then
          log(v3.data.valueTypeId)
        end
        local v13 = v9.name:lower()
        if v3.data.isRequired then
        end
        v13 = string.format("<xs:element name=\"%s\" type=\"%s\" %s>", v2, v10, v11)
        if self ~= nil then
          table.insert(u1, self, (v1 or "") .. v13)
          u2 = self
        else
          table.insert(u1, (v1 or "") .. v13)
          u2 = #u1
        end
        local v15 = u3(v3.data)
        v13 = string.format("<xs:annotation><xs:documentation xml:lang=\"en\">%s</xs:documentation></xs:annotation>", v15)
        if u2 + 1 ~= nil then
          table.insert(u1, u2 + 1, (v1 .. "    " or "") .. v13)
          u2 = u2 + 1
        else
          table.insert(u1, (v1 .. "    " or "") .. v13)
          u2 = #u1
        end
        v13 = string.format("</xs:element>")
        if u2 + 1 ~= nil then
          table.insert(u1, u2 + 1, (v1 or "") .. v13)
          u2 = u2 + 1
        else
          table.insert(u1, (v1 or "") .. v13)
          u2 = #u1
        end
      else
        if v3.hasMultipleElements then
        end
        local v11 = string.format("<xs:element name=\"%s\" type=\"%s\" minOccurs=\"0\"%s/>", v2, v3.sharedName, v9)
        if self ~= nil then
          table.insert(u1, self, (v1 or "") .. v11)
          u2 = self
        else
          table.insert(u1, (v1 or "") .. v11)
          u2 = #u1
        end
        return u2 + 1
      end
    end
    if 0 < #v3.children then
      v9 = string.format("<xs:complexType%s>", v6 or "")
      if self ~= nil then
        table.insert(u1, self, (v1 .. "    " or "") .. v9)
        u2 = self
      else
        table.insert(u1, (v1 .. "    " or "") .. v9)
        u2 = #u1
      end
    end
    for v12, v13 in ipairs(v3.children) do
      if v13.data ~= nil then
        local v14 = v14:find("#")
        if not (v14 == nil) then
          continue
        end
      end
    end
    if v8 then
      for v14, v15 in ipairs(v3.children) do
        if not v15.hasMultipleElements then
          continue
        end
      end
      v12 = string.format("<%s%s>", v9, v10)
      if self ~= nil then
        table.insert(u1, self, (v1 .. "    " .. "    " or "") .. v12)
        u2 = self
      else
        table.insert(u1, (v1 .. "    " .. "    " or "") .. v12)
        u2 = #u1
      end
      for v14, v15 in ipairs(v3.children) do
        if v15.data == nil then
          local v16 = u0.addElement(self, v1 .. "    " .. "    " .. "    ", v15.tag, v15, nil, nil, nil, v7)
        else
          v16 = v16:find("#")
          if not (v16 == nil) then
            continue
          end
          local v20 = XMLValueType.TYPES[v15.data.valueTypeId].name:lower()
          if v15.data.isRequired then
          end
          if #v15.children == 0 then
            v20 = string.format("<xs:element name=\"%s\" type=\"%s\" minOccurs=\"%d\">", v15.tag, v17, v18)
            if self ~= nil then
              table.insert(u1, self, (v1 .. "    " .. "    " .. "    " or "") .. v20)
              u2 = self
            else
              table.insert(u1, (v1 .. "    " .. "    " .. "    " or "") .. v20)
              u2 = #u1
            end
            local v22 = u3(v15.data)
            v20 = string.format("<xs:annotation><xs:documentation xml:lang=\"en\">%s</xs:documentation></xs:annotation>", v22)
            if u2 + 1 ~= nil then
              table.insert(u1, u2 + 1, (v1 .. "    " .. "    " .. "    " .. "    " or "") .. v20)
              u2 = u2 + 1
            else
              table.insert(u1, (v1 .. "    " .. "    " .. "    " .. "    " or "") .. v20)
              u2 = #u1
            end
            v20 = string.format("</xs:element>")
            if u2 + 1 ~= nil then
              table.insert(u1, u2 + 1, (v1 .. "    " .. "    " .. "    " or "") .. v20)
              u2 = u2 + 1
            else
              table.insert(u1, (v1 .. "    " .. "    " .. "    " or "") .. v20)
              u2 = #u1
            end
          else
            local v21 = string.format("<xs:element name=\"%s\" minOccurs=\"%d\">", v15.tag, v18)
            if self ~= nil then
              table.insert(u1, self, (v1 .. "    " .. "    " .. "    " or "") .. v21)
              u2 = self
            else
              table.insert(u1, (v1 .. "    " .. "    " .. "    " or "") .. v21)
              u2 = #u1
            end
            if u2 + 1 ~= nil then
              table.insert(u1, u2 + 1, (v19 .. "    " or "") .. "<xs:complexType>")
              u2 = u2 + 1
            else
              table.insert(u1, (v19 .. "    " or "") .. "<xs:complexType>")
              u2 = #u1
            end
            if u2 + 1 ~= nil then
              table.insert(u1, u2 + 1, (v19 .. "    " .. "    " or "") .. "<xs:simpleContent>")
              u2 = u2 + 1
            else
              table.insert(u1, (v19 .. "    " .. "    " or "") .. "<xs:simpleContent>")
              u2 = #u1
            end
            v21 = string.format("<xs:extension base=\"%s\">", v17)
            if u2 + 1 ~= nil then
              table.insert(u1, u2 + 1, (v19 .. "    " .. "    " .. "    " or "") .. v21)
              u2 = u2 + 1
            else
              table.insert(u1, (v19 .. "    " .. "    " .. "    " or "") .. v21)
              u2 = #u1
            end
            for v23, v24 in ipairs(v15.children) do
              if not (v24.data ~= nil) then
                continue
              end
              local v25 = v25:find("#")
              if not (v25 ~= nil) then
                continue
              end
              v25 = u4(v24, self, v19 .. "    " .. "    " .. "    " .. "    ")
            end
            if self ~= nil then
              table.insert(u1, self, (v19 .. "    " .. "    " .. "    " or "") .. "</xs:extension>")
              u2 = self
            else
              table.insert(u1, (v19 .. "    " .. "    " .. "    " or "") .. "</xs:extension>")
              u2 = #u1
            end
            if u2 + 1 ~= nil then
              table.insert(u1, u2 + 1, (v19 .. "    " .. "    " or "") .. "</xs:simpleContent>")
              u2 = u2 + 1
            else
              table.insert(u1, (v19 .. "    " .. "    " or "") .. "</xs:simpleContent>")
              u2 = #u1
            end
            if u2 + 1 ~= nil then
              table.insert(u1, u2 + 1, (v19 .. "    " or "") .. "</xs:complexType>")
              u2 = u2 + 1
            else
              table.insert(u1, (v19 .. "    " or "") .. "</xs:complexType>")
              u2 = #u1
            end
            v21 = string.format("</xs:element>")
            if u2 + 1 ~= nil then
              table.insert(u1, u2 + 1, (v19 or "") .. v21)
              u2 = u2 + 1
            else
              table.insert(u1, (v19 or "") .. v21)
              u2 = #u1
            end
          end
        end
      end
      v12 = string.format("</%s>", v9)
      if self ~= nil then
        table.insert(u1, self, (v1 .. "    " .. "    " or "") .. v12)
        u2 = self
      else
        table.insert(u1, (v1 .. "    " .. "    " or "") .. v12)
        u2 = #u1
      end
    end
    for v12, v13 in ipairs(v3.children) do
      if not (v13.data ~= nil) then
        continue
      end
      v14 = v14:find("#")
      if not (v14 ~= nil) then
        continue
      end
      v14 = u4(v13, self, v1 .. "    " .. "    ")
    end
    if 0 < #v3.children then
      v10 = string.format("</xs:complexType>", v2)
      if self ~= nil then
        table.insert(u1, self, (v1 .. "    " or "") .. v10)
        u2 = self
      else
        table.insert(u1, (v1 .. "    " or "") .. v10)
        u2 = #u1
      end
    end
    if 0 < #v3.children and not v5 then
      if self ~= nil then
        table.insert(u1, self, (v1 or "") .. "</xs:element>")
        u2 = self
      else
        table.insert(u1, (v1 or "") .. "</xs:element>")
        u2 = #u1
      end
    end
    return self
  end
  self.addSharedElement = function(self, v1, v2)
    if v2.sharedName ~= XMLSchema.XML_SHARED_NONE and u0[v2.sharedName] == nil then
      local v3 = u1.checkForSharedNames(v2)
      if v3 then
        local v10 = string.format(" name=\"%s\"", v2.sharedName)
        v3 = u1.addElement(self, "", v1, v2, false, true, v10, true)
        if v3 ~= nil then
          table.insert(u2, v3, ("" or "") .. "")
          u3 = v3
        else
          table.insert(u2, ("" or "") .. "")
          u3 = #u2
        end
        u0[v2.sharedName] = true
      else
        return self
      end
    end
    for v6, v7 in ipairs(v2.children) do
      local v8 = u1.addSharedElement(self, v7.tag, v7)
    end
    return self
  end
  for v15, v16 in ipairs(v1.children) do
    local v17 = self.addSharedElement(v5, v16.tag, v16)
  end
  for v15, v16 in ipairs(v1.children) do
    v17 = self.addElement(v5, v6, v16.tag, v16, true)
  end
  v12 = string.format("shared/xml/schema/%s.xsd", self.name)
  v13 = io.open(v12, "w")
  for v17, v18 in pairs(v3) do
    v13:write(v18 .. "\n")
  end
  v13:close()
  log("Saved XML Schema to: ", v12)
end
function XMLSchema:generateHTML()
  local v2 = string.format("Generating HTML for '%s'. Num. paths: %d", self.name, #self.orderedPaths)
  log(...)
  for v5, v6 in ipairs(self.orderedPaths) do
    local v9 = v6.path:split(".")
    local v11 = v11:find("#")
    if v11 ~= nil then
      v11 = v11:split("#")
      if #v11 == 2 then
        v9[#v9] = v11[1]
        table.insert(v9, v11[2])
      end
    end
    -- TODO: structure LOP_FORNPREP (pc 63, target 128)
    local v15 = v9[1]:gsub("%(%?%)", "")
    if not v10 and 1 >= #v9 then
    end
    if v14 ~= v15 then
    end
    for v23, v24 in ipairs(v8) do
      if not (v24.tag == v15) then
        continue
      end
      if not v24.allowSubElements then
        continue
      end
      break
    end
    if not v18 then
      table.insert(v8, {tag = v15, children = {}, allowSubElements = v16, hasMultipleElements = v17})
    end
    if v13 == #v9 then
      v19.data = v6
    end
    -- TODO: structure LOP_FORNLOOP (pc 127, target 64)
  end
  local v7 = v7:len()
  if 0 < v7 then
    local v8 = string.format("<span style=\"margin-left:%dem\">", v7 * 2)
  end
  table.insert(v3, v5 .. "<!DOCTYPE html>" .. v6)
  v7 = v7:len()
  if 0 < v7 then
    v8 = string.format("<span style=\"margin-left:%dem\">", v7 * 2)
  end
  table.insert(v3, v5 .. "<head>" .. v6)
  v6 = string.format("  <title>XML Doc: %s</title>", self.name)
  v4(...)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "<style>" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "body {" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  font-family: \"Courier New\";" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  overflow-x: scroll;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "}" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. ".idTag {" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  color: rgb(0, 0, 255);" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "}" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. ".idAttr {" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  color: rgb(255, 0, 0);" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "}" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. ".idAttrVal {" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  color: rgb(0, 0, 0);" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "}" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. ".idVal {" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  color: rgb(128, 0, 255);" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "}" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. ".attr {" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  position: relative;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  display: inline-block;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  font-weight: normal;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "}" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. ".attr .attrInfo {" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  visibility: hidden;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  width: 350px;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  top: 100%;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  left: 50%;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  margin-left: -175px;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  background-color: white;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  text-align: left;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  padding: 5px 0;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  border-radius: 6px;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  border-style: solid;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  border-color: black;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  color: black;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  position: absolute;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  z-index: 1;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "}" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. ".attr:hover .attrInfo {" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  visibility: visible;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "}" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. ".attr:hover{" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "  font-weight: bold;" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "}" .. v7)
  v8 = v8:len()
  if 0 < v8 then
    v9 = string.format("<span style=\"margin-left:%dem\">", v8 * 2)
  end
  table.insert(v3, v6 .. "</style>" .. v7)
  v9 = v9:len()
  if 0 < v9 then
    local v10 = string.format("<span style=\"margin-left:%dem\">", v9 * 2)
  end
  table.insert(v3, v7 .. "</head>" .. v8)
  self.addElement = function(self, v1, v2, v3, v4)
    local v5 = v1:len()
    if v5 == 1 then
      v5 = u0("", self, v1, true)
    end
    for v9, v10 in ipairs(v3.children) do
      if v10.data == nil then
        break
      else
        local v11 = v11:find("#")
        if not (v11 == nil) then
          continue
        end
        break
      end
    end
    for v10, v11 in ipairs(v3.children) do
      local v13 = u1(v11)
    end
    if v5 then
      v10 = u2("&lt;" .. v2, 1)
      v11 = u2(v6, 2)
      local v12 = u2("/&gt;", 1)
      v8 = string.format("%s%s%s", v10, v11, v12)
      v7 = u0(v8, self, v1, true)
    else
      v10 = u2("&lt;" .. v2, 1)
      v11 = u2(v6, 2)
      v12 = u2("&gt;", 1)
      v8 = string.format("%s%s%s", v10, v11, v12)
      v7 = u0(v8, self, v1, true)
    end
    for v10, v11 in ipairs(v3.children) do
      if v11.data == nil then
        v12 = u3.addElement(self, v1 .. " ", v11.tag, v11)
      else
        v12 = v12:find("#")
        if not (v12 == nil) then
          continue
        end
        v12 = v12:len()
        if v12 == 1 then
          v12 = u0("", self, v1, true)
        end
        for v16, v17 in ipairs(v11.children) do
          local v19 = u1(v17)
        end
        v13 = u1(v11, 3, "", true, true)
        v17 = u2("&lt;" .. v11.tag, 1)
        v19 = u2("&gt;", 1)
        local v21 = u2("&lt;/" .. v11.tag, 1)
        local v22 = u2("&gt;", 1)
        v15 = string.format("%s%s%s%s%s%s", v17, v12, v19, v13, v21, v22)
        v14 = u0(v15, self, v1 .. " ", true)
      end
    end
    if not v5 then
      v8 = u2("&lt;/" .. v2 .. "&gt;", 1)
      v7 = u0(v8, self, v1, true)
    end
    return self
  end
  for v12, v13 in ipairs(v1.children) do
    local v14 = self.addElement(v5, "", v13.tag, v13, true)
  end
  v9 = string.format("shared/xml/documentation/%s.html", self.name)
  v10 = io.open(v9, "w")
  for v14, v15 in pairs(v3) do
    v10:write(v15 .. "\n")
  end
  v10:close()
  log("Saved XML HTML to: ", v9)
end
