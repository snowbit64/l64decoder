-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TabbedMenu = {}
local TabbedMenu_mt = Class(TabbedMenu, ScreenElement)
TabbedMenu.PAGE_TAB_TEMPLATE_BUTTON_NAME = "tabButton"
TabbedMenu.CONTROLS = {"pagingTabPrevious", "pagingTabNext", HEADER = "header", PAGING_TAB_LIST = "pagingTabList", PAGING_TAB_TEMPLATE = "pagingTabTemplate", PAGING_BUTTON_LEFT = "pagingButtonLeft", PAGING_BUTTON_RIGHT = "pagingButtonRight", PAGING_ELEMENT = "pagingElement", BUTTONS_PANEL = "buttonsPanel", MENU_BUTTONS = "menuButton"}
TabbedMenu.NO_BUTTON_INFO = {}
{}[InputAction.MENU_ACCEPT] = true
{}[InputAction.MENU_ACTIVATE] = true
{}[InputAction.MENU_CANCEL] = true
{}[InputAction.MENU_BACK] = true
{}[InputAction.MENU_EXTRA_1] = true
{}[InputAction.MENU_EXTRA_2] = true
TabbedMenu.DEFAULT_BUTTON_ACTIONS = {}
TabbedMenu.MONEY_UPDATE_INTERVAL = 300
function TabbedMenu.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(TabbedMenu.CONTROLS)
  v2.pageFrames = {}
  v2.pageTabs = {}
  v2.pageTypeControllers = {}
  v2.pageRoots = {}
  v2.pageEnablingPredicates = {}
  v2.disabledPages = {}
  v2.pageToTabIndex = {}
  v2.currentPageId = 1
  v2.currentPageName = ""
  v2.currentPage = nil
  v2.restorePageIndex = 1
  v2.restorePageScrollIndex = 1
  v2.buttonActionCallbacks = {}
  v2.defaultButtonActionCallbacks = {}
  v2.defaultMenuButtonInfoByActions = {}
  v2.customButtonEvents = {}
  v2.clickBackCallback = u1
  local v3 = v2:makeSelfCallback(v2.onPageNext)
  v2.frameClosePageNextCallback = v3
  v3 = v2:makeSelfCallback(v2.onPagePrevious)
  v2.frameClosePagePreviousCallback = v3
  v2.performBackgroundBlur = false
  return v2
end
function TabbedMenu:delete()
  v1:unsubscribeAll(self)
  v1:delete()
  for v4, v5 in pairs(self.pageTabs) do
    v5:delete()
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function TabbedMenu:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  local v1 = self:makeSelfCallback(self.onButtonBack)
  self.clickBackCallback = v1
  v1:unlinkElement()
  self:setupMenuButtonInfo()
  v1:addElement(self.header)
  if self.pagingElement.profile == "uiInGameMenuPaging" then
    v1:setSize(1 - self.header.absSize[1])
  end
end
function TabbedMenu:exitMenu()
  self:changeScreen(nil)
end
function TabbedMenu:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  self.currentPageId = 1
  self.currentPageName = ""
  self.currentPage = nil
  self.restorePageIndex = 1
  self.restorePageScrollIndex = 1
end
function TabbedMenu:onOpen(element)
  local v3 = v3:superClass()
  v3.onOpen(self)
  if self.performBackgroundBlur then
    v2:pushArea(0, 0, 1, 1)
  end
  if not self.muteSound then
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.PAGING)
  end
  if self.gameState ~= nil then
    v2:setGameState(self.gameState)
  end
  self:setSoundSuppressed(true)
  self:updatePages()
  if self.restorePageIndex ~= nil then
    v2:setState(self.restorePageIndex, true)
    v2:scrollTo(self.restorePageScrollIndex)
  end
  self:setSoundSuppressed(false)
  self:onMenuOpened()
