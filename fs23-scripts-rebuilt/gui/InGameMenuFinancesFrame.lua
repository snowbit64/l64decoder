-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuFinancesFrame = {}
local InGameMenuFinancesFrame_mt = Class(InGameMenuFinancesFrame, TabbedMenuFrameElement)
InGameMenuFinancesFrame.CONTROLS = {"financesList", PAST_DAY_HEADERS = "pastDayHeader", TOTAL_TEXTS = "totalText", BALANCE_TEXT = "balanceText", LOAN_TEXT = "loanText", MAIN_BOX = "mainBox"}
if GS_IS_MOBILE_VERSION then
else
end
v1.PAST_PERIOD_COUNT = v2
if GS_IS_MOBILE_VERSION then
else
end
v1.MAX_ITEMS = v2
InGameMenuFinancesFrame.LOAN_STEP = 5000
function InGameMenuFinancesFrame.register()
  local v0 = InGameMenuFinancesFrame.new()
  v1:loadGui("dataS/gui/InGameMenuFinancesFrame.xml", "FinancesFrame", v0, true)
end
function InGameMenuFinancesFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuFinancesFrame.CONTROLS)
  v2.client = nil
  v2.environment = nil
  v2.playerFarm = nil
  v2.currentMoneyUnitText = ""
  v2.updateTimeFinancesStats = 0
  if Platform.gameplay.hasLoans then
    v2.backButtonInfo = {inputAction = InputAction.MENU_BACK}
    v2.borrowButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = "", callback = function()
      v0:onButtonBorrow()
    end}
    v2.repayButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = "", callback = function()
      v0:onButtonRepay()
    end}
    v2.menuButtonInfo = {v2.backButtonInfo, v2.borrowButtonInfo, v2.repayButtonInfo}
    v2.hasCustomMenuButtons = true
  end
  return v2
end
function InGameMenuFinancesFrame:createFromExistingGui(v1)
  local v2 = InGameMenuFinancesFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuFinancesFrame:onFrameOpen(element)
  local v3 = v3:superClass()
  v3.onFrameOpen(self)
  self:updateMoneyUnit()
  self:updateFinances()
  self:updateFinancesLoanButtons()
  v2:subscribe(PlayerPermissionsEvent, self.updateFinancesLoanButtons, self)
  v2:subscribe(ChangeLoanEvent, self.updateFinances, self)
  v2:setFocus(self.financesList)
