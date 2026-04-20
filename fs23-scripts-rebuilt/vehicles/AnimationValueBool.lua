-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimationValueBool = {}
local AnimationValueBool_mt = Class(AnimationValueBool, AnimationValueFloat)
function AnimationValueBool.new(vehicle, animation, part, startName, endName, name, initialUpdate, get, set, extraLoad, customMt)
  if not customMt then
  end
  return v11(v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22)
end
function AnimationValueBool:load(xmlFile, key)
  local v3 = xmlFile:getValue(key .. "#" .. self.startName)
  self.value = v3
  self.warningInfo = key
  self.xmlFile = xmlFile
  if self.value ~= nil then
    v3 = self:extraLoad(xmlFile, key)
  end
  return v3
end
function AnimationValueBool.init(v0, v1, v2)
end
function AnimationValueBool.postInit(v0)
end
function AnimationValueBool:reset()
  self.curValue = nil
end
function AnimationValueBool:update(durationToEnd, dtToUse, realDt)
  if self.curValue == nil then
    local v4 = self:get()
    self.curValue = v4
  end
  if self.value ~= self.curValue then
    self.curValue = self.value
    self:set(self.value)
    return true
  end
  return false
end
