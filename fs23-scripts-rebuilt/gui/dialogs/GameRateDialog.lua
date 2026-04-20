-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GameRateDialog = {CONTROLS = {"okButton", "stars", "ratingLayout"}}
local GameRateDialog_mt = Class(GameRateDialog, MessageDialog)
function GameRateDialog.register()
  local v0 = GameRateDialog.new()
  v1:loadGui("dataS/gui/dialogs/GameRateDialog.xml", "GameRateDialog", v0)
end
function GameRateDialog.show()
  v0:showDialog("GameRateDialog")
end
function GameRateDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.isBackAllowed = false
  v2.inputDelay = 250
  v2.value = 0
  v2:registerControls(GameRateDialog.CONTROLS)
  return v2
end
function GameRateDialog.createFromExistingGui(v0, v1)
  GameRateDialog.register()
  GameRateDialog.show()
end
function GameRateDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self:setValue(0)
  v1:setFocus(self.ratingLayout)
end
function GameRateDialog.onClose(v0)
  local v2 = v2:superClass()
  v2.onClose(v0)
end
function GameRateDialog:onClickOk()
  self:close()
  openWebFile(Platform.gameRatingURL, "rating=" .. self.value)
  return true
end
function GameRateDialog:onClickBack()
  self:close()
  return true
end
function GameRateDialog.onStarHighlight(v0, v1)
  v2:setFocus(v1)
end
function GameRateDialog:onStarHighlightRemove()
  self:setStars(self.value)
end
function GameRateDialog:onStarFocus(element)
  local focus = self:getValueForElement(element)
  self:setValue(focus)
end
function GameRateDialog:onStarClick(element)
  local v4 = self:getValueForElement(element)
  self:setValue(...)
end
function GameRateDialog:setValue(value)
  self.value = value or 5
  self:setStars(self.value)
  if self.stars ~= 0 then
    v2:setFocus(self.stars[value])
  end
  if self.value ~= 0 then
  end
  v2:setDisabled(true)
end
function GameRateDialog:setStars(value)
  -- TODO: structure LOP_FORNPREP (pc 3, target 12)
  v5:applyProfile("gameRateDialogStarButtonActive")
  -- TODO: structure LOP_FORNLOOP (pc 11, target 4)
  -- TODO: structure LOP_FORNPREP (pc 15, target 24)
  v5:applyProfile("gameRateDialogStarButton")
  -- TODO: structure LOP_FORNLOOP (pc 23, target 16)
end
function GameRateDialog:getValueForElement(element)
  for v5, v6 in ipairs(self.stars) do
    if not (element == v6) then
      continue
    end
    return v5
  end
  return nil
end
