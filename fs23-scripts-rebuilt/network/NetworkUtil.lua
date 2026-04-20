-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

NetworkUtil = {BIT_TYPE_TO_NUM_BITS = {11, 16, 20, 32}}
function NetworkUtil.getObject(v0)
  if g_server ~= nil then
    return v1:getObject(v0)
  end
  v1 = v1:getObject(v0)
  return v1
end
function NetworkUtil.getObjectId(v0)
  if g_server ~= nil then
    return v1:getObjectId(v0)
  end
  v1 = v1:getObjectId(v0)
  return v1
end
function NetworkUtil.writeNodeObject(streamId, object)
  local v4 = NetworkUtil.getObjectId(object)
  NetworkUtil.writeNodeObjectId(...)
end
function NetworkUtil.readNodeObject(streamId)
  local v2 = NetworkUtil.readNodeObjectId(streamId)
  return NetworkUtil.getObject(...)
end
function NetworkUtil.writeNodeObjectId(streamId, objectId)
  local v4 = Utils.getNoNil(objectId, 0)
  streamWriteUIntN(streamId, v4, NetworkNode.OBJECT_SEND_NUM_BITS)
end
function NetworkUtil.readNodeObjectId(streamId)
  return streamReadUIntN(streamId, NetworkNode.OBJECT_SEND_NUM_BITS)
end
function NetworkUtil.simWriteCompressed2DVectors(refX, refY, values, scale, addRefPoint)
  if scale == nil then
  end
  local v6 = table.getn(values)
  -- TODO: structure LOP_FORNPREP (pc 13, target 75)
  local v14 = math.sqrt((values[1].x - refX) * (values[1].x - refX) + (values[1].y - refY) * (values[1].y - refY))
  if v14 * 1 / scale < 1024 then
    v14 = math.max(0, 0)
  elseif v14 * 1 / scale < 32768 then
    v14 = math.max(0, 1)
  else
    if v14 * 1 / scale < 524288 then
      v14 = math.max(0, 2)
    else
      v14 = math.max(0, 3)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 74, target 14)
  if addRefPoint then
    table.insert({}, {x = refX, y = refY})
  end
  if v7 ~= 3 then
    -- TODO: structure LOP_FORNPREP (pc 94, target 152)
    v14 = math.floor((values[1].x - refX) * v5)
    local v15 = math.floor((values[1].y - refY) * v5)
    table.insert(v8, {x = refX + v14 * scale, y = refY + v15 * scale})
    -- TODO: structure LOP_FORNLOOP (pc 128, target 95)
  else
    -- TODO: structure LOP_FORNPREP (pc 133, target 152)
    table.insert(v8, {x = values[1].x, y = values[1].y})
    -- TODO: structure LOP_FORNLOOP (pc 151, target 134)
  end
  return v8, v7
end
function NetworkUtil.writeCompressed2DVectors(streamId, refX, refY, values, scale, bitType)
  if scale == nil then
  end
  local v7 = table.getn(values)
  if 0 < v7 then
    if bitType == nil then
      -- TODO: structure LOP_FORNPREP (pc 18, target 80)
      local v14 = math.sqrt((values[1].x - refX) * (values[1].x - refX) + (values[1].y - refY) * (values[1].y - refY))
      if v14 * 1 / scale < 1024 then
        v14 = math.max(0, 0)
      elseif v14 * 1 / scale < 32768 then
        v14 = math.max(0, 1)
      else
        if v14 * 1 / scale < 524288 then
          v14 = math.max(0, 2)
        else
          v14 = math.max(0, 3)
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 79, target 19)
    end
    streamWriteUIntN(streamId, bitType, 2)
    if bitType ~= 3 then
      -- TODO: structure LOP_FORNPREP (pc 95, target 145)
      local v16 = math.floor((values[1].x - refX) * v6)
      streamWriteIntN(streamId, v16, Utils.BIT_TYPE_TO_NUM_BITS[bitType + 1])
      v16 = math.floor((values[1].y - refY) * v6)
      streamWriteIntN(streamId, v16, Utils.BIT_TYPE_TO_NUM_BITS[bitType + 1])
      -- TODO: structure LOP_FORNLOOP (pc 124, target 96)
      return
    end
    -- TODO: structure LOP_FORNPREP (pc 129, target 145)
    streamWriteFloat32(streamId, values[1].x)
    streamWriteFloat32(streamId, values[1].y)
    -- TODO: structure LOP_FORNLOOP (pc 144, target 130)
  end
