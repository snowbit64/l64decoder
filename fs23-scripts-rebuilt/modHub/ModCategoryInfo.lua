-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModCategoryInfo = {}
local ModCategoryInfo_mt = Class(ModCategoryInfo)
function ModCategoryInfo.new(id, label, iconFilename, name, isHidden)
  local v5 = setmetatable({}, u0)
  v5.id = id
  v5.label = label
  v5.iconFilename = iconFilename
  v5.name = name
  v5.isHidden = isHidden
  v5.numAvailableUpdates = 0
  v5.numNewItems = 0
  v5.numConflictedItems = 0
  return v5
end
function ModCategoryInfo:setNumAvailableUpdates(numAvailableUpdates)
  self.numAvailableUpdates = numAvailableUpdates
end
function ModCategoryInfo:setNumNewItems(numNewItems)
  self.numNewItems = numNewItems
end
function ModCategoryInfo:setNumConflictedItems(numConflictedItems)
  self.numConflictedItems = numConflictedItems
end
function ModCategoryInfo:getNumMods()
  return getNumOfMods(self.id - 1)
end
