-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FieldGroundType = {NONE = 0, STUBBLE_TILLAGE = 1, CULTIVATED = 2, SEEDBED = 3, PLOWED = 4, ROLLED_SEEDBED = 5, SOWN = 6, DIRECT_SOWN = 7, PLANTED = 8, RIDGE = 9, ROLLER_LINES = 10, HARVEST_READY = 11, HARVEST_READY_OTHER = 12, GRASS = 13, GRASS_CUT = 14}
for v6, v7 in pairs(FieldGroundType) do
  v0[v6] = v7
  v1[v7] = v6
  table.insert(v2, v7)
end
table.sort(v2)
function FieldGroundType.getByName(name)
  local v1 = string.upper(name)
  v1 = ClassUtil.getIsValidIndexName(v1)
  if v1 then
    return FieldGroundType[v1]
  end
  return nil
end
function FieldGroundType.getName(id)
  return u0[id]
end
function FieldGroundType.getAll()
  return u0
end
function FieldGroundType.getAllOrdered()
  return u0
end
