-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChurchClock = {}
local ChurchClock_mt = Class(ChurchClock)
function ChurchClock.onCreate(v0, v1)
  local v4 = ChurchClock.new(v1)
  v2:addNonUpdateable(...)
end
function ChurchClock.new(id)
  local v1 = setmetatable({}, u0)
  v1.clocks = {}
  local v5 = getNumOfChildren(id)
  -- TODO: structure LOP_FORNPREP (pc 17, target 52)
  v5 = getChildAt(id, 0)
  if v5 ~= nil then
    local v6 = getChildAt(v5, 0)
    local v7 = getChildAt(v5, 1)
    if v6 ~= nil and v7 ~= nil then
      table.insert(v1.clocks, {shortHand = v6, longHand = v7})
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 51, target 18)
  if 0 >= #v1.clocks then
  end
  v1.hasClocks = true
  if v1.hasClocks then
    v2:subscribe(MessageType.MINUTE_CHANGED, v1.minuteChanged, v1)
  end
  return v1
end
function ChurchClock.delete(v0)
  v1:unsubscribeAll(v0)
end
function ChurchClock:minuteChanged()
  if self.hasClocks then
    for v6, v7 in pairs(self.clocks) do
      setRotation(v7.shortHand, 0, 0, -v1)
      setRotation(v7.longHand, 0, 0, -v2)
    end
  end
end
