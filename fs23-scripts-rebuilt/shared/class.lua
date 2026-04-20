-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

function Class(members, baseClass)
  if not self then
  end
  if baseClass ~= nil then
    setmetatable(v2, {__index = baseClass})
  end
  self.class = function(self)
    return u0
  end
  self.superClass = function(self)
    return u0
  end
  self.isa = function(self, baseClass)
    while u0 ~= nil do
      if v2 == baseClass then
        return true
      end
      local v3 = v2:superClass()
    end
    return false
  end
  self.new = self.new or function(self, baseClass)
    if not baseClass then
    end
    return v2(v3, u0)
  end
  self.copy = self.copy or function(self, ...)
    local v2 = unpack(arg)
    local baseClass = self.new(...)
    for v5, v6 in pairs(self) do
      baseClass[v5] = v6
    end
    return baseClass
  end
  return v3
end
