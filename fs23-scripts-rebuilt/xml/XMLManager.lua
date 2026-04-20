-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

XMLManager = {}
local XMLManager_mt = Class(XMLManager)
function XMLManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.schemas = {}
  v1.files = {}
  v1.createSchemaFunctions = {}
  v1.initSchemaFunctions = {}
  return v1
end
function XMLManager:unloadMapData()
  self.schemas = {}
end
function XMLManager:addSchema(schema)
  table.insert(self.schemas, schema)
end
function XMLManager:addFile(file)
  self.files[file.handle] = file
end
function XMLManager:removeFile(file)
  self.files[file.handle] = nil
end
function XMLManager:getFileByHandle(handle)
  return self.files[handle]
end
function XMLManager:addCreateSchemaFunction(func)
  table.insert(self.createSchemaFunctions, func)
end
function XMLManager:createSchemas()
  for v4, v5 in ipairs(self.createSchemaFunctions) do
    v6:addSubtask(function()
      u0()
    end)
  end
end
function XMLManager:addInitSchemaFunction(func)
  table.insert(self.initSchemaFunctions, func)
end
function XMLManager:initSchemas()
  for v4, v5 in ipairs(self.initSchemaFunctions) do
    v6:addSubtask(function()
      u0()
    end)
  end
end
function XMLManager.consoleCommandGenerateSchemas()
  if g_xmlManager ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 11, target 24)
    g_xmlManager.schemas[1]:generateSchema()
    g_xmlManager.schemas[1]:generateHTML()
    -- TODO: structure LOP_FORNLOOP (pc 23, target 12)
  end
end
addConsoleCommand("gsXMLGenerateSchemas", "Generates xml schemas", "XMLManager.consoleCommandGenerateSchemas", nil)
local v1 = XMLManager.new()
g_xmlManager = v1