end
function TabbedMenu:onClose(element)
  if self.currentPage ~= nil then
    v2:onFrameClose()
  end
  local v3 = v3:superClass()
  v3.onClose(self)
  if self.performBackgroundBlur then
    v2:popArea()
  end
  v2:storeEventBindings()
  self:clearMenuButtonActions()
  local v2 = v2:getState()
  self.restorePageIndex = v2
  self.restorePageScrollIndex = self.pagingTabList.firstVisibleItem
  if self.gameState ~= nil then
    v2:resetGameState()
  end
end
function TabbedMenu:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if FocusManager.currentGui ~= self.currentPageName then
    local v2 = v2:getIsDialogVisible()
    if not v2 then
      v2:setGui(self.currentPageName)
    end
  end
  if self.currentPage ~= nil then
    v2 = v2:isMenuButtonInfoDirty()
    if v2 then
      local v4 = v4:getMenuButtonInfo()
      self:assignMenuButtonInfo(...)
      v2:clearMenuButtonInfoDirty()
    end
    v2 = v2:isTabbingMenuVisibleDirty()
    if v2 then
      v4 = v4:getTabbingMenuVisible()
      self:updatePagingVisibility(...)
    end
  end
end
function TabbedMenu.setupMenuButtonInfo(v0)
end
function TabbedMenu:addPageTab(frameController, iconFilename, iconUVs)
  local v4 = v4:clone()
  v4:fadeIn()
  v5:addElement(v4)
  self.pageTabs[frameController] = v4
  local v5 = v4:getDescendantByName(TabbedMenu.PAGE_TAB_TEMPLATE_BUTTON_NAME)
  v5:setImageFilename(nil, iconFilename)
  v5:setImageUVs(nil, iconUVs)
  v5.onClickCallback = function()
    self:onPageClicked(u0.activeDetailPage)
    local self = self:getPageIdByElement(u1)
    local frameController = frameController:getPageMappingIndex(self)
    iconFilename:setState(frameController, true)
  end
end
function TabbedMenu.onPageClicked(v0, v1)
end
function TabbedMenu:setPageTabEnabled(pageController, isEnabled)
  self.pageTabs[pageController]:setDisabled(not isEnabled)
  self.pageTabs[pageController]:setVisible(isEnabled)
