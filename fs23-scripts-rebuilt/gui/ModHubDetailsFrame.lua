-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModHubDetailsFrame = {}
local ModHubDetailsFrame_mt = Class(ModHubDetailsFrame, TabbedMenuFrameElement)
ModHubDetailsFrame.CONTROLS = {"breadcrumbs", "pageInformation", "modPreviewImage", "modAuthor", "modDescription", "modInfoVersion", "modInfoSize", "modInfoHash", "modInfoHashLabel", "modInfoSizeLabel", "descriptionLayout", "textSlider", "modInfoBox", "headerText", "spaceUsageLabel"}
function ModHubDetailsFrame.register()
  local v0 = ModHubDetailsFrame.new()
  v1:loadGui("dataS/gui/ModHubDetailsFrame.xml", "ModHubDetailsFrame", v0, true)
end
function ModHubDetailsFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ModHubDetailsFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  v2.currentModInfo = nil
  v2.scrollInputDelay = 0
  v2.scrollInputDelayDir = 0
  return v2
end
function ModHubDetailsFrame:createFromExistingGui(v1)
  local v2 = ModHubDetailsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  v2.hasCustomMenuButtons = self.hasCustomMenuButtons
  return v2
end
function ModHubDetailsFrame:initialize()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText(ModHubDetailsFrame.L10N_SYMBOL.BUTTON_BUY)
  self.buyButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onButtonBuy()
  end}
  v2 = v2:getText(ModHubDetailsFrame.L10N_SYMBOL.BUTTON_INSTALL)
  self.installButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onButtonInstall()
  end}
  v2 = v2:getText(ModHubDetailsFrame.L10N_SYMBOL.BUTTON_UNINSTALL)
  self.uninstallButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = function()
    self:onButtonUninstall()
  end}
  v2 = v2:getText(ModHubDetailsFrame.L10N_SYMBOL.BUTTON_UPDATE)
  self.updateButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onButtonUpdate()
  end}
  v2 = v2:getText(ModHubDetailsFrame.L10N_SYMBOL.BUTTON_DOWNLOAD)
  self.downloadButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onButtonDownload()
  end}
  v2 = v2:getText(ModHubDetailsFrame.L10N_SYMBOL.BUTTON_VOTE)
  self.voteButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
    self:onButtonVote()
  end}
  v2 = v2:getText(ModHubDetailsFrame.L10N_SYMBOL.BUTTON_SCREENSHOTS)
  self.screenshotsButtonInfo = {inputAction = InputAction.MENU_EXTRA_1, text = v2, callback = function()
    self:onButtonScreenshots()
  end}
end
function ModHubDetailsFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  v1:setFocus(self.itemsList)
  v1:setModInstallFailedCallback(self.onModInstallFailed, self)
  v1:setDependendModIstallFailedCallback(self.onDependendModInstallFailed, self)
  v1:setAddedToDownloadCallback(self.onAddedToDownload, self)
  v1:setUninstallFailedCallback(self.onUninstallFailed, self)
  v1:setUninstalledCallback(self.onUninstalled, self)
  v1:setVotedCallback(self.onVoted, self)
end
function ModHubDetailsFrame:getMenuButtonInfo()
  local v4 = v4:getId()
  local v2 = v2:getModInfo(...)
  local v3 = v2:getIsUpdate()
  v4 = v2:getIsInstalled()
  local v5 = v2:getIsDownload()
  local v6 = v2:getIsDLC()
  local v7 = v2:getIsExternal()
  if not v7 then
    v7 = v2:getIsFailed()
    if not v7 then
      -- if v5 then goto L76 end
      if v4 then
        -- if not v3 then goto L76 end
      end
    end
    if v3 then
      if v6 then
        -- if GS_IS_CONSOLE_VERSION then goto L76 end
      end
      table.insert(v1, self.updateButtonInfo)
    elseif v6 then
      v7 = v2:getPriceString()
      v7 = v7:len()
      -- if 1 >= v7 then goto L76 end
      table.insert(v1, self.buyButtonInfo)
    else
      table.insert(v1, self.installButtonInfo)
    end
  end
  table.insert(v1, self.backButtonInfo)
  v7 = v2:getIsExternal()
  if not v7 and v4 and not v6 then
    table.insert(v1, self.voteButtonInfo)
  end
  if not v4 then
    -- if not v5 then goto L109 end
  end
  if not v6 then
    table.insert(v1, self.uninstallButtonInfo)
  end
  v7 = v2:getIsExternal()
  if not v7 then
    table.insert(v1, self.screenshotsButtonInfo)
  end
  return v1
