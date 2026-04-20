-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InlineBaleSingle = {}
local InlineBaleSingle_mt = Class(InlineBaleSingle, Bale)
InitStaticObjectClass(InlineBaleSingle, "InlineBaleSingle", ObjectIds.OBJECT_INLINE_BALE_SINGLE)
function InlineBaleSingle.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  registerObjectClassName(v3, "InlineBaleSingle")
  v3.connectedInlineBale = nil
  return v3
end
function InlineBaleSingle.getBaleSupportsBaleLoader(v0)
  return false
end
function InlineBaleSingle.getCanBeOpened(v0)
  return false
end
function InlineBaleSingle:setConnectedInlineBale(inlineBale)
  self.connectedInlineBale = inlineBale
end
function InlineBaleSingle:getConnectedInlineBale()
  return self.connectedInlineBale
end
function InlineBaleSingle:setConnector(connectedBale, filename, axis, offset)
  local v5 = NetworkUtil.convertFromNetworkFilename(filename)
  local v5, v6 = v5:loadSharedI3DFile(v5, false, false)
  if v5 == 0 then
    return false
  end
  local v7 = getChildAt(v5, 0)
  local v8 = getChildAt(v5, 1)
  local v9 = getChildAt(v5, 2)
  link(connectedBale.nodeId, v8)
  link(self.nodeId, v7)
  link(self.nodeId, v9)
  {0, 0, 0}[axis] = offset
  local v13 = unpack({0, 0, 0})
  setTranslation(...)
  {0, 0, 0}[axis] = -offset
  v13 = unpack({0, 0, 0})
  setTranslation(...)
  delete(v5)
  self.inlineConnector = {filename = filename, sharedLoadRequestId = v6, mesh = v9, joint1 = v7, joint2 = v8, isDirty = true}
  if 0 >= self.wrappingState then
  end
  v11(v12, true)
  local v11 = getHasShaderParameter(v9, "colorMat0")
  if v11 then
    local v11, v12, v13, v14 = unpack(connectedBale.wrappingColor)
    local v15, v16, v17, v18 = getShaderParameter(v9, "colorMat0")
    setShaderParameter(v9, "colorMat0", v11, v12, v13, v18, false)
  end
  v11 = getHasShaderParameter(v9, "RDT")
  if v11 then
    setShaderParameter(v9, "RDT", 0, 0, 0, 0, false)
  end
end
function InlineBaleSingle:setConnectorVisibility(state)
  local v2 = self:getHasConnector()
  if v2 then
    setVisibility(self.inlineConnector.mesh, state)
  end
end
function InlineBaleSingle:getHasConnector()
  if self.inlineConnector == nil then
  end
  return true
end
function InlineBaleSingle:removeConnector()
  if self.inlineConnector ~= nil then
    local v2 = entityExists(self.inlineConnector.joint1)
    if v2 then
      delete(self.inlineConnector.joint1)
    end
    v2 = entityExists(v1.joint2)
    if v2 then
      delete(v1.joint2)
    end
    v2 = entityExists(v1.mesh)
    if v2 then
      delete(v1.mesh)
    end
    if v1.sharedLoadRequestId ~= nil then
      v2:releaseSharedI3DFile(v1.sharedLoadRequestId)
    end
    self.inlineConnector = nil
  end
end
function InlineBaleSingle:setWrappingState(wrappingState, noEventSend)
  if 0 >= wrappingState then
  end
  self:setConnectorVisibility(true)
  local v4 = v4:superClass()
  v4.setWrappingState(self, wrappingState, noEventSend)
end
