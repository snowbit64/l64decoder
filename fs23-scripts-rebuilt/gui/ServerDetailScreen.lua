-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ServerDetailScreen = {CONTROLS = {"mainBox", "mapIconElement", "warningElement", "warningTextElement", "serverNameElement", "mapElement", "languageElement", "passwordElement", "playerCircleElement", "numPlayersElement", "modList", "listItemTemplate", "noModsDLCsElement", "getModsButton", "startElement", "showProfileButton", "headerText", "notAllModsOnSystemLabel", "platformElement", "crossPlayElement", "blockOrShowButton"}}
local ServerDetailScreen_mt = Class(ServerDetailScreen, ScreenElement)
function ServerDetailScreen.register()
  local v0 = ServerDetailScreen.new()
  v1:loadGui("dataS/gui/ServerDetailScreen.xml", "ServerDetailScreen", v0)
  return v0
end
function ServerDetailScreen.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ServerDetailScreen.CONTROLS)
  v2.returnScreenName = "JoinGameScreen"
  return v2
end
function ServerDetailScreen:createFromExistingGui(v1)
  local v2 = ServerDetailScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function ServerDetailScreen:onCreate(element)
  v2:removeElement(self.listItemTemplate)
end
function ServerDetailScreen:onCreateList(element)
  self.modList = element
end
function ServerDetailScreen:setServerInfo(id, name, language, capacity, numPlayers, mapName, mapId, hasPassword, isLanServer, modTitles, modHashes, areAllModsAvailable, allowCrossPlay, platformId)
  self.serverId = id
  self.numPlayers = numPlayers
  self.capacity = capacity
  self.areAllModsAvailable = areAllModsAvailable
  self.hasPassword = hasPassword
  self.platformId = platformId
  self.serverName = name
  v15:setText(name)
  v15:setText(name)
  v15:setText(mapName)
  local v17 = getLanguageName(language)
  v15:setText(...)
  v15:setPlatformId(platformId)
  local v15 = v15:getMapById(mapId)
  if v15 ~= nil then
    numPlayersText:setImageFilename(v15.iconFilename)
  else
    numPlayersText:setImageFilename("dataS/menu/modHubPreview_default.png")
  end
  if hasPassword then
  else
  end
  numPlayersText:setLocaKey(v18)
  if allowCrossPlay then
  else
  end
  numPlayersText:setLocaKey(v18)
  if numPlayers == 0 then
    numPlayersText:applyProfile("serverDetailInfoValue")
  elseif numPlayers == capacity then
    numPlayersText:applyProfile("serverDetailInfoValueDanger")
  else
    numPlayersText:applyProfile("serverDetailInfoValue")
  end
  local numPlayersText = string.format("%02d/%02d", numPlayers, capacity)
  v17:setText(numPlayersText)
  if areAllModsAvailable and numPlayers >= capacity then
  end
  v18:setDisabled(not v17)
  self.modTitles = modTitles
  self.modHashes = modHashes
  if #modTitles ~= 0 then
  end
  v18:setVisible(true)
  if 0 < #modTitles then
  end
  v18:setVisible(v20)
  v18:setDataSource(self)
  v18:reloadData()
  local v18, v19, v20 = self:getDownloadableModsInfo()
  if v20 ~= 0 then
  end
  v21:setDisabled(true)
  if Platform.hasNativeProfiles then
    local v23 = getPlatformId()
    local v21 = getPlatformIdsAreCompatible(...)
    if v21 then
      v23 = v23:getText("button_showProfile")
      v21:setText(...)
      self.doShowUserProfile = true
      return
    end
  end
  v23 = v23:getText("button_block")
  v21:setText(...)
  self.doShowUserProfile = false
end
function ServerDetailScreen:onOpen()
  local name = name:superClass()
  name.onOpen(self)
  id:setVisible(not Platform.isStadia)
end
function ServerDetailScreen:onClickOk()
  if self.areAllModsAvailable and self.numPlayers < self.capacity then
    if not self.hasPassword then
      id:startGame("", self.serverId)
      return
    end
    local name = name:getTableValue("joinGame", "password")
    local id = Utils.getNoNil(name, "")
    PasswordDialog.show(self.onPasswordEntered, self, nil, id)
  end
end
function ServerDetailScreen:getDownloadableModsInfo()
  -- TODO: structure LOP_FORNPREP (pc 9, target 58)
  local hasPassword = hasPassword:getIsModAvailable(self.modHashes[1])
  if not hasPassword then
    local hasPassword, isLanServer, modTitles, modHashes = ServerDetailScreen.unpackModInfo(self.modTitles[1])
    local areAllModsAvailable = getModIdByFilename(modHashes)
    if areAllModsAvailable ~= 0 then
      local allowCrossPlay = getModMetaAttributeString(areAllModsAvailable, "hash")
      if allowCrossPlay == self.modHashes[1] then
        allowCrossPlay = getModMetaAttributeBool(areAllModsAvailable, "isDLC")
        if not allowCrossPlay then
          {}[#{} + 1] = areAllModsAvailable
          allowCrossPlay = getModMetaAttributeInt(areAllModsAvailable, "filesize")
        end
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 57, target 10)
  return id, name, language
