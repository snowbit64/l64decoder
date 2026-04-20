-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SellItemDialog = {CONTROLS = {HEADER_TEXT = "headerText", ITEM_IMAGE = "dialogImageElement", ITEM_NAME = "dialogItemNameElement", ITEM_PRICE = "dialogItemPriceElement"}}
local SellItemDialog_mt = Class(SellItemDialog, YesNoDialog)
function SellItemDialog.register()
  local v0 = SellItemDialog.new()
  v1:loadGui("dataS/gui/dialogs/SellItemDialog.xml", "SellItemDialog", v0)
  SellItemDialog.INSTANCE = v0
end
function SellItemDialog.show(v0, v1, v2, v3, v4)
  if SellItemDialog.INSTANCE ~= nil then
    SellItemDialog.INSTANCE:setItem(v2, v3, v4)
    SellItemDialog.INSTANCE:setCallback(v0, v1)
    v6:showDialog("SellItemDialog")
  end
end
function SellItemDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.selectedFillType = nil
  v2.areButtonsDisabled = false
  v2:registerControls(SellItemDialog.CONTROLS)
  return v2
end
function SellItemDialog:createFromExistingGui(v1)
  SellItemDialog.register()
  SellItemDialog.show(self.callbackFunc, self.target, self.item, self.item.price, self.storeItem)
end
function SellItemDialog:setItem(item, price, storeItem)
  local v8 = Utils.getNoNil(price, 0)
  local v6 = v6:formatMoney(v8, 0, true, true)
  if item ~= nil then
    if not storeItem then
      local v7 = v7:getItemByXMLFilename(item.configFileName)
    end
    if v7 ~= nil then
    end
    if item.getFullName ~= nil then
      v7 = item:getFullName()
    elseif item.getName ~= nil then
      v7 = item:getName()
    end
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L65
    v7 = item:getImageFilename()
  elseif storeItem ~= nil then
  end
  v7:setImageFilename(v4)
  v7:setText(v5)
  v7 = v7:getText("ui_sellItem")
  if item ~= nil then
    -- if v1.propertyState ~= Vehicle.PROPERTY_STATE_LEASED then goto L106 end
    v8 = v8:getText("button_return")
    v8:setVisible(false)
  else
    v8:setVisible(true)
  end
  v8:setText(v7)
  v8:setText(v6)
  self.item = item
  self.storeItem = storeItem
end
