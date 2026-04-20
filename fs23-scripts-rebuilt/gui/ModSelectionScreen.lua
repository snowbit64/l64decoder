-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModSelectionScreen = {CONTROLS = {"buttonToggleCrossplay", MOD_LIST = "modList", NO_MODS_DLCS_ELEMENT = "noModsDLCsElement", SELECT_ALL_BUTTON = "buttonSelectAll", SELECT_BUTTON = "buttonSelect", START_BUTTON = "buttonStart"}}
local ModSelectionScreen_mt = Class(ModSelectionScreen, ScreenElement)
function ModSelectionScreen.register()
  local v0 = ModSelectionScreen.new()
  v1:loadGui("dataS/gui/ModSelectionScreen.xml", "ModSelectionScreen", v0)
  return v0
end
function ModSelectionScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ModSelectionScreen.CONTROLS)
  v2.availableMods = {}
  v2.selectedMods = {}
  v2.uniqueTypesInUse = {}
  v2.numAddedModsBesidesMap = 0
  v2.crossplayOnly = Platform.isConsole
  return v2
end
function ModSelectionScreen:createFromExistingGui(v1)
  local v2 = ModSelectionScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function ModSelectionScreen:setMissionInfo(missionInfo, missionDynamicInfo)
  self.missionInfo = missionInfo
  self.missionDynamicInfo = missionDynamicInfo
end
function ModSelectionScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  local v1 = v1:getModNameFromMapId(self.missionInfo.mapId)
  self.mapModName = v1
  self:loadAvailableMods()
  v1:reloadData()
  if self.crossplayOnly then
    local v3 = v3:getText("button_modHubShowAll")
    -- if v3 then goto L46 end
  end
  v3 = v3:getText("button_modHubShowCrossplay")
  v1:setText(v3)
  if not Platform.isConsole then
  end
  v1:setVisible(v3)
  v1:invalidateLayout()
  if self.mapModName ~= nil then
    v3 = v3:getModByName(self.mapModName)
    self:setItemState(v3, true)
  end
  if GS_PLATFORM_PLAYSTATION then
    v2 = getModUseAvailability(false)
    if v2 ~= MultiplayerAvailability.AVAILABLE then
    end
  end
  if self.missionInfo.isValid then
    for v5, v6 in pairs(self.missionInfo.mods) do
      if not (v6.modName ~= self.mapModName) then
        continue
      end
      local v7 = v7:getModByName(v6.modName)
      if not (v7 ~= nil) then
        continue
      end
      local v8 = self:shouldShowModInList(v7)
      if not v8 then
        continue
      end
      self:setItemState(v7, v7.isDLC or v1)
    end
  else
    for v5, v6 in ipairs(self.availableMods) do
      self:setItemState(v6, v6.isDLC or v1)
    end
  end
  if self.missionDynamicInfo.isMultiplayer then
    v4 = v4:getText("button_continue")
    v2:setText(...)
  else
    v4 = v4:getText("button_start")
    v2:setText(...)
  end
  if Platform.isMobile then
    self:onClickOk()
  end
end
function ModSelectionScreen:onClose()
  self.availableMods = {}
  self.selectedMods = {}
  self.uniqueTypesInUse = {}
  local v2 = v2:superClass()
  v2.onClose(self)
end
function ModSelectionScreen:toggleAllAction()
  if 0 < #self.availableMods then
    if 0 < self.numAddedModsBesidesMap then
      for v4, v5 in pairs(self.selectedMods) do
        self:setItemState(v5, false)
      end
      return
    end
    for v6, v7 in pairs(self.availableMods) do
      if v7.isDLC then
      else
      end
    end
    if 0 < v2 and v1 == 0 then
      v3 = PlatformPrivilegeUtil.checkModUse(self.performSelectAll, self)
      if not v3 then
        return
      end
    end
    self:performSelectAll()
  end
end
function ModSelectionScreen:performSelectAll()
  local v2 = getModUseAvailability(false)
  if v2 ~= MultiplayerAvailability.AVAILABLE then
  end
  for v5, v6 in ipairs(self.availableMods) do
    self:setItemState(v6, v6.isDLC or v1)
  end
end
function ModSelectionScreen:selectCurrentMod()
  local mod = self:getSelectedMod()
  if not mod.isDLC then
    local v2 = PlatformPrivilegeUtil.checkModUse(self.selectCurrentMod, self)
    if not v2 then
      return
    end
  end
  local v3 = self:getIsModSelected(mod)
  v3 = self:setItemState(mod, not v3)
  if not v3 then
    local v10 = v10:getText("ui_modConflictQuestion")
    local v9 = string.format(v10, mod.title, self.uniqueTypesInUse[mod.uniqueType].title)
    YesNoDialog.show(...)
  end
end
function ModSelectionScreen:toggleModAction()
  self:selectCurrentMod()
