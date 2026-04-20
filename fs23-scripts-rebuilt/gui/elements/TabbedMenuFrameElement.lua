-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TabbedMenuFrameElement = {}
local TabbedMenuFrameElement_mt = Class(TabbedMenuFrameElement, FrameElement)
TabbedMenuFrameElement.CONTROLS = {PAGE_HEADER = "pageHeader", SUB_PAGE_SELECTOR = "subPageSelector", SUB_PAGING_BUTTON_LEFT = "subPagingButtonLeft", SUB_PAGING_BUTTON_RIGHT = "subPagingButtonRight", PAGING_TITLE = "pagingTitle", PAGING_INDEX_STATE = "pagingIndexState"}
function TabbedMenuFrameElement.new(target, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(TabbedMenuFrameElement.CONTROLS)
  v2.hasCustomMenuButtons = false
  v2.menuButtonInfo = {}
  v2.menuButtonsDirty = false
  v2.title = nil
  v2.tabbingMenuVisibleDirty = false
  v2.tabbingMenuVisible = true
  v2.currentPage = 1
  v2:setNumberOfPages(1)
  v2.requestCloseCallback = u1
  return v2
end
function TabbedMenuFrameElement.initialize(v0, ...)
end
function TabbedMenuFrameElement:getHasCustomMenuButtons()
  return self.hasCustomMenuButtons
end
function TabbedMenuFrameElement:getMenuButtonInfo()
  return self.menuButtonInfo
end
function TabbedMenuFrameElement:setMenuButtonInfo(menuButtonInfo)
  self.menuButtonInfo = menuButtonInfo
  if menuButtonInfo == nil then
  end
  self.hasCustomMenuButtons = true
end
function TabbedMenuFrameElement:setMenuButtonInfoDirty()
  self.menuButtonsDirty = true
end
function TabbedMenuFrameElement:isMenuButtonInfoDirty()
  return self.menuButtonsDirty
end
function TabbedMenuFrameElement:clearMenuButtonInfoDirty()
  self.menuButtonsDirty = false
end
function TabbedMenuFrameElement.getMainElementSize(v0)
  return {1, 1}
end
function TabbedMenuFrameElement.getMainElementPosition(v0)
  return {0, 0}
end
function TabbedMenuFrameElement:requestClose(callback)
  if not callback then
  end
  self.requestCloseCallback = v2
  return true
end
function TabbedMenuFrameElement:onFrameOpen()
  self:updatePagingButtons()
  if GS_IS_MOBILE_VERSION and self.subPageSelector ~= nil and 1 < self.numberOfPages then
    self:onPageChanged(self.currentPage, self.currentPage)
  end
end
function TabbedMenuFrameElement.onFrameClose(v0)
end
function TabbedMenuFrameElement:setTitle(title)
  self.title = title
  if self.pagingTitle ~= nil then
    v2:setText(title)
  end
end
function TabbedMenuFrameElement:getTitle()
  return self.title
end
function TabbedMenuFrameElement:setTabbingMenuVisible(visible)
  self.tabbingMenuVisible = visible
  self.tabbingMenuVisibleDirty = true
end
function TabbedMenuFrameElement:getTabbingMenuVisible()
  if self.tabbingMenuVisible then
  end
  return v1
end
function TabbedMenuFrameElement:isTabbingMenuVisibleDirty()
  return self.tabbingMenuVisibleDirty
end
function TabbedMenuFrameElement:onNextPage()
  if Platform.isMobile then
    if #self.parent.pageMapping < self.parent.currentPageMappingIndex + 1 then
    end
    v3:onClickPageSelection(v2)
    return
  end
  if self.currentPage < self.numberOfPages then
    self.currentPage = self.currentPage + 1
    self:onPageChanged(self.currentPage, self.currentPage - 1)
  end
end
function TabbedMenuFrameElement:onPreviousPage()
  if Platform.isMobile then
    if self.parent.currentPageMappingIndex - 1 < 1 then
    end
    v3:onClickPageSelection(v2)
    return
  end
  if 1 < self.currentPage then
    self.currentPage = self.currentPage - 1
    self:onPageChanged(self.currentPage, self.currentPage + 1)
  end
end
function TabbedMenuFrameElement:getHasNextPage()
  if Platform.isMobile then
    if 1 >= #self.parent.pageMapping then
    end
    return true
  end
  if self.currentPage >= self.numberOfPages then
  end
  return true
end
function TabbedMenuFrameElement:getHasPreviousPage()
  if Platform.isMobile then
    if 1 >= #self.parent.pageMapping then
    end
    return true
  end
  if 1 >= self.currentPage then
  end
  return true
end
function TabbedMenuFrameElement:onClickSubPageSelection(element)
  if element == self.subPagingButtonLeft then
    self.currentPage = self.currentPage - 1
  elseif element == self.subPagingButtonRight then
    self.currentPage = self.currentPage + 1
  end
  local v4 = math.min(self.currentPage, self.numberOfPages)
  local v3 = math.max(v4, 1)
  self.currentPage = v3
  if v2 ~= self.currentPage then
    self:onPageChanged(self.currentPage, v2)
  end
end
function TabbedMenuFrameElement:setNumberOfPages(num)
  local v2 = math.max(num, 1)
  self.numberOfPages = v2
  local v4 = math.min(self.currentPage, num)
  local v3 = math.max(v4, 1)
  self.currentPage = v3
  if self.pagingIndexState ~= nil then
    v3:setPageCount(self.numberOfPages, self.currentPage)
  end
  if v2 ~= self.currentPage then
    self:onPageChanged(self.currentPage, self.currentPage)
    return
  end
  self:updatePagingButtons()
end
function TabbedMenuFrameElement:onPageChanged(page, pageFrom)
  if self.pagingIndexState ~= nil then
    v3:setPageIndex(page)
  end
  self:updatePagingButtons()
end
function TabbedMenuFrameElement:updatePagingButtons()
  if self.subPagingButtonLeft ~= nil then
    if self.numberOfPages ~= 1 then
    end
    if not not element and self.currentPage ~= 1 then
    end
    v2:setDisabled(v4)
    if not not element and self.currentPage ~= self.numberOfPages then
    end
    v2:setDisabled(v4)
  end
end
function TabbedMenuFrameElement:setPagingButtonsDisabled(disabled)
  self.pagingButtonsDisabled = disabled
  self:updatePagingButtons()
end
function TabbedMenuFrameElement:setPagingButtonsDirty()
  self:updatePagingButtons()
end
function TabbedMenuFrameElement:getCurrentPage()
  return self.currentPage
end
