-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCupUtil = {}
function SuperCupUtil.addToListIfNotExists(v0, v1)
  if v0 == nil then
    return
  end
  local v2 = table.hasElement(v1, v0)
  if not v2 then
    table.addElement(v1, v0)
  end
end
function SuperCupUtil.getClassObject(v0)
  local v1 = string.split(v0, ".")
  local v2 = table.getn(v1)
  local v4 = type(_G[v1[1]])
  if v4 ~= "table" then
    return nil
  end
  -- TODO: structure LOP_FORNPREP (pc 25, target 38)
  local v7 = type(v3[v1[2]])
  if v7 ~= "table" then
    return nil
  end
  -- TODO: structure LOP_FORNLOOP (pc 37, target 26)
  return v3
end
function SuperCupUtil.millisecondsToClockString(v0)
  local v1 = tonumber(v0)
  if v1 <= 0 then
    return "--:--:--"
  end
  return v5:format(v0 * 0.001 / 60 % 60, v0 * 0.001 % 60, v0 % 1000)
end
