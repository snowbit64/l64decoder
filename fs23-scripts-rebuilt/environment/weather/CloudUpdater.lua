-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CloudUpdater = {}
local CloudUpdater_mt = Class(CloudUpdater)
function CloudUpdater.new(index, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.index = index
  v2.lastClouds = {["type"] = 1, cloudBaseShapeTiling = 2500, cloudErosionTiling = 2500, precipitation = 0, combinedNoiseEdge0 = 0.49, combinedNoiseEdge1 = 1, noise0Weight = 0.314507, noise0Edge0 = 0.09, noise0Edge1 = 0.99, noise1Weight = 0.525494, noise1Edge0 = 0, noise1Edge1 = 0.88, noise2Weight = 0.16, noise2Edge0 = 0, noise2Edge1 = 0.9, erosionWeight = 0.3, cirrusCoverage = 0.05, lightDamping = 0, envMapCloudProbeIndex = 1}
  v2.currentClouds = {["type"] = 1, cloudBaseShapeTiling = 2500, cloudErosionTiling = 2500, precipitation = 0, combinedNoiseEdge0 = 0.49, combinedNoiseEdge1 = 1, noise0Weight = 0.314507, noise0Edge0 = 0.09, noise0Edge1 = 0.99, noise1Weight = 0.525494, noise1Edge0 = 0, noise1Edge1 = 0.88, noise2Weight = 0.16, noise2Edge0 = 0, noise2Edge1 = 0.9, erosionWeight = 0.3, cirrusCoverage = 0.05, lightDamping = 0, envMapCloudProbeIndex = 1}
  local v3 = table.copy(v2.lastClouds, math.huge)
  v2.targetClouds = v3
  v2.windDirX = 1
  v2.windDirZ = 0
  v2.windVelocity = 1
  v2.cirrusCloudSpeedFactor = 1
  v2.speedScale = 1
  v2.alpha = 1
  v2.duration = 1
  v2.isDirty = true
  return v2
end
function CloudUpdater.delete(v0)
end
function CloudUpdater:update(scaledDt)
  if self.alpha == 1 then
    -- if not v0.isDirty then goto L331 end
  end
  local v2 = math.min(self.alpha + scaledDt / self.duration, 1)
  self.alpha = v2
  local v4 = MathUtil.lerp(self.lastClouds.combinedNoiseEdge0, self.targetClouds.combinedNoiseEdge0, self.alpha)
  local v5 = MathUtil.lerp(self.lastClouds.combinedNoiseEdge1, self.targetClouds.combinedNoiseEdge1, self.alpha)
  local v6 = MathUtil.lerp(self.lastClouds.noise0Weight, self.targetClouds.noise0Weight, self.alpha)
  local v7 = MathUtil.lerp(self.lastClouds.noise0Edge0, self.targetClouds.noise0Edge0, self.alpha)
  local v8 = MathUtil.lerp(self.lastClouds.noise0Edge1, self.targetClouds.noise0Edge1, self.alpha)
  local v9 = MathUtil.lerp(self.lastClouds.noise1Weight, self.targetClouds.noise1Weight, self.alpha)
  local v10 = MathUtil.lerp(self.lastClouds.noise1Edge0, self.targetClouds.noise1Edge0, self.alpha)
  local v11 = MathUtil.lerp(self.lastClouds.noise1Edge1, self.targetClouds.noise1Edge1, self.alpha)
  local v12 = MathUtil.lerp(self.lastClouds.noise2Weight, self.targetClouds.noise2Weight, self.alpha)
  local v13 = MathUtil.lerp(self.lastClouds.noise2Edge0, self.targetClouds.noise2Edge0, self.alpha)
  local v14 = MathUtil.lerp(self.lastClouds.noise2Edge1, self.targetClouds.noise2Edge1, self.alpha)
  local v15 = MathUtil.lerp(self.lastClouds.erosionWeight, self.targetClouds.erosionWeight, self.alpha)
  local v16 = MathUtil.lerp(self.lastClouds.precipitation, self.targetClouds.precipitation, self.alpha)
  local v17 = MathUtil.lerp(self.lastClouds.cloudBaseShapeTiling, self.targetClouds.cloudBaseShapeTiling, self.alpha)
  local v18 = MathUtil.lerp(self.lastClouds.cloudErosionTiling, self.targetClouds.cloudErosionTiling, self.alpha)
  if v5 < v4 then
  end
  if v8 < v7 then
  end
  if v11 < v10 then
  end
  if v14 < v13 then
  end
  setGlobalCloudCoverage(v4, v5, v6 / (v6 + v9 + v12), v7, v8, v9 / (v6 + v9 + v12), v10, v11, v12 / (v6 + v9 + v12), v13, v14, v15)
  local v20 = MathUtil.lerp(v2.cirrusCoverage, v3.cirrusCoverage, self.alpha)
  local v21 = MathUtil.lerp(v2.lightDamping, v3.lightDamping, self.alpha)
  setScatteringLightSourceDamping(v21)
  setCirrusCloudCoverage(v20)
  setCloudType(v2["type"], v3["type"], self.alpha, v17, v18)
  setCloudPrecipitation(v16)
  local v23 = MathUtil.lerp(v2["type"], v3["type"], self.alpha)
  self.currentClouds["type"] = v23
  self.currentClouds.precipitation = v16
  self.currentClouds.cloudBaseShapeTiling = v17
  self.currentClouds.cloudErosionTiling = v18
  self.currentClouds.combinedNoiseEdge0 = v4
  self.currentClouds.combinedNoiseEdge1 = v5
  self.currentClouds.noise0Weight = v6 / (v6 + v9 + v12)
  self.currentClouds.noise0Edge0 = v7
  self.currentClouds.noise0Edge1 = v8
  self.currentClouds.noise1Weight = v9 / (v6 + v9 + v12)
  self.currentClouds.noise1Edge0 = v10
  self.currentClouds.noise1Edge1 = v11
  self.currentClouds.noise2Weight = v12 / (v6 + v9 + v12)
  self.currentClouds.noise2Edge0 = v13
  self.currentClouds.noise2Edge1 = v14
  self.currentClouds.erosionWeight = v15
  self.currentClouds.cirrusCoverage = v20
  self.currentClouds.lightDamping = v21
  self.currentClouds.envMapCloudProbeIndex = v2.envMapCloudProbeIndex
  self.isDirty = false
end
function CloudUpdater:setTargetClouds(clouds, duration)
  self.alpha = 0
  local v3 = math.max(1, duration)
  self.duration = v3
  self.lastClouds = self.targetClouds
  self.targetClouds = clouds
end
function CloudUpdater:setWindValues(windDirX, windDirZ, windVelocity, cirrusCloudSpeedFactor)
  self.windDirX = windDirX
  self.windDirZ = windDirZ
  self.windVelocity = windVelocity
  self.cirrusCloudSpeedFactor = cirrusCloudSpeedFactor
  self:updateCloudWind()
end
function CloudUpdater:updateCloudWind()
  if self.slowModeEnabled then
  end
  setCloudWind(-v1, v2, v4, -v1, -v2, v4 * v3)
end
function CloudUpdater:setTimeScale(scale)
  self.speedScale = scale
  self.isDirty = true
  self:updateCloudWind()
end
function CloudUpdater:setSlowModeEnabled(enabled)
  self.slowModeEnabled = enabled
end
function CloudUpdater:getCurrentValues()
  return self.currentClouds
end
