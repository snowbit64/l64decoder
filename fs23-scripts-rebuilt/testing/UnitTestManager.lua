-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UnitTestManager = {UNIT_TESTS_DIRECTORY = "dataS/scripts/testing/unitTests/", TEST_FUNCTION_PREFIX = "test_"}
function UnitTestManager.testAll()
  log("\n Beginning unit tests:")
  local v3 = Files.new(UnitTestManager.UNIT_TESTS_DIRECTORY)
  for v7, v8 in pairs(v3.files) do
    if not not v8.isDirectory then
      continue
    end
    local v9, v10 = Utils.getFilenameInfo(v8.filename)
    if v10 ~= "lua" then
      local v12 = string.format("Cannot test non-lua file: %s", v8.filename)
      Logging.warning(...)
    else
      source(UnitTestManager.UNIT_TESTS_DIRECTORY .. v8.filename)
      v12 = string.sub(v9, 1, #v9 - 4)
      local v13 = UnitTestManager.testClass(v12, _G[v9])
      if v13 then
      else
      end
    end
  end
  if v2 > 0 then
  end
  if true then
    -- if UnitTestManager.logTotalSuccess then goto L90 end
  end
  UnitTestManager.logTotalFailure(v0, v1, v2)
end
function UnitTestManager.testClass(className, class)
  local v3 = string.format("  Testing %s class: ", className)
  log(...)
  for v8, v9 in pairs(class) do
    local v10 = type(v9)
    if not (v10 == "function") then
      continue
    end
    v10 = string.startsWith(v8, UnitTestManager.TEST_FUNCTION_PREFIX)
    if not v10 then
      continue
    end
    v10 = string.sub(v8, #UnitTestManager.TEST_FUNCTION_PREFIX + 1)
    local v11 = xpcall(v9, function(className)
      UnitTestManager.logFunctionFailure(u0, className)
    end)
    if v11 then
      UnitTestManager.logFunctionSuccess(v10)
    else
    end
  end
  if v4 > 0 then
  end
  if true then
    -- if UnitTestManager.logClassSuccess then goto L78 end
  end
  UnitTestManager.logClassFailure(v2, className, v3, v4)
  return v5
end
function UnitTestManager.logTotalSuccess(totalRunClassesCount, passedClassesCount, failedClassesCount)
  local v4 = string.format("✔ Finished %d class tests. (%d passed, %d failed)\n", totalRunClassesCount, passedClassesCount, failedClassesCount)
  log(...)
end
function UnitTestManager.logTotalFailure(totalRunClassesCount, passedClassesCount, failedClassesCount)
  local v4 = string.format("❌ Finished %d class tests. (%d passed, %d failed)\n", totalRunClassesCount, passedClassesCount, failedClassesCount)
  log(...)
end
function UnitTestManager.logClassSuccess(totalRunFunctionsCount, className, passedFunctionsCount, failedFunctionsCount)
  local v5 = string.format("  ✔ Finished %d tests for %s class. (%d passed, %d failed)", totalRunFunctionsCount, className, passedFunctionsCount, failedFunctionsCount)
  log(...)
end
function UnitTestManager.logClassFailure(totalRunFunctionsCount, className, passedFunctionsCount, failedFunctionsCount)
  local v5 = string.format("  ❌ Finished %d tests for %s class. (%d passed, %d failed)", totalRunFunctionsCount, className, passedFunctionsCount, failedFunctionsCount)
  log(...)
end
function UnitTestManager.logFunctionSuccess(functionName)
  local v2 = string.format("     ✔ %s passed", functionName)
  log(...)
end
function UnitTestManager.logFunctionFailure(functionName, message)
  local v3 = string.format("     ❌ %s failed: ", functionName)
  log(...)
  log("       " .. message)
  printCallstack()
end
