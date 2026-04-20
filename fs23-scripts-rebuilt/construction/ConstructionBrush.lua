-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionBrush = {}
local ConstructionBrush_mt = Class(ConstructionBrush)
ConstructionBrush.ERROR = {LAND_UNOWNED = 1, RESTRICTED_ZONE = 2, STORE_PLACE = 3, SPAWN_PLACE = 4, NO_PERMISSION = 5}
{}[ConstructionBrush.ERROR.LAND_UNOWNED] = "ui_construction_landIsNotOwned"
{}[ConstructionBrush.ERROR.RESTRICTED_ZONE] = "ui_construction_areaRestricted"
{}[ConstructionBrush.ERROR.STORE_PLACE] = "ui_construction_storeAreaRestricted"
{}[ConstructionBrush.ERROR.SPAWN_PLACE] = "ui_construction_spawnAreaRestricted"
{}[ConstructionBrush.ERROR.NO_PERMISSION] = "ui_construction_noBuildPermission"
ConstructionBrush.ERROR_MESSAGES = {}
ConstructionBrush.CURSOR_SIZES = {1, 2, 4, 8, 16}
function ConstructionBrush.new(subclass_mt, cursor)
  if not subclass_mt then
  end
  local v2 = v2(v3, v4)
  v2.isActive = false
  v2.cursor = cursor
  v2.supportsPrimaryButton = false
  v2.supportsPrimaryDragging = false
  v2.supportsSecondaryButton = false
  v2.supportsSecondaryDragging = false
  v2.supportsTertiaryButton = false
  v2.supportsPrimaryAxis = false
  v2.supportsSecondaryAxis = false
  v2.primaryAxisIsContinuous = false
  v2.secondaryAxisIsContinuous = false
  v2.inputTextDirty = true
  v2.activeSoundId = ConstructionSound.ID.NONE
  v2.activeSoundPitchModifier = nil
  return v2
end
function ConstructionBrush:delete()
  if self.isActive then
    self:deactivate()
  end
end
function ConstructionBrush:activate()
  self.isActive = true
  self.currentUserId = g_currentMission.playerUserId
  local v3 = v3:getFarmId()
  local v1 = v1:getFarmById(...)
  self.playerFarm = v1
  v1:setCursorTerrainOffset(false)
end
function ConstructionBrush:deactivate()
  self.isActive = false
  self.currentUserId = nil
  self.playerFarm = nil
end
function ConstructionBrush.copyState(v0, v1)
end
function ConstructionBrush.setParameters(v0, ...)
end
function ConstructionBrush:setStoreItem(storeItem)
  self.storeItem = storeItem
end
function ConstructionBrush.canCancel(v0)
  return false
end
function ConstructionBrush:verifyAccess(x, y, z)
  local v4 = self:hasPlayerPermission()
  if not v4 then
    return ConstructionBrush.ERROR.NO_PERMISSION
  end
  v4 = v4:canFarmAccessLand(g_currentMission.player.farmId, x, z, true)
  if not v4 then
    return ConstructionBrush.ERROR.LAND_UNOWNED
  end
  v4 = PlacementUtil.isInsidePlacementPlaces(g_currentMission.storeSpawnPlaces, x, y, z)
  if v4 then
    return ConstructionBrush.ERROR.STORE_PLACE
  end
  v4 = PlacementUtil.isInsidePlacementPlaces(g_currentMission.loadSpawnPlaces, x, y, z)
  if v4 then
    return ConstructionBrush.ERROR.SPAWN_PLACE
  end
  v4 = PlacementUtil.isInsideRestrictedZone(g_currentMission.restrictedZones, x, y, z)
  if v4 then
    return ConstructionBrush.ERROR.RESTRICTED_ZONE
  end
  return nil
end
function ConstructionBrush:hasPlayerPermission()
  if self.requiredPermission == nil then
    return true
  end
  local v1 = v1:getUserPermissions(self.currentUserId)
  if not v1[self.requiredPermission] then
  end
  return v2
end
function ConstructionBrush.update(v0, v1)
end
function ConstructionBrush.cancel(v0)
end
function ConstructionBrush.onButtonPrimary(v0)
end
function ConstructionBrush.onButtonSecondary(v0)
end
function ConstructionBrush.onButtonTertiary(v0)
end
function ConstructionBrush.onButtonSnapping(v0)
end
function ConstructionBrush.onAxisPrimary(v0, v1)
end
function ConstructionBrush.onAxisSecondary(v0, v1)
end
function ConstructionBrush:setInputTextDirty()
  self.inputTextDirty = true
end
function ConstructionBrush.getButtonPrimaryText(v0)
  return "PRIMARY"
end
function ConstructionBrush.getButtonSecondaryText(v0)
  return "SECONDARY"
end
function ConstructionBrush.getButtonTertiaryText(v0)
  return "TERTIARY"
end
function ConstructionBrush.getAxisPrimaryText(v0)
  return "PRIMARY AXIS"
end
function ConstructionBrush.getAxisSecondaryText(v0)
  return "SECONDARY AXIS"
end
function ConstructionBrush.getButtonSnappingText(v0)
  return "SNAPPING"
end
function ConstructionBrush:setActiveSound(soundId, pitchModifier)
  self.activeSoundId = soundId
  self.activeSoundPitchModifier = pitchModifier
end
function ConstructionBrush:playSound(soundId, pitchModifier)
  self.activeSoundId = soundId
  self.activeSoundPitchModifier = pitchModifier
end
