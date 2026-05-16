-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AdsSystem = {}
local AdsSystem_mt = Class(AdsSystem)
AdsSystem.OCCLUSION_GROUP = {UI = 0}
function AdsSystem.new()
  local v0 = setmetatable({}, u0)
  v0.groups = {}
  for v5, v6 in pairs(AdsSystem.OCCLUSION_GROUP) do
    if v1 == 32 then
      Logging.warning("AdsSystem: Occclusion group limit (32) reached!")
      break
    end
    v0.groups[v6] = {id = v6, name = v5, regions = {}, isActive = false}
  end
  if g_isDevelopmentVersion then
    addConsoleCommand("gsAdsSystemShowOcclusionRegions", "Renders occlusion areas", "consoleCommandShowOcclusionRegions", v0)
  end
  v0.renderOcclusionRegions = false
  return v0
end
function AdsSystem:delete()
  removeConsoleCommand("gsAdsSystemShowOcclusionRegions")
  self.groups = {}
end
function AdsSystem:draw()
  if self.renderOcclusionRegions then
    for v4, v5 in pairs(self.groups) do
      local v7 = adsGetIsOcclusionRegionGroupActive(v5.id)
      if not v7 then
        continue
      end
      for v10, v11 in ipairs(v5.regions) do
        local v12, v13, v14, v15 = adsGetOcclusionRegion(v6, v10 - 1)
        drawFilledRect(v12, v13, v14 - v12, v15 - v13, 1, 0, 0, 0.3, nil, nil, nil, nil)
        setTextColor(1, 1, 1, 1)
        setTextAlignment(RenderText.ALIGN_LEFT)
        local v22 = tostring(v5.name)
        renderText(...)
      end
    end
  end
end
function AdsSystem:clearGroupRegion(groupId)
  if self.groups[groupId] ~= nil then
    self.groups[groupId].regions = {}
    adsClearOcclusionRegionGroup(groupId)
    return true
  end
  local v5 = tostring(groupId)
  Logging.warning(...)
  return false
end
function AdsSystem:addGroupRegion(groupId, x, y, width, height)
  if self.groups[groupId] ~= nil then
    if #self.groups[groupId].regions == 4 then
      Logging.warning("AdsSystem: Region limit (4) per group already reached!")
      return false
    end
    table.insert(v6.regions, {x = x, y = y, width = width, height = height})
    adsAddOcclusionRegion(groupId, x, y, x + width, y + height)
    return true
  end
  local v9 = tostring(groupId)
  Logging.warning(...)
  return false
end
function AdsSystem:setGroupActive(groupId, isActive)
  if self.groups[groupId] ~= nil then
    self.groups[groupId].isActive = isActive
    adsSetIsOcclusionRegionGroupActive(groupId, isActive)
    return false
  end
  local v6 = tostring(groupId)
  Logging.warning(...)
  return false
end
function AdsSystem:consoleCommandShowOcclusionRegions()
  self.renderOcclusionRegions = not self.renderOcclusionRegions
end
