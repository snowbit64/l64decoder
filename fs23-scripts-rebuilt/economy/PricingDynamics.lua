-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PricingDynamics = {}
local PricingDynamics_mt = Class(PricingDynamics)
PricingDynamics.VERSION = 1
PricingDynamics.AMP_DIST_CONSTANT = 1
PricingDynamics.AMP_DIST_LINEAR_DOWN = 2
PricingDynamics.AMP_DIST_LINEAR_UP = 3
PricingDynamics.TREND_PLATEAU = 1
PricingDynamics.TREND_CLIMBING = 2
PricingDynamics.TREND_FALLING = 3
function PricingDynamics.new(mean, amp, ampVar, ampDist, per, perVar, perDist, plateauFactor, initialPlateauFraction, customMt)
  if customMt == nil then
  end
  setmetatable({}, customMt)
  local v12 = math.random()
  if v12 >= initialPlateauFraction then
  end
  v10.isInPlateau = true
  v10.nextPlateauNumber = 0
  local v11 = v10:startFirstCycle(nil, amp, ampVar, ampDist, per, perVar, perDist)
  v10.baseCurve = v11
  if v10.isInPlateau then
    local v13 = math.random()
    v10.plateauTime = v13 * v10.plateauDuration
    v12 = Utils.getCoinToss()
    if v12 then
      v10.baseCurve.time = v10.baseCurve.period * 0.25
      return v10
    end
    v10.baseCurve.time = v11 * 0.75
    v10.nextPlateauNumber = 1
    return v10
  end
  v10.plateauTime = 0
  if v10.baseCurve.period * 0.5 <= v10.baseCurve.time and v10.baseCurve.time < v10.baseCurve.period * 0.75 then
    v10.nextPlateauNumber = 1
  end
  return v10
end
function PricingDynamics:addCurve(amp, ampVar, ampDist, per, perVar, perDist)
  local curve = self:startFirstCycle(nil, amp, ampVar, ampDist, per, perVar, perDist)
  table.insert(self.curves, curve)
end
function PricingDynamics:update(dt)
  if self.isInPlateau then
    if self.plateauDuration <= self.plateauTime + dt then
      self.isInPlateau = false
      self.plateauTime = 0
      self.nextPlateauNumber = 1 - self.nextPlateauNumber
      return
    end
    self.plateauTime = v2
    return
  end
  self:updateCurve(self.baseCurve, dt)
  for v6, v7 in pairs(self.curves) do
    self:updateCurve(v7, dt)
  end
  if self.nextPlateauNumber == 1 then
  end
  if not self.isInPlateau and v3 < v2 and v2 < v3 + self.baseCurve.period * 0.25 then
    self.isInPlateau = true
    self.plateauTime = 0
    self.baseCurve.time = v3
  end
end
function PricingDynamics:evaluate()
  local v2 = self:evaluateCurve(self.baseCurve)
  for v5, v6 in pairs(self.curves) do
    local v7 = self:evaluateCurve(v6)
  end
  return v1
end
function PricingDynamics:getBaseCurveTrend()
  if self.isInPlateau then
    return PricingDynamics.TREND_PLATEAU
  end
  if self.baseCurve.period * 0.25 <= self.baseCurve.time and self.baseCurve.time <= self.baseCurve.period * 0.75 then
    return PricingDynamics.TREND_FALLING
  end
  return PricingDynamics.TREND_CLIMBING
end
function PricingDynamics:evaluateForTrend(timeDelta)
  local v4 = self:evaluateCurve(self.baseCurve, timeDelta)
  return self.meanValue + v4
end
function PricingDynamics:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#priceVersion", PricingDynamics.VERSION)
  xmlFile:setValue(key .. "#isInPlateau", self.isInPlateau)
  xmlFile:setValue(key .. "#nextPlateauNumber", self.nextPlateauNumber)
  xmlFile:setValue(key .. "#plateauDuration", self.plateauDuration)
  xmlFile:setValue(key .. "#meanValue", self.meanValue)
  xmlFile:setValue(key .. "#plateauTime", self.plateauTime)
  self:saveCurveToXMLFile(xmlFile, key, self.baseCurve, "BaseCurve")
  for v7, v8 in pairs(self.curves) do
    self:saveCurveToXMLFile(xmlFile, key, v8, v7)
  end
