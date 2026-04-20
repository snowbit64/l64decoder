-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SkyBoxUpdater = {RAIN_FADE_IN = 7200000}
local SkyBoxUpdater_mt = Class(SkyBoxUpdater)
function SkyBoxUpdater.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.x = 1
  v1.y = 0
  v1.z = 0
  v1.w = 0
  v1.rainScale = 0
  v1.loadRequestId = nil
  return v1
end
function SkyBoxUpdater:load(xmlFile, key)
  local i3dFilename = xmlFile:getString(key .. "#filename")
  if i3dFilename == nil then
    Logging.devWarning("Missing filename for skybox updater in '%s'", key)
    return false
  end
  local v4 = v4:loadI3DFileAsync(i3dFilename, false, false, SkyBoxUpdater.skyNodeLoaded, self, nil)
  self.loadRequestId = v4
  v4 = AnimCurve.new(linearInterpolator4)
  self.skyCurve = v4
  local v6 = xmlFile:getHandle()
  v4:loadCurveFromXML(v6, key .. ".curve", loadInterpolator4Curve)
  return true
end
function SkyBoxUpdater:skyNodeLoaded(i3dNode, failedReason, args)
  if i3dNode ~= nil and i3dNode ~= 0 then
    self.skyNode = i3dNode
    local v5 = getRootNode()
    link(v5, self.skyNode)
    local v4 = getChildAt(self.skyNode, 0)
    self.skyId = v4
  end
  self.loadRequestId = nil
end
function SkyBoxUpdater:delete()
  if self.loadRequestId ~= nil then
    v1:cancelStreamI3DFile(self.loadRequestId)
    self.loadRequestId = nil
  end
  if self.skyNode ~= nil then
    delete(self.skyNode)
  end
end
function SkyBoxUpdater:update(dt, dayTime, rainScale, timeUntilRain)
  if 0 < rainScale then
  else
  end
  if v5 < self.rainScale then
    local v5 = math.pow(0.999, dt)
  end
  if timeUntilRain < SkyBoxUpdater.RAIN_FADE_IN then
    v5 = math.min((1 - timeUntilRain / SkyBoxUpdater.RAIN_FADE_IN) ^ 0.5, 1)
  end
  local v6, v7, v8, v9 = v6:get(dayTime / 60000)
  self.dayScale = 1 - v8
  self:setPartScale(v6 * (1 - rainScale), v7 * (1 - rainScale), v8 * (1 - rainScale), v9 * (1 - rainScale))
  self:setRainScale(rainScale, self.dayScale)
end
function SkyBoxUpdater:setPartScale(x, y, z, w)
  if self.skyId ~= nil then
    setShaderParameter(self.skyId, "partScale", x, y, z, w)
  end
  self.x = x
  self.y = y
  self.z = z
  self.w = w
end
function SkyBoxUpdater:setRainScale(v1, v2)
  if self.skyId ~= nil then
    setShaderParameter(self.skyId, "rainScale", v1 * v2, v1 * (1 - v2), 0, 0)
  end
  self.rainScale = v1
end
function SkyBoxUpdater:addDebugValues(data)
  table.insert(data, {name = "SKYBOX", value = ""})
  local v5 = string.format("%.2f %.2f %.2f %.2f", self.x, self.y, self.z, self.w)
  table.insert(data, {name = "partScale", value = v5})
  v5 = string.format("%.2f", self.rainScale)
  table.insert(data, {name = "rainScale", value = v5})
  v5 = string.format("%.2f", self.dayScale)
  table.insert(data, {name = "dayScale", value = v5})
end
