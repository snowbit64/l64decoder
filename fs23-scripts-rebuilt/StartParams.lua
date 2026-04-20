-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StartParams = {}
function StartParams:init()
  local v1 = self:split(" ")
  for v6, v7 in pairs(v1) do
    local v8 = v7:startsWith("-")
    if v8 then
      v8 = string.sub(v7, 2)
      u0[v8] = ""
    else
      if u0[v2] == nil then
        u0[v2] = ""
      end
      if u0[v2] ~= "" then
        u0[v2] = u0[v2] .. " "
      end
      u0[v2] = u0[v2] .. v7
    end
  end
  StartParams.printAll()
end
function StartParams.getValue(name)
  return u0[name]
end
function StartParams.getIsSet(name)
  if u0[name] == nil then
  end
  return true
end
function StartParams.printAll()
  log("Used Start Parameters:")
  for v3, v4 in pairs(u0) do
    log("  ", v3, v4)
  end
end