end
function PricingDynamics:loadFromXMLFile(xmlFile, key)
  local v3 = xmlFile:getValue(key .. "#priceVersion", 0)
  if v3 ~= PricingDynamics.VERSION then
    return
  end
  v3 = xmlFile:getValue(key .. "#isInPlateau", self.isInPlateau)
  self.isInPlateau = v3
  v3 = xmlFile:getValue(key .. "#nextPlateauNumber", self.nextPlateauNumber)
  self.nextPlateauNumber = v3
  v3 = xmlFile:getValue(key .. "#meanValue", self.meanValue)
  self.meanValue = v3
  v3 = xmlFile:getValue(key .. "#plateauTime", self.plateauTime)
  self.plateauTime = v3
  v3 = xmlFile:getValue(key .. "#plateauDuration", self.plateauDuration)
  self.plateauDuration = v3
  self:loadCurveFromXMLFile(xmlFile, key, self.baseCurve, "BaseCurve")
  for v6, v7 in pairs(self.curves) do
    self:loadCurveFromXMLFile(xmlFile, key, v7, v6)
  end
end
function PricingDynamics.saveCurveToXMLFile(v0, v1, v2, v3, v4)
  local v8 = tostring(v4)
  local v5 = string.format(...)
  v1:setValue(v5 .. "#nominalAmplitude", v3.nominalAmplitude)
  v1:setValue(v5 .. "#nominalAmplitudeVariation", v3.nominalAmplitudeVariation)
  v1:setValue(v5 .. "#amplitudeDistribution", v3.amplitudeDistribution)
  v1:setValue(v5 .. "#nominalPeriod", v3.nominalPeriod)
  v1:setValue(v5 .. "#nominalPeriodVariation", v3.nominalPeriodVariation)
  v1:setValue(v5 .. "#periodDistribution", v3.periodDistribution)
  v1:setValue(v5 .. "#amplitude", v3.amplitude)
  v1:setValue(v5 .. "#period", v3.period)
  v1:setValue(v5 .. "#time", v3.time)
end
function PricingDynamics.loadCurveFromXMLFile(v0, v1, v2, v3, v4)
  local v5 = v1:getValue(v2 .. ".curve" .. v4 .. "#nominalAmplitude", v3.nominalAmplitude)
  v3.nominalAmplitude = v5
  v5 = v1:getValue(v2 .. ".curve" .. v4 .. "#nominalAmplitudeVariation", v3.nominalAmplitudeVariation)
  v3.nominalAmplitudeVariation = v5
  v5 = v1:getValue(v2 .. ".curve" .. v4 .. "#amplitudeDistribution", v3.amplitudeDistribution)
  v3.amplitudeDistribution = v5
  v5 = v1:getValue(v2 .. ".curve" .. v4 .. "#nominalPeriod", v3.nominalPeriod)
  v3.nominalPeriod = v5
  v5 = v1:getValue(v2 .. ".curve" .. v4 .. "#nominalPeriodVariation", v3.nominalPeriodVariation)
  v3.nominalPeriodVariation = v5
  v5 = v1:getValue(v2 .. ".curve" .. v4 .. "#periodDistribution", v3.periodDistribution)
  v3.periodDistribution = v5
  v5 = v1:getValue(v2 .. ".curve" .. v4 .. "#amplitude", v3.amplitude)
  v3.amplitude = v5
  v5 = v1:getValue(v2 .. ".curve" .. v4 .. "#period", v3.period)
  v3.period = v5
  v5 = v1:getValue(v2 .. ".curve" .. v4 .. "#time", v3.time)
  v3.time = v5
