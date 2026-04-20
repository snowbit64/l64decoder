-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModHubScreenshotDialog = {CONTROLS = {"list", "headerText", "selectorLeftGamepad", "selectorRightGamepad"}}
local ModHubScreenshotDialog_mt = Class(ModHubScreenshotDialog, DialogElement)
function ModHubScreenshotDialog.register()
  local v0 = ModHubScreenshotDialog.new()
  v1:loadGui("dataS/gui/dialogs/ModHubScreenshotDialog.xml", "ModHubScreenshotDialog", v0)
  ModHubScreenshotDialog.INSTANCE = v0
end
function ModHubScreenshotDialog.show(v0)
  if ModHubScreenshotDialog.INSTANCE ~= nil then
    ModHubScreenshotDialog.INSTANCE:setModInfo(v0)
    v2:showDialog("ModHubScreenshotDialog")
  end
end
function ModHubScreenshotDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ModHubScreenshotDialog.CONTROLS)
  return v2
end
function ModHubScreenshotDialog:createFromExistingGui(v1)
  ModHubScreenshotDialog.register()
  ModHubScreenshotDialog.show(self.modInfo)
end
function ModHubScreenshotDialog:onCreate()
  v1:setDataSource(self)
end
function ModHubScreenshotDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  v1:setSelectedIndex(1)
end
function ModHubScreenshotDialog.onClose(v0)
  local v2 = v2:superClass()
  v2.onClose(v0)
end
function ModHubScreenshotDialog:setModInfo(modInfo)
  local v2 = modInfo:getScreenshots()
  self.filenames = v2
  v2:reloadData()
  local v4 = modInfo:getName()
  v2:setText(...)
  self.modInfo = modInfo
end
function ModHubScreenshotDialog:getNumberOfItemsInSection(list, section)
  return #self.filenames
end
function ModHubScreenshotDialog:populateCellForItemInSection(list, section, index, cell)
  local v5 = cell:getAttribute("image")
  v5:setImageFilename(self.filenames[index])
end
function ModHubScreenshotDialog:onListSelectionChanged(list, section, index)
  self:updateSelectors()
end
function ModHubScreenshotDialog:inputEvent(action, value, eventUsed)
  local v5 = v5:superClass()
  local v4 = v5.inputEvent(self, action, value, eventUsed)
  if not v4 then
    if action ~= InputAction.MENU_PAGE_PREV then
      -- if v1 ~= InputAction.MENU_PAGE_NEXT then goto L53 end
    end
    if action == InputAction.MENU_PAGE_PREV then
      local v7 = math.max(self.list.selectedIndex - 1, 1)
      v5:setSelectedIndex(...)
    else
      v5:setSelectedIndex(self.list.selectedIndex + 1)
    end
    self:updateSelectors()
  end
  return eventUsed
end
function ModHubScreenshotDialog:updateSelectors()
  if self.list.selectedIndex == 1 then
  end
  v1:setVisible(true)
  if self.list.selectedIndex == #self.filenames then
  end
  v1:setVisible(true)
end
function ModHubScreenshotDialog:onClickBack(forceBack, usedMenuButton)
  if not usedMenuButton then
    return self:close()
  end
  return true
end
