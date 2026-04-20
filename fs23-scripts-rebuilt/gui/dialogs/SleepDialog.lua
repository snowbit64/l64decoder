-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SleepDialog = {CONTROLS = {"targetTimeElement"}, MIN_TARGET_TIME = 5, MAX_TARGET_TIME = 9, DEFAULT_TARGET_TIME = 8}
local SleepDialog_mt = Class(SleepDialog, YesNoDialog)
function SleepDialog.register()
  local v0 = SleepDialog.new()
  v1:loadGui("dataS/gui/dialogs/SleepDialog.xml", "SleepDialog", v0)
  SleepDialog.INSTANCE = v0
end
function SleepDialog.show(v0, v1, v2)
  if SleepDialog.INSTANCE ~= nil then
    SleepDialog.INSTANCE:setCallback(v1, v2)
    local v6 = v6:getText("ui_inGameSleep")
    SleepDialog.INSTANCE:setTitle(...)
    SleepDialog.INSTANCE:setText(v0)
    v4:showDialog("SleepDialog")
  end
end
function SleepDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.selectedTargetTime = SleepDialog.DEFAULT_TARGET_TIME
  v2.maxDuration = SleepDialog.DEFAULT_MAX_DURATION
  v2:registerControls(SleepDialog.CONTROLS)
  return v2
end
function SleepDialog:createFromExistingGui(v1)
  SleepDialog.register()
  SleepDialog.show(self.sleepText, self.callbackFunc, self.target)
end
function SleepDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self:updateOptions()
end
function SleepDialog:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  self:setDialogType(DialogElement.TYPE_QUESTION)
  self:setTitle(nil)
  self:setText(nil)
  self:setButtonTexts(self.defaultYesText, self.defaultNoText)
end
function SleepDialog:sendCallback(value)
  if self.inputDelay < self.time then
    self:close()
    if self.callbackFunc ~= nil then
      if self.target ~= nil then
        self.callbackFunc(self.target, value, self.selectedTargetTime)
        return
      end
      self.callbackFunc(value, self.selectedTargetTime)
    end
  end
end
function SleepDialog:updateOptions()
  self.targetTimes = {}
  -- TODO: structure LOP_FORNPREP (pc 13, target 26)
  local v6 = string.format("%d:00", SleepDialog.MIN_TARGET_TIME)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 25, target 14)
  v1:setTexts(self.targetTimes)
  v1:setState(self.selectedTargetTime - SleepDialog.MIN_TARGET_TIME + 1)
end
function SleepDialog:onClickTargetTime(state)
  self.selectedTargetTime = state - 1 + SleepDialog.MIN_TARGET_TIME
end
