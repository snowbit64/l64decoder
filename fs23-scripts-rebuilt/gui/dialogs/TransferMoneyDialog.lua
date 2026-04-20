-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TransferMoneyDialog = {CONTROLS = {HEADER_TEXT = "headerText", CONSOLE_AMOUNT = "consoleAmountText"}}
local TransferMoneyDialog_mt = Class(TransferMoneyDialog, DialogElement)
function TransferMoneyDialog.register()
  local v0 = TransferMoneyDialog.new()
  v1:loadGui("dataS/gui/dialogs/TransferMoneyDialog.xml", "TransferMoneyDialog", v0)
  TransferMoneyDialog.INSTANCE = v0
end
function TransferMoneyDialog.show(v0, v1, v2)
  if TransferMoneyDialog.INSTANCE ~= nil then
    TransferMoneyDialog.INSTANCE:setCallback(v0, v1)
    TransferMoneyDialog.INSTANCE:setTargetFarm(v2)
    v4:showDialog("TransferMoneyDialog")
  end
end
function TransferMoneyDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.isBackAllowed = false
  v2.inputDelay = 250
  v2.amount = 0
  v2.optionElements = {}
  v2:registerControls(TransferMoneyDialog.CONTROLS)
  return v2
end
function TransferMoneyDialog:createFromExistingGui(v1)
  local v2 = TransferMoneyDialog.register()
  TransferMoneyDialog.show(self.callbackFunc, self.target, self.farm)
  return v2
end
function TransferMoneyDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self.inputDelay = self.time + 250
  for v4, v5 in pairs(self.optionElements) do
    local v8 = v8:formatMoney(v5)
    v6:setText(...)
  end
  v3 = v3:getFarmId()
  v1 = v1:getFarmById(...)
  self.farm = v1
  self:updateAmount(0)
end
function TransferMoneyDialog:onClickActivate()
  if self.inputDelay < self.time then
    self:sendCallback(self.amount)
    return false
  end
  return true
end
function TransferMoneyDialog:setCallback(callbackFunc, target)
  self.callbackFunc = callbackFunc
  self.target = target
end
function TransferMoneyDialog:setTargetFarm(farm)
  local v5 = v5:getText("button_mp_transferMoney_dialogTitle")
  local v4 = string.format(v5, farm.name)
  v2:setText(...)
  self.farm = farm
end
function TransferMoneyDialog:onClickBack(forceBack)
  if self.inputDelay < self.time then
    self:sendCallback(0)
    return false
  end
  return true
end
function TransferMoneyDialog:sendCallback(value)
  if self.inputDelay < self.time then
    self:close()
    if self.callbackFunc ~= nil then
      if self.target ~= nil then
        self.callbackFunc(self.target, value)
        return
      end
      self.callbackFunc(value)
    end
  end
end
function TransferMoneyDialog:onClickLeft(element)
  self:updateAmount(-1 * self.optionElements[element.parent])
end
function TransferMoneyDialog:onClickRight(element)
  self:updateAmount(self.optionElements[element.parent])
end
function TransferMoneyDialog:updateAmount(diff)
  local v3 = math.max(self.amount + diff, 0)
  local v4 = v4:getBalance()
  local v2 = math.min(...)
  self.amount = v2
  v4 = v4:formatMoney(self.amount)
  v2:setText(...)
end
function TransferMoneyDialog:onCreateScroller(element, amount)
  local v3 = tonumber(amount)
  self.optionElements[element] = v3
end
