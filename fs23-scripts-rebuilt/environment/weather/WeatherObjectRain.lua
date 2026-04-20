-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WeatherObjectRain = {}
local WeatherObjectRain_mt = Class(WeatherObjectRain, WeatherObject)
function WeatherObjectRain.new(weatherType, cloudUpdater, temperatureUpdater, windUpdater, customMt)
  local v6 = v6:superClass()
  if not customMt then
  end
  local v5 = v5(v6, v7, v8, v9, v10)
  v5.sharedLoadRequestId = nil
  v5.rainNode = nil
  v5.geometries = {}
  v5.isVisible = true
  v5.alpha = 1
  v5.duration = 1
  v5.currentDropScale = 0
  v5.lastDropScale = 0
  v5.targetDropScale = 0
  v6:addWindChangedListener(v5)
  v6:subscribe(MessageType.GAME_STATE_CHANGED, v5.onGameStateChanged, v5)
  return v5
end
function WeatherObjectRain:load(xmlFile, key, cloudPresets)
  local v5 = v5:superClass()
  local v4 = v5.load(self, xmlFile, key, cloudPresets)
  if not v4 then
    return false
  end
  v4 = xmlFile:getString(key .. ".rain#filename")
  if v4 ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R4 aux=0x5 -> L47
    v5 = Utils.getFilename(v4, g_currentMission.baseDirectory)
    v5 = v5:loadSharedI3DFileAsync(v5, false, false, self.rainI3DFileLoaded, self, nil)
    self.sharedLoadRequestId = v5
  else
    Logging.xmlWarning(xmlFile, "Missing rain filename for '%s'", key)
    return false
  end
  return true
end
function WeatherObjectRain:rainI3DFileLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    self.rainNode = i3dNode
    local v5 = getRootNode()
    link(v5, self.rainNode)
    setCullOverride(self.rainNode, true)
    setVisibility(self.rainNode, false)
    local v7 = getNumOfChildren(self.rainNode)
    -- TODO: structure LOP_FORNPREP (pc 32, target 78)
    v7 = getChildAt(self.rainNode, 1 - 1)
    local v8 = getHasClassId(v7, ClassIds.SHAPE)
    if v8 then
      v8 = getGeometry(v7)
      if v8 ~= 0 then
        local v9 = getHasClassId(v8, ClassIds.PRECIPITATION)
        if v9 then
          table.insert(self.geometries, v8)
          setDropCountScale(v8, 0)
        end
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 72, target 33)
    return
  end
  Logging.warning("Failed to load rain i3d file!'")
end
function WeatherObjectRain.loadVariation(v0, v1, v2, v3, v4)
  local v6 = v6:superClass()
  local v5 = v6.loadVariation(v0, v1, v2, v3, v4)
  if not v5 then
    return false
  end
  v3.rain = {}
  v6 = v1:getFloat(v2 .. "#dropScale", 1)
  v3.rain.dropScale = v6
  return true
end
function WeatherObjectRain:delete()
  v1:unsubscribeAll(self)
  v1:removeWindChangedListener(self)
  if self.rainNode ~= nil then
    delete(self.rainNode)
    self.rainNode = nil
    -- TODO: structure LOP_FORNPREP (pc 29, target 35)
    self.geometries[#self.geometries] = nil
    -- TODO: structure LOP_FORNLOOP (pc 34, target 30)
  end
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function WeatherObjectRain:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.alpha ~= 1 then
    if self.duration ~= 0 then
      local v2 = math.min(self.alpha + dt / self.duration, 1)
      self.alpha = v2
    else
      self.alpha = 1
    end
    v2 = MathUtil.lerp(self.lastDropScale, self.targetDropScale, self.alpha)
    self.currentDropScale = v2
    for v5, v6 in ipairs(self.geometries) do
      setDropCountScale(v6, self.currentDropScale)
    end
  end
  if self.rainNode ~= nil then
    if self.isVisible and self.currentDropScale == 0 then
    end
    v2(v3, v4)
  end
end
function WeatherObjectRain:getRainFallScale()
  return self.currentDropScale
end
function WeatherObjectRain:activate(variationIndex, duration)
  local v4 = v4:superClass()
  v4.activate(self, variationIndex, duration)
  self.alpha = 0
  self.duration = duration
  self.lastDropScale = self.currentDropScale
  self.targetDropScale = self.variations[variationIndex].rain.dropScale
end
function WeatherObjectRain:deactivate(duration)
  local v3 = v3:superClass()
  v3.deactivate(self, duration)
  self.alpha = 0
  self.targetDropScale = 0
  self.lastDropScale = self.currentDropScale
  self.duration = duration * 0.5
end
function WeatherObjectRain:setWindValues(windDirX, windDirZ, windVelocity, cirrusCloudSpeedFactor)
  for v10, v11 in ipairs(self.geometries) do
    setWindVelocity(v11, v5, 0, v6)
  end
end
function WeatherObjectRain:onGameStateChanged(newGameState, oldGameState)
  if newGameState == GameState.MENU_SHOP_CONFIG then
  end
  self.isVisible = true
end
