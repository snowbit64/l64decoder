-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

XMLFile = {}
local XMLFile_mt = Class(XMLFile)
function XMLFile.load(objectName, filename, schema)
  local handle = loadXMLFile(objectName, filename)
  if handle == 0 then
    return nil
  end
  return XMLFile.new(objectName, filename, handle, schema)
end
function XMLFile.loadIfExists(objectName, filename, schema)
  if filename ~= nil then
    local v3 = fileExists(filename)
    -- if v3 then goto L9 end
  end
  return nil
  v3 = XMLFile.load(objectName, filename, schema)
  return v3
end
function XMLFile.create(objectName, filepath, rootNodeName, schema)
  local handle = createXMLFile(objectName, filepath, rootNodeName)
  if handle == 0 then
    return nil
  end
  return XMLFile.new(objectName, filepath, handle, schema)
end
function XMLFile.new(objectName, filename, handle, schema)
  local v4 = setmetatable({}, u0)
  v4.objectName = objectName
  v4.filename = filename
  v4.schema = schema
  v4.handle = handle
  v4:initInheritance()
  v5:addFile(v4)
  return v4
end
function XMLFile.wrap(handle, schema)
  local v4 = getXMLFilename(handle)
  local v2 = XMLFile.new("<unknown>", v4, handle, schema)
  v2.noDeletion = true
  return v2
end
function XMLFile:delete()
  if not self.noDeletion then
    delete(self.handle)
  end
  v1:removeFile(self)
end
function XMLFile:getHandle()
  return self.handle
end
function XMLFile:getFilename()
  return self.filename
end
function XMLFile:hasProperty(property)
  return hasXMLProperty(self.handle, property)
end
function XMLFile:save(printToLog, ignoreError)
  local v3 = saveXMLFile(self.handle)
  if v3 then
    if printToLog then
      Logging.info("Saved xml file '%s' to '%s'", self.objectName, self.filename)
    end
    return true
  end
  if not ignoreError then
    Logging.error("Could not save xml file '%s' to '%s'", self.objectName, self.filename)
  end
  return false
end
function XMLFile:saveTo(filepath, printToLog, ignoreError)
  local v4 = saveXMLFileTo(self.handle, filepath)
  if v4 then
    if printToLog then
      Logging.info("Saved xml file '%s' to '%s'", self.objectName, filepath)
    end
    return true
  end
  if not ignoreError then
    Logging.error("Could not save xml file '%s' to '%s'", self.objectName, filepath)
  end
  return false
end
function XMLFile:removeProperty(path)
  removeXMLProperty(self.handle, path)
end
function XMLFile:setString(path, value)
  setXMLString(self.handle, path, value)
end
function XMLFile:setFloat(path, value)
  setXMLFloat(self.handle, path, value)
end
function XMLFile:setInt(path, value)
  setXMLInt(self.handle, path, value)
end
function XMLFile:setBool(path, value)
  setXMLBool(self.handle, path, value)
end
function XMLFile:getString(path, default)
  local v = getXMLString(self.handle, path)
  if v == nil then
    return default
  end
  return v
end
function XMLFile:getFloat(path, default)
  local v = getXMLFloat(self.handle, path)
  if v == nil then
    return default
  end
  return v
end
function XMLFile:getInt(path, default)
  local v = getXMLInt(self.handle, path)
  if v == nil then
    return default
  end
  return v
end
function XMLFile:getBool(path, default)
  local v = getXMLBool(self.handle, path)
  if v == nil then
    return default
  end
  return v
end
function XMLFile:getRootName()
  return getXMLRootName(self.handle)
end
function XMLFile:getValue(path, default, ...)
  local valueType = XMLFile.getValueType(self, path)
  if valueType ~= nil then
    if valueType.isBasicFunction then
      local value = valueType.get(self.handle, path)
      if value == nil then
        return default
      end
      return value
    end
    value = valueType.get(...)
    return value
  end
end
function XMLFile:setValue(path, ...)
  local valueType = XMLFile.getValueType(self, path)
  if valueType ~= nil then
    valueType.set(...)
  end
