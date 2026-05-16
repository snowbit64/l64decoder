-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LightingStatic = {}
local LightingStatic_mt = Class(LightingStatic, Lighting)
function LightingStatic.new(environment, customMt)
  if not customMt then
  end
  return v2(v3, v4)
end
function LightingStatic:load(xmlFile, baseKey)
  self.sunHeightAngle = -0.8726646259971648
  local v5 = getXMLFloat(xmlFile, baseKey .. ".sunRotation#heightAngleLimitRotation")
  local v4 = Utils.getNoNil(v5, 60)
  local v3 = math.rad(...)
  self.heightAngleLimitRotation = v3
  v5 = getXMLFloat(xmlFile, baseKey .. ".sunRotation#heightAngleLimitRotationStart")
  v4 = Utils.getNoNil(v5, 56)
  v3 = math.rad(...)
  self.heightAngleLimitRotationStart = v3
  v5 = getXMLFloat(xmlFile, baseKey .. ".sunRotation#heightAngleLimitRotationEnd")
  v4 = Utils.getNoNil(v5, 80)
  v3 = math.rad(...)
  self.heightAngleLimitRotationEnd = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".sunRotation", true)
  self.sunRotation = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".moonBrightnessScale")
  self.moonBrightnessScale = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".moonSizeScale")
  self.moonSizeScale = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".sunIsPrimary")
  self.sunIsPrimary = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".sunBrightnessScale")
  self.sunBrightnessScale = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".sunSizeScale")
  self.sunSizeScale = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".asymmetryFactor")
  self.asymmetryFactor = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".primaryExtraterrestrialColor")
  self.primaryExtraterrestrialColor = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".secondaryExtraterrestrialColor")
  self.secondaryExtraterrestrialColor = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".primaryDynamicLightingScale")
  self.primaryDynamicLightingScale = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".lightScatteringRotation", true)
  self.lightScatteringRotation = v3
  v3 = self:loadValueFromXML(xmlFile, baseKey .. ".autoExposure")
  self.autoExposure = v3
  if Platform.usesFixedExposure then
    v3 = self:loadValueFromXML(xmlFile, baseKey .. ".fixedExposure")
    self.fixedExposure = v3
  end
  v4 = getXMLString(xmlFile, baseKey .. ".colorGrading#filename")
  v3 = Utils.getFilename(v4, g_currentMission.baseDirectory)
  self.colorGrading = v3
  v4 = getXMLString(xmlFile, baseKey .. ".envMap#basePath")
  v3 = Utils.getFilename(v4, g_currentMission.baseDirectory)
  if GS_IS_MOBILE_VERSION then
  else
  end
  local v11 = Lighting.getEnvMapBaseFilename(0, 1)
  self.envMap = v3 .. "/" .. v11 .. v4 .. ".png"
  local v7 = getXMLString(xmlFile, baseKey .. ".envAlbedoGroundColor#value")
  local v6 = Utils.getNoNil(v7, "0 0 0")
  v5 = string.getVectorN(v6, 3)
  self.albedoGroundColor = v5
  v6 = getXMLFloat(xmlFile, baseKey .. ".bloom#magnitude")
  self.bloomMagnitude = v6 or 0.5
  v6 = getXMLFloat(xmlFile, baseKey .. ".bloom#threshold")
  self.bloomThreshold = v6 or 2
  return true
end
function LightingStatic.loadValueFromXML(v0, v1, v2, v3)
  local v5 = getXMLString(v1, v2 .. "#value")
  local v4 = string.split(v5, " ")
  for v8, v9 in ipairs(v4) do
    local v10 = tonumber(v9)
    if v3 then
      local v11 = math.rad(v10)
    end
    v4[v8] = v10
  end
  return v4
end
function LightingStatic:update(dt, force)
  if force then
    setEnvMap(self.envMap, self.envMap, self.envMap, self.envMap, 1, 0, 0, 0, force, true)
    setColorGradingSettings(self.colorGrading, self.colorGrading, 0)
    local v4 = unpack(self.albedoGroundColor)
    setEnvAlbedoGroundColor(...)
    self:updateAtmosphere()
    self:updateExposureSettings()
    setBloomMagnitude(self.bloomMagnitude)
    setBloomMaskThreshold(self.bloomThreshold)
  end
end
function LightingStatic:updateAtmosphere()
  local v1, v2, v3 = mathEulerRotateVector(self.sunHeightAngle, 0, self.lightScatteringRotation[1], 0, 0, 1)
  setLightScatteringDirection(self.sunLightId, v1, v2, v3)
  local v4, v5, v6 = mathEulerRotateVector(self.sunHeightAngle, 0, self.lightScatteringRotation[2], 0, 0, 1)
  setAtmosphereSecondaryLightSource(v4, v5, v6, self.secondaryExtraterrestrialColor[1], self.secondaryExtraterrestrialColor[2], self.secondaryExtraterrestrialColor[3])
  setAtmosphereCornettAsymetryFactor(self.asymmetryFactor[1])
  setSunSizeScale(self.sunSizeScale[1])
  setMoonSizeScale(self.moonSizeScale[1])
  if self.sunIsPrimary[1] ~= 1 then
  end
  v10(true)
  if self.envMapRenderingMode then
    if self.sunIsPrimary[1] then
    else
    end
  end
  setSunBrightnessScale(v11)
  setMoonBrightnessScale(v10)
  setLightColor(self.sunLightId, self.primaryExtraterrestrialColor[1] * self.primaryDynamicLightingScale[1], self.primaryExtraterrestrialColor[2] * self.primaryDynamicLightingScale[1], self.primaryExtraterrestrialColor[3] * self.primaryDynamicLightingScale[1])
  setLightScatteringColor(self.sunLightId, self.primaryExtraterrestrialColor[1], self.primaryExtraterrestrialColor[2], self.primaryExtraterrestrialColor[3])
end
function LightingStatic:updateExposureSettings()
  if Platform.usesFixedExposure then
    if self.fixedKeyValue ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L20
    end
    -- goto L60  (LOP_JUMP +40)
  elseif self.fixedKeyValue == nil then
  else
    if self.fixedMinExposure == nil then
    else
    end
  end
  setExposureRange(v3, v1, v2)
end
function LightingStatic.updateCurves(v0)
end
function LightingStatic:setFixedExposureSettings(keyValue, minExposure, maxExposure)
  local v5 = v5:superClass()
  v5.setFixedExposureSettings(self, keyValue, minExposure, maxExposure)
  self:update(1, true)
end