end
function ModSelectionScreen:onClickOk()
  local unresolved = self:verifyDependencies()
  if #unresolved == 0 then
    for v6, v7 in pairs(self.selectedMods) do
      table.insert(v2, v7)
    end
    self.missionDynamicInfo.mods = v2
    v3:startGame(self.missionInfo, self.missionDynamicInfo)
    return
  end
  if g_dedicatedServer == nil then
    for v9, v10 in ipairs(unresolved) do
      if v5[v10.mod.title] == nil then
        v5[v10.mod.title] = v10.dependencyTitle
      else
        v5[v10.mod.title] = v5[v10.mod.title] .. ", " .. v10.dependencyTitle
      end
      if v10.dependencyModId ~= nil then
        table.insert(v3, v10.dependencyModId)
      elseif v10.canActivate then
        table.insert(v2, v10.dependencyMod)
      else
      end
    end
    for v10, v11 in pairs(v5) do
      if v6 == nil then
        local v13 = v13:getText("ui_mod_required")
        local v12 = string.format(v13, v10, v11)
      else
        local v15 = v15:getText("ui_mod_required")
        local v14 = string.format(v15, v10, v11)
      end
    end
    if 0 < #v2 then
      v14 = v14:getText("ui_mod_selectAllRequired")
      YesNoDialog.show(function(self)
        if self then
          for v4, v5 in ipairs(u0) do
            v6:setItemState(v5, true)
          end
        end
      end, nil, v6 .. "\n\n" .. v14, nil, nil, nil, DialogElement.TYPE_ERROR)
      return
    end
    if 0 < #v3 then
      v14 = v14:getText("ui_mod_downloadAllRequired")
      YesNoDialog.show(function(self)
        if self then
          unresolved:startModification()
          function failure()
            u0 = u0 - 1
            local unresolved = unresolved:getText("modHub_installFailed")
            InfoDialog.show(...)
            if u0 == 0 then
              self:goToModHub()
            end
          end
          function added()
            u0 = u0 - 1
            if u0 == 0 then
              self:goToModHub()
            end
          end
          v2:setModInstallFailedCallback(failure, u1)
          v2:setDependendModIstallFailedCallback(failure, u1)
          v2:setAddedToDownloadCallback(added, u1)
          for v5, v6 in ipairs(u0) do
            v7:install(v6)
          end
        end
      end, nil, v6 .. "\n\n" .. v14, nil, nil, nil, DialogElement.TYPE_ERROR)
      return
    end
    -- if not v4 then goto L215 end
    InfoDialog.show(v6, nil, nil, DialogElement.TYPE_ERROR)
    return
  end
  Logging.error("Could not start dedicated server with current mod setup because some dependencies are missing!")
end
function ModSelectionScreen.goToModHub(v0)
  unresolved:disconnectFromMasterServer()
  unresolved:shutdownAll()
  unresolved:openDownloads()
end
function ModSelectionScreen:onDoubleClick(index)
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
  self:selectCurrentMod()
end
function ModSelectionScreen:toggleCrossplay()
  self.crossplayOnly = not self.crossplayOnly
  self:loadAvailableMods()
  for v5, v6 in ipairs(self.availableMods) do
    if not unresolved[v6] then
      continue
    end
    self:setItemState(v6, true)
  end
  v2:reloadData()
  if self.crossplayOnly then
    v4 = v4:getText("button_modHubShowAll")
    -- if v4 then goto L48 end
  end
  v4 = v4:getText("button_modHubShowCrossplay")
  v2:setText(v4)
end
function ModSelectionScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if g_dedicatedServer ~= nil then
    for v5, v6 in pairs(self.selectedMods) do
      self:setItemState(v6, false)
    end
    for v5, v6 in pairs(g_dedicatedServer.mods) do
      local v7 = v7:getModByName(v6)
      if not (v7 ~= nil) then
        continue
      end
      local v8 = self:shouldShowModInList(v7)
      if v8 then
        self:setItemState(v7, true)
      else
        Logging.error("Mod '%s' is not available for current dedicated server setup", v7.title)
      end
    end
    self:onClickOk()
    return
  end
  if Profiler.IS_INITIALIZED then
    self:onClickOk()
  end
  if g_startMissionInfo.isMultiplayer then
    Platform.verifyMultiplayerAvailabilityInMenu()
  end
end
function ModSelectionScreen:shouldShowModInList(mod)
  if not not self.missionDynamicInfo.isMultiplayer and mod.isMultiplayerSupported and mod.fileHash == nil then
  end
  if v2 and not self.missionDynamicInfo.isMultiplayer and mod.multiplayerOnly then
  end
  if not mod.isSelectable then
  end
  if v2 and not mod.isDLC and mod.modName ~= self.mapModName then
    for v6, v7 in pairs(g_mapManager.idToMap) do
      local v8 = v8:getModNameFromMapId(v6)
      if not (v8 ~= nil) then
        continue
      end
      if not (v8 == mod.modName) then
        continue
      end
      break
    end
  end
  if not mod.isDLC and self.crossplayOnly and self.missionDynamicInfo.isMultiplayer and v2 then
    if mod.hasScripts and not mod.isInternalScriptMod then
      return false
    end
    v3 = getModIdByFilename(mod.modName)
    if v3 ~= 0 then
      v4 = getModMetaAttributeString(v3, "hash")
      -- if v4 == v1.fileHash then goto L98 end
    end
  end
  return v2
