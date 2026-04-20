-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModInfo = {}
local ModInfo_mt = Class(ModInfo)
function ModInfo.new(modId, postFix, priceString)
  local v3 = setmetatable({}, u0)
  v3.modId = modId
  v3.postFix = postFix
  v3.priceString = priceString
  return v3
end
function ModInfo:getId()
  return self.modId
end
function ModInfo:getName()
  return getModMetaAttributeString(self.modId, "title_" .. self.postFix)
end
function ModInfo:getAuthor()
  return getModMetaAttributeString(self.modId, "author")
end
function ModInfo:getDescription()
  return getModMetaAttributeString(self.modId, "description_" .. self.postFix)
end
function ModInfo:getHash()
  return getModMetaAttributeString(self.modId, "hash")
end
function ModInfo:getPriceString()
  return getModMetaAttributeString(self.modId, self.priceString)
end
function ModInfo:getVersionString()
  return getModMetaAttributeString(self.modId, "versionString")
end
function ModInfo:getDLCLink()
  return getModMetaAttributeString(self.modId, "DLCLink")
end
function ModInfo:getDLCSteamLink()
  return getModMetaAttributeString(self.modId, "DLCSteamLink")
end
function ModInfo:getIconFilename()
  return getModMetaAttributeString(self.modId, "iconImage")
end
function ModInfo:getScreenshot(index)
  local url = getModMetaAttributeString(self.modId, "screenshot" .. index - 1)
  if url == "" then
    return nil
  end
  return url
end
function ModInfo:getScreenshots()
  if self.screenshots == nil then
    -- TODO: structure LOP_FORNPREP (pc 9, target 20)
    local v7 = self:getScreenshot(1)
    table.insert(...)
    -- TODO: structure LOP_FORNLOOP (pc 19, target 10)
    self.screenshots = {}
  end
  return self.screenshots
end
function ModInfo:getFilesize()
  return getModMetaAttributeInt(self.modId, "filesize")
end
function ModInfo:getFilename()
  return getModMetaAttributeString(self.modId, "filename")
end
function ModInfo:getRatingScore()
  return getModMetaAttributeInt(self.modId, "ratingScore")
end
function ModInfo:getDownloadedBytes()
  return getModMetaAttributeInt(self.modId, "downloaded")
end
function ModInfo:getIsDLC()
  return getModMetaAttributeBool(self.modId, "isDLC")
end
function ModInfo:getIsExternal()
  return getModMetaAttributeBool(self.modId, "isExternal")
end
function ModInfo:getIsNew()
  return getModMetaAttributeBool(self.modId, "isNew")
end
function ModInfo:getIsInstalled()
  return getModMetaAttributeBool(self.modId, "isInstalled")
end
function ModInfo:getIsUpdate()
  return getModMetaAttributeBool(self.modId, "isUpdate")
end
function ModInfo:getIsDownload()
  return getModMetaAttributeBool(self.modId, "isDownload")
end
function ModInfo:getIsDownloading()
  return getModMetaAttributeBool(self.modId, "isDownloading")
end
function ModInfo:getHasConflict()
  return getModMetaAttributeBool(self.modId, "isConflict")
end
function ModInfo:getIsFailed()
  return getModMetaAttributeBool(self.modId, "isFailed")
end
function ModInfo:getIsIconLocal()
  return getModMetaAttributeBool(self.modId, "isIconImageLocal")
end
function ModInfo:getIsTop()
  local v2 = self:getIsExternal()
  if not v2 then
    v2 = getModMetaAttributeBool(self.modId, "isBeta")
  end
  return v1
end
function ModInfo:getNumUpdates()
  local v1 = self:getIsInstalled()
  if v1 then
    v1 = self:getIsUpdate()
    if v1 then
      return 1
    end
  end
  return 0
end
function ModInfo:getNumConflicts()
  local v1 = self:getIsInstalled()
  if v1 then
    v1 = self:getHasConflict()
    if v1 then
      return 1
    end
  end
  return 0
end
function ModInfo:getNumNew()
  local v1 = self:getIsNew()
  if v1 then
    v1 = self:getIsInstalled()
    if not v1 then
      v1 = self:getIsDownload()
      if not v1 then
        v1 = self:getIsDownloading()
        if not v1 then
          return 1
        end
      end
    end
  end
  return 0
end
