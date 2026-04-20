-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PackedBale = {MAX_UNPACK_DISTANCE = 4}
source("dataS/scripts/events/BaleUnpackEvent.lua")
local PackedBale_mt = Class(PackedBale, Bale)
InitStaticObjectClass(PackedBale, "PackedBale", ObjectIds.OBJECT_PACKED_BALE)
function PackedBale.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  registerObjectClassName(v3, "PackedBale")
  v3.singleBaleNodes = {}
  local v4 = PackedBaleActivatable.new(v3)
  v3.packedBaleActivatable = v4
  v3.maxUnpackDistance = PackedBale.MAX_UNPACK_DISTANCE
  return v3
end
function PackedBale:delete()
  v1:removeActivatable(self.packedBaleActivatable)
  local v2 = v2:superClass()
  v2.delete(self)
end
function PackedBale:loadBaleAttributesFromXML(xmlFile)
  local v3 = v3:superClass()
  local v2 = v3.loadBaleAttributesFromXML(self, xmlFile)
  if not v2 then
    return false
  end
  v2 = xmlFile:getValue("bale.packedBale#singleBale")
  self.singleBaleFilename = v2
  v2 = Utils.getFilename(self.singleBaleFilename, self.baseDirectory)
  self.singleBaleFilename = v2
  if self.singleBaleFilename ~= nil then
    v2 = fileExists(self.singleBaleFilename)
    -- if v2 then goto L47 end
  end
  Logging.xmlError(xmlFile, "Could not find single bale reference for bale (%s)", self.singleBaleFilename)
  return false
  xmlFile:iterate("bale.packedBale.singleBale", function(self, xmlFile)
    local v2 = v2:getValue(xmlFile .. "#node", nil, u1.nodeId)
    if v2 ~= nil then
      table.insert(u1.singleBaleNodes, v2)
    end
  end)
  v2:addActivatable(self.packedBaleActivatable)
  return true
end
function PackedBale:unpack(noEventSend)
  v2:removeActivatable(self.packedBaleActivatable)
  if self.isServer then
    -- TODO: structure LOP_FORNPREP (pc 15, target 86)
    if 1 < self.fillLevel then
      local baleObject = Bale.new(self.isServer, self.isClient)
      local v7, v8, v9 = getWorldTranslation(self.singleBaleNodes[1])
      local v10, v11, v12 = getWorldRotation(self.singleBaleNodes[1])
      local v13 = baleObject:loadFromConfigXML(self.singleBaleFilename, v7, v8, v9, v10, v11, v12)
      if v13 then
        baleObject:setFillType(self.fillType)
        local v17 = baleObject:getCapacity()
        local v15 = math.min(...)
        baleObject:setFillLevel(...)
        baleObject:setOwnerFarmId(self.ownerFarmId, true)
        baleObject:register()
        v15 = baleObject:getFillLevel()
        self.fillLevel = self.fillLevel - v15
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 85, target 16)
    self:delete()
    return
  end
  local v2 = v2:getServerConnection()
  local v4 = BaleUnpackEvent.new(self)
  v2:sendEvent(...)
end
function PackedBale:getCanInteract()
  local v1, v2, v3 = self:getInteractionPosition()
  if v1 ~= nil then
    local v4, v5, v6 = getWorldTranslation(self.nodeId)
    local v7 = MathUtil.vector3Length(v1 - v4, v2 - v5, v3 - v6)
    if v7 < self.maxUnpackDistance then
      return true
    end
  end
  return false
end
function PackedBale.getInteractionPosition(v0)
  if not g_currentMission.controlPlayer then
    return
  end
  local v1 = v1:canPlayerAccess(v0)
  if not v1 then
    return
  end
  v1 = getWorldTranslation(g_currentMission.player.rootNode)
  return v1
end
PackedBaleActivatable = {}
local PackedBaleActivatable_mt = Class(PackedBaleActivatable)
function PackedBaleActivatable.new(packedBale)
  setmetatable({}, u0)
  local v2 = v2:getText("action_cutBale")
  return {packedBale = packedBale, activateText = v2}
end
function PackedBaleActivatable:getIsActivatable()
  local v1 = v1:getCanInteract()
  if v1 then
    return true
  end
  return false
end
function PackedBaleActivatable:run()
  v1:unpack()
end
