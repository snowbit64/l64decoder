-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConeHandler = {}
local ConeHandler_mt = Class(ConeHandler, Object)
InitObjectClass(ConeHandler, "ConeHandler")
function ConeHandler:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".cone(?)#node", "the cone node")
end
function ConeHandler.new(v0, v1, v2, v3, v4, v5)
  if not v5 then
  end
  local v6 = v6(v7, v8, v9)
  v6.nodeId = v1
  v6.modDirectory = v2
  v6.isServer = v3
  v6.isClient = v4
  v6.cones = {}
  v6.activeCones = {}
  v6.actionListeners = {}
  return v6
end
function ConeHandler:delete()
  for v4, v5 in ipairs(self.cones) do
    self:destroyCone(v5)
  end
end
function ConeHandler:readStream(streamId, connection)
  for v6, v7 in ipairs(self.cones) do
    v7:readStream(streamId, connection)
  end
  v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
end
function ConeHandler:writeStream(streamId, connection)
  for v6, v7 in ipairs(self.cones) do
    v7:writeStream(streamId, connection)
  end
  v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
end
function ConeHandler:loadFromXML(xmlFile, baseKey, components, i3dMappings)
  while true do
    v6 = v6:format(baseKey, v5)
    v7 = xmlFile:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = xmlFile:getValue(v6 .. "#node", nil, components, i3dMappings)
    if v7 ~= nil then
      self:spawnConeAt(v7)
    end
  end
end
function ConeHandler:add(cone)
  table.insert(self.cones, cone)
end
function ConeHandler:spawnCone(x, y, z)
  local v4 = v4:new(self.isServer, self.isClient)
  v4:load(self.modDirectory .. "arena/cone.i3d")
  v4:link(self.nodeId)
  v4:setPosition(x, y, z)
  self:add(v4)
  return v4
end
function ConeHandler:spawnConeAt(node)
  local v2, v3, v4 = getWorldTranslation(node)
  self:spawnCone(v2, v3, v4)
end
function ConeHandler.destroyCone(v0, v1)
  v1:delete()
end
function ConeHandler:coneLostBall(cone)
  self:setLostBallCount(self.lostBallCount + 1)
  table.removeElement(self.activeCones, cone)
end
function ConeHandler:setLostBallCount(count, noEventSend)
  if count ~= self.lostBallCount then
    self.lostBallCount = count
    for v6, v7 in ipairs(self.actionListeners) do
      v7(count)
    end
    if self.isServer and not noEventSend then
      v5 = SuperCupPenaltyEvent.new(self, count)
      v3:broadcastEvent(v5, nil, nil, self)
    end
  end
end
function ConeHandler:getLostBallCount()
  return self.lostBallCount
end
function ConeHandler:reset()
  for v4, v5 in ipairs(self.cones) do
    v5:reset()
  end
  self:setLostBallCount(0)
  v1 = table.copy(self.cones)
  self.activeCones = v1
end
function ConeHandler:update(dt)
  for v5, v6 in ipairs(self.activeCones) do
    v6:update(dt)
    if not v6.lostBall then
      continue
    end
    self:coneLostBall(v6)
  end
end
function ConeHandler:addActionListener(actionListener)
  SuperCupUtil.addToListIfNotExists(actionListener, self.actionListeners)
end
function ConeHandler:removeActionListener(actionListener)
  table.removeElement(self.actionListeners, actionListener)
end
function ConeHandler:getActionListeners()
  return self.actionListeners
end