end
function PricingDynamics:startFirstCycle(curve, amp, ampVar, ampDist, per, perVar, perDist)
  local v8 = Utils.getNoNil(curve, {})
  v8.nominalAmplitude = amp
  v8.nominalAmplitudeVariation = ampVar
  v8.amplitudeDistribution = ampDist
  v8.nominalPeriod = per
  v8.nominalPeriodVariation = perVar
  v8.periodDistribution = perDist
  self:startNewCycle(v8)
  local v9 = math.random()
  v8.time = v9 * v8.period
  return v8
end
function PricingDynamics:startNewCycle(curve)
  local v4 = self:getRandomValue(curve.nominalAmplitude, curve.nominalAmplitudeVariation, curve.amplitudeDistribution)
  curve.amplitude = v4
  v4 = self:getRandomValue(curve.nominalPeriod - 2 * self.plateauDuration, (curve.nominalPeriod - 2 * self.plateauDuration) * curve.nominalPeriodVariation / curve.nominalPeriod, curve.periodDistribution)
  curve.period = v4
  curve.time = 0
end
function PricingDynamics:updateCurve(curve, dt)
  curve.time = curve.time + dt
  if curve.period <= curve.time then
    self:startNewCycle(curve)
  end
end
function PricingDynamics.evaluateCurve(v0, v1, v2)
  local v5 = math.sin(2 * math.pi * (v1.time + (v2 or 0)) / v1.period)
  return v1.amplitude * v5
end
function PricingDynamics.getRandomValue(v0, v1, v2, v3)
  if v3 == PricingDynamics.AMP_DIST_CONSTANT then
    return Utils.randomFloat(v1 - v2, v1 + v2)
  end
  if v3 == PricingDynamics.AMP_DIST_LINEAR_DOWN then
    v6 = math.random()
    local v9 = math.sqrt(v6)
    return v5 + v9 * (v4 - v5)
  end
  if v3 == PricingDynamics.AMP_DIST_LINEAR_UP then
    v6 = math.random()
    v9 = math.sqrt(v6)
    return v4 - v9 * (v5 - v4)
  end
  return -math.huge
end
function PricingDynamics:registerSavegameXMLPaths(v1)
  self:register(XMLValueType.INT, v1 .. "#priceVersion", "Price version (If version is outdated values are reseted)", 0)
  self:register(XMLValueType.BOOL, v1 .. "#isInPlateau", "Is in plateau")
  self:register(XMLValueType.INT, v1 .. "#nextPlateauNumber", "Next plateau number")
  self:register(XMLValueType.FLOAT, v1 .. "#meanValue", "Mean value")
  self:register(XMLValueType.FLOAT, v1 .. "#plateauTime", "Plateau time")
  self:register(XMLValueType.INT, v1 .. "#plateauDuration", "Plateau duration")
  PricingDynamics.registerSavegameCurveXMLPaths(self, v1, "BaseCurve")
  PricingDynamics.registerSavegameCurveXMLPaths(self, v1, "1")
end
function PricingDynamics:registerSavegameCurveXMLPaths(v1, v2)
  self:register(XMLValueType.FLOAT, v1 .. ".curve" .. v2 .. "#nominalAmplitude", "Normal amplitude")
  self:register(XMLValueType.FLOAT, v1 .. ".curve" .. v2 .. "#nominalAmplitudeVariation", "Normal amplitude variation")
  self:register(XMLValueType.INT, v1 .. ".curve" .. v2 .. "#amplitudeDistribution", "Amplitude fistribution")
  self:register(XMLValueType.INT, v1 .. ".curve" .. v2 .. "#nominalPeriod", "Nominal period")
  self:register(XMLValueType.INT, v1 .. ".curve" .. v2 .. "#nominalPeriodVariation", "Nominal period variation")
  self:register(XMLValueType.INT, v1 .. ".curve" .. v2 .. "#periodDistribution", "Period distribution")
  self:register(XMLValueType.FLOAT, v1 .. ".curve" .. v2 .. "#amplitude", "Amplitude")
  self:register(XMLValueType.FLOAT, v1 .. ".curve" .. v2 .. "#period", "Period")
  self:register(XMLValueType.FLOAT, v1 .. ".curve" .. v2 .. "#time", "Time")
end
