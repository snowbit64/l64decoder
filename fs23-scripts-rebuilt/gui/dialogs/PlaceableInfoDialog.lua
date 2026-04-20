-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableInfoDialog = {CONTROLS = {"icon", "titleText", "priceText", "ageText", "sellButton", "renameButton"}}
local PlaceableInfoDialog_mt = Class(PlaceableInfoDialog, DialogElement)
function PlaceableInfoDialog.register()
  local v0 = PlaceableInfoDialog.new()
  v1:loadGui("dataS/gui/dialogs/PlaceableInfoDialog.xml", "PlaceableInfoDialog", v0)
  PlaceableInfoDialog.INSTANCE = v0
end
function PlaceableInfoDialog.show(v0, v1)
  if PlaceableInfoDialog.INSTANCE ~= nil then
    PlaceableInfoDialog.INSTANCE:setCallback(v0)
    PlaceableInfoDialog.INSTANCE:setPlaceable(v1)
    v3:showDialog("PlaceableInfoDialog")
  end
end
function PlaceableInfoDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(PlaceableInfoDialog.CONTROLS)
  v2.inputDelay = 0
  return v2
end
function PlaceableInfoDialog:createFromExistingGui(v1)
  PlaceableInfoDialog.register()
  PlaceableInfoDialog.show(self.callbackFunc, self.placeable)
end
function PlaceableInfoDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self.inputDelay = self.time + 250
end
function PlaceableInfoDialog.onClose(v0)
  v1:unsubscribe(SellPlaceableEvent, v0)
  local v2 = v2:superClass()
  v2.onClose(v0)
end
function PlaceableInfoDialog:setPlaceable(placeable)
  local name = placeable:getName()
  local v3, v4 = placeable:getSellPrice()
  local v5 = v5:formatMoney(v3)
  local v8 = v8:getFarmId()
  local v6 = placeable:getCanBeRenamedByFarm(...)
  local v7 = v7:getHasPlayerPermission("buyPlaceable")
  local v9 = placeable:canBeSold()
  if v9 and placeable.storeItem.canBeSold then
    local v10 = v10:getFarmId()
    local v11 = placeable:getOwnerFarmId()
    if v10 ~= v11 then
    end
  end
  v10 = v10:getHasPlayerPermission(Farm.PERMISSION.SELL_PLACEABLE)
  self.placeable = placeable
  if v8 ~= nil then
    v11:setImageFilename(v8)
    v11:setVisible(true)
  else
    v11:setVisible(false)
  end
  v11:setText(name)
  v11:setText(v5)
  local v14 = v14:getText("shop_age")
  local v15 = string.format("%d", placeable.age)
  local v13 = string.format(...)
  v11:setText(...)
  v11:setVisible(v9)
  v11:setDisabled(not v10)
  v11:setVisible(v6)
  v11:setDisabled(not v7)
  v11:invalidateLayout()
  v11:subscribe(SellPlaceableEvent, self.onPlaceableDestroyed, self)
  self.placeable = placeable
end
function PlaceableInfoDialog:setCallback(callbackFunc, target, args)
  self.callbackFunc = callbackFunc
  self.target = target
  self.callbackArgs = args
end
function PlaceableInfoDialog:onClickBack()
  if self.inputDelay < self.time then
    self:sendCallback(false)
    self:close()
    return false
  end
  return true
end
function PlaceableInfoDialog:sendCallback(didSell)
  v2:unsubscribe(SellPlaceableEvent, self)
  if self.callbackFunc ~= nil then
    if self.target ~= nil then
      self.callbackFunc(self.target, didSell, self.callbackArgs)
      return
    end
    self.callbackFunc(didSell, self.callbackArgs)
  end
end
function PlaceableInfoDialog:onClickSell()
  local v1, v2 = v1:getSellPrice()
  local v4 = v4:getText("ui_constructionSellConfirmation")
  local v5 = v5:getName()
  local v6 = v6:formatMoney(v1, 0, true, true)
  local v3 = string.format(...)
  YesNoDialog.show(function(self)
    if self then
      local v1 = v1:getServerConnection()
      local v3 = SellPlaceableEvent.new(u0.placeable, nil, u1)
      v1:sendEvent(...)
    end
  end, nil, v3)
end
function PlaceableInfoDialog:onClickRename()
  local v1 = v1:getText("button_changeName")
  local v2 = v2:getName()
  local v4 = v4:getText("ui_enterName")
  local v5 = v5:getText("ui_enterName")
  local v6 = v6:getText("button_change")
  TextInputDialog.show(function(self, v1)
    if v1 then
      local v2 = v2:getHasPlayerPermission("buyPlaceable")
      if not v2 then
        local v3 = v3:getText("shop_messageNoPermissionGeneral")
        InfoDialog.show(v3, nil, nil, DialogElement.TYPE_WARNING)
        return
      end
      v2 = self:len()
      if v2 == 0 then
      end
      v2:setName(self)
      v2:unsubscribe(SellPlaceableEvent, u0)
      v2:setPlaceable(u0.placeable)
    end
  end, nil, v2, v4, v5, nil, v6, nil, v1)
end
function PlaceableInfoDialog:onPlaceableDestroyed()
  self:sendCallback(true)
  self:close()
end
