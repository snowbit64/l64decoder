-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CollisionFlag = {}
function CollisionFlag.getHasFlagSet(node, flag)
  local collisionMask = getCollisionMask(node)
  local v4 = bitAND(collisionMask, flag)
  if v4 == 0 then
  end
  return true
end
function CollisionFlag.setFlag(v0, v1)
  local v2 = getCollisionMask(v0)
  local v3 = bitOR(v2, v1)
  setCollisionMask(v0, v3)
end
function CollisionFlag.getBit(flag)
  if u0[flag] == nil then
    printCallstack()
  end
  return v1.bit
end
function CollisionFlag.checkCollisionMask(node)
  local v2 = getHasClassId(node, ClassIds.SHAPE)
  if v2 then
    v2 = getCollisionMask(node)
    if 0 < v2 and v2 ~= 255 then
      local v5 = bitNOT(u0)
      local v3 = bitAND(...)
      if v3 ~= 0 then
        local v4 = MathUtil.numberToSetBitsStr(v3)
        local v8 = I3DUtil.getNodePath(node)
        local v6 = string.format("    CollisionFlag-Check: Node '%s' uses undefined bits '%s'!", v8, v4)
        print(...)
      end
      v6 = bitNOT(u1)
      v4 = bitAND(...)
      if v4 ~= 0 then
        v5 = MathUtil.numberToSetBitsStr(v4)
        local v9 = I3DUtil.getNodePath(node)
        local v7 = string.format("    CollisionFlag-Check: Node '%s' uses deprecated bits '%s'!", v9, v5)
        print(...)
      end
    end
  end
  return v1
end
function CollisionFlag.checkCollisionMaskRec(node)
  if node ~= nil and node ~= 0 then
    if not false then
      local v2 = CollisionFlag.checkCollisionMask(node)
    end
    local v5 = getNumOfChildren(node)
    -- TODO: structure LOP_FORNPREP (pc 21, target 36)
    if not v2 then
      local v6 = getChildAt(node, 0)
      v5 = CollisionFlag.checkCollisionMaskRec(...)
    end
    -- TODO: structure LOP_FORNLOOP (pc 35, target 22)
  end
  return v1
end
addConsoleCommand("gsCollisionFlagShowAll", "Shows all available collision flags", "consoleCommandShowAll", CollisionFlag)
function CollisionFlag.consoleCommandShowAll()
  table.sort(u0, function(self, v1)
    if self.isDeprecated then
      -- if v1.isDeprecated then goto L12 end
    end
    if not self.isDeprecated and not v1.isDeprecated then
      if self.bit >= v1.bit then
      end
      return true
    end
    if self.isDeprecated then
      return false
    end
    return true
  end)
  print("Defined collision flags:")
  for v4, v5 in ipairs(u0) do
    if v5.isDeprecated and not v0 then
      print("\nDeprecated:")
    end
    local v7 = string.format("Bit %02d: %s - %s", v5.bit, v5.name, v5.description)
    print(...)
  end
  print("\n\nPredefined collision masks:")
  for v4, v5 in pairs(CollisionMask) do
    v7 = string.format("Mask %010d: %s", v5, v4)
    print(...)
  end
