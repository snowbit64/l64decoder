-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VoteDialog = {CONTROLS = {"stars", "okButton"}}
local VoteDialog_mt = Class(VoteDialog, MessageDialog)
function VoteDialog.register()
  local v0 = VoteDialog.new()
  v1:loadGui("dataS/gui/dialogs/VoteDialog.xml", "VoteDialog", v0)
  VoteDialog.INSTANCE = v0
end
function VoteDialog.show(v0, v1, v2)
  if VoteDialog.INSTANCE ~= nil then
    VoteDialog.INSTANCE:setCallback(v0, v1)
    VoteDialog.INSTANCE:setValue(v2)
    v4:showDialog("VoteDialog")
  end
end
function VoteDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(VoteDialog.CONTROLS)
  v2.value = 0
  v2.isBackAllowed = true
  v2.inputDelay = 250
  return v2
end
function VoteDialog:createFromExistingGui(v1)
  VoteDialog.register()
  VoteDialog.show(self.callbackFunc, self.target, self.value)
end
function VoteDialog:onClickBack(forceBack, usedMenuButton)
  self:close()
  if self.callback ~= nil then
    if self.target ~= nil then
      self.callback(self.target, self.args, nil)
    else
      self.callback(self.args, nil)
    end
  end
  return false
end
function VoteDialog:onClickOk()
  if self.value == 0 then
    return
  end
  if self.inputDelay < self.time then
    self:close()
    if self.callback ~= nil then
      if self.target ~= nil then
        self.callback(self.target, self.value)
      else
        self.callback(self.value)
      end
    end
    return false
  end
  return true
end
function VoteDialog:setCallback(callback, target)
  self.callback = callback
  self.target = target
end
function VoteDialog:setValue(value)
  self.value = value or 5
  self:setStars(self.value)
  if value ~= 0 then
  end
  v2:setDisabled(true)
  v2:setFocus(self.stars[value])
end
function VoteDialog:onStarHighlight(element)
  local focus = self:getValueForElement(element)
  self:setStars(focus)
end
function VoteDialog:onStarHighlightRemove()
  self:setStars(self.value)
end
function VoteDialog:onStarFocus(element)
  local focus = self:getValueForElement(element)
  self:setValue(focus)
end
function VoteDialog:onStarClick(element)
  local v4 = self:getValueForElement(element)
  self:setValue(...)
end
function VoteDialog:getValueForElement(element)
  for v5, v6 in ipairs(self.stars) do
    if not (element == v6) then
      continue
    end
    return v5
  end
  return nil
end
function VoteDialog:setStars(value)
  -- TODO: structure LOP_FORNPREP (pc 3, target 12)
  v5:applyProfile("voteDialogStarButtonActive")
  -- TODO: structure LOP_FORNLOOP (pc 11, target 4)
  -- TODO: structure LOP_FORNPREP (pc 15, target 24)
  v5:applyProfile("voteDialogStarButton")
  -- TODO: structure LOP_FORNLOOP (pc 23, target 16)
end