end
function NetworkUtil.readCompressed2DVectors(streamId, refX, refY, numValues, scale, addRefPoint)
  if scale == nil then
  end
  if addRefPoint then
    table.insert({}, {x = refX, y = refY})
  end
  if 0 < numValues then
    local bitType = streamReadUIntN(streamId, 2)
    if bitType ~= 3 then
      -- TODO: structure LOP_FORNPREP (pc 34, target 86)
      local v12 = streamReadIntN(streamId, Utils.BIT_TYPE_TO_NUM_BITS[bitType + 1])
      local v13 = streamReadIntN(streamId, Utils.BIT_TYPE_TO_NUM_BITS[bitType + 1])
      table.insert(v6, {x = refX + v12 * scale, y = refY + v13 * scale})
      -- TODO: structure LOP_FORNLOOP (pc 60, target 35)
      return v6
    end
    -- TODO: structure LOP_FORNPREP (pc 65, target 86)
    local v11 = streamReadFloat32(streamId)
    v12 = streamReadFloat32(streamId)
    table.insert(v6, {x = v11, y = v12})
    -- TODO: structure LOP_FORNLOOP (pc 85, target 66)
  end
  return v6
end
function NetworkUtil.createWorldPositionCompressionParams(worldSize, worldOffset, scale)
  -- TODO: structure LOP_FORNPREP (pc 13, target 20)
  if worldSize / scale <= 2 then
  else
    -- TODO: structure LOP_FORNLOOP (pc 19, target 14)
  end
  values.numBits = bitType
  return values
end
function NetworkUtil.simWriteCompressedWorldPosition(pos, params)
  local scale = math.max(pos + params.worldOffset, 0)
  local values = math.min(scale, params.worldSize)
  local bitType = math.floor(values / params.scale)
  return bitType * params.scale - params.worldOffset
end
function NetworkUtil.writeCompressedWorldPosition(streamId, pos, params)
  local bitType = math.max(pos + params.worldOffset, 0)
  local scale = math.min(bitType, params.worldSize)
  local v6 = math.floor(scale / params.scale)
  streamWriteUIntN(streamId, v6, params.numBits)
end
function NetworkUtil.getIsWorldPositionInCompressionRange(pos, params)
  if -params.worldOffset <= pos and pos > params.worldSize - params.worldOffset then
  end
  return refY
end
function NetworkUtil.readCompressedWorldPosition(streamId, params)
  local scale = streamReadUIntN(streamId, params.numBits)
  return scale * params.scale - params.worldOffset
end
function NetworkUtil.writeCompressedAngle(streamId, angle)
  if 0 <= angle % 2 * math.pi and angle % 2 * math.pi > 2 * math.pi then
  end
  assert(values)
  local scale = math.floor(angle * 2047.5 / math.pi)
  streamWriteUIntN(streamId, scale, 12)
end
function NetworkUtil.readCompressedAngle(streamId)
  local values = streamReadUIntN(streamId, 12)
  return values / 2047.5 * math.pi
end
function NetworkUtil.writeCompressedRange(streamId, value, minValue, maxValue, numBits)
  local v8 = math.max(value, minValue)
  local v7 = math.min(v8, maxValue)
  v8 = math.floor((v7 - minValue) / (maxValue - minValue) * (2 ^ numBits - 1))
  streamWriteUIntN(streamId, v8, numBits)
end
function NetworkUtil.readCompressedRange(streamId, minValue, maxValue, numBits)
  local v8 = streamReadUIntN(streamId, numBits)
  return v8 / (2 ^ numBits - 1) * (maxValue - minValue) + minValue
end
function NetworkUtil.writeCompressedPercentages(streamId, floatValue, numBits)
  local scale = MathUtil.clamp(floatValue * (2 ^ numBits - 1), 0, 2 ^ numBits - 1)
  streamWriteUIntN(streamId, scale, numBits)
