-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HelpLineManager = {}
local HelpLineManager_mt = Class(HelpLineManager, AbstractManager)
HelpLineManager.ITEM_TYPE = {TEXT = "text", IMAGE = "image"}
function HelpLineManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function HelpLineManager:initDataStructures()
  self.categories = {}
  self.modCategories = {}
  self.idToCategoryPageIndex = {}
  self.categoryNames = {}
  self.triggers = {}
  self.triggerNodeToData = {}
  self.zones = {}
  self.sharedLoadingIds = {}
  self.helpData = nil
  self.idToIndices = {}
end
function HelpLineManager:loadMapData(xmlFile, missionInfo)
  local v4 = v4:superClass()
  v4.loadMapData(self)
  local filenameStr = getXMLString(xmlFile, "map.helpline#filename")
  if filenameStr == nil then
    Logging.xmlInfo(xmlFile, "No helpline defined for map")
    return false
  end
  v4 = Utils.getFilename(filenameStr, g_currentMission.baseDirectory)
  if v4 ~= nil and v4 ~= "" then
    local v5 = fileExists(v4)
    -- if v5 then goto L52 end
  end
  local v11 = tostring(filenameStr)
  Logging.xmlError(xmlFile, "Could not load helpline config file '" .. v11 .. "'!")
  return false
  self:loadFromXML(v4, missionInfo)
  v5 = getXMLString(xmlFile, "map.helpline#additionalFilename")
  if v5 ~= nil then
    local v6 = Utils.getFilename(v5, g_currentMission.baseDirectory)
    self:loadFromXML(v6, missionInfo)
  end
  for v9, v10 in ipairs(self.modCategories) do
    table.insert(self.categories, v10)
  end
  for v9, v10 in ipairs(self.categories) do
    if v10.id ~= nil then
      if self.idToCategoryPageIndex[v10.id] == nil then
        self.idToCategoryPageIndex[v10.id] = {categoryIndex = v9, pageIndex = 0}
      else
        Logging.xmlWarning(xmlFile, "Category Id '%s' already used. Ignoring id for category name '%s'!", v10.id, v10.title)
      end
    end
    for v15, v16 in ipairs(v10.pages) do
      if not (v16.id ~= nil) then
        continue
      end
      if self.idToCategoryPageIndex[v16.id] == nil then
        self.idToCategoryPageIndex[v16.id] = {categoryIndex = v9, pageIndex = v15}
      else
        Logging.xmlWarning(xmlFile, "Page Id '%s' already used. Ignoring id for page name '%s'!", v16.id, v16.title)
      end
    end
  end
  v7 = XMLFile.wrap(xmlFile, nil)
  v7:iterate("map.helpline.trigger", function(self, xmlFile)
    local missionInfo = missionInfo:getVector(xmlFile .. "#position", nil, 3)
    if missionInfo ~= nil then
      local filenameStr, v4 = u1(u0, xmlFile)
      if u2.categories[{position = missionInfo, categoryIndex = filenameStr, pageIndex = v4}.categoryIndex] ~= nil then
        if u2.categories[{position = missionInfo, categoryIndex = filenameStr, pageIndex = v4}.categoryIndex].pages[{position = missionInfo, categoryIndex = filenameStr, pageIndex = v4}.pageIndex] ~= nil then
          local v8 = v8:loadSharedI3DFileAsync("data/objects/helpIcon/icon.i3d", false, false, HelpLineManager.onIconLoaded, u2, {position = missionInfo, categoryIndex = filenameStr, pageIndex = v4})
          table.insert(u2.sharedLoadingIds, v8)
          return
        end
        Logging.xmlWarning(u0, "Invalid helpline trigger page index '%d' for category '%d' for '%s'", v5.pageIndex, filenameStr, xmlFile)
        return
      end
      Logging.xmlWarning(u0, "Invalid helpline trigger category index '%d' for '%s'", filenameStr, xmlFile)
      return
    end
    Logging.xmlWarning(u0, "Missing helpline trigger position for '%s'", xmlFile)
  end)
  v7:iterate("map.helpline.zone", function(self, xmlFile)
    local missionInfo = missionInfo:getVector(xmlFile .. "#position", nil, 3)
    if missionInfo ~= nil then
      local filenameStr, v4 = u1(u0, xmlFile)
      local v6 = v6:getFloat(xmlFile .. "#radius", 50)
      table.insert(u2.zones, {position = missionInfo, radius = v6, categoryIndex = filenameStr, pageIndex = v4})
    end
  end)
  v7:delete()
  v8 = HelpLineActivatable.new(self)
  self.activatable = v8
  return true
