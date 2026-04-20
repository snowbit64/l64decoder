-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Assert = {}
function Assert.areEqual(v0, v1, v2)
  if v1 ~= v0 then
  end
  local v8 = tostring(v1)
  local v9 = tostring(v0)
  local v5 = string.format(...)
  assert(...)
end
function Assert.areNotEqual(v0, v1, v2)
  if v1 == v0 then
  end
  local v8 = tostring(v1)
  local v9 = tostring(v0)
  local v5 = string.format(...)
  assert(...)
end
function Assert.areRoughlyEqual(v0, v1, v2, v3)
  local v6 = math.abs(v0 - v1)
  if v6 > (v3 or 0.001) then
  end
  local v9 = tostring(v1)
  local v10 = tostring(v0)
  v6 = string.format(...)
  assert(...)
end
function Assert.isBetween(actual, lowerLimit, upperLimit, message, lowerInclusive, upperInclusive)
  if lowerInclusive == nil then
  end
  if upperInclusive == nil then
  end
  if lowerInclusive then
    Assert.greaterThanOrEqualTo(actual, lowerLimit, message)
  else
    Assert.greaterThan(actual, lowerLimit, message)
  end
  if upperInclusive then
    Assert.lessThanOrEqualTo(actual, lowerLimit, message)
    return
  end
  Assert.lessThan(actual, lowerLimit, message)
end
function Assert.greaterThan(actual, lowerLimit, message)
  if lowerLimit >= actual then
  end
  local v8 = tostring(lowerLimit)
  local v9 = tostring(actual)
  local v5 = string.format(...)
  assert(...)
end
function Assert.greaterThanOrEqualTo(actual, lowerLimit, message)
  if lowerLimit > actual then
  end
  local v8 = tostring(lowerLimit)
  local v9 = tostring(actual)
  local v5 = string.format(...)
  assert(...)
end
function Assert.lessThan(actual, upperLimit, message)
  if actual >= upperLimit then
  end
  local v8 = tostring(upperLimit)
  local v9 = tostring(actual)
  local v5 = string.format(...)
  assert(...)
end
function Assert.lessThanOrEqualTo(actual, upperLimit, message)
  if actual > upperLimit then
  end
  local v8 = tostring(upperLimit)
  local v9 = tostring(actual)
  local v5 = string.format(...)
  assert(...)
end
function Assert.isType(object, expectedType, message)
  local v5 = type(object)
  if v5 ~= expectedType then
  end
  if object then
    local v9 = type(object)
    -- if v9 then goto L22 end
  end
  v5 = v5(v6, v7, v8, "nil")
  assert(...)
end
function Assert.isNotNil(actual, message)
  if actual == nil then
  end
  local v4 = string.format("%s value was nil", message)
  assert(...)
end
function Assert.isTrue(actual, message)
  if actual ~= true then
  end
  assert(true, message)
end
function Assert.isFalse(actual, message)
  if actual ~= false then
  end
  assert(true, message)
end
function Assert.throwsError(testFunction, message)
  local status = pcall(testFunction)
  assert(not status, message or "function threw no error")
end
function Assert.fail(message)
  assert(false, message)
end
