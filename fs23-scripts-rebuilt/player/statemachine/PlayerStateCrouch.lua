-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateCrouch = {}
local PlayerStateCrouch_mt = Class(PlayerStateCrouch, PlayerStateBase)
PlayerStateCrouch.PROGRESS_STATES = {CROUCHING = 1, CROUCH = 2, STANDING = 3, UP = 4}
function PlayerStateCrouch.new(player, stateMachine)
  local v2 = PlayerStateBase.new(player, stateMachine, u0)
  v2.crouchTime = 0.25
  v2.crouchFactor = 0
  v2.crouchYOffset = 0.8
  v2.cameraY = 0
  v2.crouchCameraY = 0
  v2.progress = PlayerStateCrouch.PROGRESS_STATES.UP
  v2.toggleMode = false
  return v2
end
PlayerStateBase.load = function(self)
  self.cameraY = self.player.camY
end
function PlayerStateCrouch:isAvailable()
  if self.player.baseInformation.isInWater then
    return false
  end
  local v1 = v1:hasHandtoolEquipped()
  if v1 then
    v1 = v1:isBeingUsed()
    if v1 then
      return false
    end
  end
  return true
end
function PlayerStateCrouch:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  setTranslation(self.player.cameraNode, 0, self.cameraY, 0)
end
function PlayerStateCrouch:update(dt)
  self:processInput()
  self:moveCamera(dt)
  if self.crouchFactor == 1 then
    self.progress = PlayerStateCrouch.PROGRESS_STATES.CROUCH
    return
  end
  if self.crouchFactor == 0 then
    self.progress = PlayerStateCrouch.PROGRESS_STATES.UP
  end
end
function PlayerStateCrouch:processInput()
  if self.player.baseInformation.currentHandtool ~= nil then
    local v1 = v1:hasHandtoolEquipped()
    -- if not v1 then goto L124 end
    v1 = v1:isBeingUsed()
    -- if v1 then goto L124 end
  end
  if self.progress ~= PlayerStateCrouch.PROGRESS_STATES.CROUCHING and self.progress ~= PlayerStateCrouch.PROGRESS_STATES.CROUCH then
  end
  if v1 ~= PlayerStateCrouch.PROGRESS_STATES.STANDING and v1 ~= PlayerStateCrouch.PROGRESS_STATES.UP then
  end
  if self.toggleMode then
    -- if v2 ~= Player.BUTTONSTATES.PRESSED then goto L124 end
    if v3 then
      self.progress = PlayerStateCrouch.PROGRESS_STATES.STANDING
      return
    end
    -- if not v4 then goto L124 end
    self.progress = PlayerStateCrouch.PROGRESS_STATES.CROUCHING
    return
  end
  if v2 == Player.BUTTONSTATES.PRESSED and v4 then
    self.progress = PlayerStateCrouch.PROGRESS_STATES.CROUCHING
    return
  end
  if v2 == Player.BUTTONSTATES.RELEASED and v3 then
    self.progress = PlayerStateCrouch.PROGRESS_STATES.STANDING
  end
end
function PlayerStateCrouch:moveCamera(dt)
  if self.progress == PlayerStateCrouch.PROGRESS_STATES.CROUCHING then
    local v3 = math.min(1, self.crouchFactor + dt * 0.001 / self.crouchTime)
    self.crouchFactor = v3
  elseif self.progress == PlayerStateCrouch.PROGRESS_STATES.CROUCH then
  else
    if self.progress == PlayerStateCrouch.PROGRESS_STATES.STANDING then
      v3 = math.max(0, self.crouchFactor - dt * 0.001 / self.crouchTime)
      self.crouchFactor = v3
    elseif self.progress == PlayerStateCrouch.PROGRESS_STATES.UP then
      self:deactivate()
    end
  end
  self.crouchCameraY = self.cameraY - self.crouchYOffset * self.crouchFactor
end