end
local v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(0, "DEFAULT", "The default bit", true)
CollisionFlag.DEFAULT = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(1, "STATIC_WORLD", "Collision with terrain, terrainHeight and static objects", true)
CollisionFlag.STATIC_WORLD = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(3, "STATIC_OBJECTS", "Collision with static objects", true)
CollisionFlag.STATIC_OBJECTS = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(4, "STATIC_OBJECT", "A static object", true)
CollisionFlag.STATIC_OBJECT = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(5, "AI_BLOCKING", "Blocks the AI", true)
CollisionFlag.AI_BLOCKING = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(8, "TERRAIN", "Collision with terrain", true)
CollisionFlag.TERRAIN = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(9, "TERRAIN_DELTA", "Collision with terrain delta", true)
CollisionFlag.TERRAIN_DELTA = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(10, "CAMERA_BLOCKING", "Blocks outdoor vehicle camera", true)
CollisionFlag.CAMERA_BLOCKING = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(11, "TREE", "A tree", true)
CollisionFlag.TREE = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(12, "DYNAMIC_OBJECT", "A dynamic object", true)
CollisionFlag.DYNAMIC_OBJECT = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(13, "VEHICLE", "A vehicle", true)
CollisionFlag.VEHICLE = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(14, "PLAYER", "A player", true)
CollisionFlag.PLAYER = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(15, "BLOCKED_BY_PLAYER", "Object that's blocked by a player", true)
CollisionFlag.BLOCKED_BY_PLAYER = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(16, "ANIMAL", "An animal", true)
CollisionFlag.ANIMAL = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(17, "ANIMAL_POSITIONING", "An object where animals can walk on", true)
CollisionFlag.ANIMAL_POSITIONING = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(18, "AI_DRIVABLE", "AI can drive over this node", true)
CollisionFlag.AI_DRIVABLE = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(19, "GROUND_TIP_BLOCKING", "Bit to block the ground tipping at this position", true)
CollisionFlag.GROUND_TIP_BLOCKING = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(20, "TRIGGER_PLAYER", "A trigger for players", true)
CollisionFlag.TRIGGER_PLAYER = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(21, "TRIGGER_VEHICLE", "A trigger for vehicles!", true)
CollisionFlag.TRIGGER_VEHICLE = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(24, "TRIGGER_DYNAMIC_OBJECT", "A dynamic object", true)
CollisionFlag.TRIGGER_DYNAMIC_OBJECT = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(25, "TRIGGER_TRAFFIC_VEHICLE_BLOCKING", "A trigger that blocks the traffic vehicles", true)
CollisionFlag.TRIGGER_TRAFFIC_VEHICLE_BLOCKING = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(27, "TRIGGER_FORK", "A trigger for fork object mounting", true)
CollisionFlag.TRIGGER_FORK = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(28, "TRIGGER_ANIMAL", "A trigger for animals", true)
CollisionFlag.TRIGGER_ANIMAL = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(30, "FILLABLE", "A fillable node. Used in trailers and unload triggers", true)
CollisionFlag.FILLABLE = v7
v7 = function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(31, "WATER", "Collision of the water plane", true)
CollisionFlag.WATER = v7
function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(2, "STATIC_WORLD_WITHOUT_DELTA", "Deprecated in FS22: Do not use it anymore!", false)
function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(6, "TRACTOR", "Deprecated in FS22: Do not use it anymore!", false)
function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(7, "COMBINE", "Deprecated in FS22: Do not use it anymore!", false)
function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(22, "TRIGGER_COMBINE", "Deprecated in FS22: Do not use it anymore!", false)
function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(23, "TRIGGER_FILLABLE", "Deprecated in FS22: Do not use it anymore!", false)
function(v0, v1, v2, v3)
  if u0[v0] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", v0)
    return nil
  end
  local v4 = v1:upper()
  if CollisionFlag[v4] ~= nil then
    Logging.error("CollisionFlag.registerFlag: Given  name '%s' is already in use", v4)
    return nil
  end
  if not v3 and v0 >= 8 then
  end
  v4.isActive = v5
  v4.isDeprecated = not v3
  if v4.isActive then
    local v5 = bitOR(u1, v4.flag)
    u1 = v5
  end
  v5 = bitOR(u2, v4.flag)
  u2 = v5
  u0[v0] = true
  CollisionFlag[v1] = v4.flag
  u3[v4.flag] = v4
  table.insert(u4, v4)
  return v4.flag
end(26, "TRIGGER_CUTTER", "Deprecated in FS22: Do not use it anymore!", false)
I3DManager.addDebugLoadingCheck("Collision-Flag check", function(v0, v1)
  return CollisionFlag.checkCollisionMaskRec(v1)
end)
