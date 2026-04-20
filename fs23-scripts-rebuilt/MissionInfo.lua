-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MissionInfo = {}
local MissionInfo_mt = Class(MissionInfo)
function MissionInfo.new(baseDirectory, customEnvironment, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.baseDirectory = baseDirectory
  v3.customEnvironment = customEnvironment
  return v3
end
function MissionInfo:loadDefaults()
  self.id = "invalid"
  self.scriptFilename = ""
  self.scriptClass = ""
end
function MissionInfo.isValidMissionId(v0, v1)
  if v1 ~= nil then
    local v2 = v1:len()
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000001 -> L9
  end
  return false
  v2 = v1:find("[^%w_]")
  if v2 ~= nil then
    return false
  end
  return true
end
