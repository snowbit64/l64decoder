-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlatformIconElement = {}
local PlatformIconElement_mt = Class(PlatformIconElement, BitmapElement)
function PlatformIconElement.new(target, custom_mt)
  local v3 = v3:superClass()
  if not custom_mt then
  end
  return v2(v3, v4)
end
function PlatformIconElement.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function PlatformIconElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.platformId = src.platformId
end
function PlatformIconElement:setPlatformId(platformId)
  if GS_PLATFORM_ID ~= PlatformId.PS4 then
    -- if GS_PLATFORM_ID ~= PlatformId.PS5 then goto L23 end
  end
  if platformId ~= PlatformId.PS4 and platformId ~= PlatformId.PS5 then
    -- goto L44  (LOP_JUMP +21)
    if GS_PLATFORM_ID ~= PlatformId.XBOX_ONE then
      -- if GS_PLATFORM_ID ~= PlatformId.XBOX_SERIES then goto L44 end
    end
    if platformId ~= PlatformId.XBOX_ONE and platformId ~= PlatformId.XBOX_SERIES then
    end
  end
  if v2 then
  end
  local v7 = GuiUtils.getUVs(PlatformIconElement.UVS[platformId])
  local v6 = unpack(...)
  self:setImageUVs(...)
end
{}[0] = {915, 51, 42, 42}
{}[PlatformId.WIN] = {963, 51, 42, 42}
{}[PlatformId.MAC] = {963, 51, 42, 42}
{}[PlatformId.GGP] = {771, 51, 42, 42}
{}[PlatformId.PS4] = {867, 51, 42, 42}
{}[PlatformId.PS5] = {867, 51, 42, 42}
{}[PlatformId.XBOX_ONE] = {723, 51, 42, 42}
{}[PlatformId.XBOX_SERIES] = {723, 51, 42, 42}
PlatformIconElement.UVS = {}
