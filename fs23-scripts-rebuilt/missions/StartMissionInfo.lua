-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StartMissionInfo = {}
local StartMissionInfo_mt = Class(StartMissionInfo)
function StartMissionInfo.new(subclass_mt)
  if not subclass_mt then
  end
  local v1 = v1(v2, v3)
  v1:reset()
  return v1
end
function StartMissionInfo:reset()
  self.difficulty = 1
  self.mapId = "MapUS"
  self.scenarioId = nil
  self.isMultiplayer = false
  self.createGame = false
  self.canStart = false
end