end
function ModHubDetailsFrame:setModInfo(modInfo)
  self.currentModInfo = modInfo
  local v4 = modInfo:getDescription()
  v2:setText(...)
  local v2, v3 = v2:getTextHeight()
  v4:setSize(nil, v2)
  v4:invalidateLayout()
  v4:scrollTo(0, true)
  local v6 = modInfo:getAuthor()
  v4:setText(...)
  v4 = modInfo:getIsDLC()
  hash:setVisible(not v4)
  hash:setVisible(not v4)
  local hash = modInfo:getHash()
  if not v4 and hash ~= "" then
  end
  v7:setVisible(v6)
  v7:setVisible(v6)
  local v11 = hash:len()
  local v7 = hash:sub(1, v11 / 2)
  local v12 = hash:len()
  local v8 = hash:sub(v12 / 2 + 1)
  v9:setText(v7 .. "\n" .. v8)
  if not v4 then
    v11 = modInfo:getFilesize()
    v12 = string.format("%.02f MB", v11 / 1024 / 1024)
    v10:setText(...)
  end
  v11 = modInfo:getVersionString()
  v9:setText(...)
  local v9 = modInfo:getName()
  self.title = v9
  v9:setText(self.title)
  v12 = modInfo:getScreenshot(1)
  self:setImage(...)
  v12 = modInfo:getScreenshot(2)
  self:setImage(...)
  v12 = modInfo:getScreenshot(3)
  self:setImage(...)
end
function ModHubDetailsFrame.setImage(v0, v1, v2)
  if v2 ~= nil then
    v1:setImageFilename(v2)
    v1:setVisible(true)
    return
  end
  v1:setVisible(false)
end
function ModHubDetailsFrame:setBreadcrumbs(list)
  v2:setBreadcrumbs(list)
end
function ModHubDetailsFrame:getMainElementSize()
  return self.pageInformation.size
end
function ModHubDetailsFrame:getMainElementPosition()
  return self.pageInformation.absPosition
end
function ModHubDetailsFrame:onButtonBuy()
  self:openShop(false)
end
function ModHubDetailsFrame:openShop(isUpdate)
  local v3 = self.currentModInfo:getDLCLink()
  if GS_IS_STEAM_VERSION then
    local v4 = self.currentModInfo:getDLCSteamLink()
  end
  v4 = storeHasNativeGUI()
  if v4 then
    v4 = storeShow(v3)
    -- if v4 then goto L41 end
    local v5 = v5:getText("ui_dlcStoreNotConnected")
    InfoDialog.show(v5, self.onStoreFailedOk, self)
    return
  end
  if isUpdate then
  end
  openWebFile(v3, "")
end
function ModHubDetailsFrame:onButtonInstall()
  local v3 = v3:getId()
  local v1 = v1:getDependendMods(...)
  if 0 < #v1 then
    for v6, v7 in ipairs(v1) do
      local v8 = v7:getIsInstalled()
      if not not v8 then
        continue
      end
      if v2 ~= "" then
      end
      local v9 = v7:getName()
    end
    v5 = v5:getText("modHub_dependenciesText")
    v4 = string.format(v5, v2)
    InfoDialog.show(v4, self.installCurrentMod, self, DialogElement.TYPE_INFO)
    return
  end
  self:installCurrentMod()
end
function ModHubDetailsFrame:onButtonUninstall()
  local v2 = self.currentModInfo:getIsInstalled()
  if not v2 then
    v2 = self.currentModInfo:getIsDownload()
    -- if not v2 then goto L40 end
  end
  v2 = v1:getIsDLC()
  if not v2 then
    local v6 = v6:getText("modHub_uninstallModText")
    local v7 = v1:getName()
    local v5 = string.format(...)
    v6 = v6:getText("modHub_uninstallModTitle")
    YesNoDialog.show(...)
  end
