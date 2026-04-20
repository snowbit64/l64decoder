-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ObjectPool = {}
local ObjectPool_mt = Class(ObjectPool)
function ObjectPool.new(objectConstructor, ...)
  local v1 = setmetatable({}, u0)
  v1.objectConstructor = objectConstructor
  local v2 = table.pack(...)
  v1.objectConstructorArguments = v2
  v1.pool = {}
  v1.poolSet = {}
  return v1
end
function ObjectPool:getLength()
  return #self.pool
end
function ObjectPool:clear()
  table.clear(self.poolSet)
  table.clear(self.pool)
end
function ObjectPool:getOrCreateNext()
  local instance = table.remove(self.pool)
  if not instance then
    local v3 = table.unpack(self.objectConstructorArguments, 1, self.objectConstructorArguments.n)
    return self.objectConstructor(...)
  end
  self.poolSet[instance] = nil
  return instance
end
function ObjectPool:returnToPool(instance)
  if instance == nil then
    return false
  end
  if self.poolSet[instance] then
    return false
  end
  if instance.reset ~= nil then
    instance:reset()
  end
  table.insert(self.pool, instance)
  self.poolSet[instance] = true
  return true
end
