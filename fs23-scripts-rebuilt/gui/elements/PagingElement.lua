-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PagingElement = {}
local PagingElement_mt = Class(PagingElement, GuiElement)
function PagingElement.new(target, custom_mt)
  if custom_mt == nil then
  end
  local v2 = GuiElement.new(target, custom_mt)
  v2:include(IndexChangeSubjectMixin)
  v2.pageIdCount = 1
  v2.pages = {}
  v2.idPageHash = {}
  v2.pageMapping = {}
  v2.currentPageIndex = 1
  v2.currentPageMappingIndex = 1
  return v2
end
function PagingElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  self:addCallback(xmlFile, key .. "#onPageChange", "onPageChangeCallback")
  self:addCallback(xmlFile, key .. "#onPageUpdate", "onPageUpdateCallback")
end
function PagingElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.onPageChangeCallback = src.onPageChangeCallback
  self.onPageUpdateCallback = src.onPageUpdateCallback
  GuiMixin.cloneMixin(IndexChangeSubjectMixin, src, self)
end
function PagingElement:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  self:updatePageMapping()
end
function PagingElement:setPage(pageMappingIndex)
  for v5, v6 in pairs(self.pages) do
    v7:setVisible(false)
  end
  v2 = MathUtil.clamp(pageMappingIndex, 1, #self.pageMapping)
  self.currentPageMappingIndex = v2
  self.currentPageIndex = self.pageMapping[v2]
  if self.currentPageIndex == self.currentPageIndex then
  end
  v4:setVisible(true)
  self:raiseCallback("onPageChangeCallback", self.currentPageIndex, self.currentPageMappingIndex, self)
  self:notifyIndexChange(self.currentPageMappingIndex, #self.pageMapping)
  return true
end
function PagingElement:addElement(element)
  local v3 = v3:superClass()
  v3.addElement(self, element)
  if element.name ~= nil then
    local v2 = v2:hasText("ui_" .. element.name)
    if v2 then
      local v4 = string.upper(element.name)
      local v6 = v6:getText("ui_" .. element.name)
      self:addPage(...)
      return
    end
  end
  v4 = tostring(element)
  self:addPage(v4, element, "")
end
function PagingElement:getNextID()
  self.pageIdCount = self.pageIdCount + 1
  return self.pageIdCount
end
function PagingElement:addPage(id, element, title, index)
  local newIndex = self:getNextID()
  if self.currentPageIndex == nil then
    self.currentPageIndex = newIndex
    self.currentPageMappingIndex = self.currentPageIndex
  end
  if not index then
  end
  table.insert(self.pages, v7, v6)
  self.idPageHash[v6.id] = v6
  element:setVisible(false)
  self:updatePageMapping()
  return v6
end
function PagingElement:getVisiblePagesCount()
  return #self.pageMapping
end
function PagingElement:getPageIdByElement(element)
  for v5, v6 in pairs(self.pages) do
    if not (v6.element == element) then
      continue
    end
    return v6.id
  end
end
function PagingElement:getPageElementByIndex(pageIndex)
  if self.pages[pageIndex] then
  end
  return v2
end
function PagingElement:getPageIndexByElement(element)
  for v5, v6 in ipairs(self.pages) do
    if not (v6.element == element) then
      continue
    end
    return v5
  end
end
function PagingElement:getPageMappingIndexByElement(element)
  for v5, v6 in ipairs(self.pages) do
    if not (v6.element == element) then
      continue
    end
    return v6.mappingIndex
  end
  return nil
end
function PagingElement:removePageByElement(pageElement)
  for v7, v8 in ipairs(self.pages) do
    if not (v8.element == pageElement) then
      continue
    end
    break
  end
  v4 = table.remove(self.pages, v2)
  if v4 then
    self.currentPageIndex = 1
    self.idPageHash[v3] = nil
    self:updatePageMapping()
  end
end
function PagingElement:removeElement(element)
  local v3 = v3:superClass()
  v3.removeElement(self, element)
  self:removePageByElement(element)
end
function PagingElement:getCurrentPageId()
  return self.pages[self.currentPageIndex].id
end
function PagingElement:getPageMappingIndex(pageId)
  return self.idPageHash[pageId].mappingIndex
end
function PagingElement:getIsPageDisabled(pageId)
  return self.idPageHash[pageId].disabled
end
function PagingElement:getPageById(pageId)
  return self.idPageHash[pageId]
end
function PagingElement:setPageDisabled(page, disabled)
  if page ~= nil then
    page.disabled = disabled
    self:updatePageMapping()
    self:raiseCallback("onPageUpdateCallback", page, self)
  end
end
function PagingElement:setPageIdDisabled(pageId, disabled)
  if self.idPageHash[pageId] ~= nil then
    self:setPageDisabled(self.idPageHash[pageId], disabled)
  end
end
function PagingElement:updatePageMapping()
  self.pageMapping = {}
  self.pageTitles = {}
  for v5, v6 in ipairs(self.pages) do
    if not v6.disabled then
      table.insert(self.pageMapping, v5)
      table.insert(self.pageTitles, v6.title)
      v6.mappingIndex = #self.pageMapping
    else
      if v6 == v1 then
      end
      v6.mappingIndex = 1
    end
  end
  if v1 == nil then
    -- if v0.neuterPageUpdates then goto L88 end
    v2 = MathUtil.clamp(self.currentPageMappingIndex, 1, #self.pageMapping)
    self.currentPageMappingIndex = v2
    -- if 0 >= v0.currentPageMappingIndex then goto L88 end
    self:setPage(self.currentPageMappingIndex)
    return
  end
  self:notifyIndexChange(self.currentPageMappingIndex, #self.pageMapping)
end
function PagingElement:getPageTitles()
  return self.pageTitles
end
function PagingElement:onOpen()
  self:raiseCallback("onOpenCallback", self)
  self.pages[self.currentPageIndex].element:onOpen()
end
function PagingElement:onClose()
  self:raiseCallback("onCloseCallback", self)
  self.pages[self.currentPageIndex].element:onClose()
end