end
function TabbedMenu:rebuildTabList()
  self.pageToTabIndex = {}
  -- TODO: structure LOP_FORNPREP (pc 11, target 24)
  v5:removeElement(self.pagingTabList.listItems[#self.pagingTabList.listItems])
  -- TODO: structure LOP_FORNLOOP (pc 23, target 12)
  for v4, v5 in ipairs(self.pageFrames) do
    local v7 = v7:getPageIdByElement(v5)
    local v9 = v9:getIsPageDisabled(v7)
    if not not v9 then
      continue
    end
    v9:addElement(self.pageTabs[v5])
    self.pageToTabIndex[v4] = #self.pagingTabList.listItems
  end
  self.pagingTabList.firstVisibleItem = 1
  if self.pageToTabIndex[self.currentPageId] ~= nil then
    v2:setSelectedIndex(self.pageToTabIndex[self.currentPageId], true, 0)
  end
end
function TabbedMenu:updatePages()
  for v4, v5 in pairs(self.pageEnablingPredicates) do
    local v6 = v6:getPageIdByElement(v4)
    if self.disabledPages[v4] == nil then
      local v7 = v5()
    end
    v8:setPageIdDisabled(v6, not v7)
    self:setPageTabEnabled(v4, v7)
  end
  self:rebuildTabList()
  self:updatePageTabDisplay()
  self:setPageSelectorTitles()
  self:updatePageControlVisibility()
end
function TabbedMenu.updatePageTabDisplay(v0)
end
function TabbedMenu:updatePageControlVisibility()
  if #self.pagingTabList.listItems == 1 then
  end
  v2:setVisible(true)
  v2:setVisible(true)
end
function TabbedMenu:clearMenuButtonActions()
  for v4 in pairs(self.buttonActionCallbacks) do
    self.buttonActionCallbacks[v4] = nil
  end
  for v4 in ipairs(self.customButtonEvents) do
    v6:removeActionEvent(self.customButtonEvents[v4])
    self.customButtonEvents[v4] = nil
  end
end
function TabbedMenu:assignMenuButtonInfo(menuButtonInfo)
  self:clearMenuButtonActions()
  for v5, v6 in ipairs(self.menuButton) do
    if menuButtonInfo[v5] == nil then
    end
    v6:setVisible(true)
    if not true then
      continue
    end
    if not (v7.inputAction ~= nil) then
      continue
    end
    if not (InputAction[v7.inputAction] ~= nil) then
      continue
    end
    v6:setInputAction(v7.inputAction)
    if GS_IS_MOBILE_VERSION then
      if v7.profile ~= nil then
        v6:applyProfile(v7.profile)
      else
        v6:applyProfile("buttonBack")
      end
    end
    if v7.text == nil and self.defaultMenuButtonInfoByActions[v7.inputAction] ~= nil then
    end
    v6:setText(v9)
    if not v7.callback and not self.defaultButtonActionCallbacks[v7.inputAction] then
    end
    if v7.inputAction == InputAction.MENU_BACK then
    end
    if v7.clickSound ~= nil then
      -- if v7.clickSound == v11 then goto L115 end
      v6:setClickSound(GuiSoundPlayer.SOUND_SAMPLES.NONE)
    else
      v6:setClickSound(v11)
    end
    if not GS_IS_MOBILE_VERSION and not not self.paused then
    end
    if not v12 and v7.inputAction ~= InputAction.MENU_BACK then
    end
    if not v7.disabled then
    end
    if not v14 then
      if not TabbedMenu.DEFAULT_BUTTON_ACTIONS[v7.inputAction] then
        local v15, v16 = v15:registerActionEvent(v7.inputAction, InputBinding.NO_EVENT_TARGET, v10, false, true, false, true)
        table.insert(self.customButtonEvents, v16)
      else
        self.buttonActionCallbacks[v7.inputAction] = v10
      end
    end
    v6.onClickCallback = v10
    v6:setDisabled(v14)
  end
  if self.buttonActionCallbacks[InputAction.MENU_BACK] == nil then
    self.buttonActionCallbacks[InputAction.MENU_BACK] = self.clickBackCallback
  end
  v2:invalidateLayout()
end
function TabbedMenu:setPageSelectorTitles()
  local v1 = v1:getPageTitles()
  v2:setTexts(v1)
  if #v1 ~= 1 then
  end
  v2:setDisabled(true)
  local v2 = v2:getCurrentPageId()
  local v4 = v4:getPageMappingIndex(v2)
  self.pageSelector.state = v4
end
function TabbedMenu:goToPage(page, muteSound)
  self.muteSound = muteSound
  local v4 = v4:getPageMappingIndexByElement(page)
  if v4 ~= nil then
    v5:setState(v4, true)
  end
  self.muteSound = v3
end
function TabbedMenu:updatePagingVisibility(visible)
  v2:setVisible(visible)
end
function TabbedMenu:onMenuActionClick(menuActionName)
  if self.buttonActionCallbacks[menuActionName] ~= nil and self.buttonActionCallbacks[menuActionName] ~= u0 then
    local v4 = self.buttonActionCallbacks[menuActionName]()
    return v4 or false
  end
  return true
end
function TabbedMenu:onClickOk()
  return self:onMenuActionClick(InputAction.MENU_ACCEPT)
end
function TabbedMenu:onClickBack()
  local v2 = v2:requestClose(self.clickBackCallback)
  if v2 then
    local v3 = v3:superClass()
    v2 = v3.onClickBack(self)
    if v2 then
      v2 = self:onMenuActionClick(InputAction.MENU_BACK)
    end
  end
  return v1
end
function TabbedMenu:onClickCancel()
  local v2 = v2:superClass()
  local v1 = v2.onClickCancel(self)
  if v1 then
    v2 = self:onMenuActionClick(InputAction.MENU_CANCEL)
  end
  return v1
end
function TabbedMenu:onClickActivate()
  local v2 = v2:superClass()
  local v1 = v2.onClickActivate(self)
  if v1 then
    v2 = self:onMenuActionClick(InputAction.MENU_ACTIVATE)
  end
  return v1
end
function TabbedMenu:onClickMenuExtra1()
  local v2 = v2:superClass()
  local v1 = v2.onClickMenuExtra1(self)
  if v1 then
    v2 = self:onMenuActionClick(InputAction.MENU_EXTRA_1)
  end
  return v1
end
function TabbedMenu:onClickMenuExtra2()
  local v2 = v2:superClass()
  local v1 = v2.onClickMenuExtra2(self)
  if v1 then
    v2 = self:onMenuActionClick(InputAction.MENU_EXTRA_2)
  end
  return v1
end
function TabbedMenu:onClickPageSelection(state)
  local v2 = v2:setPage(state)
  if v2 and not self.muteSound then
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.PAGING)
  end
end
function TabbedMenu:onPagePrevious()
  if GS_IS_MOBILE_VERSION then
    local v1 = v1:getHasPreviousPage()
    -- if not v1 then goto L32 end
    v1:onPreviousPage()
    return
  end
  v1 = v1:requestClose(self.frameClosePagePreviousCallback)
  if v1 then
    local v2 = v2:superClass()
    v2.onPagePrevious(self)
  end
end
function TabbedMenu:onPageNext()
  if GS_IS_MOBILE_VERSION then
    local v1 = v1:getHasNextPage()
    -- if not v1 then goto L32 end
    v1:onNextPage()
    return
  end
  v1 = v1:requestClose(self.frameClosePageNextCallback)
  if v1 then
    local v2 = v2:superClass()
    v2.onPageNext(self)
  end
end
function TabbedMenu:onPageChange(pageIndex, pageMappingIndex, element, skipTabVisualUpdate)
  local v5 = v5:getPageElementByIndex(self.currentPageId)
  v5:onFrameClose()
  v5:setVisible(false)
  v6:storeEventBindings()
  local v6 = v6:getPageElementByIndex(pageIndex)
  self.currentPage = v6
  self.currentPageName = v6.name
  if not skipTabVisualUpdate then
    self.currentPageId = pageIndex
    if self.pageToTabIndex[pageIndex] ~= nil then
      local v9 = MathUtil.sign(self.pageToTabIndex[pageIndex] - self.pageToTabIndex[self.currentPageId])
      v10:setSelectedIndex(self.pageToTabIndex[pageIndex], true, v9)
    end
  end
  v6:setVisible(true)
  v6:setSoundSuppressed(true)
  v7:setGui(v6.name)
  v6:setSoundSuppressed(false)
  v6:onFrameOpen()
  self:updateButtonsPanel(v6)
  self:updateTabDisplay()
end
function TabbedMenu.onTabMenuSelectionChanged(v0)
end
function TabbedMenu:onTabMenuScroll()
  self:updateTabDisplay()
end
function TabbedMenu:updateButtonsPanel(page)
  local buttonInfo = self:getPageButtonInfo(page)
  self:assignMenuButtonInfo(buttonInfo)
end
function TabbedMenu:updateTabDisplay()
  if GS_IS_MOBILE_VERSION then
    return
  end
  if self.pagingTabPrevious ~= nil then
    if self.pagingTabList.firstVisibleItem ~= 1 then
    end
    v2:setVisible(not true)
    if not true then
      local v7 = unpack(self.pagingTabList.listItems[self.pagingTabList.firstVisibleItem - 1].elements[1].icon.uvs)
      v4:setImageUVs(...)
      v4:setImageFilename(self.pagingTabList.listItems[self.pagingTabList.firstVisibleItem - 1].elements[1].icon.filename)
    end
  end
  if self.pagingTabPrevious ~= nil then
    if #self.pagingTabList.listItems > self.pagingTabList.firstVisibleItem + self.pagingTabList.visibleItems - 1 then
    end
    v2:setVisible(not true)
    if not true then
      v7 = unpack(self.pagingTabList.listItems[self.pagingTabList.firstVisibleItem + self.pagingTabList.visibleItems].elements[1].icon.uvs)
      v4:setImageUVs(...)
      v4:setImageFilename(self.pagingTabList.listItems[self.pagingTabList.firstVisibleItem + self.pagingTabList.visibleItems].elements[1].icon.filename)
    end
  end
end
function TabbedMenu:getPageButtonInfo(page)
  local v3 = page:getHasCustomMenuButtons()
  if v3 then
    v3 = page:getMenuButtonInfo()
    return v3
  end
  return self.defaultMenuButtonInfo
end
function TabbedMenu.onPageUpdate(v0)
end
function TabbedMenu:onButtonBack()
  self:exitMenu()
end
function TabbedMenu.onMenuOpened(v0)
end
function TabbedMenu:onTabPagingPrevious()
  v2:setState(self.pagingTabList.firstVisibleItem - 1, true)
end
function TabbedMenu:onTabPagingNext()
  v2:setState(self.pagingTabList.firstVisibleItem + self.pagingTabList.visibleItems, true)
end
function TabbedMenu:registerPage(pageFrameElement, position, enablingPredicateFunction)
  if position == nil then
  else
    local v6 = math.min(#self.pageFrames + 1, position)
    local v4 = math.max(...)
  end
  table.insert(self.pageFrames, position, pageFrameElement)
  local v5 = pageFrameElement:class()
  self.pageTypeControllers[v5] = pageFrameElement
  self.pageRoots[pageFrameElement] = pageFrameElement.elements[1]
  self.pageEnablingPredicates[pageFrameElement] = enablingPredicateFunction
  pageFrameElement:setVisible(false)
  return pageFrameElement.elements[1], position
end
function TabbedMenu:unregisterPage(pageFrameClass)
  if self.pageTypeControllers[pageFrameClass] ~= nil then
    for v8, v9 in ipairs(self.pageFrames) do
      if not (v9 == v2) then
        continue
      end
      break
    end
    table.remove(self.pageFrames, v4)
    self.pageRoots[v2] = nil
    self.pageTypeControllers[pageFrameClass] = nil
    self.pageEnablingPredicates[v2] = nil
    self.pageTabs[v2] = nil
  end
  if v2 == nil then
  end
  return true, v2, v3, nil
end
function TabbedMenu:addPage(pageFrameElement, position, tabIconFilename, tabIconUVs, enablingPredicateFunction)
  local v6, v7 = self:registerPage(pageFrameElement, position, enablingPredicateFunction)
  local v12 = GuiUtils.getUVs(tabIconUVs)
  self:addPageTab(...)
  if v6.title == nil then
    local v9 = v9:getText("ui_" .. v6.name)
  end
  local v11 = string.upper(v6.name)
  v9:addPage(v11, v6, v8, v7)
end
function TabbedMenu:removePage(pageFrameClass)
  if self.defaultPageElementIDs[self.pageTypeControllers[pageFrameClass]] ~= nil then
    self:setPageEnabled(pageFrameClass, false)
    return
  end
  local v3, v4, v5, v6 = self:unregisterPage(pageFrameClass)
  if v3 then
    v7:removeElement(v5)
    v5:delete()
    v4:delete()
    v7:removeElement(v6)
    v6:delete()
  end
end
function TabbedMenu:setPageEnabled(pageFrameClass, isEnabled)
  if self.pageTypeControllers[pageFrameClass] ~= nil then
    local v4 = v4:getPageIdByElement(self.pageTypeControllers[pageFrameClass])
    v5:setPageIdDisabled(v4, not isEnabled)
    self.pageTypeControllers[pageFrameClass]:setDisabled(not isEnabled)
    if not isEnabled then
      self.disabledPages[self.pageTypeControllers[pageFrameClass]] = self.pageTypeControllers[pageFrameClass]
    else
      self.disabledPages[self.pageTypeControllers[pageFrameClass]] = nil
    end
    self:setPageTabEnabled(v3, isEnabled)
    v5:updateItemPositions()
  end
end
function TabbedMenu.makeSelfCallback(v0, v1)
  return function(...)
    return u0(...)
  end
end
TabbedMenu.PROFILE = {PAGE_TAB = "uiTabbedMenuPageTab", PAGE_TAB_ACTIVE = "uiTabbedMenuPageTabActive"}
