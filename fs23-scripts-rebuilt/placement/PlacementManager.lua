-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlacementManager = {TEST_STEP_SIZE = 1, ASYNC_NUM_OVERLAPS_PER_TICK = 4, DEFAULT_COLLISION_MASK = CollisionFlag.VEHICLE + CollisionFlag.PLAYER + CollisionFlag.DYNAMIC_OBJECT + CollisionFlag.TREE + CollisionFlag.STATIC_OBJECT}
local PlacementManager_mt = Class(PlacementManager)
function PlacementManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.getPlaceQueue = {}
  v1.currentPos = {placeIndex = 1, posOffset = 0}
  v1.spaceIsFree = true
  v1.noMoreSpaces = false
  return v1
end
function PlacementManager.delete(v0)
  v1:removeUpdateable(v0)
end
function PlacementManager:getPlaceAsync(places, reqSpace, callback, callbackTarget, filterFunction)
  local task = FindPlaceTask.new(places, reqSpace, callback, callbackTarget, filterFunction)
  table.insert(self.getPlaceQueue, task)
  v7:addUpdateable(self)
end
function PlacementManager:update()
  if 0 < #self.getPlaceQueue then
    -- TODO: structure LOP_FORNPREP (pc 15, target 106)
    local v5 = self.getPlaceQueue[1]:getNextPosition()
    self.spaceIsFree = false
    if v5 then
      self.spaceIsFree = true
      overlapBox(v5.x, v5.y + self.getPlaceQueue[1].halfHeight, v5.z, v5.xRot, v5.yRot, v5.zRot, self.getPlaceQueue[1].halfWidth, self.getPlaceQueue[1].halfHeight, self.getPlaceQueue[1].halfLength, "overlapBoxCallbackFuncFindPlace", self, PlacementManager.DEFAULT_COLLISION_MASK, true, true, true)
    else
      self.noMoreSpaces = true
    end
    if not self.spaceIsFree then
      -- if not v0.noMoreSpaces then goto L98 end
    end
    if self.spaceIsFree then
      v1.callback(v1.callbackTarget, v5)
    else
      v1.callback(v1.callbackTarget, nil)
    end
    table.remove(self.getPlaceQueue, 1)
    self.noMoreSpaces = false
    self.spaceIsFree = false
    return
    -- TODO: structure LOP_FORNLOOP (pc 98, target 16)
    return
  end
  v1:removeUpdateable(self)
end
function PlacementManager:overlapBoxCallbackFuncFindPlace(node)
  if node ~= 0 and node ~= g_currentMission.terrainRootNode then
    local v2 = getHasTrigger(node)
    if not v2 then
      self.spaceIsFree = false
      return false
    end
  end
end
function PlacementManager:consoleCommandTogglePlacementDebug()
  PlacementManager.debugEnabled = not PlacementManager.debugEnabled
  if not PlacementManager.debugEnabled then
    for v4, v5 in pairs(self.debugElements) do
      v6:removePermanentElement(v5)
    end
  end
  v3 = tostring(PlacementManager.debugEnabled)
  return "PlacementManager debug = " .. v3
end
