-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TypeManager.finalizeTypes = function(self, ...)
  if self.typeName == "vehicle" and g_modIsLoaded[u0] then
    local v2 = self:getTypes()
    for v4, v5 in pairs(...) do
      for v9, v10 in pairs(u1) do
        if not (v5.specializationsByName[v10] == nil) then
          continue
        end
        self:addSpecialization(v4, v10)
      end
      for v9, v10 in pairs(v5.specializationsByName) do
        for v14, v15 in pairs(u2) do
          if not (v9 == v14) then
            continue
          end
          -- TODO: structure LOP_FORNPREP (pc 50, target 63)
          if v5.specializationsByName[v15[1]] == nil then
            self:addSpecialization(v4, v15[1])
          end
          -- TODO: structure LOP_FORNLOOP (pc 62, target 51)
        end
      end
      for v9, v10 in pairs(u3) do
        if not (v4 == v9) then
          continue
        end
        -- TODO: structure LOP_FORNPREP (pc 77, target 90)
        if v5.specializationsByName[v10[1]] == nil then
          self:addSpecialization(v4, v10[1])
        end
        -- TODO: structure LOP_FORNLOOP (pc 89, target 78)
      end
    end
  end
  u4(...)
end
