-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

g_currentTest = nil
function initTesting()
  local testName = StartParams.getValue("test")
  if testName ~= nil and u0[testName] ~= nil then
    source(u0[testName].filename)
    local v2 = ClassUtil.getClassObject(u0[testName].className)
    g_currentTest = v2
    if g_currentTest ~= nil then
      g_currentTest.init()
      Logging.info("Started test '%s'", testName)
      return true
    end
    Logging.error("Test '%s' not defined", testName)
  end
  return false
end
