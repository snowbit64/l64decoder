-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Farmland = {}
local Farmland_mt = Class(Farmland)
function Farmland.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.isOwned = false
  v1.xWorldPos = 0
  v1.zWorldPos = 0
  return v1
end
function Farmland:load(xmlFile, key)
  local v3 = getXMLInt(xmlFile, key .. "#id")
  self.id = v3
  if self.id ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000004 -> L31
  end
  local v8 = tostring(self.id)
  print("Error: Invalid farmland id '" .. v8 .. "'!")
  return false
  local v4 = getXMLString(xmlFile, key .. "#name")
  v3 = Utils.getNoNil(v4, "")
  self.name = v3
  v4 = getXMLFloat(xmlFile, key .. "#areaInHa")
  v3 = Utils.getNoNil(v4, 2.5)
  self.areaInHa = v3
  v3 = getXMLFloat(xmlFile, key .. "#price")
  self.fixedPrice = v3
  if self.fixedPrice == nil then
    v4 = getXMLFloat(xmlFile, key .. "#priceScale")
    v3 = Utils.getNoNil(v4, 1)
    self.priceFactor = v3
  end
  self.price = self.fixedPrice or 1
  self:updatePrice()
  v3 = v3:getRandomIndex()
  self.npcIndex = v3
  local v5 = getXMLInt(xmlFile, key .. "#npcIndex")
  v3 = v3:getNPCByIndex(...)
  if v3 ~= nil then
    self.npcIndex = v3.index
  else
    local v6 = getXMLString(xmlFile, key .. "#npcName")
    v4 = v4:getNPCByName(...)
    if v4 ~= nil then
      self.npcIndex = v4.index
    end
  end
  self.isOwned = false
  v5 = getXMLBool(xmlFile, key .. "#showOnFarmlandsScreen")
  v4 = Utils.getNoNil(v5, true)
  self.showOnFarmlandsScreen = v4
  v5 = getXMLBool(xmlFile, key .. "#defaultFarmProperty")
  v4 = Utils.getNoNil(v5, false)
  self.defaultFarmProperty = v4
  return true
end
function Farmland.delete(v0)
end
function Farmland:setFarmlandIndicatorPosition(xWorldPos, zWorldPos)
  self.xWorldPos = xWorldPos
  self.zWorldPos = zWorldPos
end
function Farmland:setArea(areaInHa)
  self.areaInHa = areaInHa
  if self.fixedPrice == nil then
    self:updatePrice()
  end
end
function Farmland:updatePrice()
  local v3 = v3:getPricePerHa()
  self.price = v3 * self.areaInHa * self.priceFactor
end
function Farmland:getNPC()
  return v1:getNPCByIndex(self.npcIndex)
end
