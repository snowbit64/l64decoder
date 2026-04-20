-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Brand = nil
BrandManager = {}
local BrandManager_mt = Class(BrandManager, AbstractManager)
function BrandManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function BrandManager:initDataStructures()
  self.numOfBrands = 0
  self.nameToIndex = {}
  self.nameToBrand = {}
  self.indexToBrand = {}
  Brand = self.nameToIndex
end
function BrandManager:loadMapData(missionInfo)
  local v3 = v3:superClass()
  v3.loadMapData(self)
  local xmlFile = loadXMLFile("brandsXML", "dataS/brands.xml")
  while true do
    v4 = string.format("brands.brand(%d)", v3)
    v5 = hasXMLProperty(xmlFile, v4)
    if not v5 then
      break
    end
    v5 = getXMLString(xmlFile, v4 .. "#name")
    v6 = getXMLString(xmlFile, v4 .. "#title")
    v7 = getXMLString(xmlFile, v4 .. "#image")
    v8 = getXMLString(xmlFile, v4 .. "#imageShopOverview")
    v9 = getXMLFloat(xmlFile, v4 .. "#imageOffset")
    if v6 ~= nil then
      v10 = v6:sub(1, 6)
      if v10 == "$l10n_" then
        v12 = v6:sub(7)
        v10 = v10:getText(...)
      end
    end
    self:addBrand(v5, v6, v7, "", false, v8, v9)
  end
  delete(xmlFile)
  return true
end
function BrandManager:addBrand(name, title, imageFilename, baseDir, isMod, imageShopOverview, imageOffset)
  if name ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000000 -> L10
  end
  Logging.warning("Could not register brand. Name is missing or empty!")
  return false
  if title ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000000 -> L21
  end
  Logging.warning("Could not register brand '%s'. Title is missing or empty!", name)
  return false
  if imageFilename ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000000 -> L32
  end
  Logging.warning("Could not register brand '%s'. Image is missing or empty!", name)
  return false
  if baseDir == nil then
    Logging.warning("Could not register brand '%s'. Base directory not defined!", name)
    return false
  end
  if imageShopOverview == nil then
  end
  local v8 = name:upper()
  v8 = ClassUtil.getIsValidIndexName(v8)
  if v8 then
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L118
    self.numOfBrands = self.numOfBrands + 1
    self.nameToIndex[v8] = self.numOfBrands
    local v9 = Utils.getFilename(imageFilename, baseDir)
    v9 = Utils.getFilename(imageShopOverview, baseDir)
    self.nameToBrand[v8] = {index = self.numOfBrands, name = v8, image = v9, imageShopOverview = v9, title = title, isMod = isMod, imageOffset = imageOffset or 0}
    self.indexToBrand[self.numOfBrands] = {index = self.numOfBrands, name = v8, image = v9, imageShopOverview = v9, title = title, isMod = isMod, imageOffset = imageOffset or 0}
    return {index = self.numOfBrands, name = v8, image = v9, imageShopOverview = v9, title = title, isMod = isMod, imageOffset = imageOffset or 0}
    return
  end
  local v13 = tostring(name)
  Logging.warning("Invalid brand name '" .. v13 .. "'! Only capital letters allowed!")
end
function BrandManager:getBrandByIndex(brandIndex)
  if brandIndex ~= nil then
    return self.indexToBrand[brandIndex]
  end
  return nil
end
function BrandManager:getBrandIconByIndex(brandIndex)
  if brandIndex ~= nil and self.indexToBrand[brandIndex] ~= nil then
    return self.indexToBrand[brandIndex].image
  end
  return nil
end
function BrandManager:getBrandByName(brandName)
  if brandName ~= nil then
    local v4 = brandName:upper()
    return self.nameToBrand[v4]
  end
  return nil
end
function BrandManager:getBrandIndexByName(brandName)
  if brandName ~= nil then
    local v2 = ClassUtil.getIsValidIndexName(brandName)
    if v2 then
      local v4 = brandName:upper()
      if self.nameToIndex[v4] == nil then
        Logging.warning(brandName .. "' is an unknown brand! Using Lizard instead!")
        return Brand.LIZARD
      end
      return v2
    end
    Logging.warning("Invalid brand name '" .. brandName .. "'! Only capital letters and underscores allowed. Using Lizard instead.")
    return Brand.LIZARD
  end
  return nil
end
local v1 = BrandManager.new()
g_brandManager = v1
