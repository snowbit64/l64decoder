-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CollectibleTarget = {}
local CollectibleTarget_mt = Class(CollectibleTarget)
function CollectibleTarget.onCreate(v0, v1)
  local v4 = CollectibleTarget.new(v1)
  v2:addNonUpdateable(...)
end
function CollectibleTarget.new(node)
  local v1 = setmetatable({}, u0)
  v1.node = node
  v2:addCollectibleTarget(v1)
  return v1
end
function CollectibleTarget.delete(v0)
  v1:removeCollectibleTarget(v0)
end
function CollectibleTarget:setState(itemName, visible)
  local v3 = getChild(self.node, itemName)
  if v3 ~= nil then
    setVisibility(v3, visible)
  end
end
