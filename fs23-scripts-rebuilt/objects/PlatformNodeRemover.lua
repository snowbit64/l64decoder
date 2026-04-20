-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlatformNodeRemover = {NODES = {}, ATTRIBUTES = {}}
for v3, v4 in pairs(PlatformId) do
  local v6 = string.upper("removeOn" .. v3)
  PlatformNodeRemover.ATTRIBUTES[v4] = v6
end
function PlatformNodeRemover.onCreate(v0, v1)
  local v4 = getPlatformId()
  local v3 = getNumOfUserAttributes(v1)
  -- TODO: structure LOP_FORNPREP (pc 15, target 46)
  local v7, v8 = getUserAttributeByIndex(v1, 0)
  local v9 = string.upper(v8)
  if v9 == PlatformNodeRemover.ATTRIBUTES[v4] then
    local v10 = type(v7)
    if v10 == "boolean" and v7 then
      table.insert(PlatformNodeRemover.NODES, v1)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 45, target 16)
  v4 = getUserAttribute(v1, "netflixExclusive")
  if v4 == true and not Platform.isNetflix then
    table.insert(PlatformNodeRemover.NODES, v1)
  end
end
function PlatformNodeRemover.reset()
  PlatformNodeRemover.NODES = {}
end
function PlatformNodeRemover.removeNodes()
  for v3, v4 in ipairs(PlatformNodeRemover.NODES) do
    local v7 = getName(v4)
    Logging.devInfo(...)
    delete(v4)
  end
  PlatformNodeRemover.reset()
end
