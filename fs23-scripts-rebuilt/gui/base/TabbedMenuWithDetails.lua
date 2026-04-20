-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TabbedMenuWithDetails = {}
local TabbedMenuWithDetails_mt = Class(TabbedMenuWithDetails, TabbedMenu)
function TabbedMenuWithDetails.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2.stacks = {}
  return v2
end
function TabbedMenuWithDetails:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  self.stacks = {}
end
function TabbedMenuWithDetails:getIsDetailMode()
  local v2 = self:isAtRoot()
  return not v2
end
function TabbedMenuWithDetails:exitMenu()
  self:popToRoot()
  local v2 = v2:superClass()
  v2.exitMenu(self)
end
function TabbedMenuWithDetails:onOpen(element)
  local v3 = v3:superClass()
  v3.onOpen(self)
  if self.performBackgroundBlur then
    top:pushArea(0, 0, 1, 1)
  end
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.PAGING)
  if self.gameState ~= nil then
    top:setGameState(self.gameState)
  end
  self:setSoundSuppressed(true)
  local top = self:getTopFrame()
  v3 = self:isAtRoot()
  if v3 then
    self:updatePages()
    v3:setState(self.restorePageIndex, true)
  else
    top:onFrameOpen()
    self:updateButtonsPanel(top)
  end
  self:setSoundSuppressed(false)
  self:onMenuOpened()
end
function TabbedMenuWithDetails:onPageClicked(oldPage)
  self:popToRoot()
end
function TabbedMenuWithDetails.onDetailClosed(v0, v1)
end
function TabbedMenuWithDetails.onDetailOpened(v0, v1)
end
function TabbedMenuWithDetails:onButtonBack()
  local v1 = self:isAtRoot()
  if v1 then
    self:exitMenu()
    return
  end
  self:popDetail()
end
function TabbedMenuWithDetails:onPageChange(pageIndex, pageMappingIndex, element, skipTabVisualUpdate)
  if self.isChangingDetail then
  else
    self:popToRoot()
  end
  local v6 = v6:superClass()
  v6.onPageChange(self, pageIndex, pageMappingIndex, element, skipTabVisualUpdate)
end
function TabbedMenuWithDetails:getStack(page)
  if page ~= nil then
    local v3 = v3:getPageIndexByElement(page)
  else
    v3 = v3:getPageElementByIndex(self.currentPageId)
  end
  if self.stacks[v2] == nil then
    self.stacks[v2] = {}
    table.insert(self.stacks[v2], {page = page, pageId = v2, isRoot = true})
  end
  return self.stacks[v2]
end
function TabbedMenuWithDetails:isAtRoot()
  local v3 = self:getStack()
  if #v3 ~= 1 then
  end
  return true
end
function TabbedMenuWithDetails:getTopFrame()
  local stack = self:getStack()
  return stack[#stack].page
end
function TabbedMenuWithDetails:setPageDisabled(page, disabled)
  local v3 = v3:getPageIdByElement(page)
  v4:setPageIdDisabled(v3, disabled)
end
function TabbedMenuWithDetails:pushDetail(detailPage)
  local stack = self:getStack()
  self.isChangingDetail = true
  local v3 = self:isAtRoot()
  if not v3 then
    detailPage:setVisible(false)
    detailPage:onFrameClose()
    self:setPageDisabled(detailPage, true)
    self:onDetailClosed(stack[#stack].page)
  end
  table.insert(stack, {page = detailPage})
  self:setPageDisabled(detailPage, false)
  detailPage:setSoundSuppressed(true)
  local v6 = v6:getPageMappingIndexByElement(detailPage)
  v4:setPage(...)
  detailPage:setSoundSuppressed(false)
  self:onDetailOpened(detailPage)
  self.isChangingDetail = false
end
function TabbedMenuWithDetails:popDetail()
  local v1 = self:getStack()
  self.isChangingDetail = true
  if #v1 == 1 then
    Logging.error("Cannot pop from view stack at root")
    return
  end
  table.remove(v1)
  v1[#v1].page:setVisible(false)
  v1[#v1].page:onFrameClose()
  self.pagingElement.neuterPageUpdates = true
  self:setPageDisabled(v1[#v1].page, true)
  self:onDetailClosed(v1[#v1].page)
  self.pagingElement.neuterPageUpdates = false
  if #v1 ~= 1 then
    v1[#v1].page:onFrameOpen()
    self:setPageDisabled(v1[#v1].page, false)
    v1[#v1].page:setSoundSuppressed(true)
    local v6 = v6:getPageMappingIndexByElement(v1[#v1].page)
    v4:setPage(...)
    v1[#v1].page:setSoundSuppressed(false)
    self:onDetailOpened(v1[#v1].page)
  else
    local v5 = v5:getPageMappingIndexByElement(v1[1].page)
    v3:setPage(...)
  end
  self.isChangingDetail = false
end
function TabbedMenuWithDetails:popToRoot()
  local stack = self:getStack()
  if 1 < #stack then
    -- TODO: structure LOP_FORNPREP (pc 10, target 15)
    self:popDetail()
    -- TODO: structure LOP_FORNLOOP (pc 14, target 11)
  end
end
function TabbedMenuWithDetails:replaceDetail(detailPage)
  self:popDetail()
  self:pushDetail(detailPage)
end
function TabbedMenuWithDetails:getBreadcrumbs(page)
  local v4 = self:getStack(page)
  for v6, v7 in ipairs(...) do
    table.insert(v2, v7.page.title or "")
  end
  return v2
end
