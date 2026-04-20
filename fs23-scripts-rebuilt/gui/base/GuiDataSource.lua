-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GuiDataSource = {}
local GuiDataSource_mt = Class(GuiDataSource)
function GuiDataSource.new(subclass_mt)
  if not subclass_mt then
  end
  local v1 = v1(v2, v3)
  v1.data = u1
  v1.changeListeners = {}
  return v1
end
function GuiDataSource:setData(data)
  if not data then
  end
  self.data = v2
  self:notifyChange()
end
function GuiDataSource:addChangeListener(target, callback)
  if not callback then
  end
  v3[target] = v4
end
function GuiDataSource:removeChangeListener(target)
  self.changeListeners[target] = nil
end
function GuiDataSource:notifyChange()
  for v4, v5 in pairs(self.changeListeners) do
    v5(v4)
  end
end
function GuiDataSource:getCount()
  return #self.data
end
function GuiDataSource:getItem(index)
  return self.data[index]
end
function GuiDataSource:setItem(index, value, needsNotification)
  if 0 < index and index <= #self.data then
    self.data[index] = value
    if needsNotification then
      self:notifyChange()
    end
  end
end
function GuiDataSource:iterateRange(startIndex, endIndex)
  return function(self, startIndex)
    if startIndex <= u0 and self[startIndex] ~= nil then
      return startIndex + 1, self[startIndex]
    end
    return nil, nil
  end, self.data, startIndex
end
local v4 = GuiDataSource.new()
GuiDataSource.EMPTY_SOURCE = v4
