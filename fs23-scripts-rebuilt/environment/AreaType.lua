-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AreaType = {OPEN_FIELD = 1, CITY = 2, HALL = 3, FOREST = 4, WATER = 5}
for v6, v7 in pairs(AreaType) do
  v0[v6] = v7
  v2[v7] = v6
  table.insert(v1, v7)
end
table.sort(v1)
function AreaType.getByName(name)
  local v1 = string.upper(name)
  v1 = ClassUtil.getIsValidIndexName(v1)
  if v1 then
    return AreaType[v1]
  end
  return nil
end
function AreaType.getName(id)
  return u0[id]
end
function AreaType.getAll()
  return u0
end
function AreaType.getAllOrdered()
  return u0
end
