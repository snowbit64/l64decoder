-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DisplayActionBinding = {}
local DisplayActionBinding_mt = Class(DisplayActionBinding)
function DisplayActionBinding.new(action, displayName, isPositive, bindings)
  local v4 = setmetatable({}, u0)
  v4.action = action
  v4.displayName = displayName
  v4.isPositive = isPositive
  v4.columnTexts = {}
  v4.columnBindings = {}
  return v4
end
function DisplayActionBinding:setBindingDisplay(binding, text, column)
  self.columnTexts[column] = text
  self.columnBindings[column] = binding
end
function DisplayActionBinding:toString()
  for v5, v6 in pairs(self.columnBindings) do
    local v13 = tostring(v5)
    v13 = tostring(v6)
  end
  v4 = tostring(self.displayName)
  v5 = tostring(self.action)
  v6 = tostring(self.isPositive)
  local v7 = table.concat(self.columnTexts, "|")
  v2 = string.format("[DisplayActionBinding: displayName=%s, action=%s, isPositive=%s, columnTexts=%s, columnBindings=%s]", v4, v5, v6, v7, v1)
  return v2
end
DisplayActionBinding_mt.__tostring = DisplayActionBinding.toString
