-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmlandStatisticCounter = {}
local FarmlandStatisticCounter_mt = Class(FarmlandStatisticCounter)
function FarmlandStatisticCounter.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1:reset()
  return v1
end
function FarmlandStatisticCounter:loadFromItemsXML(xmlFile, key)
  local v3 = xmlFile:getInt(key .. "#numSoilSamples", self.numSoilSamples)
  self.numSoilSamples = v3
  v3 = xmlFile:getFloat(key .. "#soilSampleCosts", self.soilSampleCosts)
  self.soilSampleCosts = v3
  v3 = xmlFile:getFloat(key .. "#usedLime", self.usedLime)
  self.usedLime = v3
  v3 = xmlFile:getFloat(key .. "#usedLimeRegular", self.usedLimeRegular)
  self.usedLimeRegular = v3
  v3 = xmlFile:getFloat(key .. "#usedMineralFertilizer", self.usedMineralFertilizer)
  self.usedMineralFertilizer = v3
  v3 = xmlFile:getFloat(key .. "#usedMineralFertilizerRegular", self.usedMineralFertilizerRegular)
  self.usedMineralFertilizerRegular = v3
  v3 = xmlFile:getFloat(key .. "#usedLiquidFertilizer", self.usedLiquidFertilizer)
  self.usedLiquidFertilizer = v3
  v3 = xmlFile:getFloat(key .. "#usedLiquidFertilizerRegular", self.usedLiquidFertilizerRegular)
  self.usedLiquidFertilizerRegular = v3
  v3 = xmlFile:getFloat(key .. "#usedManure", self.usedManure)
  self.usedManure = v3
  v3 = xmlFile:getFloat(key .. "#usedManureRegular", self.usedManureRegular)
  self.usedManureRegular = v3
  v3 = xmlFile:getFloat(key .. "#usedLiquidManure", self.usedLiquidManure)
  self.usedLiquidManure = v3
  v3 = xmlFile:getFloat(key .. "#usedLiquidManureRegular", self.usedLiquidManureRegular)
  self.usedLiquidManureRegular = v3
  v3 = xmlFile:getFloat(key .. "#usedSeeds", self.usedSeeds)
  self.usedSeeds = v3
  v3 = xmlFile:getFloat(key .. "#usedSeedsRegular", self.usedSeedsRegular)
  self.usedSeedsRegular = v3
  v3 = xmlFile:getFloat(key .. "#usedHerbicide", self.usedHerbicide)
  self.usedHerbicide = v3
  v3 = xmlFile:getFloat(key .. "#usedHerbicideRegular", self.usedHerbicideRegular)
  self.usedHerbicideRegular = v3
  v3 = xmlFile:getFloat(key .. "#yield", self.yield)
  self.yield = v3
  v3 = xmlFile:getFloat(key .. "#yieldRegular", self.yieldRegular)
  self.yieldRegular = v3
  v3 = xmlFile:getFloat(key .. "#yieldWeight", self.yieldWeight)
  self.yieldWeight = v3
  v3 = xmlFile:getFloat(key .. "#yieldBestPrice", self.yieldBestPrice)
  self.yieldBestPrice = v3
  v3 = xmlFile:getFloat(key .. "#usedFuel", self.usedFuel)
  self.usedFuel = v3
  v3 = xmlFile:getFloat(key .. "#vehicleCosts", self.vehicleCosts)
  self.vehicleCosts = v3
  v3 = xmlFile:getFloat(key .. "#helperCosts", self.helperCosts)
  self.helperCosts = v3
end
function FarmlandStatisticCounter:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setInt(key .. "#numSoilSamples", self.numSoilSamples)
  xmlFile:setFloat(key .. "#soilSampleCosts", self.soilSampleCosts)
  xmlFile:setFloat(key .. "#usedLime", self.usedLime)
  xmlFile:setFloat(key .. "#usedLimeRegular", self.usedLimeRegular)
  xmlFile:setFloat(key .. "#usedMineralFertilizer", self.usedMineralFertilizer)
  xmlFile:setFloat(key .. "#usedMineralFertilizerRegular", self.usedMineralFertilizerRegular)
  xmlFile:setFloat(key .. "#usedLiquidFertilizer", self.usedLiquidFertilizer)
  xmlFile:setFloat(key .. "#usedLiquidFertilizerRegular", self.usedLiquidFertilizerRegular)
  xmlFile:setFloat(key .. "#usedManure", self.usedManure)
  xmlFile:setFloat(key .. "#usedManureRegular", self.usedManureRegular)
  xmlFile:setFloat(key .. "#usedLiquidManure", self.usedLiquidManure)
  xmlFile:setFloat(key .. "#usedLiquidManureRegular", self.usedLiquidManureRegular)
  xmlFile:setFloat(key .. "#usedSeeds", self.usedSeeds)
  xmlFile:setFloat(key .. "#usedSeedsRegular", self.usedSeedsRegular)
  xmlFile:setFloat(key .. "#usedHerbicide", self.usedHerbicide)
  xmlFile:setFloat(key .. "#usedHerbicideRegular", self.usedHerbicideRegular)
  xmlFile:setFloat(key .. "#yield", self.yield)
  xmlFile:setFloat(key .. "#yieldRegular", self.yieldRegular)
  xmlFile:setFloat(key .. "#yieldWeight", self.yieldWeight)
  xmlFile:setFloat(key .. "#yieldBestPrice", self.yieldBestPrice)
  xmlFile:setFloat(key .. "#usedFuel", self.usedFuel)
  xmlFile:setFloat(key .. "#vehicleCosts", self.vehicleCosts)
  xmlFile:setFloat(key .. "#helperCosts", self.helperCosts)
