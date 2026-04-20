-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIParameterFillType = {}
local AIParameterFillType_mt = Class(AIParameterFillType, AIParameter)
function AIParameterFillType.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1["type"] = AIParameterType.FILLTYPE
  v1.fillTypes = {}
  v1.fillTypeIndex = nil
  return v1
end
function AIParameterFillType:saveToXMLFile(xmlFile, key, usedModNames)
  if self.fillTypeIndex ~= nil then
    local v4 = v4:getFillTypeNameByIndex(self.fillTypeIndex)
    xmlFile:setString(key .. "#fillType", v4)
  end
end
function AIParameterFillType:loadFromXMLFile(xmlFile, key)
  local fillTypeName = xmlFile:getString(key .. "#fillType")
  if fillTypeName ~= nil then
    local v4 = v4:getFillTypeIndexByName(fillTypeName)
    self.fillTypeIndex = v4
  end
end
function AIParameterFillType:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
    self:setFillTypeIndex(v3)
  end
end
function AIParameterFillType:writeStream(streamId, connection)
  if self.fillTypeIndex == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    streamWriteUIntN(streamId, self.fillTypeIndex, FillTypeManager.SEND_NUM_BITS)
  end
end
function AIParameterFillType:setValidFillTypes(fillTypes)
  self.fillTypes = {}
  for v7, v8 in pairs(fillTypes) do
    if 0 < v8 then
    end
    if self.fillTypeIndex == v7 then
    end
    local v10 = v10:getFillTypeByIndex(v7)
    v10 = string.format("%s (%d l)", v10.title, v8)
    table.insert(self.fillTypes, {index = #self.fillTypes + 1, fillTypeIndex = v7, title = v10, fillLevel = v8})
  end
  table.sort(self.fillTypes, function(self, fillTypes)
    if self.title >= fillTypes.title then
    end
    return true
  end)
  if self.fillTypeIndex ~= nil then
    -- if v3 then goto L77 end
  end
  if v2 ~= nil then
    self.fillTypeIndex = v2
    return
  end
  self:setFillTypeByIndex(1)
end
function AIParameterFillType:setNextItem()
  for v5, v6 in ipairs(self.fillTypes) do
    if not (self.fillTypeIndex == v6.fillTypeIndex) then
      continue
    end
  end
  if #self.fillTypes < v1 then
  end
  self:setFillTypeByIndex(v1)
end
function AIParameterFillType:setPreviousItem()
  for v5, v6 in ipairs(self.fillTypes) do
    if not (self.fillTypeIndex == v6.fillTypeIndex) then
      continue
    end
  end
  if v1 < 1 then
  end
  self:setFillTypeByIndex(v1)
end
function AIParameterFillType:setFillTypeByIndex(index)
  if self.fillTypes[index] ~= nil then
    self.fillTypeIndex = self.fillTypes[index].fillTypeIndex
    return
  end
  self.fillTypeIndex = nil
end
function AIParameterFillType:setFillTypeIndex(fillTypeIndex)
  self.fillTypeIndex = fillTypeIndex
end
function AIParameterFillType:getFillTypeIndex()
  return self.fillTypeIndex
end
function AIParameterFillType:getString()
  for v4, v5 in ipairs(self.fillTypes) do
    if not (v5.fillTypeIndex == self.fillTypeIndex) then
      continue
    end
    return v5.title
  end
  return ""
end
function AIParameterFillType:validate()
  if self.fillTypeIndex == nil then
    local v2 = v2:getText("ai_validationErrorNoFillType")
    return false
  end
  return true, nil
end
