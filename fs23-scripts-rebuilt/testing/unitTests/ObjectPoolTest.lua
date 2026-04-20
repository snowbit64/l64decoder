-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ObjectPoolTest = {}
function ObjectPoolTest.test_constructor()
  Assert.throwsError(ObjectPool.new, "Calling constructor with no arguments threw no error.")
  Assert.throwsError(function()
    ObjectPool.new(100)
  end)
end
function ObjectPoolTest.test_length()
  local v0 = ObjectPool.new(function()
    return {}
  end)
  -- TODO: structure LOP_FORNPREP (pc 9, target 26)
  local v5 = v0:getOrCreateNext()
  Assert.isNotNil(v5, "Object created from pool was nil.")
  table.insert({}, v5)
  -- TODO: structure LOP_FORNLOOP (pc 25, target 10)
  -- TODO: structure LOP_FORNPREP (pc 29, target 46)
  v5 = table.remove({})
  v0:returnToPool(v5)
  local v7 = v0:getLength()
  Assert.areEqual(v7, 1)
  -- TODO: structure LOP_FORNLOOP (pc 45, target 30)
end
function ObjectPoolTest.test_duplicates()
  local v0 = ObjectPool.new(function()
    return {}
  end)
  local v1 = v0:getOrCreateNext()
  Assert.isNotNil(v1, "Object created from pool was nil.")
  local v2 = v0:returnToPool(v1)
  Assert.isTrue(v2, "Object could not be added to empty pool.")
  local v3 = v0:returnToPool(v1)
  Assert.isFalse(v3, "Duplicate object was accepted.")
  v3 = v0:getOrCreateNext()
  Assert.areEqual(v3, v1, "Got a different object out of pool than was put in")
  local v4 = v0:returnToPool(v3)
  Assert.isTrue(v4, "Object could not be re-added to pool.")
end
function ObjectPoolTest.test_addNil()
  local v0 = ObjectPool.new(function()
    return {}
  end)
  local v1 = v0:returnToPool(nil)
  Assert.isFalse(v1, "Object pool accepted nil value.")
end