end
function InGameMenuFinancesFrame.onFrameClose(v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
  v1:unsubscribeAll(v0)
end
function InGameMenuFinancesFrame.onClose(v0)
  local v2 = v2:superClass()
  v2.onClose(v0)
  v1:showMoneyChange(MoneyType.LOAN)
end
function InGameMenuFinancesFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:getIsServer()
  if not v2 and self.updateTimeFinancesStats < g_currentMission.time then
    self.updateTimeFinancesStats = g_currentMission.time + 5000
    v2 = v2:getFarmById(g_currentMission.player.farmId)
    if v2.stats.financesHistoryVersionCounter ~= v2.stats.financesHistoryVersionCounterLocal then
      v2.stats.financesHistoryVersionCounterLocal = v2.stats.financesHistoryVersionCounter
      -- TODO: structure LOP_FORNPREP (pc 58, target 74)
      local v6 = v6:getServerConnection()
      local v8 = FinanceStatsEvent.new(1, v2.farmId)
      v6:sendEvent(...)
      -- TODO: structure LOP_FORNLOOP (pc 73, target 59)
    end
  end
end
function InGameMenuFinancesFrame:setClient(client)
  self.client = client
end
function InGameMenuFinancesFrame:setEnvironment(environment)
  self.environment = environment
end
function InGameMenuFinancesFrame:setPlayerFarm(farm)
  self.playerFarm = farm
end
function InGameMenuFinancesFrame:updateFinances()
  -- TODO: structure LOP_FORNPREP (pc 10, target 26)
  local v8 = v8:formatPeriod(self.environment.currentPeriod - 1, false)
  v6:setText(...)
  -- TODO: structure LOP_FORNLOOP (pc 25, target 11)
  local v4 = v4:formatPeriod(self.environment.currentPeriod, false)
  v2:setText(...)
  v2:reloadData()
  self:updateFinancesFooter(self.playerFarm.stats.finances, self.playerFarm.stats.financesHistory)
  self:updateFinancesLoanButtons()
end
function InGameMenuFinancesFrame:updateFinancesLoanButtons()
  if Platform.gameplay.hasLoans then
    local allowChangeLoan = self:hasPlayerLoanPermission()
    if self.playerFarm.loan < self.playerFarm.loanMax then
    end
    if 0 < self.playerFarm.loan and InGameMenuFinancesFrame.LOAN_STEP <= self.playerFarm.money then
    end
    self.borrowButtonInfo.disabled = not v2
    self.repayButtonInfo.disabled = not v3
    self:setMenuButtonInfoDirty()
  end
end
function InGameMenuFinancesFrame:updateMoneyUnit()
  local v1 = v1:getCurrencySymbol(true)
  self.currentMoneyUnitText = v1
  if Platform.gameplay.hasLoans then
    v1 = v1:getText(InGameMenuFinancesFrame.L10N_SYMBOL.BUTTON_BORROW)
    local v2 = string.gsub(v1, InGameMenuFinancesFrame.L10N_SYMBOL.CURRENCY, self.currentMoneyUnitText)
    self.borrowButtonInfo.text = v2
    local v3 = v3:getText(InGameMenuFinancesFrame.L10N_SYMBOL.BUTTON_REPAY)
    local v4 = string.gsub(v3, InGameMenuFinancesFrame.L10N_SYMBOL.CURRENCY, self.currentMoneyUnitText)
    self.repayButtonInfo.text = v4
  end
end
function InGameMenuFinancesFrame:updateFinancesFooter(currentFinances, pastFinances)
  self:updateBalance()
  if Platform.gameplay.hasLoans then
    self:updateLoan()
  end
  self:updateDayTotals(currentFinances, pastFinances)
end
function InGameMenuFinancesFrame:updateBalance()
  local v1 = v1:getBalance()
  local v2 = v2:formatMoney(v1, 0, false)
  local v4 = math.floor(v1)
  if v4 <= -1 then
  end
  v4:applyProfile(v3, true)
  v4:setText(v2 .. " " .. self.currentMoneyUnitText)
end
function InGameMenuFinancesFrame:updateDayTotals(currentFinances, pastFinances)
  -- TODO: structure LOP_FORNPREP (pc 7, target 85)
  if 1 < 1 then
  end
  if v6 ~= nil then
    for v12, v13 in pairs(v6.statNames) do
    end
    v9 = v9:formatMoney(v8, 0, false)
    v10 = math.floor(v8)
    if v10 <= -1 then
    end
    v10:setText(v9 .. " " .. self.currentMoneyUnitText)
  else
    v8:setText("")
  end
  v8:applyProfile(v7, true)
  -- TODO: structure LOP_FORNLOOP (pc 84, target 8)
end
function InGameMenuFinancesFrame:updateLoan()
  local v1 = v1:getLoan()
  local v2 = v2:formatMoney(-v1, 0, false)
  if 0 < v1 then
  end
  v4:applyProfile(v3, true)
  v4:setText(v2 .. " " .. self.currentMoneyUnitText)
end
function InGameMenuFinancesFrame.hasPlayerLoanPermission(v0)
  return v1:getHasPlayerPermission("farmManager")
end
function InGameMenuFinancesFrame:getMainElementSize()
  return self.mainBox.size
end
function InGameMenuFinancesFrame:getMainElementPosition()
  return self.mainBox.absPosition
end
function InGameMenuFinancesFrame:onButtonBorrow()
  local v1 = self:hasPlayerLoanPermission()
  if v1 then
    v1 = v1:getServerConnection()
    local v3 = ChangeLoanEvent.new(InGameMenuFinancesFrame.LOAN_STEP, self.playerFarm.farmId)
    v1:sendEvent(...)
  end
end
function InGameMenuFinancesFrame:onButtonRepay()
  local v1 = self:hasPlayerLoanPermission()
  if v1 then
    v1 = v1:getServerConnection()
    local v3 = ChangeLoanEvent.new(-InGameMenuFinancesFrame.LOAN_STEP, self.playerFarm.farmId)
    v1:sendEvent(...)
  end
end
function InGameMenuFinancesFrame.getNumberOfItemsInSection(v0, v1, v2)
  return #FinanceStats.statNames
end
function InGameMenuFinancesFrame:populateCellForItemInSection(list, section, index, cell)
  local v10 = cell:getAttribute("name")
  v10:setText(FinanceStats.statNamesI18n[FinanceStats.statNames[index]])
  local v12 = cell:getAttribute("todayMinusFour")
  self:setPastDayFinances(v12, self.playerFarm.stats.financesHistory, 4, FinanceStats.statNames[index])
  v12 = cell:getAttribute("todayMinusThree")
  self:setPastDayFinances(v12, self.playerFarm.stats.financesHistory, 3, FinanceStats.statNames[index])
  v12 = cell:getAttribute("todayMinusTwo")
  self:setPastDayFinances(v12, self.playerFarm.stats.financesHistory, 2, FinanceStats.statNames[index])
  v12 = cell:getAttribute("todayMinusOne")
  self:setPastDayFinances(v12, self.playerFarm.stats.financesHistory, 1, FinanceStats.statNames[index])
  v12 = cell:getAttribute("today")
  self:setPastDayFinances(v12, self.playerFarm.stats.finances, 0, FinanceStats.statNames[index])
end
function InGameMenuFinancesFrame:setPastDayFinances(cell, financesData, dayIndex, statsName)
  if InGameMenuFinancesFrame.PAST_PERIOD_COUNT < dayIndex then
    return
  end
  if 0 < dayIndex then
  end
  if v7 ~= nil then
    local v9 = v9:formatMoney(v7[statsName], 0, false)
    local v10 = math.floor(v7[statsName])
    if v10 <= -1 then
    end
  end
  cell:applyProfile(v6, true)
  cell:setText(v5)
end
InGameMenuFinancesFrame.L10N_SYMBOL = {WEEK_DAY_TEMPLATE = "ui_financesDay", BUTTON_BORROW = "button_borrow5000", BUTTON_REPAY = "button_repay5000", CURRENCY = "$CURRENCY_SYMBOL"}
InGameMenuFinancesFrame.PROFILE = {VALUE_CELL_NEUTRAL = "ingameMenuFinancesListItemDay", VALUE_CELL_NEGATIVE = "ingameMenuFinancesListItemDayNegative"}