end
function XMLFile:iterate(path, closure)
  while true do
    v6 = hasXMLProperty(self.handle, v3 .. v4 .. ")")
    if not v6 then
      break
    end
    v6 = closure(v4 + 1, v3 .. v4 .. ")")
    if not (v6 ~= false) then
      break
    end
  end
end
function XMLFile.setTable(v0, v1, v2, v3)
  for v9, v10 in pairs(v2) do
    local v12 = v3(v4 .. v5 .. ")", v10, v9)
    if not (v12 ~= false) then
      break
    end
    if not (v12 ~= 0) then
      continue
    end
  end
  return v5
end
function XMLFile.setSortedTable(v0, v1, v2, v3)
  for v9, v10 in ipairs(v2) do
    local v12 = v3(v4 .. v5 .. ")", v10, v9)
    if not (v12 ~= false) then
      break
    end
    if not (v12 ~= 0) then
      continue
    end
  end
  return v5
end
function XMLFile:getValueType(path)
  if self.schema == nil then
    Logging.xmlError(self, "Unable to get schema for xml file.")
    printCallstack()
    return
  end
  if path == nil then
    Logging.xmlError(self, "Unable to get value from unknown path.")
    printCallstack()
    return
  end
  local normalizedPath = path:gsub("%(%d*%)", "(?)")
  if v2.paths[normalizedPath] == nil then
    local v5 = normalizedPath:gsub("%d+%.", "%?%.")
    v5 = v5:gsub("%d+#", "%?#")
    v5 = v5:gsub("%d+$", "%?")
  end
  if v4 == nil then
    Logging.xmlError(self, "Failed to validate xml path '%s' for '%s'. Path not registered.", path, v2.name)
    printCallstack()
    return
  end
  return XMLValueType.TYPES[v4.valueTypeId]
end
function XMLFile:setVector(path, vector)
  local v6 = table.concat(vector, " ")
  setXMLString(...)
end
function XMLFile:getVector(path, default, maxSize)
  local vector = getXMLString(self.handle, path)
  if vector == nil then
    return default
  end
  return string.getVectorN(vector, maxSize)
end
function XMLFile:getI18NValue(path, default, customEnvironment, showWarning)
  return XMLUtil.getXMLI18NValue(self.handle, path, getXMLString, nil, default, customEnvironment, showWarning)
end
function XMLFile:initInheritance()
  local rootName = self:getRootName()
  local parentFilename = self:getString(rootName .. ".parentFile#xmlFilename")
  if parentFilename ~= nil then
    local v3, v4 = Utils.getModNameAndBaseDirectory(self.filename)
    local v5 = Utils.getFilename(parentFilename, v4)
    v5 = loadXMLFile(self.objectName, v5)
    if v5 ~= 0 then
      self:iterate(rootName .. ".parentFile.attributes.remove", function(self, rootName)
        local parentFilename = parentFilename:getString(rootName .. "#path")
        removeXMLProperty(u1, parentFilename)
      end)
      self:iterate(rootName .. ".parentFile.attributes.set", function(self, rootName)
        local parentFilename = parentFilename:getString(rootName .. "#path")
        local v3 = v3:getString(rootName .. "#value")
        setXMLString(u1, parentFilename, v3)
      end)
      self:iterate(rootName .. ".parentFile.attributes.clearList", function(self, rootName)
        local parentFilename = parentFilename:getString(rootName .. "#path")
        local v3 = v3:getInt(rootName .. "#keepIndex")
        while true do
          v7 = string.format(parentFilename .. "(%d)", v4)
          v5 = hasXMLProperty(...)
          if not v5 then
            break
          end
          continue
          break
        end
        -- TODO: structure LOP_FORNPREP (pc 34, target 49)
        if v4 ~= v3 then
          local v10 = string.format(parentFilename .. "(%d)", v4 - 1)
          removeXMLProperty(...)
        end
        -- TODO: structure LOP_FORNLOOP (pc 48, target 35)
      end)
      delete(self.handle)
      self.handle = v5
      return
    end
    Logging.warning("Failed to load parent xml file '%s'", parentFilename)
  end
end
