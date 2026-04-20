-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuHelpFrame = {}
local InGameMenuHelpFrame_mt = Class(InGameMenuHelpFrame, TabbedMenuFrameElement)
InGameMenuHelpFrame.CONTROLS = {"helpLineList", "helpLineTitleElement", "helpLineContentBox", "helpLineContentItem", "helpLineContentItemTitle"}
function InGameMenuHelpFrame.register()
  local v0 = InGameMenuHelpFrame.new()
  v1:loadGui("dataS/gui/InGameMenuHelpFrame.xml", "HelpFrame", v0, true)
end
function InGameMenuHelpFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuHelpFrame.CONTROLS)
  return v2
end
function InGameMenuHelpFrame:createFromExistingGui(v1)
  local v2 = InGameMenuHelpFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuHelpFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function InGameMenuHelpFrame:delete()
  v1:delete()
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function InGameMenuHelpFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  v1:reloadData()
  self:setSoundSuppressed(true)
  v1:setFocus(self.helpLineList)
  self:setSoundSuppressed(false)
  v1:registerActionEvents()
end
function InGameMenuHelpFrame:onFrameClose()
  v1:removeActionEvents()
  local v2 = v2:superClass()
  v2.onFrameClose(self)
end
function InGameMenuHelpFrame:updateContents(page)
  v2:unlinkElement()
  v2:unlinkElement()
  -- TODO: structure LOP_FORNPREP (pc 17, target 27)
  v5:delete()
  -- TODO: structure LOP_FORNLOOP (pc 26, target 18)
  if page == nil then
    return
  end
  local v4 = v4:convertText(page.title, page.customEnvironment)
  v2:setText(...)
  for v5, v6 in ipairs(page.paragraphs) do
    if v6.title ~= nil then
      local v7 = v7:clone(self.helpLineContentBox)
      local v10 = v10:convertText(v6.title, v6.customEnvironment)
      v7:setText(...)
    end
    v7 = v7:clone(self.helpLineContentBox)
    local v8 = v7:getDescendantByName("text")
    local v9 = v7:getDescendantByName("textFullWidth")
    v10 = v7:getDescendantByName("image")
    if v6.noSpacing then
      v7.margin = {0, 0, 0, 0}
    end
    if v6.image ~= nil then
      v9:setVisible(false)
      if v6.text ~= nil then
        local v15 = v15:convertText(v6.text, v6.customEnvironment)
        v8:setText(...)
        local v13 = v8:getTextHeight(true)
        v8:setSize(nil, v13)
      end
      v13 = Utils.getFilename(v6.image.filename, v6.baseDirectory)
      v10:setImageFilename(v13)
      local v17 = unpack(v6.image.uvs)
      v10:setImageUVs(...)
      if v10.originalWidth == nil then
        v10.originalWidth = v10.absSize[1]
      end
      if v6.image.displaySize ~= nil then
        v10:setSize(v6.image.displaySize[1], v6.image.displaySize[2])
      elseif v6.text == nil then
        v10:setSize(v7.absSize[1], v7.absSize[1] * v6.image.aspectRatio * g_screenAspectRatio)
      else
        v10:setSize(v10.originalWidth, nil)
      end
      -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L276
      -- if not v6.alignToImage then goto L276 end
      v8:setSize(nil, v10.size[2])
      v8.textVerticalAlignment = TextElement.VERTICAL_ALIGNMENT.MIDDLE
    else
      v8:setVisible(false)
      v10:setVisible(false)
      if v6.text ~= nil then
        v15 = v15:convertText(v6.text, v6.customEnvironment)
        v9:setText(...)
      end
      v13 = v9:getTextHeight(true)
      v9:setSize(nil, v13)
    end
    if v6.image ~= nil then
      -- if v10.absSize[2] then goto L285 end
    end
    v17 = math.max(v11, v12, 0)
    v7:setSize(...)
    v7:invalidateLayout()
  end
  v2:invalidateLayout()
end
function InGameMenuHelpFrame:onListSelectionChanged(list, section, index)
  local v6 = self:getPage(section, index)
  self:updateContents(...)
end
function InGameMenuHelpFrame.getNumberOfSections(v0)
  return #g_helpLineManager.categories
end
function InGameMenuHelpFrame.getNumberOfItemsInSection(v0, page, v2)
  return #g_helpLineManager.categories[v2].pages
end
function InGameMenuHelpFrame.getTitleForSectionHeader(v0, page, v2)
  return v4:convertText(g_helpLineManager.categories[v2].title, g_helpLineManager.categories[v2].customEnvironment)
end
function InGameMenuHelpFrame:populateCellForItemInSection(list, section, index, cell)
  local page = self:getPage(section, index)
  local v6 = cell:getAttribute("title")
  local v8 = v8:convertText(page.title, page.customEnvironment)
  v6:setText(...)
end
function InGameMenuHelpFrame.getPage(v0, page, v2)
  local v3 = v3:getCategories()
  return v3[page].pages[v2]
end
function InGameMenuHelpFrame:openPage(categoryIndex, pageIndex)
  self:setSoundSuppressed(true)
  v3:setSelectedItem(categoryIndex, pageIndex, true, 1)
  self:setSoundSuppressed(false)
end
