-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateJump = {}
local PlayerStateJump_mt = Class(PlayerStateJump, PlayerStateBase)
function PlayerStateJump.new(player, stateMachine)
  local v2 = PlayerStateBase.new(player, stateMachine, u0)
  v2.playerPos = {}
  v2.jumpDuration = 0
  return v2
end
function PlayerStateJump:delete()
  if self.player.isOwner then
    removeConsoleCommand("gsPlayerFsmStateJumpDebug")
  end
end
function PlayerStateJump:load()
  if self.player.isOwner then
    addConsoleCommand("gsPlayerFsmStateJumpDebug", "Toggle debug mode for Jump", "consoleCommandDebugStateJump", self)
  end
end
function PlayerStateJump:isAvailable()
  local v1 = v1:hasHandtoolEquipped()
  if v1 then
    v1 = v1:isBeingUsed()
    if v1 then
      return false
    end
  end
  if self.player.baseInformation.isOnGround then
    local v3 = v3:isInGameMessageActive()
  end
  return v2
end
function PlayerStateJump:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  local velY = math.sqrt(-2 * self.player.motionInformation.gravity * self.player.motionInformation.jumpHeight)
  self.player.motionInformation.currentSpeedY = velY * 2
  v2 = self:inDebugMode()
  if v2 then
    self.playerPos = {}
    self.jumpDuration = 0
  end
end
function PlayerStateJump:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  self.jumpWeight = 0
end
function PlayerStateJump:update(dt)
  local v2 = v2:isAvailable("fall")
  if not v2 then
    -- if not v0.player.baseInformation.isOnGround then goto L53 end
    -- if v0.player.motionInformation.currentSpeedY > 0 then goto L53 end
  end
  v2 = self:inDebugMode()
  if v2 then
    local v6 = string.format("[PlayerStateJump:update] End jump / duration(%.4f s) / height(%.4f).", self.jumpDuration * 0.001, self.playerPos[#self.playerPos][2] - self.playerPos[1][2])
    print(...)
  end
  self:deactivate()
  v2 = self:inDebugMode()
  if v2 then
    local v2, v3, v4 = getWorldTranslation(g_currentMission.player.rootNode)
    table.insert(self.playerPos, {v2, v3, v4})
    self.jumpDuration = self.jumpDuration + dt
  end
end
function PlayerStateJump:debugDraw(dt)
  -- TODO: structure LOP_FORNPREP (pc 5, target 24)
  DebugUtil.drawDebugCircle(self.playerPos[1][1], self.playerPos[1][2], self.playerPos[1][3], 0.1, 10)
  -- TODO: structure LOP_FORNLOOP (pc 23, target 6)
end
function PlayerStateJump:consoleCommandDebugStateJump()
  self:toggleDebugMode()
  local v1 = self:inDebugMode()
  if v1 then
    self.playerPos = {}
  end
end
