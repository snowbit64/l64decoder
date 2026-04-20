-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

g_globalsNameCheckDisabled = false
setmetatable(_G, {__newindex = function(v0, v1, v2)
  if not g_globalsNameCheckDisabled then
    local v3 = type(v1)
    if v3 == "string" then
      v3 = type(v2)
      if v3 ~= "function" and u0[v1] == nil then
        local v4 = v1:sub(1, 1)
        v3 = string.byte(...)
        v4 = v1:sub(1, 2)
        if v4 ~= "g_" then
          if v3 >= 65 then
            -- if 90 >= v3 then goto L52 end
          end
          print("Warning: Global variable name does not match naming convention: " .. v1)
          printCallstack()
        end
      end
    end
  end
  rawset(v0, v1, v2)
end})
print("\n\n  ##################   Warning: Globals name check active!   ##################\n\n")