end
function HelpLineManager:unloadMapData()
  self.helpData = nil
  v1:removeActivatable(self.activatable)
  for v4, v5 in ipairs(self.sharedLoadingIds) do
    v6:releaseSharedI3DFile(v5)
  end
  for v4, v5 in ipairs(self.triggers) do
    v6:removeHelpTrigger(v5.node)
    removeTrigger(v5.triggerNode)
    delete(v5.node)
  end
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function HelpLineManager:onIconLoaded(i3dNode, failedReason, trigger)
  if i3dNode ~= 0 then
    trigger.node = i3dNode
    local v5 = getChildAt(i3dNode, 0)
    local v4 = getChildAt(v5, 0)
    trigger.triggerNode = v4
    self.triggerNodeToData[trigger.triggerNode] = trigger
    v5 = getRootNode()
    link(v5, i3dNode)
    addTrigger(trigger.triggerNode, "onIconTrigger", self)
    setWorldTranslation(i3dNode, trigger.position[1], trigger.position[2], trigger.position[3])
    addToPhysics(i3dNode)
    table.insert(self.triggers, trigger)
    v4:addHelpTrigger(trigger.node)
  end
end
function HelpLineManager:onIconTrigger(triggerId, otherId, onEnter, onLeave, onStay)
  if self.triggerNodeToData[triggerId] ~= nil then
    if onEnter then
      self.helpData = self.triggerNodeToData[triggerId]
      v7:addActivatable(self.activatable)
      return
    end
    if onLeave then
      self.helpData = nil
      v7:removeActivatable(self.activatable)
    end
  end
end
function HelpLineManager.loadFromXML(v0, v1, v2)
  local v3, v4 = Utils.getModNameAndBaseDirectory(v1)
  local v5 = XMLFile.load("helpLineViewContentXML", v1)
  if v5 ~= nil then
    v5:iterate("helpLines.category", function(v0, v1)
      local v2 = v2:loadCategory(u1, v1, u2, u3, u4)
      if v2 ~= nil then
        table.insert(u0.categories, v2)
      end
    end)
    v5:delete()
  end
end
function HelpLineManager:addModCategory(xmlFile, key, customEnvironment, baseDirectory)
  local category = self:loadCategory(xmlFile, key, nil, customEnvironment, baseDirectory)
  if category ~= nil then
    table.insert(self.modCategories, category)
  end
end
function HelpLineManager.loadCategory(v0, v1, v2, v3, v4, v5)
  local v7 = v1:getString(v2 .. "#title")
  v7 = v1:getString(v2 .. "#id")
  if v7 ~= nil then
    if v4 ~= nil then
    end
    v6.id = v7
  end
  v1:iterate(v2 .. ".page", function(v0, v1)
    local v2 = v2:loadPage(u1, v1, u2, u3, u4)
    table.insert(u5.pages, v2)
  end)
  return v6
