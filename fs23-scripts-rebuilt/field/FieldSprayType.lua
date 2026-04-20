-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FieldSprayType = {NONE = 0, FERTILIZER = 1, LIME = 2, MANURE = 3, LIQUID_MANURE = 4}
for v6, v7 in pairs(FieldSprayType) do
  v0[v6] = v7
  v2[v7] = v6
  table.insert(v1, v7)
end
table.sort(v1)
function FieldSprayType.getByName(name)
  local v1 = string.upper(name)
  v1 = ClassUtil.getIsValidIndexName(v1)
  if v1 then
    return FieldSprayType[v1]
  end
  return nil
end
function FieldSprayType.getName(id)
  return u0[id]
end
function FieldSprayType.getAll()
  return u0
end
function FieldSprayType.getAllOrdered()
  return u0
end
