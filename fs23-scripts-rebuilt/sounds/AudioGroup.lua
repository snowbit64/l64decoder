-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AudioGroup = {groups = {}}
function AudioGroup:getAudioGroupIndexByName()
  if self ~= nil then
    local v1 = self:upper()
    return AudioGroup[v1]
  end
  return nil
end
function AudioGroup.getAudioGroupNameByIndex(index)
  if index ~= nil then
    for v4, v5 in pairs(AudioGroup) do
      if not (index == v5) then
        continue
      end
      return v4
    end
  end
  return nil
end
function AudioGroup.getIsValidAudioGroup(audioGroupIndex)
  for v4, v5 in pairs(AudioGroup) do
    if not (v5 == audioGroupIndex) then
      continue
    end
    return true
  end
  return false
end
function AudioGroup:addGroup(v1)
  local v2 = self:upper()
  if AudioGroup[v2] == nil then
    for v6, v7 in pairs(AudioGroup) do
      if not (v7 == v1) then
        continue
      end
      break
    end
    if not v2 then
      AudioGroup[self] = v1
      table.insert(AudioGroup.groups, AudioGroup[self])
      return
    end
    Logging.error("AudioGroup id '%d' already defined", v1)
    return
  end
  Logging.error("AudioGroup '%s' already defined!", self)
end
function AudioGroup.getNextId()
  for v4, v5 in pairs(AudioGroup.groups) do
    local v6 = math.max(v5 + 1, v0)
  end
  if v0 ~= -1 then
    -- if 255 >= v0 then goto L26 end
  end
  return nil
  return v0
end
function AudioGroup.loadGroups()
  local xmlFile = loadXMLFile("AudioGroups", "shared/audioGroups.xml")
  if xmlFile == 0 then
    Logging.error("Failed to load audio groups!")
    return
  end
  while true do
    v2 = string.format("audioGroups.audioGroup(%d)", v1)
    v3 = hasXMLProperty(xmlFile, v2)
    if not v3 then
      break
    end
    v3 = getXMLInt(xmlFile, v2 .. "#id")
    v4 = getXMLString(xmlFile, v2 .. "#name")
    if v3 ~= nil then
      if v4 ~= nil then
        v5 = v4:upper()
        if AudioGroup[v5] == nil then
          for v9, v10 in pairs(AudioGroup) do
            if not (v10 == v3) then
              continue
            end
            break
          end
          if not v5 then
            AudioGroup[v4] = v3
            table.insert(AudioGroup.groups, AudioGroup[v4])
            -- goto L110  (LOP_JUMP +29)
          end
          Logging.xmlError(xmlFile, "AudioGroup id '%d' already defined in '%s'!", v3, v2)
          -- goto L110  (LOP_JUMP +21)
        end
        Logging.xmlError(xmlFile, "AudioGroup '%s' already defined in '%s'!", v4, v2)
        -- goto L110  (LOP_JUMP +13)
      end
      Logging.xmlError(xmlFile, "Missing name for audio group '%s'!", v2)
    else
      Logging.xmlError(xmlFile, "Missing id for audio group '%s'!", v2)
    end
  end
  delete(xmlFile)
end
