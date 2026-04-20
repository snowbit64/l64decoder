-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShopOthersFrame = {}
local ShopOthersFrame_mt = Class(ShopOthersFrame, TabbedMenuFrameElement)
ShopOthersFrame.CONTROLS = {"categoryHeaderIcon", "categoryHeaderText", "otherShopsList"}
function ShopOthersFrame.register()
  local v0 = ShopOthersFrame.new()
  v1:loadGui("dataS/gui/ShopOthersFrame.xml", "ShopOthersFrame", v0, true)
end
function ShopOthersFrame.new(subclass_mt, shopController)
  if not shopController then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ShopOthersFrame.CONTROLS)
  v2.headerLabelText = ""
  v2.headerIconUVs = {}
  local v5 = v5:getText("ui_animalDealerScreen")
  local v6 = v6:getText("ui_wardrobeScreen")
  local v7 = v7:getText("ui_constructionScreen")
  local v8 = v8:getText("ui_farmlandScreen")
  v2.otherShops = {{title = v5, iconFilename = "dataS/menu/storePacks/store_animalDealer.png", callback = function()
    subclass_mt:onOpenAnimalDealer()
  end}, {title = v6, iconFilename = "dataS/menu/storePacks/store_characterCustomization.png", callback = function()
    subclass_mt:onOpenWardrobeScreen()
  end}, {title = v7, iconFilename = "dataS/menu/storePacks/store_construction.png", callback = function()
    subclass_mt:onOpenConstructionScreen()
  end}, {title = v8, iconFilename = "dataS/menu/storePacks/store_farmlands.png", callback = function()
    subclass_mt:onOpenFarmlandScreen()
  end}}
  return v2
end
function ShopOthersFrame:createFromExistingGui(v1)
  local v2 = ShopOthersFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function ShopOthersFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function ShopOthersFrame:initialize(categorySelectedCallback, headerIconUVs, headerText)
  self.headerLabelText = headerText
  self.headerIconUVs = headerIconUVs
  if not categorySelectedCallback then
  end
  self.notifySelectedCategoryCallback = v4
  if self.categoryHeaderText ~= nil then
    local v7 = unpack(headerIconUVs)
    v4:setImageUVs(...)
    v4:setText(headerText)
    v4:updateAbsolutePosition()
  end
  self:setTitle(headerText)
end
function ShopOthersFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self.notifySelectedCategoryCallback(nil)
  v1:reloadData()
  self:setSoundSuppressed(true)
  v1:setFocus(self.otherShopsList)
  self:setSoundSuppressed(false)
end
function ShopOthersFrame:onFrameClose()
  local v2 = v2:superClass()
  v2.onFrameClose(self)
  self:setSoundSuppressed(true)
end
function ShopOthersFrame:onOpenCategory()
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
  if self.otherShops[self.otherShopsList.selectedIndex] ~= nil then
    self.otherShops[self.otherShopsList.selectedIndex].callback()
  end
end
function ShopOthersFrame:onOpenAnimalDealer()
  local v1 = v1:getPlaceablesByFarm()
  if #v1 == 0 then
    local v3 = v3:getText("shop_messageNoHusbandries")
    InfoDialog.show(...)
    return
  end
  if 1 < #v1 then
    local v5 = v5:getText("category_animalpens")
    AnimalDialog.show(self.onSelectedHusbandry, self, v5, v1)
    return
  end
  self:onSelectedHusbandry(v1[1])
end
function ShopOthersFrame.onSelectedHusbandry(v0, v1)
  if v1 ~= nil then
    local v2 = AnimalScreenDealerFarm.new(v1)
    v2:init()
    v3:setController(v2)
    v3:showGui("AnimalScreen")
  end
end
function ShopOthersFrame.onOpenWardrobeScreen(v0)
  v1:changeScreen(nil, WardrobeScreen)
end
function ShopOthersFrame.onOpenConstructionScreen(v0)
  v1:changeScreen(nil, ConstructionScreen)
end
function ShopOthersFrame.onOpenFarmlandScreen(v0)
  v1:changeScreen(nil, InGameMenu)
  v1:goToPage(g_inGameMenu.pageMapOverview)
  v1:setMode(InGameMenuMapFrame.MODE_FARMLANDS)
end
function ShopOthersFrame:onListSelectionChanged(list, section, index)
  self.notifySelectedCategoryCallback(index)
end
function ShopOthersFrame:getNumberOfItemsInSection(list, section)
  return #self.otherShops
end
function ShopOthersFrame:populateCellForItemInSection(list, section, index, cell)
  local v6 = cell:getAttribute("icon")
  v6:setImageFilename(self.otherShops[index].iconFilename)
  v6 = cell:getAttribute("title")
  v6:setText(self.otherShops[index].title)
end
function ShopOthersFrame.getTitleForSectionHeader(v0, v1, v2)
  return ""
end
