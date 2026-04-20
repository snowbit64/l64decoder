-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimatedMapObject = {}
local AnimatedMapObject_mt = Class(AnimatedMapObject, AnimatedObject)
InitStaticObjectClass(AnimatedMapObject, "AnimatedMapObject", ObjectIds.OBJECT_ANIMATED_MAP_OBJECT)
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("animatedObjects")
  AnimatedMapObject.xmlSchema = v1
end)
v1:addInitSchemaFunction(function()
  AnimatedObject.registerXMLPaths(AnimatedMapObject.xmlSchema, "animatedObjects")
  AnimatedObject.registerSavegameXMLPaths(OnCreateObjectSystem.xmlSchemaSavegame, "onCreateLoadedObjects.object(?)")
end)
function AnimatedMapObject.onCreate(v0, v1)
  if g_server == nil then
  end
  if g_client == nil then
  end
  local v2 = v2(v3, true)
  local v3 = v2:load(v1)
  if v3 then
    v3:add(v2, true)
    v2:register(true)
    return
  end
  v2:delete()
end
function AnimatedMapObject.new(isServer, isClient, customMt)
  if not customMt then
  end
  return v3(v4, v5, v6)
end
function AnimatedMapObject.delete(v0)
  v1:remove(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function AnimatedMapObject:load(nodeId)
  local v2 = getUserAttribute(nodeId, "xmlFilename")
  if v2 == nil then
    local v5 = getName(nodeId)
    Logging.error(...)
    return false
  end
  if g_currentMission.loadingMapBaseDirectory == "" then
    local v4 = Utils.getNoNil(self.baseDirectory, g_currentMission.loadingMapBaseDirectory)
  end
  v4 = Utils.getFilename(v2, v3)
  v4 = getUserAttribute(nodeId, "index")
  if v4 == nil then
    local v7 = getName(nodeId)
    Logging.error(...)
    return false
  end
  v5 = XMLFile.load("AnimatedObject", v2, AnimatedMapObject.xmlSchema)
  if v5 == nil then
    return false
  end
  v5:iterate("animatedObjects.animatedObject", function(self, nodeId)
    local v2 = v2:getString(nodeId .. "#index")
    if v2 == u1 then
      u2 = nodeId
      return true
    end
  end)
  if nil == nil then
    Logging.error("index '%s' not found in AnimatedObject xml '%s'!", v4, v2)
    return false
  end
  local v8 = v8:superClass()
  v7 = v8.load(self, nodeId, v5, v6, v2)
  v5:delete()
  return v7
end
