-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DialogElement = {TYPE_LOADING = 0, TYPE_QUESTION = 1, TYPE_WARNING = 2, TYPE_KEY = 3, TYPE_INFO = 4, CONTROLS = {"dialogCircle", "dialogElement", ICON_LOADING_ELEMENT = "iconLoadingElement", ICON_QUESTION_ELEMENT = "iconQuestionElement", ICON_WARNING_ELEMENT = "iconWarningElement", ICON_KEY_ELEMENT = "iconKeyElement", ICON_INFO_ELEMENT = "iconInfoElement"}, DIALOG_CIRCLE_PROFILE = "dialogCircle", DIALOG_CIRCLE_PROFILE_WARNING = "dialogCircleWarning"}
{}[DialogElement.TYPE_LOADING] = DialogElement.CONTROLS.ICON_LOADING_ELEMENT
{}[DialogElement.TYPE_QUESTION] = DialogElement.CONTROLS.ICON_QUESTION_ELEMENT
{}[DialogElement.TYPE_WARNING] = DialogElement.CONTROLS.ICON_WARNING_ELEMENT
{}[DialogElement.TYPE_KEY] = DialogElement.CONTROLS.ICON_KEY_ELEMENT
{}[DialogElement.TYPE_INFO] = DialogElement.CONTROLS.ICON_INFO_ELEMENT
local DialogElement_mt = Class(DialogElement, ScreenElement)
function DialogElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.isCloseAllowed = true
  v2:registerControls(DialogElement.CONTROLS)
  return v2
end
function DialogElement:close()
  v1:closeDialogByName(self.name)
end
function DialogElement:onClickBack(forceBack, usedMenuButton)
  if not self.isCloseAllowed then
    -- if not v1 then goto L10 end
  end
  if not usedMenuButton then
    self:close()
    return false
  end
  return true
end
function DialogElement:setDialogType(dialogType)
  local v2 = Utils.getNoNil(dialogType, DialogElement.TYPE_WARNING)
  self.dialogType = v2
  for v5, v6 in pairs(u0) do
    if not self[v6] then
      continue
    end
    if v5 ~= dialogType then
    end
    v7:setVisible(true)
  end
  if self.dialogCircle ~= nil then
    if dialogType == DialogElement.TYPE_LOADING then
    end
    v2:setVisible(true)
  end
end
function DialogElement:setIsCloseAllowed(isAllowed)
  self.isCloseAllowed = isAllowed
end
function DialogElement:getBlurArea()
  if self.dialogElement == nil then
    return nil
  end
  return self.dialogElement.absPosition[1], self.dialogElement.absPosition[2], self.dialogElement.absSize[1], self.dialogElement.absSize[2]
end