end
function HelpLineManager.loadPage(v0, v1, v2, v3, v4, v5)
  local v7 = v1:getString(v2 .. "#title")
  v7 = v1:getString(v2 .. "#id")
  if v7 ~= nil then
    if v4 ~= nil then
    end
    v6.id = v7
  end
  v6.paragraphs = {}
  v1:iterate(v2 .. ".paragraph", function(v0, v1)
    local v3 = v3:getString(v1 .. ".title#text")
    v3 = v3:getString(v1 .. ".text#text")
    v3 = v3:getBool(v1 .. ".text#alignToImage")
    v3 = v3:getBool(v1 .. "#noSpacing")
    v3 = v3:getString(v1 .. ".image#filename")
    if v3 ~= nil then
      local v4 = v4:getFloat(v1 .. ".image#heightScale", 1)
      local v5 = v5:getFloat(v1 .. ".image#aspectRatio", 1)
      local v7 = v7:getString(v1 .. ".image#size")
      local v6 = GuiUtils.get2DArray(v7, {1024, 1024})
      local v8 = v8:getString(v1 .. ".image#uvs", "0 0 1 1")
      v7 = GuiUtils.getUVs(v8, v6)
      local v9 = v9:getString(v1 .. ".image#displaySize")
      v8 = GuiUtils.getNormalizedValues(v9, {g_referenceScreenWidth, g_referenceScreenHeight}, nil)
    end
    table.insert(u3.paragraphs, v2)
  end)
  return v6
end
function HelpLineManager.convertText(v0, v1, v2)
  local v3 = v3:convertText(v1, v2)
  local v7 = v7:getCurrencySymbol(true)
  return string.gsub(...)
end
function HelpLineManager:getCategories()
  return self.categories
end
function HelpLineManager:getCategory(categoryIndex)
  if categoryIndex ~= nil then
    return self.categories[categoryIndex]
  end
  return nil
end
function HelpLineManager:getContextBasedHelp(v1, v2, v3)
  for v10, v11 in ipairs(self.zones) do
    local v12, v13, v14 = unpack(v11.position)
    local v15 = MathUtil.vector3Length(v12 - v1, v13 - v2, v14 - v3)
    if not (v15 <= v11.radius) then
      continue
    end
    if not (v15 < v4) then
      continue
    end
  end
  return v5, v6
end
function HelpLineManager:getIsContextBasedHelpAvailable(v1, v2, v3)
  local v4, v5 = self:getContextBasedHelp(v1, v2, v3)
  if v4 == nil then
  end
  return true
end
function HelpLineManager:openContextBasedHelp(v1, v2, v3)
  local v4, v5 = self:getContextBasedHelp(v1, v2, v3)
  v6:showGui("InGameMenu")
  v6:publish(MessageType.GUI_INGAME_OPEN_HELP_SCREEN, v4, v5)
end
local v1 = HelpLineManager.new()
g_helpLineManager = v1
HelpLineActivatable = {}
v1 = Class(HelpLineActivatable)
function HelpLineActivatable.new()
  local v0 = setmetatable({}, u0)
  local v1 = v1:getText("helpLine_open")
  v0.activateText = v1
  return v0
end
function HelpLineActivatable.getIsActivatable(v0)
  if g_gui.currentGui ~= nil then
    return false
  end
  if g_helpLineManager.helpData == nil then
    return false
  end
  local v1 = v1:getCanShowHelpTriggers()
  if not v1 then
    return false
  end
  return true
end
function HelpLineActivatable.run(v0)
  if g_helpLineManager.helpData ~= nil then
    v2:showGui("InGameMenu")
    v2:publishDelayed(MessageType.GUI_INGAME_OPEN_HELP_SCREEN, g_helpLineManager.helpData.categoryIndex, g_helpLineManager.helpData.pageIndex)
  end
end
function HelpLineActivatable.getDistance(v0, v1, v2, v3)
  if g_helpLineManager.helpData ~= nil and g_helpLineManager.helpData.triggerNode ~= nil then
    local v5, v6, v7 = getWorldTranslation(g_helpLineManager.helpData.triggerNode)
    return MathUtil.vector3Length(v1 - v5, v2 - v6, v3 - v7)
  end
  return math.huge
end
