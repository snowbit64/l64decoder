-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BgaSellStation = {}
local BgaSellStation_mt = Class(BgaSellStation, UnloadingStation)
InitStaticObjectClass(BgaSellStation, "BgaSellStation", ObjectIds.OBJECT_BGA_SELLING_STATION)
function BgaSellStation.new(isServer, isClient, bga, customMt)
  if not customMt then
  end
  local v4 = v4(v5, v6, v7)
  v4.bga = bga
  return v4
end
function BgaSellStation:load(components, xmlFile, key, customEnv, i3dMappings, rootNode)
  local v8 = v8:superClass()
  local v7 = v8.load(self, components, xmlFile, key, customEnv, i3dMappings, rootNode)
  if not v7 then
    return false
  end
  v7 = xmlFile:getValue(key .. "#appearsOnStats", false)
  self.appearsOnStats = v7
  return true
end
function BgaSellStation:getEffectiveFillTypePrice(fillTypeIndex)
  local v3 = v3:getFillTypeLiterPrice(fillTypeIndex)
  local v4 = EconomyManager.getPriceMultiplier()
  return v3 * v4
end
function BgaSellStation.getSupportsGreatDemand(v0, v1)
  return false
end
function BgaSellStation.getCurrentPricingTrend(v0, v1)
  return 0
end
function BgaSellStation:getAppearsOnStats()
  local v1 = v1:getFarmId()
  local v2 = self:getOwnerFarmId()
  if v1 ~= v2 then
    return false
  end
  return self.appearsOnStats
end
function BgaSellStation:registerXMLPaths(v1)
  self:register(XMLValueType.BOOL, v1 .. "#appearsOnStats", "Appears on stats page", false)
  UnloadingStation.registerXMLPaths(self, v1)
end