end
function ModHubDetailsFrame:uninstallYesNo(yes)
  if yes then
    local v5 = self.currentModInfo:getId()
    v3:uninstall(...)
  end
end
function ModHubDetailsFrame:onButtonUpdate()
  local v1 = v1:getIsDLC()
  if v1 then
    self:openShop(true)
    return
  end
  local v3 = v3:getId()
  v1:update(...)
end
function ModHubDetailsFrame:installCurrentMod()
  local v4 = self.currentModInfo:getId()
  local v2 = v2:getTotalFilesizeKb(...)
  local v3 = v3:getFreeModSpaceKb()
  if v3 < v2 then
    local v6 = v6:getText("modHub_installNoFreeSpace")
    local v5 = string.format(v6, v2, v3)
    InfoDialog.show(...)
    return
  end
  v6 = v1:getId()
  v4:install(...)
end
function ModHubDetailsFrame.onModInstallFailed(v0)
  local v2 = v2:getText("modHub_installFailed")
  InfoDialog.show(...)
end
function ModHubDetailsFrame.onDependendModInstallFailed(v0, v1)
  for v6, v7 in ipairs(v1) do
    if v2 ~= "" then
    end
    local v9 = v7:getName()
  end
  v5 = v5:getText("modHub_installDependenciesFailed")
  v4 = string.format(v5, v2)
  InfoDialog.show(...)
end
function ModHubDetailsFrame:onAddedToDownload()
  local v3 = v3:getText("modHub_addedToDownloads")
  local v4 = v4:getName()
  local v2 = string.format(...)
  InfoDialog.show(v2, nil, nil, DialogElement.TYPE_INFO)
  self:setMenuButtonInfoDirty()
end
function ModHubDetailsFrame:onStoreFailedOk()
  self:changeScreen(ModHubScreen)
end
function ModHubDetailsFrame.onUninstallFailed(v0)
  local v2 = v2:getText("modHub_uninstallModFailed")
  InfoDialog.show(...)
end
function ModHubDetailsFrame:onUninstalled()
  local v2 = v2:getText("modHub_uninstallModSuccess")
  InfoDialog.show(v2, nil, nil, DialogElement.TYPE_INFO)
  self:setMenuButtonInfoDirty()
end
function ModHubDetailsFrame:onButtonVote()
  local v3 = v3:getId()
  local v1 = v1:getVote(...)
  if v1 ~= 0 then
    -- if v1 then goto L15 end
  end
  VoteDialog.show(self.onVote, self, 0)
end
function ModHubDetailsFrame.onButtonDownload(v0)
end
function ModHubDetailsFrame:onVote(value)
  if value ~= nil then
    local v4 = v4:getId()
    v2:vote(v4, value)
  end
end
function ModHubDetailsFrame.onVoted(v0)
  local v2 = v2:getText("modHub_rateSuccess")
  InfoDialog.show(...)
end
function ModHubDetailsFrame:inputEvent(action, value, eventUsed)
  if action == InputAction.MENU_AXIS_UP_DOWN and g_analogStickVTolerance >= value then
  end
  if action == InputAction.MENU_AXIS_UP_DOWN and value >= -g_analogStickVTolerance then
  end
  if not v4 then
    -- if not v5 then goto L59 end
  end
  if v4 then
  else
  end
  if v6 == self.scrollInputDelayDir then
    -- if 250 >= g_time - v0.scrollInputDelay then goto L59 end
  end
  self.scrollInputDelayDir = v6
  self.scrollInputDelay = g_time
  local v10 = v10:getValue()
  v7:setValue(v10 + v6 * 5)
  return true
end
function ModHubDetailsFrame:onButtonScreenshots()
  ModHubScreenshotDialog.show(self.currentModInfo)
end
ModHubDetailsFrame.L10N_SYMBOL = {BUTTON_INSTALL = "button_modHubInstall", BUTTON_UNINSTALL = "button_modHubUninstall", BUTTON_UPDATE = "button_modHubUpdate", BUTTON_BUY = "button_modHubBuy", BUTTON_DOWNLOAD = "button_modHubDownload", BUTTON_VOTE = "button_rate", BUTTON_SCREENSHOTS = "button_screenshots"}
