-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PointOfInterest = {}
local v0 = Class(PointOfInterest)
function PointOfInterest:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#triggerNode", "Trigger node")
  self:register(XMLValueType.STRING, v1 .. "#text", "POI text")
  self:register(XMLValueType.STRING, v1 .. "#textFormat", "POI text additional format string")
  self:register(XMLValueType.STRING, v1 .. "#textParams", "POI text format parameters")
  self:register(XMLValueType.BOOL, v1 .. "#showOwner", "Show only for owners")
  self:register(XMLValueType.BOOL, v1 .. "#showEveryone", "Show everyone")
end
function PointOfInterest.onCreate(v0, v1)
  local v2 = v2:new()
  local v3 = v2:loadFromNode(v1)
  if v3 then
    v3:addNonUpdateable(v2)
    return
  end
  v2:delete()
end
function PointOfInterest.new(v0, v1, v2)
  if not v2 then
  end
  local v3 = v3(v4, v5)
  v3.placeable = v0
  v3.infoText = nil
  v3.isEnabled = true
  v3.customEnv = v1
  v3.isPlayerInRange = false
  v3.showOwner = true
  v3.showEveryone = true
  v3.vehicleNodesInRange = {}
  v3.ownerFarmId = nil
  return v3
end
function PointOfInterest:load(v1, v2, v3, v4, v5, v6)
  local v7 = v2:getValue(v3 .. "#triggerNode", nil, v1, v5)
  self.node = v7
  CollisionFlag.setFlag(self.node, CollisionFlag.TRIGGER_PLAYER)
  CollisionFlag.setFlag(self.node, CollisionFlag.TRIGGER_VEHICLE)
  if self.node == nil then
    Logging.devWarning("Missing node for PointOfInterest '%s'", v3)
    return false
  end
  v7 = v2:getValue(v3 .. "#text")
  if v7 ~= nil then
    local v8 = v8:convertText(v7, self.customEnv)
    self.infoText = v8
    v8 = v2:getValue(v3 .. "#textFormat")
    local v9 = v2:getValue(v3 .. "#textParams")
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L132
    local v10 = v9:split("|")
    -- TODO: structure LOP_FORNPREP (pc 76, target 87)
    local v13 = v13:convertText(v10[1], self.customEnv)
    v10[1] = v13
    -- TODO: structure LOP_FORNLOOP (pc 86, target 77)
    if v8 ~= nil then
      local v14 = unpack(v10)
      local v12 = string.format(...)
      v10 = string.format(...)
      self.infoText = v10
      -- goto L132  (LOP_JUMP +26)
    end
    v12 = unpack(v9)
    v10 = string.format(...)
    self.infoText = v10
  else
    local v11 = getName(self.node)
    v8:devWarning(...)
    return false
  end
  v8 = v2:getValue(v3 .. "#showOwner", self.showOwner)
  self.showOwner = v8
  v8 = v2:getValue(v3 .. "#showEveryone", self.showEveryone)
  self.showEveryone = v8
  self:finalize()
  return true
end
function PointOfInterest:loadFromNode(v1)
  self.node = v1
  PointOfInterest.checkCollisionMask(v1, nil)
  local v2 = getUserAttribute(v1, "text")
  local v4 = getUserAttribute(v1, "showOwner")
  if v4 ~= "true" then
  end
  self.showOwner = true
  v4 = getUserAttribute(v1, "showEveryone")
  if v4 ~= "true" then
  end
  self.showEveryone = true
  if v2 ~= nil then
    local v3 = v3:convertText(v2, self.customEnv)
    self.infoText = v3
  else
    local v5 = getName(self.node)
    Logging.devWarning(...)
    return false
  end
  self:finalize()
  return true
end
function PointOfInterest:finalize()
  local v1 = v1:getIsClient()
  if v1 then
    v1 = addTrigger(self.node, "PointOfInterest:triggerCallback", self, false, self.triggerCallback)
    self.callbackId = v1
  end
end
function PointOfInterest:delete()
  if self.callbackId ~= nil then
    removeTrigger(self.node, self.callbackId)
    self.callbackId = nil
  end
  v1:removeDrawable(self)
end
function PointOfInterest:getNeedsDrawing()
  local v1 = v1:getValue(GameSettings.SETTING.SHOW_HELP_TRIGGER)
  if v1 and self.isEnabled then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L17
  end
  return false
  local v2 = v2:getFarmId()
  if not self.isPlayerInRange then
    for v6, v7 in pairs(self.vehicleNodesInRange) do
      local v8 = entityExists(v6)
      if v8 then
        v8 = v8:getNodeObject(v6)
        if not (v8 ~= nil) then
          continue
        end
        if not (v8 == g_currentMission.controlledVehicle) then
          continue
        end
        local v9 = v8:getOwnerFarmId()
      else
        self.vehicleNodesInRange[v6] = nil
      end
    end
  end
  if v1 then
    if self.ownerFarmId == AccessHandler.EVERYONE then
      -- if v0.showEveryone then goto L82 end
      return false
    end
    if self.ownerFarmId == v2 then
      -- if v0.showOwner then goto L82 end
      return false
    end
  end
  return v1
end
function PointOfInterest:draw()
  local v1 = self:getNeedsDrawing()
  if v1 then
    v1:setPOIInfoText(self.infoText)
  end
end
function PointOfInterest:triggerCallback(v1, v2, v3, v4, v5, v6)
  if not v3 then
    -- if not v4 then goto L58 end
  end
  if g_currentMission.player ~= nil then
    -- if v2 ~= g_currentMission.player.rootNode then goto L22 end
    if v3 then
      self.isPlayerInRange = true
      -- goto L34  (LOP_JUMP +17)
    end
    self.isPlayerInRange = false
  elseif v3 then
    self.vehicleNodesInRange[v2] = true
  else
    self.vehicleNodesInRange[v2] = nil
  end
  if v7 then
    if not self.isPlayerInRange then
      local v8 = next(self.vehicleNodesInRange)
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L52
    end
    v8:addDrawable(self)
    return
    v8:removeDrawable(self)
  end
end
function PointOfInterest:setOwnerFarmId(v1)
  self.ownerFarmId = v1
end
