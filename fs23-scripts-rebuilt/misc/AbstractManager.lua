-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AbstractManager = {}
local AbstractManager_mt = Class(AbstractManager)
function AbstractManager.new(customMt)
  if customMt ~= nil then
    local v1 = type(customMt)
    if v1 ~= "table" then
      printCallstack()
    end
  end
  if not customMt then
  end
  v1 = v1(v2, v3)
  v1:initDataStructures()
  v1.loadedMapData = false
  return v1
end
function AbstractManager.initDataStructures(v0)
end
function AbstractManager.load(v0)
  return true
end
function AbstractManager:loadMapData()
  if g_isDevelopmentVersion and self.loadedMapData then
    Logging.error("Manager map-data already loaded or not deleted after last game load!")
    printCallstack()
  end
  self.loadedMapData = true
  return true
end
function AbstractManager:unloadMapData()
  self.loadedMapData = false
  self:initDataStructures()
end