end
function ServerDetailScreen:onClickDownload()
  local id, name, language = self:getDownloadableModsInfo()
  local capacity = capacity:getFreeModSpaceKb()
  local numPlayers = math.floor((name + 1023) / 1024)
  if capacity < numPlayers then
    local mapId = mapId:getText("modHub_installNoFreeSpace")
    local mapName = string.format(mapId, numPlayers, capacity)
    InfoDialog.show(...)
    return
  end
  local modTitles = modTitles:getText("ui_downloadingServerMods")
  local isLanServer = string.format(modTitles, language, name / 1024)
  modTitles = modTitles:getText("ui_downloadingServerModsTitle")
  YesNoDialog.show(...)
end
function ServerDetailScreen:onClickBlockOrShowInfo()
  if self.doShowUserProfile then
    local id, name, language = masterServerGetServerUserInfo(self.serverId)
    showUserProfile(name)
    return
  end
  local numPlayers = numPlayers:getText("ui_doYouWantToBlockThisServer")
  local mapName = mapName:getText("ui_doYouWantToBlockThisServer_title")
  YesNoDialog.show(...)
end
function ServerDetailScreen.goToModHub(v0)
  id:disconnectFromMasterServer()
  id:shutdownAll()
  id:openDownloads()
end
function ServerDetailScreen.installMods(v0, id)
  name:startModification()
  function failure()
    u0 = u0 - 1
    local id = id:getText("modHub_installFailed")
    InfoDialog.show(...)
    if u0 == 0 then
      v0:goToModHub()
    end
  end
  function added()
    u0 = u0 - 1
    if u0 == 0 then
      v0:goToModHub()
    end
  end
  language:setModInstallFailedCallback(failure, v0)
  language:setDependendModIstallFailedCallback(failure, v0)
  language:setAddedToDownloadCallback(added, v0)
  for mapName, mapId in ipairs(id) do
    local hasPassword = getModMetaAttributeBool(mapId, "isUpdate")
    if hasPassword then
      hasPassword:update(mapId)
    else
      hasPassword:install(mapId)
    end
  end
end
function ServerDetailScreen:onPasswordEntered(password, clickOk)
  if clickOk then
    language:setTableValue("joinGame", "password", password)
    language:saveToXMLFile(g_savegameXML)
    language:startGame(password, self.serverId)
  end
end
function ServerDetailScreen.packModInfo(modTitle, version, author, modName)
  local capacity = string.gsub(modTitle, ";", " ")
  capacity = string.gsub(version, ";", " ")
  capacity = string.gsub(author, ";", " ")
  capacity = string.gsub(modName, ";", " ")
  return capacity .. ";" .. capacity .. ";" .. capacity .. ";" .. capacity
end
function ServerDetailScreen:unpackModInfo()
  local id = self:split(";")
  if id[1] ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000002 -> L13
  end
  if language ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000002 -> L18
  end
  if capacity == nil then
  end
  if numPlayers == nil then
  end
  return name, language, capacity, numPlayers
end
function ServerDetailScreen:getNumberOfItemsInSection(list, section)
  return #self.modTitles
end
function ServerDetailScreen:populateCellForItemInSection(list, section, index, cell)
  local numPlayers, mapName, mapId, hasPassword = ServerDetailScreen.unpackModInfo(self.modTitles[index])
  local v17 = v17:getIsModAvailable(self.modHashes[index])
  if v17 then
    v17 = v17:getModByFileHash(self.modHashes[index])
  else
    v17 = getModIdByFilename(hasPassword)
    if v17 ~= 0 then
      local v18 = getModMetaAttributeString(v17, "hash")
      -- if v18 ~= v0.modHashes[v3] then goto L73 end
      v18 = v18:getModInfo(v17)
      local v19 = v18:getName()
      v19 = v18:getVersionString()
      v19 = v18:getIconFilename()
    else
    end
  end
  v17 = cell:getAttribute("icon")
  if allowCrossPlay == nil then
  end
  v17:setVisible(true)
  if allowCrossPlay ~= nil then
    if platformId ~= true then
    end
    v17:setIsWebOverlay(true)
    v17:setImageFilename(allowCrossPlay)
  end
  v18 = cell:getAttribute("title")
  v18:setText(modTitles)
  v18 = cell:getAttribute("version")
  v18:setText(modHashes)
  v18 = cell:getAttribute("availability")
  v18:setLocaKey(v15)
  v18 = cell:getAttribute("availability")
  if v15 ~= "ui_modUnavailable" then
  else
  end
  v18:applyProfile(v20)
  v18 = cell:getAttribute("title")
  if areAllModsAvailable ~= nil then
  else
  end
  v18:applyProfile(v20)
  v19 = cell:getAttribute("version")
  if areAllModsAvailable ~= nil then
  else
  end
  v18:applyProfile(v20)
  if areAllModsAvailable ~= nil then
    local v22 = areAllModsAvailable:len()
    v18 = areAllModsAvailable:sub(1, v22 / 2)
    local v23 = areAllModsAvailable:len()
    v19 = areAllModsAvailable:sub(v23 / 2 + 1)
    local v20 = cell:getAttribute("hash")
    v20:setText(v18 .. "\n" .. v19)
    v20 = cell:getAttribute("hash")
    v20:setVisible(true)
    v20 = cell:getAttribute("author")
    v20:setText(numPlayersText)
    v20 = cell:getAttribute("author")
    v20:setVisible(true)
    return
  end
  v18 = cell:getAttribute("hash")
  v18:setVisible(false)
  v18 = cell:getAttribute("author")
  v18:setVisible(false)
end