end
function ModSelectionScreen:isModActivated(name)
  for v5, v6 in pairs(self.selectedMods) do
    if not (v6.modName == name) then
      continue
    end
    return true
  end
  return false
end
function ModSelectionScreen:verifyDependencies()
  for v5, v6 in pairs(self.selectedMods) do
    if not (v6.dependencies ~= nil) then
      continue
    end
    if not (0 < #v6.dependencies) then
      continue
    end
    for v10, v11 in ipairs(v6.dependencies) do
      local v12 = self:isModActivated(v11)
      if not not v12 then
        continue
      end
      v12 = v12:getModByName(v11)
      if v12 == nil then
        local v13 = getModIdByFilename(v11)
        if v13 ~= 0 then
          local v14 = v14:getModInfo(v13)
          local v22 = v14:getName()
          table.insert(unresolved, {mod = v6, dependencyTitle = "'" .. v22 .. "'", dependencyModId = v13})
          continue
        end
        table.insert(unresolved, {mod = v6, dependencyTitle = "'" .. v11 .. ".zip'"})
      else
        table.insert(unresolved, {mod = v6, dependencyTitle = "'" .. v12.title .. "'", dependencyMod = v12, canActivate = true})
      end
    end
  end
  return unresolved
end
function ModSelectionScreen:loadAvailableMods()
  self.availableMods = {}
  self.selectedMods = {}
  self.numAddedModsBesidesMap = 0
  local unresolved = unresolved:getMods()
  table.sort(unresolved, function(self, unresolved)
    if self.title >= unresolved.title then
    end
    return true
  end)
  -- TODO: structure LOP_FORNPREP (pc 24, target 45)
  local v6 = self:shouldShowModInList(unresolved[1])
  if v6 then
    table.insert(self.availableMods, unresolved[1])
    self:setItemState(unresolved[1], false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 44, target 25)
  if #self.availableMods ~= 0 then
  end
  v2:setDisabled(true)
  if #self.availableMods ~= 0 then
  end
  v2:setVisible(true)
end
function ModSelectionScreen:setItemState(item, isSelected)
  if item ~= nil then
    if item.uniqueType ~= nil then
      if self.uniqueTypesInUse[item.uniqueType] ~= nil then
        if isSelected then
          return false
        end
        self.uniqueTypesInUse[item.uniqueType] = nil
      elseif isSelected then
        self.uniqueTypesInUse[item.uniqueType] = item
        -- goto L30  (LOP_JUMP +0)
      end
    end
    if self.mapModName ~= nil and item.modName == self.mapModName then
    end
    if isSelected then
      if v3 and self.selectedMods[item] == nil then
        self.numAddedModsBesidesMap = self.numAddedModsBesidesMap + 1
      end
      self.selectedMods[item] = item
    elseif v3 then
      if self.selectedMods[item] ~= nil then
        self.numAddedModsBesidesMap = self.numAddedModsBesidesMap - 1
      end
      self.selectedMods[item] = nil
    end
    if not v3 then
    end
    local v4 = self:getIndexForItem(item)
    if v4 ~= nil then
      local v5 = v5:getElementAtSectionIndex(1, v4)
      if v5 ~= nil then
        local v6 = v5:getAttribute("tick")
        v6:setVisible(isSelected)
      end
    end
  end
  self:updateSelectButton()
  return true
end
function ModSelectionScreen:getIndexForItem(item)
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  if self.availableMods[1] == item then
    return 1
  end
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  return nil
end
function ModSelectionScreen:getIsModSelected(item)
  if self.selectedMods[item] == nil then
  end
  return true
end
function ModSelectionScreen:onListSelectionChanged(list, section, index)
  self:updateSelectButton()
end
function ModSelectionScreen:getSelectedMod()
  return self.availableMods[self.modList.selectedIndex]
end
function ModSelectionScreen:updateSelectButton()
  local v3 = self:getSelectedMod()
  if self.selectedMods[v3] == nil then
    v3 = v3:getText("button_select")
    item:setText(...)
  else
    v3 = v3:getText("button_deselect")
    item:setText(...)
  end
  if 0 < #self.availableMods then
    if 0 < self.numAddedModsBesidesMap then
      v3 = v3:getText("button_deselectAll")
      item:setText(...)
      return
    end
    v3 = v3:getText("button_selectAll")
    item:setText(...)
  end
end
function ModSelectionScreen:getNumberOfItemsInSection(list, section)
  return #self.availableMods
end
function ModSelectionScreen:populateCellForItemInSection(list, section, index, cell)
  local v6 = cell:getAttribute("title")
  v6:setText(self.availableMods[index].title)
  v6 = cell:getAttribute("version")
  v6:setText(self.availableMods[index].version)
  v6 = cell:getAttribute("icon")
  v6:setImageFilename(self.availableMods[index].iconFilename)
  v6 = cell:getAttribute("tick")
  if self.selectedMods[self.availableMods[index]] == nil then
  end
  v6:setVisible(true)
end
