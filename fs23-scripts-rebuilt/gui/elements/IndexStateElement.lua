-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IndexStateElement = {}
local IndexStateElement_mt = Class(IndexStateElement, BoxLayoutElement)
function IndexStateElement.new(target, custom_mt)
  if custom_mt == nil then
  end
  local v2 = BoxLayoutElement.new(target, custom_mt)
  v2.pageElements = {}
  v2.currentPageIndex = 1
  v2.indexableElementId = nil
  v2.indexableElement = nil
  v2.stateElementTemplateId = nil
  v2.stateElementTemplate = nil
  v2.reverseElements = false
  v2.indexMinimizeWidth = false
  return v2
end
function IndexStateElement:delete()
  if self.stateElementTemplate ~= nil then
    v1:delete()
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function IndexStateElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  local v3 = getXMLString(xmlFile, key .. "#stateElementTemplateId")
  self.stateElementTemplateId = v3
  v3 = getXMLString(xmlFile, key .. "#indexableElementId")
  self.indexableElementId = v3
  v3 = getXMLBool(xmlFile, key .. "#reverseElements")
  if not v3 then
  end
  self.reverseElements = v3
  v4 = getXMLBool(xmlFile, key .. "#indexMinimizeWidth")
  v3 = Utils.getNoNil(v4, self.indexMinimizeWidth)
  self.indexMinimizeWidth = v3
end
function IndexStateElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getBool("reverseElements", self.reverseElements)
  self.reverseElements = v3
  v3 = profile:getBool("indexMinimizeWidth", self.indexMinimizeWidth)
  self.indexMinimizeWidth = v3
end
function IndexStateElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.stateElementTemplate = src.stateElementTemplate
  self.indexableElement = src.indexableElement
  self.reverseElements = src.reverseElements
  self.indexMinimizeWidth = src.indexMinimizeWidth
end
function IndexStateElement:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  if not self.stateElementTemplate then
    self:locateStateElementTemplate()
  end
  if not self.indexableElement and self.indexableElementId ~= nil then
    self:locateIndexableElement()
  end
end
function IndexStateElement:locateStateElementTemplate()
  local v1 = v1:getDescendantById(self.stateElementTemplateId)
  self.stateElementTemplate = v1
  if self.stateElementTemplate then
    v1:setVisible(false)
    v1:setHandleFocus(false)
    v1:unlinkElement()
    return
  end
  local v8 = tostring(self)
  v8 = tostring(self.stateElementTemplateId)
  print("Warning: IndexStateElement " .. v8 .. " could not find state element template with ID [" .. v8 .. "]. Check configuration.")
end
function IndexStateElement:locateIndexableElement()
  if self.indexableElementId then
    while true do
      if not v1.parent then
        break
      end
      if not (0 < v2) then
        break
      end
    end
    local v3 = v1:getDescendantById(self.indexableElementId)
    self.indexableElement = v3
    if self.indexableElement then
      v3 = v3:hasIncluded(IndexChangeSubjectMixin)
      if v3 then
        v3:addIndexChangeObserver(self, self.onIndexChange)
        return
      end
      local v10 = tostring(self.indexableElement)
      v10 = tostring(self)
      print("Warning: Element " .. v10 .. " does not support index change observers and is not valid to be targeted by IndexStateElement " .. v10 .. ". Check configuration.")
      return
    end
    v10 = tostring(self)
    v10 = tostring(self.indexableElementId)
    print("Warning: IndexStateElement " .. v10 .. " could not find valid indexable element with ID [" .. v10 .. "]. Check configuration.")
  end
end
function IndexStateElement:onIndexChange(index, count)
  if count ~= #self.pageElements then
    self:setPageCount(count, index)
  end
  self:setPageIndex(index)
end
function IndexStateElement:setPageCount(count, initialIndex)
  if not self.stateElementTemplate then
    self:locateStateElementTemplate()
  end
  if count ~= #self.pageElements then
    for v6, v7 in pairs(self.pageElements) do
      self:removeElement(v7)
      v7:delete()
    end
    self.pageElements = {}
    -- TODO: structure LOP_FORNPREP (pc 33, target 53)
    v6 = v6:clone(self)
    v6:setVisible(true)
    table.insert(self.pageElements, v6)
    -- TODO: structure LOP_FORNLOOP (pc 52, target 34)
    self:invalidateLayout()
    if initialIndex then
      self:setPageIndex(initialIndex)
    end
    self:updateSize()
  end
end
function IndexStateElement:updateSize()
  if not self.indexMinimizeWidth then
    return
  end
  self:updateLayoutCells()
  self:updateLayoutSizes()
  self:setSize(self.flowSize, nil)
  if self.parent ~= nil and self.parent.invalidateLayout ~= nil then
    v1:invalidateLayout()
  end
end
function IndexStateElement:setPageIndex(index)
  if self.reverseElements then
  end
  local v2 = MathUtil.clamp(index, 1, #self.pageElements)
  self.currentPageIndex = v2
  for v5, v6 in ipairs(self.pageElements) do
    if v5 == self.currentPageIndex then
    end
    v6:setOverlayState(v7)
  end
end
