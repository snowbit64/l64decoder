-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IndexChangeSubjectMixin = {}
local IndexableElementMixin_mt = Class(IndexChangeSubjectMixin, GuiMixin)
function IndexChangeSubjectMixin.new()
  local v0 = GuiMixin.new(u0, IndexChangeSubjectMixin)
  v0.callbacks = {}
  return v0
end
function IndexChangeSubjectMixin.addTo(v0, v1)
  local v3 = v3:superClass()
  local v2 = v3.addTo(v0, v1)
  if v2 then
    v1.addIndexChangeObserver = IndexChangeSubjectMixin.addIndexChangeObserver
    v1.notifyIndexChange = IndexChangeSubjectMixin.notifyIndexChange
    return true
  end
  return false
end
function IndexChangeSubjectMixin:addIndexChangeObserver(v1, v2)
  self[IndexChangeSubjectMixin].callbacks[v1] = v2
end
function IndexChangeSubjectMixin:notifyIndexChange(v1, v2)
  for v7, v8 in pairs(self[IndexChangeSubjectMixin].callbacks) do
    v8(v7, v1, v2)
  end
end
function IndexChangeSubjectMixin.clone(v0, v1, v2)
  if v1[IndexChangeSubjectMixin].callbacks ~= nil then
    local v4 = table.copy(v1[IndexChangeSubjectMixin].callbacks)
    v2[IndexChangeSubjectMixin].callbacks = v4
  end
end