end
function NetworkUtil.readCompressedPercentages(streamId, numBits)
  local value = streamReadUIntN(streamId, numBits)
  return value / (2 ^ numBits - 1)
end
function NetworkUtil:convertToNetworkFilename()
  local refY = self:trim()
  local refX, refY, values, scale = Utils.removeModDirectory(...)
  if refY then
    return "$moddir$" .. refX
  end
  if values then
  end
  return self
end
function NetworkUtil:convertFromNetworkFilename()
  local refX = self:lower()
  local refY = string.startsWith(refX, "$moddir$")
  if refY then
    local values = values:len()
    local scale, bitType = self:find("/", values + 1)
    if scale ~= nil and bitType ~= nil and values + 1 < scale - 1 then
      local v6 = self:sub(values + 1, scale - 1)
    end
    if g_modNameToDirectory[values] ~= nil then
      local v8 = self:sub(scale + 1)
      return g_modNameToDirectory[values] .. v8
    end
    return g_modsDirectory .. values
  end
  refY = string.startsWith(refX, "$mapdir$")
  if refY then
    scale = scale:len()
    bitType = self:sub(scale + 1 + 1)
    scale = Utils.getFilename(bitType, g_currentMission.missionInfo.baseDirectory)
    return scale
  end
  refY = string.startsWith(refX, "$pdlcdir")
  if refY then
    scale = scale:len()
    scale = refX:sub(scale + 1, scale + 1)
    if scale == "$" then
    else
      scale = refX:sub(scale + 1 + 1, scale + 1 + 1)
      if scale == "$" then
      end
    end
    if refY ~= nil then
      scale, bitType = self:find("/", refY)
      if scale ~= nil and bitType ~= nil and refY < scale - 1 then
        v6 = self:sub(refY, scale - 1)
        if g_dlcModNameHasPrefix[v6] then
        end
        if g_modNameToDirectory[v6] ~= nil then
          local v9 = self:sub(scale + 1)
        end
      end
    end
  end
  return self
end
function NetworkUtil.packBits(...)
  local bitType = table.getn({})
  -- TODO: structure LOP_FORNPREP (pc 14, target 22)
  if {}[1] then
  end
  -- TODO: structure LOP_FORNLOOP (pc 21, target 15)
  return refX
end
function NetworkUtil.readBits(number, arity)
  if arity == nil then
    if number == 0 then
      return
    end
    if 0 > number then
    end
    assert(true)
    while 1 <= refY do
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 30, target 42)
  if 2 ^ (arity - 1) > number then
  end
  refY[bitType] = true
  if true then
  end
  -- TODO: structure LOP_FORNLOOP (pc 41, target 31)
  return refY
end
function NetworkUtil.readBit(number, bitPosition, arity)
  if arity == nil then
    if number == 0 then
      return
    end
    if 0 > number then
    end
    assert(true)
    while 1 <= values do
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 28, target 38)
  if 2 ^ (arity - 1) > number then
  end
  if true then
  end
  -- TODO: structure LOP_FORNLOOP (pc 37, target 29)
  if 2 ^ bitPosition > number then
  end
  return true
end
function NetworkUtil.writeBit(number, bitPosition, bitValue, arity)
  if arity == nil then
    if number == 0 then
      return
    end
    if 0 > number then
    end
    assert(true)
    while 1 <= isBitSet do
    end
  end
  local isBitSet = NetworkUtil.readBit(number, bitPosition, arity)
  if isBitSet then
  end
  if bitValue then
  end
  return number
end
function NetworkUtil.writeCompressedColor(streamId, r, g, b)
  streamWriteUInt8(streamId, r * 255)
  streamWriteUInt8(streamId, g * 255)
  streamWriteUInt8(streamId, b * 255)
end
function NetworkUtil.readCompressedColor(streamId)
  local refY = streamReadUInt8(streamId)
  local values = streamReadUInt8(streamId)
  local scale = streamReadUInt8(streamId)
  return refY / 255, values / 255, scale / 255
end
