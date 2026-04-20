-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Placeholders = {}
local Placeholders_mt = Class(Placeholders)
function Placeholders.onCreate(v0, v1)
  local v3 = Placeholders.new(v1)
  g_currentMission.placeholdersObject = v3
  v2:addNonUpdateable(g_currentMission.placeholdersObject)
end
function Placeholders.new(id)
  setmetatable({}, u0)
  local v5 = getNumOfChildren(id)
  -- TODO: structure LOP_FORNPREP (pc 14, target 24)
  local v6 = getChildAt(id, v5 - 1)
  delete(...)
  -- TODO: structure LOP_FORNLOOP (pc 23, target 15)
  return {}
end
function Placeholders.delete(v0)
end
