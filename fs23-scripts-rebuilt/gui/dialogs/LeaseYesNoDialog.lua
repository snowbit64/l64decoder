-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LeaseYesNoDialog = {CONTROLS = {"costsBaseValue", "costsPerDayValue", "costsPerOperatingHourValue"}}
local LeaseYesNoDialog_mt = Class(LeaseYesNoDialog, YesNoDialog)
function LeaseYesNoDialog.register()
  local v0 = LeaseYesNoDialog.new()
  v1:loadGui("dataS/gui/dialogs/LeaseYesNoDialog.xml", "LeaseYesNoDialog", v0)
  LeaseYesNoDialog.INSTANCE = v0
end
function LeaseYesNoDialog.show(v0, v1, v2, v3, v4, v5)
  if LeaseYesNoDialog.INSTANCE ~= nil then
    LeaseYesNoDialog.INSTANCE:setPrices(v2, v3, v4, v5)
    LeaseYesNoDialog.INSTANCE:setDialogType(DialogElement.TYPE_QUESTION)
    LeaseYesNoDialog.INSTANCE:setCallback(v0, v1)
    v7:showDialog("LeaseYesNoDialog")
  end
end
function LeaseYesNoDialog.new(target, custom_mt)
  local v3 = v3:superClass()
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(LeaseYesNoDialog.CONTROLS)
  return v2
end
function LeaseYesNoDialog:createFromExistingGui(v1)
  LeaseYesNoDialog.register()
  LeaseYesNoDialog.show(self.callbackFunc, self.target, self.costsBase, self.initialCosts, self.costsPerOperatingHour, self.costsPerDay)
end
function LeaseYesNoDialog:setPrices(costsBase, initialCosts, costsPerOperatingHour, costsPerDay)
  v5:setValue(costsBase)
  v5:setValue(costsPerDay)
  v5:setValue(costsPerOperatingHour)
  local v6 = v6:getText("shop_doYouWantToLease")
  local v7 = v7:formatMoney(initialCosts, 0, true, true)
  local v5 = string.format(...)
  self.leaseText = v5
  v5:setText(self.leaseText)
  self.costsBase = costsBase
  self.initialCosts = initialCosts
  self.costsPerOperatingHour = costsPerOperatingHour
  self.costsPerDay = costsPerDay
end
