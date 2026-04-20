-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DepthOfFieldManager = {DEFAULT_VALUES = {0.8, 0.5, 0.2, 1000, 1400, false}}
local DepthOfFieldManager_mt = Class(DepthOfFieldManager, AbstractManager)
function DepthOfFieldManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  local v2 = table.copy(DepthOfFieldManager.DEFAULT_VALUES)
  v1.defaultState = v2
  local v3 = unpack(v1.defaultState)
  setDoFparams(...)
  v3 = getDoFparams()
  v1.initialState = {}
  v3 = getDoFparams()
  v1.currentState = {}
  v1.blurState = {0.8, 0.5, 0.4, 1000, 1400, true}
  v1.oldSetDoFparams = function()
  end
  v1.areaStack = {{-1, -1, -1, -1, false}}
  return v1
end
function DepthOfFieldManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = getXMLFloat(xmlFile, "map.depthOfField#nearCoC")
  if not v5 then
  end
  v4[1] = v5
  v5 = getXMLFloat(xmlFile, "map.depthOfField#nearBlurEnd")
  if not v5 then
  end
  v4[2] = v5
  v5 = getXMLFloat(xmlFile, "map.depthOfField#farCoC")
  if not v5 then
  end
  v4[3] = v5
  v5 = getXMLFloat(xmlFile, "map.depthOfField#farBlurStart")
  if not v5 then
  end
  v4[4] = v5
  v5 = getXMLFloat(xmlFile, "map.depthOfField#farBlurEnd")
  if not v5 then
  end
  v4[5] = v5
  v5 = unpack(self.defaultState)
  setDoFparams(...)
end
function DepthOfFieldManager:getInitialDoFParams()
  return unpack(self.initialState)
end
function DepthOfFieldManager:setEnvironmentDoFEnabled(enabled, skipReset)
  if enabled then
    self.initialState = self.defaultState
  else
    self.initialState = {self.defaultState[1], self.defaultState[2], self.defaultState[3], 0, 0, false}
  end
  if not skipReset then
    self:reset()
  end
end
function DepthOfFieldManager:getCurrentDoFParams()
  return unpack(self.currentState)
end
function DepthOfFieldManager:getBlurDoFParams()
  return unpack(self.blurState)
end
function DepthOfFieldManager:reset()
  local v2 = unpack(self.initialState)
  setDoFparams(...)
end
function DepthOfFieldManager:setManipulatedParams(nearCoCRadius, nearBlurEnd, farCoCRadius, farBlurStart, farBlurEnd, applyToSky)
  if not nearCoCRadius then
  end
  v7[1] = v8
  if not nearBlurEnd then
  end
  v7[2] = v8
  if not farCoCRadius then
  end
  v7[3] = v8
  if not farBlurStart then
  end
  v7[4] = v8
  if not farBlurEnd then
  end
  v7[5] = v8
  if not applyToSky then
  end
  v7[6] = v8
  local v8 = unpack(self.currentState)
  setDoFparams(...)
end
function DepthOfFieldManager:getIsDoFChangeAllowed()
  if #self.areaStack ~= 1 then
  end
  return true
end
function DepthOfFieldManager:pushArea(x, y, width, height)
  table.insert(self.areaStack, 1, {x, y, x + width, y + height, true})
  self:updateArea()
end
function DepthOfFieldManager:popArea()
  if 1 >= #self.areaStack then
  end
  v1(true)
  table.remove(self.areaStack, 1)
  self:updateArea()
end
function DepthOfFieldManager:updateArea()
  if 0 < #self.areaStack then
    for v9, v10 in ipairs(self.areaStack) do
      if not v10[5] then
        continue
      end
      local v11, v12, v13, v14 = unpack(v10)
      local v15 = math.min(v1, v11)
      v15 = math.min(v3, v12)
      v15 = math.max(v2, v13)
      v15 = math.max(v4, v14)
    end
    if not v5 then
    end
    setDoFBlurArea(v1, v3, v2, v4)
  end
end
function DepthOfFieldManager:queueDoFChange(nearCoCRadius, nearBlurEnd, farCoCRadius, farBlurStart, farBlurEnd, applyToSky)
  self.currentState = {nearCoCRadius, nearBlurEnd, farCoCRadius, farBlurStart, farBlurEnd, applyToSky}
end
local v1 = DepthOfFieldManager.new()
g_depthOfFieldManager = v1
g_depthOfFieldManager.oldSetDoFparams = setDoFparams
function setDoFparams(nearCoCRadius, nearBlurEnd, farCoCRadius, farBlurStart, farBlurEnd, applyToSky)
  local v6 = v6:getIsDoFChangeAllowed()
  if v6 then
    g_depthOfFieldManager.oldSetDoFparams(nearCoCRadius, nearBlurEnd, farCoCRadius, farBlurStart, farBlurEnd, applyToSky)
  end
  v6:queueDoFChange(nearCoCRadius, nearBlurEnd, farCoCRadius, farBlurStart, farBlurEnd, applyToSky)
end