end
function FarmlandStatisticCounter:reset()
  self.numSoilSamples = 0
  self.soilSampleCosts = 0
  self.usedLime = 0
  self.usedLimeRegular = 0
  self.usedMineralFertilizer = 0
  self.usedMineralFertilizerRegular = 0
  self.usedLiquidFertilizer = 0
  self.usedLiquidFertilizerRegular = 0
  self.usedManure = 0
  self.usedManureRegular = 0
  self.usedLiquidManure = 0
  self.usedLiquidManureRegular = 0
  self.usedSeeds = 0
  self.usedSeedsRegular = 0
  self.usedHerbicide = 0
  self.usedHerbicideRegular = 0
  self.yield = 0
  self.yieldRegular = 0
  self.yieldWeight = 0
  self.yieldBestPrice = 0
  self.usedFuel = 0
  self.vehicleCosts = 0
  self.helperCosts = 0
end
function FarmlandStatisticCounter:onReadStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, 16)
  self.numSoilSamples = v3
  v3 = streamReadFloat32(streamId)
  self.soilSampleCosts = v3
  v3 = streamReadFloat32(streamId)
  self.usedLime = v3
  v3 = streamReadFloat32(streamId)
  self.usedLimeRegular = v3
  v3 = streamReadFloat32(streamId)
  self.usedMineralFertilizer = v3
  v3 = streamReadFloat32(streamId)
  self.usedMineralFertilizerRegular = v3
  v3 = streamReadFloat32(streamId)
  self.usedLiquidFertilizer = v3
  v3 = streamReadFloat32(streamId)
  self.usedLiquidFertilizerRegular = v3
  v3 = streamReadFloat32(streamId)
  self.usedManure = v3
  v3 = streamReadFloat32(streamId)
  self.usedManureRegular = v3
  v3 = streamReadFloat32(streamId)
  self.usedLiquidManure = v3
  v3 = streamReadFloat32(streamId)
  self.usedLiquidManureRegular = v3
  v3 = streamReadFloat32(streamId)
  self.usedSeeds = v3
  v3 = streamReadFloat32(streamId)
  self.usedSeedsRegular = v3
  v3 = streamReadFloat32(streamId)
  self.usedHerbicide = v3
  v3 = streamReadFloat32(streamId)
  self.usedHerbicideRegular = v3
  v3 = streamReadFloat32(streamId)
  self.yield = v3
  v3 = streamReadFloat32(streamId)
  self.yieldRegular = v3
  v3 = streamReadFloat32(streamId)
  self.yieldWeight = v3
  v3 = streamReadFloat32(streamId)
  self.yieldBestPrice = v3
  v3 = streamReadFloat32(streamId)
  self.usedFuel = v3
  v3 = streamReadFloat32(streamId)
  self.vehicleCosts = v3
  v3 = streamReadFloat32(streamId)
  self.helperCosts = v3
end
function FarmlandStatisticCounter:onWriteStream(streamId, connection)
  streamWriteUIntN(streamId, self.numSoilSamples, 16)
  streamWriteFloat32(streamId, self.soilSampleCosts)
  streamWriteFloat32(streamId, self.usedLime)
  streamWriteFloat32(streamId, self.usedLimeRegular)
  streamWriteFloat32(streamId, self.usedMineralFertilizer)
  streamWriteFloat32(streamId, self.usedMineralFertilizerRegular)
  streamWriteFloat32(streamId, self.usedLiquidFertilizer)
  streamWriteFloat32(streamId, self.usedLiquidFertilizerRegular)
  streamWriteFloat32(streamId, self.usedManure)
  streamWriteFloat32(streamId, self.usedManureRegular)
  streamWriteFloat32(streamId, self.usedLiquidManure)
  streamWriteFloat32(streamId, self.usedLiquidManureRegular)
  streamWriteFloat32(streamId, self.usedSeeds)
  streamWriteFloat32(streamId, self.usedSeedsRegular)
  streamWriteFloat32(streamId, self.usedHerbicide)
  streamWriteFloat32(streamId, self.usedHerbicideRegular)
  streamWriteFloat32(streamId, self.yield)
  streamWriteFloat32(streamId, self.yieldRegular)
  streamWriteFloat32(streamId, self.yieldWeight)
  streamWriteFloat32(streamId, self.yieldBestPrice)
  streamWriteFloat32(streamId, self.usedFuel)
  streamWriteFloat32(streamId, self.vehicleCosts)
  streamWriteFloat32(streamId, self.helperCosts)
end
